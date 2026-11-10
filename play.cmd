@echo off
rem Play the translated game (src\recomp - the original instructions as C).
rem   space = fire, arrows = joystick, esc = quit
rem Extra arguments are passed through, e.g.  play.cmd --input out\input-play.txt
cd /d "%~dp0"
bin\win32\icftd-recomp.exe "export\code\dshell4k\dshell.img" --run %*
pause
