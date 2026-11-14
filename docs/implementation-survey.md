# Implementation survey — what of the original game is in the build, what is proven, what is missing

Written 2026-11-13. This is a *memory* file: it is the answer to "if I play the game through, is
everything in there?" and it is meant to be updated, not re-derived.

Everything here is measured on the translated build (`bin\win32\icftd-recomp.exe`) and the oracle,
with the new `--cover` instrument (§8) and the recorded inputs in `out\`. Pictures are used only to
show *what a scene is*, never as proof (RULE 0: machine state is the evidence).

## 0. The answer in one paragraph

**The game's own logic is complete by construction and nothing is hand-ported.** All 750 functions
of the original `dshell` are in the build: 746 translated to C, 4 refused by the translator
(cstart + `restoreFPUStateFrame` stubs, line-F) and executed by the vendored 68000 core, plus 47
blocks outside the model. There is no "missing feature" in the sense of a scene that was not
written — a scene is present exactly when its function runs and the runtime can carry out what it
programs. **What is not proven is behaviour**: of 750 functions, **513 (68 %) have executed** in the
12 recorded/injected sessions below; **237 (10 266 of 35 323 model instructions = 29.1 %) have never
run once**. Two of the never-run clusters are whole features — the ant-invasion chapter with the gun
and the evidence dialogue, and the **journey cutscene** — and one measured divergence (§6.1, the
pause button) means a feature that *does* run in the original cannot be triggered in the port at
all. The bar-room **fight** was a third never-run cluster: it was recorded as blocked by the disks
(§6.4), which turned out to be our own directory reader losing hash-chain entries, and behind that a
reversed `CMPM` in the translator (`next-session.md`, 2026-11-13 later session). It now runs and is
verified — 17 of its 20 functions, the three it does not reach being the punch-blocked sound
handlers.

Verified against the original (machine state, not pictures): **intro/logo/desert, load screen, save,
situation map, a location room, the flight, the underground ant nest, the hospital escape, the
fight, the chicken race**. Runs and renders, but
has never been compared with the reference: **phone, fire game, win ending**. Never entered: **ant
chapter, evidence dialogue, look-around menu, sleep/clock/shop-hours, pause, journey cutscene**.

Update 2026-11-14: the **underground ant nest (UNDER, `FUN_0000BFCA`)** moved from "never entered"
to verified — it is the tunnel game Take a Flight continues into, not the journey cutscene (§3).

## 1. What "implemented" means in this project

The product is a static recompilation, so there is no per-scene port to be missing. A part of the
original is "implemented" when:

1. its code is translated (or runs on the core) — that is the translator report, not a choice;
2. the runtime can do what that code programs: the library shims it calls, the blitter, Paula, the
   copper list, the presenter;
3. that has been *observed* — the code ran and the machine state (or the gate) says it behaved.

Gap (3) is where this survey lives. Gaps (1) and (2) are small and named in §6.

## 2. What the original game consists of

Read from the engine itself: the action menu `FUN_0000247a`, the mode dispatcher `FUN_00002cc8`
(`DAT_000269d6` = the action picked), the main loop `FUN_000000e4`, the location scripts in
`desert.dat`, the resource banks, and the string table (`re\model\strings.csv`).

| feature | engine entry (image address) | what it is |
|---|---|---|
| boot / disk swap / error panels | `FUN_00020918` cstart, `FUN_000000e4` | loads the game, `ICFTD` save, volume prompts |
| intro (`!OPN`) | `FUN_00009870` + `FUN_00009630` | logo, desert, narration, music |
| load screen | `FUN_0001029e` | "Lizard Breath has been awaiting your return" |
| save | `FUN_0001042a` | 12 444-byte `ICFTD` blob, YES/NO prompt |
| world loop / location view | `FUN_000000e4`, `FUN_00001ce6`, `FUN_00005eac` | rooms, walking, actor scripts |
| action menu | `FUN_0000247a` | up to 10 actions per location |
| look around | `FUN_00002b7c` (N/S/W/E), mode 8 `FUN_00003264` | the "Look North" menu |
| answer the door | mode 7 | walks to the door |
| make a call | `FUN_000064e2` | phone book (`PHONE.DAT`), keypad, calls |
| situation map | `FUN_00008e56`, `FUN_0000451a`, `FUN_00005824` | travel between locations |
| take a flight | `FUN_000107a6` | plane, world scroll, HUD (fuel/canisters), crash |
| underground ant nest (UNDER) | `FUN_0000bfca`, the flight's continuation when `DAT_0002A552` is set | the tunnel game: `Desert1:UNDER` maps, ants and the queen, flamethrower, eight timed steps |
| fire game | `FUN_0000be34` + `FUN_0000b528` | fire spreading, extinguisher |
| fight | `FUN_0000b46c` + `FUN_0000a74e` | bar-room brawl, `Fight.tiny`, `Desert3:FIGHT` |
| second fight/flight cutscene | `FUN_00006f58` (mode 0xc) | `Desert2:sfx` sample + MovE scene |
| escape hospital | `FUN_0001819a` … | `Hospital.tiny`, `Desert3:HOSP`, scroll |
| chicken race | `FUN_0001cc2e` → `FUN_0001ba3e` | the Hellcats' chicken run: `Desert3:CHICK`, road Area fills, swerve window `0x2C100..0x2C102`, win/brake narration |
| ant invasion / gun / evidence | `FUN_00007934`, `FUN_00007dca`, `FUN_0000823a`, `FUN_000086a0`, `FUN_0000895e`, `FUN_000091fe`, `FUN_000092fe` | ant attack cutscene, shooting, "Your gun went dry", arsenal, evidence interrogation |
| endings (`!WIN` / `!LOS`) | `FUN_0000a4d6` → `FUN_0000a44a` | epilogue text over the desert |
| clock / sleep / shop hours | `FUN_0000551c` → ClockVBI `FUN_000054cc`, `FUN_00008f54` | "June %d, 1951", "Sleep for %d hours", "Sorry, %s is closed" |
| music / samples | Paula DMA + CIA-A timer A (`FUN_0000f264`, `FUN_0000f286`, `FUN_0000f3f4`, `FUN_0000f646`) | score player, tempo, instruments |
| pause | ClockVBI / `FUN_000000e4` checking `DAT_00024a88` | "Game Paused. Press left mouse button" |

The content behind those entry points is data (`OPEN`, `INSTS`, `PEOPLE`, `BACKS`, `FIRE`, `FIGHT`,
`HOSP`, `WANI`, `SCORES`, `PHONE.DAT`, `desert.dat`); it is all present in the export and all of it
loads (§6.4 used to say otherwise, and was our directory reader's fault).

## 3. Verified against the original

"Verified" = a state comparison: RAM byte-identical to the oracle, or a fixture, or the gate. Not a
screenshot.

| feature | evidence | state |
|---|---|---|
| intro (logo → desert → narration), music, text | RAM/state identical to the oracle at every frame boundary of a 120M-instruction run; `present-check` intro coverage 0.957 | **done** |
| load screen | state identical at the same palette anchor (frame 1650/2116) | **done** |
| save | `--call 0x1442A` writes 12 444 bytes byte-identical to the engine's RAM; `dos-save-test.ps1` passes | **done** |
| situation map | `present-check` map coverage 1.000, motion check; frame 4825 identical | **done** |
| a room (after the flight crash) | RAM byte-identical to the oracle at 2890/2910/2950/3000; presenter rebuilt from RAM matches the copper list | **done** |
| flight | 1562 frame records identical; frames 3100/3110 RAM identical; HUD region reproduced from RAM | **done** |
| underground ant nest (UNDER) | `--call 0xFFCA:1513` + `ref\inputs\under.txt` (oracle `--callat 0xFFCA:4876672:0:0x23512`): 0 differing frame records 1513..2334 (PC/SR/registers/custom), RAM byte-identical at 1750/1950/2150 (1850 differs in 11 dead-stack bytes), the scene returns at 2334 after 12 525 972 instructions both sides; idle returns at 2100; `present-check` under: 320x200, 180-row window, tunnel reds 5812 px, border below clean | **done** |
| hospital escape | translated end to end, 1237 frame records identical; `present-check` hospital coverage 0.900, no stale rows | **done** |
| fight (bar-room brawl) | `--call 0xF46C:1513` + `ref\inputs\fight.txt`: 3432 frame records identical (PC/SR/registers/custom on every one; 76 differ only in dead stack bytes), RAM byte-identical at the win frame 3430, opponent's bar drained to 0 and `DAT_0002991e = 1`; `present-check` fight coverage 0.973 + both health bars | **done** |
| chicken race | `--call 0x1FA3E:1513` + `ref\inputs\chicken-win.txt` (won) and the brake script: 335 and 351 frame records identical (PC/SR/registers/custom on every one), RAM byte-identical at 1560/1600/1630/1660 and 1620/1700; the two paths reach `DAT_0002bcd4 = 1` (he swerved) and `DAT_0002bcce = 60` (braked); `present-check` chicken coverage 0.974 over the list's 216-row DIW window, the 13 per-line palette bands, the dual-playfield horizon strip with both of its ranges (4119 px of playfield 1's tans, 2601 px of playfield 2's), the filled road surface (13 774 px of its pen-28 grey) and the cockpit picture (including the rows below 200) | **done** |
| title screen, OSD, save slots, mouse capture, the title's digit keys (1..6) | port features (no counterpart in the original) — measured, see `next-session.md` | **done** |

Everything else is unverified or never entered.

## 4. Runs, renders, but has never been compared with the reference

These were entered for this survey with `--call` from a boot (the same technique the hospital used)
and they put a full 320×200 picture on the machine:

| feature | command | what came out |
|---|---|---|
| phone | `--call 0xA4E2:1000` | `PHONE.DAT` + `Desert2:PEOPLE` load, the phone-book panel renders (names and numbers), waits for input (frame count climbs) |
| fire game | `--call 0xFE34:1000` | `PEOPLE`/`BACKS`/`FIRE`/`sfx/fire` load, the room with the spreading fire renders, reaches the lose narration "The fire overcame my efforts to put it out" |
| win ending | `--poke 1000:0x26D68=0x10000 --call 0xE4D6:1000` | `!WIN` re-opens `OPEN`, the epilogue renders ("The ant queen was dead…") |

(`--poke` writes a long, so the word `DAT_00022d68` has to be poked as `0x10000`.)

They are *plausible*, not *proven*: no reference state exists for them yet. Nothing in their code
path hits an unimplemented library call or a memory fault (§6.5), so the remaining risk is the
presenter and the pacing, both of which are shared with the verified scenes.

## 5. What has never run — measured

`--cover` records every function entry (translated, interpreted, and inside interrupt handlers).
Twelve sessions were run; each line is one command:

| session | command (plus `--cover out\survey\cov\<name>.txt`) | functions | frames |
|---|---|---|---|
| boot/intro | `30M` no input | 238 | 4303 |
| recorded playthrough | `60M --input ref\inputs\flight-crash-hospital-room.txt` | 454 | 19450 |
| fire taps | `60M --input out\tap.txt` | 330 | 30152 |
| narration pages | `60M --input out\input-narr.txt` (output `cov\narr.txt`) | 330 | 25652 |
| flight live | `60M --input out\flight-live.txt` | 439 | 9283 |
| hospital live | `60M --input out\hospital-live.txt` | 404 | 9747 |
| hospital injected | `30M --call 0x1C19A:1000` | 244 | 4092 |
| fire injected | `30M --call 0xFE34:1000` | 238 | 5012 |
| phone injected | `30M --call 0xA4E2:1000` | 211 | 22753 |
| save injected | `30M --input out\tap.txt --call 0x1442A:1000` | 322 | 1140 |
| ending injected | `30M --poke 1000:0x26D68=0x10000 --call 0xE4D6:1000` | 230 | 3608 |
| fight injected | `20M --call 0xF46C:1513 --input ref\inputs\fight.txt` | 233 | 3432 |

**Union: 567 of 750 functions (76 %), 621 distinct entry addresses including the blocks.**
**183 functions (6 698 of 35 323 model instructions = 19.0 %) never executed.**

Update 2026-11-14: two later sessions are folded into these figures. The **chicken race**
(`--call 0x1FA3E:1513` + `ref\inputs\chicken.txt`, `--cover out\survey\cov\chicken-race.txt`) adds
**29 model functions (1 052 instructions)** — its scene plus the `Area*`/`InitArea`/`InitTmpRas`
wrappers the road fill reaches for the first time. The **underground ant nest**
(`--call 0xFFCA:1513` + `ref\inputs\under.txt`, `--cover out\survey\cov\under.txt`) adds **25 model
functions (2 516 instructions) and the orphan block `0x1BA1A`** — the tunnel renderer and its
helpers. The twelve-session baseline was 513 / 10 266.

The clusters, named by what their own code and strings say:

| cluster | addresses | why it never ran |
|---|---|---|
| **ant invasion / gun / evidence** | `0x7934–0x92FE` — 17 functions, 1676 insns (`AntGoBy`, `Anten1..7.win`, `Anten1blast`, "My gun went dry", "Arsenal", "Show new evidence", "Want ant info") | a whole chapter of the game; the recorded playthrough never got there |
| **fight internals** | `0xB27C`, `0xB2A0`, `0xB2C4` — the "your punch was blocked" sound handlers | the fight runs, but a recorded input that gets blocked never produced a block; holding the button instead of bursting keeps the opponent in its block pose for ever |
| ~~journey / world renderer~~ | `0xBEDA–0xE03C` — 26 functions, 2627 insns (`Overhead2.tiny`, tile chain `c390/c75e/ca5e`, HUD `d5e8`, raw blitter `e03c`) | **not a journey cutscene: this is the underground ant nest's renderer**, run and verified 2026-11-14 (§3); the journey cutscene itself is `FUN_00006F58` (mode 0xc), still unentered |
| **audio score player's voice handlers** | `0xF0AC`, `0xF0DE`, `0xF56C`, `0xF814` (982 B), `0xFBEA` and their thunks — 25 functions, 511 insns | the player dispatches to a handler by instrument type; none of the scores in any recorded session used these five types (the `o.rff` breakage is in this area, see §6.3) |
| **flight internals** | `0x113A0`, `0x11B90` and two more in `0x106AC–0x11F00` — 4 functions, 165 insns | reached only by flight situations the recorded input never produced |
| **hospital internals** | `0x1B000–0x1CA00` — 29 functions, 1155 insns | the escape minigame never got past its first rooms in the recorded input |
| **MovE / picture / bank** | `0x1E000–0x20400` — 15 functions, 380 insns (incl. `FUN_0001F8D4`, `FUN_000201D4`, `FUN_000203DE`) | only used by scripts no session reached |
| **look-around menu** | `0x2B7C` ("Look North/South/West/East") | never answered a look action |
| **clock / sleep / shop hours** | `0x54CC` (ClockVBI), `0x5596`, `0x8F54` — 3 functions, 76 insns | the pause/clock VBI never ran — see §6.1; sleep and shop-hours text never reached |
| **situation-map animation** | `0x451A` (`DES4:ANI`, `XMARK`) | the map was shown, its X-mark animation was not |
| **library wrappers never called** | `os_graphics_Area*`, `FillArea` path, `InitArea`, `CloseFont`, `os_dos_Delay`, `os_dos_Seek`, `os_dos_Lock`, `os_dos_Read`, `os_dos_Write`, `os_exec_Alert`, … | those code paths were not reached (not missing shims; §6.5) |
| **Workbench branch of cstart** | `0x20D02`, `0x21964/72/7e` | dead on a CLI-launched game — correctly never taken |

Left this table on 2026-11-14: the **chicken race** (`0x1BA3E–0x1D2C6`, 25 functions plus the three
animation helpers `0x1D00A`/`0x1D1DA`/`0x1D2C6` that sit in the "hospital internals" band) - 28
entry addresses, two sessions, see `next-session.md`. `FUN_0001CC2E` (the hotspot handler that wraps
the race in its narration) is still unexecuted: it needs the room's `move_node`.

The complete list of 254 pre-fight addresses is Appendix A; their names, sizes, instruction counts
and the string each one references are in `out\survey\never-executed.csv` and
`never-executed-with-strings.txt`. After the fight, chicken and UNDER sessions, 183 remain.

## 6. Real divergences and gaps (each one sentence, as RULE 0 requires)

### 6.1 Pause and the left mouse button are not modelled

**The original** reads **CIA-A port A bit 6** — `if ((DAT_00bfe001 & 0x40) == 0)` — which is the
**left mouse button**, in three places: `FUN_000002f4` (the file loader) uses it to let the player
abort its "Please insert disk: … or press left mouse button to abort" panel; `FUN_000054cc`
(ClockVBI) sets the engine's paused flag (`-0x7c2e`) so that `FUN_000000e4` spins until release
("Game Paused. Press left mouse button to continue."); `FUN_0001075a` (flight) waits for a
press/release/press sequence.
**We** answer `$BFE001` as `0x7F | (fireDown ? 0 : 0x80)`, so bit 6 is **always 1**: the game can
never pause, can never abort the insert-disk panel, and the flight's click wait never runs
(`FUN_000054CC` is in the never-executed list). `plat_win32` already puts `mouse_left` in the input
snapshot; nothing maps it onto the emulated register, and there is no key for it on DOS.
This is the sanctioned exception in part (host input plumbing) but the emulated CIA bit is a real
difference: the original pauses, the port cannot.

### 6.2 Pacing — the port runs heavy scenes faster than the reference

Open, and the largest player-visible difference. Reference savestates give 7.02 frames per MovE
step in the desert stretch against our 5.00, and the flight's scene tick runs once per 3 vblanks
(16.5 Hz) while the engine's own structure forces only two. `next-session.md` has the measurements
and the rejected fix (UAE's CPU steal); the missing time is most plausibly in the Kickstart routines
our shims answer in zero time.

### 6.3 The music tick aborts on the intro's `o.rff` record

Open, and audible: the intro's fourth instrument is looked up in `DES4:INSTS` under
`Desert1:sfx/o.rff`, the index holds only bare names, the engine's own scan misses and clears the
size word, `AllocMem(0)` yields an empty object, and `jsr (0,A4)` at `0xf41e` loses a tick (142 of
them before the interpreter rule was fixed). The reference must reach that open with the size
intact; the two candidate mechanisms need a WinUAE break at `0xc52660+0xe8fa` / `+0xf41e`. Until it
is settled the port loses music ticks exactly where the original does not.

### 6.4 The fight's "missing disk files" were our directory reader, and behind it a reversed CMPM — both closed

`FUN_0000b31c` requires five samples from `Desert3:sfx`; `hurt2` and `stab1` used to have no
directory entry in our export, the open failed, the loader returned 0 and `FUN_0000b46c` returned
without running the scene. They **are** in the directory: an OFS bucket points at the first entry of
a chain and each entry continues it through a longword at offset `0x1F0` of its 512-byte header
block, and `AmigaFs.ReadDir` walked the chain from `0x1A0` and read `byteSize` from `0x140` — both
always zero — so every collision-linked file was lost and then "recovered" as an orphan into the
disk root. Reading the raw image: `dthatstheguy`(932)→`hurt2`(954), `exp`(946)→`stab1`(972),
`ants`(922)→`jet`(956), `CHICK`(893)→`WANI`(914), each with its parent block at `0x1F4` (`881` = `sfx`,
`880` = root). Fixed in `src\assetExport\AmigaFs.cs`; `list` now reports no orphan on any disk and
re-extracting moves exactly `hurt2`, `jet` and `stab1` into `export\disk3\sfx\`.

With the samples loading, the scene exposed a **real translation divergence**: `FUN_000208e8` (the
engine's `strcmp`) branches on `CMPM`, and both the emitter and our interpreter read the register in
bits 11-9 (the destination) as the source, so every comparison came out negated — translated and
interpreted agreed with each other and both disagreed with the original. Fixed in
`Recomp\Emitter.cs` and `Cpu68k\Cpu68k.cs`, functions regenerated (`0x208FE` is the only `CMPM` in
the image), with hand-checked cases and two fixtures. `next-session.md` has the trace, the fight's
input (fire + `0x0003` in 6-frame bursts) and the parity numbers: 3432 frame records identical apart
from dead stack scratch, RAM byte-identical at the win frame.

### 6.5 The library surface

The 30M boot+intro run uses **49 library kinds, 0 answered with 0** (the oracle's census; both
front ends dispatch through the same `rt_os_call`). Across every session of this survey no scene hit
an unimplemented call. One function is nevertheless unhandled:
`graphics.CloseFont` (`-78`) falls through to the generic branch and returns 0 — harmless (the
original returns nothing) but a difference. `dos.Delay` is implemented and never called;
`exec.DoIO` returns immediately (no device timing), and only one call was ever seen.

### 6.6 Four functions still run on the 68000 core

`0x20918` (cstart), `0x20956`, `0x21272`, `0x21334` — the last three are `restoreFPUStateFrame(0)`
stubs (line-F, unreachable on a 68000). The translator refuses the whole linear walk at the line-F
instruction, so even the cstart runs interpreted; the cstart itself is a few dozen instructions, and
the fallback in total is ~14 000 interpreted instructions per 30M (0.05 %), most of them the MovE
computed-jump blocks (`0x1f35e..0x1f750`).

### 6.7 Presenter: what it supports and what it does not need to

Measured over every screen this survey put on the machine: **320×200, 5 planes, lores**, a copper
list built by `MrgCop` or by the engine's own template, `BPLCON1` fine scroll, DIW windows, one or
two display regions with their own plane sets. The presenter handles all of that (plus up to 8
planes, per-region delays, border outside DIW, palette fading) and **the game writes no hardware
sprite register at all** (`$DFF1xx` appears nowhere in the image), so sprite hardware is not a gap.

Line-by-line programming is supported since the chicken race needed it (2026-11-14): a WAIT starts a
segment, the plane pointers, BPL1MOD and BPL2MOD are latched (a WAIT that only writes colours keeps
the plane set), each plane's line stride is the DDF window plus its own modulo (BPL1MOD for the
odd-numbered planes, BPL2MOD for the even-numbered ones), `BPLCON0` is honoured per segment (plane
count - zero turns the playfield off - and `DBLPF`, which splits the planes into playfield 1 in
colours 0..7 and playfield 2 in colours 8..15), `BPLCON2`'s `PF2PRI` decides which of the two is in
front, and each `COLORxx` write takes effect from its line on - the scene changes
`COLOR00/12/13/14` thirteen times down the screen for its sunset bands, over a mountain strip, a
dual-playfield horizon strip and a road strip with palettes of their own. Colours are interned into
240 framebuffer slots for that (240..255 belong to the OSD), and a screen whose segments all program
the same picture keeps the single-palette fast path, so the verified scenes are pixel-identical. The
raster is the window the list programs, not the ViewPort's `DHeight`: the chicken's list asks for
216 rows (lines `0x1D..0xF5`) while its ViewPort says 200, and the bottom 16 rows of its cockpit
picture are inside that window. Rows outside a *shorter* window are border, as on the hardware.

The graphics.library shims draw what the engine asks for, and `AreaEnd` sorts its scanline crossings
before pairing them the way the library's TAD does - the chicken race's road polygon crosses a line
right-to-left on most of its rows, and pairing unsorted crossings filled it as a sliver (2 209 of
~27 000 pixels), which read as "the road has the colour of the ground".

What it does *not* do: HAM/EHB and interlace. No screen seen so far needs them; if one turns up, it
is a real gap.

### 6.8 The DOS target is a performance item, not a completeness item

`bin\dos\ICFTD.EXE` runs and is byte-identical to the Windows build's machine state. It is 63 % of
the original's speed on a 486DX2-66 and needs 1.6x for 100 % (`next-session.md`).

## 7. What to do next, in order

1. **Make the pause reachable** (one register bit + one host key/mouse mapping) and re-run the
   `--cover` matrix: it should light up `0x54CC` and exercise the clock VBI, with the state still
   identical when nothing is pressed. This is a difference, not a feature request.
2. **Settle §6.3 with the reference** (WinUAE breakpoints at the two `INSTS` scan sites around
   `0xc52660+0xe8fa`/`+0xe91a` and at the player's `jsr (0,A4)` at `+0xf41e`). It is one measurement
   and it decides whether the lost music tick is "the original does this too".
3. **Play the two remaining unentered features with a script**: the ant chapter (`0x7934`) and the
   journey (`0xBFCA`). Each needs a recorded input from the real game (or a `--poke` of the
   location/mode that selects it) and then the usual oracle-vs-translation state comparison at the
   frame boundaries it touches. (The fight, `0xF46C`, is done — see §3 and §6.4, which also closed
   the `CMPM` bug it exposed; the three punch-blocked handlers `0xB27C`/`0xB2A0`/`0xB2C4` still want
   an input that gets blocked. The chicken race, `0x1BA3E`, is done as well: both its outcomes were
   driven and are byte-identical, and it is what the presenter's per-line palette and per-region
   stride were written for.)
4. **Coverage as a habit**: keep `--cover` in every recorded playthrough and diff the lists. The
   list is the definition of "not yet reached"; a scene that runs without adding functions is not a
   new scene.
5. Only then the pacing work of §6.2, which changes every frame boundary and must come after the
   scenes are reachable.

## 8. Instruments this survey added or used

* **`--cover <file>` (host, new).** Writes one line per executed function: `<entry address> <calls>`
  for translated functions, plus `<pc> <instructions> interpreted` for code the core ran. It counts
  **function entries**, so a function is "executed" from its first instruction, not by basic block;
  interrupt handlers count through a hook in the oracle's handler loop (they run on the core in both
  front ends). Default off; two null function pointers (`rc_coverHook`, `oracle_coverHook`), no cost
  when unset. `tools\gate.ps1` 5/5 with it in the tree.
* `--interpstat` — which refused PCs ran; `--state`/`--ram` + `state-diff.ps1` — parity;
  `present-check.ps1` — raster coverage/motion/border; `--call`, `--poke`, `--input`, `--record`,
  `--shot`, `--dump` — reaching and observing a scene.
* The survey artifacts are under `out\survey\` (gitignored): `cov\*.txt` per run,
  `never-executed.csv/.txt`, `never-addresses.txt`, the logs, and screenshots of phone/fire/ending.

## Appendix A — the pre-fight never-executed functions (254 addresses)

Generated from the twelve sessions above, `--cover` union minus `re\model\functions.csv`. Image
addresses (add the load base 0x4000 for a runtime PC). Sizes/instruction counts and the string each
function references are in `out\survey\never-executed.csv` and `never-executed-with-strings.txt`.

*(The addresses below are the pre-fight list, kept so each session's delta stays visible: the fight
removed `A74E AAB6 AC30 AE16 AFBA B048 B126 B12E B224 B22C B234 B258 B2E8 B314 B31C B41E B46C`
— 17 functions, 969 instructions — and left the three block/miss handlers `B27C B2A0 B2C4`; the
chicken race removed 29 functions (1 052 instructions); the UNDER session removed 25 functions
(2 516 instructions) — `BEDA BFCA C176 C1AC C310 C390 C75E CA5E D2AE D376 D51E D5E8 DB2C DBC6 DC74
DD20 DDF2 DEC4 DF34 DF88 E014 E03C 180AE 18176 1B926` — and the block `1BA1A`. That leaves 183
functions. Re-run the matrix, not this text.)*

```
2410 2B7C 2CC4 3398 33D8 451A 4642 475C
4782 4BEE 4C5C 4DCA 5596 56A0 579C 6152
6182 6274 628A 62B0 62F6 638C 6478 6F58
72A2 7934 7DCA 823A 843E 84E4 86A0 895E
8AB4 8AF0 8BA6 8C5C 8E56 903A 9064 9110
91FE 92FE 996A 9EB6 A74E AAB6 AC30 AE16
AFBA B048 B126 B12E B224 B22C B234 B258
B27C B2A0 B2C4 B2E8 B314 B31C B41E B46C
BEDA BFCA C176 C1AC C310 C390 C75E CA5E
D2AE D376 D3C2 D49C D51E D57C D5E8 DB2C
DBC6 DC74 DD20 DDF2 DEC4 DF1E DF34 DF88
E014 E03C ED2A EE78 EED2 EEEC EF02 EF28
EF42 EF5C EFF6 F00E F02E F036 F03A F03E
F042 F046 F04A F062 F066 F0AC F0DE F56C
F7E2 F814 FBEA 10002 10010 10084 101A4 101BC
106AC 10736 113A0 11B90 124DE 13114 13DBA 141B6
14884 148C2 14906 149DC 14B24 14B7C 14DC0 14DFA
15034 15058 151E6 152A6 15312 1540A 15754 15A86
15AD6 16DF8 16FDA 17210 172DA 180AE 18176 19E30
1A59A 1A880 1A942 1B1C2 1B1D8 1B1FC 1B220 1B5AA
1B926 1BA3E 1BB5A 1BB72 1BBEA 1BC0E 1BE80 1BF26
1BF64 1BFC4 1C132 1C174 1C1C6 1C230 1C266 1C332
1C384 1C478 1C496 1C4D2 1C7D2 1C7FC 1C838 1C9C8
1CD94 1CF48 1D250 1D3A2 1D456 1D8D0 1E1AE 1E322
1E43C 1E756 1E7CE 1F1E0 1F1E8 1F8D4 1FCCE 1FE4E
1FEC4 1FF18 1FFE8 20006 201D4 204D6 20956 20D02
211D4 21254 21272 21334 2138E 213F4 2140C 21428
2144A 21472 21484 21496 214A6 214C6 214DE 214EA
214EE 21586 215CC 215FA 21650 2168C 216B4 216C4
216CC 216E0 216EC 21720 21752 2175E 2176A 21776
21788 21794 217C4 2180E 2181A 21826 2183E 2186E
2195C 21964 21972 2197E 2198A 21A2C
```

(The library wrappers in the `216xx`–`2186E` band are the ones the engine has but no reached path
calls — `2180E`/`2181A`/`21826` are `FreeColorMap`/`FreeCprList`/`FreeVPortCopLists`, `2195C` is
`WaitTOF`. Re-run `--cover` after any new recording and regenerate this list: it is a measurement,
not a promise.)

## Appendix B — reproducing the matrix

```powershell
# build (the coverage flag lives in the host)
powershell -ExecutionPolicy Bypass -File tools\build-host.ps1

# one session
bin\win32\icftd-recomp.exe export\code\dshell4k\dshell.img 60000000 --data export `
    --input ref\inputs\flight-crash-hospital-room.txt --cover out\survey\cov\playthrough.txt

# the fight (injected at the bar's action, engine slot 41)
bin\win32\icftd-recomp.exe export\code\dshell4k\dshell.img 20000000 --data export `
    --call 0xF46C:1513 --input ref\inputs\fight.txt --cover out\survey\cov\fight.txt

# the chicken race (the scene FUN_0001CC2E runs)
bin\win32\icftd-recomp.exe export\code\dshell4k\dshell.img 6000000 --data export `
    --call 0x1FA3E:1513 --input ref\inputs\chicken.txt --cover out\survey\cov\chicken-race.txt

# the underground ant nest (the flight's continuation)
bin\win32\icftd-recomp.exe export\code\dshell4k\dshell.img 14000000 --data export `
    --call 0xFFCA:1513 --input ref\inputs\under.txt --cover out\survey\cov\under.txt

# the union, minus the model
#   (any script: read every out\survey\cov\*.txt, subtract RC_BASE 0x4000, compare with
#    re\model\functions.csv column 1; the generated never-executed.csv in out\survey is one such run)
```
