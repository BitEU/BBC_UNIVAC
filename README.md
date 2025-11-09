# BBC BASEBALL SIMULATION AND DEMONSTRATOR
## INSTRUCTION MANUAL

### CONGRATULATIONS!

You are now the proud owner of the BBC (Burgeson Baseball Computer) Baseball Simulation, one of the earliest computer baseball games ever created. Originally programmed in 1961 for the IBM 1620 computer by Paul R. Burgeson of Youngstown, Ohio, this game has been faithfully recreated for your Windows computer.

### GAME OVERVIEW

BBC Baseball puts you in command of an all-star lineup featuring 90 of baseball's greatest legends from 1884 to 1953. Select your dream team and compete against the computer in a full nine-inning game. Will your strategic choices lead to victory, or will the computer's random selections prove superior?

**ORIGINAL SPECIFICATIONS**
- Author: Paul R. Burgeson
- Release Date: January 1961
- Original System: IBM 1620 (20,000 digits of memory)
- Programming Language: Machine code
- This Version: Microsoft Visual C++ for Windows

### GAME FEATURES

**PLAYER ROSTER**
- 90 all-star players from baseball history (1884-1953)
- Authentic batting averages from each player's best season
- Left-handed, right-handed, and switch hitters

**COMPLETE GAME SIMULATION**
- Full nine-inning games (extra innings if tied)
- All standard baseball plays including:
  - Singles, doubles, triples, home runs
  - Ground outs, fly outs, line outs, strikeouts
  - Walks, errors, fielder's choices
  - Double plays and triple plays
  - Base stealing
  - Sacrifice flies
  - Realistic runner advancement

**ADVANCED PROBABILITY SYSTEM**
- Dual random number generators ensure unpredictable gameplay
- Hit probability based on actual batting averages
- Seeds initialized by date and time for unique games

### PLAYER ROSTER

Choose from 90 legendary players organized by position:

**FIRST BASE**
Trosky, Foxx, Benson, Mize, Gehrig, Anson, Terry, York, Sisler, Brouthers

**SECOND BASE**
Lajoie, E Collins, C Burg, Mack, Gordon, Lazzeri, Frisch, Hornsby, Gehringer, Robinson

**THIRD BASE**
Keltner, J Collins, J Burg, Baker, Hack, Groh, Traynor, Kell, McGraw, Kamm

**SHORTSTOP**
Boudreau, Sewell, Crosetti, Cronin, Tumblin, Jennings, Wagner, Appling, Vaughan, Travis

**LEFT FIELD**
P Waner, Radcliff, Medwick, Ruth, Simmons, Heilmann, Duffy, Musial, Wheat, Williams

**CENTER FIELD**
DiMaggio, Reiser, Keller, Averill, Speaker, Jackson, Cobb, Rice, Henrich, O Rourke

**RIGHT FIELD**
L Waner, Burkett, Herman, Crawford, Hamilton, Greenberg, O Doul, Delahanty, Cuyler, Ott

**CATCHER**
Hayes, Cochrane, Danning, Dickey, Hartnett, Berra, M Burg, Lombardi, Hegan, Kelly

**PITCHER**
Radbourne, Grove, Feller, Spahn, D Dean, Young, Newhouser, Johnson, Hubbell, Ruffing

---

## INSTALLATION AND SETUP

### SYSTEM REQUIREMENTS

- Windows 10 or later
- Microsoft Visual C++ compiler (Visual Studio 2019 or newer)
- Windows Command Prompt or PowerShell

### BUILDING THE GAME FROM SOURCE

**REQUIRED SOFTWARE**
You must have the Microsoft Visual C++ compiler installed. Obtain it from:
- Visual Studio 2022 (Community Edition - free)
- Visual Studio 2019
- Build Tools for Visual Studio (command-line only)

**COMPILATION PROCEDURE**

Method 1: Quick Build
1. Open "Developer Command Prompt for VS 2022"
2. Navigate to the game directory
3. Type: `build.bat` and press ENTER

Method 2: Manual Build
1. Open "Developer Command Prompt for VS 2022"
2. Type the following command:
   ```
   cl /W4 /O2 /Fe:baseball.exe baseball.c players.c /link /SUBSYSTEM:CONSOLE
   ```
3. Press ENTER

Method 3: Visual Studio IDE
1. Launch Visual Studio
2. Create new Console App project
3. Add all .c and .h files to project
4. Press F7 to build

### STARTING THE GAME

Run `baseball.exe` from the command line or double-click the executable in Windows Explorer.

---

## PLAYING THE GAME

### STEP 1: INITIALIZATION

Upon starting, the game will request two pieces of information:

**TODAYS DATE IS >**
Enter today's date in any format (examples: "111", "11/09/2024")

**THE TIME IS >**
Enter the current time in any format (examples: "343", "3:43")

NOTE: These values seed the random number generators. Enter different values each time to ensure unique gameplay.

### STEP 2: SELECT YOUR TEAM (VISITORS)

You will now build your lineup by entering nine player names in batting order.

**ENTERING PLAYER NAMES**
- Type the player's last name and press ENTER
- Names are not case-sensitive (RUTH, ruth, and Ruth all work)
- Partial names work if they uniquely match (e.g., "MUSI" for Musial)
- Invalid entries display "NON-VALID PLAYER. RETRY."

**SAMPLE LINEUP**
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

After you complete your roster, the computer will randomly select nine players from the remaining 81 for the home team.

### STEP 3: WATCH THE GAME

The game simulates automatically with play-by-play text:

```
RUTH UP  DOUBLE OVER THIRD
CROSETTI UP  LONG FLY TO L CENTR RUNNER ON 3RD
HENRICH UP  SINGLE OVER FIRST RUNNER SCORES
```

No input is required during gameplay. Sit back and watch the action unfold.

### STEP 4: FINAL SCORE

After nine innings (or extra innings if tied), the final statistics appear:

```
GAME COMPLETED. TOTALS

VISITORS        16  23  01
HOMETEAM        14  21  01
```

Format: RUNS / HITS / ERRORS

---

## GAME MECHANICS AND STRATEGY

### UNDERSTANDING HIT PROBABILITY

Each player's chance of getting a hit is calculated from their batting average:

**Formula:** (Batting Average + 50) / 1000

**Examples:**
- Babe Ruth (.393) = 44.3% chance per at-bat
- Ty Cobb (.420) = 47.0% chance per at-bat

### OUTCOME PROBABILITIES

When a hit occurs, expect the following distribution:
- Single: 70%
- Double: 18%
- Triple: 7%
- Home Run: 5%

When an out occurs, expect:
- Standard outs (ground, fly, line): 67%
- Strikeout: 15%
- Walk: 5%
- Error: 5%
- Double Play: 3% (runner on base, less than 2 outs)
- Sacrifice Fly: 5% (runner on 2nd/3rd, less than 2 outs)

**SPECIAL SITUATIONS**
- Base stealing occurs 7% of the time with runner on first and fewer than two outs
- Walks force runners to advance when bases are occupied
- Double plays require a runner on base and fewer than two outs
- Sacrifice flies only occur with runners on second or third and fewer than two outs

### WINNING STRATEGIES

**BUILD A POWERFUL LINEUP**
Select players with batting averages above .350 for maximum offensive output.

**KNOW YOUR LEGENDS**
- Highest averages: Hugh Duffy (.440), Nap Lajoie (.426), Ty Cobb (.420)
- Power hitters: Babe Ruth, Jimmie Foxx, Lou Gehrig
- All-around excellence: Honus Wagner, Ted Williams, Tris Speaker

**MIX YOUR BATTERS**
Alternate left-handed and right-handed hitters for balanced offense.

**VARY YOUR SEEDS**
Enter different dates and times to experience diverse gameplay scenarios.

---

## TECHNICAL INFORMATION

### RANDOM NUMBER GENERATION SYSTEM

The game employs a sophisticated dual Linear Congruential Generator (LCG) system with XOR combination:
- Generator A: Multiplier = 1103515245, Increment = 12345
- Generator B: Multiplier = 69069, Increment = 1

Seeds derive from:
1. System time
2. Date string characters
3. Time string characters
4. Player statistical data

### PROGRAM FILES

- `baseball.h` - Core definitions and function declarations
- `baseball.c` - Main simulation engine
- `players.c` - Player database (90 entries with statistics)
- `build.bat` - Compilation script

### FAITHFUL RECREATION

This version preserves the original 1961 game while adapting to modern hardware:

**PRESERVED ELEMENTS**
- All 90 original players with authentic statistics
- Complete game mechanics and play types
- Random number generation methodology
- Classic play-by-play output format

**MODERNIZED ELEMENTS**
- Compiled C code (originally IBM 1620 machine code)
- Windows console output (originally typewriter)
- Secure string functions (strcpy_s vs. strcpy)
- Structured programming (replaces goto-based logic)
- ANSI C compliance

---

## SAMPLE GAME SESSION

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
>HENRICH
        RF 1948 YANKS              .308  L
>HEGAN
        C  1948 CLEV               .248  R
>TROSKY
        1B 1936 CLEV               .343  L
>GORDON
        2B 1942 YANKS              .322  R
>WAGNER
        SS 1908 PIRATES            .354  R
>WILLIAMS
        LF 1941 B SOX              .406  L
>SPEAKER
        CF 1916 CLEV               .386  L

HOME TEAM

NAME       TEAM AVG BATS

YORK       1B 1940 DETROIT         .316  R
E COLLINS  2B 1920 W SOX           .369  L
TRAYNOR    3B 1930 PIRATES         .366  R
...

RUTH UP  DOUBLE OVER THIRD
CROSETTI UP  LONG FLY TO L CENTR RUNNER ON 3RD
HENRICH UP  SINGLE OVER FIRST RUNNER SCORES
HEGAN UP  STRIKEOUT
TROSKY UP  HOME RUN

3 RUNS  3 HITS  0 ERRORS

END OF INNING 1    SCORE 3 0

[Game continues...]
```

---

## GAMEPLAY NOTES

**AUTHENTIC 1961 BEHAVIOR**
The following characteristics match the original program:
1. Home team completes the bottom of the 9th inning regardless of score
2. All pitchers perform equally (no individual effectiveness ratings)
3. Defensive errors occur randomly (no fielding ratings)
4. No substitutions permitted during game
5. Games cannot be saved or loaded

---

## CREDITS

**ORIGINAL PROGRAM**
Paul R. Burgeson, 1961
Youngstown, Ohio

**SOURCE**
IBM 1620 General Program Library 11.0.032

This recreation is provided for educational and entertainment purposes.

---

## WARRANTY AND SUPPORT

This software is provided "as is" without warranty of any kind. For technical issues with this recreation, please submit a detailed report through the repository issue tracker.

---