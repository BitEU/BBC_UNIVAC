# BBC Baseball Simulation and Demonstrator

A modern C implementation of Paul R. Burgeson's 1961 baseball simulation game, originally written for the IBM 1620 computer. This version has been rewritten for Windows console (conhost terminal) and compiles with Microsoft Visual C++ (MSVC).

## About the Original Game

The BBC (Burgeson Baseball Computer) Baseball Simulation was created in 1961 to demonstrate the simulation capabilities of early computers. The program allows a human player to compete against the computer by selecting all-star baseball teams from a roster of 90 legendary players, each represented by their best season statistics.

**Original Author**: Paul R. Burgeson, Youngstown, Ohio  
**Original Date**: January 1961  
**Original Platform**: IBM 1620 (20K memory)  
**Original Language**: Machine code

## Features

- **90 All-Star Players**: Historical baseball legends from 1884-1953
- **Full Game Simulation**: Complete 9-inning games (or more if tied)
- **Realistic Baseball Mechanics**:
  - Singles, doubles, triples, home runs
  - Ground outs, fly outs, line outs, strikeouts
  - Walks, errors, fielder's choices
  - Double plays, triple plays
  - Base stealing
  - Sacrifice flies
  - Runner advancement

- **Random Number Generation**: Two separate RNG streams initialized by date/time input
- **Batting Averages**: Each player's historical batting average affects hit probability
- **Handedness**: Left, right, and switch hitters represented

## Player Roster

The game includes 90 all-star players organized by position:

### First Base
Trosky, Foxx, Benson, Mize, Gehrig, Anson, Terry, York, Sisler, Brouthers

### Second Base
Lajoie, E Collins, C Burg, Mack, Gordon, Lazzeri, Frisch, Hornsby, Gehringer, Robinson

### Third Base
Keltner, J Collins, J Burg, Baker, Hack, Groh, Traynor, Kell, McGraw, Kamm

### Shortstop
Boudreau, Sewell, Crosetti, Cronin, Tumblin, Jennings, Wagner, Appling, Vaughan, Travis

### Left Field
P Waner, Radcliff, Medwick, Ruth, Simmons, Heilmann, Duffy, Musial, Wheat, Williams

### Center Field
DiMaggio, Reiser, Keller, Averill, Speaker, Jackson, Cobb, Rice, Henrich, O Rourke

### Right Field
L Waner, Burkett, Herman, Crawford, Hamilton, Greenberg, O Doul, Delahanty, Cuyler, Ott

### Catcher
Hayes, Cochrane, Danning, Dickey, Hartnett, Berra, M Burg, Lombardi, Hegan, Kelly

### Pitcher
Radbourne, Grove, Feller, Spahn, D Dean, Young, Newhouser, Johnson, Hubbell, Ruffing

## System Requirements

- **Operating System**: Windows 10 or later
- **Compiler**: Microsoft Visual C++ (MSVC) - part of Visual Studio 2019 or later
- **Console**: Windows Command Prompt or PowerShell

## Building the Game

### Prerequisites

You need to have Microsoft Visual C++ compiler installed. You can get it through:
- **Visual Studio 2022** (Community Edition is free)
- **Visual Studio 2019**
- **Build Tools for Visual Studio** (command-line only, smaller download)

### Compilation Steps

#### Option 1: Using the Build Script (Easiest)

1. Open "Developer Command Prompt for VS 2022" (or your VS version)
2. Navigate to the source directory:
   ```
   cd path\to\baseball
   ```
3. Run the build script:
   ```
   build.bat
   ```

#### Option 2: Manual Compilation

Open "Developer Command Prompt for VS 2022" and run:

```batch
cl /W4 /O2 /Fe:baseball.exe baseball.c players.c /link /SUBSYSTEM:CONSOLE
```

**Compiler flags explained**:
- `/W4` - Warning level 4 (high)
- `/O2` - Optimize for speed
- `/Fe:baseball.exe` - Output executable name
- `/link /SUBSYSTEM:CONSOLE` - Console application

### Alternative: Using Visual Studio IDE

1. Create a new "Console App" project
2. Add all `.c` and `.h` files to the project
3. Build -> Build Solution (F7)

## Running the Game

Simply run the executable:

```
baseball.exe
```

Or double-click `baseball.exe` in Windows Explorer.

## How to Play

### 1. Game Initialization

When you start the game, you'll be prompted for:
- **Today's Date**: Enter any format (e.g., "111" or "11/09/2024")
- **Current Time**: Enter any format (e.g., "343" or "3:43")

These inputs seed the random number generators to ensure different games each time.

### 2. Team Selection

**Visiting Team (You)**: Select 9 players in batting order
- Type each player's name and press Enter
- Names are case-insensitive
- Partial names that match exactly are accepted
- If you enter an invalid name, you'll see "NON-VALID PLAYER. RETRY."

**Example**:
```
>RUTH
>CROSETTI
>HENRICH
>HEGAN
>TROSKY
>GORDON
>WAGNER
>WILLIAMS
>SPEAKER
```

**Home Team (Computer)**: The computer randomly selects 9 players from the remaining 81 players.

### 3. Game Play

The game automatically simulates each at-bat with play-by-play commentary:

```
RUTH UP  DOUBLE OVER THIRD
CROSETTI UP  LONG FLY TO L CENTR RUNNER ON 3RD
HENRICH UP  SINGLE OVER FIRST RUNNER SCORES
```

### 4. Game End

After 9 innings (or more if tied), the final score is displayed:

```
GAME COMPLETED. TOTALS

VISITORS        16  23  01
HOMETEAM        14  21  01
```

Format: Runs, Hits, Errors

## Game Mechanics

### Hit Probability

Base probability = (Batting Average + 50) / 1000

For example:
- Babe Ruth (.393) has ~44.3% chance to get a hit per at-bat
- Ty Cobb (.420) has ~47.0% chance to get a hit per at-bat

### Play Distribution (approximate)

**Hits**:
- Home Run: ~5%
- Triple: ~7%
- Double: ~18%
- Single: ~70%

**Outs**:
- Double Play: ~3% (when applicable)
- Sacrifice Fly: ~5% (when applicable)
- Strikeout: ~15%
- Walk: ~5%
- Error: ~5%
- Other outs: ~67%

### Special Plays

- **Base Stealing**: ~7% chance when runner on first with < 2 outs
- **Double Plays**: Can only occur with runner on base and < 2 outs
- **Sacrifice Flies**: Only with runner on 2nd/3rd and < 2 outs
- **Walks**: Runner advances if forced

## Tips for Playing

1. **High Average Hitters**: Select players with batting averages over .350 for better offense
2. **Legendary Players**: 
   - Best hitters: Cobb (.420), Lajoie (.426), Duffy (.440)
   - Power hitters: Ruth, Foxx, Gehrig
   - Consistent hitters: Wagner, Williams, Speaker

3. **Team Balance**: Mix left and right-handed batters
4. **Different Seeds**: Enter different dates/times for varied gameplay

## Technical Notes

### Random Number Generation

The game uses two Linear Congruential Generators (LCGs) that are XORed together:
- **Generator 1**: Multiplier = 1103515245, Increment = 12345
- **Generator 2**: Multiplier = 69069, Increment = 1

Seeds are initialized from:
1. System time
2. Characters from date string
3. Characters from time string
4. Selected player statistics

### Code Structure

- `baseball.h` - Header with structures and function declarations
- `baseball.c` - Main game logic and simulation engine
- `players.c` - Player database (90 players with statistics)
- `build.bat` - MSVC build script

### Differences from Original

This modern implementation maintains the spirit of the original while adapting to modern systems:

**Retained**:
- All 90 original players with their statistics
- Game mechanics and play types
- Random number generation approach
- Play-by-play output style

**Updated**:
- C language instead of IBM 1620 machine code
- Windows console instead of typewriter output
- Modern string handling (strcpy_s instead of strcpy)
- Structured code with functions instead of goto-heavy machine code
- ANSI C standards compliance

## Example Game Output

```
========================================
  BBC BASEBALL SIMULATION (1961)
  Burgeson Baseball Computer
========================================

TODAYS DATE IS >11/09/2024

THE TIME IS >3:43 PM

ENTER YOUR LINEUP BELOW

VISITORS

NAME       TEAM AVG BATS

>RUTH
        LF 1923 YANKS              .393  L
>CROSETTI
        SS 1936 YANKS              .288  R
...

HOME TEAM

NAME       TEAM AVG BATS

YORK       1B 1940 DETROIT         .316  R
E COLLINS  2B 1920 W SOX           .369  L
...

RUTH UP  DOUBLE OVER THIRD
CROSETTI UP  LONG FLY TO L CENTR RUNNER ON 3RD
HENRICH UP  SINGLE OVER FIRST RUNNER SCORES
...

3 RUNS  3 HITS  0 ERRORS

END OF INNING 1    SCORE 3 0
```

## Known Limitations

1. The home team continues playing the bottom of the 9th even when already ahead (this matches original behavior)
2. Pitcher effectiveness is not modeled (all pitchers equal)
3. No defensive ratings (errors are random)
4. No player substitutions during game
5. No save/load game functionality

## Historical Context

This program demonstrates early computer gaming (1961) and the use of computers for sports simulation. The IBM 1620 was a decimal-based computer with 20,000 digits of memory, and this program used all available memory.

The original program was coded directly in machine language over several months in early 1961 and was extensively tested over 300+ games.

## Credits

**Original Program**: Paul R. Burgeson (1961)  
**Modern C Port**: 2024  
**Based on**: IBM 1620 General Program Library 11.0.032

## License

This is a recreation of historical software for educational and entertainment purposes.

## Troubleshooting

### "cl is not recognized..."
- You need to open "Developer Command Prompt for VS" not regular Command Prompt
- Or run `vcvarsall.bat` to set up the environment

### Compilation Errors
- Ensure all three files (.h and two .c files) are in the same directory
- Check that you're using MSVC, not another compiler
- Try with `/std:c11` flag if needed

### Game Crashes
- This shouldn't happen, but if it does, report the player names you entered
- Try running in a regular Command Prompt window

## Contributing

Feel free to enhance this recreation:
- Add defensive ratings
- Implement pitcher effectiveness
- Add statistics tracking
- Create a GUI version
- Port to other platforms

## Contact

For issues with this modern implementation, please create an issue in the repository.

---

**Enjoy playing baseball like it's 1961!** 🎮⚾