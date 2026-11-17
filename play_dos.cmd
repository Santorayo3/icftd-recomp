@echo off
rem Play the MS-DOS build under DOSBox.
rem   space = fire, arrows = joystick, esc = quit
rem   F1..F4 = pick a save slot, F5 = next slot; saves land in bin\dos\game\SAVES\SLOT<N>
rem
rem The game itself (ICFTD.EXE) is built output in bin\dos\game and is not in git, so the first
rem double-click stages it. The release ships no game data: the game extracts the three floppy
rem images itself on its first start, and this script hands it the repository's disks\ folder for
rem that (bin\dos\game\DISK1..3 and DSHELL.IMG appear after the first run). After changing the
rem sources, delete bin\dos\game (or run tools\build-dos.ps1 + tools\dos-pack.ps1) to restage it.
rem
rem DOSBox settings matter: core=dynamic is the JIT (the interpreter core is ~10x slower).
rem cycles=30000 is a 486DX2-66-class machine - the target the DOS port is aimed at - so what you
rem see is how the game will play on that hardware: ~8 fps right now, 50 fps is the goal (a frame
rem may cost at most ~600k cycles; it costs ~3.5M). For full speed set ICFTD_CYCLES=max, or any
rem fixed value; DOSBox's Ctrl-F11/Ctrl-F12 also change it at runtime.
rem
rem Extra arguments go to the game, e.g.   play_dos.cmd --frames 600 --perf
setlocal
cd /d "%~dp0"

if not defined ICFTD_CYCLES set "ICFTD_CYCLES=max"
set "GAME=%~dp0bin\dos\game"
set "CONF=%~dp0bin\dos\play.conf"

if exist "%GAME%\ICFTD.EXE" goto :ready
echo Staging the MS-DOS release (first run, this builds and packages it) ...
powershell -NoProfile -ExecutionPolicy Bypass -File "tools\build-dos.ps1"
if errorlevel 1 goto :buildfail
powershell -NoProfile -ExecutionPolicy Bypass -File "tools\dos-pack.ps1"
if errorlevel 1 goto :buildfail

:ready
rem DOSBox: %DOSBOX% when set, else the usual places, else PATH.
set "DB="
if defined DOSBOX if exist "%DOSBOX%" set "DB=%DOSBOX%"
if not defined DB if exist "H:\Spiele\DosBox\DOSBox.exe" set "DB=H:\Spiele\DosBox\DOSBox.exe"
if not defined DB if exist "C:\Program Files\DOSBox-0.74-3\DOSBox.exe" set "DB=C:\Program Files\DOSBox-0.74-3\DOSBox.exe"
if not defined DB if exist "C:\Program Files (x86)\DOSBox-0.74-3\DOSBox.exe" set "DB=C:\Program Files (x86)\DOSBox-0.74-3\DOSBox.exe"
if not defined DB if exist "C:\Program Files\DOSBox\DOSBox.exe" set "DB=C:\Program Files\DOSBox\DOSBox.exe"
if not defined DB for %%P in (dosbox.exe) do set "DB=%%~$PATH:P"
if defined DB goto :launch
echo DOSBox was not found.
echo Set the DOSBOX environment variable to its exe, or put dosbox.exe on PATH.
pause
exit /b 1

:launch
rem Written here, not shipped, so the mounted directory is always this checkout.
> "%CONF%" echo [sdl]
>> "%CONF%" echo fullscreen=false
>> "%CONF%" echo output=surface
>> "%CONF%" echo [dosbox]
>> "%CONF%" echo memsize=16
>> "%CONF%" echo [cpu]
>> "%CONF%" echo core=dynamic
>> "%CONF%" echo cycles=%ICFTD_CYCLES%
>> "%CONF%" echo [autoexec]
>> "%CONF%" echo mount c "%GAME%"
rem The player's own images, for the release's first start; a completed release ignores them.
set "DISKARG="
if exist "%~dp0disks\*.adf" >> "%CONF%" echo mount d "%~dp0disks"
if exist "%~dp0disks\*.adf" set "DISKARG=--disks D:\"
>> "%CONF%" echo c:
>> "%CONF%" echo ICFTD.EXE %DISKARG% %*

"%DB%" -conf "%CONF%"
if errorlevel 1 pause
exit /b 0

:buildfail
echo.
echo The MS-DOS release could not be staged - see the messages above.
pause
exit /b 1
