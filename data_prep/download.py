"""
MLB Team Stats Downloader for Baseball Reference
Downloads 2025 batting statistics CSV for all MLB teams
Uses Selenium with headless Firefox to bypass anti-scraping measures
"""

from selenium import webdriver
from selenium.webdriver.firefox.options import Options
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from bs4 import BeautifulSoup
import time
import os
import hashlib
from pathlib import Path

# MLB Team codes for Baseball Reference
MLB_TEAMS = {
    'ARI': 'Arizona Diamondbacks',
    'ATH': 'Oakland Athletics',
    'ATL': 'Atlanta Braves',
    'BAL': 'Baltimore Orioles',
    'BOS': 'Boston Red Sox',
    'CHC': 'Chicago Cubs',
    'CHW': 'Chicago White Sox',
    'CIN': 'Cincinnati Reds',
    'CLE': 'Cleveland Guardians',
    'COL': 'Colorado Rockies',
    'DET': 'Detroit Tigers',
    'HOU': 'Houston Astros',
    'KCR': 'Kansas City Royals',
    'LAA': 'Los Angeles Angels',
    'LAD': 'Los Angeles Dodgers',
    'MIA': 'Miami Marlins',
    'MIL': 'Milwaukee Brewers',
    'MIN': 'Minnesota Twins',
    'NYM': 'New York Mets',
    'NYY': 'New York Yankees',
    'PHI': 'Philadelphia Phillies',
    'PIT': 'Pittsburgh Pirates',
    'SDP': 'San Diego Padres',
    'SEA': 'Seattle Mariners',
    'SFG': 'San Francisco Giants',
    'STL': 'St. Louis Cardinals',
    'TBR': 'Tampa Bay Rays',
    'TEX': 'Texas Rangers',
    'TOR': 'Toronto Blue Jays',
    'WSN': 'Washington Nationals'
}

YEAR = 2025
BASE_URL = "https://www.baseball-reference.com/teams/{team}/{year}.shtml"
UNIFORMS_URL = "https://www.baseball-reference.com/leagues/majors/{year}-uniform-numbers.shtml"
# When the script runs from data_prep/, make sure team_data refers to the repo root's team_data
from pathlib import Path
REPO_ROOT = Path(__file__).resolve().parent.parent
OUTPUT_DIR = str(REPO_ROOT / 'team_data')


def extract_table_from_html(html_content, table_id='players_standard_batting'):
    """
    Extract table data from Baseball Reference pages.
    The table can be directly in the HTML or in comments.
    """
    soup = BeautifulSoup(html_content, 'html.parser')
    
    # First try to find the table directly in the HTML
    table = soup.find('table', {'id': table_id})
    
    if table:
        return table
    
    # If not found directly, check in HTML comments
    from bs4 import Comment
    comments = soup.find_all(string=lambda text: isinstance(text, Comment) and table_id in str(text))
    
    for comment in comments:
        # Parse the comment as HTML
        comment_soup = BeautifulSoup(str(comment), 'html.parser')
        table = comment_soup.find('table', {'id': table_id})
        
        if table:
            return table
    
    return None


def table_to_csv(table):
    """
    Convert HTML table to CSV format.
    Uses data-stat attributes for cleaner column names.
    """
    if not table:
        return None
    
    csv_lines = []
    
    # Get headers from data-stat attributes
    headers = []
    thead = table.find('thead')
    if thead:
        # Get the last row of headers (main column names)
        header_rows = thead.find_all('tr')
        if header_rows:
            # Find the row with the most th elements (the actual column headers)
            last_header_row = max(header_rows, key=lambda row: len(row.find_all('th')))
            for th in last_header_row.find_all('th'):
                # Prefer data-stat attribute over text
                header = th.get('data-stat', th.get_text(strip=True))
                headers.append(header)
    
    if headers:
        csv_lines.append(','.join(headers))
    
    # Get data rows
    tbody = table.find('tbody')
    if tbody:
        for tr in tbody.find_all('tr'):
            # Skip header separator rows
            if 'thead' in tr.get('class', []):
                continue
            
            row_data = []
            for cell in tr.find_all(['th', 'td']):
                # Get the text content, clean it up
                cell_text = cell.get_text(strip=True)
                # Handle commas and quotes in data
                if ',' in cell_text or '"' in cell_text:
                    cell_text = f'"{cell_text.replace(chr(34), chr(34)+chr(34))}"'
                row_data.append(cell_text)
            
            if row_data:
                csv_lines.append(','.join(row_data))
    
    return '\n'.join(csv_lines)


def calculate_content_hash(content):
    """
    Calculate SHA256 hash of content string.
    """
    return hashlib.sha256(content.encode('utf-8')).hexdigest()


def get_existing_file_hash(filepath):
    """
    Get the hash of an existing CSV file if it exists.
    """
    if not os.path.exists(filepath):
        return None
    
    try:
        with open(filepath, 'r', encoding='utf-8-sig') as f:
            content = f.read()
        return calculate_content_hash(content)
    except Exception as e:
        print(f"  Warning: Could not read existing file for comparison: {e}")
        return None


def download_team_stats(driver, team_code, team_name, year=YEAR):
    """
    Download batting statistics for a specific team using Selenium.
    Skips download if content hash matches existing file.
    """
    url = BASE_URL.format(team=team_code, year=year)
    output_file = os.path.join(OUTPUT_DIR, f"{team_code}_{year}_batting.csv")
    
    print(f"Checking {team_name} ({team_code})...")
    
    try:
        # Navigate to the page
        driver.get(url)
        
        # Wait for the table to load
        wait = WebDriverWait(driver, 15)
        table_element = wait.until(
            EC.presence_of_element_located((By.ID, 'players_standard_batting'))
        )
        
        # Give it a moment to fully render
        time.sleep(2)
        
        # Get the page source with proper encoding
        page_source = driver.page_source
        
        # Parse with BeautifulSoup, explicitly using UTF-8
        table = extract_table_from_html(page_source, 'players_standard_batting')
        
        if table:
            csv_content = table_to_csv(table)
            
            if csv_content:
                # Calculate hash of new content
                new_hash = calculate_content_hash(csv_content)
                
                # Check if file exists and compare hashes
                existing_hash = get_existing_file_hash(output_file)
                
                if existing_hash == new_hash:
                    print(f"  ↷ Skipped (unchanged) - {output_file}")
                    return True
                
                # Save to file with UTF-8 encoding and BOM for Excel compatibility
                with open(output_file, 'w', encoding='utf-8-sig', newline='') as f:
                    f.write(csv_content)
                
                if existing_hash:
                    print(f"  ✓ Updated {output_file}")
                else:
                    print(f"  ✓ Saved to {output_file}")
                return True
            else:
                print(f"  ✗ Could not convert table to CSV")
                return False
        else:
            print(f"  ✗ Could not find batting table")
            return False
            
    except Exception as e:
        print(f"  ✗ Error: {e}")
        return False


def download_uniform_numbers(driver, year=YEAR):
    """
    Download uniform numbers for all teams and return a dict mapping
    (player_name, team_code) -> jersey_number
    """
    url = UNIFORMS_URL.format(year=year)
    print(f"\nDownloading uniform numbers from {url}...")
    
    try:
        driver.get(url)
        time.sleep(3)  # Give it time to load
        
        page_source = driver.page_source
        soup = BeautifulSoup(page_source, 'html.parser')
        
        # Dictionary to store jersey numbers: (player_name, team_code) -> number
        jersey_dict = {}
        
        # Find all tables with jersey numbers
        # Each table has a caption with the number, and td elements with player (TEAM)
        tables = soup.find_all('table', {'class': 'no_columns'})
        
        for table in tables:
            # Get the jersey number from caption
            caption = table.find('caption')
            if not caption:
                continue
            
            jersey_num = caption.get_text(strip=True)
            
            # Get all players with this number
            td_elements = table.find_all('td')
            for td in td_elements:
                text = td.get_text(strip=True)
                # Text format is "Player Name (TEAM)"
                if '(' in text and ')' in text:
                    # Extract player name and team
                    player_name = text[:text.rfind('(')].strip()
                    team_code = text[text.rfind('(')+1:text.rfind(')')].strip()
                    
                    # Store in dictionary
                    jersey_dict[(player_name, team_code)] = jersey_num
        
        print(f"  ✓ Downloaded {len(jersey_dict)} jersey number assignments")
        return jersey_dict
        
    except Exception as e:
        print(f"  ✗ Error downloading uniform numbers: {e}")
        return {}


def add_jersey_numbers_to_csv(csv_file, team_code, jersey_dict):
    """
    Add a j_num column to a team's CSV file with jersey numbers.
    """
    try:
        # Read the CSV
        with open(csv_file, 'r', encoding='utf-8-sig') as f:
            lines = f.readlines()
        
        if not lines:
            return False
        
        # Parse header
        header = lines[0].strip()
        
        # Check if j_num already exists
        if ',j_num' in header or header.endswith('j_num'):
            print(f"    j_num column already exists in {csv_file}")
            return True
        
        # Add j_num to header
        new_header = header + ',j_num\n'
        new_lines = [new_header]
        
        # Process each data row
        for line in lines[1:]:
            if not line.strip():
                continue
            
            # Split the CSV line (handle quoted fields)
            import csv
            import io
            reader = csv.reader(io.StringIO(line))
            row = next(reader)
            
            # Get player name (usually first column after rank)
            # The 'player' column typically has the name
            player_name = ''
            for cell in row:
                # Clean up player name (remove * and # symbols)
                cleaned = cell.strip().replace('*', '').replace('#', '')
                if cleaned and not cleaned.isdigit():
                    player_name = cleaned
                    break
            
            # Look up jersey number
            jersey_num = jersey_dict.get((player_name, team_code), '')
            
            # Add jersey number to the end of the row
            new_line = line.strip() + f',{jersey_num}\n'
            new_lines.append(new_line)
        
        # Write back to file
        with open(csv_file, 'w', encoding='utf-8-sig') as f:
            f.writelines(new_lines)
        
        return True
        
    except Exception as e:
        print(f"    ✗ Error adding jersey numbers to {csv_file}: {e}")
        return False


def main():
    """
    Main function to download all team statistics.
    """
    print(f"MLB Team Stats Downloader - {YEAR} Season")
    print("=" * 50)
    
    # Create output directory
    Path(OUTPUT_DIR).mkdir(exist_ok=True)
    print(f"Output directory: {OUTPUT_DIR}/\n")
    
    # Setup Firefox with headless mode
    print("Setting up headless Firefox browser...")
    firefox_options = Options()
    firefox_options.add_argument('--headless')  # Run in headless mode
    firefox_options.add_argument('--disable-blink-features=AutomationControlled')
    firefox_options.set_preference('general.useragent.override', 
                                   'Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:109.0) Gecko/20100101 Firefox/115.0')
    
    # Initialize the driver
    try:
        driver = webdriver.Firefox(options=firefox_options)
        print("✓ Firefox browser started\n")
    except Exception as e:
        print(f"✗ Error starting Firefox: {e}")
        print("Make sure Firefox and geckodriver are installed.")
        print("Install geckodriver: https://github.com/mozilla/geckodriver/releases")
        return
    
    try:
        successful = 0
        failed = 0
        skipped = 0
        updated = 0
        new_files = 0
        
        for team_code, team_name in MLB_TEAMS.items():
            output_file = os.path.join(OUTPUT_DIR, f"{team_code}_{YEAR}_batting.csv")
            file_existed = os.path.exists(output_file)
            
            result = download_team_stats(driver, team_code, team_name)
            
            if result:
                successful += 1
                # Check if it was actually written (not skipped)
                if os.path.exists(output_file):
                    # Read the file to check if it was just written
                    file_mtime = os.path.getmtime(output_file)
                    current_time = time.time()
                    just_written = (current_time - file_mtime) < 5  # Written in last 5 seconds
                    
                    if "Skipped" in str(result) or not just_written and file_existed:
                        skipped += 1
                    elif file_existed:
                        updated += 1
                    else:
                        new_files += 1
            else:
                failed += 1
            
            # Be polite to the server - add a delay between requests
            time.sleep(2)
        
        # Download uniform numbers and add to all CSV files
        print("\n" + "=" * 50)
        jersey_dict = download_uniform_numbers(driver, YEAR)
        
        if jersey_dict:
            print("\nAdding jersey numbers to CSV files...")
            for team_code in MLB_TEAMS.keys():
                output_file = os.path.join(OUTPUT_DIR, f"{team_code}_{YEAR}_batting.csv")
                if os.path.exists(output_file):
                    print(f"  Processing {team_code}...")
                    add_jersey_numbers_to_csv(output_file, team_code, jersey_dict)
        
        print("\n" + "=" * 50)
        print(f"Download complete!")
        print(f"Total: {len(MLB_TEAMS)} teams")
        print(f"Successful: {successful}")
        print(f"Failed: {failed}")
        if skipped > 0:
            print(f"Skipped (unchanged): {skipped}")
        
    finally:
        # Always close the browser
        driver.quit()
        print("Browser closed.")


if __name__ == "__main__":
    main()
