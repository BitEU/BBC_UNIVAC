@echo off
REM Build script for BBC Baseball Simulation
REM Requires Microsoft Visual C++ compiler (MSVC)

echo Building BBC Baseball Simulation...
echo.

REM Compile source files
cl /W4 /O2 /Fe:baseball.exe baseball.c players.c /link /SUBSYSTEM:CONSOLE

if %ERRORLEVEL% EQU 0 (
    echo.
    echo Build successful! Executable: baseball.exe
    echo.
    echo To run: baseball.exe
) else (
    echo.
    echo Build failed!
    exit /b 1
)