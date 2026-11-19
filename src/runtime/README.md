# src/runtime — the machine the game code runs on

This is the shipped half of the project. It contains **no 68000 core**: it is the Amiga that the
(game) code sees, plus the platform below it.

```
types.h          fixed-width types, no OS headers
platform.h       the platform contract: window, input, audio, files, heap, 50 Hz clock
config.c         icftd.ini: [SECTION] / key=value settings (video + audio + language)
lang.c           the German catalog and its lookup: the text the engine's own routines are handed
                 (docs\port-features.md, "The language"), plus the translation file
                 `lang\<code>.txt` merged over it, copied into the machine's RAM once a run starts
assets.c         the first start: the player's three floppy images -> the extracted tree (an
                 AmigaDOS OFS reader and the hunk flattening of the exporter, in C, because a
                 release cannot run the .NET tool); two layouts, the Windows `export\` and the DOS
                 release's `DISK1..3` / `NAMES.TXT` / `DSHELL.IMG` 8.3 tree; and the 1990 add-on's
                 optional `ant1..3` tree (or `ANT1..3` / `ANTSHEL.IMG`), whose disks carry the same
                 volume labels as the game's and are told apart by their contents
plat/win32/      one implementation of that contract (framebuffer, keyboard, waveOut, Win32 files,
                 plus border.c: the artwork the fullscreen paints in the bars beside the picture)
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
  byte per pixel) - the platform composes the frame in RAM and `plat_present` copies it to `A0000`
  in one pass, uploading the palette to the DAC first (6 bits per gun, only the entries that
  changed). Drawing straight into video memory would put every half-drawn frame on the display.
* **Keyboard**: INT 16h only reports presses, but the engine needs held directions and the moment
  fire is *released*, so IRQ1 is masked and the 8042's make/break scancodes are polled (in
  `plat_pump` and while waiting for the next frame). The mask is restored on shutdown.
* **Clock**: the 8254's channel-0 counter is read through the latch command - the BIOS tick is
  18.2 Hz and the frame is 20 ms, and this leaves the BIOS clock alone.
* **Files**: the C library, plus `NAMES.TXT`: the engine asks for a few names FAT cannot hold
  (`fonts\newnem.font`), so a path that fails to open is retried with the 8.3 name the record maps
  it to. The first start writes that file while it extracts the player's disks (`assets.c`); it is
  not in the release.
* **Settings**: `plat_default_ini()` is per platform - the DOS build writes no `[VIDEO] fullscreen`.

## The window (Win32)

The windowed window has a resizable frame, and the picture is scaled into it. The client is laid out
for the game's 320x200 screen: both axes by the client height over the screen height, so the aspect
is kept, a wider window only widens the bars beside the screen (the border art fills them,
`border.c`) and a taller one scales it up. A client narrower than the screen's shape keeps the screen
whole and puts the bars above and below instead of cropping it. Fullscreen keeps the 4:3 an Amiga
monitor shows the screen on. A picture larger than the screen - the chicken race's 368x216 window, a
scene's own overscan - is fitted into the screen's rectangle at the screen's own pixel shape
(`picture_rect`), so it is the same shape as the rest of the game and never grows over the border
art; no column or row of it is dropped. The picture's rectangle is what the pointer is mapped back
into (`mouse_to_fb`), so the game keeps reading framebuffer coordinates.

What reaches the window is a true-colour picture since docs\display-rate.md's phase 3: the 8-bit
picture and the port's own overlay layer are resolved through two 256-entry index→RGB tables
(the picture's and the overlay's, so the overlay's pens no longer take picture palette entries) and
presented as point-sampled quads over `picture_rect()`'s rectangle, with the border art under them.
That presenter runs on its own thread, because a `Present` waits for the compositor and the machine's
20 ms frame may not wait with it. The window-DC path every earlier build used is still there as the
fallback when no D3D9Ex device can be made, and as the reference `WM_PRINTCLIENT` answers with - the
one `tools\window-check.ps1` reads, and which is why the swapchain is the discard one rather than
the flip model.

The window belongs to the player: nothing of the game resizes it (the chicken race's 368x216
narration page used to), and a switch to fullscreen remembers the client size it has to come back
to. The window captures the pointer while it has the focus - the system cursor is hidden and the
pointer confined to the picture, as it always was (`cursor_update`, `ClipCursor`, and the window
takes the foreground at startup) - and a size or move loop releases it while it runs, because
Windows measures a dragged frame from the pointer; without that release the window ran down to its
minimum size. Windows keeps no size for an
application's own window, so the host does: it reads `[VIDEO] window_width` / `window_height` into
`plat_set_window_size` before `plat_init`, and writes what `plat_window_size` reports back when the
game closes.

## Settings (`icftd.ini`)

A player-editable INI next to the executable. **The game writes it with these defaults the first
time it starts** (`rt_config_ensure`, `config.c`), so a fresh copy has the whole file; the host
reads it and hands the result to the platform layer, so the ini format never reaches the Win32 code:

```ini
[VIDEO]
fullscreen=true     ; false = 320x200 window at 1:1, resizable; true = whole screen, scaled 4:3, border art in the bars
curtains=true       ; false = the bars beside the picture are black instead of the port's border art
window_width=320    ; written when the game closes: the size a windowed start comes back to
window_height=200   ;   (a cross the desktop cannot show is shrunk to fit)

[AUDIO]
sound=10            ; 0..10, 0 = sound effects off
music=10            ; 0..10, 0 = music off

[GAME]
language=en         ; en = the original's English (the default), de = German
```

`[GAME] language` is read once, before the machine boots (`host_lang_load` in `src\host\main.c`
and `src\host\dos_main.c`): `de` hands the engine's text routines the German strings from
`src\runtime\lang.c` and from the translation file `lang\de.csv` (see docs\port-features.md, "The
language" and "The translation file"), and anything else - a missing
key included - leaves the original's English. It is not written back by the game; the file is
where the player chooses.

It is not read-only: the title's settings menu writes the three values back with
`rt_config_save_int`, which patches the file in place and re-reads it, and the window size is
written the same way at exit. Every other line - the
comments, the order of the sections, keys this build does not know - is written back unchanged, and
a key the file lacks is added under its section header; a file too large for its own limit is left
exactly as it was instead of being half written. The values are applied at once, not on the next
start: the fullscreen toggle calls `plat_set_fullscreen` (the Win32 layer restyles the live window)
and the volumes call `rt_audio_set_gain`. `plat_has_fullscreen` says whether a platform has a window
mode at all, which is what keeps the toggle out of the DOS build's menu. `[VIDEO] curtains` is the
exception among these: the front end reads it once before `plat_init` (`plat_set_border`) and never
writes it, so the file is the only place the border art is switched.

**Alt+Enter** is the same switch anywhere, without the menu: the front end's frame hook
(`host_input`) and the title's own loop ask the same helper the settings toggle uses
(`host_fullscreen_toggle`, `src\host\title.c`), so the window, the view and the file cannot
disagree. The Windows layer reports the key as `input_state`'s `KEY_FULLSCREEN` (a `WM_SYSKEYDOWN`
for `VK_RETURN` with Alt down - Alt+Enter is a system key and never arrives as a `WM_KEYDOWN`); the
DOS layer has no window mode and never sets it.

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
