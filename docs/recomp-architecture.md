# Recompilation architecture (decision, 2026-11-10)

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

## What ships, and what is scaffolding

This is a recompilation, not an emulator port. The distinction is worth stating explicitly because
Phase A *looks* like an emulator and is not one:

| piece | in the shipped game? | role |
|---|---|---|
| 68000 interpreter (Musashi, `src\game\core\emu`) | **no** | scaffolding: boots the original binary today, and afterwards is the oracle that proves each translated function faithful |
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
50 Hz), while the translated game code itself runs at roughly the original instruction rate.
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
   live in `src/game/core/patches/` and are linked **before** the generated objects, so the linker
   prefers them - the same trick N64Recomp documents ("single file output mode" for patches). A mod
   is a directory of readable C functions with the original names, not a diff against generated code.
2. **Hook seam.** The runtime exposes named events (`scene_enter`, `frame_end`, `text_shown`,
   `sprite_draw`, ...) that a mod can attach to with one call, so most tweaks need no patching.
3. **Data seam.** Art, palettes and MovE scripts stay in `assets\game.pak`, which is our own
   container (`src/assetExport/Pack.cs`). Scripts are the game's own timeline format, so new
   scenes, new text and re-timed animations are data edits.

## Acceptance tests

| layer | test | cost |
|---|---|---|
| CPU | translated function == interpreted function, all registers + memory hash | seconds, automated |
| L0/L1 | the same frame produced by the emulator and by the ported front end, per pixel | seconds |
| whole game | the original disk image boots to the first `LoadView` and plays | manual, once |

The pixel gate we have today (`tools\verify-frames.ps1`, `ref\manifest.csv`) survives as the L0/L1
test, but it stops being the *development* loop: correctness is decided by `translated ==
interpreted`, not by a screenshot.

## What this retires

`src/game/core/move.c`, `intro.c` and the composition in `gfx.c` are hand-written re-derivations of
engine behaviour. They become a cross-check oracle and are retired once the emulated path runs. Kept
and extended: `Cpu68k` (differential oracle), the hunk/ADF loaders, `agfx_blit` +
`agfx_mask_from_key`, `docs\os-calls.csv`, the gate, `tools\port-diff.ps1`.

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

### A - it runs (in progress, ~80% of the plumbing done)

Done: Musashi vendored; image flattened at 0x4000; `src\game\core\emu\{mem,machine}.c` with
memory map, custom-register stub, named library bases, per-library LVO dispatch, `--watch`,
fail-fast dumps with disassembly, exit sentinel. Shims cover most of exec and dos, and the whole
graphics setup path. The binary executes ~3M instructions and reaches `graphics.library` init.

Remaining, in order:

1. **`main` returns 20 after 16,880 instructions at frame 0.** Last calls before the exit are an
   unhandled `-78` on `icon.library` and `-6`/`-18`/`-12` on the generic resource base (the trio a
   **DOS handler** answers, not a resource). Add the *return address* to the unhandled-LVO print -
   that names the code path immediately - then fix whatever those calls need.
2. **50 Hz interrupt model.** `WaitTOF` currently just bumps a counter. Needed: a tick that posts
   the vblank message (`exec` software interrupt + the `AddIntServer` chain) and the input events,
   so `WaitPort`/`GetMsg` in the main loop return.
3. **`graphics.BltBitMap` / `BltClear` / `RectFill` / `Area*` / `Text`, plus `LoadView` →
   present.** Render into our *chunky* framebuffer: read the planar `BitMap` (BytesPerRow @0,
   Rows @2, Depth @5, plane pointers @8+4n), convert with the `ColorMap` table, blit with the
   minterm/key rules the game passes. `LoadView` chains View → ViewPort (@0) → RasInfo (@38) →
   BitMap (@4); presenting is a plane→chunky conversion of the two rasters.
4. Milestone: **the intro plays from the original binary.** Then `--emu` becomes the reference
   implementation the translator is measured against.

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
