@echo off
REM Build script for BBC Baseball Simulation
REM Requires Microsoft Visual C++ compiler (MSVC)
REM This script automatically sets up the Visual Studio environment

echo Building BBC Baseball Simulation...
echo.

REM Set up Visual Studio Developer Command Prompt environment
REM Try common Visual Studio 2022 installation paths
if exist "C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\Tools\VsDevCmd.bat" (
    call "C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\Tools\VsDevCmd.bat" -no_logo
) else if exist "C:\Program Files\Microsoft Visual Studio\2022\Professional\Common7\Tools\VsDevCmd.bat" (
    call "C:\Program Files\Microsoft Visual Studio\2022\Professional\Common7\Tools\VsDevCmd.bat" -no_logo
) else if exist "C:\Program Files\Microsoft Visual Studio\2022\Enterprise\Common7\Tools\VsDevCmd.bat" (
    call "C:\Program Files\Microsoft Visual Studio\2022\Enterprise\Common7\Tools\VsDevCmd.bat" -no_logo
) else (
    echo Error: Could not find Visual Studio 2022 installation.
    echo Please ensure Visual Studio 2022 is installed.
    exit /b 1
)

echo.
echo Compiling with MSVC...
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