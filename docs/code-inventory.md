# Code inventory: which shipped files contain 68k code?

Answer: **only `dshell`.** Everything else the game ships is data (resource banks, scripts,
samples, save files). The decompilation in `re\decomp_all\dshell` (750 functions) therefore
covers 100% of the game's machine code.

This matters because `OPEN`, `INSTS`, `ANI`, `UNDER`, `SCORES`, `BIGANT`, ... look like modules
but are documented as banks in `docs/modules.md`-style notes elsewhere; treating them as code
modules led to the (wrong) assumption that a piece of the engine was still un-decompiled.

## Evidence

`tools\ghidra\run-ghidra.ps1` can only ingest an Amiga hunk executable. Feeding it anything else
fails at the hunk header:

```
> ICFTD.AmigaExport.exe hunk export\disk1\OPEN
not an Amiga hunk executable
```

Magic bytes of every non-data candidate (`export\disk1`, `export\disk2`, `export\disk3`):

| file | size | first bytes | what it is |
|---|---|---|---|
| `dshell` | 160,332 | `00 00 03 f3` | **hunk executable - the only code** |
| `OPEN` | 105,328 | `00 42 00 00 16 d6` | resource bank, 66 entries |
| `INSTS` | 98,102 | bank | resource bank |
| `UNDER` | 88,977 | bank | resource bank |
| `SCORES` | 11,558 | bank | resource bank |
| `ANI` | 54,955 | bank | resource bank |
| `BIGANT` | 95,025 | bank, 106 entries | resource bank |
| `CHICK` | 42,519 | bank, 8 entries | resource bank |
| `FIGHT` | 42,740 | bank, 46 entries | resource bank |
| `FIRE` | 30,401 | bank, 37 entries | resource bank |
| `HOSP` | 60,349 | bank, 10 entries | resource bank |
| `HDesert` | 206 | ASCII | AmigaDOS start script |
| `HD_INSTALL` | 747 | ASCII | AmigaDOS installer script |
| `rs` | - | `FORM....8SVX` | IFF 8-bit sample |
| `desert.dat`, `phone.dat` | - | - | save/data blobs |

Bank layout (`src/assetExport/ResBank.cs`): `u16 count`, `u32 tableSize`, then
`count` entries of `{u16 nameLen, name, pad, u32 offset, u32 size}`. Parsing the tables of
`OPEN`, `INSTS`, `UNDER`, `SCORES` and `ANI` found **no entry starting with hunk magic**; the
largest entries are MovE scripts (`4d 6f 76 45` = "MovE"), SMS pictures (`53 4d 53 00` =
"SMS\0"), tiles (`.til`), sprite sets (`.ss`) and small (`.tiny`) art - all data.

## The MovE API is inside dshell

`dshell` exports its animation/script runtime through the vector table at `0x21a58`
(160 x 6-byte `jmp abs`). Slots 81..105 are the MovE layer:

| slot | address | role |
|---|---|---|
| 81 | `0x21c3e` | MovE init |
| 84 | `0x21c50` | **run loop** (`FUN_0001d2c6`) - `(root, tickCallback)` |
| 93 | `0x21c86` | **parse script by name** (`FUN_0001de7a`) |
| 95 | `0x21c92` | blit |
| 96 | `0x21c98` | **run script by name** (`FUN_0001eb94`) - `(bank, 0, name, callback)` |
| 105 | `0x21cce` | `Move_Walk` (`FUN_0001fa02`) |

`FUN_0001eb94` resolves the script with slot 93, substitutes `&DAT_00021cce` (slot 105) when
`callback == NULL`, and hands both to slot 84. So `Move_Walk` is the *default* per-frame
callback, and every scene that needs more than the script supplies passes its own.

## Where the intro actually is

```
FUN_00009870                       intro setup: opens "Desert1:OPEN", loads 3 sfx handles,
                                   then slot96("OPEN", 0, "!OPN" @0x993c, FUN_00009630)
  FUN_00009630  (per-frame callback) -> returns true at frame 0x1dd (477), ending the run loop
      every frame: slot105(script+0x2c, 0, 0)          <- the "!OPN" MovE script drives the visuals
                   busy-wait of DAT_0002688e iterations
      frame 0xa0 (160) FUN_0000ef88()
      frame 200        slot27(3)
      frame 0xca (202) slot b0c(sfx1, 3)
      frame 0xcc (204) slot b18()
      frame 0x136 (310) FUN_0000ef88()
      frame 0x17b (379) slot27(2), slot b0c(sfx2, 3)
      frame 0x17d (381) slot b0c(sfx2, 2)
      frame 0x185 (389) slot b0c(sfx3, 3)
      frame 0x187 (391) slot b0c(sfx3, 2)
      frame 0x18a (394) slot b18() twice
      frame 400        FUN_0000efc0() twice
      frame > 477      cleanup: b1e(), free the three sfx handles
```

The movie is therefore **477 frames at 50 Hz = 9.54 s**, and all of its visible content comes
from the `!OPN` MovE script plus the three fades/sfx events above. Nothing in the visual path
is un-decompiled.

The two end screens are the same mechanism from the other side:

```
FUN_0000a4d6  -> FUN_0000a44a(which)
                   opens "Desert1:OPEN" again, then slot96("desert1.", 0, "!WIN" or "!LOS",
                   FUN_0000a3a2)     (DAT_00022d68: 1 = win, else lose)
  FUN_0000a3a2  per frame: slot105 x2, slot 0xc44, and the ending text from
                PTR_s_The_ant_queen_was_dead_and__for_t_00022d6a[DAT_00022d68-1]
```

`!OPN` = opening, `!WIN` = win ending, `!LOS` = lose ending. The "Load Game" screen the intro
leads into is therefore *not* one of these three scripts; it comes after `FUN_00009630` returns,
and is still to be located inside dshell (it is a menu drawn from bank art, no separate code
file involved).
