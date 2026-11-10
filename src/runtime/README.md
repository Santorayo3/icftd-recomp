# src/runtime — the machine the game code runs on

This is the shipped half of the project. It contains **no 68000 core**: it is the Amiga that the
(game) code sees, plus the platform below it.

```
types.h          fixed-width types, no OS headers
platform.h       the platform contract: window, input, files, heap, 50 Hz clock
config.c         icftd.ini: [SECTION] / key=value settings (window mode lives here for now)
plat/win32/      one implementation of that contract (framebuffer, keyboard, Win32 files)
amiga/memory.c   24-bit big-endian address space
amiga/machine.c  the library shims (exec, dos, graphics, intuition, ciaa, input, ...), the heap,
                 the exec structures (Process/CLI, lists, message ports) and the call census
amiga/blitter.c  the chipset blitter (BLTCON0/1, pointers, modulos, BLTSIZE), immediate mode
amiga/display.c  graphics.library's planar model over a chunky framebuffer + the present
```

## Settings (`icftd.ini`)

A player-editable INI next to the executable (or in the working directory, which is where
`play.cmd` sits). The host reads it and hands the result to the platform layer, so the ini format
never reaches the Win32 code:

```ini
[VIDEO]
fullscreen=true     ; false = 320x200 window, 1:1; true = whole screen, scaled 4:3
```

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
