# BBC BASEBALL SIMULATION AND DEMONSTRATOR
## INSTRUCTION MANUAL

### CONGRATULATIONS!

You are now the proud owner of the BBC (Burgeson Baseball Computer) Baseball Simulation. Originally created in 1961 by Paul R. Burgeson for the IBM 1620 computer, this version features a modern roster of 2025 MLB players while maintaining the classic simulation engine.

### GAME OVERVIEW

BBC Baseball puts you in command of an all-star lineup featuring 100 players from the 2025 MLB season. Select your dream team and compete against the computer in a full nine-inning game. Will your strategic choices lead to victory, or will the computer's random selections prove superior?

**ORIGINAL SPECIFICATIONS**
- Original Author: Paul R. Burgeson
- Original Release: January 1961
- Original System: IBM 1620 (20,000 digits of memory)
- This Version: Microsoft Visual C++ for Windows with 2025 player data

### GAME FEATURES

**PLAYER ROSTER**
- Current MLB players from the 2025 season
- Batting averages from 2025 season statistics
- Left-handed and right-handed batters
- Jersey number support for player selection

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
- Hit probability based on actual 2025 batting averages
- Seeds initialized by date and time for unique games

### PLAYER ROSTER

Choose from current MLB players organized by position from the 2025 season. Players include stars from all 30 MLB teams including:

**TOP BATTERS**
- Aaron Judge (NYY, .331)
- Romy González (BOS, .305)
- Amed Rosario (NYY, .303)
- Moisés Ballesteros (CHC, .298)
- Nico Hoerner (CHC, .297)
- Nate Eaton (BOS, .296)
- Freddie Freeman (LAD, .295)

**FEATURED TEAMS**
Players from BAL, BOS, CHC, LAD, NYY, NYM and all other MLB teams

For a complete list of all 100 players with statistics, consult the `player_roster.md` file or view them during team selection.

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
- Type the player's full or last name and press ENTER
- Names are not case-sensitive (JUDGE, judge, and Judge all work)
- You can also use jersey number format: "99NYY" or "99-NYY" for Aaron Judge
- Invalid entries display "NON-VALID PLAYER. RETRY."
- Already selected players display "PLAYER ALREADY SELECTED. RETRY."

**SAMPLE LINEUP**
```
>AARON JUDGE
>FREDDIE FREEMAN
>MOISÉS BALLESTEROS
>SHOHEI OHTANI
>GUNNAR HENDERSON
>FRANCISCO LINDOR
>MOOKIE BETTS
>JARREN DURAN
>WILL SMITH
```

**ALTERNATE METHOD (Jersey Numbers)**
```
>99NYY
>22NYM
>17LAD
```

After you complete your roster, the computer will randomly select nine players from the remaining 97 for the home team.

### STEP 3: WATCH THE GAME

The game simulates automatically with play-by-play text:

```
AARON JUDGE UP  HOMER TO RIGHT
JUAN SOTO UP  SINGLE TO CENTER
SHOHEI OHTANI UP  DOUBLE TO L CENTR
```

No input is required during gameplay. Sit back and watch the action unfold. The game may occasionally display base situations between plays.

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

Each player's chance of getting a hit is based on their 2025 batting average plus a 50-point bonus. The game rolls a random number from 1-1000 and compares it to the player's adjusted batting average.

**Formula:** Random roll ≤ (batting average + 50) = HIT

**Examples:**
- Aaron Judge (.331) = 381/1000 chance = 38.1% per at-bat
- Freddie Freeman (.295) = 345/1000 chance = 34.5% per at-bat
- Moisés Ballesteros (.298) = 348/1000 chance = 34.8% per at-bat

### OUTCOME PROBABILITIES

When a hit occurs, expect the following distribution:
- Single: 70% (hit_type 13-100)
- Double: 18% (hit_type 13-30)
- Triple: 7% (hit_type 6-12)
- Home Run: 5% (hit_type 1-5)

When an out occurs, expect:
- Ground Out: 32% (out_type 34-65)
- Fly Out: 20% (out_type 66-85)
- Line Out: 15% (out_type 86-100)
- Strikeout (swinging): 7% (out_type 9-15)
- Strikeout (called): 5% (out_type 16-20)
- Walk: 5% (out_type 21-25)
- Error: 5% (out_type 26-30)
- Sacrifice Fly: 5% (out_type 4-8, runner on 2nd/3rd, less than 2 outs)
- Double Play: 3% (out_type 1-3, runner on base, less than 2 outs)
- Fielder's Choice: 2% (out_type 31-32, runner on first)
- Triple Play: 1% (out_type 33, runners on 1st and 2nd, 0 outs)

**SPECIAL SITUATIONS**
- Base stealing occurs ~8.3% of the time with runner on first, no runner on second, and fewer than two outs (1 in 12 chance)
- Caught stealing occurs ~4% of the time with runner on first and fewer than two outs (1 in 25 chance)
- Double steal attempt occurs ~5% of the time with runners on first and second (1 in 20 chance)
- Walks force runners to advance when bases are occupied
- Double plays require a runner on first and fewer than two outs
- Triple plays require runners on first and second with no outs (0 outs exactly)
- Sacrifice flies only occur with runners on second or third and fewer than two outs

### WINNING STRATEGIES

**BUILD A POWERFUL LINEUP**
Select players with batting averages above .280 for maximum offensive output.

**KNOW YOUR STARS**
- Top averages: Aaron Judge (.331), Romy González (.305), Amed Rosario (.303)
- High performers: Moisés Ballesteros (.298), Nico Hoerner (.297), Freddie Freeman (.295)
- Power threats: Shohei Ohtani, Kyle Tucker, Teoscar Hernández

**MIX YOUR BATTERS**
The game features both left-handed and right-handed batters. Consider lineup balance.

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
- `players.c` - Player database (100 entries with statistics)
- `build.bat` - Compilation script

### RECREATION NOTES

This version preserves the original 1961 game engine while updating the player roster:

**PRESERVED FROM ORIGINAL**
- Complete game mechanics and play types
- Random number generation methodology (dual LCG with XOR)
- Classic play-by-play output format
- Original simulation algorithms

**MODERNIZED ELEMENTS**
- 2025 MLB player roster (100 current players)
- Compiled C code (originally IBM 1620 machine code)
- Windows console output (originally typewriter)
- Jersey number player selection (e.g., "99NYY")
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

TODAYS DATE IS >11/09/2025

THE TIME IS >3:43 PM

ENTER YOUR LINEUP BELOW

VISITORS

NAME       TEAM AVG BATS

>AARON JUDGE
        RI  2025 NYY                .331  R
>FREDDIE FREEMAN
        FI  2025 LAD                .295  L
>SHOHEI OHTANI
        FI  2025 LAD                .282  L
>MOISÉS BALLESTEROS
        FI  2025 CHC                .298  L
>GUNNAR HENDERSON
        SH  2025 BAL                .274  L
>FRANCISCO LINDOR
        SH  2025 NYM                .267  B
>MOOKIE BETTS
        SH  2025 LAD                .258  R
>JARREN DURAN
        LE  2025 BOS                .256  L
>WILL SMITH
        CA  2025 LAD                .296  R

HOME TEAM

NAME       TEAM AVG BATS

KYLE TUCKER   RI  2025 CHC           .266  L
TEOSCAR HERNÁNDEZ RI 2025 LAD        .247  R
PETE ALONSO   FI  2025 NYM           .272  R
...

AARON JUDGE UP  HOMER TO RIGHT
FREDDIE FREEMAN UP  SINGLE TO CENTER
SHOHEI OHTANI UP  GROUNDER TO SHORT
MOISÉS BALLESTEROS UP  DOUBLE TO L CENTR

2 RUNS  3 HITS  0 ERRORS

END OF INNING 1    SCORE 2 0

[Game continues...]
```

---

## GAMEPLAY NOTES

**GAMEPLAY CHARACTERISTICS**
1. Home team completes the bottom of the 9th inning regardless of score (authentic 1961 behavior)
2. No pitcher effectiveness (all players bat, no pitching stats used)
3. Defensive errors occur randomly (no fielding ratings)
4. No substitutions permitted during game
5. Games cannot be saved or loaded
6. Player positions shown during selection are informational only

---

## HISTORICAL BACKGROUND

The original BBC Baseball Simulation was a landmark achievement in early computer gaming. Created in 1961 by Paul R. Burgeson, the program showcased the potential of computers for sports simulation and entertainment.

**THE ORIGINAL IBM 1620 VERSION**
- Decimal-based architecture
- 20,000 digits of memory
- Hand-coded in machine language
- Featured players from 1884-1953
- Tested across 300+ simulated games

**THIS VERSION**
This modern recreation maintains the original simulation engine while featuring 100 current MLB players from the 2025 season. The core algorithms, probability systems, and gameplay mechanics remain faithful to Burgeson's 1961 design.

---

## CREDITS

**ORIGINAL PROGRAM**
Paul R. Burgeson, 1961
Youngstown, Ohio

**ORIGINAL SOURCE**
IBM 1620 General Program Library 11.0.032

**2025 PLAYER DATA**
MLB batting statistics from the 2025 season

This recreation is provided for educational and entertainment purposes.

---

## WARRANTY AND SUPPORT

This software is provided "as is" without warranty of any kind. For technical issues with this recreation, please submit a detailed report through the repository issue tracker.

---