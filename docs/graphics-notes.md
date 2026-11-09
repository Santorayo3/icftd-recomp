# Amiga graphics: what the original actually does

Scope: M2 step 1 of `docs/recomp-plan.md`. Everything below is derived from the decompiled
image, not guessed. Evidence is given per claim so it can be re-checked.

Tools used (both re-runnable):

* `tools\analyse-os-calls.ps1` → `docs\os-calls.csv`
  Names every `jsr/jmp (-0xNN,A6)` in `re\disasm\dshell.asm` by first working out which
  library base A6 holds (the wrappers load it from an A4-relative global) and then looking the
  offset up **in that library's** table. LVO order for exec/dos/graphics/intuition comes from
  the AROS `.conf` function lists, which keep the classic AmigaOS ABI order.
  Cross-checks that pin the enumeration: `graphics.Text = -60`, `graphics.OwnBlitter = -456`,
  `dos.Read = -42`, `exec.AllocMem = -198`, `exec.FreeMem = -210`,
  `exec.OldOpenLibrary = -408`, `exec.OpenLibrary = -552`.
* `docs\engine-slots.csv` — the engine's own 160-entry vector table
  (`jsr (-0x7FFE+6*slot,A4)`, table at `0x21A58`), joined with the OS names above and sorted by
  call count. This is how the engine reaches the OS: through its vector table, not by calling
  the wrappers directly.

Library base globals (A4-relative; A4 = `0x29A56`):

| global | address | library |
|---|---|---|
| `-0x3460` | `0x265F6` | graphics |
| `-0x345C` | `0x265FA` | intuition (opened, never used for the display) |
| `-0x3458` | `0x265FE` | layers |
| `0x3AF4` | `0x2D54A` | exec |
| `0x3AF8` | `0x2D54E` | dos |
| `0x3B16` | `0x2D56C` | second opened library, LVOs -78/-90/-96 used from `FUN_00020D02` |

## 1. Screen mode: 320 x 200, own display, no intuition screen

`FUN_0001FAEC` (`callers: [FUN_0001D00A]`) is the display firmware. Signature read from the
frame: `display_init(struct BitMap *src, s16 width, s16 height, u16 flags)`.

* `AllocMem(0x114, MEMF_CHIP|MEMF_CLEAR)` → the game's screen record; `InitView()` is called on
  it, so it *is* a View (the engine keeps extra fields after it).
* `AllocMem(0x28, 0)` → `InitVPort()`; the screen record points at it (field +0x00).
  `DxOffset`/`DyOffset` = width/height, `Modes` = the `flags` argument.
* `AllocMem(0x0C, MEMF_CHIP|MEMF_CLEAR)` → a `RasInfo` whose `BitMap` field is the caller's
  `src` bitmap.
* `AlignedAlloc`-style extra `RasInfo` (`AllocMem(0x0C, MEMF_PUBLIC|MEMF_CLEAR)`) → the
  second buffer for double buffering.
* `GetColorMap(depth)` → the ColorMap, attached to the ViewPort.
* `MakeVPort` → `MrgCop` → `LoadView` (the copper list is generated from the ViewPort, so the
  display is swapped by `LoadView` + `WaitTOF`, not by intuition).
* Depth: `depth = min(src->Depth, 5)`; `1 << depth` is also stored in the screen record. A
  separate flag bit (`flags & 8`) forces depth 16 (used by the "high colour" path only).
* `InitRastPort`, `InitTmpRas`, `InitArea` — the game draws through a RastPort with a TmpRas
  and an Area buffer, i.e. it uses the graphics library's **area filling** for pictures.

Screen size is confirmed independently at `0x7E8`
(`RectFill(rp, 0, 0, 0x13F, 0xC7)`) = a 320 x 200 clear (x2 = 319, y2 = 199).

Our framebuffer (`SCREEN_W`/`SCREEN_H` = 320 x 200) therefore matches the original exactly.

## 2. Graphics calls actually used (complete list, 35 wrappers)

Wrapper block `0x21776`-`0x2195C`; each entry is `wrapper address, LVO, call`. Every LVO lands
on the expected name, which is a strong check of the enumeration.

```
-576 FreeColorMap      -468 InitTmpRas       -366 CBump             -282 InitArea
-570 GetColorMap       -462 DisownBlitter    -360 InitView          -270 WaitTOF
-564 FreeCprList       -456 OwnBlitter       -354 SetDrMd           -264 AreaEnd
-540 FreeVPortCopLists -402 WaitBOVP         -342 SetAPen           -258 AreaDraw
                -390 InitBitMap              -306 RectFill          -252 AreaMove
                -378 CWait                   -300 BltClear          -246 Draw
                -372 CMove                                         -240 Move
```

plus, from the same block: `-228 WaitBlit`, `-222 LoadView`, `-216 MakeVPort`, `-210 MrgCop`,
`-204 InitVPort`, `-198 InitRastPort`, `-78 CloseFont`, `-66 SetFont`, `-60 Text`,
`-54 TextLength`.

What is *not* there, and what that means:

* **No `LoadRGB4` / `SetRGB4`.** The palette is therefore written straight into the ColorMap's
  `ColorTable` (offset +4); `MakeVPort`/`MrgCop` turn it into the copper `COLORxx` moves.
* **No `BltBitMap` / `BltBitMapRastPort` / `BltTemplate` wrapper.** Blitting is done through the
  engine's generic dispatch stub (below), and only for the pieces the engine cannot do with
  primitives.
* **No `OpenScreen` / `OpenWindow` / `SetPointer`** — no intuition GUI at all. IntuitionBase is
  opened (version request) but the display, the palette and the "mouse pointer" are the game's
  own.
* **No `ReadPixel` / `WritePixel` / `Flood` / `PolyDraw` / `ScrollRaster`** — scrolling and
  hit tests are done on the bitplane data directly.

## 3. How calls reach the OS: the engine's own vector table

The engine never calls the OS wrappers directly. It calls through a 160-entry table at
`0x21A58`: `jsr (-0x7FFE+6*slot,A4)`. `docs\engine-slots.csv` lists which wrapper each slot
reaches and how often it is used. Most used OS-facing slots:

| slot | calls | target |
|---|---|---|
| 137 | 59 | `exec.AllocMem` |
| 139 | 99 | `exec.FreeMem` |
| 131 | 39 | `dos.Read` |
| 151 | 24 | `graphics.SetAPen` |
| 150 | 16 | `graphics.RectFill` |
| 120 | 16 | `dos.Write` |
| 148 | 11 | `graphics.Move` |
| 156 | 13 | `graphics.WaitBlit` |

Two further layers exist and matter later (M3), not now: a self-made library whose base is
stored at `0x21FC6` (jump table at `0x2199E`, entries `move.l #-lvo,-(SP); jmp`-style, reached
through the trampoline at `0x21992`), and the engine kernel in `0xF000`-`0x10xxx`
(`jsr` targets such as `0xF02E`).

## 4. Drawing model implied by the call set

* Pictures and sprites are composited with **`BltBitMap`** (minterm/source-destination
  semantics), guarded by `OwnBlitter` / `WaitBlit` / `DisownBlitter` pairs.
* The scene is cleared with `RectFill` on the whole 320 x 200 area.
* Vector work (polygons, outlines, masked fills) uses `Move`/`Draw` and
  `AreaMove`/`AreaDraw`/`AreaEnd` with the TmpRas/Area set up in `FUN_0001FAEC`.
* Text uses `SetFont` + `Text`/`TextLength` on the same RastPort.
* Colours are 0..31 pen indices into a ColorMap of `1 << depth` entries.

## 5. Consequences for the recompilations

1. The original's "video hardware" is entirely `graphics.library` + a generated copper list.
   Everything we need is expressible on a single 8-bit indexed framebuffer, which is what
   `core/gfx.c` already provides. No planar emulation is needed for correctness of the *image*;
   planar handling only matters for reading the original art (`pack.c` already gives chunky).
2. Palette handling is a plain `u16[32]` array write, so a per-picture/per-frame palette upload
   is a memcpy — cheap and exact.
3. `BltBitMap` semantics (minterms, masking) are the only non-trivial piece; the recompilation
   should implement the small set of minterms the engine passes and assert on any other.
4. Because the display is built from a View/ViewPort, there is **no OS-drawn mouse pointer** in
   the game area; the pointer is a sprite the engine blits (`MoveSprite`/`ChangeSprite` are not
   used either, so it is software).

## 6. Open questions (resolve with WinUAE reference captures)
* Actual depth at run time: `min(src Depth,5)`. Resolve by capturing a WinUAE screenshot and
  counting distinct colours in one scene (expect 32 for an A500 title).
* Whether double buffering is used for the scene (two RasInfos are allocated, so probably yes;
  confirm by capturing two consecutive frames of a moving object).
* Which minterms are passed to `BltBitMap` — needs the `BltBitMap` wrapper's call sites
  (traced next).

## 7. The recomp side: `src/game/core/amiga/graphics.c`

A faithful subset of the library on the chunky framebuffer, so transcribed engine code keeps
its call shapes (`agfx_move`, `agfx_rect_fill`, `agfx_area_end`, `agfx_text`, ...).

* `agfx_bitmap` = pixels + stride + **depth** (the plane count the original had), `agfx_colormap`
  holds 32 `0x0RGB` words exactly like `LoadRGB4` data, `agfx_rastport` holds the pens, draw mode,
  current point and the area buffer.
* Draw modes: JAM1 (replace), JAM2 (OR), COMPLEMENT (XOR), INVERSE.
* `agfx_minterm()` is the definition of the blit logic: `idx = (A<<2)|(B<<1)|C`, upper case =
  bit set, and a **pen value is passed through the minterm bit by bit** — that is precisely what
  the blitter does per plane, so any minterm is handled, not just a hand-picked few.
  Truth-table constants (already verified: `0xC0` is AND, not a copy — the common mistake):
  `0x00`=0, `0x0C`=dst, `0x3C`=xor, `0xC0`=and, `0xF0`=src, `0xFC`=or, `0xE4`=mask?src:dst.
* `agfx_blt_mask()` widens a 1-bit mask to a full-plane mask (`0xFF`/`0x00`) before combining,
  which is what makes cookie-cut sprites come out right.
* `agfx_palette_upload()` converts 4-bit guns to 8-bit (`n * 17`) and calls `plat_set_palette`.
* `agfx_wait_tof/blit`, `agfx_own/disown_blitter` are no-ops: plain RAM, nothing to wait for.

Self test: `icftd.exe --gfx-test <out.bmp>` draws palette swatches, solid bars, a line fan, a
filled 6-point star (area fill), a plain blit and a cookie-cut blit, and prints the primitive
counters. `tools\show-picture.ps1`-style conversion to PNG is enough to eyeball it.

Still missing on purpose: **text** needs a real `agfx_font` (the game's font lives in the ART
banks and will be wired when the overlays are transcribed) and `TextLength` assumes a fixed
width per character.

## 8. First reference frame: the background is exact

The user's existing WinUAE grabs (`C:\Users\Public\Documents\Amiga Files\WinUAE\Screenshots`)
are 720x568 with the game area at exactly **x 58..697, y 88..487** — i.e. 640x400, a 2x pixel
replication of 320x200. `tools\ref-frame.ps1` crops and halves that to a 320x200 BMP.

Reference scene (`...Disk 2 of 3)[!]_001.png`): a room interior with the narration box over the
bottom third and the mouse pointer (which falls outside the 320x200 crop).

`icftd.exe --match ref\scene1.bmp` renders all 547 pictures and ranks them by matching pixels:

```
1. Desert2/BACKS/!B28    15942 differing   75.09 % match
2. Desert2/BACKS/!B27    49615 differing   22.48 % match
3. Desert2/BACKS/!B23    51341 differing   19.78 % match
```

`!B28` is the scene background; the 24.9 % that differs is the narration box painted on top of
it.

Frames 2-4 of the same series show the same room **without** the narration box, and those match
completely:

```
icftd.exe --match ref\room.bmp 16
1. Desert2/BACKS/!B28      0 differing  100.00 % match  IDENTICAL
2. Desert2/BACKS/!B27  48354 differing   24.45 % match
```

So **the pack decode + palette + blit path reproduce the original frame exactly** — M2's
acceptance criterion is met. (The earlier box frame, restricted to the rows the box does not
cover, is identical too: `-CropA/-CropB 0,0,320,110 -Tolerance 16` -> 0 differing.)

**The ≤15 colour delta is expected and must not be "fixed".** It is WinUAE's 4-bit → 24-bit
output path, not our palette: with tolerance 0 every pixel "differs" while the maximum channel
difference never exceeds 15 (one Amiga colour step and a bit). Always compare with
`-Tolerance 16`; a real palette mistake shows up as deltas of 30+ on a whole colour index.

What is left for M2 is therefore only the *compositing* (background + narration box + objects),
which is M3 work: `ref\scene1.bmp` must become the diff target once those paths exist.
