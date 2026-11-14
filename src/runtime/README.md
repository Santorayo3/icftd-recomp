# src/runtime — the machine the game code runs on

This is the shipped half of the project. It contains **no 68000 core**: it is the Amiga that the
(game) code sees, plus the platform below it.

```
types.h          fixed-width types, no OS headers
platform.h       the platform contract: window, input, audio, files, heap, 50 Hz clock
config.c         icftd.ini: [SECTION] / key=value settings (video + audio)
plat/win32/      one implementation of that contract (framebuffer, keyboard, waveOut, Win32 files)
plat/dos/        the other: VGA mode 13h, the VGA DAC, polled 8042 scancodes, the 8254 frame clock
amiga/memory.c   24-bit big-endian address space
amiga/machine.c  the library shims (exec, dos, graphics, intuition, ciaa, input, ...), the heap,
                 the exec structures (Process/CLI, lists, message ports) and the call census
amiga/blitter.c  the chipset blitter (BLTCON0/1, pointers, modulos, BLTSIZE), immediate mode
amiga/display.c  graphics.library's planar model over a chunky framebuffer + the present,
                 including the port's on-screen display and pointer overlays
amiga/audio.c    Paula (4 DMA channels, AUDxLC/LEN/PER/VOL, DMACON) mixed to the host device,
                 and the CIA-A/B timer A interrupts that run the engine's own music driver
```

## MS-DOS

`plat/dos/plat_dos.c` is a full implementation of the same contract, and it is what the DOS release
uses (`src\host\dos_main.c`, `tools\build-dos.ps1`):

* **Display**: the runtime framebuffer is 8-bit chunky, which is exactly VGA mode 13h (320x200, one
  byte per pixel) - the platform copies it to `A0000` and uploads the palette to the DAC (6 bits per
  gun, only the entries that changed).
* **Keyboard**: INT 16h only reports presses, but the engine needs held directions and the moment
  fire is *released*, so IRQ1 is masked and the 8042's make/break scancodes are polled (in
  `plat_pump` and while waiting for the next frame). The mask is restored on shutdown.
* **Clock**: the 8254's channel-0 counter is read through the latch command - the BIOS tick is
  18.2 Hz and the frame is 20 ms, and this leaves the BIOS clock alone.
* **Files**: the C library, plus `NAMES.TXT`: the engine asks for a few names FAT cannot hold
  (`fonts\newnem.font`), so a path that fails to open is retried with the 8.3 name the record maps
  it to. `tools\dos-pack.ps1` writes that file while staging the release.
* **Settings**: `plat_default_ini()` is per platform - the DOS build writes no `[VIDEO] fullscreen`.

## Settings (`icftd.ini`)

A player-editable INI next to the executable. **The game writes it with these defaults the first
time it starts** (`rt_config_ensure`, `config.c`), so a fresh copy has the whole file; the host
reads it and hands the result to the platform layer, so the ini format never reaches the Win32 code:

```ini
[VIDEO]
fullscreen=true     ; false = 320x200 window, 1:1; true = whole screen, scaled 4:3

[AUDIO]
sound=10            ; 0..10, 0 = sound effects off
music=10            ; 0..10, 0 = music off
```

## Audio

Paula is modelled, not faked: the engine writes AUDxLC/AUDxLEN/AUDxPER/AUDxVOL and the DMACON
channel bits directly, and `audio.c` plays those buffers at `3546895 / AUDxPER` Hz, looping from
AUDxLC, mixing channels 0+3 to the left and 1+2 to the right. The music itself is the engine's own
driver, which runs from a **CIA-A timer A interrupt**: `AddICRVector`/`AbleICR` register and enable
it, `$BFE401/$BFE501/$BFEE01` program the latch, and `rt_time_run()` raises the handler at every
underflow. The front end runs it (`oracle_run_icr`), because the handler is game code.
Device time is the same clock as the frame budget: instruction cycles, blitter DMA time and the idle
rest of a frame (a WaitTOF) all reach the mixer and the timers. `--audiodump <file>` (host and
oracle) writes the mix as raw s16 stereo without opening a device, which is how the audio is
checked headlessly.
The channel gain comes from `[AUDIO]`: a channel started by the interrupt handler (the music
driver) uses `music`, everything else - the engine's own sample player, slot 30/`FUN_00009b60` -
uses `sound`.

## The one seam

```c
u32 rt_os_call(rt_machine *m, u32 sp, u32 a1, int lib, s32 lvo);
```

A library call arrives as plain values — stack pointer, A1 (one shim takes its argument there),
library index and LVO — and returns the result. The caller owns the CPU: it decides what the
return value means, pops its own stack and resumes. Three flags report what happened:
`m->waitVblank` (a WaitTOF/WaitBOVP ran, end the frame), `m->stop` (Alert: the program halted) and
`m->osUnhandled` (a call we do not implement — it returned 0, which is always a bug to fix).

Whoever executes the code supplies `sp`/`a1`/the return address. Today that is
`src/oracle/cpu.c` (Musashi, running the *original* binary). After Phase B it is the translated
dispatcher (`src/recomp`), which turns `jsr (d16,A6)` into the same call.

## Rules

* Nothing in this directory may include `m68k.h` or otherwise depend on a 68000 core.
* Every shim must follow the documented library contract, not "what makes the game work". When a
  contract is unclear, read the HRM or UAE's source as documentation, and record the conclusion
  next to the code.
* `rt_lvo_report()` is the completion measure: it prints which library calls the program actually
  makes and which of them are merely answered with 0. Keep that number honest.
