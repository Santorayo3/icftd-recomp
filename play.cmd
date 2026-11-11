@echo off
rem Play the translated game (src\recomp - the original instructions as C).
rem   space = fire, arrows = joystick, esc = quit
rem   F1..F4 = pick a save slot, F5 = next slot; saves land in bin\win32\saves\slot<N>
rem Runs at the Amiga's own rate: a frame is 141,875 68000 cycles and the host presents 50/s, so a
rem scene that the A500 could not keep up with falls behind by the same amount. No speed factor is
rem needed - --speed is a debugging aid now:
rem   play.cmd --speed 30           slow motion, for inspecting a scene
rem   play.cmd --input out\input-play.txt
rem   play.cmd --byteptr          for bisection: treat blitter channel pointers as byte pointers
setlocal
cd /d "%~dp0"
bin\win32\icftd-recomp.exe "export\code\dshell4k\dshell.img" --run %*
pause
