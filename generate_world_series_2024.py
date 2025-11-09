#!/usr/bin/env python3
"""
Generate World Series 2024 players.c with LAD and NYY rosters only
Uses 2025 batting data (data limitation)
Top 3 players per team per position
"""

import csv
import re
import os

# World Series 2024 teams
TEAMS_TO_PROCESS = ['LAD', 'NYY']

# Position mapping from CSV to C enum values
POSITION_MAP = {
    'C': ('POS_CATCHER', 70),
    '1B': ('POS_FIRST_BASE', 0),
    '2B': ('POS_SECOND_BASE', 10),
    '3B': ('POS_THIRD_BASE', 20),
    'SS': ('POS_SHORTSTOP', 30),
    'LF': ('POS_LEFT_FIELD', 40),
    'CF': ('POS_CENTER_FIELD', 50),
    'RF': ('POS_RIGHT_FIELD', 60),
    'OF': ('POS_CENTER_FIELD', 50),  # Default outfield to center
    'DH': ('POS_FIRST_BASE', 0),     # Default DH to first base
    'P': ('POS_PITCHER', 80),
    'UT': ('POS_SECOND_BASE', 10),   # Utility to second base
    'IF': ('POS_SECOND_BASE', 10),   # Infield to second base
}


def extract_year_from_filename(filename):
    """Extract year from filename like 'NYY_2025_batting.csv'"""
    match = re.search(r'_(\d{4})_', filename)
    if match:
        return int(match.group(1))
    return 2025  # Default


def clean_player_name(name):
    """Remove asterisks, dashes, question marks, and other special characters from player name"""
    # Remove common suffixes and special characters
    cleaned = re.sub(r'[*\-?#]+$', '', name)
    cleaned = cleaned.strip()
    # Keep full name, uppercase
    return cleaned.upper()


def determine_handedness(name):
    """Determine batting hand - left if asterisk present, otherwise right"""
    if '*' in name:
        return 'HAND_LEFT'
    elif '#' in name:
        return 'HAND_BOTH'
    else:
        return 'HAND_RIGHT'


def parse_position(team_position_str):
    """Parse position from team_position field (e.g., 'C', '1B', 'SS')"""
    if not team_position_str or team_position_str.strip() == '':
        return ('POS_FIRST_BASE', 0)  # Default
    
    # Extract primary position (first one listed)
    team_position_str = team_position_str.strip().upper()
    
    # Try direct match first
    for pos_key in POSITION_MAP:
        if team_position_str.startswith(pos_key):
            return POSITION_MAP[pos_key]
    
    # Default to first base
    return ('POS_FIRST_BASE', 0)


def get_team_abbreviation(team_code):
    """Convert team code to 3-letter abbreviation"""
    # Keep the team codes as-is (NYY, LAD)
    return team_code


def read_csv_and_extract_players(csv_path, team_code):
    """Read CSV file and extract player data"""
    players = []
    year = extract_year_from_filename(csv_path)
    team_name = get_team_abbreviation(team_code)
    
    with open(csv_path, 'r', encoding='utf-8') as f:
        reader = csv.DictReader(f)
        
        for row in reader:
            # Skip if no batting average or it's empty
            batting_avg_str = row.get('b_batting_avg', '').strip()
            if not batting_avg_str:
                continue
            
            try:
                # Convert batting average from .XXX to integer XXX
                batting_avg_float = float(batting_avg_str)
                batting_avg_int = int(batting_avg_float * 1000)
            except ValueError:
                continue
            
            # Skip pitchers (unless they have good batting averages)
            team_position = row.get('team_position', '').strip()
            if team_position == 'P':
                continue
            
            name_display = row.get('name_display', '').strip()
            if not name_display:
                continue
            
            # Get jersey number
            j_num_str = row.get('j_num', '').strip()
            try:
                j_num = int(j_num_str) if j_num_str else 0
            except ValueError:
                j_num = 0
            
            # Determine position
            pos_enum, pos_value = parse_position(team_position)
            
            player = {
                'name': clean_player_name(name_display),
                'year': year,
                'team': team_name,
                'batting_avg': batting_avg_int,
                'hand': determine_handedness(name_display),
                'position': pos_enum,
                'pos_value': pos_value,
                'j_num': j_num
            }
            
            players.append(player)
    
    # Sort by position value to group them properly
    players.sort(key=lambda p: (p['pos_value'], -p['batting_avg']))
    
    return players


def generate_c_code(all_players, max_per_position=6):
    """Generate C code for initialize_roster function"""
    lines = []
    lines.append("/*")
    lines.append(" * World Series 2024 Player Roster Data")
    lines.append(" * LAD vs NYY (using 2025 batting data)")
    lines.append(f" * Top 3 players per team per position ({max_per_position} total per position)")
    lines.append(" */")
    lines.append("")
    lines.append('#include "baseball.h"')
    lines.append("")
    lines.append("Player player_roster[MAX_PLAYERS];")
    lines.append("")
    lines.append("void initialize_roster(void) {")
    lines.append("    int i = 0;")
    lines.append("    ")
    
    # Group players by position AND team
    position_groups = {}
    for player in all_players:
        pos_val = player['pos_value']
        if pos_val not in position_groups:
            position_groups[pos_val] = []
        position_groups[pos_val].append(player)
    
    # Position names for comments
    position_names = {
        0: "First Base",
        10: "Second Base",
        20: "Third Base",
        30: "Shortstop",
        40: "Left Field",
        50: "Center Field",
        60: "Right Field",
        70: "Catcher",
        80: "Pitcher"
    }
    
    # Generate code for each position group
    for pos_val in sorted(position_groups.keys()):
        players = position_groups[pos_val]
        pos_name = position_names.get(pos_val, "Unknown")
        
        # Select top 3 from each team for this position
        selected_players = []
        teams_processed = set()
        
        for team_code in TEAMS_TO_PROCESS:
            team_players = [p for p in players if p['team'] == team_code]
            # Sort by batting average and take top 3
            team_players.sort(key=lambda p: -p['batting_avg'])
            selected_players.extend(team_players[:3])
            teams_processed.add(team_code)
        
        # Sort final selection by batting average for better organization
        selected_players.sort(key=lambda p: -p['batting_avg'])
        players = selected_players[:max_per_position]
        
        lines.append(f"    // {pos_name} (positions {pos_val}-{pos_val+9})")
        
        for player in players:
            # Line 1: strcpy_s for name
            lines.append(f'    strcpy_s(player_roster[i].name, sizeof(player_roster[i].name), "{player["name"]}");')
            
            # Line 2: year and team
            lines.append(f'    player_roster[i].year = {player["year"]}; strcpy_s(player_roster[i].team, sizeof(player_roster[i].team), "{player["team"]}");')
            
            # Line 3: batting_avg, hand, position, and j_num with increment
            lines.append(f'    player_roster[i].batting_avg = {player["batting_avg"]}; player_roster[i].hand = {player["hand"]}; player_roster[i].position = {player["position"]}; player_roster[i++].j_num = {player["j_num"]};')
            
            lines.append("    ")
    
    lines.append("}")
    
    return '\n'.join(lines)


def generate_markdown_table(all_players, max_per_position=6):
    """Generate markdown table with player information"""
    lines = []
    lines.append("# World Series 2024 Player Roster")
    lines.append("")
    lines.append("LAD vs NYY (using 2025 batting data)")
    lines.append("Top 3 players per team per position")
    lines.append("")
    lines.append("| Name | Jersey # | Team | Batting Avg | Hand | Position |")
    lines.append("|------|----------|------|-------------|------|----------|")
    
    # Group players by position
    position_groups = {}
    for player in all_players:
        pos_val = player['pos_value']
        if pos_val not in position_groups:
            position_groups[pos_val] = []
        position_groups[pos_val].append(player)
    
    # Position names for headers
    position_names = {
        0: "First Base",
        10: "Second Base",
        20: "Third Base",
        30: "Shortstop",
        40: "Left Field",
        50: "Center Field",
        60: "Right Field",
        70: "Catcher",
        80: "Pitcher"
    }
    
    # Generate table rows for each position group
    for pos_val in sorted(position_groups.keys()):
        players = position_groups[pos_val]
        pos_name = position_names.get(pos_val, "Unknown")
        
        # Select top 3 from each team for this position
        selected_players = []
        for team_code in TEAMS_TO_PROCESS:
            team_players = [p for p in players if p['team'] == team_code]
            team_players.sort(key=lambda p: -p['batting_avg'])
            selected_players.extend(team_players[:3])
        
        # Sort final selection by batting average
        selected_players.sort(key=lambda p: -p['batting_avg'])
        players = selected_players[:max_per_position]
        
        # Add position header
        lines.append(f"| **{pos_name}** | | | | | |")
        
        for player in players:
            # Format batting average as .XXX
            ba_formatted = f".{player['batting_avg']:03d}"
            hand_str = player['hand'].replace('HAND_', '')
            
            lines.append(f"| {player['name']} | {player['j_num']} | {player['team']} | {ba_formatted} | {hand_str} | {pos_name} |")
    
    lines.append("")
    lines.append(f"**Total Players: {sum(len(position_groups.get(pos, [])[:max_per_position]) for pos in position_groups)}**")
    lines.append("")
    
    return '\n'.join(lines)


def main():
    """Main function to process World Series teams and generate World_Series_2024_players.c"""
    all_players = []
    
    # Process each team
    for team_code in TEAMS_TO_PROCESS:
        csv_filename = f'{team_code}_2025_batting.csv'
        csv_path = os.path.join('team_data', csv_filename)
        
        if not os.path.exists(csv_path):
            print(f"Warning: {csv_path} not found, skipping...")
            continue
        
        print(f"Processing {team_code}...")
        players = read_csv_and_extract_players(csv_path, team_code)
        print(f"  Found {len(players)} players")
        all_players.extend(players)
    
    print(f"\nTotal players: {len(all_players)}")
    
    # Generate C code with 6 players per position (top 3 from each of 2 teams)
    c_code = generate_c_code(all_players, max_per_position=6)
    
    # Write to World_Series_2024_players.c
    output_path = 'World_Series_2024_players.c'
    with open(output_path, 'w', encoding='utf-8') as f:
        f.write(c_code)
    
    print(f"\nGenerated {output_path} successfully!")
    
    # Generate markdown table with 6 players per position
    markdown_content = generate_markdown_table(all_players, max_per_position=6)
    
    # Write to markdown file
    markdown_path = 'world_series_2024_roster.md'
    with open(markdown_path, 'w', encoding='utf-8') as f:
        f.write(markdown_content)
    
    print(f"Generated {markdown_path} successfully!")


if __name__ == '__main__':
    main()
