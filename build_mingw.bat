@echo off
REM ============================================================================
REM BBC Baseball Simulation - MinGW Optimized Build Script
REM Aggressive optimization flags for maximum performance
REM ============================================================================

echo.
echo ========================================
echo   BBC Baseball - MinGW Optimized Build
echo ========================================
echo.

REM Check if gcc is available
where gcc >nul 2>&1
if %ERRORLEVEL% NEQ 0 (
    echo ERROR: MinGW GCC not found in PATH
    echo Please install MinGW-w64 and add it to your PATH
    echo Download from: https://www.mingw-w64.org/
    pause
    exit /b 1
)

echo Compiler: MinGW GCC
gcc --version | findstr "gcc"
echo.

REM Clean previous build artifacts
echo Cleaning previous build artifacts...
if exist baseball_mingw.exe del /Q baseball_mingw.exe
if exist baseball.obj del /Q baseball.obj
if exist players.obj del /Q players.obj
if exist *.o del /Q *.o
echo.

REM ============================================================================
REM AGGRESSIVE OPTIMIZATION FLAGS
REM ============================================================================
REM -O3              : Maximum optimization level
REM -march=native    : Optimize for current CPU architecture
REM -mtune=native    : Tune code for current CPU
REM -flto            : Link-Time Optimization (whole program optimization)
REM -ffast-math      : Aggressive floating-point optimizations
REM -funroll-loops   : Unroll loops for better performance
REM -finline-functions : Inline functions aggressively
REM -fomit-frame-pointer : Remove frame pointer for faster function calls
REM -fno-stack-protector : Remove stack protection overhead
REM -fmerge-all-constants : Merge identical constants
REM -ftree-vectorize : Auto-vectorization of loops
REM -fprefetch-loop-arrays : Generate prefetch instructions
REM -mfpmath=sse     : Use SSE for floating-point math
REM -msse4.2         : Use SSE 4.2 instructions
REM -fwhole-program  : Assume all code is in one compilation unit
REM ============================================================================

set OPTIMIZE_FLAGS=-O3 -march=native -mtune=native -flto -ffast-math -funroll-loops -finline-functions -fomit-frame-pointer -fno-stack-protector -fmerge-all-constants -ftree-vectorize -fprefetch-loop-arrays -msse4.2

REM Warning flags (keep for code quality)
set WARNING_FLAGS=-Wall -Wextra -Wno-unused-parameter

REM Additional performance flags
set PERF_FLAGS=-DNDEBUG -pipe

REM Linker optimization flags
set LINKER_FLAGS=-s -static -Wl,--gc-sections -Wl,--strip-all -Wl,-O3

echo Building with aggressive optimizations...
echo Flags: %OPTIMIZE_FLAGS%
echo.

REM ============================================================================
REM BUILD COMMAND
REM ============================================================================
REM Single-step compilation with Link-Time Optimization
REM -flto requires all objects to be compiled together for best results
REM ============================================================================

echo Compiling and linking...
gcc %WARNING_FLAGS% %OPTIMIZE_FLAGS% %PERF_FLAGS% ^
    -o baseball_mingw.exe ^
    baseball.c players.c ^
    %LINKER_FLAGS%

if %ERRORLEVEL% EQU 0 (
    echo.
    echo ========================================
    echo   BUILD SUCCESSFUL
    echo ========================================
    echo.
    echo Output: baseball_mingw.exe
    
    REM Display file size
    for %%A in (baseball_mingw.exe) do (
        echo File size: %%~zA bytes
    )
    echo.
    echo Optimization level: MAXIMUM (-O3 + LTO + native CPU^)
    echo.
    echo To run the game, type: baseball_mingw.exe
    echo.
) else (
    echo.
    echo ========================================
    echo   BUILD FAILED
    echo ========================================
    echo.
    echo Check the error messages above.
    pause
    exit /b 1
)

exit /b 0

REM ============================================================================
REM ALTERNATIVE: Ultra-Aggressive Build (uncomment if you want even more)
REM ============================================================================
REM Additional flags for extreme optimization (may break compatibility):
REM -fwhole-program : Entire program in one unit
REM -fipa-pta : Interprocedural pointer analysis
REM -fgcse-sm : Store motion after global common subexpression elimination
REM -fgcse-las : Load/store motion after global common subexpression elimination
REM -ftree-loop-distribution : Loop distribution
REM -floop-interchange : Loop interchange optimization
REM -floop-strip-mine : Loop strip mining
REM -floop-block : Loop blocking optimization
REM -funsafe-loop-optimizations : Unsafe loop optimizations
REM -Ofast : Even more aggressive than -O3 (includes -ffast-math)
REM ============================================================================

pause