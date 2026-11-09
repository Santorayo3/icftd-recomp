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
FUN_00009870                       intro setup: opens "Desert1:OPEN", loads 3 sfx handles
                                   from "Desert1:sfx" (voice1, met, exp), loads the score
                                   file, then slot96(0, 0, "!OPN" @0x993c, FUN_00009630)
  FUN_00009630  (per-frame callback) -> returns true at frame 0x1dd (477), ending the run loop
```

`FUN_00009630` disassembled (0x9630..0x9868) is the whole timeline. Per frame:

```
jsr slot60      = FUN_000011BF0  reads JOY0DAT ($DFF00C), sets DAT_00024A84 on a button
                 -> the intro is skippable; DAT_00024A84 jumps the counter to 500
(then, first call only: slot38(1) = FUN_00009CC4 restores the scene palette,
 g_moveScript = script, slot99("MAIN") = FUN_0001F186 finds the MAIN node,
 slot102(1, node, 0,0,0,0) = FUN_0001F2AE runs its first command)
busy-wait of DAT_0002688E   <- BSS, never written anywhere: 0 iterations, 50 Hz is exact
slot105(script->0x2C, 0, 0) = FUN_0001FA02 Move_Walk    <- the "!OPN" script, once per frame
```

and then exactly one event per frame, from a subtract chain over the counter:

| frame | call | what it is |
|---|---|---|
| 160 (0xA0) | `FUN_0000EF88(110, 60)` | music tempo -> 60 over 110 frames |
| 200 | `FUN_0000EFA6(3)` | stop channel 3 |
| 202 (0xCA) | `FUN_00009B60(voice1, period, .., 3, 0x3F)` | voice-over |
| 204 (0xCC) | `FUN_00009BCA(3)` | arm audio channel 3 |
| 310 (0x136) | `FUN_0000EF88(400, 220)` | music tempo -> 220 over 400 frames |
| 379 (0x17B) | `FUN_0000EFA6(2)` + `FUN_00009B60(met, .., 3, 3F)` | |
| 381 (0x17D) | `FUN_00009B60(met, .., 2, 3F)` | |
| 389 (0x185) | `FUN_00009B60(exp, 0x384, .., 3, 3F)` | |
| 391 (0x187) | `FUN_00009B60(exp, 0x384, .., 2, 3F)` | |
| 394 (0x18A) | `FUN_00009BCA(2)` + `FUN_00009BCA(3)` | |
| 400 (0x190) | `FUN_0000EFC0(2)` + `FUN_0000EFC0(3)` | restore channel defaults |
| >477 | `FUN_00009BEC()`, FreeMem x3 | cleanup, run loop stops |

**The timeline is audio only.** Nothing in it draws: the moving picture is entirely the
`!OPN` MovE script, so a frame-exact intro needs the script's own timing, not this table.
`FUN_0000EF88` is a 2-argument wrapper (`D0`/`D1` from the stack, `A6 = DAT_00023C5E`) into
`FUN_0000F608`, which stores `{current<<8, rate, target<<8}` at +0x38/+0x3A/+0x3C of the
490-byte block allocated in `FUN_0000ED90` and interpolated per interrupt by
`FUN_0000F646` (the music player's tempo). `FUN_0000EFC0` = `FUN_0000F6B0` restores one
channel word from the base table at +6, `FUN_0000EFA6` = `FUN_0000F692` zeroes it.

The two end screens are the same mechanism from the other side:

```
FUN_0000a4d6  -> FUN_0000a44a(which)
                   opens "Desert1:OPEN" again, then slot96(0, 0, "!WIN" or "!LOS",
                   FUN_0000a3a2)     (DAT_00022d68: 1 = win, else lose)
  FUN_0000a3a2  per frame: slot105 x2, slot 0xc44, and the ending text from
                PTR_s_The_ant_queen_was_dead_and__for_t_00022d6a[DAT_00022d68-1]
```

`!OPN` = opening, `!WIN` = win ending, `!LOS` = lose ending. The "Load Game" screen the intro
leads into is therefore *not* one of these three scripts; it comes after `FUN_00009630` returns,
and is still to be located inside dshell (it is a menu drawn from bank art, no separate code
file involved).

## Ported

`src\game\core\intro.c` is `FUN_00009870` + `FUN_00009630`; `icftd.exe` (no arguments) runs it
in the window, `icftd.exe --start <from> <to> <prefix>` runs it headless and writes BMPs.
The sound events are written to the `--trace` file as `audio <frame> ...` lines until sweep S7.
