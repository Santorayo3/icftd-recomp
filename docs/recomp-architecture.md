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
| chipset model: blitter, copper, bitplanes, CIA, Paula (`L0`) | **yes, necessarily** | the game writes hardware registers directly, so a native port must implement that hardware in software; N64Recomp's runtime does the same for RDP/RSP and nobody calls it an emulator |
| `platform.h` win32 / dos (`L3`) | **yes** | window, input, files, heap, 50 Hz clock |

After Phase B the executable contains **no 68k instruction decoding**. It is translated C calling
L0/L1/L3, which is exactly the shape of a native recompiled port.

We are also not building a general Amiga emulator: no floppy emulation, no Kickstart, no AmigaOS -
only the library entries and chipset features this one game uses.

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

* **A - it runs.** Interpreter in C (`src/game/core/emu/`), L0/L1 shims, AmigaDOS load of `dshell`,
  50 Hz interrupt, framebuffer to `platform.h`. Deliverable: `icftd.exe --emu` plays the original.
* **B - it runs fast.** Static translation of `dshell`'s 750 functions to C (N64Recomp design:
  literal instruction-to-C, `jsr` to a call, `jsr (d16,A6)` to an LVO dispatch, jump tables to
  `switch`), validated function-by-function against the interpreter.
* **C - it is a port.** Front end, scaling, widescreen, then the mod seams above.

## MS-DOS specifics to respect from day one

* No floating point in L0/L1/L2 (the 68000 has none; the code we generate and write must match).
* All buffers from `plat_alloc`, no host `malloc`, no static 1 MB arrays - the DOS build has to fit.
* `platform.h` only; `emu/` may include nothing but `types.h`, `platform.h`, `gfx.h`.
* Frame timing through `plat_frame_sync`, never host clocks inside the emulator.
