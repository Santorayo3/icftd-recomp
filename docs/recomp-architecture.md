# Recompilation architecture (decision, 2026-11-10)

## RULE 0 — a bug is a DIFFERENCE, never a symptom (binding, never overridden)

A bug report says **where to look**, not what to change — for every kind of bug, not only visual
ones: wrong picture, wrong or missing sound, crash, hang, wrong value, wrong speed, ignored input,
bad load. When something misbehaves, do not try to make the symptom go away: find the path the
original takes (`re/decomp_all`, `re/disasm/dshell.asm`, the oracle run), find the same path in our
code (generated `src/recomp/fn_*.c`, `src/runtime/amiga`, the OS shims), diff them and close that
gap. The symptom disappears as a consequence.

A change whose only justification is "it works now" is a band-aid and is rejected, even with every
test green. Each fix can name its divergence in one sentence: *the original does X at `0xNNNN`, we
do Y*. The emulator is right by definition - if our build misbehaves, the difference is ours. Never
hide a real fix behind an opt-in flag a normal launch does not pass; that is exactly how the sheared
player/plane sprites came back after having been "fixed".

Only exception: code with no counterpart in the original - save slots, OSD, present/window backend,
host input, our tooling. There is nothing to diff there; implement it correctly on its own terms,
still without papering over symptoms. See `.github/copilot-instructions.md`.

Three goals, in priority order:

1. **Fidelity.** The ported game must behave exactly like the Amiga release, everywhere, including
   the parts nobody will hand-port (menus, minigames, the ending).
2. **MS-DOS target.** `bin\dos\icftd.exe` stays a first-class build (Open Watcom, real mode or
   `-l=dos4g`), not an afterthought.
3. **Moddability.** The game must stay changeable after the port: new behaviour, new content,
   tweaks - without forking generated code.

## The model

```
   L4  mods            patches/ + hooks + game.pak data        <- user-facing, readable C
   L3  platform        platform.h: window, input, files, heap  <- win32 | dos
   L2  game binary     dshell (translated to C, or interpreted)-> exact original behaviour
   L1  host libraries  exec / graphics / dos shims             <- our code, small
   L0  chipset         blitter, copper, bitplanes, CIA, Paula  <- our code, bit-exact
```

The rule: **no human writes game logic.** L0/L1 are ours and are written once; L2 is mechanical.

**How "exactly like the Amiga release" is decided: by machine state, never by pictures.** Parity
means identical CPU registers, custom-chip register file and RAM at frame boundaries under a
scripted input timeline - see "Acceptance tests — machine state, never images" below. That section
is binding: the pixel and frame tooling elsewhere in this repo belongs to the retired hand port and
is not evidence about the recompilation.

## What ships, and what is scaffolding

This is a recompilation, not an emulator port. The distinction is worth stating explicitly because
Phase A *looks* like an emulator and is not one:

| piece | in the shipped game? | role |
|---|---|---|
| 68000 core (Musashi, `src\oracle`) | **no** | a development tool: it executes the original binary so we can measure it and dump fixtures. Replaced by the translated dispatcher |
| translated C, one function per file (`recomp\`) | **yes** | the game's code |
| exec / graphics / dos shims (`L1`) | **yes** | the platform layer - ~40 library entries this game calls |
| chipset model (`L0`) | **only the audio path** | see below: this game never touches the video hardware |
| `platform.h` win32 / dos (`L3`) | **yes** | window, input, files, heap, 50 Hz clock |

After Phase B the executable contains **no 68j instruction decoding**. It is translated C calling
L0/L1/L3, which is exactly the shape of a native recompiled port.

We are also not building a general Amiga emulator: no floppy emulation, no Kickstart, no AmigaOS -
only the library entries and chipset features this one game uses.

### The video hardware does not have to be implemented at all

Measured over the whole 137 KB binary, the only direct custom-chip accesses are:

```
$DFF0A0  6x   AUDx pointer/length  (audio channel setup)
$DFF096  1x   DMACON               (audio DMA enable)
```

No blitter, no copper, no bitplane, sprite or DMA register is ever touched. Every pixel goes
through `graphics.library`, every display change through a `View`/`ColorMap`. So the shipped
platform layer is a **chunky software renderer**, not a chipset emulator:

* `BltBitMap` / `BltClear` / `RectFill` / `Area*` / `Text` draw straight into an 8-bit chunky
  framebuffer - no bitplanes, no minterms at runtime, no scanline timing;
* `ColorMap` gives the 32-colour palette; the copper list `MrgCop` would build is irrelevant
  because the palette is per-frame, not per-scanline;
* audio keeps a Paula-shaped API but can be a software mixer or a Sound Blaster driver.

That is why a 486 is a realistic target: a frame is at most a few hundred thousand byte copies
(320x200 = 64,000 pixels; a couple of screens of overdraw is ~200 KB per frame, ~10 MB/s at
50 Hz), while the translated game code spends the same **cycle** budget the original does -
141,875 68000 cycles per frame. Cycles, not instructions: an instruction costs 4-40 of them, and
the difference is what makes CPU- or blitter-bound scenes lose frames exactly like the A500
(see "Time" below).
VGA mode 13h or VESA 8bpp both fit; double buffering needs Mode X or VESA linear.

Why Phase B is not optional even though a modern PC runs the interpreter 50x faster than an A500:

1. **DOS.** An interpreter cannot reach period-correct DOS speeds; translated C can.
2. **Moddability.** Phase C needs named, readable, replaceable functions.
3. **The product.** Shipping an interpreter would be shipping an emulator.

## Why this satisfies the three goals

*Fidelity* comes from L2 being the original machine code. Transparency, channel folding, paint
order, copper gradients, script timing - all of it is executed, not re-derived.

*DOS* is a property of L3 + L0/L1 only. Nothing above L3 touches an OS header; the existing
`platform.h` already has win32 and dos implementations. Memory budget for real mode, measured from
the data hunk: code 137 KB + data 46 KB are fixed, and the two 320x200x5 bitplane rasters are 40 KB
each. That does not fit 640 KB together with samples, so the DOS build uses `-l=dos4g` (Watcom's
DOS extender) and keeps the framebuffer in extended memory; the real-mode path stays available for
the parts that fit.

*Moddability* needs three seams, and they must exist from day one:

1. **Override seam.** The translator emits one function per file with a *stable* name
   (`fn_0001fa02`, or better `Move_Walk` once annotated) into `recomp/`. Hand-written replacements
   live in `src/recomp/patches/` and are linked **before** the generated objects, so the linker
   prefers them - the same trick N64Recomp documents ("single file output mode" for patches). A mod
   is a directory of readable C functions with the original names, not a diff against generated code.
2. **Hook seam.** The runtime exposes named events (`scene_enter`, `frame_end`, `text_shown`,
   `sprite_draw`, ...) that a mod can attach to with one call, so most tweaks need no patching.
3. **Data seam.** Art, palettes and MovE scripts stay in `assets\game.pak`, which is our own
   container (`src/assetExport/Pack.cs`). Scripts are the game's own timeline format, so new
   scenes, new text and re-timed animations are data edits.

## Acceptance tests — machine state, never images

Parity is defined as **identical machine state**, not as a picture that looks right. The unit of
comparison is a canonical dump taken at a frame boundary: D0-D7, A0-A7, SR, PC, the custom-chip
register file, and the full RAM image (hashed; the full blob is emitted around the first
divergence). The driver is a frame-indexed input script, so any run can be replayed exactly.

| layer | test | cost |
|---|---|---|
| CPU | translated function == interpreted function: all registers + a memory hash over the touched ranges | seconds, automated |
| whole program | interpreted build vs translated build, same input script, state hash equal at **every** frame boundary | minutes, automated |
| OS surface | the call census: every library call the binary makes is implemented, and none is answered with 0 | seconds, automated |
| display | planar->chunky + palette is a pure function of RAM, so it is verified once with synthetic bitmaps and then never re-examined | once |

**Frame and pixel comparison is not an acceptance test and must not come back.** It was the method
of the hand port: it cannot cover a whole game, it cannot be automated honestly, and it collapses
back into "the picture looks wrong", i.e. the trial-and-error loop this architecture exists to
retire. `tools\verify-frames.ps1`, `ref\manifest.csv`, `tools\diff-frame.ps1`, `--match` and every
WinUAE capture are **legacy artefacts of the abandoned hand port**. They may keep running as a
regression check on that port, but they are never evidence about the recompilation and must not be
extended.

If the machine state matches at every frame boundary for a scripted run, the visuals follow by
construction - that is the whole argument, and it is why correctness is decided by
`translated == interpreted`, not by a screenshot.

## Time — cycles, not instructions

A frame is **141,875 68000 cycles** (PAL: 7,093,790 Hz / 50 fields), and that is the budget both
front ends spend per vblank (`EMU_CYCLES_PER_FRAME`, `src\runtime\amiga\machine.h`). It used to be
141,875 *instructions*, which is the same number read in the wrong unit: a 68000 instruction costs
4-40 cycles, so the emulated CPU was granted roughly ten times the work it can do in a frame. The
consequence was scene-dependent and looked like a rendering bug: nothing ever ran out of frame, so
scenes the A500 can only manage at ~10 Hz played at the full 50 Hz, while a global `--speed 30` in
`play.cmd` (the band-aid that had been standing in for the missing model) slowed *everything* to
30 %, including the scenes that were already right.

Three pieces make the clock:

1. **Per-instruction cost.** `CycleTable.cs` (generated by `tools\gen-cycles.ps1` from the
   interpreter's own 68000 table, which the oracle dumps with `--cyclestable`) is baked into the
   emitted C as a literal on every `rc_step(c, m, cycles)`. The interpreter charges the same number
   through `oracle_cycle_cost()`, so the two front ends cannot drift. Only the base table is used;
   the +2/+4 an indexed effective address costs - which lives in an extension word, not the opcode,
   and the rare DBcc-taken surcharge are not modelled (measured together: under 2 % of the total).
2. **The blitter owns the bus.** `rt_blit_run` charges the blit's DMA time - one slot per output
   word per enabled channel, two 68000 clocks each (`blitter.c`, HRM's lowres timing) - to the frame
   budget, and the budget carries a multi-frame debt across vblanks (the CPU is stuck waiting for
   the blitter). The blit itself still completes in one go; the bytes are identical, only the clock
   moves.
3. **Blaming the right party.** The host sleeps to 50 Hz (`plat_frame_sync`), never the emulator, and
   `--speed` is an inspection aid only.

Measured against the A500 capture in `docs\drawing-model.md`, per MovE step ("light" = the stretch
where the original keeps up, "heavy" = the desert/cloud phase):

| phase | A500 reference | this build | 
|---|---|---|
| light (script frames 91..210) | ~146,000 cycles/step (1.03 vblanks) | 160,613 (1.13) |
| heavy (script frames 210..290) | ~543,000 cycles/step (3.83 vblanks) | 512,801 (3.6), of which 319,000 blitter |

Reproduce with `--ticklog` (per-frame budget, instruction count and blitter cycles) plus the
engine's own step counter `DAT_0002C10C` out of the `--ram <frame>` dumps.

## What this retires

The hand port (`bin\win32\icftd.exe`) was deleted in the 2026-11-10 cleanup, together with every
capture and frame tool. What remains is the split that the plan needs:

| directory | role | ships? |
|---|---|---|
| `src\runtime\` | the machine the game code runs on: memory, library shims, heap, exec structures, blitter, planar display, platform | **yes** |
| `src\oracle\` | the 68000 front end: executes the original binary so it can be measured; produces `ref\fixtures` | no, a tool |
| `src\assetExport\` | formats **and** the 68000 interpreter + `rcmp`/`rleaf` differential harness | no, a tool |
| `src\recomp\` | (to be created) the translated functions and `fn_table` | **yes** |

`tools\gate.ps1` is three steps: exporter build, oracle build, interpreter fixtures. No image step
exists and none may be added.

## The platform surface, measured

From `docs\os-calls.csv` (79 call sites, 61 distinct LVOs). This is the whole of L1:

| library | calls | what the game needs |
|---|---|---|
| graphics | 34 | `BltBitMap`, `BltClear`, `WaitBlit`, `OwnBlitter`, `DisownBlitter`, `WaitTOF`, `WaitBOVP`, rasters/views/copper (`InitBitMap`, `InitRastPort`, `InitVPort`, `MakeVPort`, `MrgCop`, `LoadView`, `FreeCprList`, `FreeVPortCopLists`, `GetColorMap`, `FreeColorMap`), area fill (`InitArea`, `AreaMove`, `AreaDraw`, `AreaEnd`, `RectFill`), primitives (`Move`, `Draw`, `SetAPen`, `CBump`, `SetDrMd`), text (`OpenFont`, `CloseFont`, `Text`, `TextLength`, `SetFont`), sprites (`GetSprite`, `FreeSprite`), `DoCollision` |
| exec | 20 | `AllocMem`, `FreeMem`, `Forbid`/`Permit`, `OpenLibrary`/`CloseLibrary`/`OpenResource`, `AddPort`/`RemPort`, `GetMsg`/`WaitPort`/`ReplyMsg`, `AllocSignal`/`FreeSignal`, `OpenDevice`/`CloseDevice`/`DoIO`, `AddIntServer`/`RemIntServer`, `FindTask`, `Supervisor`, `Alert` |
| dos | 13 | `Open`, `Close`, `Read`, `Write`, `Seek`, `Lock`, `UnLock`, `Info`, `CurrentDir`, `Delay`, `ExNext`, `Output`, `Input`, plus the handler internals `open`/`close`/`expunge` |

Nine of those LVOs are ambiguous in the CSV (`-108`, `-96`, `-66`, `-54`, `-60`, `-30`, `-410`,
`-450`, `-462`); resolving them is a one-off disassembly read, and it changes the shim list, not
the architecture.

## Phases

### A - it runs (the intro plays from the original binary)

Done: Musashi vendored; image flattened at 0x4000; `src\runtime\amiga\{memory,machine}.c` with
memory map, custom-register file, named library bases, per-library LVO dispatch, `--watch`,
fail-fast dumps with disassembly, exit sentinel, a 64-entry PC ring and an unhandled-LVO report
that carries the return address. The `Process`/CLI record is built after the image load, the
50 Hz vertical blank runs the interrupt servers the game registers, and `src\runtime\amiga\display.c`
implements the planar half of `graphics.library` with a chunky present.

The original now boots as the CLI program it is, opens dos/graphics/layers/intuition/ciaa/input,
builds both of its views with 32 colours, presents a raster and keeps running. **The intro plays
from the original binary**: 478 presents (one per vertical blank) across its whole 477-frame
timeline, from the logo fade through the desert scene to the moving objects.

Two modelling errors had to be fixed to get there, and both were invisible in the pixel data -
only the counters showed them:

1. **`WaitTOF`/`WaitBOVP` must cost no CPU.** The shim used to "burn the rest of the frame" by
   executing game instructions. The first thing those instructions did was run the frame loop
   again, and its nested `WaitTOF` was swallowed by an "already waiting" guard, so one vblank
   produced ~21 frame callbacks: the timeline was consumed in a dozen frames and the game fell
   through to the main menu. A wait now only *posts* a request; `emu_run` ends the frame early
   with nothing executed. Measured afterwards: 478 intro ticks == the 477-frame timeline.
2. **The blitter's row stride is `2*words + mod`, not `mod`.** The pointer advances across the row
   and the modulo is added at the end. The engine's flipped-picture blits pass
   `mod = -(bpr + 2*words)` precisely so the stride comes out as `-bpr`; treating `mod` as the
   stride walked each blit 82 bytes through the heap, overran the plane, erased the `BitMap`
   header holding the other plane pointers, and silently lost most of every picture.

A third defect, found later, was a genuine deviation from the chipset in the A/B data path of
`blit.c`. The reference here is UAE's `blitter_dofast()` and the HRM, **not** the hand-written
port and **not** a screenshot:

3. **`BLTAFWM`/`BLTALWM` mask the word as it is *fetched*, before the shift register, and the
   shift register's hold word persists across lines.** The hardware does

   ```c
   bltadat &= blit_masktable[i];                                  /* i == 0 -> AFWM, i == words-1 -> ALWM */
   blitahold = (((uae_u32)bltaold << 16) | bltadat) >> ashift;
   bltaold = bltadat;                                             /* cleared once per blit, not per row */
   ```

   `blit.c` masked the *shifted output* and zeroed the hold at every row start. The engine is
   what makes this visible: when a picture blit is shifted and is not clipped at the right it
   emits **one extra trailing word, sets `ALWM = 0` and subtracts 2 from the A modulo**
   (`FUN_0001E8C8`, image `0x1EA4A..0x1EA5C`). That word exists only to catch the last `ASH`
   pixels the register pushes past the end of the row; `ALWM = 0` silences the extra *fetched*
   word, not the bits already in the register. Masking after the shift blanked the whole word, so
   every shifted sprite lost its last `ASH = dest_x & 15` columns - a right-edge cut of up to 15
   pixels whose size changed as the scene scrolled.

**Where Phase A ends (2026-11-10).** The original also runs *past* the intro: 30M instructions
reach frame 5823 with a raster presented on every frame, 79,965 blits, 0 dropped writes. The OS
surface is now measured on every run by `emu_lvo_report()`: **49 distinct library calls used,
86,898 calls total, 45 kinds implemented, 4 kinds answered with 0** — `diskfont.library -30`
(`OpenDiskFont`) and `-30/-36/-84` on the "mathffp" base (the IEEE single-precision Flt/Div/Fix used
by MovE opcode 0x05). Input is wired (`plat_pump` once per emulated frame, `/FIRE` on CIA-A PRA bit
7, joystick active-low on JOY0DAT).

Those four are **runtime** gaps, not emulator-debugging items: the translated build calls the same
shims, so they are implemented once, in the shared runtime, when the translated build first needs to
paint text. Phase A itself is frozen here - it is the oracle, and it is measured against by
**machine state**, never by `--dump`, `--window` or any picture.

### B - it runs fast (the recompilation proper)

Static translation of `dshell`'s 750 functions (137,816 bytes) to C, in the N64Recomp shape:

* **Input**: `export\code\dshell4k\dshell.img`, function boundaries from `re\model\functions.csv`
  (entry + size per function) and the disassembly in `re\disasm\dshell.asm`. The exporter already
  contains a 68000 interpreter (`src\assetExport\Cpu68k\`) - the translator is the same decoder
  that emits text instead of executing.
* **Output**: `src\recomp\fn_<addr>.c`, one function per file, plus `fn_table.c` (sorted address
  table for indirect calls) and a `cpu_t` context struct (`u32 d[8], a[8], pc; u16 sr;` plus the
  memory accessors shared with the emulator).
* **ABI**: literal instruction-to-C (`ctx->d[4] = add32(ctx->d[4], 0x20)`), `bsr/jsr <const>` →
  a direct C call, `rts` → `return`, `jsr (d16,A6)` → `os_call(cpu, d16)`, computed jumps →
  `cpu_jump(cpu, target)` which looks the address up in `fn_table` and falls back to the
  interpreter for anything not translated yet.
* **Incremental by construction**: the interpreter stays as the fallback, so partially translated
  builds run. Translate hot code first (`Move_Walk`, `Move_StepScript`, `Move_DrawNode`, the
  scene/game loops); the DOS build eventually needs all of it.
* **Validation**: for each function, run interpreter and translated C on identical fixtures
  (registers + touched memory hash). The C# `rcmp`/`rleaf` machinery already produces fixtures;
  the generated C gets the same treatment. Whole-game check: the frame hashes of the translated
  run must equal those of the pure-interpreter run.

### C - it is a port

Front end, scaling, widescreen, then the mod seams above.

## MS-DOS specifics to respect from day one

* No floating point in L0/L1/L2 (the 68000 has none; the code we generate and write must match).
* All buffers from `plat_alloc`, no host `malloc`, no static 1 MB arrays - the DOS build has to fit.
* `platform.h` only; `emu/` may include nothing but `types.h`, `platform.h`, `gfx.h`.
* Frame timing through `plat_frame_sync`, never host clocks inside the emulator.
