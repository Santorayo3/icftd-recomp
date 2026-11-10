@echo off
rem Play the translated game (src\recomp - the original instructions as C).
rem   space = fire, arrows = joystick, esc = quit
rem Extra arguments are passed through:
rem   play.cmd --speed 20          slower clock (10 Hz) for comparing content
rem   play.cmd --input out\input-play.txt
cd /d "%~dp0"
bin\win32\icftd-recomp.exe "export\code\dshell4k\dshell.img" --run %*
pause
