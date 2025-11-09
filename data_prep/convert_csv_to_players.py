#!/usr/bin/env python3
"""
Convert team batting CSV files to C code format for players.c
Also generates World Series 2024 rosters (LAD vs NYY)
"""

import csv
import re
import os
from pathlib import Path

# Determine repository root (one level up from data_prep)
REPO_ROOT = Path(__file__).resolve().parent.parent
TEAM_DATA_DIR = REPO_ROOT / 'team_data'

# Team codes for full roster
ALL_STAR_TEAMS = ['NYY', 'NYM', 'LAD', 'BOS', 'BAL', 'CHC']

# Team codes for World Series 2024
WORLD_SERIES_TEAMS = ['LAD', 'NYY']

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
    # Keep the team codes as-is (NYY, NYM, LAD, etc.)
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


def generate_c_code(all_players, teams_to_process, max_per_position=18, header_comment="162 all-star players with balanced team distribution"):
    """Generate C code for initialize_roster function"""
    lines = []
    lines.append("/*")
    lines.append(" * Player Roster Data")
    lines.append(f" * {header_comment}")
    lines.append(" */")
    lines.append("")
    lines.append('#include "baseball.h"')
    lines.append("")
    lines.append("Player player_roster[MAX_PLAYERS];")
    lines.append("")
    lines.append("static int idx=0;")
    lines.append("static void P(char*n,int y,char*t,int a,char h,int p,int j){")
    lines.append("strcpy(player_roster[idx].name,n);player_roster[idx].year=y;strcpy(player_roster[idx].team,t);")
    lines.append("player_roster[idx].batting_avg=a;player_roster[idx].hand=h;player_roster[idx].position=p;")
    lines.append("player_roster[idx++].j_num=j;}")
    lines.append("")
    lines.append("void initialize_roster(void) {")
    lines.append("idx=0;")
    
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
    
    # Hand mapping to character
    hand_map = {
        'HAND_LEFT': 'L',
        'HAND_RIGHT': 'R',
        'HAND_BOTH': 'B'
    }
    
    # Generate code for each position group
    for pos_val in sorted(position_groups.keys()):
        players = position_groups[pos_val]
        pos_name = position_names.get(pos_val, "Unknown")
        
        # Select top 3 from each team for this position
        selected_players = []
        teams_processed = set()
        
        for team_code in teams_to_process:
            team_players = [p for p in players if p['team'] == team_code]
            # Sort by batting average and take top 3
            team_players.sort(key=lambda p: -p['batting_avg'])
            selected_players.extend(team_players[:3])
            teams_processed.add(team_code)
        
        # Sort final selection by batting average for better organization
        selected_players.sort(key=lambda p: -p['batting_avg'])
        players = selected_players[:max_per_position]
        
        if players:  # Only add comment if there are players
            lines.append(f"// {pos_name}")
        
        for player in players:
            hand_char = hand_map.get(player['hand'], 'R')
            lines.append(f'P("{player["name"]}",{player["year"]},"{player["team"]}",{player["batting_avg"]},\'{hand_char}\',{player["position"]},{player["j_num"]});')
    
    lines.append("}")
    
    return '\n'.join(lines)


def generate_markdown_table(all_players, teams_to_process, max_per_position=18, title="BBC Baseball Player Roster", subtitle="Generated from team CSV data (Top 3 players per team per position)"):
    """Generate markdown table with player information"""
    lines = []
    lines.append(f"# {title}")
    lines.append("")
    lines.append(subtitle)
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
    
    # Track total player count
    total_player_count = 0
    
    # Generate table rows for each position group
    for pos_val in sorted(position_groups.keys()):
        players = position_groups[pos_val]
        pos_name = position_names.get(pos_val, "Unknown")
        
        # Select top 3 from each team for this position
        selected_players = []
        for team_code in teams_to_process:
            team_players = [p for p in players if p['team'] == team_code]
            team_players.sort(key=lambda p: -p['batting_avg'])
            selected_players.extend(team_players[:3])
        
        # Sort final selection by batting average
        selected_players.sort(key=lambda p: -p['batting_avg'])
        players = selected_players[:max_per_position]
        
        # Add to total count
        total_player_count += len(players)
        
        # Add position header
        lines.append(f"| **{pos_name}** | | | | | |")
        
        for player in players:
            # Format batting average as .XXX
            ba_formatted = f".{player['batting_avg']:03d}"
            hand_str = player['hand'].replace('HAND_', '')
            
            lines.append(f"| {player['name']} | {player['j_num']} | {player['team']} | {ba_formatted} | {hand_str} | {pos_name} |")
    
    lines.append("")
    lines.append(f"**Total Players: {total_player_count}**")
    lines.append("")
    
    return '\n'.join(lines)


def process_roster(teams_to_process, output_c_file, output_md_file, max_per_position, 
                   header_comment, md_title, md_subtitle):
    """Process a roster configuration and generate C and markdown files"""
    all_players = []
    
    # Process each team
    for team_code in teams_to_process:
        csv_filename = f'{team_code}_2025_batting.csv'
        # Use the team_data directory located at the repository root
        csv_path = TEAM_DATA_DIR / csv_filename
        
        if not csv_path.exists():
            print(f"Warning: {csv_path} not found, skipping...")
            continue
        
        print(f"Processing {team_code}...")
        players = read_csv_and_extract_players(str(csv_path), team_code)
        print(f"  Found {len(players)} players")
        all_players.extend(players)
    
    print(f"Total players collected: {len(all_players)}")
    
    # Generate C code
    c_code = generate_c_code(all_players, teams_to_process, max_per_position, header_comment)
    
    # Ensure output paths are written to the repository root
    output_c_path = REPO_ROOT / output_c_file
    with open(output_c_path, 'w', encoding='utf-8') as f:
        f.write(c_code)
    
    print(f"Generated {output_c_path} successfully!")
    
    # Generate markdown table
    markdown_content = generate_markdown_table(all_players, teams_to_process, max_per_position, md_title, md_subtitle)
    
    # Write to markdown file at repository root
    output_md_path = REPO_ROOT / output_md_file
    with open(output_md_path, 'w', encoding='utf-8') as f:
        f.write(markdown_content)
    
    print(f"Generated {output_md_path} successfully!")
    print()


def main():
    """Main function to process all rosters"""
    print("=" * 60)
    print("BBC BASEBALL ROSTER GENERATOR")
    print("=" * 60)
    print()
    
    # Generate All-Star roster (6 teams, 18 players per position)
    print("Generating All-Star Roster (6 teams)...")
    print("-" * 60)
    process_roster(
        teams_to_process=ALL_STAR_TEAMS,
        output_c_file='players.c',
        output_md_file='player_roster.md',
        max_per_position=18,
        header_comment="162 all-star players with balanced team distribution",
        md_title="BBC Baseball Player Roster",
        md_subtitle="Generated from team CSV data (Top 3 players per team per position)"
    )
    
    # Generate World Series 2024 roster (2 teams, 6 players per position)
    print("Generating World Series 2024 Roster (LAD vs NYY)...")
    print("-" * 60)
    process_roster(
        teams_to_process=WORLD_SERIES_TEAMS,
        output_c_file='World_Series_2024_players.c',
        output_md_file='world_series_2024_roster.md',
        max_per_position=6,
        header_comment="World Series 2024 - LAD vs NYY (using 2025 batting data)\nTop 3 players per team per position",
        md_title="World Series 2024 Player Roster",
        md_subtitle="LAD vs NYY (using 2025 batting data)\nTop 3 players per team per position"
    )
    
    print("=" * 60)
    print("ALL ROSTERS GENERATED SUCCESSFULLY!")
    print("=" * 60)


if __name__ == '__main__':
    main()
