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
OUTPUT_DIR = "team_data"


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


def download_team_stats(driver, team_code, team_name, year=YEAR):
    """
    Download batting statistics for a specific team using Selenium.
    """
    url = BASE_URL.format(team=team_code, year=year)
    
    print(f"Downloading {team_name} ({team_code})...")
    
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
                # Save to file with UTF-8 encoding and BOM for Excel compatibility
                output_file = os.path.join(OUTPUT_DIR, f"{team_code}_{year}_batting.csv")
                with open(output_file, 'w', encoding='utf-8-sig', newline='') as f:
                    f.write(csv_content)
                
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
        
        for team_code, team_name in MLB_TEAMS.items():
            if download_team_stats(driver, team_code, team_name):
                successful += 1
            else:
                failed += 1
            
            # Be polite to the server - add a delay between requests
            time.sleep(2)
        
        print("\n" + "=" * 50)
        print(f"Download complete!")
        print(f"Successful: {successful}/{len(MLB_TEAMS)}")
        print(f"Failed: {failed}/{len(MLB_TEAMS)}")
        
    finally:
        # Always close the browser
        driver.quit()
        print("Browser closed.")


if __name__ == "__main__":
    main()
