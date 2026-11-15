# Amiga graphics: what the original actually does

Scope: engine graphics, derived from the decompiled code and the disassembly. Everything below is
fact about the original, not about any port of it. Evidence is given per claim so it can be
re-checked.

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

### The display window is not always the whole screen

`DIWSTRT`/`DIWSTOP` are programmed by the copper list, and the area outside them is the border
(`COLOR00`). Most screens run the list `MrgCop` builds for a 320x200 ViewPort, `2C81..F4C1`, i.e. the
full width. The scrolling minigames install their own lists and program a narrower window:

| screen | copper list | DIWSTRT..DIWSTOP | window |
|---|---|---|---|
| flight (`FUN_00011F64`), and the ant nest, which is a scene of the same runner | template `0x24A90` | `2C90..E0B0` | 288 x 180, inset 16 px left and right |
| hospital escape (`FUN_00017F34`) | template `0x24EB2` | `2C90..E0B0` | 288 x 180 |
| chicken race (`FUN_0001BE80`) | template `0x2621E` | `1D61..F5D1` | 368 x 216 |

The horizontal field counts lores pixels from the standard window's edge `0x81`, ignores bit 0 (the
hires half-pixel) and has DIWSTOP's ninth bit implied, so `81..C1` is 320 px and `90..B0` is 288 px
starting 16 px in. The width is not an accident: those lists fetch 19 words = 304 px per line
(DDF `38..C8`) with a fine scroll of 0..15, so 288 is fetch width minus the maximum delay, and the
engine's own row arithmetic agrees (`FUN_0001B94A`: `(bitmapWidth - 0x130)/8` = the row's spare bytes
beyond 304). The border therefore sits exactly where the scrolling renderer has not finished its
strip - which is what it is for.

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

