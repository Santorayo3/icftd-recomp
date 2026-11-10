# src/oracle — running the original binary to ask it questions

A **development tool, not the product.** `tools\build-oracle.ps1` links it to the vendored Musashi
68000 core; it loads the real `dshell` image and executes it against `src/runtime`.

```
main.c   the tool: argument parsing, window mode, BMP dumps, the exit report
cpu.c    the 68000 front end: Musashi's memory hooks, step/run loop, the 50 Hz frame tick with
         the program's own interrupt servers, boot, and the trap that turns `jsr (lvo,A6)` into
         `rt_os_call()`; plus the diagnostics (PC ring, call-site dump, disassembly)
```

## What it is for

1. **Ground truth.** Every fact in this repository about the game's behaviour came from running the
   original and measuring it, or from reading `re\disasm\dshell.asm`. When a question comes up that
   the disassembly cannot settle cheaply, this is how it gets answered.
2. **Fixtures.** `ref\fixtures` are states captured from this binary; the differential harness in
   `src\assetExport\Cpu68k` (`rcmp`, `rleaf`) replays them.
3. **The measurement that keeps us honest.** The library-call census printed at the end of every
   run says which of the program's library calls are implemented and which are answered with 0.

## What it is not for

It is **not** a verification method and it is not the shipped program. There is no frame, pixel or
screenshot comparison anywhere: parity is judged by machine state — registers, custom registers and
RAM at frame boundaries — between the interpreted and the translated build. See
`docs\recomp-architecture.md`, "Acceptance tests — machine state, never images".

Batch runs must be bounded (`tools\oracle-run.ps1` enforces a timeout and kills): the program itself
never exits, and a bad shim can spin in a native loop that no instruction budget can interrupt.

```
bin\win32\icftd-oracle.exe export\code\dshell4k\dshell.img 0x4000 30000000 --progress
#   --run       window, 50 Hz, space = fire, esc = quit
#   --progress  counters every million steps        --trace  disassemble each step
#   --watch pc  report a PC with the PC ring        --dump <prefix> [n] [--every k]  BMP per raster
#   --doslog    log dos Open/Read/Seek/Close        --dfflog  log the first chipset writes
#   --press/--release <frame>   scripted /FIRE      --data <dir>  where the disk folders live
```
