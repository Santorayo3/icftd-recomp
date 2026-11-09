# How the engine draws a picture (transparency, planes, channels)

Everything here comes from the decompiled original, not from observation:

| fact | where it comes from |
|---|---|
| a picture's 1-bit mask is built lazily, on first draw | `FUN_0001d5ce` (called by `FUN_0001d642` after `Sms_Load`) |
| the mask is built **by the Amiga blitter** from the picture's planes | `FUN_0001e504` (writes `BLTCON0/1`, `BLTAFWM`, `BLTSIZE`, minterm tables `DAT_000265de` / `DAT_000265be`) |
| the mask's mode **is the picture's key word** | `FUN_0001d5ce` passes `*(u16*)(bitmap + 6)` as the minterm selector |
| the key comes from the SMS header at **+18** | `Sms_Load` (0x1EC42) copies `DAT_0002c4d0` (= header +0x0E = file +18) into `bitmap[3]` (= +6) |
| the node's default channel comes from the SMS header at **+20** | same function: `*(u32*)(bitmap + 0x34) = DAT_0002c4d2` (= file +20) |
| drawing uses minterm 0xCA with that mask and a folded channel | `Move_DrawNode` (0x1DBD0) |

`Sms_Load` is reached from the picture loader through vector slot 98
(`DAT_00021ca4` = `jmp 0x1EC42`), which is why the whole chain is in the image and not in a
library.

## The two mechanisms are independent

**1. The channel decides which planes the picture writes.** The word is `u32`, one nibble per
plane, low nibble first. `Move_DrawNode` folds it before the blit:

```
folded = g_planeOrMask[g_screenDepth] | (node.channel & g_planeAndMask[g_screenDepth])
```

with both tables read from the image (`g_planeOrMask` 0x26718, `g_planeAndMask` 0x266f4).
`FUN_0001E8C8` then walks **the destination's planes** (the screen depth, not the picture's
plane count), one nibble each:

| nibble | meaning |
|---|---|
| `8` | leave the destination plane alone (no blit for that plane) |
| `0`..`7` | take source plane `nibble`; if the bitmap has no such plane the blitter falls through to the constant path |
| `9`..`F` | force the plane to `nibble & 1` |

This is what makes a 3-plane sprite with channel `8888D888` work: nibbles 0..2 keep the
destination and nibble 3 (`D`) sets bit 3, which is the Cinemaware logo's **shine** - a
brightness pulse over an already-drawn picture. Bounding the loop by the picture's plane count
(as the port did first) turns that sprite into a no-op and the shine vanishes.

**2. The key decides which pixels are not written at all.** `key` is a colour index; the mask is
"opaque where colour != key", limited to the picture's planes. `key = 15` on `IT.win` is the
orange frame around the title, `key = 4` on `SkyT.win`, `key = 0` on most sprite art.

## The frame loop (`FUN_0001d2c6`, called from `FUN_0001d3a2`)

```c
g_screenDepth = DAT_0002655c;      /* 5 */
DAT_0002c10c = 0;                  /* frame counter */
DAT_0002c112 = 1;                  /* step */
while (1) {
    if ((*tick)(root, 0, 0) != 0) break;   /* vector 105 -> Move_Walk, the module may replace it */
    FUN_0001d1da();                        /* flip the two screen buffers, wait for the blitter */
    DAT_0002c10c++;
}
```

So: walk, flip, count - one step per vblank (50 Hz), and the display shows the *previous*
frame because of the double buffer (`DAT_00026612` / `DAT_0002660e` swap every frame).

## Measured timing (reference capture, 2026-11-09)

`tools\winuae-capture.ps1` (the config now renders **320x256**, so a grab is already the game's
own pixel grid) plus `tools\capture-frames.ps1 -Crop 0,0,320,200` and `tools\cap-timeline.ps1`
give a brightness profile of the real intro. Comparing it with our own 1200-frame render:

| event | original | port | script frame |
|---|---|---|---|
| logo first appears | 40.0 s | 0.4 s | 20 |
| desert backdrop at full brightness | 43.5 s | 4.1 s | ~171-204 |
| fade to black | 74.3 s | 9.8 s | 448 + 40 |
| Load Game screen | 78.0 s | - | - |

The **early pacing matches**: logo -> desert is 3.54 s in the original and 3.68 s in the port,
i.e. 171 script frames at ~48 Hz. One MovE step per vblank is right.

The **later phases do not**: the original takes 34.3 s from the logo to black, the port 9.4 s.
The script frames are identical (448), so the original is running at roughly **10 Hz** there.
The MovE loop is one iteration per vblank *only if it can keep up*, and with the full desert,
the cloud panning and the palette work a 7 MHz A500 cannot. Our software renderer is much
faster, so it advances one script frame per 20 ms and the cinematic plays ~3.7x too fast.

Reproducing that faithfully needs a cost model for the blitter (the hardware-model pillar).
Until then `move.c` paces at 50 Hz: correct for the light phases, too fast for the heavy ones.

## Consequences for the port

* `pack.h`'s `pic_hdr` carries `key` and `channel` (`PIC_HDR_BYTES` 20); the pack is version 2
  and `pak_open` refuses version 1, because a v1 pack has no key/channel at all.
* `LoadPicture` copies them into the node (`key`, `channel`, `planes`); `DrawNode` skips
  `px == key` and runs `ChannelBlend` over the screen depth with the two mask tables.
* Opcode `0x10` overrides the channel per node; `0x13` clamps the source rectangle to the
  bitmap.
* The old guesses (`key = 0`, `channel = 0x76543210`) are gone. They were the purple panels and
  the orange box in the first intro renders.

## How to check a picture quickly

```powershell
src\assetExport\bin\Debug\net10.0\ICFTD.AmigaExport.exe smsinfo export\disk1\OPEN IT.win
IT.win  5156B  156x152 planes=4 mask=CCCC3210 palFlag=0001  key=15 ...
```

`mask=` in that line is the channel (`0xCCCC3210`), `key=` the transparent colour. If a picture
looks wrong, compare those two numbers with the `ch=` in a `--trace` line for the same object:
they must match unless the script sets its own channel with opcode `0x10`.
