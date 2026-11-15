# Next session — the translator runs; the differential is the gate

Hand-off as of 2026-11-11 (Phase B, session 3). Read this, then **RULE 0** and the binding rules at
the top of the repo memory (`.github/copilot-instructions.md`, `docs/recomp-architecture.md`) - a bug
is a difference from the original, never a symptom, and that holds for every kind of bug.

What of the original is implemented, proven and never run — measured, not guessed (feature
inventory, `--cover` matrix, open divergences): `docs/implementation-survey.md`.

Before writing a port feature (code the original does not have — save slots, OSD, title, the map's
pointer), read `docs/port-features.md`: the five attachment points, the `rc_stream` trap, the scene
presets and what "done" means without an oracle to diff against.

## Long screen transitions say "Loading" (2026-11-15, later still)

Asked for: show the word "Loading" in the OSD during long screen transitions - the map into a
location, into the map again, and after loading a savegame. A port feature, so written on its own
terms (`docs\port-features.md` has the section): the line is the runtime's OSD text, armed by the
front end while the engine's **load-only code** is running - the bank opener, `Sms_Load`/`Sms_Unpack`
for the picture banks and the LZ decruncher `FUN_000205e6`/`FUN_0002069c`.

**The seam.** `src\host\main.c`, `loading_frame` (frame boundary) + `host_entry` (`rc_entryHook`).
A frame is load work if a load range was entered during it (`rc_entryHook`), or if `m->pc` - the
instruction the vblank landed after - is inside one. The second test is what covers a decode that
runs for hundreds of frames inside one call without dispatching: the location load is 270 frames,
215 of them inside the decrunchers. `LOAD_SHOW_FRAMES` (25) keeps short asset loads from flashing;
`LOAD_IDLE_FRAMES` (8) bridges the loader's own gaps (looking the next asset up).

**The intro into the game needed two more things** (reported: pressing fire during the desert intro
scene showed the line several seconds late). The first 284 frames after the intro are
`FUN_00000b62`, the world loop's script reader and parser (`0xAAA..0xFA2`) - it ran before the
picture-bank decode and was not in the ranges, so nothing was detected until frame 611. Added, that
gives the line at 327 (the parser's cluster start 302 + the 25-frame threshold). The title's own
transition removes even that delay: `host_loading_hold` is called where the title answers the load
prompt (the intro is over) and where Load Game skips the intro, so the line is up on that frame and
hands over to the loader detection when it runs.

Measured (`--titlekey 12` = the menu's New Game, fire during the intro): line up at 302 (the prompt
frame), script parse 302..586, bank decode 588..809, line down 809. Load Game (`--titlekey 11`,
`--slot 1`): up at 37 (the skip) and again over the map's load at 453..653, with the 1 s world-loop
setup between them showing nothing - acceptable, and the menu's New Game (the reported case) is
immediate. `--titlekey` 11/12 are the menu's two start buttons; the original-flow keys (0..10) are
unchanged, so `tools\title-check.ps1` still measures what it did.

**Measured** (`tools\load-check.ps1`, which is in the gate; the recordings are game-derived, so it
SKIPs without them):

| transition | loader frames | line up / down | new screen |
|---|---|---|---|
| map → Hilbers Field (`flight-crash-hospital-room.txt`) | 1411..1680 | 1436 / 1689 | 1683 |
| room → map (`map-pointer.txt`) | 1127..1200 | 1152 / 1209 | 1203 |

The frames are the ones the rasters pin: the map's last frame is 1409 and the room first appears at
1683; the map is up at 1203. A `--dump` at 1460 and at 1160 carries the green "Loading" in the top
left, a dump at 1700 does not.

**Inertness.** A measurement run never installs `rc_entryHook`, so it logs no line; and a run armed
with `--mouse` (an empty script, the same seam the other port checks use) is byte-identical to the
plain run over all 2 MB of RAM - the feature writes no machine state. `tools\gate.ps1 -Quick` is
11/11.

## The title's buttons are wired, and the load screen is gone (2026-11-15, later)

Asked for: wire the title menu's four buttons (Quit closes the application, New Game starts a new
game with the intro, Load Game loads the currently selected save slot, Settings stays unwired) and
remove the YES/NO load screen that comes after the intro, because that decision now lives on the
title.

**What was wired.** `src\host\title_button.c` names an action per button in the layout table, and
`title_play` (`src\host\title.c`) acts on a click: the pointer's position picks the button
(`title_menu_pointer`) and `input_state.mouse_left_pressed` is the press edge - not the game's
/FIRE, so a click that misses every button does nothing. Fire and 0 still start a new game, and the
digit/letter keys still start their scenes. Settings is `TITLE_ACTION_NONE`: highlighted like the
others, commits nothing. Load Game on a slot with no save prints "save slot N is empty" and leaves
the menu up - an empty slot must not fall through to a new game, because the engine's load fails
there and the boot loop would take its "no" answer.

**How the load screen is removed.** Not patched out: `FUN_0001029e` still runs and the host answers
it where its own prompt's answer would land. The boot loop calls it at `0x1EA`, right after the
intro's setup returns, so the break pc is its first instruction after `link` (`0x102A2`,
runtime `0x142A2` - A5 then addresses its frame) and the answer is D0 written at `0x102E6`
(runtime `0x142E6`), the instruction after `jsr FUN_000101e4`. Everything the routine does with
that answer is its own code - the store, the palette restore at `0x102EA`, the volume/open/read/close
of `DSAVE:ICFTD` and the `moveq #1` return value; only the dim, the three text lines and the prompt
are skipped. The load therefore still happens **after the intro**, which is where the original
performs it and where the intro's setup has loaded the resources the restored state expects.
`--titlekey` runs keep the original screen (the seam reproduces the original from the hold point),
which is why `tools\title-check.ps1` is unchanged and still passes 15/15.

**Load is direct; the intro is skipped.** `FUN_00009870` is not "play the intro": it loads the
intro's samples, its score and the `Desert1:OPEN` bank, then hands the scene record at `0x993c` to
`FUN_0001EB94`, which runs it through `FUN_0001D2C6` (the same MovE runner the situation map uses).
Loading skips that one call: the host breaks on the `jsr` at `0x98F8` (runtime `0xD8F8`) and resumes
at the `lea (0x10,A7),A7` that follows (`0xD8FC`), so the four arguments the call would have consumed
are discarded by the engine's own cleanup and the setup still closes its bank and frees its score.
Everything the restored state expects from the setup has therefore run; nothing of the scene is
entered. New Game plays the intro exactly as before and only answers the question.

**Measured** in the window (`--run`, clicks posted to the game's own window at the
fullscreen-mapped button centres; RAM through `--ramstop`):

| click | what the log says | what the machine does |
|---|---|---|
| Quit Game | - | the process exits |
| New Game | `starting the game (frame 176)`, then `a new game, nothing to load (frame 329)` | no `open "ICFTD"` at all; the intro runs and the run lands in the starting room ("Go to Map / Make a Call / Answer the Door / Sleep") |
| Load Game (slot 1) | `loading save slot 1 (frame 176)`, `skipping the intro (frame 190)`, `loading the selected save slot (frame 190)` | `open "ICFTD" -> saves\slot1\ICFTD (12444 bytes)` fourteen frames after the click, and the run is on the situation map the save was taken on ("Home Base, June 1, 1951 - 03:29 a.m.") |
| Settings | nothing | the title stays up, button highlighted |
| Load Game, `--slot 2` (empty) | `save slot 2 is empty (frame 176)` | the title stays up |

The load is byte-for-byte the save: a `--ramstop` dump taken ~10 s of play after the load carries
the engine's own file content at the engine's own two destinations - `0x25E18` (image `0x21E18` +
base): 118 of 120 bytes equal, `0x2A86C` (image `0x2686C` + base): 12317 of 12324 equal, the
remaining bytes being words the running world had already changed.

## The chicken race's narration is on the screen (2026-11-15)

Reported as "when you complete the chicken game a textbox is displayed, drawn outside the screen on
the right, and the text inside is too far to the right". Not a text fault: the narration is drawn
exactly where the original draws it, on a screen the presenter was not showing in full.

**The divergence.** `FUN_0001BA3E`'s scene installs its own copper list (`FUN_0001BE80`), and that
list's DIW is `0x1D61..0xF5D1` — **368** columns from 32 px left of the standard edge — while the
ViewPort it draws through stays 320x200. The closing page (`FUN_0001CF48` → `FUN_00005012`) points
the text RastPort at the scene's own bitmap `DAT_0002BDE2` (46 bytes x 216 rows), sets the text right
margin from the bitmap width (`DAT_00029A70 = 0x16F`), the box to `0x000..0x16F` and the text area to
`0x1E..0x151`. The engine treats those 368 columns as the screen. `rt_gfx_present()` took the
ViewPort's `DWidth` (320) as the raster width and clipped the list's window to it, so the right 48
columns — the end of every narration line — were never composed. Measured at frame 420 of the replay:
the list in the VM is the scene's (`0x67B28`, 187 entries), DIWSTRT `0x2761`, DIWSTOP `0xFFD1`, DDF
`0x28..0xD8`, so the window is 368x216 and the bitmap column at its left edge is 0.

**The fix.** `rt_gfx_present()` keeps the ViewPort's size only while the list's window fits it; a
window *wider* than the ViewPort now becomes the raster (raster column 0 = the window's left edge),
the same way a window taller than `DHeight` already became the raster's height. The source column
also takes the DDF alignment into account — bitmap column 0 is at `(DDFSTRT − 0x38) × 2` standard
columns, which is 0 for every list that uses the standard 0x38 and −32 for the chicken's 0x28 — and a
frame with a shifted fetch takes the per-region converter. `host_present`/`dos_present` now sample
the raster into the 320x200 window on **both** axes (the 216-row case already did) instead of copying
a left-aligned 320 columns, so nothing is dropped.

**Measured.** Replaying the recorded win (`--titlekey 5 --input out\chicken-rec.txt`; `--titlekey`
now accepts an input script, because that is how a title-launched scene is replayed) the narration
page presents **368x216** and carries all four lines: "... swerved my truck off the road. As I sat
there with my heart pounding, Lee and his buddies drove by laughing and said they'd be at Beverly's
Drive-In if I wanted to do anything about it." The pre-fix build presented 320x216 and both wrapped
lines ended at column 319. Machine state is untouched (the presenter is the only code that changed).
The other scenes' lists have windows inside their ViewPorts (MrgCop 320, flight/hospital 288) and DDF
0x38, so their `srcBase` is 0 and their rasters are unchanged — `present-check` reports the same
coverage numbers as before (intro 0.957, map 1.000, flight 0.804, hospital 0.810, fight 0.973,
under 0.326) and the chicken now also pins its 368-column width, the assertion the old build fails.

## Infrastructure: incremental builds, and one page for port features (2026-11-14)

Two changes, no product behaviour touched, both aimed at making the next feature session cheaper.

**The three build scripts are incremental.** `tools\build-host.ps1`, `tools\build-recomp.ps1` and
`tools\build-dos.ps1` keep their object directory (`bin\win32\recomp-obj-host`, `bin\win32\recomp-obj`,
`bin\dos\obj`) instead of deleting it, and compile only the sources whose `.obj` is missing or older
than the source or than **any** header under `src\runtime`, `src\recomp`, `src\oracle`, `src\host`
(and `third_party\musashi`). Coarse on purpose: a header change recompiles everything, which is safe
and cheaper than a missed rebuild — there is no depfile system. The decision lives in one helper,
`tools\build-common.ps1`. The link is skipped when nothing changed, and the link list is built from
the source list (sorted, i.e. the order the old wildcard produced), so a deleted source takes its
object with it and the binary is the same one the old scripts produced. The compiler command line is
stamped into the object directory, so a different `-Base`/`-bt` never reuses another configuration's
objects. `-Full` restores the old clean behaviour; `gate.ps1` calls the scripts unchanged.

Measured on this machine (same tree, same flags):

| build | clean (`-Full`) | no-op | one source edited | one header touched |
|---|---|---|---|---|
| `bin\win32\icftd-recomp.exe` | 21.0 s | 1.1–1.4 s | 1.7 s (1 object) | 21.3 s (816 objects) |
| `bin\win32\recomp-check.exe` | 19.1 s | 1.3 s | — | — |
| `bin\dos\ICFTD.EXE` | 20.8 s | 1.4 s | — | — |

The binaries are unchanged: `-Full` reproduces the pre-change build byte for byte (the host and
`recomp-check` differ from it in the PE `TimeDateStamp` only, the DOS/32A image in nothing at all),
a probe line added to one `.c` recompiled exactly that object and changed the link, and touching
`src\runtime\platform.h` recompiled all 816 objects back to the same binary. `tools\gate.ps1` 7/7.

**One page for the "no counterpart in the original" side:** `docs/port-features.md` collects what a
feature session used to re-discover — the five attachment points (`input_state`, `on_frame`,
`rc_entryHook`, `rt_os_call`, the `--poke`/`--call`/`--mouse` test seams), the trap that a `pc ==`
test in the front end's loop is inert because scenes run inside `rc_stream`, a scene-preset table
(map, a room, the flight, hospital, fight, chicken, UNDER — reach, instruction count, frames worth
dumping, entry/PC, all re-run and measured), and the definition of done for features (machine-state
claim or bit-for-bit equivalence with the key it replaces; a measurement run must not change; the
seam is inert unless the game is played). `tools\mouse-check.ps1` is the worked example;
`.github\copilot-instructions.md` now says which rule applies to which code.

## The situation map's cursor follows the mouse (2026-11-14, the map pointer)

A port feature (the original has no mouse control at all), written on its own terms because there
is nothing to diff it against - and, like the title screen, it must not disturb anything that *is*
diffed.

**The screen.** The situation map is the MovE scene `FUN_000043B8` opens (`DES4:ANI`, scene
`!MAP` in the record table at `0x4488`) and `FUN_0001D2C6` runs: that runner calls the scene's
script **`FUN_00003B1E`** once per update, and the script is where the cursor lives —

| word | meaning | who writes it |
|---|---|---|
| `0x28A54`/`0x28A58` (long) | cursor **screen** position | `FUN_00003B1E` += speed, `FUN_00003610` places it |
| `0x28A4C`/`0x28A50` (long) | map picture offset (≤ 0, clamped by `FUN_000035D2`: x −0x13F, y `0x28A5C`) | `FUN_00003B1E`/`FUN_000035D2` |
| `0x28A48` (word) | the travel window's bottom row (0xC4; 0xB0 in the 0xF mode) | `FUN_00003692`, `FUN_0000451A` |
| `0x26892`/`0x26894` (word) | the decoded stick, ±1, read by `ClockVBI`→`FUN_0000A500` | `FUN_0000A500` |
| `0x26830`/`0x26834` (long) | the stick's speed accumulator (+= axis, 0 when idle) | `FUN_00003B1E` |
| `0x28A42` (word) | the destination under the cursor (39 = none) | `FUN_00003B1E` |

The cursor's window is `0x19..0x136` × `0x19..0x28A48`, its sprite hot spot (the arrow's tip) is
`0x11`/`0x12` up-left of it, and the destination test uses `cursor − picture offset`, so the cursor
is in screen coordinates and the offset scrolls the picture under it.

**The seam.** `src\host\main.c` pins the cursor under the pointer (`pointer + hot spot`) at every
`FUN_00003B1E` entry, and while the pointer is pushed past the window the cursor stays on the edge
it hit while the picture scrolls (6 px per update, clamped by `FUN_000035D2`'s limits). When it is
back inside, the cursor follows again. A held stick wins: a direction key - or a scripted stick -
takes the cursor back, and a pointer that has not moved since the map opened leaves the cursor on
the current destination.

`FUN_00003B1E` is reached from inside the translated stream (the runner's `jsr (A0)`), which never
returns to the front end's own loop, so the trigger is a new seam next to `--cover`:
`rc_entryHook` (`src\recomp\cpu.c`, null by default - the shipped build and every measurement pay
one load and a test). Two things it must not do, and does not: it runs only while that script is
the function being called, and only when the front end armed it - `--run` in the played game (no
input script, no capture, no `--call`/`--poke`), or `--mouse`. `--mouse <file>` is the dev seam
that feeds pointer positions and clicks (`<frame> <x> <y> [<button>]`) headless, the same state
the platform reports.

The engine's own scroll could not be reused: between two map updates (the script runs every ~3-4
vblanks) the vblank reads the idle stick and `FUN_00003B1E` zeroes the accumulator, so a
pointer-held axis can only ever add ±1 per update. The seam therefore applies the scroll itself,
with the same clamps.

**Measured** (`tools\mouse-check.ps1`, machine state only): without a pointer the cursor stays the
game's `178,119` and the picture at `−153,−121`; with the pointer at `160,100` the cursor reads
`177,118`, at `40,40` it reads `57,58` and the destination under it changes; held at the right
edge it clamps to `310,168` and the picture scrolls past `−170`; a held stick moves the cursor
while the pointer sits at `40,40`; and the frame records of a pointer run and a plain run are
byte-identical up to frame 1205 - the first frame that differs (1206) is the map's first update
with the pointer active.

### The left mouse button is /FIRE (whole game)

`m->fireDown` (what CIA-A PRA bit 7 returns) is now `space OR left button` in both front ends
(`src\host\main.c`, `src\oracle\main.c`), and the title screen accepts a click where it accepts
fire (`src\host\title.c`, via the new `input_state.mouse_left_pressed` edge). So the map is
point-and-click, every "press fire" dialogue advances, and the menus take a click - no other key
changes. The pause that the original reads from the *same* button (CIA-A PRA bit 6 into
`0x24A88`) stays unwired, as the survey records, so a click never pauses anything.

Measured the same way, and it is the strongest form of the claim: the recorded session's decisive
fire press (frame 1060, the one that commits the menu entry and leads to the map) is *removed*
from the key script and fed as a scripted click instead (`--mouse`'s optional fourth column) - and
the run is **byte-identical, frame record for frame record, over all 2399 frames** ("first
differing frame −1"). With the press removed and no click, the runs diverge at exactly frame 1060.
`--record` therefore records a click as fire and replays it through `--input` like any other.

`--mouse` is not recorded by `--record` (the recording format is fire + stick, shared with the
oracle, which has no pointer): a played session replayed through `--input` reproduces everything
except the cursor's pointer moves. The DOS build leaves `mouse_present` 0 and `mouse_left` 0, so
both seams are inert there until the DOS mouse driver is wired up.

## The room screens show the pointer, and a menu line is selected by hovering (2026-11-14, later)

The second half of the port's pointer work, and the same rule: port code, written on its own terms,
inert in every measurement. The room screen right after the intro and the YES/NO load screen shows
the port's arrow under the mouse, and its text menu - three lines of narration, then "Go to Map",
"Answer the Door", ... - is chosen by hovering a line. A click is still /FIRE, so hovering and
clicking is the whole interaction.

**Where it attaches.** `rc_entryHook` twice per screen, and once per menu pass:

| pc | what the hook does |
|---|---|
| `FUN_00005eac` / `FUN_00005824` | a location view was drawn/updated: `g_roomFrame = m->frame`, so the arrow is shown on room screens (the intro, flight and minigames never call these). |
| `FUN_00004d76` | one line of a text menu was queued (`text, x, y, pen, count`). The line is filed with its screen rectangle, its width from `rt_gfx_text_length` on the menu's own RastPort/font, and **the menu entry it belongs to** - the caller's loop counter, so wrapping repeats the entry and skipped entries leave gaps. |
| `FUN_0001d1da` | the menu flips its two bitmaps at the end of a pass. The flip's return address says which menu it is (`0x29D2` action list, `0x2C62` Look ...), and the pointer's line is written into that menu's selection local. |

The selection is a **stack local**, so the hook has to know the frame: `FUN_0000247a` does
`link.w A5,-0x9a` and keeps the selection at `A5-6` and the entry loop at `A5-2`;
`FUN_00002b7c` does `link.w A5,-0x0c`, selection `A5-4`, loop `A5-8`. The flip is called with the
caller's A5 still in `c->a[5]`, so `rt_write16(A5-6, entry)` is exactly the store a Down press leads
to, one pass later. The highlighted pen is *not* usable for this: the "Answer the Door" (`=`),
external (`@`) entries blink pen 8 whether selected or not.

The arrow itself is presentation only: `rt_pointer_at`/`rt_pointer_hidden` in the runtime overlay
(pens 246/247, drawn after the frame is composed; `src\runtime\amiga\pointer_art.h` from
`tools\mkpointer.ps1`), 17x18 with its tip at the top left - the map cursor's shape and size. It is
hidden on the map, where the game draws its own cursor, and in the DOS build, which reports no
pointer at all.

**Measured** (`tools\pointer-check.ps1`, machine state only): the room menu is up at frames
~960..1060 of `ref\inputs\flight-crash-hospital-room.txt`, four lines at y 144..172 (baselines 150,
157, 164, 171, the font's 7 rows). The menu's own default is entry 2, action 7 (the blinking
"Answer the Door"); Up x4 gives 0/2 ("Go to Map"), Down x2 gives 3/4. Hovering line 1 and clicking
gives 0/2 - the stored `DAT_000269da`/`DAT_000269d6` pair is the same the stick produces - and line
4 gives 3/4. A `--mouse` run whose pointer never reaches a line is **byte-identical to the plain
run, frame record for frame record**; a hover run first differs at frame 974, the first pass after
the pointer moved (970). The arrow's pixels were also checked once against the art at the pointer
position (78/78 non-transparent pixels black/white) in a `--dump` of the menu frames.

The YES/NO load prompt is a different mechanism (`FUN_000101e4` reads the raw axis and redraws its
two labels; there is no text-line list), so it stays keyboard-only. The arrow is not shown there
either - it is a room-screen feature.

## The underground ant nest ("UNDER") runs (2026-11-14, later still)

Reported as "implement and verify the UNDER minigame": the underground game in the tunnels where
the ants and the queen are killed. It is **`FUN_0000BFCA`** (runtime `0xFFCA`), the continuation of
**Take a Flight**: `FUN_000107A6` calls it at `0x10AE4` once the flight sets `DAT_0002A552` (the
plane landed). It is self-contained and was already translated; entering it is all the port needs.

**What it does** (read from the code, then measured):

* opens `Desert1:UNDER` — six tunnel maps (`Mz1A.til`..`Mz3B.til`), the `UANT`/`UFLM`/`UHRO`
  sprite banks and `Tilz.pic` (608x216, five planes);
* loads `Tilz.pic` through `FUN_0001B62E` with the third argument `g_palWant` (`0x29CD8`), the
  same SMS-picture loader the flight uses for `tiles.pic`, so the 32-colour tunnel palette is
  applied by the engine's own palette publisher (both pictures share it: `0842 0B52 0C64 ...`);
* builds a **57-entry copper list** from the template at `0x24EB2` and installs it on the second
  boot view (`0x5A738`) with `LoadView` (`FUN_00017F34`); the VBI it adds (`FUN_00018108`) patches
  the five plane pointers into the scrolled bitmap every frame (`FUN_00017CE`) and copies
  `g_palWant` into `COLOR00..COLOR31`;
* runs until `DAT_0002A170` reaches 8, calling `FUN_0000C390` (player, tile collision, exits),
  `FUN_0000C75E` (flame), `FUN_0000CA5E` (ants/timer), `FUN_0000C310` (clock), `FUN_0000D5E8`
  (sprites), `FUN_0000BEDA` (HUD strip) and `FUN_0000D376` (tiles), then returns `1`.

**Reproduction and the injection boundary.** `--call 0xFFCA:1513` on the host. On the oracle use
**`--callat 0xFFCA:4876672:0:0x23512`**, not `--call`: the host injects at its dispatch-loop
boundary (after the translated function in progress), the oracle's `--call` injects before the *next
instruction*. Without the matching point the two enter with different stack/register context and the
run diverges at frame 1514 (`pc 0xDA90` vs `0x2422E`), even though the frame-1513 records are
identical. With it:

| session | evidence |
|---|---|
| idle | **0 differing records** (PC/SR/registers/custom) frames 1513..1819; RAM byte-identical at 1520/1560/1600/1700 |
| `ref\inputs\under.txt` | **0 differing records** frames 1513..2334; RAM byte-identical at 1750/1950/2150 (frame 1850: 11 dead-stack bytes at `0x17FDD*`, the known artifact); both return at frame 2334, 12 525 972 instructions, 2700 rasters |

The scene ends by itself: idle, the eight timed steps run out and it returns at frame 2100
(`D0 = 1`, 10 513 651 instructions); with the input script `DAT_0002A170` is 8 at the final
boundary and it returns at 2334. The player position (`0x29ED0/0x29ED2`) walks (48,884) ->
(184,917) under the script, so movement, tile collision and the timer are exercised, not just the
setup. The `--cover` run adds **25 model functions + the orphan block `0x1BA1A`** that no earlier
session executed (2 516 model instructions).

### The picture is the scene's own list, and the presenter already handles it

The list has four segments: `WAIT 0x1B01` -> `BPLCON0 0x0200` (off, above the window),
`WAIT 0x1D01` -> `BPLCON0 0x5200` (five planes), `WAIT 0xE501` -> `BPLCON0 0x0200` (off, below the
window). DIW is `0x2C90..0xE0B0`, i.e. **rows 44..224 = 180 visible rows** inside the ViewPort's
200-row raster; the plane pointers point `0x280` (16 rows of 40 bytes) into the bitmap and
BPL1MOD/BPL2MOD are 2, so the tunnel scrolls by moving the list's pointers. Measured at frame 1750:
320x200, painted rows 0..179, 23 651 lit pixels, the `tilz.pic` palette (`AA1111/BB2222/771111`
walls on black), rows 180..199 border. `tools\present-check.ps1` now has an **under** case
(320x200, coverage >= 0.25, >= 15 000 tunnel pixels, >= 3000 wall-reds, the border below row 180
clean); measured 0.365 / 23 648 / 5812.

### The title starts it too (key 6)

`src\host\title.c` gained `{ KEY_6, "Underground", 0xFFCA }`, and the engine entry needs nothing
else: the boot's two screen bitmaps (at frame 20 `DAT_00026612/0x2660E` are already the 320x216,
5-plane buffers) and the second view are what the scene patches, and it loads its pack, picture and
palette itself. `tools\title-check.ps1` has a key-6 case: `Desert1:UNDER` opens, >= 300 rasters, no
stack/RAM/PC fault, and the scene's eight timed steps end by themselves, so the title comes back
(measured: return at frame ~671, the map score starts under the title a second time, the run stops
on the hold pc `0xD870`).

The survey had `0xBEDA..0xE03C` filed as the "journey / world renderer"; it is this scene's
renderer (the flight's is `0x10E48`/`0x11512`). The journey cutscene is `FUN_00006F58` (mode 0xc)
and is still unentered. The survey's coverage union is updated accordingly.

## The giant-ant fight runs, and the port marks where it aims (2026-11-14, this session)

Reported as "the game doesn't show you where you're aiming in the giant-ant fight - show a
crosshair". The mark is a port feature (the original has no aiming aid), but *where* it goes is the
engine's own number, so finding it meant entering the fight first - a chapter the survey had filed
as never run.

**The fight.** `FUN_00008C5C` (runtime `0xCC5C`) is the chapter's entry: `FUN_0000895E` loads the
BACKS bank, `Desert3:BIGANT` and the two samples (`sfx/ants`, `sfx/gunshot`), then
`DAT_00021C50(0, FUN_00007934)` runs the fight, whose per-update script is `FUN_00007934`:

* `FUN_00007DCA` - the ant's state machine (states `0..0xD`, the MovE record `ANAN`);
* `FUN_0000823A` - draws the antennas of the current state and tests every live shot against them;
* `FUN_000086A0` - fires: the muzzle flash, the shot's test point, the gunshot sample;
* `FUN_000084E4` - moves the pistol with the stick and draws it.

**What the room leaves behind, and the entry needs.** A room sets `0x28A3A` (location, which
`FUN_00008C5C` turns into a per-location sprite prefix through the table at `0x22CF6`, e.g. "Cone")
and `0x28B10` (the room byte `FUN_000057BA` turns into BACKS or BACKS1); `FUN_00005824` sprintf's
that byte into `0x28B3E` as `"!B%02d"` - the resource name of the room's picture, which
`FUN_0000895E` looks up again. With a cold boot all three are 0 and the scene opens the *empty*
name and returns at once. **The fire button is the world loop's clock VBI:** `FUN_0000551C` installs
`FUN_000054CC`, and its `FUN_0000A500` is the only writer of the fire edge `0x26898` that
`FUN_000086A0` tests - without it the pistol aims but never shoots (measured: aim moved, `0x29CBE`
stayed 0). So the preset is
`--poke 999:0x2CA38=0x11,0x2CB10=0xC000000,0x2CB3E=0x21423132,0x2CB42=0 --call 0x951C:1000:0x200:0xCC5C`
(location `0x11`, room `0x0C`, `"!B12"`, then `FUN_0000551C`, which returns *into* `FUN_00008C5C`
and leaves `0x200` - the END sentinel - for the scene's own `rts`).

**Parity, measured.** Host vs oracle, `--input` with two fires: 4028 frame records identical
(registers, SR, PC, custom chips), RAM byte-identical at frames 1900/2100/2300/2500 (frame 1750
differs in two dead stack bytes at `0x17FCBC`; 100 of the 4028 records have a differing RAM hash,
all of them that artifact). The scene runs 4028 frames and returns `D0 = 0`. The location only
carries two of the seven `ConeSP<n>.win` sprites BACKS could hold, so `ConeSP3..7` fail to open -
`FUN_0000895E` stores the null and `FUN_00007934` skips it, which is the engine's own tolerance,
not a missing file.

**The crosshair.** `0x29AE0/0x29AE2` is the pistol's screen position; `FUN_000086A0` tests a shot at
that pair `0x1B` left and `0x3A` up (`0x87B0`), stores it in `0x29AF2/0x29AFC`, and `FUN_0000823A`
compares it with the antenna rectangles. The port draws `assets\crosshair.png` there, as a runtime
overlay (`rt_crosshair_at`, pens 248/249, `tools\mkcrosshair.ps1` -> `crosshair_art.h`), so it can
cost no machine state. The seam is `rc_entryHook` on `FUN_00007934` (the fight is live this frame)
plus the frame boundary *before* the present (`host_frame` -> `crosshair_present`), which reads the
aim words: `FUN_000084E4` moves the pistol after the shot is tested, so the boundary value is both
what the pistol was last drawn at and what the next trigger pull will test.

**Measured** (`tools\crosshair-check.ps1`): frame 2121 has the aim at `238,120` and the crosshair
drawn at `211,62` (14/14 art pixels); the shot the engine stores on frame 2122 is `211,62` - the
mark and the hit test are the same point. Frame 2095: aim `212,120`, mark `185,62`. The same run
without the seam draws no crosshair and matches the armed run on all 3391 frame records.

**The title starts it too (key 7).** `src\host\title.c` gained `{ KEY_7, "Giant Ant", 0xCC5C }`; its
launch writes the three room words and installs the clock VBI once (a second launch must not add a
second vblank server), then enters the chapter on the next pass through the hold point.
`tools\title-check.ps1` has the case: BACKS/BIGANT/both samples open, >= 1200 rasters, and the fight
ends by itself (~frame 1427), so the title comes back.

## The chicken race: a per-line palette and a per-region stride (2026-11-14)

Reported as "implement the chicken minigame". The scene is the story's **chicken run**:
`FUN_0001CC2E` (the hotspot action handler) prints "Ice and the Hellcats came out of nowhere...",
"were only turning around. Any minute now they would be coming for me...", sets the swerve window
from the encounter count (`0x2C100 = 0x78 + 10*n`, `0x2C102 = 0x104 - 10*n`) and runs
**`FUN_0001BA3E`** (runtime `0x1FA3E`), the race itself. That loads `Desert3:CHICK` and the
`carcrash`/`tankidle`/`skid` samples, installs its own copper list through the View's `LOFCprList`
(the hospital's trick, `FUN_0001BE80`), adds a `CarVBI` server (`IntVects` slot 5), draws the road
with Area fills into its own 46-byte-per-row bitmap and blits the oncoming car. Holding the stick up
accelerates, left/right steer the truck into the window the Hellcat has to swerve into
(`0x2C100..0x2C102`), and holding fire brakes. It ends with `FUN_0001CD94`'s narration pages - "The
tires on Ice's car screamed as he swerved off the road" (he swerved) or "I hit the brakes at the last
second..." (you did) - each waiting for a fire press.

**Reproduced** with `--call 0x1FA3E:1513` on both front ends (the scene needs no room, like the
fight), driven by an input script: accelerate from frame 1516, steer left at 1622, fire at 1670 for
the page. Win path: the program returns at frame 1673; brake path (`fire` from 1600, another press
for the page): frame 1753. **Parity**: 335 frame records (win) and 351 (brake) identical in
PC/SR/registers/custom file, and the full RAM byte-identical at the sampled frames
(1560/1600/1630/1660 and 1620/1700). The two sessions put 28 entries of the scene's cluster
(`0x1BA3E..0x1D2C6`, including the animation helpers `0x1D00A`/`0x1D1DA`/`0x1D2C6`) into the
covered union; `FUN_0001CC2E` itself is still only reached by the story, because it needs the room's
`move_node` for its narration pages.

### The divergence was the presenter, and it was three faults in one function

The scene ran and put a picture on the machine from the first try, but the picture was not the
scene: black sky, brown bands, a sheared road. Machine state was already identical, so all of it was
`rt_gfx_present()`:

1. **A WAIT was recognised by bit 15 of the first instruction word.** That bit is bit 7 of the
   vertical position - `src\amiga\copper.c` tests bit 0, which is the whole opcode - so only WAITs
   below line 128 counted. The flight's HUD (`0xCA`) and the hospital's second region (`0xE5`)
   happened to be exactly the ones that work, and the chicken's thirteen sunset-band WAITs
   (`0x5E..0xC5`) were invisible.
2. **The plane pointers were reset at every WAIT**, and a region's first row was the WAIT's own line.
   The hardware *latches* them: a WAIT that only writes colours keeps the set in force, and the rows
   continue from the WAIT that loaded those pointers. The sunset bands are exactly that - same
   planes, new colours.
3. **One palette and one stride for the whole frame.** Every COLORxx write now takes effect from its
   line (`regions[].pal`, latched across frames like the registers themselves: `g_latch`), and
   colours are interned into framebuffer slots (0..239 are the picture, 240..255 stay the OSD's) so
   one 8-bit buffer can carry several palettes down the screen. The stride is the DDF window plus
   BPL1MOD: `0x28..0xD8` with mod 0 is 46 bytes, which is the bytes/row the scene's *own* drawing
   bitmap at `0x2BCF0` names (`0x2E`), and the road strip is 80 = 46 + `0x22` - not the ViewPort
   bitmap's 42.

A list whose segments all program the same picture (every MrgCop screen) keeps the identity map and
the fast conversion path: `segSimple`/`palMulti` decide. The five scenes verified before this change
render **pixel-identical** before/after (intro, map, flight, hospital, fight - measured with `--shot`
at the frames `present-check` uses); only the chicken's 59 168 pixels changed.

**Measured on the chicken** (frame 1567, `--call 0x1FA3E:1513` + `ref\inputs\chicken.txt`):
coverage 0.510 -> 0.962, the sunset rows carry the list's own COLOR00 sequence (13 bars alternating
`AA6644`/`AA6600`), the dashboard picture of region D is intact, and the sky is region A's `0x009D`
blue. A rebuild of the frame from RAM alone (copper list + planes + latched palettes, independent
PowerShell) matches the presenter exactly on the static regions - rows 0..19 and 180..199 - and
differs only where the engine redraws the road strip within the frame, which is also where the
double buffer flips (`0x4F340` vs `0x441E8` plane sets inside one frame).

Note for anyone re-measuring: at the end of the scene `FUN_0001BF26` restores the ViewPort's previous
copper list, so a `--call` run entered from the intro ends on **the intro's picture**, not on the
scene's - measured: the installed list at frame 1778 is the MrgCop one (`0x5A668`, 48 entries, the
intro's own bitmap and palette), not the scene's (`0xC2810`, 187 entries). That is the original's own
behaviour (in the game the room's view comes back), not a fault; a shot taken past the scene's end
measures the screen the scene was entered from.

### The title starts it too (key 5)

`src\host\title.c` gained `{ KEY_5, "Chicken Race", 0x1FA3E }`. The one thing the scene cannot do for
itself is the swerve window, so the title writes what `FUN_0001CC2E` would (`0x2C100 = 0x78`,
`0x2C102 = 0x104`, the first encounter) before it calls the entry - without it the "he swerved"
branch can never be taken. `tools\title-check.ps1` checks the scene's own data (`Desert3:CHICK`,
`carcrash`, `tankidle`), 1200+ rasters and no fault; it is not a returning scene without a fire
press, so the return path stays the fight's check.

`--progress` now prints the segment table the presenter derived from the installed list (row, plane
count, both strides, BPLCON0 and first plane pointer per segment), and `tools\present-check.ps1` has a
**chicken** case: coverage >= 0.90, at least two distinct colours across the sunset rows (a flat
palette fails) and the dashboard's pixels present. Measured: the old presenter scores 0.510 with one
colour, the new one 0.974 with two.

### Three more faults, found by reading the list instead of the picture (2026-11-14, later)

Reported as "there are some visual glitches" against a reference still, with the instruction to find
the reason in the code. The list at frame 1606 (`0xC2810`, 258 entries) names four picture slots and
they are *not* four instances of the same thing:

| rows | segment | what the list programs |
|---|---|---|
| 0..37 | mountain strip | 4 planes at `0xBB320`, palette `009D EEE CCC AAA A85 999 888 666 975 555 444 333 875 222 111 000` |
| 38..62 | horizon strip | 5 planes at `0xBEF00`, **BPLCON0 `0x5600` - DBLPF set**, `BPL1MOD 0x34`, `BPL2MOD 0x22` |
| 63..174 | the road, drawn by the engine | 5 planes at `0x4F340`, BPLCON0 `0x5200`, mod 0, 32 colours |
| 176..212 | cockpit | 5 planes at `0xB7188`, then BPLCON0 `0x0200` (no planes) for the last rows |

Against that, the presenter had three more divergences, all in the same function:

4. **It presented DHeight instead of the window the list programs.** `DIWSTRT 0x1D..DIWSTOP 0xF5` is
   216 rows while the scene's ViewPort still says 200, and the cockpit picture fills rows 176..215 -
   so the bottom 16 rows of the dashboard were cut off. `list_window()` now reads the pair before the
   clamps and lets the window *grow* the raster (the hospital room's 180-row window inside a 200-row
   screen keeps the screen's height: its rows below DIWSTOP are border, and `visH` paints them as
   pen 0 instead of leaking the plane data that starts there - that is what the `present-check`
   hospital case measures).
5. **BPL2MOD was not read at all.** The custom chip set gives the odd-numbered planes BPL1MOD and the
   even-numbered ones BPL2MOD, so one picture can give its two playfields different strides; the
   horizon strip does (98 and 80 in the frames where the engine sets `0x34`/`0x22`). `rt_region` now
   keeps `stride`/`stride2` and a row reads plane *p* with `(p & 1) ? stride2 : stride`.
6. **BPLCON0 was parsed for its plane count only, and not even that was used.** Two bits matter:
   `DBLPF` interleaves two playfields (planes 1/3/5 in colours 0..7 behind planes 2/4 in colours
   8..15, playfield 2 in front, `BPLCON2 0x0024` has PF2PRI clear, so playfield 2 wins), and a plane
   count of zero turns the playfield off - which is how the list blanks the rows under the cockpit.
   The horizon strip is the dual-playfield case: 7456 of its 8000 pixels changed, and it is now drawn
   in exactly the three colours its own segment programs (`0x966`, `0x09D`, `0x757`) instead of the
   twenty a five-plane index hash produced out of other segments' palettes.

Measured after the change: the chicken presents **320x216** (was 320x200), coverage 0.974, rows 0..37
and 63..199 byte-identical to the previous build, and only the horizon strip and the 16 recovered
cockpit rows differ. The other five scenes present exactly the same raster as before (intro 0.957,
map 1.000, flight 0.884, hospital 0.900, fight 0.973 - the same numbers to three decimals).
`present-check`'s chicken case now also pins the raster height (216), the strip's colour set and the
cockpit rows below 200, so each of the four faults fails on its own. Machine state is untouched by
all of it: the RAM dump at frames 1566/1570/1572 is byte-identical to the build before these three
changes (`0` differing bytes of 2 097 152).

The *window* is port plumbing, so it is handled on its own terms: `plat_framebuffer()` is a fixed
320x200 DIB (and the DOS target is a fixed VGA mode), so `host_present`/`dos_present` sample a taller
raster down over the 200 rows instead of leaving the bottom of the cockpit out of the window. The
headless `--shot`/`--dump` raster keeps the list's true size (320x216), which is what the checks read.

### Two more: the Area fill and the dual-playfield priority (2026-11-14, later still)

Reported as "the road should be grey, ours is invisible or the colour of the ground" and "there
should be two layers of mountains, ours shows one". Both were still differences, not missing art.

7. **`AreaEnd` paired its scanline crossings in polygon order.** `FUN_0001C4D2` fills the road twice
   per frame: `SetAPen(rp, 0x1C)` at `0x1C6FE`, then `AreaMove`/`AreaDraw`x4/`AreaEnd` with the
   polygon `(184,1) (0,40) (0,111) (367,111) (367,105)`, then `SetAPen(rp, 0x1E)` and the 4-pixel
   marker that becomes the centre line. On every row between 41 and 105 that polygon's edges are
   crossed right-to-left, so the crossings came out as {358, 0} and the `xa..xb` fill loop ran
   backwards and painted nothing - only the bottom six rows, where the order happens to be
   left-to-right, appeared: 2209 of the road's ~27 000 pixels. graphics.library's TAD sorts its edge
   crossings before pairing them; `rt_gfx_area_end` now does the same. The surface is pen 28, whose
   colour the thirteen raster bars program to `444`/`445` grey - so the road was invisible *because*
   it was never filled, not because its colour was wrong.
8. **Dual playfield had its two playfields the wrong way round.** `BPLCON2` is `0x0024` in the
   scene's list: bit 6 (`PF2PRI`) is clear, i.e. playfield 1 has priority. The horizon strip's
   playfield 2 covers every one of its 8000 pixels (measured from the planes: 320 of 320 columns,
   rows 0..24), so putting playfield 2 in front hid the tan range its three playfield-1 planes carry
   - one mountain layer where the original shows two. The composition now reads `PF2PRI` per
   segment: with the bit clear the front playfield is 1, and a transparent pixel there shows
   playfield 2 (`8 + pen`).

Measured after both: the road region (rows 100..160) is 13 774 pixels of pen-28 grey against the
ground's `AA6644`/`AA6600`, the horizon strip carries 4119 pixels of playfield 1's tans and 2601 of
playfield 2's ridge and sky, and each fill call writes 27 225 pixels instead of 2209. `present-check`
grew the matching assertions (both ranges present, road grey count), so each fault fails on its own.
The oracle links the same `src\runtime`, so its RAM stays byte-identical - the parity test cannot see
either fault, which is why both are measured on the composed picture instead.

## The title menu starts the minigames (2026-11-13, later session)

The title screen now starts the four minigames directly: **1** Fight, **2** Take a Flight,
**3** Fire Game, **4** Escape Hospital, and fire (or **0**) the game as before. Each key is the
engine's own scene entry, the one `FUN_00002cc8`'s dispatcher calls once its action is picked:

| key | scene | entry (runtime) | argument |
|---|---|---|---|
| 1 | Fight | `0xF46C` = `FUN_0000B46C` (mode 3, `jsr` slot 46 at `0x2E3E`) | – |
| 2 | Take a Flight | `0x147A6` = `FUN_000107A6` (mode 9, pushed at `0x2F72`) | `6` |
| 3 | Fire Game | `0xFE34` = `FUN_0000BE34` (mode 0xb, `0x2EBA`) | – |
| 4 | Escape Hospital | `0x1C19A` = `FUN_0001819A` (mode 6, vector slot 70, `0x2EF8`) | – |

The title walks each launch as the same calls the dispatcher makes, and every step comes back to
the hold pc: free the score (`FUN_0000EC8A`), then enter the scene with the hold pc as its return
address. When the scene returns, the title reloads the map's score and shows the art again. The
score swap is not cosmetic - `FUN_0000E804` returns immediately while `DAT_00023C58` (a score is
loaded) is set, so without the free the scene would silently play the map's song and write its
volume into that song's block.

Three real bugs were found by the round trip; all are fixed, and all were in the port code, not in
the translation:

* **An injected call's arguments were never popped.** The engine's callers pop what they push
  (`addq.w #4,SP` after the `jsr`; `lea (0x10,SP),SP` at `0x98FC`), but a call injected from the
  host has no caller left to do it. After the score load's two arguments the routine that resumes
  at the hold pc - the intro's setup - ran with the stack 8 bytes low, and its own `unlk/rts` at
  `0x990A` returned into `&"Overhead2.tiny"` (`0x27B84`). Measured: pressing fire on the shipped
  title ran the intro and then executed data around `0x27B84`, ending at pc 0 after 6.5M
  instructions. `title_call` now records how many argument bytes it pushed and `host_title_check`
  adds them back the moment the routine returns.
* **A translated stream runs on through an `rts`** (`rc_ret` only sets `rc_returned`; the host
  dispatcher re-reads the pc), so clearing `rc_breakPc` on launch made the scene's return fall
  straight into the intro's setup instead of back into the title. The break now stays armed for as
  long as the title owns the program, and only the "start the game" path (which *wants* the intro)
  clears it.
* **The front end's register mirror undid the pop.** Each front end keeps a `cpu_t` copy of the
  register file (`g_cpu`) that `host_cia` scatters into the core when the music driver's CIA tick
  runs; a register write made from the title reaches the core only, so the first tick after the
  pop put the stale stack pointer - and the two score arguments - back. Reproduced by playing:
  the title up for any number of frames, key pressed, intro ends, and `FUN_00009870`'s `rts` then
  returned into `&"Overhead2.tiny"`; the window closed at frame ~2100 of the intro with pc 0.
  `host_regs_sync()` is now defined by each front end and called after every register write in
  `title.c`. This is also why `tools\title-check.ps1` did not catch it at first: `--titlekey` took
  the choice before the first menu frame, so no CIA tick ever ran - it now takes the choice after
  one menu frame, as a real key press does, and the check fails without the sync.

**Measured.** `tools\title-check.ps1` (in `tools\gate.ps1` as its own step) boots each key with
`--titlekey <n>` - key 0 included, which is the intro-then-load-screen path the mirror bug broke -
and requires the scene's own data, the rasters it draws (1500 for the fight, 200-350 for the rest,
1800 for the intro) and no stack, RAM or "left the image" fault. The fight is the one scene that
ends on its own without input: key 1 starts it at frame 23 and it returns to the title at frame
1894 - 1871 frames, exactly the 1871 the oracle runs when the same entry is injected at the hold pc
(`--callat 0xF46C:1:0:0xD870` returns at frame 1888 from frame 17). The host and the oracle also
agree on the same fight injected at frame 168: both return at frame 2069 after 6 770 989
instructions, and the two state dumps differ only in the dead-stack bytes already documented
above. In the window, with a real `VK_0`/`VK_1` posted to the game's own window, the title takes
the key, the scene runs, and key 0 plays the intro through to the "Lizard Breath has been awaiting
your return" load screen.

Known limits, by construction: a scene entered this way has no room, no location state and no
post-scene bookkeeping, so the flight flies with idle object slots and hangs in its own
`while(true)` when it ends, and the fire game and the hospital wait for a keyboard that has
nothing to do with the room they were entered from. `Make a Call` and the situation map are *not*
keys: the phone comes up with a black palette from this point, and `FUN_00008E56` dereferences the
room's `move_node` (`+0x2C`), so a null node is an immediate crash. Both are one table line away
once they work. The keys are armed only for a played game (`--titlekey` is the scripted exception,
a dev seam like `--call`), so every measurement path still starts where the original starts.

## The fight minigame runs: a lost hash chain and a reversed CMPM (2026-11-13, later session)

Reported as "implement the fighting mini game". It was written off as blocked by the disks (§6.4 of
the survey: `hurt2` and `stab1` "have no directory entry"). That was our own reader, and behind it
sat a translation bug the fight was the first scene to execute.

**Reproduction.** `--call 0xF46C:1513` (image `0xB46C`, the bar's action, engine slot 41) enters
`FUN_0000b46c`, which loads `Fight.tiny`, the `DES4` score, then `FUN_0000b31c`'s five samples from
`Desert3:sfx` - `hurt1`, `hurt2`, `stab1`, `stab2`, `wooosh` (`0xb3ec`..`0xb404` in the disassembly,
the strings at `0xb3e6`). The log said:

    emu: open "hurt1" -> export\disk3\sfx\hurt1 (2916 bytes)
    emu: Open("hurt2",1005) failed: no disk holds sfx\hurt2

**Divergence 1 — the exporter lost hash-chain entries (`src\assetExport\AmigaFs.cs`).** A
directory's buckets point at the first entry of a chain and the entry continues it through a
longword at the **end** of its 512-byte header block, offset `0x1F0`; `0x1F4` is the parent
directory, `0x1F8` the data-block-table extension, `0x1FC` the entry type (`-3` file, `2`
directory). `ReadDir` walked the chain from `0x1A0` (always 0) and read `byteSize` from `0x140`
(always 0), so every collision-linked file vanished and was recovered as an "orphan" into the disk
root. Read out of the raw image: `ants`(922)→`jet`(956), `dthatstheguy`(932)→`hurt2`(954),
`exp`(946)→`stab1`(972), `CHICK`(893)→`WANI`(914), all with parent `881` (`sfx`) or `880` (root).
After the fix `list` shows them under `sfx` with their real sizes, and **no** entry is an orphan on
any of the three disks. Re-extracting moves exactly three files (`hurt2`, `jet`, `stab1`) from
`export\disk3\` into `export\disk3\sfx\` - 78 files before and after, the other 75 byte-identical.

**Divergence 2 — CMPM's operands were reversed, in the interpreter *and* the emitter.** With the
samples loading, the first host/oracle difference was at frame 1660: same PC (`0x231B6`), same SR,
`D0 = -1` in the translated build against `+1` in the original. Instruction tracing put the branch
at `0x208FE`, inside `FUN_000208e8` - the engine's `strcmp`:

    000208e8  move.w #0x7fff,D0            ; (0x208ee is the second entry: move.w (0xc,A7),D0)
    000208f6  movea.l (4,A7),A0 / movea.l (8,A7),A1
    000208fe  cmpm.b (A1)+,(A0)+
    00020900  bne 0x2090e
    0002090e  bls 0x20914 / moveq #1,D0 ... 0x20914 moveq #-1,D0

CMPM names its **destination** in bits 11-9 and its **source** in bits 2-0 (`0xB109` =
`cmpm.b (A1)+,(A0)+`), and its flags are destination - source - that is what makes `bls` send the
smaller destination to `moveq #-1`. Both our interpreter (`Cpu68k.GroupB`) and the emitter read the
operand in bits 11-9 as the source, the way CMP does, so every comparison came out negated. The two
agreeing is why the fixture differential never saw it: it compares the translated function against
*our* interpreter, and both were wrong together. Fixed in both (and in the emitted mnemonic text, so
the generated comments now read like Ghidra's), functions regenerated - `0x208FE` is the only CMPM
in the image, so `fn_000208e8.c` is the only generated file that changed. This also closes the
"`D0` is `-1` where the oracle has `1` at frames 32..45" note that had been open since 2026-11-12.
Hand-checked regressions in `tools\harness-check.ps1` (`strcmp "a","b" = -1`, `"b","a" = +1`), and
two fixtures (`ref\fixtures\000208e8-strcmp-{lt,gt}.json`) so the translator is held to them too.

**The fight itself, measured.** `ref\inputs\fight.txt` drives it: fire + joystick word `0x0003` in
6-frame bursts from frame 1700. `0x0003` is what the engine's own decode (`FUN_00011bf0`) reads as
the vertical axis, i.e. pose 5 with the button held; the 6-frame burst is the shortest that reaches
that pose's hit frame (2) while the opponent is still mid-attack, and the opponent's pose is what
decides whether a punch lands (`FUN_0000ae16`: pose 4 hits anything but a block pose 3/1, pose 5
anything but 2). Measured on the way: opponent damage counter `0x29e30` 0 → 32, its bar
(`0x29e38` + 99, drawn at `0xBE`) 118 → 0 by frame 3400, opponent pose 8 (down), and the win flag
`DAT_0002991e = 1` at frame 3430, after which the scene returns to the program-end sentinel. Holding
the button instead of bursting puts the opponent in a permanent block (pose 2) and the fight can
never end - the block/miss handlers `0xB27C`/`0xB2A0`/`0xB2C4` never run, which is why the coverage
matrix counts 17 of the fight's 20 functions and not all 20.

**Parity.** With that input, host and oracle produce 3432 frame records: PC, SR, all sixteen
registers, the custom-chip file and the instruction count are identical on **every** record. 76
records differ in the RAM hash and nothing else, and every differing byte sits below the stack
pointer (`0x17Fxxx`, 1-10 bytes per frame) - the dead-scratch class already documented here; before
the CMPM fix 33 of those records also carried a differing register (two of them a differing PC as
well). RAM at the win frame (3430) and at frame 3000 is byte-identical, 0 of 2 097 152 bytes.

**Nothing that worked before changed.** The 60M recorded playthrough still matches: 19451 records,
PC/SR/instruction count/custom chips identical on all of them, and the RAM-hash differences are again
only inside `0x17Fxxx` - 20 sampled frames put every differing byte below SP and none in the engine's
data area, while frames 100/1000/2890/3000/5000 are byte-identical (as they were). `tools\gate.ps1`
5/5.

**New gate check.** `tools\present-check.ps1` gained the fight: it enters the scene at frame 1513
and requires coverage >= 0.90 **plus** at least 1500 non-border pixels in rows 0..12 and 1500 in rows
188..199 - the two health bars are the only thing in those bands and they are their own display
region, so a dropped region, a border outside DIW or the wrong buffer fails even when the arena
covers the screen. Measured: coverage 0.973, bars 3735/3544, 542 pixels of motion 300 000
instructions apart. It reports SKIP when `ref\inputs\fight.txt` is absent, like the other recorded
sessions.

## Two port features: a title screen, and the mouse pointer (2026-11-13)

Both are code the original does not have, i.e. the sanctioned exception to RULE 0: there is nothing
to diff them against, so they are written on their own terms and, above all, they must not disturb
anything that *is* diffed.

**The title screen.** `src\host\title.c` draws `assets\titlescreen.png` into the platform framebuffer
and waits for /FIRE; escape or closing the window quits. Pressing fire starts the intro; the scene is
the place the main menu (settings, save slots) will go.

The art is converted, not loaded: `tools\mktitleart.ps1` turns the PNG into `src\host\title_art.h`
(one byte per pixel plus its 256-entry palette), which is exactly the platform framebuffer's format,
so no image decoder and no allocation is needed in either build. The PNG has to be 320x200 and
8-bit indexed; the conversion is byte-exact (60 colours are used, 0 of 64 000 pixels differ from the
source), which is why the tool has no quantiser - a still should not lose anything on the way in.

**The title's music is the map screen's, played by the engine.** The score driver is game code (CIA
timer A -> `FUN_0000f264` -> tempo `FUN_0000f646` + player `FUN_0000f286` + DMA/volume
`FUN_0000f3f4`), so nothing host-side could play a `.tiny`; the engine has to run. It does not have
to *draw* anything while it does, though, so the title holds the program where it is and lets the
machine tick:

    boot -> ... -> FUN_00009870 (the intro's setup, runtime 0xD870, reached at frame ~17)
                                        ^ held here, before its first instruction runs
      title: title_call FUN_00009cf2(&"Overhead2.tiny", -1)   load + start, loop for ever
             (the same call the map's setup makes at FUN_0000bfca, plus its `= 100` into the music
              block at DAT_00023c5e, so the title is exactly as loud as the map)
             one frame = rt_time_run(EMU_CYCLES_PER_FRAME) + rt_cia_service + oracle_tick
      fire:  title_call FUN_0000ec8a()                        stop + free the score
             then the intro runs from its first instruction and loads MAINTITLE.tiny itself

Both calls go through `title_call()`, which pushes the arguments and a return address onto the
emulated stack and sets `REG_PC` - the same shape the front ends' `--call` uses. The unload is not
optional: `FUN_0000e804` returns immediately when `DAT_00023c58` (a score is loaded) is set, so
without it the intro would keep the map's song.

`FUN_00009870` is reached as a block *inside* a translated function (the boot dispatcher runs it
inline), so no call boundary exists to catch there. `src\recomp\cpu.c` therefore grew a second
dispatch seam next to `rc_stopAt`: `rc_breakPc`, checked per instruction in `step_budget()` and
jumping back out with `c->pc` still on the un-run instruction, so the host loop sees the PC and can
decide. It is 0 unless the title is armed; the measurement paths never set it.

The title runs only in the played game: `src\host\main.c` arms it only for `--run`/`--window` without
an input script, a state/raster dump, `--call` or `--poke`, and `src\host\dos_main.c` only for
`--frames == 0` without `--call`/`--dump`. A measurement therefore starts exactly where the original
starts. `tools\gate.ps1` 5/5 afterwards, i.e. the raster and fixture steps see no difference.

**The mouse pointer (Win32).** The game is keyboard-only, so `plat_win32.c` hides the pointer and
confines it to the picture while its window has the focus, and gives both back on `WM_KILLFOCUS`, on
`plat_shutdown` and therefore on exit: `ShowCursor` is a counter, so the hide loop runs until the
answer is negative and remembers how many calls that took - exactly the number of `ShowCursor(TRUE)`
calls owed. Measured with the game running: `GetCursorInfo` reports the cursor not showing, and
`SetCursorPos(5,5)` lands on the client rect's top-left corner (237,260) instead of the desktop
origin; after a forced `WM_KILLFOCUS` the cursor is shown again, the pointer moves freely and a
`WM_SETFOCUS` hides it again.

Verified end to end by capturing the live window (`PrintWindow`): the title art is on screen while
the score plays (the captured audio is non-silent, and the machine's Paula state shows channels 0/1
enabled with the length/period of a real module), one fire press shows the Cinemaware intro which
then loads its own `MAINTITLE.tiny`, escape at the title exits without the intro ever running, and
`--run --input <script>` boots straight into the game with the title never engaging. MS-DOS target
builds too (`bin\dos\ICFTD.EXE`, 3159 KB).

## The hospital's scroll and its garbage band (2026-11-13, after the flight)

Reported as "the hospital minigame has the same issue as the flight": the scroll stepped instead of
moving, and a band of the *desert* showed under the room. Both are presenter divergences, and both
were found by reading what the engine programs rather than by looking at the picture.

**What the original does, in order.** "Escape Hospital" runs `FUN_0001819a`, which sets the screen
parameters in globals the display code then derives everything from:

    0x2a196 = 0x150 (336)   bitmap width in pixels   -> 0x28d24 = 0x2a196/8 = 42  bytes/row (0x1b94a)
    0x2a198 = 200           ViewPort height
    0x2a19a = 5             bitplanes
    0x2a1a0 = 10            vertical coarse unit, in bitmap rows
    0x29ed4 = 3             fine-scroll step per scene tick (horizontal)
    0x29ed6 = 2             the same for the vertical accumulator

`FUN_00017f34` then allocates a 400-byte copper list, copies the level's own template into it up to
its `0xFACE` terminator, saves the View's existing `cprlist` start/MaxCount (`0x2a888`/`0x2a88c`),
points `cprlist->start` at its own list and calls LoadView. **The engine's list is the display**; the
system list MrgCop built is not running. `FUN_00017fdc` fills the five `BPLxPT` entries with

    list+0x2A   = 0x28d24 * 10 + bitmap plane      (a ten-row lead-in into a 216-row bitmap)

and `FUN_000180f0` -> `FUN_00017cec` patches the list every scene tick (gated by `0x28ce0`): the
`0102` entry becomes `fine | fine<<4`, `0x28cd8` (bytes) is added to both five-plane sets, one set is
written back into `list+0x2A`, and the sets are swapped. For the vertical direction `0x28cd8` is
`+-(0x28cde * 0x28d24)` = **two bitmap rows**, so the vertical scroll is nothing but the plane
pointers moving; horizontally the coarse step does *not* move them (the renderer redraws the strip -
`0x28d28`/`0x28d2a` and the `0x2ae1e` delta are its state, and `0x2ae1e` is written but never read).

The list itself, read out of live RAM at frame 1000:

    e 0  WAIT 1B01 FFFE          ; playfield starts
    e 1  BPLCON0 0200            ; "one plane" while the border/vblank runs - the bus is the CPU's
    e 2  BPLCON2 0024
    e 3  DIWSTRT 2C90            ; display lines 0x2C..0xE0 = 180 rows
    e 4  DIWSTOP E0B0
    e 5  DDFSTRT 0038            ; 38-byte fetch window ...
    e 6  DDFSTOP 00C8
    e 7  BPLCON1 00EE            ; = fine|fine<<4, the only horizontal scroll
    e 8  BPL1MOD 0004            ; ... plus 4 = the 42-byte stride
    e 9  BPL2MOD 0004
    e10..e19  five BPLxPT = bitmap plane + 0x1A4
    e20..e51  32 colours
    e52  WAIT 1D01 FFFE
    e53  BPLCON0 5200            ; the real five-plane value, in force for the visible window
    e54  WAIT E501 FF00          ; the template's second region, below the window: not displayed
    e55  BPLCON0 0200
    e56  WAIT FFFF FFFE          ; end

So the picture is fully described by machine state: display row `y` (0..179) shows bit `x - d` of the
byte at `BPLxPT + y*42`, and everything outside the window is the border, i.e. pen 0 = COLOR00.

**Divergence 1: the presenter read the ViewPort's BitMap, not the list's planes.** The branch that
was supposed to prefer the list's pointers was dead code - `if (nPlanes > 0 && listPlanes[0] != 0)`,
with `nPlanes` never assigned - so every single-region list fell back to `bm_plane(bm, p)` at bitmap
row 0. For the hospital that loses the ten-row lead-in (the room is drawn from row 10) *and* every
vertical step, because only the pointers carry the vertical scroll. The group in force at the top of
the frame (the one the first `WAIT` closes, `regions[0]`) now supplies both the planes and the
delays; a list that names no plane pointer still leaves the ViewPort's planes.

**Divergence 2: nothing was drawn outside the window.** The converters write `w` x `h` pixels and the
old code stopped there, so the 20 buffer rows below DIWSTOP kept whatever the previous screen left -
in the hospital playthrough that was the desert, the garbled band at the bottom. Rows below `h` and
columns right of `w` are now cleared to pen 0, as the border is.

**Divergence 3: the prefetch byte before a row was unreachable.** `plane_row_byte()` clamped the
*row-relative* offset at 0, so the top row of a delayed playfield could not read the bytes in front
of it. It now clamps the *address* at the plane's start, which is what bitplane DMA does.

**Verified against the model, not against a feeling.** A raster rebuilt from RAM alone - copper list,
bitmap bytes, palette - and compared with what the presenter wrote:

    frame 7390 (d=11)   planes 0x4438C 0x466FC 0x48A6C 0x4ADDC 0x4D14C, DIW 180 rows
                        before divergence 3: 11 of 64 000 pixels differ (x=0..10 of row 0)
                        after:               0 of 64 000 pixels differ
    frame 7440 (d=0)    planes 0x443E0 ... (the pointer two rows lower)
                        0 of 64 000 pixels differ

and the motion of the presented rasters over the recorded playthrough (`out\hospital-live.txt`), band
shifts between consecutive frames, frames 7432-7560:

    before   dy = 0 for all 130 frame pairs (the view never moved vertically)
    after    dy = -2 on 10 pairs, residual 0.9 (a pixel-exact two-row step, as the pointers say)

**Nothing that worked before changed.** Same frames before/after: intro identical, map identical,
flight differs by **one** pixel - `y=158 x=0`, the first pixel of the HUD region's top row, which
divergence 3 corrects. `tools\gate.ps1` 5/5. A presenter change must not touch machine state, and
does not: the same input reaches the same frame with the same 13 809 presents.

**New gate check.** `tools\present-check.ps1` now enters the hospital with
`--call 0x1C19A:2500` on `ref\inputs\flight-crash-hospital-room.txt` - late enough that the map has
put a picture in the rows below DIWSTOP, which is what makes the check able to fail - and requires
those rows to be one colour (the border) plus coverage >= 0.80. Measured: the pre-fix presenter fails
it with 765 stale pixels, the fixed one passes (coverage 0.900).

**Tooling.** The host can now write a raster per presented frame, the way the oracle's `--dump` does:
`--dump <prefix> [n] [--dumpfrom <frame>]`. Files are named `<prefix><frame>.bmp`, so a raster lines
up with the `--state`/`--ram` dump of the same frame - which is how the comparison above was made
possible at all.

**Still open, unchanged:** the scene tick's cadence (the flight's note applies - ~16.5 Hz, three
vblanks per tick). Nothing here touches it; both minigames move in the steps the engine takes.

**Third divergence: the playfield did not stop where the copper says it does.**
With the scroll smooth, the bottom of the flight screen showed a band of noise. It is the HUD - the
canister count and the FUEL bar - which is a *second display region* in the same copper list:

    entry 0   WAIT 1B01 FFFE                 ; playfield starts
    entry 1   BPLCON0 0200, DIW 2C90..E0B0, DDF 0038..00C8, BPLCON1, BPL1MOD/BPL2MOD = 2
    entries 3..19   ... 5 plane pointers 04F610 051980 053CF0 056060 0583D0
    entries 20..51  32 colours
    entry 52  WAIT 1D01 FFFE                 ; region 2
    entry 54  WAIT CA01 FFFE                 ; row 0xCA = 202 -> the HUD
    entry 56  5 plane pointers 08D0B0 08D500 090750 090BA0 090FF0 (its own bitmap)
    entry 66  WAIT E201 FF00                 ; end

`rt_gfx_present()` now splits the list into regions at its WAITs and converts each row with the
plane set and the `BPLCON1` delay the copper has in force there, reading that region's bitmap from
its own row 0 (the display row is not the bitmap row - feeding the display row into the second
region read 158 rows into the panel, which is the noise that was visible). The DIW rectangle is
applied as well: the list asks for lines 0x2C..0xE0 (180 rows, with the HUD in the last 22) and
`0x90..0xB0` across, so the flight view sits inside a black border, while the map/room lists use
`0x81..0xC1` and stay full width.

Checked against the reference: rendering the HUD's five planes from a RAM dump reproduces the
original's panel exactly (canister icon, "2", "FUEL" bar with its red gauge). `tools\gate.ps1` 4/4,
RAM byte-identical to the oracle at frames 3100 and 3110.

**Second divergence, same screen (found when the scroll became visible): the wrong buffer.**
With the delays applied the picture scrolled, but once a second it jumped a tile and came back,
and the plane sprite vanished for a frame. Cause: the engine double-buffers. `FUN_00011cdc` swaps
the five plane pointers at `DAT_00028d7c` with `DAT_00028d90` (0x11d32) in the same vblank that
patches `BPLCON1`, and the copper list is rebuilt from them; `rt_gfx_present()` was converting the
*ViewPort's* BitMap, which is only one of the two buffers - so at every flip we showed the buffer
the beam was not on, one flip stale. Measured: the list's `BPLxPT` group read `044378 0466E8 048A58
04ADC8 04D138` while the ViewPort's planes were `04F4D0 051840 053BB0 055F20 058290`.

The presenter now takes the plane pointers from the installed copper list - the group the engine
patches, i.e. the first complete `BPL1PTH..BPLnPTL` block whose pointers all sit inside RAM - so it
renders what the shifter reads. Measured on the recorded flight, frames 3100-3130, best-fit shift
between consecutive presented frames:

    before   3108->3109 shift +15 px, 3110->3111 content swap (84 % mismatch)   <- jump and back
    after    -1 px every three frames, 0 % mismatch on the static frames, 6.9 % on the moving ones
             (the 6.9 % is the sprite, which does not shift) - including the frames where the
             buffer flips and the delay changes

`tools\gate.ps1` 4/4, RAM still byte-identical to the oracle at frames 3100 and 3110, and the map
after the crash (frame 4825) is unchanged.

## The minigames ran frozen: BPLCON1 was never applied (2026-11-13)

Reported as "the flight and hospital minigames run too slowly and the scrolling is very choppy".
Measured first (RULE 0: machine state, not a picture), and the report split into two unrelated
facts - one a real platform divergence, now fixed; one the engine's own pacing, still open.

**What the engine does.** The flight and hospital scenes scroll horizontally *without touching the
bitmap*. The frame interrupt `FUN_00011e92`/`FUN_00011cdc` (WGameVBI) decrements the fine-scroll
accumulator `DAT_00028cd4` by `DAT_00028cdc` per scene tick, and patches the copper list it keeps
at `DAT_0002a85a`:

    0x11cf2  move.w DAT_00028cd4,D0 / lsl.w #4,D0 / or.w DAT_00028cd4,D0 / move.w D0,(A0)
             ; A0 = list + 0x1E = the value of the `0102` (BPLCON1) entry

so `PF1H = PF2H = (fine+1) & 15`. The coarse position (`DAT_0002a1a4`/`DAT_0002a1a6`, the camera in
`DAT_0002a850`/`0x2a852 = col*16 + DAT_000297ee`) only moves when that accumulator wraps; the
bitmap is only redrawn then (103 blits in one frame, against 15 per normal tick).

**The divergence.** `rt_gfx_present()` converted the ViewPort bitmap with a straight 8-bit copy -
no playfield delay at all. A register the whole scroll depends on was simply not implemented, so
the picture stood still between coarse steps. Measured on the recorded flight
(`out\flight-live.txt`, frames 3080-3260, 60-row band, best-fit shift per frame pair):

    before   0 px of motion over 181 frames;  the band is byte-identical for 6+ frames at a time
             and then changes discontinuously (best-fit shift 0, mismatch 20-53 %)
    after    1 px per scene tick, every tick, mismatch 0 % (a pixel-exact shift), no jump at the
             coarse redraw

`conv_picture_scrolled()` now applies it the way the hardware does: data enters the shifter
`PF1H`/`PF2H` colour clocks late (winuae `drawing.cpp`, `update_bplcon1` + `copybpl2` at
`bplcon1_shift[p]`), so screen pixel x shows bit `x-d` of its playfield's plane row, with
playfields alternating over the bitplanes (1,3,5 = playfield 1). Bytes in front of the row are what
the fetch already has in the shifter, so a negative index reads the memory before the row. Both
nibbles equal in this game, but the playfield split is implemented because that is the register's
meaning. The first `0102` entry in the list is the one in force at the top of the frame; the engine
writes a second one (`0x00FF`) for the panel region, and taking the last would hide the scroll.

The cache that skips a conversion (`conv_same`) now includes the two delays - a frame that only
changed BPLCON1 has an unchanged bitmap and would otherwise not be re-converted.

**Nothing that works today changes.** Measured `d1`/`d2` at the screens this project has verified:
frame 200 (intro) 0/0, 1000 0/0, 1650 (Load Screen) 0/0, 2000 0/0, 2300 0/0, 2890 (flight, not
flying) 0/0, 3000 0/0, 4825 (map after the crash) 0/0. Only the scrolling minigames carry a
non-zero delay, and those take the new path; everything else takes the untouched group loop.
`tools\gate.ps1` 4/4, and RAM stays byte-identical to the oracle (frames 3100 and 3110 of the
recorded flight, 0 of 2 097 152 bytes) - this is a presenter change, so it must not and does not
touch machine state.

**What is still open: the cadence, not the smoothness.** With the scroll visible again the engine's
own pacing is measurable and is *not* a bus-accounting error:

  * The scene tick `FUN_000107a6` runs **once per 3 vblanks** (32-33 per 100 frames) - 16.5 Hz.
  * Per tick: ~21 000 instructions and ~87 000 blitter cycles (43 600 colour clocks, 0.61 of a
    frame: five 320x200 plane copies at 2 clocks/word, `FUN_000116e6`, D=A restore), plus **two**
    vblank handshakes it waits for (`DAT_00028ce0` set at 0x10968, `DAT_0002a54a` at 0x10982,
    both cleared by the WGameVBI server at 0x11e88/0x11e8c).
  * Host and oracle are in exact instruction lockstep here (identical counts and PCs at frames
    2300/2320/2330/2340/2350/2360), and the cost model is Musashi's 68000 table walked through
    UAE's slot map (CPU share 74.1 % at 5 planes) - so the emulated machine is not being charged
    more than the hardware would be.

The engine's structure forces at least two vblanks per tick; our work then adds a third. Whether
the original also lands on three frames cannot be settled from our side - the oracle shares this
platform model - so the next measurement needs the reference: two WinUAE savestates seconds apart
inside the flight give (a) `DAT_000297ae` (actor slot count behind the O(n^2) scan in
`FUN_000135da`, 30 here), (b) `DAT_0002a85a`'s BPLCON1 entry and (c) `DAT_0002a850`/`0x2a852`, i.e.
pixels travelled per vblank. Tooling is in place: `tools\refstate.ps1` reads a `.uss`, and the
program sits at `0xC52660`, so RAM address = `0xC00000 + image offset`.

**The HUD: read from the engine's list filler.** `FUN_0001200c` writes the list in three blocks -
the playfield's five plane pointers at `list+0x2A` from `DAT_0002a85e` (`DAT_00028d7c + 400`, i.e.
the double-buffered set plus ten rows), the palette at `+0x52`, and the **HUD's five pointers at
`list+0xE2`** from a *separate* fixed array `DAT_0002a88e`. The horizontal scroll never moves those
pointers, which is why the panel sits still while the world slides.

Two code faults kept the HUD off the screen, both in `rt_gfx_present()`:

  * the region rows were recorded with `regVStart` still 0, because the DIW was read *after* the
    region loop; the HUD's WAIT `0xCA` then became row 202 instead of `202 - 0x2C = 158`, i.e.
    below a 200-row frame, so the playfield was painted over it. The DIW is now read first, in its
    own pass, and the row is `vpos - vstart`;
  * the sanity guard compared the window against `EMU_FB_MAX_H` (the buffer bound) instead of the
    ViewPort's height, so a legitimate 180-row window was rejected.

Measured after the fix, on the recorded flight: region 1 at row **158**, its 22 rows carrying the
panel's data (`row 162..178`, 250-280 non-blank pixels per row), rows 180+ border black - which is
the black bar the original shows under the bar, and the same window gives the black band on foot.
The horizontal half of the same registers used to be ignored here (the stop was read as a raw byte,
`0xB0-0x10 = 0xA0`, which is the 160-pixel column of a rejected attempt); it is a window too - 288 of
the 320 columns, i.e. the black frame down each side of the flight, the ant nest and the hospital.
See "The minigames' black side borders are the display window" at the end of this file.

## A raster regression check in the gate (2026-11-13, after breaking the map screen)

A DIW-window change made the map screen render as a few rows behind a huge black frame and still
passed `tools\gate.ps1` 4/4, because the gate only checked translation. There is now a fifth step,
`tools\present-check.ps1`, that measures the raster instead of looking at it:

  * **coverage** - the fraction of non-border pixels for intro / map / flight frames; a blank screen
    or an oversized border fails (`coverage < 0.90`, `< 0.85` for the flight, which has a HUD band),
  * **motion** - two frames 300 000 instructions apart must differ by at least 50 sampled pixels,
    which is what a stale framebuffer (a frozen picture with a live game behind it) fails.

Frames come from the recorded sessions under `out\`; without them the step reports SKIP, so the gate
still runs on a fresh clone. Current: intro 0.957, map 1.000, flight 0.958, motion 2740 pixels,
gate 5/5.

Still open from the same screen: the flight view's border/HUD geometry. The DIW registers must be
read **by register** (0x08E/0x090), never by entry index - index 3/4 are DIWSTRT/DIWSTOP in the
flight's list but something else in the map's, and reading them by index is what collapsed the map.
The region split itself (playfield + HUD) works and is what makes the fuel/canister panel render.

## The room after a flight crash: reproduced, and where the picture comes from (2026-11-12)
**Reproduction, kept.** `ref\inputs\flight-crash-hospital-room.txt` (local: `/ref/` is gitignored)
is a recorded playthrough - new game, Map -> Airfield -> "Take a Flight", walk to the plane, hold UP,
crash into a rock - made with the host's new `--run --record`. Replay it on either front end with
`--input ref\inputs\flight-crash-hospital-room.txt`. It reaches the crash at frame ~2900 and the room
that follows, and it is the only reproduction of "the room is garbled after the flight" that does not
need a human at the keyboard.

**It is not a translation difference.** Replaying that input in the host and in the oracle gives
byte-identical RAM - 0 of 2,097,152 bytes - at frames 2890 (flight), 2910 (crash), 2950 (teardown)
and 3000 (room), with the same PC, and 0 custom-chip differences over all 3258 frame records (the
only register noise is a dead Z flag on two frames). Whatever is wrong, both front ends do it, so it
lives in the runtime's display model or in a shim, not in `src\recomp`.

**What the numbers say.** The engine restores its own geometry correctly across the crash
(`*DAT_00026612/0x2660e` 0x28 -> 0x2a at frame 2950, pointers back to `0x044270`/`0x04F428`). The
presenter follows the View the game last loaded, and that View **alternates every frame** between the
two engine buffers - but at frame 3000 buffer `0x044270` holds only 2,595 non-zero bytes while
`0x04F428` holds 16,228, i.e. the room was drawn into one of them only. Every second presented frame
therefore shows a buffer the room was never drawn into.

**CONFIRMED (machine state, 2026-11-12 17:35).** The live plane pointers the copper leaves behind
prove it: at frame 2890 (flight) the installed list programs `BPL1PT..BPL5PT = 0004F5F0 00051970
00053CF0 00056070 000583F0` (the game's own list, `start 0x0A22A8`, 69 entries, BPLCON0 + DDF +
BPLxPT + colours + a second group `0008E9C0…` for the panel). At frames 2950/3000/3200 the installed
list is **the one our `MrgCop` built** (`start 0x5AB68`, 33 entries) and it carries **only COLORxx
entries** - so the live `BPLxPT` registers are all zero and nothing ever re-points the display at the
room, while our presenter falls back to the ViewPort bitmap and alternates between the engine's two
buffers (one of which the room was never drawn into). The engine keeps redrawing the flight's status
panel, which is why the clock in "Hilbers Field / ETA" keeps advancing on a screen that should have
become a room.

**Hand-off: the exact work.** `rt_gfx_mrg_cop` (display.c, just above `rt_gfx_present`) allocates
`cprlist` = 10 bytes `{ Next, start, MaxCount }` plus a `start` array of `(colours + 1) * 4` bytes and
fills it with one `(COLORxx, value)` entry per colour. It must instead fill, in this order, one 4-byte
`(register, value)` entry per line of what the OS would program: BPLCON0, DDFSTRT, DDFSTOP, DIWSTRT,
DIWSTOP, then `BPL1PTH/PTL .. BPLnPTH/PTL` (one entry per plane, high word then low word - the copper
writes a 16-bit register at a time), then the `COLORxx` entries as now; `MaxCount` = the number of
entries. Sources: depth and planes from the ViewPort's `RasInfo->BitMap` (`bm_depth`, `bm_plane`),
the register values for BPLCON0/DDF/DIW from the ViewPort fields `slots.c` already derives them from
(`EMU_VP_*` in display.h; `--slots` prints what it computed, so it can be diffed entry for entry).
Verification, in this order: (1) replay `ref\inputs\flight-crash-hospital-room.txt` and read the live
`BPLxPT` words out of the `--state` records (custom[] words 0xE0.. as in `EMU_CUSTOM_BPL*`) - they must
name the room's planes at frames 2950/3000 instead of `000000`; (2) RAM must stay byte-identical to
the oracle at 2890/2910/2950/3000 (it is today, and this change must not move it); (3) `--slots` at a
fixed frame must print the same DDF/DIW/DMACON map as before, because `slots.c` parses that list;
(4) `tools\gate.ps1` 4/4; (5) the screens that work today must not change - compare the presented
picture at the same frames (intro ~200/1000, a room ~2000, the flight ~2890) before and after.

Session tooling added for this work, all on the host and the oracle: `--record <file>` (frame-indexed
input recording, replayable with `--input`), `--poke <frame>:<addr>=<val>[,...]` now applied by the
*runtime* at a frame boundary (so it reaches code running inside one translated function),
`--call <pc>:<frame>:<arg>[:<retpc>]` / `--callat <pc>:<insns>:<arg>[:<atpc>[:<retpc>]]` (a real
return address instead of the program-end sentinel), `--slot <n>` on the oracle, and `set SR` in both
fixture and `rrun` script registers. `/ref/` is gitignored, so the recording lives on disk only.

**Tried and reverted**: resolving the presented planes from the installed list instead of the
ViewPort (`rt_gfx_present`). It leaves the room case untouched (that list has no `BPLxPT`) and changes
the flight's own picture (61,355 of 192,054 bytes at frame 2890), so it was backed out - the list has
to be *made* correct in `MrgCop` first, and only then can the presenter prefer it.
*(2026-11-13: `MrgCop` now writes BPLCON0/DDF/DIW and the plane pointers, and the presenter does take
the list's planes for a single-region list - measured on the flight as one changed pixel, see the
hospital section at the top of this file.)*

## The hospital escape minigame runs translated (2026-11-12, later session)
"Escape Hospital" is menu entry 6 of `FUN_0000247a` (action char `'}'`); `FUN_00002cc8` case 6 jumps
through vector slot 70 into `FUN_0001819a`, which loads `Hospital.tiny`, opens `Desert3:HOSP`, loads
`tiles.dat` and runs the scene, the setup and the per-frame loop (`FUN_00018368`, `FUN_00018832`,
`FUN_00019006`, `FUN_000189aa`, `FUN_00019e9c`, ...). It is now **translated end to end** - the
interpreter is not reached anywhere in it - and machine-state identical to the oracle.

Four divergences had to be closed to get there; each is a decoder or table bug, not a scene bug.
A fifth was found while closing them and concerns the same instruction family.

* **Compiler switch tables were not followed.** The idiom is `cmp #N,Dn / bcc out / asl.w #1,Dn /
  move.w (d8,PC,Dn.w),Dn / jmp (d8,PC,Dn.w)`, the table holding signed 16-bit offsets from the `jmp`
  extension-word address. The translator decoded the `jmp` as a constant and refused 18 functions at
  "line f" - among them `FUN_00002cc8` (the menu dispatcher itself), `FUN_000189aa`, `FUN_00019006`
  and `FUN_0001a03e`. `Emitter.DecodeFlow` now keeps the instructions of the current path and
  `SwitchTargets()` reads the table, so the targets are emitted as blocks. The bound compare is
  `0xB0BC` = `cmp.l #imm,Dn` (`Opk.Cmp` with an immediate source), **not** `CMPI` - accepting only
  `CmpI` is what made the first attempt fail on `FUN_000135da` at `0x13AD2`.
* **opmode 4 of the ADD/SUB group is not automatically ADDX/SUBX.** `add.b D0,(0xe,A0)` at `0x13AD0`
  was decoded as ADDX and the byte add never happened. ADDX/SUBX require bits 5-4 = 00; otherwise
  opmode 4 is ADD/SUB.B Dn,<ea>. Fixed in `Recomp/Decoder.cs` and in `Cpu68k.cs` (they must agree).
* **The same bug in the AND and OR groups killed the sprite mask.** `Sms_Load`'s mask builder
  `FUN_0001AAAC` runs `and.b D0,(A0)` at `0x1AB60` and `or.b D0,(A0)` at `0x1AB84`; both decoded as
  ABCD/SBCD, so the 32-byte mask/plane buffer was never written and every consumer of it got no
  mask at all. ABCD/SBCD need bits 5-4 = 00; opmode 4 is AND.B/OR.B Dn,<ea>,
  opmode 5 is the word form. Both front ends fixed.
* **ADDX/SUBX share all three opmodes, not just the byte one.** `0xD145` at `0xfbc0` is
  `addx.w D5,D0` and `0xD381` at `0x21240` is `addx.l D1,D1`; both were decoded as plain ADD/SUB,
  which drops the extend bit and - for `0xD145` - the destination register. The disambiguation
  (bits 5-4 clear) applies to opmode 4/5/6, and the extend form's size comes from bits 7-6.
* **`fn_table` ownership used the model's `size`.** `re/model/functions.csv` sums instruction bytes
  and so excludes embedded switch data; a call landing past `size` found no owner (the gate's fixture
  `0x7dca` failed on the computed-jump target `0x1F35E`). `RecompCommand.Span()` now takes the entry
  to the last instruction's end, block discovery skips targets inside an already emitted span and
  emits the ones no function covers.

Hand-checked regressions for the opmode-4 shapes are in `tools\harness-check.ps1`
(`0x1AB60`, `0x1AB84`, `0x13AD0`, `0x4870`) and for the extend forms too (`0xFBC0` = `addx.w`,
`0x21240` = `addx.l`, both with X set through the harness's new `set SR`); the harness is 19/19 and
`tools\gate.ps1` 4/4 (746 of
750 functions emitted; what is still refused is the four line-F startup/supervisor stubs and block
`0x1c1e`, unchanged and unrelated).

**Parity, measured.** Inject the scene at a frame - host `--call 0x1C19A:200` (raw address), read its
"calling ... (N insns, was at pc P)" line, then give the oracle `--callat 0x1C19A:N:0:P` - both with
`--input` and `--state`:

| run | stop | RAM | frame records |
|---|---|---|---|
| no input | both `0x1e000` after 12M insns | identical at 350 / 400 / 900 | PC, SR, A0-A7, custom chips identical for all 1237 |
| with input (`out\tap.txt`, 142 entries) | both `0x1e31a` after 12M insns | identical at 700 / 900 / 1100 | identical for all 1221 |

The remaining whole-RAM hash differences are dead stack scratch: at frames 44 / 128 / 300 / 1168 /
1215 they are 1..16 bytes inside `0x17Fxxx` - 4 of the 5 below the stack pointer, e.g. `0x17FDE7`
(host `00`, oracle `36`) - and the very same byte differs on a plain boot run with no injection. At
frame 300 the 5 bytes at `0x17FEF4..0x17FEF9` do sit above SP, but they are a pushed-and-popped
temporary: SP, PC, SR and every address register are identical there and the bytes from `0x17FEFA` on
match again, so nothing live is involved.

Open, pre-existing, not touched: D0 is `-1` where the oracle has `1` at frames 32..45 (PC inside
`fn_0001d4fa`, 5 of the 1237 records of the no-input run), and identically so on a plain boot run with
no injection and before any hospital code runs. It is stale - a later instruction overwrites it, and
control flow, RAM and output are unaffected - but it is still a difference and the first place to look
if that area is ever reviewed.

## The bus arbiter: stages 0 and 4 (2026-11-12, later session)
`cpuStretch` is gone. The machine now has a real slot map and every consumer walks it.

**What exists**

* `src\runtime\amiga\slots.c` + `slots.h` - a 227-entry ownership map per line, built from the View
  (ViewPort DWidth/DHeight/Modes and the BitMap's depth - the numbers graphics.library would program
  into BPLCON0/DDFSTRT/STOP/DIWSTRT/STOP), from DMACON's audio channels, and from SPRxCTL. Strobe and
  three refresh slots sit at colour clocks 3/5/7/9, then disk, audio, sprites, then the bitplane
  fetch pattern of UAE's `cycle_diagram_table` (`custom.cpp`, `create_cycle_diagram_table`) through a
  20-word DDF window. `--slots-check` diffs that pattern against the table for 1..8 planes lores and
  1..4 hires (12 patterns, computed independently of the code under test); `--slots` prints the
  register snapshot, the map, the per-line and per-frame DMA totals; `--slotsat <frame>` dumps it at
  a frame boundary. The intro measures: 5 planes, DDF $38..$D0, 108 DMA clocks on a display line and
  4 on a blank one = **22,052 of 70,937 clocks per frame**, 3 of every 8 clocks free inside the
  fetch window.
* `src\runtime\amiga\bus_cycles.c` - bus words per opcode, **measured**, not guessed:
  `icftd-oracle.exe <image> --bustable out\bus.txt` counts every word the core reads or writes per
  opcode (fetch, extension words, operand reads and writes, 32-bit accesses as two words) and
  `tools\gen-buscycles.ps1` bakes it in. 1,190 opcode words occur in the original's own run, mean
  **2.22 words per instruction**; 15 have a data-dependent count (Bcc/DBcc transfer their extension
  word only when taken - the table holds the run's mean; MOVEM is charged exactly from its register
  mask at run time, so its 6..34 words are never averaged). The generator validates ten hand-derived
  HRM cases (NOP 1, RTS 3, MOVE.W (d16,A5),D0 3, CMPI.W #imm,(d16,A4) 4, LINK 4, UNLK 3,
  JSR (d16,A4) 4, ...) and refuses to write the file if one fails.
* `rt_bus_charge()` (CPU) and `rt_blit_charge()` (blitter) walk the map from the frame's own cursor:
  the CPU pays 2 colour clocks per memory word (address and data, HRM), the blitter one clock per
  enabled channel per output word (UAE `blit_cyclecount`), and every DMA-owned clock in front of a
  needed one is a wait state. Internal cycles run at the 68000's own rate. So CPU and blitter share
  one bus, which is the part the old frame-wide `dmaSteal`/`cpuStretch` aggregate could not express.
* Proof: `tools\gate.ps1` **4/4**, and oracle vs translated RAM at frame 400 is **byte-identical**
  (0 differing bytes of 2 MB) - the arbiter is applied identically by both front ends.
* `--framelog <file>` writes one `key=value` line per frame from *both* front ends: the colours out
  of the copper list MrgCop built, DMACON, BPLCON0, DDF, the four audio channels and the engine's
  own MovE step counter. Host and interpreter agree on **1404 of 1404 lines**, so it doubles as a
  cadence check that RAM-at-one-frame cannot give: the first line they disagree on is where a
  timing difference starts.

**What it changed, and what it did not**

| measure (intro, desert phase) | before | after |
|---|---|---|
| blitter charge, frame 1000 (cumulative) | 43.5M cycles | 64.9M (1.49x: the display now steals from the blitter too) |
| instructions/frame | 4,015 | 4,104 |
| engine MovE steps/frame (`--framelog`'s `step`, DAT 0x3010C) | - | 0.67/frame in the logo phase (59 at frame 201, 192 at frame 401) |
| "IT CAME FROM THE DESERT" fully drawn | frame 1400 = 28.0 s | frame 1400 = **28.0 s** |
| screen black / Load Screen | 1600 / ~1650 | **1600 / ~1650** |

So the arbiter is *more faithful* (it reproduces UAE's blitter_slowdown and the CPU's wait states per
access instead of one global factor) but it does **not** move the content timeline: the extra
blitter contention is offset because the old 1.92 flat stretch overcharged internal cycles.

**The WinUAE reference instrument is dead: do not put a Lua script in the emulator again**

Every reference run that loaded `tools\winuae-steplog.lua` came back with a *glitched picture* -
random colours at boot, half an intro, a black screen - and that includes the light version that
only read six registers per frame. The cause is where WinUAE runs the handler: `custom.cpp` calls
`uae_lua_run_handler("on_uae_vsync")` from inside `vsync_handler_post()`, between `DISK_vsync()` and
the frame-pacing/display code, i.e. *in the middle of the machine's own frame logic*. Anything that
takes time there (a `uae_read_u16`, an `io.flush()`) pushes the following frame out of its slot; the
Lua memory path also goes through `get_mem_bank()`, the same bank table the CPU/copper fetchers use.

Consequences, i.e. what to un-believe:

* "The original spends ~28 s loading" and "`DAT_0002C10C` reads 0" were measured in those runs. Both
  are void. Nothing about the original's timeline from a Lua-instrumented run is evidence.
* The step counter column of the reference is not available at all: WinUAE's Lua bridge reaches
  memory through `debug_read_memory_16`, and the colour registers are write-only, so `$DFF180` reads
  back `FFFF`. That is why the old trace was full of `FFFF`.
* What *is* trustworthy is the A/B the user ran by hand on the same configuration: with Chipset ->
  Cycle-exact (Full) **on**, the intro is several seconds longer and the fanfare plays; with it
  **off**, the logo is several seconds early and the fanfare is cut off. Our build behaves like
  "off". That is the target, and it is a *differential* - no wall clock, no floppy-loading confound.
* `tools\icftd-reference.uae` is the same machine with **no** script, for a clean run of the game.

**Where the frame time goes, and the one divergence it named (2026-11-12)**

`--ticklog` gives the accounting per vblank (`blitcyc` is cumulative, `budget` is what was left):

| frame | instructions | blitter cycles | budget at tick |
|---|---|---|---|
| 400 | 2,948 | 107,048 | ~0 (debt) |
| 800 | 4,024 | 86,402 | ~0 |
| 1200 | 2,563 | 121,100 | ~0 |

Blitter plus CPU fills the 141,875-cycle frame exactly, so the intro is **work-bound**: it runs the
machine flat out and the step rate is whatever that work affords (0.5 frames/step early in the logo
animation, 3.7 later). A machine that is flat out gets *faster* only by doing less work or by having
its work under-charged - which is why "make it slower" cannot be done with a knob, and why nothing
in the CPU model can be the remaining 30 %.

Two candidates were checked against UAE's own source:

* **The blitter's clock per word - real, fixed.** UAE `blitter.cpp:1165` charges
  `blit_cyclecount = 4 - (shifter_skip_b + shifter_skip_y)` colour clocks per output word: four,
  minus the channels that need no fetch (B off, or not both C and D on - with the fill-mode
  exception at 1157). We charged the number of *enabled channels*, so a blit without B or without
  C+D was charged too little (an A-only blit is two clocks in the original, one here). Effect: the
  intro's blitter charge at frame 400 went 91,536 -> 107,048 cycles, and step 430 moved from frame
  1377 to 1402 (+1.8 %). Commit `939a260`.
* **Per-access CPU stalls - a no-op, not shipped.** `rt_bus_charge` already walks exactly the slot
  sequence the accesses would walk: 4 cycles per bus word plus every DMA-owned colour clock in
  front of it. Splitting that walk per access moves wait states *inside* one instruction and charges
  the identical total, so it cannot move a timeline. What would be a real change is charging the
  instruction *fetch* words at their own slots - but the translated build never fetches them (the
  code is compiled), so the per-opcode table has to stand in for them.

So the remaining gap is work per step. **Measured, cleanly, with no instrument in the emulator:**
the reference takes **39 s** from the logo appearing to the Load Screen appearing; our build takes
**30.2 s** (first colours at frame 165, the Load Screen's palette at frame 1674, 50 Hz). That is
**1.29x**, and it is a 31 % deficit spread over the whole intro, not a single stuck scene.

Our side of that interval, per step (`--ticklog`, steady state):

| frames | steps | frames/step | blitter cycles/step | CPU cycles/step |
|---|---|---|---|---|
| 200..400 | 133 | 1.5 | 105,406 | 107,939 |
| 400..700 | 75 | 4.0 | 378,852 | 188,648 |
| 700..1000 | 71 | 4.2 | 383,129 | 216,343 |
| 1000..1402 | 92 | 4.4 | 427,851 | 192,081 |

The engine's own step counter reaches 454 when the picture fades to black (frame 1548) and 477 at
the Load Screen (frame 1674). Two thirds of a step's time is the blitter, so the 1.29x is either the
blitter being charged ~30 % cheap (per word, or in the slots it is granted) or the engine issuing
more blits per step than we do. Deciding between those needs the blit sequence of one step, from
our `--blitlog` and from the original's code - not another timing change.

**The bus clock is now the model, and it made us faster - that is the finding (2026-11-12)**

Two pieces of the cycle-exact architecture are in, both derived from UAE's own source:

* **The blitter is a device** (`a76e042`): `BLTSIZE` starts it, it takes one colour clock per channel
  per output word out of the same slots the display and the CPU use, the data path runs when its
  last slot has gone by, `DMACONR` reports BBUSY, `graphics.WaitBlit` advances the clock to the end
  of the blit instead of returning instantly, a `BLTSIZE` written while one is pending waits it out,
  and an idle frame advances the clock so a blit finishes inside the idle time.
* **A memory word is one colour clock of bus** (`f5f4d29`): UAE charges a chip-bank word one
  `CYCLE_UNIT` and then one `do_cck()` per clock Agnus stole (`newcpu.cpp`
  `mem_access_delay_word_read` -> `wait_cpu_cycle_read`); the other two clocks of the memory cycle
  are the 68000's own address phase. We charged two clocks per word, so every access demanded two
  free slots instead of one.

What the measurements say, and they are the useful part:

| build | step 430 at frame |
|---|---|
| two clocks per word, blitter block-charged | 1402 |
| blitter as a device | 1402 (bit-identical - so the blitter charge is *not* the pace) |
| one clock per word (UAE's rule) | **1368** |

So the *faithful* rule made the intro **2.4 % shorter**, not longer. We are already charging at
least as much per unit of work as the original does, and are still 29 % fast. That eliminates the
whole space of timing-rule explanations: no per-access accounting can be the remaining difference.
Either the original does ~30 % more *work* for the same picture (library code our shims answer with
instant C - `exec.AllocMem` 453 times over the intro, `MakeVPort`/`MrgCop`, `DisownBlitter` 38
times), or its display is not the 5-plane lores / DDF $38..$D0 we assume and it takes more bus than
we model. The second is decidable from one WinUAE savestate (custom registers), the first from the
disassembly of the library routines concerned.

**All three cycle-exact flags are modelled now (2026-11-12)**

`cpu_cycle_exact` (instruction cost from Musashi's table, one colour clock of bus per word, plus the
waits the slot map charges), `blitter_cycle_exact` (a device taking slots as the clock passes) and
`copper_cycle_exact` (a device fetching one instruction word per second clock, applying MOVEs at
their beam positions, WAIT parking on the beam position). With the display DMA, refresh, audio,
sprite and disk slots the map already claimed, every bus master now takes its time out of the same
per-line map, and nothing is charged as a lump at the end of an instruction or a frame except the
CPU's own words.

What is deliberately *not* cycle-exact, and why:

* **CPU accesses are charged at the instruction boundary, not at the access.** Doing it at the
  access made the two front ends charge the accesses each of them happens to perform, which differ
  (1456 frames against 1407 for the same instruction count) - the host/interpreter timeline
  invariant, the only mechanical check this project has, stopped holding. The clocks are the same;
  only where a wait lands inside one instruction differs.
* **The renderer is still one chunky conversion per frame**, so a list that changes a display
  register mid-screen would not be honoured per line. The copper's register writes land in the
  register file at the right time; the picture is composed at the frame boundary.
* **Sprite and audio fetch devices** are still missing: their slots are claimed, but nothing advances
  a sprite pointer or a shift register from them, and audio's fetch is driven by the device clock
  (`rt_time_slice`) rather than by bus slots.

**Interrupt masking: attempted, and it cannot be done in a shimmed model (2026-11-12)**

The 68000 takes an interrupt only when its level is above the mask in SR bits 8-10. This machine
delivers handlers when they arrive. Counting what the rule would change (interpreter, live SR):
**CIA (level 6) is masked 1305 times** and **the vblank (level 3) at every frame boundary**.

So masking was implemented - pending levels, a pump at each instruction boundary that compares the
mask. It broke the machine outright, in *both* front ends, identically: 0 handler runs, 0 rasters
presented, a black screen and a spin at 0x24930. The reason is the engine's design: its own code runs
at SR 0x2700 (mask 7) and it never lowers the mask itself, because on the machine its vblank server
is taken *inside the exec library* - WaitTOF, DoIO, the task switcher - which is exactly the code this
runtime replaces with shims. With no real library code there is nothing to unmask, so every level
stays pending for ever.

Delivery therefore stays on arrival (at the next instruction boundary, which is where a 68000 would
take it), which is the correct stand-in while the library calls are shims. Masking becomes possible
the day those routines are executed rather than shimmed - not before.

**Next, in this order**

1. **Find what the intro does per step, in the code.** The bus model is now hardware-derived and the
   content pacing did not move, so the remaining gap is *work* as much as clock: check what the
   original does per step - `DrawNode`/`LoadPicture`, the mask builder `FUN_0001E504`, the
   compositor `FUN_0001E8C8` - against what we do, and check whether a shim short-circuits work the
   engine performs through the blitter with waits.
2. Re-measure with `--framelog` (host vs interpreter, and our own before/after), not with WinUAE.
3. Re-baseline the four markers with RAM dumps at equal content positions (the 400-frame fingerprint
   stays retired) and decide level 1 vs level 2 from the evidence.

## The MS-DOS target (2026-11-11, later session) — it runs; performance is the open work

Step 1 as agreed: **no audio**, VGA, `icftd.ini` without a fullscreen entry, save slots as
directories with the engine's `ICFTD` file.

What exists: `tools\build-dos.ps1` (`bin\dos\ICFTD.EXE`, Watcom + the DOS/32A extender that Open
Watcom already ships), `tools\dos-pack.ps1` (a runnable release in `bin\dos\game`), `tools\dos-run.ps1`
(DOSBox), `src\runtime\plat\dos\plat_dos.c`, `src\host\dos_main.c`. Details and the DOSBox facts:
repo memory `icftd-dos.md`.

**Two divergences were found by machine state, both closed** (see the memory file for the full text):
`oracle_boot()` installs the dev tool's own `on_cia` hook, so a front end must set its hook *after*
it - otherwise a CIA timer expiry inside translated code runs the music driver on a stale register
file and the machine leaves the image; and the engine's font is `fonts\newnem.font`, which FAT cannot
hold, so the release ships 8.3 names plus `NAMES.TXT` and the platform retries a failed open through
it (without it `OpenDiskFont` returns 0 and the engine takes the no-font path). After both: DOS and
Windows RAM are byte-identical at the same vblank, the tick logs match, and the call census shows
41 kinds / 2014 calls / **0 answered with 0**.

### Performance — as a percentage of the original (hand-off after `20f9098`)

The reference is the original's own frame. Measured with the oracle, the engine consumes its whole
141,875-cycle vblank budget every frame (3,449 of 3,926 frames run out of budget, average overspend
322 cycles = 0.2 %), so one engine frame is 20 ms on a 7.09 MHz A500 and 100 % means "our build
finishes a frame in the time the original did, on the same class of machine". The owner's memory of
"~20 fps on the original" does not move the ratio: our build runs the same engine at the same pacing.

**DOSBox `cycles` is instructions per millisecond, not MHz** - 66000 ~ a 486DX2-66, 100000 ~ a
DX4-100 (both at IPC ~0.5; lore tables that call 3000-5000 a DX2-66 are off by an order of
magnitude). Measured by wall clock, differencing a 60-frame and a 260/360-frame run so the
~35M-cycle startup drops out:

| target | wall time per frame | % of the original |
|---|---|---|
| 66 000 (486DX2-66) | 79.5 ms | **63 %** |
| 100 000 (486DX4-100) | 57.0 ms | **88 %** |
| 200 000 | 29.7 ms | 169 % |

**Validate the throttle before believing any of these**: 100000 vs 200000 halves the frame time, so
the emulated clock is the limiter and the figure is a machine-model figure. Need **1.6x** for 100 %
on a DX2-66, **1.14x** on a DX4-100.

**Two dead ends, recorded so nobody re-walks them.** The old "cycles/frame" figure (fix
`cycles=3000`, difference an 11-frame and a 1-frame run) reported the *same* 3,570,000 for the
per-pixel and the nibble-table conversion - two builds that differ by 4.7x in real work - and the
same number for `core=normal` and `core=dynamic`. It measures DOSBox's pacing, not our code. And
`--perf` is only valid at `cycles=max`: `plat_pit_now()`/`plat_ticks_ms()` extend a 16-bit 8254
snapshot, so any interval over 55 ms (a whole frame at a fixed clock) is truncated. A per-frame
split needs the interval subdivided - build that profiler before trusting any fine-grained claim.

Landed in `20f9098` (all verified): nibble-table planar->chunky, 4.7x cheaper in that loop and
byte-identical on five screens (it still runs 1.49 times per frame: `LoadView` converts, then
`rt_frame_present` converts the same view again); the PC ring off in the DOS build
(`-dEMU_TRACE_RING=0`); `rt_trace` behind a `traceTo` test; `rt_cia_service` only when an interrupt
is pending; `rt_time_slice()` instead of a per-instruction `rt_time_run`; a RAM fast path in
`rc_rd*/rc_wr*`; `rc_d_get/set`, `rc_a_get/set`, `rc_trunc`, `rc_ext` static in `cpu.h`; the crash
journal behind `--crashlog`. Proof: `tools\gate.ps1` 4/4 **and** an exact fingerprint - 400 frames,
596 rasters, 2,418,803 emulated instructions, unchanged from before.

What those two items bought: 66 MHz 84 -> 79.5 ms (5 %), host work at `cycles=max` 2.6 -> 1.9 ms
(1.35x). So the per-instruction *calls* were not the bulk; the emitted code's own straight-line work
is. Work volume today: **6,062 emulated 68k instructions/frame** (274 in the CIA/music handler) and
~5.5M x86 instruction-equivalents per frame at the model clock - ~900 per emulated instruction,
because the 68000 register file lives in memory inside `cpu_t`. 595 vblank-server instructions per
frame also still run on Musashi.

Order for the next session - the **emitter** step, measured after each slice at `cycles=66000`
(intro, frames 60 vs 260), acting only on a number that moved:

**Measured first (2026-11-11, same session, one build per row):**

| build | ms/frame |
|---|---|
| reference | **79.5** |
| 1. block cycle accounting, as specified | 82.5 |
| ... the same build with the per-instruction model forced | 80.5 |
| reference with the planar->chunky loop switched off (measurement only) | **48.0** |
| blitter pixel loop switched off (measurement only) | 57.0 |
| after the conversion group loop (`d2ab556`) | 66.0 |
| after the inlined blitter accessors + one conversion per changed picture | **58.0** |
| after the short-form blitter ALU + direct-to-VGA presenter | **57.0** |

- **Step 1 was implemented, measured and reverted.** A block charge cannot cover the device clock:
  batching Paula/CIA to the block boundary takes the interrupt at a different instruction, which
  moves the machine (400 frames: 591 rasters / 2,535,644 instructions instead of 596 / 2,418,803).
  Servicing the pending interrupt before or after the charge makes no difference, both are wrong.
  What is provably identical (no E-clock tick inside the block, `m->eAcc += cost`) is worth
  nothing: the guard and the per-block call make the build 2 ms **slower** than the same code with
  the per-instruction path forced and 3 ms slower than the reference, while the generated tree grows
  2.62 -> 2.95 MB. Do not re-walk it.
- **The frame is not spent in translated code.** It costs ~773 host instructions per emulated
  instruction in total (5.25 M / 6794), of which the per-instruction bookkeeping is ~45. That makes
  step 2 (register file in locals) a small lever, not the 1.6x.
- **The frame is spent converting the screen: 31.5 ms of 79.5 (40 %)**, at 1.55 passes/frame
  (`LoadView` presents *and* the vblank presents). The A/B with the loop switched off is the number
  to trust - `--perf`'s PIT figure said 29 % - and the experiment is clean: that build's 260-frame
  run printed the same 397 rasters / 1,871,324 instructions as the reference.

Revised order, highest measured item first:
1. **The conversion** (40 % of the frame; attributed by switching the loop off, 79.5 -> 48.0).
   Landed in two steps: the eight-pixel group loop lost its per-plane null tests (a missing plane
   reads a zero row) and writes two dword stores instead of eight bytes (**79.5 -> 66.0 ms**); then
   the conversion itself is skipped when the plane bytes and the geometry are unchanged since the
   last present of that view (**66.0 -> 58.0 ms**) - an exact test, because the chunky picture is a
   pure function of them, and it does not care who wrote the bytes (blitter, shim or translated
   code). Anything that draws into the chunky buffer itself (graphics primitives on the pseudo
   bitmap, the OSD) invalidates the comparison. `--perf` at `cycles=max`: conversion 6.1 -> 1.8 ms.
   (The `--perf` line "conversion runs N time(s)/frame" is frames/raster, not conversion passes -
   it never measured the pass count.)
2. **The blitter** (9.0 ms; attributed by switching its pixel loop off, 66.0 -> 57.0). Three measured
   attempts: the per-word accessors had been `rt_read16`/`rt_write16` - a call, a mask and a range
   check per word per channel - and are now inline with the same bounds rule (**66.0 -> 65.0 ms**); a
   generic "expand the minterm into a term array once per row" was **3.5 ms slower** - the array
   traffic cost more than the predictable bit tests it saved - and is not in the tree; naming the
   short forms of the frequent minterms (`0x0FCA`, the engine's ordinary blit, is "D = A ? B : C")
   and skipping the shift register when ASH/BSH are 0 is worth ~0.5 ms. All three are
   byte-identical: the 16 MB RAM dump at frame 200 has the same SHA256 before and after.
3. **Present straight into VGA memory**: mode 13h is linear 320x200x256, so the DOS framebuffer *is*
   the screen - the staging buffer and its 64 KB copy per present are gone (~0.5 ms, 64 KB less BSS).
4. Then the vblank: 595 instructions/frame still run on Musashi (the interrupt servers), which is
   most of what the vblank costs now, plus the emitter slices as originally planned (the 68k
   register file in locals).

Original plan, kept for the record:
1. Cycle accounting per basic block (measured above: no).
2. **The 68k register file in locals for the block** (`D0..D7/A0..A7/SR` as C locals, written back at
   block end, at library calls and anywhere the frame hook can observe).
3. vblank/CIA handlers through the translated dispatcher, one conversion pass per frame, present
   straight into VGA memory.

**The wall clock is host-load sensitive.** At a fixed `cycles` the emulator has to keep up with the
emulated clock, so a loaded host inflates every figure. Before trusting a delta under ~2 ms, check
that a `cycles=max --perf` run still reads ~20 ms/frame (it was 20.1 before the conversion work and
~20 since), and prefer back-to-back A/B inside one time window.

Gates for every step: `tools\gate.ps1` 4/4; the 400-frame fingerprint must still read
`596 raster(s), 2418803 instruction(s)`; emitter changes require regenerating `src\recomp\fn_*.c`
(the 0x9AE0 IFF-skipper seed moved into `step_budget()`, so regeneration is safe), header-only
changes just need a rebuild. On a 486 with 8 KB L1 the 2.7 MB of emitted code is part of the cost:
a change that shrinks instructions but grows code is not automatically a win.

### Display: the DAC shadow must start "unknown" after a mode set (`plat_dos.c`)

A mode set does not leave the DAC black: mode 13h loads the BIOS 256-colour palette, where entry 7
is `A8A8A8` grey and 1..6 are blue/green/red/magenta/brown/cyan. `plat_init()` used to declare the
shadow black, so `plat_set_palette()` skipped every entry the game asked for as **black** and the
picture kept the BIOS colour - the logo animation's background box stayed grey while the Windows
build (no DAC, correct palette) was right. Measured by reading the DAC back through 0x3C7/0x3C9 on
the third present: before the fix `asked 000000 dac A8A8A8` (entry 7), after it `000000/000000` for
0..9. The shadow now starts `0xFF`, and "does the DAC already hold this colour?" is answered by the
shadow alone (the second, redundant `g_pal` copy is gone, and with it the reason a stale entry could
never be corrected).


## Where the last session left off (2026-11-11)

Done and verified in this session, in order:

1. **Palette:** `cprlist` `MaxCount` is a *count of entries*, not of register/longword pairs
   (`rt_gfx_mrg_cop` wrote `colours`, `rt_gfx_present` read pairs). Half the window was never
   loaded, so CLR14..31 stayed blank. Both sides fixed; the user confirmed the colours.
2. **Time is cycles, not instructions** (`docs/recomp-architecture.md`, "Time — cycles, not
   instructions"): `EMU_CYCLES_PER_FRAME 141875`, per-opcode cost baked into every generated
   `rc_step()` from Musashi's own table (`tools\gen-cycles.ps1` -> `Recomp\CycleTable.cs`), the
   blitter charging its DMA slots (`words*rows*channels*2`), `play.cmd --speed 30` deleted. Measured
   50.0 frame/s in the playable build, capability 285 f/s; MovE steps 160k/513k cycles against the
   A500 reference 146k/543k.
3. **Oracle cadence:** `m68k_execute(1)` now drains `RESET_CYCLES`, so oracle and translation agree
   exactly on insns + leftover budget at every vblank (previously one phantom step).
4. **Flight crash (divu)** after regenerating `src\recomp\fn_*.c`: the hand-edited IFF-skipper seed in
   `fn_00009ae0.c` was wiped and `ants`' 8SVHDR was parsed before it existed. The seed now lives in
   `step_budget()` (`src\recomp\cpu.c`), where regeneration cannot reach it. **Regenerating `fn_*.c`
   deletes hand edits - there is no `src\recomp\patches` yet, so keep every fix at a seam.**
5. **Garbled player/plane sprites - root cause found and closed:** the blitter's `BLTxPT` are *word*
   pointers. `FUN_00011208` fetches `w+2` bytes/row (extra word for the shift register,
   `BLTALWM = 0`) and writes `BLTAMOD = BLTBMOD = -1`, i.e. `w+1` read as bytes; with bit 0 dropped
   it is exactly `w`. `blitter.c row_advance()` now clears bit 0 for all channels and the write-back,
   and the pointer registers mask bit 0 on write. Proof in `docs/next-session.md` ("word pointer"),
   nothing flag-gated: `--byteptr` exists only to reproduce the old wrong model.
6. **RULE 0** written down (`.github/copilot-instructions.md`, README, `docs/recomp-architecture.md`,
   repo memory) after it became clear that a flag-gated "correction" plus a lost hand edit had
   let a fixed bug come back.7. **Phase 4 - the rest of the clock** (2026-11-11): `dos.Delay(n)` is a real `n`-frame wait
   (`m->waitFrames`, consumed before the next instruction; measured 108 -> 115 for `Delay(7)` and
   unchanged for `Delay(0)`), `$DFF004`/`$DFF006` and the CIA-A/B TOD counters are derived from the
   frame budget instead of reading as constant zero, and `plat_frame_sync` counts the 20.000 ms
   period on `QueryPerformanceCounter` (198 frames in a 4 s windowed run) instead of the 15.6 ms
   `GetTickCount`. Details in `docs\recomp-architecture.md`, "Time - cycles, not instructions".
State after this session: `tools\gate.ps1` **4/4**, `out\tilecheck.ps1` 2 mismatched cells
(baseline), oracle vs translated `--state`/`--ram` identical at frame 100, 50.0 frame/s.

Known open items:

- `tools\state-diff.ps1` reports **frame 30 with D0 only**; RAM is byte-identical at frames 100-500.
  Since the beam/TOD registers became clock-derived the low words agree (both 0x7FFE) and only the
  high word differs (oracle 0xFFFF7FFE, translation 0x00007FFE), i.e. a stale upper half in one of
  the two register files at that boundary - narrowing, still unexplained, still non-blocking.
- **Phase 4 is done** - what remains of it: `dos.Delay` is not called by any scripted run yet (0
  calls in 30M instructions to frame 12,198), so its shim is verified only by the deliberate call;
  the CIA-A/B *timers* (`$BFE401`..`$BFEE01`, armed by the audio driver) are still not modelled;
  and `plat_ticks_ms` still reads `GetTickCount`, which nothing time-critical uses.
- The DOS build stays a first-class target: no runtime cycle table, costs are baked into the
  generated C.

## Where the project stood before (2026-11-10, Phase B session 1)

| directory | role | ships? |
|---|---|---|
| `src\runtime\` | `amiga\{memory,machine,blitter,display}.c`, `types.h`, `platform.h`, `plat\win32\`. No `m68k` reference anywhere. | **yes** |
| `src\oracle\` | `main.c` (tool) + `cpu.c` (Musashi hooks, step/run loop, 50 Hz tick, LVO trap) + `state.c` + `input.c` | no, dev tool |
| `src\assetExport\` | formats, the 68000 interpreter + `rcmp`/`rleaf`/`rrun`, **and the translator** (`Recomp\`) | no, a tool |
| `src\recomp\` | `cpu.h`/`cpu.c`, `hooks.c`, generated `fn_table.c` + `fn_<addr>.c`, `check.c` (fixture replay) | **yes** |

```
powershell -ExecutionPolicy Bypass -File tools\gate.ps1     # 4 steps
```

1. exporter build, 2. oracle build, 3. interpreter fixtures, 4. **translated vs interpreted**.

**Step 4 is GREEN**: 235 of 244 fixtures verify, 9 are skipped (4 the interpreter cannot finish -
busy-waits; 3 stop at the same unmodelled OS call on both sides but at a different pc, because the
interpreter steps into the library thunk before giving up; 1 interpreter ran into data; 1 more) and
0 differ. All four steps are green.

## The load address: 0x4000, decided by measurement

The translated code is written for base 0 (that is what Ghidra models and what the fixtures replay),
but the game must run at **0x4000**, the layout the original binary was linked for and the one the
oracle has been validated in. Measured on the same machine, same image bytes (the two files are one
hunk relocated by 0x4000):

| run | frame-boundary registers | 30M instructions |
|---|---|---|
| oracle, base 0x4000 | baseline | frame 5823, 5752 rasters, 21 out-of-range accesses |
| oracle, base 0 | **identical for 307 frames**, then diverges (first RAM difference at `0004008c`: heap block size 0x18 vs 0x60) | derails at 6.2M: `PC left the image at 02d598`, 34,684 out-of-range accesses |

At base 0 the AbsExecBase write at address 4 lands inside the image's own entry stub, and the frame
sentinels (`EMU_EXIT_PC` 0x200, `EMU_INT_RET` 0x204) land inside the image too. Whatever the
mechanism, base 0 is not the program's layout, so the product does not use it.

The translation is therefore load-address parametric instead of duplicated: every address in the
generated code is written `RC_ADDR(<image offset>)`, and `RC_BASE` in `src\recomp\cpu.h` is the only
difference between the two builds.

```
tools\build-recomp.ps1                     # RC_BASE 0 -> recomp-check.exe, the fixture replay
tools\build-recomp.ps1 -Base 0x4000 -Exe icftd-recomp.exe -ObjDir recomp-obj4k
```

`RC_BASE` defaults to 0, so the differential (`tools\recomp-fixtures.ps1`, 235/9/0) still builds and
runs exactly as before, while the whole set compiles and links at 0x4000 as well. Addresses and
immediates are told apart in `Emitter.cs`: `Imm()` is data, `ImmA()` is an address, and the table in
`fn_table.c` uses `RC_ADDR` too because `rc_lookup` compares against `c->pc`, a real address.


## What this session built

### 1. The state harness (acceptance = machine state, never images)

`--state <prefix> [--every n] [--ram <frame>[,<frame>]]` writes `<prefix>.state`: "ICST" v1, a
16-byte header and one 344-byte little-endian record per frame boundary — frame, insns, D0-D7,
A0-A7, SR, PC, FNV-1a-64 of the whole RAM image, `custom[128]`. `--ram` additionally writes the full
RAM image at the named frames (`<prefix>.<frame>.ram`); that is the only place where a difference can
be narrowed from "this frame" to "these bytes", so it is asked for explicitly.

`--input <script>` is a frame-indexed input timeline, `<frame> <fire> <joy0> [<joy1>]` (the joy words
are the raw active-low JOY0DAT/JOY1DAT values). A line takes effect at its frame and holds.

`tools\state-diff.ps1 -A <prefix> -B <prefix> [-Blobs]` prints the first divergent frame with the
fields that differ and — when both sides have a RAM blob for that frame — the differing byte ranges,
plus a note when a blob no longer hashes to its own record.

**Measured** (`bin\win32\icftd-oracle.exe export\code\dshell4k\dshell.img 0x4000 70000000`, 944
frames):

| case | result |
|---|---|
| same script twice | byte-identical dumps (SHA256 equal) |
| fire pressed at frame 500 vs no press | first divergence **501**, 7 bytes in 5 ranges (`028a85`, `17ff1e`, …) |
| the same press at frame 501 | first divergence **502** — one input frame moves it exactly one frame |
| one byte flipped in a RAM blob | pinpointed as `05a123 1 byte(s) 00 vs ff`, and the blob is flagged as modified |

Sampling happens at the end of the tick, so an input change at frame N is first *visible* at frame
N+1. That is a property of the machine, not of the harness, and it is the same for both runs.

### 2. The translator (`recomp`, `src\assetExport\Recomp\`)

`ICFTD.AmigaExport.exe recomp --report out\recomp-report.txt` translates the whole image:

```
recomp: 750 function(s), 121362 byte(s) of code
  emitted        726 function(s), 102920 byte(s), 29949 instruction(s)
  blocks          21 block(s) outside the model, 1974 byte(s), 545 instruction(s)
  not emitted     24 function(s)
```

- **Input**: `export\code\dshell\dshell.img` (base 0 — the image `rcmp` runs), function boundaries
  and instruction counts from `re\model\functions.csv`.
- **Decoding** mirrors the interpreter's group dispatch and effective-address table exactly
  (`Recomp\Decoder.cs`). A function is emitted only when the instruction lengths add up to Ghidra's
  size **and** the count matches the model's `insns`: that is what proves the decode complete. A body
  that falls off the end becomes a tail call into the next address, which is what the machine does.
  A straight walk is tried first; when it disagrees with the model it is retried **following control
  flow**, which skips the bytes a branch jumps over (opcode tables, hand-written data) - that is what
  emitted `000208e8` and `00006df2`, whose bodies contain data a linear walk decoded as code.
- **The machine is a trampoline**: a translated function never calls another one; it sets `c->pc` and
  returns, and `rc_call` is the instruction stream (dispatch on `c->pc`, run one function, repeat).
  Every instruction address is a `case` in the function's `switch (c->pc)`, so a `jsr`/`jmp` that
  lands *inside* a function - the engine's own opcode and command tables do exactly that - enters it
  at the matching label. Call depth is a counter (`rc_depth`), not a C frame, so an `rts` into the
  middle of a function works and recursion costs nothing.
- **Blocks**: a target outside every modelled function (a shared epilogue such as `0001f2ca`) is
  decoded as its own unit and enters the same table, so the dispatch resolves it instead of falling
  into the interpreter. 21 of them, found by following the constant targets of emitted code.
- **Output** (one file per function, deterministic): one C statement per 68000 instruction, the
  original's control flow as `L_<HEX>` labels, every instruction address in a comment and in
  `c->pc`, temps `t0` value / `t1` current / `t2` result / `t3` address / `t4` ea-scratch.
- **Seams**: `jsr <const>` and any branch out of the function push the return address, set `c->pc`
  and return; `jsr (d16,A4)` → the engine's vector slot, resolved *at emit time* (the displacement
  must divide into the 160-entry table, which also proves A4 is still 0x29A56); a slot landing on a
  library wrapper → `rc_os_call(c, m, lib, lvo)`; `jsr/jmp (d16,A6)` → `rc_os_call_a6`, where the
  runtime resolves the library from A6 (`rt_lib_index`). `(d8,PC,Xn)` transfers are computed at run
  time - dropping the index register sent `0001f89c`'s opcode dispatch to a fixed address.

### 3. The proof: `tools\recomp-fixtures.ps1`

For every translated function that has a pinned fixture, `rcmp` (interpreter) and `recomp-check` (the
same fixture through the C) print the same canonical dump — registers, SR, PC and every touched
memory byte — and the two are compared line by line. `-Rand n` replays seeded random variants of the
fixture's own memory fields; `-Only '0001*'` narrows the address range while a construct is being
added; the gate always runs the whole set.

`recomp-check` loads **the same load image** the interpreter loads and *then* applies the fixture, so
both sides start from the identical machine. The fixture's vector-slot stubs are resolved to
`(lib, lvo)` by the writer (`Harness.WriteRawFixture`) and matched on the LVO, which is the
interpreter's own rule.

**Measured: 235 verified, 9 skipped, 0 failed of 244 fixtures** (~46 s). Six bugs the differential
caught, five of them invisible in the generated text:

* `link.w`'s frame size was emitted as a no-op statement (`c->a[7] - 0xcu;`).
* The C replay did not load the image, so vector slots and the engine's pointer tables read as zeros.
* **No `jsr`/`bsr` pushed its return address** - every call frame sat 4 bytes high and the callee's
  `rts` popped the caller's own return address. 40 failures down to 8.
* `jmp (0x1f8ac,PC,D0w)` was emitted as a jump to a fixed address: the index register was dropped,
  so the engine's opcode dispatch always went to the same place.
* The replay had to be bounded (`rc_ops`/`rc_abort`, ticks on every access, call and backward
  branch): fixtures describing a fragment or a busy-wait otherwise never return.
* Two reference bugs, both in the interpreter side of the harness: `Cpu68k.DoStub` ran an unmodelled
  (passthrough) slot without counting it as a call, so the run stopped at the target's `rts`; and
  `Memory.Modified()` let a change run span pages that were never written, printing ~340 kB of
  "modified" memory that no store had touched.

The skip rule is ordered so a passing comparison is never skipped: compare first, and only excuse a
mismatch when the interpreter's own end state is meaningless (its instruction budget ran out, its
`rts` popped an address outside the image, or both sides stopped at the same unmodelled OS call).

## What is not emitted yet (18 functions + 1 block)

Updated 2026-11-11 (the `SUBX`/`SBCD`/`ABCD` and `jsr (d16,A4)` rows are done):

| count | reason | what it really is |
|---|---|---|
| 18 | "line f" | **not** an FPU: every one of them contains an inline 16-bit **jump table** (`bra.w`, then a run of `0xFFxx` offsets, then the handlers), reached by `move.w (d16,PC,Dn.w),Dn` + `jmp (d16,PC,Xn)`. The linear walk reads the table as code and stops on the first `0xFFxx`. A fix has to (a) know the table is data and (b) dispatch the computed jump - see below. |
| 1 | `block at 00001c1e runs past its end at 00001c24` | target sits in the last 6 bytes before the next modelled function. |

Done in this pass: `SUBX`/`ADDX` (2 functions), `SBCD` (1), `ABCD` (1) now decode, emit and are
implemented in the interpreter; the two `jsr (d16,A4)` refusals were **not** vector slots but
`movea.l D0,A4` + `movea.l (A4),A4` + `jsr (0,A4)` - a virtual call through an object - and now fall
through to the emitter's computed transfer. 726 -> 732 functions emitted.

Fixtures pinned for the new ones (`rleaf out\new-funcs.txt --save`): `00004782`, `0000715c`,
`0001bc0e` verify; `0001aaac` exhausts the step budget (a loop), and `0000f3f4`/`0000f5b8` stop at an
unmodelled library call, so those three have no fixture.

## Where the remaining interpreted instructions are (measured)

`bin\win32\icftd-recomp.exe <img> 120000000 --input out\input-narr.txt --interpstat` now prints one
line per *interpreted stretch*, keyed by the pc the interpreter was entered at:

```
recomp: 29679 translated entry(ies), 195048 interpreted instruction(s)
  0234B2 31752   023674 31400   02368C 19625   023396 17624   02491A 14029 ...
```

Every one of them is inside `FUN_0001f2ae`'s MovE opcode dispatch (runtime 0x2335E..0x23750 =
image 0x1f35e..0x1f750) plus the cstart at 0x20918 - i.e. **computed jumps inside translated
functions**, not refused functions. The block emitted at `0001f2d2` covers only up to the next
known target, so the handlers reached through the jump table fall back to the core. 195k of 120M
instructions (0.16%); behaviour is exact either way.

## Next steps, revised (2026-11-11)

1. **Audio: done** (see "Audio" below). Paula's four DMA channels and the CIA-A/B timer A
   interrupts are modelled; the engine's own music driver runs from the timer interrupt, as on the
   hardware. Nothing flag-gated: a normal launch plays.
2. Jump tables: emit the table as data and dispatch the computed jump over the table's own targets
   (`if (pos == RC_ADDR(t)) goto L_t;` for each entry), which turns the 18 refused functions *and*
   the 0.16% interpreted stretches into translated code.
3. Keep the rule: machine state is evidence; frames and pictures are not.

## Audio (2026-11-11)

The game never writes AUDxDAT (measured: zero stores in the whole program). It plays samples
through the audio DMA and generates its music with its own driver, so two things had to be modelled:

* **Paula** (`src/runtime/amiga/audio.c`): AUDxLC/AUDxLEN/AUDxPER/AUDxVOL per channel plus the
  DMACON channel bits and DMAEN. Playback rate is `3546895 / AUDxPER`, channels 0+3 mix left and
  1+2 right, AUDxVOL 0..64 and periods below 124 silence the channel. Mixing runs at 44.1 kHz into
  `waveOut` (`plat_audio_*`), 8 x 512-frame buffers (4 dropped ~16 % of the samples: the mixer
  hands over a frame's worth at each vblank, so the queue must hold several frames).
* **AUDxLC/AUDxLEN are START registers, not the DMA position** (2026-11-11, the difference that made
  the music distorted and the narration silent): the DMA keeps its own pointer and length and
  loads the two registers when the current buffer ends, or when the channel's DMACON bit goes
  0 -> 1. AUDxPER and AUDxVOL only change rate and volume.
  Evidence from the engine itself (`--audiodump` plus a temporary register-write log):
  * `FUN_0000f286`'s player writes **AUDxPER and AUDxVOL on every row**; treating a register write
    as a restart rewound every sample 50-60 times a second - the distortion.
  * `FUN_00009b60` (slot 30) starts a sample by clearing the channel, writing LC/PER/LEN/VOL, then
    setting the bit; `FUN_00009bca` (slot 32, "arm") writes the 2-word silence buffer *while the
    channel still plays* - that only works if the writes are queued for the buffer end.
  * Measured intro: frame 375 plays `voice1` on ch3 (LC 0x0005B180, PER 579, LEN 0x9A34 words =
    78952 bytes, VOL 63), nothing touches ch3 for the next rows, and frame 381 arms the silence
    loop - so the narration must run its full 12.9 s. Before the fix it restarted every 20 ms and
    was inaudible.
  Check: 20 ms self-correlation of the music region was 0.67 with the old model (sample restarted
  every frame) and is 0.07 now (same as at other lags).
* **CIA timers** (`audio.c`): TALO/TAHI/CRA at `$BFE401/$BFE501/$BFEE01` (and CIA-B equivalents),
  one counter step per E clock (10 CPU cycles), continuous reload from the latch, ICR mask.
  `rt_time_run()` raises the interrupt (pending, serviced at the next instruction boundary by
  `rt_cia_service`); the front end runs the handler (`oracle_run_icr`) - it is game code.
  Engine chain: `FUN_0000ed90` = `AddICRVector(ciaa.resource, 0, …)` + `AbleICR(0x81)` (bit 7 =
  enable, bit 0 = timer A), `FUN_0001013a` starts the timer at latch 0x2E9C = 59.4 Hz, and the
  handler `FUN_0000f264` → `FUN_0000f646` (tempo) + `FUN_0000f286` (player) + `FUN_0000f3f4`
  (per-channel DMA + volume, DMACON bit 15 = set/clear) reprograms it from the period table at
  `0x0F6E2` on every tempo change (measured 53..60 Hz).
* **Device time is the frame budget**: instruction cycles, blitter DMA cycles (`rt_blit_run`) and
  the idle rest of a frame (`rt_time_idle`, a WaitTOF) all reach mixer and timers, so 803 frames
  receive 114.0M cycles = 141,875 per frame. Charging only instructions left the audio 59 % short.
* **Settings**: `[AUDIO] sound=0..10` / `music=0..10` (`rt_config_int`). A channel is music when the
  interrupt handler started it (AUDxLC written with `audio.inHandler`), everything else - the
  engine's sample player slot 30/`FUN_00009b60` - is a sound effect. Measured on the intro:
  97 % of the non-silent bytes are music, 4.5 % sound.
* `icftd.ini` is written with its defaults on the first start (`rt_config_ensure`), next to the
  executable, and is no longer in git. Video default is fullscreen.
* Verification: `--audiodump <file>` on both front ends writes raw s16 stereo without a device;
  identical runs produce byte-identical captures (oracle and translated included), `sound=0`+`music=0`
  gives an all-zero capture. Oracle vs translation state parity is unchanged (1449 frame records,
  RAM byte-identical at frames 100/300; only the known frame-30 D0 high word differs),
  `tools/gate.ps1` 4/4.


## Next steps, in order

1. **Whole-program state equality** (the next acceptance layer): a host `bin\win32\icftd-recomp.exe`
   = the runtime + `src\recomp` (built with `-Base 0x4000`) + the oracle's register boot, with a
   Musashi-backed `rc_interpreter` installed so the 24 unemitted functions still run, then compare
   `--state` dumps of the interpreted and the translated build on one input script. `--state`,
   `--input` and `state-diff.ps1` are in place. The frame boundary must stay at 141,875
   instructions, so the host counts instructions per instruction (`rc_step`), not per unit: at the
   boundary it must run the game's interrupt servers - interpreted - and resume the translated code
   with whatever registers they changed.
2. The runtime gaps that appear once the translated build paints text: `diskfont -30`
   (`OpenDiskFont`), `graphics.Text`/`TextLength`, and the three IEEE single-precision ops
   (`-30/-36/-84` on the `mathffp` base). They are runtime code shared by both builds.
3. The 24 unemitted functions, once the whole-program run shows which of them are reachable.
4. Coverage: executed function/basic-block counters, so "what never ran" is a list, not a guess.
5. Performance and the DOS target, once the translated build plays the intro.

## Traps worth remembering

* **Watcom cannot be driven from a 700-source command line** and its `@response` file did nothing
  here. `tools\build-recomp.ps1` compiles in batches of 40 from `bin\win32\recomp-obj` with
  *relative* paths (the repo path has spaces, which Watcom splits on unquoted).
* Two overlapping replay processes lock `bin\win32\recomp-check.exe` and the link fails with
  "Permission denied". Only run one differential at a time.
* PowerShell 5.1: no `[ulong]` accelerator (use `[uint64]`), no `goto`, and `$arr += , @(...)` on a
  nested array throws "op_Multiply".
* Use `H:\Meine Programme\ripgrep\rg.exe` to search `re\disasm\dshell.asm`; the editor's grep
  silently returns nothing on that file.
* The integrated terminal dies after heavy use, and `Measure-Command`/pipelines can swallow a
  native command's output. One VS Code task, `dev: run`, executes `out\dev-run.ps1`; edit that
  script per job instead of adding tasks.

---

# Session 2 (2026-11-10, later) — the translated build *plays*

Whole-program parity is proven (120M instructions, 36,721 frame records byte-identical,
`tools\gate.ps1` 4/4, fixtures 225 verified / 19 skipped / 0 failed). The session then made the
translated build playable and fixed the first real screen.

## What the playable build is

```
play.cmd                                  # --run at --speed 30 (explicit --speed wins)
bin\win32\icftd-recomp.exe <img> <insns> [--window|--run] [--speed N] [--input file] [--shot f.bmp]
```

Intro runs ~592 vblanks (12 s), the YES/NO prompt appears, arrow keys move the selection, fire
confirms. Audio is still silent (only unmodelled device).

## Save slots and the on-screen display (2026-11-11)

The engine has exactly one save file: `ICFTD` on volume `DSAVE:`, a raw dump of two fixed engine
ranges (120 B at `0x021E18`, 12 324 B at `0x02686C` — 12 444 bytes, no header). Details and the
plan: `docs/savegames.md`.

* The runtime maps `DSAVE:` to `<exe dir>\saves\slot<N>\` and creates both directory levels on
  demand — the engine `Lock`s the volume before it opens anything, and a failed lock parks it in
  its "insert volume" panel.
* `dos.Open` honours the mode now (`1005` read, `1006`/`1004` create), and `dos.Write` writes
  through a real handle and returns the count. Handle 0 is still the console and still echoes.
* **F1..F4 pick a save slot, F5 steps to the next; `--slot N` does the same headless.** There is no
  ini entry for it on purpose.
* Feedback goes through the runtime's own overlay (`rt_osd_text` / `rt_osd_icon` in `display.c`),
  not through the windowing layer: "Save Slot - N" in #00FF00 with the game's own disk font
  (`m->osdFont`, `newnem/7`) 2 px in from the top **left**, and the save icon 2 px in from the top
  **right** for 2 s. It is drawn into the chunky framebuffer at the end of `rt_gfx_present`, so a
  DOS/VGA build inherits it; only `plot()`'s `EMU_BM_FRAMEBUFFER` case is platform-visible.
  Palette indices 240..245 (icon) and 255 (text) are the OSD's, set after the game's table.
* The icon sprite is `assets\autosave.png` → `src\runtime\amiga\osd_icon.h` via
  `tools\mkosdicon.ps1` (16x17, six colours, own 2 px transparent border).

Checks that do not need a screenshot:

```
powershell -File tools\dos-save-test.ps1     # the save path through rt_os_call, slot3
bin\win32\icftd-recomp.exe <img> 12000000 --shot out\osd.bmp --osd "Save Slot - 2"
bin\win32\icftd-recomp.exe <img> 12000000 --shot out\osd.bmp --osd save
```

`--osd <text>|save` keeps an overlay up (a development aid), and `--shot` writes the last presented
raster, so "the overlay is really there" is a pixel count: 87 pixels of `(0,255,0)` in
`x 3..62, y 2..7`, 141 icon pixels in `x 306..317, y 2..14`.

**The save runs end to end** (measured 2026-11-11). `--call 0x1442A:900` enters `FUN_0001042a` at a
frame boundary with the program-end sentinel as its return address, so the engine's own routine runs
on the live machine state: `dos.Info` → "validated", `Open("ICFTD",1006)`, `saved 12444 byte(s) to
slot 1`, and the file is byte-identical to the RAM at `0x25E18..` (120 B) and `0x2A86C..` (12 324 B)
from a `--ramstop` dump at the same stop point.

That first real save (the user's "Take a Flight") found the last missing shim: **`dos.Info` (LVO
−114)**. `FUN_0000050e` calls it and loops until `id_DiskState` (+8) is `ID_VALIDATED` 0x52, drawing
"is write protected" for 0x50; answering 0 left the block zeroed, so neither branch matched and the
game retried the volume forever. The runtime now answers 0x52 for the save volume and 0x50 for the
read-only disk folders.

### The second "Take a Flight" failure was a missing data file, not the save

After the `dos.Info` fix the same action reported **"Unresolvable file read/write error! The game
is unplayable."** — `FUN_0000067c`'s panel for `Open(name, MODE_NEWFILE)` failing, which the engine
reaches through `FUN_000002f4` from *both* the save wrapper and the bank opener `FUN_000202c4`.
The flight routine `FUN_000107a6` (vector slot 53) calls that opener with `Desert3:WANI`, and
`WANI` was not in `export\disk3`: its header block (914) and its 376-block data chain are intact on
the disk, but **no directory chain reaches it** (nor `hurt2`, `jet`, `stab1`). `tools\extract.ps1`
now recovers unreferenced header blocks (`AmigaFs.ReadOrphans`, printed as `(orphan)` by
`list`). Measured after the fix: `--call 0x147A6:1000` logs `open "Desert3:WANI" -> export\disk3\WANI
(183016 bytes)` and the flight keeps running instead of parking in the panel.

Two runtime defects the diagnosis turned up, both fixed:

* `rt_file_close` never freed the 44-byte `FileHandle` block, so every open leaked engine heap —
  the same panel is what a failed `rt_alloc(44)` looks like.
* A failed `dos.Open` printed nothing. It now names the reason (`all 16 file handle(s) in use`,
  `no disk holds <name>`, `cannot create <path>`, `no heap for the FileHandle`) and the success
  line carries the live handle count (`[1 of 16]`), so a climbing count is a leaked close.
  `TBOX` and `background` are opened with mode 1005 and are *not* on the disks; the engine tolerates
  both.

## The four fixes that made screens work

| defect | cause | fix |
|---|---|---|
| text drawn with an invented typeface | `diskfont OpenDiskFont` answered 0, so `SetFont` never ran | `rt_font_open_disk()` in `machine.c`: FontContents lookup, hunk font load, segment copied to the heap with `CharData/CharLoc/CharSpace/CharKern` relocated like the loader; `Text`/`TextLength` draw from `tf_CharData` with `tf_Modulo` rows, baseline at `cp_y` |
| a screen drawn once and then waiting never appeared | presenting only on `LoadView` | `oracle_tick` presents `m->view` every vblank (both front ends share it) |
| every interpolation the engine computed started from garbage | maths through `mathffp` (`SPFix/SPFlt/SPDiv`) answered 0 | FFP implemented in `machine.c` (sign, 7-bit excess-64 exponent bits 30..24, 24-bit fraction; `1.0 = 0x40800000`) |
| prompt invisible; arrows did nothing | see below | see below |

## Font file format (measured, both sizes agree)

`fonts/newnem.font` = FontContents: `0x0F00`, entry count, then 260-byte `{name[256], ySize, style,
flags}`. `fonts/newnem/<size>` = hunk file, `HUNK_CODE`, one segment; the `TextFont` inside it is
found by `ln_Type == 12`, `tf_YSize`, sane `tf_LoChar/HiChar`, and four in-segment offsets:

```
0x03A TextFont   YSize@20 XSize@24 Baseline@26 LoChar@32 HiChar@33
                 CharData@34 Modulo@38 CharLoc@40 CharSpace@44 CharKern@48
7  px: CharData 110  Modulo 40  CharLoc 390  CharSpace 806  CharKern 1014  (segment 1224)
10 px: CharData 110  Modulo 40  CharLoc 510  CharSpace 926  CharKern 1134  (segment 1344)
```

CharLoc is `{bit offset, width}` per character; glyph rows are `Modulo` bytes apart.

## Display/palette pipeline (all measured, no screenshots)

* the engine never touches `COLORxx`, `BPLxPT`, `COP1LC` or sprites — the blitter is the only
  directly programmed device, and `blitter.c` already models it. Colours and bitplane pointers live
  **only** in the copper list our `MrgCop` builds. A copper interpreter is *not* needed.
* live colour table = `0x298D2` (runtime `0x2D8D2`). Writers: `FUN_000007F4` panel open
  (pc `0x4842`, 5 words), `FUN_0001d96e` fade stepper (pc `0x219C2`, all 32 words **every** frame,
  final black copy at pc `0x21996`). The fade target `0x29964` is written with zeros by the engine
  at frame 30 and never re-armed — so the intro fades to black and, 11 frames after the panel
  opens, it wipes the panel's five colours. That overlap is invariant to the vblank model
  (141,875 and 35,469 instructions/frame tested) and identical in the interpreter.
* **workaround in place** (`display.c`, `rt_gfx_present`): while the panel-open flag `0x21F5A` is
  set, palette entries 0..4 are taken from the engine's own panel palette `0x21F50`
  (`0222 088C 0226 0559 0E00`). Documented as a port-side patch for that fade collision.

## Input decoding (`FUN_00011bf0`, the routine every menu polls)

```
JOY0DAT ($DFF00C):  bit1 = up, bit9 = down
                    bit0 ^ bit1 = left, bit8 ^ bit9 = right      => idle is all zero
$BFE001 bit7 = /FIRE (active low)
result: 0x24A80 = vertical (+1/-1), 0x24A82 = horizontal (+1/-1), 0x24A84 = "fire released"
```

The prompt's selection is the **horizontal** value: `-1` = YES (line redrawn in pen 4), `+1` = NO.
The host used to feed an active-low `0xFFFF` with bits 0..3, which the poller read as a permanent
"down"; `src\host\main.c` now emits the pattern above. Verified through the engine: right →
`0x24A82 = -1`. A frame-indexed `--input` script owns fire and joystick while one is loaded.

## Cheap state-based screen checks (use these, never a screenshot)

```
bin\win32\icftd-recomp.exe <img> <insns> [--input f] --shot out\f.bmp   # raster + palette + pen histogram
bin\win32\icftd-oracle.exe <img> 0x4000 <insns> --data export          # prints the library census
```

The census is the first thing to run after any shim change: it must say
`0 kind(s) answered with 0` (49 kinds, 4,716 calls today). A remaining 0 silently corrupts engine
control flow — that is how the font and the FFP maths were found.

## Next steps, revised

1. Play on: reach the map/first scene with fire and triage the next screen the same way
   (`--shot` histogram first, then the engine's own tables before any drawing code).
2. Audio: `AUD0/1/3 VOL+DAT+PER` are written directly (~1,300 writes/20M instructions). Nothing else.
3. The 24 untranslated functions + 1 refused block (26,645 interpreted instructions per 21M run —
   coverage gap, not a crash) once a screen depends on one of them.
4. Keep the rule: machine state is evidence; frames and pictures are not.

---

# FLIGHT MINIGAME ("Take a Flight") — continue here

## What is already proven (do not redo)

- **The recompilation is faithful.** Oracle (patched image, `src\oracle`) and the translated build
  enter `FUN_000107a6` at the *same instruction and PC* and stay identical for **1562 frame
  records** (registers, custom-chip file, RAM hash). So anything wrong on screen is shared-runtime
  (blitter / present / palette) or a shim answer — not a translation bug.
  Reproduce with `out\flight-parity2.ps1 -Step host|oracle|diff -Insns 150000000` (driven from the
  `dev: run` task, which runs `out\dev-run.ps1`).
- **Instruments**: oracle `--callat <pc>:<insns>:<arg>[:<atpc>]` (inject at an exact instruction,
  optionally only at that PC); the host's `--call` line prints the pre-injection pc so the oracle can
  match the boundary; `--progress` in `display.c` prints the present geometry, palette sources and
  the row range that carries non-black colour.
- **Fixed so far**: the divu in the 8SVX loader (entry seed for `FUN_00009ae0`'s uninitialised loop
  flag, in *both* front ends — see the `oracle_step` comment and `fn_00009ae0.c`), and the flight
  palette (a 14-entry copper list against a 32-colour ViewPort; the ColorMap now fills the tail).

## State of the flight screen (measured, identical in both front ends)

- 320x200 view, bitmap **bpr 40, 216 rows, depth 5**, palette now 32.
- Engine bitmap carries content in **rows 0..109 only**; rows 110..199 are all index 0.
- ~6 hardware blits per frame, **0 dropped writes** (oracle `--progress` counters).

## SOLVED 2026-11-11: rows 110..199 were the tile renderer's chained blits

**Cause (measured, not guessed): the blitter did not write its pointer registers back.** The world
renderer (`FUN_00011512` and its variants at `0x11748/0x117f8/0x11a02/0x11a42/0x11a88/0x11adc/
0x11b2c`) writes `BLTDPT` **once per column** and then issues 20 blits of one 16x10 tile each,
letting the hardware leave D advanced by `2*words + dmod` (= one bpr) after every blit. Our model
computed every row from the start pointer and never stored the result, so all 20 tiles of a column
landed on the same 10 rows: the world filled 12 tile rows (~110 px) instead of 20 (~200 px).
`blitter.c` now advances `BLTAPT/BPT/CPT/DPT` after the blit (only for the DMA channels that blit
enabled), exactly as UAE/HRM have them, via `row_stride()`.

| measurement (`--progress 1200`, injection `--call 0x147A6:1000:0x20000`, 150M insns) | before | after |
|---|---|---|
| non-black rows of the presented picture | 0..109 | **0..199** |
| lit pixels | 29,733 | **57,320** |
| engine-bitmap bytes per 20-row band (bands 6..9 = rows 120..199) | 0 0 0 0 | **1386 1603 1372 1421** |

Checks that passed with the fix: `tools\gate.ps1` 4/4; flight parity oracle vs translated **1562
frame records identical**; the intro's frames are unchanged (lit px 7145/13359/18337/35721 at frames
185/189/193/197, the same before and after) because every other blit path in the engine reloads its
pointers per blit.

## The picture blits: modulo -1 is a word pointer losing its low bit

`FUN_00011208` fetches `w+2` bytes per row - one word more than the picture is wide (000112ce
`addq.w #2,D1` before `lsr.w #1,D1`), the extra word only filling the shift register and silenced
by `BLTALWM = 0` - and sets `BLTAMOD = BLTBMOD = -1` (000112be/000112c6). A byte-pointer reading of
that gives a row step of `2*words - 1 = w+1`, and every picture row shears by 8 px.

The buffers are `w` bytes per row, and the original never has to care: `BLTxPTH/BLTxPTL` are
**word** pointers, bit 0 of the low register does not exist, so the odd step loses that bit and
comes out as `w`. Three independent checks say so:

- `FUN_0001e504` (the mask builder) `AllocVec`s `h*w` bytes and steps its own one-word blits by
  `AMOD = w-2`, i.e. `w` for a 2-byte fetch (as written: no residue).
- `FUN_00011208`'s other two paths compute `w` from even modulos alone - clipped: `mod = k-2` with a
  `w-k+2` fetch; wide: `mod = w+m-bpr` with a `bpr-m` fetch - so only the narrow path relies on the
  truncation, which is exactly where the engine writes the odd `-1`.
- The flight's five sprite blits (frame 1305, `--blitlog 1200`) have B pointers `0x3A0 = 928` bytes
  apart, and `928 = 16` (MemHeader) `+ 24 rows * 38 bytes`: `w = 38`, the step the truncated pointer
  gives (the mask at 0x09EA38 also lines up at pitch 38 and drifts at 39).

`blitter.c` therefore uses `row_advance()` = `2*words + mod` with bit 0 cleared, for all four
channels and for the pointer write-back. Even steps are untouched, so the tile renderer, the mask
builder and the flipped scroll blits behave exactly as before. `--byteptr` (formerly `--blitfix`,
also accepted as `--noblitfix`) restores the wrong byte-pointer arithmetic for bisection; the
oracle takes it too, so both sides stay comparable.

**The composition chain, all measured:**

```
FUN_000107a6 -> FUN_00010e48   (tile geometry: 2-byte/16px wide, 10-row tiles, sheet 70x18,
                               map 1200 rows; FUN_00011094/slot 55 precomputes BLTSIZE 0x281)
FUN_0000bfca   loop: c390/c75e/ca5e/c310 -> slot 58 (tile renderer) -> d5e8 (sprites) ->
                                beda (RectFill strip, pen 0 + pen 6 border) -> d376
tile renderer  20 columns x 20 tile blits into the offscreen world planes (0x05BBE0.., 5 planes
               0x1F50 apart), chained on the blitter's pointer registers
pc 0x15730     5 blits, con0 0x09F0 (minterm F0 = copy A), 320x200, world planes -> screen planes
               (0442A8.. = 0x044270, or 04F460.. = 0x04F428: the two buffers alternate per frame)
pc 0x151F0     the scroll strips (32x5) that update the world buffer as the camera moves
```

Instrumentation added for this (all behind existing dev flags, no output by default):
`--progress [<frame>]` now also prints the bit content per 20-row band of the presented bitmap, the
8-row screen-write band mask, and **both** engine buffers (`0x26612`/`0x2660E`) plus the tile
renderer's parameters; `--blitlog [<frame>]` prints each hardware blit with its issuing pc, pointers,
modulos, size and whether it lands in the bitmap on screen (host only).

## Where to look next (in this order)

0. **The injected flight carries no flight state — and the game's own way in is the menu.**
   `FUN_0000247a` builds the location's action list and maps action characters to modes:
   `'~'` Make a Call = 1, `'|'` Go to Map = 2, `'%'` Fight = 3, `'}'` Escape Hospital = 6, `'{'`
   **Take a Flight = 9**, `` '`' `` Fire Game = 0xb, `'&'` = 0xc, `'/'` = 0xe, plus a synthetic
   "Situation Map" entry (4/0xf) for location `0x17`. It commits when `DAT_00026896 != 0` and moves
   the highlight by `DAT_00026894`. Setting `DAT_000269d6` from outside does not stick (the menu
   rewrites it every frame): poking 9 at frame 1060 was back to 0 within four frames. The tap
   script's sweeps only ever produce modes **0, 2 and 4** (measured over 300M instructions), so the
   current entry is `/fire` under a joystick sweep — reaching `{` needs the right location and the
   right number of highlight steps. Dev seam added for this: `--poke <frame>:<addr>=<val>[,...]`
   writes engine globals at a frame boundary (machine state, same class as `--call`).
1. **The world render is verified end to end.** `out\mapcheck.ps1` reads the tile map back:
   **3600 cells, indices 0..608 of the 630 the offset table holds, 0 out of range, 63 distinct
   tiles** — every cell indexes the table `FUN_00010e48` fills. `out\tilecheck.ps1` then matches
   every 16x10 destination cell against the engine's own sheet (`tiles.pic`, 560x180, 5 planes,
   record 0xde8): **398 of 400 byte-identical, 0 blank, 2 = the 16x20 seam at x 160, y 60..79** that
   the per-frame scroll strip (`FUN_00011130`, dest 0x04FF14 = row 68, byte 20) rewrites.
2. **The sprite path is only exercised through fixtures, not in the flight.** `FUN_000125aa` is the
   object update: it walks 8 slots (`DAT_0002a970` state, `0x2a9ac` frame, `0x2a8bc`/`0x2a8f8`
   position), draws each through slot `0x21BAE` (`FUN_00011208`) at `x - DAT_0002a850`,
   `y - DAT_0002a852`, and sets `DAT_0002a544` (flight over) on a crosshair hit. With no flight
   state every slot is idle, so the flight issues **no** slot-57 blit at all. Fixtures pinned this
   session: `ref\fixtures\000125aa.json` (36 compared lines) and `00016588.json` (20) — both PASS.
   `0x11130`, `0x11208`, `0x116e6`, `0x11748` already had fixtures.
3. **The readouts are text, gated on `DAT_0002ab0e == 0`.** `FUN_00016588` formats numbers into a
   stack buffer and prints them at (0xf,0xe) with `graphics.Text` while /FIRE has been held for
   >6 frames (`0x24a8c`); it is skipped entirely while `0x2ab0e != 0` (measured 634). Only 613
   `Text` calls in the whole run, all narration. `pbar`/`rbar` (290x24, 5 planes) unused so far.
4. **Raw-blitter path**: `FUN_0000e03c` programs `$DFF040/042/04C/054/058/060-066` directly
   (BLTCON0/1/APTH/DPTH/BLTSIZE/mods/DAT). It runs, but nothing proves the *result* is right — this
   is the first place to compare against HRM/UAE (`blitter.c`, `docs\graphics-notes.md`).
5. **Shims the flight leans on**: `graphics` RectFill/SetAPen (implemented, `display.c`),
   `MrgCop`/`LoadView` (implemented), `dos` reads of `Desert3:WANI`, `sfx\ants`, `sfx\exp`,
   `DES4:SCORES`, `DES4:INSTS` (all resolve), audio (`DoIO` is a no-op — the flight starts samples).

## A real blitter differential (started 2026-11-11, one open mismatch)

UAE's source is **vendored** at `third_party\reference\winuae\` — that is the reference for the
blitter, not guesswork. `blitter_dofast()` (blitter.cpp:481) confirms our model line by line: the
AFWM/ALWM table masks the A word **as fetched, before the shift**, the shift registers hold across
rows but are cleared per blit, and the pointer write-back is
`(hblitsize*2 + mod) * vblitsize` **per channel that has DMA enabled** — exactly what `blitter.c`
now does (this is the fix that filled rows 110..199 of the flight).

`out\blitverify.ps1` is a true differential: it takes a frame's blit log (`--blitlog <frame>`), the
RAM dump of the frame **before** and the one **after** (`--state out\nav --every 1 --ram F,F+1`),
replays every blit with UAE's algorithm on a copy of the "before" dump, and compares each
destination word with the machine's own result:

```
bin\win32\icftd-recomp.exe <img> 90000000 --input out\tap.txt --blitlog 999 --state out\nav --every 1 --ram 1000,1001,1002
powershell -File out\blitverify.ps1 -Before out\nav.1000.ram -After out\nav.1001.ram -Frame 1001
```

First run (frame 1001, the message-strip scene): 10 blits, 20,945 destination words replayed,
**310 disagree**, all inside a fixed **8-byte band (bytes 16..23 of the 42-byte row)**. The debug
trace shows the machine keeping the destination where the *overlay* blit's mask read `0xFFFF` and
the source had data (`con0 2FCA ash 2 bsh 2 r 0 i 9: A 0xFFFF B 0x063F -> replay 0x018F,
machine 0x0008`), i.e. our blitter did not copy where the mask was opaque.

**That was the frame window, not a blitter defect.** Sampling is at the *end* of a tick and the
engine draws after the vblank, so blits logged `f N` land *after* the `N` sample. With the window
shifted one frame (`-Before out\nav.1001.ram -After out\nav.1002.ram -Frame 1001`) the same 10 blits
give **310 -> 28** differing words, and filtering to one destination plane gives **4**, all
single-bit differences where the machine has `0`:

```
MISMATCH at 0462e0: replay 0020 vs machine 0000   (frame 1002, same shape)
```

Those are **`graphics.Text`/RectFill pixels**, which this runtime draws through `plot()` (CPU
plane writes) and which therefore never appear in the blit log — the replay cannot know about them.
So: the blit arithmetic now matches UAE on the engine's own register values; a frame's residual
differences are the non-blitter drawing. To make the check exact, restrict it to a frame with no
text the whole run.

**What this excludes for the "character and plane sprites are garbled, background is fine" report**
(user, 2026-11-11): the blit arithmetic is not the cause (UAE-identical on the engine's own
registers, including the shifted/masked sprite case `con0 2FCA con1 2000 afwm FFFF alwm 0000`), and
neither is the tile/world pipeline. What is left is the *input* to the sprite blits — the picture
and mask the engine hands over (mask cached at `bitmap+0x30`, built by `FUN_0001E504`; animation
frame chosen from `DAT_0002a9ac`) — or the engine state that positions them. Next step: run the
same differential on a frame where a *sprite* is drawn and where no text is drawn in that frame, so
the only writer of the destination is that one blit.

## Entry argument: the game pushes word 6 (and 2), never 0x20000

`out\flight-parity2.ps1` now injects `--call 0x147A6:1000:0x6`. Measured at 150M instructions:

| argument | picture | out-of-RAM accesses | parity |
|---|---|---|---|
| 0x6 / 0x2 / 0x6\|0x10000 | identical (57,320 lit px) | **27** | 1562 frames identical |
| 0x20000 (the earlier guess) | identical | 3,763 | 1562 frames identical |

0x20000 turns on `FUN_000131ac`/`FUN_00017b22` — a mode no call site ever requests — and the
out-of-RAM accesses are the price. Parity still holds either way (both front ends run the same code),
so parity alone could not have caught it.



## The intro never starts another score: a 0-byte voice object (2026-11-12)

Found while looking for the missing fanfare, by following the machine rather than the picture.
Chain, all addresses image-relative (add the load base 0x4000 for a runtime PC):

```
frame 29   FUN_0000E804 (the instrument loader) allocates the four channel voice objects.
           For three of them `AllocMem($20, MEMF_CLEAR|MEMF_PUBLIC)` from 0x0E930.
           For the fourth the size word A4+0xAC2 is 0, so it is a 0-byte allocation.
frame 29   its handler word is therefore still 0 - FUN_0000F06A (which installs the type-2
           handler via `lea (0xc2c,PC)` -> 0x0FCCE) is never applied to it, and the block is
           8 bytes (rt_alloc(0)); the tick's channel entry (player block +0x3E, four 22-byte
           entries) points at it from +4.
frame 1630 FUN_0000F3F4 (the score player's per-channel tick) runs
           `move.l (4,A1),D0 / movea.l D0,A4 / movea.l (0,A4),A4 / jsr (0,A4)` at 0x0F40E..0x0F41E
           and calls 0. Eight handler runs fail (frames 1630..1637), each aborting the tick, so
           the player cannot start another score - which is the hand-off's "nothing starts
           another score after the volume fade at frame 1617".
```

Why the size word is 0: the loader sets it to 0x20 itself at 0x0E8EA for the *shared* pair, then
calls its open helper for the name it has just substituted, `"Desert1:sfx/o.rff"` (0x0E8D4). The
helper first looks the name up in the open bank's directory (compare loop at 0x20204, walk at
0x203xx) - the directory holds the *bare* names, and it does hold `o.rff` with size 0x20 - so the
lookup misses on the full path and the walk's end-of-list path clears the size word
(`clr.l (0xac2,A4)` at 0x2046E). It then falls back to a plain `dos.Open`, which succeeds, and the
loader allocates the size it now holds: 0.

Closed on the way: the FileHandle block we hand out now carries `fh_Pos` and `fh_End` (and zeroed
`fh_Funcs`/`fh_Arg1`/`fh_Arg2`), because AmigaDOS maintains those fields on every operation and we
left them zero - any code that asks a handle for a file's length read "empty". Measured: no change
to the intro (8M instructions still reach frame 1824 with 2286 rasters). A read-watch over the whole
44-byte block then showed the engine never reads it at all in the first 60 frames, so the file's
length is never taken from the handle here; the change is kept because it is a real difference from
AmigaDOS, not because it fixed anything.

### What the disassembly now says, and what it rules out

* `export\code\dshell4k\dshell.img` (the image we run) is `export\code\dshell\dshell.img` (the image
  `re\disasm` was made from) **relocated to 0x4000**: of 792 differing bytes, every one is explained
  by a long that differs by exactly +0x4000 (198 longs), and the 160-entry vector table at 0x21A58
  is 160/160 correct. So the image is not a divergence, and every address in the disassembly maps to
  a runtime address by minus 0x4000.
* Engine vector slot 116 is a plain **`strcmp`** (`0x208E8`: `cmpm.b`/`dbeq`, returns 0/1/-1). The
  loader's branch is therefore `strcmp(instrument_name, "o.rff") == 0`, and the intro's fifth
  instrument really is the generic pair - the branch itself is right.
* `FUN_00020266` (`0x20266`) is the file-context reset: it closes the current bank handle, clears the
  volume string, and **clears the size word** (`clr.l (0xac2,A4)` at `0x2029E`). The engine's open
  runs it *before* opening.
* `FUN_00020476` (`0x20476`) looks the name up in the parsed directory and, on a miss, tail-jumps to
  `dos.Open` (`jmp 0x2145C`, a three-instruction wrapper). It has no way to set the size.
* `FUN_000203DE` (`0x203DE`) is the directory parser: it stores each entry's size into the size word
  at `0x20422` and clears it at `0x2046E`.

Consequence, stated honestly: on the `Desert1:sfx/o.rff` path the engine's *own* instructions are
what leave the size at 0, and the loader then passes it to AllocMem. The reference runs the same
instructions on the same data, so the earlier claim that this chain *is* the missing fanfare is not
established - what is established is that our build ends up with a 0-byte voice object whose null
handler is called eight times at frames 1630..1637.

Next step, and it has to come from the reference: dump the reference's RAM at the same content
position (engine data base A4 = 0x29A56, size word at A4+0xAC2, and the four 22-byte channel entries
at player block +0x3E) and read whether the original holds 0x20 there and whether its channel 3
object has a handler. Without that, the engine's own code gives nothing further to diff.


## The reference savestate instrument works; first state decoded (2026-11-12)

`statefile_quit` in tools\icftd-reference.uae makes WinUAE write a full state on quit, and
tools\refstate.ps1 pulls memory out of it (chunk list, then one chunk as raw bytes). No Lua, no
keypress timed to a frame - the earlier objection (a Lua handler runs inside vsync_handler_post and
perturbed the machine) does not apply.

What a state contains and what it proved:

* `CONF` - the machine's *effective* configuration. One run recorded `cycle_exact=true`,
  `cpu_cycle_exact=true`, `cpu_memory_cycle_exact=true`, `blitter_cycle_exact=true`,
  `immediate_blits=false`, `waiting_blits=disabled`. So the two entries our .uae had that this
  WinUAE rejects (`cycle_exact=cpu`, `copper_cycle_exact`) were harmless duplicates; the config is
  fixed and says `cycle_exact=true` now.
* `BRAM` - 512 KB slow RAM, `CRAM` - 512 KB chip RAM (zlib chunks; the walker has to resynchronise,
  the padding after a chunk is not always what save_chunk() implies).
* `CPU ` - model 68000, then D0-D7, A0-A6, PC, irc/ir, USP, ISP, SR. Both captured states had
  **PC inside Kickstart ROM** (`0xFE5A6E`, `0xFE5862`) with A7 at the top of slow RAM, i.e. the main
  task was blocked in a library routine at the moment of quitting.
* The program is loaded at **0xC52660** in slow RAM (image offset 0x52660): the first instruction,
  `jmp <abs>`, holds base+0x20918 there. That retires the 0xC530E0 figure, which came from the void
  Lua tracer.
* The palette read twice - from the copper list in chip RAM (COLOR00..15 as (0x180+2i,value) pairs)
  and from the `CHIP` register dump - is `0000 0504 0000 0302 0411 0720 0934 0A55 0000 0710 0F94
  0B43 0933 0511 0D64 0E84`, which is the palette our own timeline holds at frames 364..1135
  (the desert scene). `DDFSTRT=$38`, `DDFSTOP=$D0`, `DMACONR=$43DF` (DMAEN+BPLEN+COPEN+BLTEN+all
  four audio channels) - the intro's own screen.

But the MovE step counter (image 0x2C10C, address 0x3010C in our build, 0xC7E76C in the reference)
reads **0** in both states, while our build has 195 there at frame 400. So either the reference was
showing that palette in a phase where the `!OPN` script is not advancing, or that word is not the
witness it looks like. Not settled - do not build on it.

A raw RAM diff against the reference is *not* a usable content matcher: our layout differs at the
roots (program at 0x4000 vs 0xC52660, ROM libraries replaced by stubs at 0x1C4000, heap elsewhere),
so ~4000 words differ at every frame (library and ROM pointers) and no frame stands out. Anchoring
has to use address-independent values: palette, audio registers, bitplane pointers.

### Second state, at the Load Screen: the content positions line up

Quit the instant the Load Screen appeared. Its palette, read from the copper list in chip RAM, is
`0222 088C 0226 0559 0E00` - **identical to our frame 1650**, so the two machines are at the same
content position, and our port gets there in 1650 frames (33 s) where the reference took ~39 s from
the logo.

Also checked, and worth keeping: our image against the reference's *running* copy over the whole
code region (0..0x21A58) differs in **8 words** out of 34,600 after normalising pointers by the base
delta - the code is identical, and the 0xC52660 base mapping is exact.

The step counter stays unexplained and is not to be used: our `--framelog` "step" word (address
0x3010C) is written *indirectly* - our image contains no reference to 0x0003010C at all - so its
counterpart in the reference's RAM cannot be located without following the pointer chain. It reads 0
in both reference states, which proves nothing either way.

Next: compare actual pixels at the same content position - the reference's bitplanes, from the
BPLxPT writes in its copper list, against ours from the View structures at frame 1650.

### Pixel-anchored content positions, and the reference's own clock (2026-11-12)

The screen is a 5-plane bitmap, `BytesPerRow 42`, `Rows 216`, two buffers in chip RAM, and the same
structure exists on both sides - so a state can be anchored to one of our frames *exactly*:

| reference state | our frame | difference | that means |
|---|---|---|---|
| desert scene, 18.5 s after the logo (user clock) | **900** | **0 of 45,360 bytes** | identical picture, identical content |
| Load Screen | **1650** | 68 of 45,360 bytes (0.15 %), rows 138..154, planes 0..2 | same screen bar one small element |

Two independent anchors, both pixel-exact, and both say the port plays the *same* content: 14.7 s
against 18.5 s after the logo, and 29.7 s against ~39 s at the Load Screen. So the earlier "the port
is missing content" reading is dead - the content is identical and the difference is a uniform ~28 %
of machine time per content position, i.e. a rate, not a missing scene.

The reference's own clock comes out of the `CYCS` chunk too: `get_cycles()` (u64, savestate.cpp
save_cycles) divided by `CYCLE_UNIT` 512 is colour clocks. The Load Screen state reads
156,559,541,248 -> 305,780,354 colour clocks -> 86.1 s of emulated time since reset, which matches
boot + load (~47 s) + the ~39 s intro.

The 68-byte difference is a live lead, not noise: a small element at rows 138..154 in planes 0..2.

Next: one more state (any desert position) so that two states carry both `CYCS` and a pixel anchor.
The delta between them is the reference's exact machine time for a known stretch of content, and the
divergence ratio then needs no stopwatch at all.

### Stopwatch-free ratio: the heavy phase is where the time goes

Second desert state (quit ~10 s after the desert scene appeared), anchored by bitmap match to our
**frame 750** - again **0 of 45,360 bytes** different. With `CYCS` on both sides:

| state | reference since reset | our content anchor |
|---|---|---|
| desert scene | 58.83 s | frame 750 |
| Load Screen | 86.07 s | frame 1650 |

Delta: 49,549,338,624 cycles = 96,776,052 colour clocks = 1362.1 frames = **27.24 s**, against our
900 frames = **18.00 s** for the same content: **ratio 1.513**.

That is higher than the whole-intro ratios from the stopwatch (1.26 to 1.31), so the extra machine
time is *not* spread evenly: it is concentrated in the animated desert stretch, which is exactly the
phase where the blitter saturates the bus. The logo/loading stretch is nearly 1:1.

Caveat, and it is checkable: the two states come from different runs, so the delta is only exact if
the two runs boot identically (the emulator is deterministic, and `statefile_quit` writes on quit, so
one state per run is all it can give). Repeating the Load Screen run and getting the same
156,559,541,248 cycles again would prove the runs are identical and pin 1.513; a different value
would say the delta carries boot variance and only same-run comparisons are usable.

### Accounting for the desert stretch, and a rejected fix (2026-11-12)

Our machine over frames 750..1650 (the stretch the reference state pair covers): 900 frames,
194 MovE steps (283 -> 477), 2,840,523 instructions.

| quantity | ours | reference (from 1362.1 frames / 194 steps) |
|---|---|---|
| frames per step | 4.64 | 7.02 |
| 68000 cycles per step | 658,183 | 996,000 (+51 %) |
| instructions per step | 14,642 | same code |
| cycles per instruction | 45 | 68 |
| blitter device clocks per step | 151,725 (= 303,450 cycles, 46 % of the budget) | - |

45 cycles per instruction against a nominal ~10 says this machine is *contention*-dominated, not
instruction-cost-dominated, and the reference is 52 % worse again.

Tried and rejected: UAE's CPU steal. `dma_cycle()` counts every DMA cycle the CPU waits through
(`nasty_cnt`) and `generate_blitter` skips the blitter's cycle once that reaches
BLIT_NASTY_CPU_STEAL_CYCLE_COUNT (3) with BLTPRI clear - which this engine leaves clear
(DMACON $020F). Implemented in walk_slots it made the port **much faster**: the script reached its
last step (477) by frame ~700 instead of ~1640, i.e. 1.47 frames/step against our 4.64 and the
reference's 7.02. Reverted; the rule is documented in slots.c so it is not rediscovered as a "fix".

What the three captured states do say, and it is the one place the time can be: the CPU was inside
Kickstart ROM in **3 of 3** samples (PC 0xFE5A6E, 0xFE5862, 0xFE5A70) while our build is always in
the game's own code. If the reference spent a small fraction of its time in library routines, three
independent samples would not all land there. Our library shims consume exactly zero machine time,
so that is where the missing ~50 % of the desert stretch most plausibly lives - the ROM cost of the
calls the engine makes every step (WaitBOVP, WaitBlit, the MovE draw path), not the instruction
stream and not the bus arbitration.

### LoadView now waits, and what the numbers say afterwards (2026-11-12)

The engine's per-step library traffic, counted over frames 750..1650 (194 steps, 11.4 calls/step):
OwnBlitter 194, DisownBlitter 195, LoadView 194, WaitBOVP 194, AllocMem 445, FreeMem 915, and a
handful of Text/Move/SetAPen. **The -456 entry is OwnBlitter, not exec.DoIO** - our LVO name table is
ambiguous there and -462 is DisownBlitter - so there is no per-step device wait to model.

LoadView now waits for the vertical blank when the view actually changes (the library cannot swap the
copper list mid-display). Measured: the intro's Load Screen moved from frame 1650 to 2116, the desert
stretch from 4.64 to 5.00 frames per step (reference 7.02). Gate 4/4.

Decomposing the desert step: two vblank waits (LoadView + WaitBOVP, which the real machine also
makes) plus about 3 frames of work; the reference is 7.02, i.e. about 5 frames of work. So the
remaining 40 % is in *work per step*, not in waiting - which is why the two pacing numbers that used
to agree now disagree (42.3 s for the whole intro against the reference's ~39 s, while the desert
stretch is still short). Both pixel anchors (frames 900 and 1650) were measurements of content
position, not invariants: they move whenever the pacing changes and have to be re-derived before the
next comparison.

Next: re-test the CPU-steal rule with the LoadView wait in place (it was rejected when the flip cost
nothing, and the balance between waiting and stealing is different now).

## The fanfare stutter is a music tick that aborts, not host audio

The stutter the Windows build shows as the logo arrives is the score player's tick aborting; the
console says so (`emu: ICR handler 013026 failed`, 9 bursts at frames 1955-2032, and 40 more from
frame 1631 on). Host audio is not involved: the mixer receives exactly 100 % of frame cycles
(321,388,862 against 2265 x 141,875), so nothing is starved or dropped on our side.

The tick's own code is what fails. `FUN_0000f3f4` walks the player block's channels:

    0xf40e  move.l (0x4,A1),D0     ; channel -> voice object
    0xf412  beq.b  0xf440         ; a null *object* is skipped, deliberately
    0xf416  movea.l (0x0,A4),A4   ; object -> handler thunk
    0xf41e  jsr    (0x0,A4)       ; 0 here jumps to address 0

So the object pointer is not the problem - the thunk inside it is 0. A healthy object carries
`0x0fccE` (image, i.e. `base+0xFCCE`), the type-2 handler. The reference's slow RAM confirms the
same value at seven places (`0xC6232E` = `0xC52660+0xFCCE`), three of them in the Load Screen state.

Everything upstream of that thunk was traced with the oracle on the *original* image
(`ICFTD_TRACE_LOAD=1 bin\win32\icftd-oracle.exe export\code\dshell4k\dshell.img 0x4000 14000000`):

    f30 cmp `o.rff` vs `o.rff`                 -> equal, so the loader substitutes the desert pair
    f30 open `Desert1:sfx/o.rff` (dir=0001 size=00000020)
    f30 scan exhausted                          -> FUN_000203de ran out of entries
    f30 alloc size=0                            -> the 0x20 set at 0xe8ea is gone

Every other instrument scans *successfully* (`tympany.rff` -> `alloc size=32`), because the
`DES4:INSTS` index holds bare names while this one record's key is a full path. `FUN_000203de`
clears `(A4+0xac2)` when it exhausts the index (`clr.l` at 0x2046e), and 0xac2 is what the loader
hands `AllocMem` at 0xe930 - so the object is an empty block whose first long stays 0, and the
player jumps through it once the channel comes alive.

Why this is *not* a translation bug: the oracle shows the identical sequence, from the original
code, on our machine. `FUN_00020476` only scans when `(A4+0x2ad8)` says an index is mounted, and the
mount (`FUN_000202c4`, called for every non-`o.rff` record) is what sets it - so at the `o.rff`
record the index is active and the missed lookup wipes the size. The reference must be reaching that
open with the size intact (its channel has the thunk, which needs the 32-byte header object), and
the two ways that can happen are named here so the next session does not start from scratch:

  * the scan does not run - `(A4+0x2ad8)` clear at that record, i.e. the mount for the preceding
    record failed; or
  * the scan hits - which needs an index entry literally named `Desert1:sfx/o.rff`. It cannot come
    from `export\disk1\INSTS` (no such string) nor from the reference's RAM (the string occurs once,
    as the image constant at image 0xec63), so this branch is all but excluded.

Checked and found faithful, so nobody re-derives them: `SCORES` is byte-identical to the reference's
copy for its first 0x1e9 bytes and differs only where the engine patches pointers in place
(9547 bytes, from 0x1e9 on); `INSTS` holds `o.rff` twice and no full paths; the 32-byte `o.rff` data
appears 4 times in the reference's slow RAM and 0 times in ours, i.e. we never load it at all.

AUDIO_QUEUE stays at 8: the 16 % drop that 4 showed is a measured property of the queue, but it is
not what the stutter was, and the comment no longer claims it is.

## The stutter's one word, proven - and why it is not yet a fix

`ICFTD_TRACE_LOAD=2` (see `src/oracle/cpu.c`) gives the `Desert1:sfx/o.rff` record back the 0x20
the loader sets at 0xe8ea, which the failed index scan takes away: **142 aborted ticks become 0** and
the intro runs clean. So the chain is closed end to end - size word -> object size -> type word ->
handler thunk -> `jsr (0,A4)` at 0xf41e -> the tick that gets lost.

That experiment writes engine state, so it is a diagnostic, not a fix. What is still missing is why
the reference reaches that open with the size intact, and these are now excluded with evidence:

  * **translation**: our image and the reference's running copy differ in 8 words, none of them code
    - two are the relocated header longs, the rest are data the engine patches at run time
    (image 0x9942..0x994a and 0x101da). The reference runs our exact code.
  * **the disk**: the reference mounts the same ADFs we exported from; disk 1's volume is `Desert1`,
    it holds an `sfx` directory and an `o.rff` file header, so the open succeeds there too. Our
    exported `INSTS` is literally present in that ADF (first 64 bytes at 0x6ec18).
  * **the index**: `INSTS` carries 35 entries, all bare names, and no `o.rff` - so the scan misses on
    the substituted path in both builds. A hit is impossible from that data.
  * **jsr 0 tolerance**: `ICFTD_ALLOW_LOW=1` lets the interpreter execute below the image, which is
    what the original machine would do. The handler still fails (142 again, now by running garbage),
    so the reference cannot be surviving by executing chip RAM - address 0 there is SysBase.
  * **the object table**: at our frame 900 the loader's table has ch6 pointing at the empty object
    (type 0); every other channel carries the type-2 thunk. That single bad slot is what the player
    walks into.

So the reference's ch6 must be null (skipped by `0xf412 beq`) or valid, and the two candidate
mechanisms are (a) the mount state `(A4+0x2ad8)` differing at that record, (b) `AllocMem(0)` leaving
a stale but valid type word there. Both need a datum from the reference side that our savestates do
not contain (the index is cleared once a load finishes, and the score base was null in both states
we have). The next measurement is a WinUAE debugger break at `0xc52660+0xe8fa` / `+0xe91a` reading
`A4+0x2ad8` and `A4+0xac2`, or at `+0xf41e` reading `(A4)`.

## A call to an address that has no code returns to its caller

`jsr (0,A4)` (image 0xf41e in the score player, 0x135f0 in the "start voice" routine) is what an
empty voice object turns into: the handler word is still 0, so the call target is absolute
`0x000000`, which is the 68000 exception vector table, not a function. The translated front end
already answered this the way a machine would after a null call - `rc_stream` returns when
`c->pc == 0` - but the interpreter front end treated any PC below the image as fatal and, when it
happened inside an interrupt, threw away the rest of the handler.

That is what the stutter was. The score player re-arms its DMA once a tick, so a lost tick is an
audible gap. `oracle_step` now does what `rc_stream` does: if a PC below the image has a return
address on the stack, pop it, report once, and carry on; a wild jump without one still fails fast
with the ring dump. One rule, both front ends, no flag.

Measured, `bin\win32\icftd-recomp.exe 12000000` (translated) and the oracle over 14 M instructions:

    before   oracle 142 aborted ticks, product 9 (frames 1955-2032)
    after    oracle 0, product 0; one line: "call to 000000 has no code - returning (frame 1631)"
    reach    oracle 3282 rasters / 14 M insns, product 3097 / 12 M - unchanged pacing, gate 4/4

The engine bug behind it is unchanged and still open: the intro's `DES4:INSTS` index has no
`o.rff` entry, so the loader's substituted `Desert1:sfx/o.rff` record loses the 0x20 it set at
0xe8ea, the object is allocated empty and gets no handler. What makes the reference reach that open
with the size intact is still unknown, and the candidates are listed above.

## The phone book's cursor follows the mouse (2026-11-15)

Another port feature, on the same terms as the map's cursor: the original moves the phone book's
arrow with the stick, so there is nothing to diff it against - and it must not disturb anything
that is.

**The screen.** `Make a Call` is `FUN_000064e2` (runtime `0xA4E2`), the phone book over
`PHONE.DAT` and `Desert2:PEOPLE`: seven entries, 8 px apart, and the arrow `AROW` on the list. The
scene keeps the arrow in two **stack locals of its own frame**, which is why the seam has to know
the frame - `link.w A5,-0x2c`, x at `A5-0x0e`, y at `A5-0x10`, the speed accumulator at `A5-0x14`:

| pc | what it does |
|---|---|
| `0x65a4..0x65b8` | `x,y += axis * speed` (`0x26892`/`0x26894`, what the ClockVBI decoded) |
| `0x65bc..0x65f4` | clamps to x `0x40..0xaa`, y `0x97..0xce` (the seven rows) |
| `0x6638..0x6646` | the entry fire picks is the row under the arrow: `(y - 0x97) / 8` |
| `0x662e` | every iteration ends by presenting the frame: `jsr 0x00005fbe`, return `0x6632` |

**The seam.** `src\host\main.c` hooks `FUN_00005fbe`'s entry and acts only when its return address
is `0x6632` - the same routine is also called by `FUN_00005fe0` itself (`0x603c`, `0x60dc`,
`0x60e6`), so the return address is what says "the phone's cursor loop". There the pointer pins
`x,y` to `pointer + 0x11/0x12` (the map cursor's hot spot - AROW is drawn the same 0x11/0x12 up-left
of the point the scene keeps, so its tip lands under the mouse), clamped to the scene's own window,
and the two axis words are zeroed so the engine's own `axis * speed` adds nothing.

Ownership is per screen, like the map's: the pointer owns the cursor from the moment it moves, and
that claim is dropped once neither the map's script nor the phone's loop has run for
`MAP_IDLE_FRAMES` - so a phone that is opened without the mouse moving keeps the game's own
placement on the first entry. The port's own room arrow (`rt_pointer_at`) stays hidden while the
phone is up, exactly as it is on the map, because the phone draws its own.

**Measured** on frame dumps of `--call 0xA4E2:1000 --mouse <script>` (the phone book is up from
frame ~1600; `PHONE.DAT` opens at 1513): with the pointer at `100,140` the arrow's tip is at
`100,141` and the row under it is 0 (`AIRSTRIP`); at `140,175` the tip is at `140,176` and the row
is 5 (`DESERT STAR`). Without the pointer the arrow stays where the scene put it (`90,152`, row 0).
`tools\mouse-check.ps1` still passes unchanged - the map cursor, the scroll, the stick override and
the click-as-/FIRE equivalence are untouched.

A click is /FIRE, so hovering a line and clicking dials that entry - in a *played* game, where the
clock VBI runs. An injected phone cannot be left at all without it: its loop exits on `0x26896`,
which only `FUN_0000A500` (installed by `FUN_0000551C`) writes - the same caveat the giant-ant
fight has, and the reason a `--mouse` run of this scene only shows the arrow moving.

## The fullscreen border is the port's art, not black bars (2026-11-15, this session)

Another port feature, and the first one in the present backend rather than in the game: nothing to
diff against, and it must not touch what is diffed.

**What it is.** Fullscreen has always kept the 320x200 picture at 4:3 (`plat_present` fits the
largest 4:3 rectangle into the client area) and left the rest black. `assets\border.png` - the
port's own artwork, curtains left and right, black across the middle, drawn at 356x200 - is now
composed behind the picture instead: `border_paint` (`src\runtime\plat\win32\border.c`) fills the
frame buffer `make_frame` creates, then the picture is stretched over it. The art's black centre is
under the picture, so the bars show curtain. Windows only; the DOS build has no bars (VGA 13h is
the picture) and does not compile the file.

**Why it costs no machine state.** It is the platform layer: `plat_win32.c` calls it once per
frame-buffer (re)creation, before any game pixel is involved, and it reads nothing. The one
invariant of the port (a measurement run does not change) is trivially kept - a headless run never
opens a window.

**The picture is not decoded at run time.** `tools\mkborder.ps1` writes
`src\runtime\plat\win32\border_art.h`, run-length encoded (`count, R, G, B`). Not an 8-bit
palette: the curtain is shaded and the picture has **4039 colours**, so a palette would band it;
RLE is exact and 73 160 bytes (18 290 runs, 206 KB of source, about the size of `title_art.h`).
`border.c` decodes it once into a static image and scales from there.

**Point sampling, not smoothing.** The scale is `src = dst * W / w` per axis - nearest neighbour -
because the art is pixel art. It is stretched over the whole client area, which at 16:9 (the aspect
it was drawn for, and this machine's screen) reproduces the author's layout almost exactly: the
4:3 picture is 0.75 * width and the art's curtains are 47/356 = 0.132 * width per side, i.e. the
bars. At 16:10 the curtain is slightly wider than the bar and the picture covers its inner edge. At
21:9 the art's own black centre is visible between curtain and picture (57.8 % of the bars are
curtain) - that is the artwork, not a gap left by the mapping.

**Measured** with `tools\border-check.ps1` (now step 10 of the gate), and it is the feature's whole
claim:

| claim | how | result |
|---|---|---|
| the table is the picture | decode `border_art.h` and compare with `assets\border.png`, pixel by pixel | identical, 356x200, 18 290 runs |
| the scale is point sampling | compile the **shipped** `border.c` with the build scripts' flags, paint, compare every output pixel with `img[y*H/h][x*W/w]` | 0 mismatches at 2048x1152, 1920x1080, 3840x2160, 1680x1050, 2560x1080, 320x200 and 256x144 (the last one scales the picture down) |
| the bars are curtain | share of non-black pixels outside the 4:3 picture rect | 100.0 % at 2048x1152, 1920x1080, 3840x2160 and 1680x1050; 57.8 % at 2560x1080 (the art's black centre) |

`assets\border.png` joins `autosave.png`, `titlescreen.png` and `crosshair.png` as tracked art (the
rest of `assets\` stays gitignored game data); the generated header is tracked like the other art
tables, so a build never needs the PNG.

## The minigames' black side border is the display window (2026-11-15)

Reported as "the fight and the flight minigames - and maybe the hospital - have a black border
around the screen in the original; without it our build shows the artifacts the border hides". The
artifacts are real, the border is real, and nothing draws it: it is the area where the hardware is
programmed with **no display window**, filled with pen 0 = COLOR00.

**Where the window comes from.** No code in `dshell` writes `$DFF08E`/`$DFF090`; the DIW always
arrives in a copper list. There are four sources in the image, and only three of them carry a
horizontal window:

| screen | list | installed by |
|---|---|---|
| map, rooms, intro, brawl, ant fight | graphics.library's own (MrgCop) - DIW `2C81..F4C1` | `rt_gfx_mrg_cop()` |
| flight **and** the top-down ant nest (the grenade game) | template `0x24A90` - DIW `2C90..E0B0` | `FUN_000107A6` -> `FUN_00011F64()` |
| hospital escape | template `0x24EB2` - DIW `2C90..E0B0` | `FUN_00017F34()` |
| chicken race | template `0x2621E` - DIW `1D61..F5D1` | `FUN_0001BE80()` |

`FUN_00011F64` is the WGame scene runner's list: 400 bytes `AllocMem`, a word-by-word copy of the
template up to its `0xFACE` terminator, `cprlist->start` pointed at it, `LoadView`. The ant nest is
one of that runner's scenes (`FUN_0000BFCA`, `Overhead2.tiny`), which is why it shares the flight's
window - the two minigames the report names are the same display. At run time only `+0x1E`
(BPLCON1), the plane pointers (`+0x2A`, `+0xE2`), the palette (`+0x52`) and the HUD region's WAIT
(`+0xD8`) are patched; the DIW block is never touched.

**How the numbers decode.** DIWSTRT/DIWSTOP hold two independent windows, `line << 8 | x`, and
outside them the display is COLOR00. Vertically `0x2C..0xE0` is 180 rows from the standard top, so
20 rows below are border. Horizontally the field counts **lores pixels from the standard window's
left edge `0x81`**, bit 0 is the hires half-pixel a lores screen does not have, and DIWSTOP's ninth
bit is implied - so `0x81..0xC1` is `0x1C1-0x80 = 0x140 = 320` px, and `0x90..0xB0` is
`0x1B0-0x90 = 0x120 = 288` px starting 16 px in: the same screen with a 16-pixel black frame down
each side.

Three independent confirmations inside the engine:

* the same list fetches 19 words = **304** px per line (`DDF 0x38..0xC8`) and the fine scroll is
  0..15, so the widest thing it can ever show is 288+16 = 304 - the window is the fetch width minus
  the maximum fine delay, and the first fetched word is pure prefetch;
* `FUN_0001B94A` computes `DAT_00024ED4 = (bitmapWidth - 0x130)/8` - the spare bytes of a row beyond
  **0x130 = 304** - and those two words are the hospital template's BPL1MOD/BPL2MOD (the flight's
  template carries the same 2 literally). The engine itself works in "304 fetched, 288 shown": the
  flight/nest rows are 320 px, the hospital's 336;
* the chicken's template decodes to `0x1D0-0x60 = 0x170 = 368` px across while its fetch is 23 words
  = 46 bytes = 368 px - window = fetch = row width - and `0x1D..0xF5` is 216 rows = its bitmap.

**What the border is for.** The scrolling levels draw a strip into the bitmap that is not finished
when the beam reaches it, and the last 16 px of each row are never fetched at all. Both are outside
the window in the original, and we were showing them.

**The divergence and the fix.** `rt_gfx_present()` read only the vertical half of DIWSTRT/DIWSTOP
(its comment said the horizontal pair "does not mean inset window" - it came from reading the stop as
a raw byte, `0xB0-0x10 = 0xA0`, which is the 160-pixel column of the rejected attempt).
`list_window()` now returns both rects; the planar->chunky pass is clipped to `[hstart, hstop)` and
the columns outside are filled with pen 0 (COLOR00, the region's slot 0 when the list carries a
palette per line). The source column stays `column - fine delay`: the window clips, it does not move
the picture - which is what keeps the fetched range 0..303 inside the visible range for every delay
0..15.

**Measured.**

* **Machine state first**, because a presenter change must not move any: host and oracle on
  `--input out\flight-live.txt` at 26 500 000 instructions both stop at frame 4080 with PC `0x15B6A`
  and the same instruction count, and the RAM is **byte-identical, 0 of 2 097 152**. Over all 4081
  frame records the only register differences are the two dead Z flags already on record (frames
  1000/1903) and dead-stack bytes (`0x17BF32`, two bytes at frame 5).
* **The raster** of that frame: columns 0..15 and 304..319 are pure black in all 180 window rows and
  columns 16..303 carry the picture. The pre-fix build has **2529** lit pixels in the left 16 columns
  (desert `BB5522`) and **2728** in the right ones - that is the strip, and it is exactly what the
  original's border covers.
* **`tools\present-check.ps1`** learned the assertion (the old build fails it, which is how it was
  checked) and its flight/hospital coverage floors were re-based on the geometry - a 288x180 window
  of a 320x200 raster cannot exceed 0.81. Flight 0.804, hospital 0.810, both with the side columns
  clean; the nest 0.326 with its tunnel and reds and the side columns clean.
* **Nothing else moved**: intro 0.957, map 1.000, fight 0.973 with both health bars, chicken 216 rows
  / 0.974 with its bands, tans, road and cockpit (its window starts 32 px left of the standard edge
  and is 368 px wide, so it covers the whole raster and nothing is clipped). `tools\gate.ps1` 10/10.
