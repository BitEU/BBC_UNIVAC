# Quick Start Guide - BBC Baseball Simulation

## Installation (5 minutes)

1. **Get Visual Studio** (if you don't have it):
   - Download "Visual Studio 2022 Community" (free)
   - OR download "Build Tools for Visual Studio" (smaller, command-line only)
   - Link: https://visualstudio.microsoft.com/downloads/

2. **Open Developer Command Prompt**:
   - Start Menu → Search "Developer Command Prompt for VS 2022"
   - OR: Run `cmd` then execute `"C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvarsall.bat" x64`

3. **Navigate to source folder**:
   ```
   cd C:\path\to\baseball
   ```

4. **Build**:
   ```
   build.bat
   ```
   OR manually:
   ```
   cl /W4 /O2 /Fe:baseball.exe baseball.c players.c
   ```

5. **Run**:
   ```
   baseball.exe
   ```

## Your First Game (2 minutes)

### Step 1: Enter Random Seeds
```
TODAYS DATE IS >today
THE TIME IS >now
```
*Any text works - it seeds the random number generator*

### Step 2: Pick Your Team
Type 9 player names. Here's a strong lineup:

```
>COBB        (Best hitter: .420)
>RUTH        (Power: .393)
>WILLIAMS    (.406 - last .400 hitter)
>GEHRIG      (.373)
>HORNSBY     (.424)
>WAGNER      (.381)
>LAJOIE      (.426)
>SPEAKER     (.389)
>COCHRANE    (.357)
```

### Step 3: Watch the Game!
The computer picks the home team and the game plays automatically with play-by-play commentary.

## Best Players by Batting Average

**Over .420**:
- DUFFY (.440)
- LAJOIE (.426)
- HORNSBY (.424)
- ANSON (.421)
- COBB (.420)
- SISLER (.420)

**Over .400**:
- WILLIAMS (.406)
- BURKETT (.409)
- DELAHANTY (.408)
- JACKSON (.408)
- HEILMANN (.403)
- TERRY (.401)

**Top Power Hitters** (for Home Runs):
- RUTH
- FOXX
- GEHRIG
- GREENBERG
- OTT

## Common Issues

**Problem**: "cl is not recognized as a command"
**Solution**: Use Developer Command Prompt, not regular Command Prompt

**Problem**: "Cannot find baseball.c"
**Solution**: Make sure you're in the correct directory with all source files

**Problem**: "NON-VALID PLAYER. RETRY."
**Solution**: Check spelling. Try names from the list above. Names are case-insensitive.

## Playing Tips

1. **High averages win**: Pick players over .350
2. **Mix handedness**: Get both left and right-handed batters
3. **Historic greatness**: The game includes legends - Babe Ruth, Ty Cobb, etc.
4. **Try different seeds**: Different date/time = different game outcomes

## Example Session

```
C:\baseball> baseball.exe

========================================
  BBC BASEBALL SIMULATION (1961)
  Burgeson Baseball Computer
========================================

TODAYS DATE IS >11/9/2024

THE TIME IS >3:45pm

ENTER YOUR LINEUP BELOW

VISITORS

NAME       TEAM AVG BATS

>COBB
        CF 1911 DETROIT            .420  L
>RUTH
        LF 1923 YANKS              .393  L
>WILLIAMS
        LF 1941 RED SOX            .406  L
>GEHRIG
        1B 1927 YANKS              .373  L
>HORNSBY
        2B 1924 CARDS              .424  R
>WAGNER
        SS 1900 PITTSBU            .381  R
>LAJOIE
        2B 1901 PHILADEL           .426  R
>SPEAKER
        CF 1925 CLEVE              .389  L
>COCHRANE
        C  1930 ATHLETI            .357  L


HOME TEAM

NAME       TEAM AVG BATS

FOXX       1B 1932 ATHLETI         .364  R
SISLER     1B 1922 BROWNS          .420  L
DUFFY      LF 1894 BRAVES          .440  L
[... computer selects rest ...]

COBB UP  SINGLE TO CENTER
RUTH UP  TRIPLE TO RIGHT RUNNER SCORES
WILLIAMS UP  FLY BALL TO LEFT
GEHRIG UP  HOME RUN TO CENTER TWO RUNS SCORE
...

GAME COMPLETED. TOTALS

VISITORS        12  18  01
HOMETEAM        09  15  02
```

## Next Steps

- Experiment with different team combinations
- Try to beat the computer's random selection
- See if you can create a shutout
- Track your win/loss record

## Advanced Usage

See README.md for:
- Complete player roster
- Game mechanics details
- Technical documentation
- Compilation options

---

**Have fun playing 1960s computer baseball!**