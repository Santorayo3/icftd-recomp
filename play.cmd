@echo off
rem Play the translated game (src\recomp - the original instructions as C).
rem   space = fire, arrows = joystick, esc = quit
rem Runs at 30% of the Amiga's 50 Hz by default; pass --speed 100 for the full rate.
rem Extra arguments are passed through:
rem   play.cmd --speed 100
rem   play.cmd --input out\input-play.txt
setlocal
cd /d "%~dp0"
set "SPEED=--speed 30"
echo %* | findstr /i /c:"--speed" >nul
if not errorlevel 1 set "SPEED="
bin\win32\icftd-recomp.exe "export\code\dshell4k\dshell.img" --run %SPEED% %*
pause
