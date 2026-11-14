# Port features — where to attach, how to reach a screen, and what "done" means

A *port feature* is code the original game does not have: save slots, the OSD, the title screen,
the situation map's mouse cursor (and the room screens' pointer), the window/present backend, host
input plumbing, our own tooling. There is nothing to diff it against, so RULE 0
(`.github/copilot-instructions.md`) cannot decide it —
but RULE 0 still governs everything the original *does* have, and a port feature may not disturb it.
This page is what a session reads *before* writing one: where a feature attaches, the trap that has
cost the most time, how to reach each screen without playing to it, and the definition of done.

Everything below is measured, not remembered, unless it says otherwise.

## The five attachment points

| point | where | use it when |
|---|---|---|
| **Platform input** | `input_state` (`src\runtime\platform.h`), filled by `plat_win32.c` (and left `0` — pointer and buttons — in `plat_dos.c`) | the feature is an input the game never had: a pointer, a button, a key. Add the field to the struct, set it in the platform layer, and let the front end read it. Never read the OS inside game-side code. |
| **Frame boundary** | `rt_machine::on_frame` (`src\runtime\amiga\machine.h`), installed by the front end (`m.on_frame = host_input`) | the work is once per emulated frame and does not care *which* game function is running: sampling the pointer, overlaying the OSD, pacing. |
| **Per-screen code** | `rc_entryHook` (`src\recomp\cpu.c`, null by default in `src\recomp\hooks.c`) | the work has to happen at a known point *inside* the game's own code — one per update of a script, one per scene loop — and the frame boundary is too coarse. The map's cursor (`host_entry` in `src\host\main.c`) and the room screens' pointer/hover (`line_record`, `menu_flip` there) are the worked examples. |
| **Engine service** | `rt_os_call` shims (`src\runtime\amiga\machine.c`) | the engine already makes the library call and the runtime answers it: fix or extend the shim. Never special-case the engine's callers — the call census (`--lvo`) is the checklist. |
| **Forcing a test state** | `--poke <frame>:<addr>=<val>[,…]`, `--call <pc>:<frame>[:<arg>[:<retpc>]]`, `--mouse <file>` (host; the oracle has its own `--callat`) | you need a screen or a value without playing to it. These are *test* seams: a feature is never implemented through them, and a real fix is never gated behind one. |

Notes that are not obvious:

* `rc_entryHook` is a pointer that is null unless a front end installs it, and the shipped build and
  every measurement run pay one load and one test. That is the whole cost of the seam — which is
  also why it must stay null during a measurement (see "Done" below).
* `--call` takes a **runtime** address (image address + `RC_BASE`, 0x4000 in the game build): the
  fight is `FUN_0000B46C` and therefore `--call 0xF46C:…`.
* `--poke` is applied by the *runtime* at a frame boundary, not by the front end's loop, so it also
  lands inside a scene whose whole setup runs inside one translated function.
* `--mouse <file>` feeds the pointer headlessly, one `<frame> <x> <y> [<button>]` per line, in the
  same `input_state` the platform reports.

## The trap: a `pc ==` test in the front end's own loop is silently inert

The translated program is not run frame by frame from the front end. `rc_call` enters
`rc_stream` (`src\recomp\cpu.c`) and that loop dispatches **function after function inside C** — the
map's script `FUN_00003B1E` is reached by the scene runner's `jsr (A0)` and never returns to the
front end's loop, so the front end only regains control when the instruction budget or a stop ends
the stream.

**Rule: per-screen work goes through `rc_entryHook`, never through a `pc ==` test in the front end's
loop.** A loop test compiles, looks right, and never fires — this is the trap that has cost the most
time in the project. `rc_entryHook` is called by `rc_stream` at every dispatch with `pc` as
dispatched, so that is where "this is the function I care about" is visible.

Corollary: a frame hook (`on_frame`) is right for once-per-frame work, and it *is* reached from inside
the stream through the vblank — but it cannot tell you which game function is running, so it cannot
be used for "every time this script updates".

## Scene presets — how to reach each screen headlessly

All rows are `bin\win32\icftd-recomp.exe` (the translated build; the oracle takes the same
`--input`/`--state`/`--ram` flags), plus `--state <prefix>` and `--ram <frames>` for the evidence.
"Instructions" is the `--insns` budget of the run and, in brackets, what the state dump measured:
number of frame records and the instruction counter at the last one. Re-run any row with:

```powershell
bin\win32\icftd-recomp.exe <reach it with> --state out\pf\<name>\s --ram <frames> <budget>
```

| screen | reach it with | instructions (measured) | frames worth dumping | entry / PC |
|---|---|---|---|---|
| **situation map** | `--input ref\inputs\map-pointer.txt` | 11 000 000 (2 400 records, 10 996 973); the map starts running at frame ~1194, 8 100 024 | 1240, 1290, 1330 | script `FUN_00003B1E` = runtime `0x7B1E`, run by `FUN_0001D2C6`; PC at 1240 is `0x21214` (`FUN_0001d1da`), at 1290/1330 `0x22B6C` (`FUN_0001e8c8`) |
| **a room** (the one after a flight crash) | `--input ref\inputs\flight-crash-hospital-room.txt` | 60 000 000 (19 451 records, 59 998 270) | 2890 (still the flight), 2910 (crash), 2950 (teardown), 3000 (the room) | reached by the recording; PC at 3000 is `0x127EC` (`FUN_0000e7ce`). At 3000 the room's picture sits in one engine buffer only (`0x04F428`: 6 688 bytes set in a 16 KB window, `0x044270`: 0) |
| **the flight** | same recording (the flight is up at frame 2890) — or a played session recorded to `out\flight-live.txt` | 60 000 000 as above; `--input out\flight-live.txt` at 26 500 000 (4 081 records, 26 497 383) | 2890 for the recording; 3100, 3110 for `flight-live` | engine entry `FUN_000107A6`; PCs at 3100/3110 are `0x17BA4` (`FUN_00013b54`) and `0x1520E` (`FUN_00011208`) |
| **hospital escape** | `--input ref\inputs\flight-crash-hospital-room.txt --call 0x1C19A:2500` | 27 000 000 (3 548 records, 26 993 121) | 2600, 2700 | `FUN_0001819A` → runtime `0x1C19A`, injected at frame 2500 (16 277 353 insns); PC at 2600 is `0x17958` (`FUN_000135da`), at 2700 `0x1695C` (`FUN_000125aa`) |
| **fight** (bar-room brawl) | `--input ref\inputs\fight.txt --call 0xF46C:1513` | 20 000 000 (3 432 records, 10 491 684) | 3430 (the win frame) | `FUN_0000B46C` → `0xF46C`; injected at frame 1513, 4 876 672 insns, `was at pc 0x23512` |
| **chicken race** | `--input ref\inputs\chicken.txt --call 0x1FA3E:1513` | 20 000 000 (1 787 records, 5 954 188); the win path returns at frame 1673 | 1560, 1600, 1630, 1660 | `FUN_0001BA3E` → `0x1FA3E`; PC at 1560–1630 is `0x1FB20` (`FUN_0001ba3e`), at 1660/1673 `0x201D4` (`FUN_0001c1c6`) |
| **underground ant nest** (UNDER) | `--input ref\inputs\under.txt --call 0xFFCA:1513` | 20 000 000 (2 335 records, 12 523 955); returns at frame 2334, idle at 2100 | 1750, 1950, 2150 | `FUN_0000BFCA` → `0xFFCA`; PCs `0x155DA` (`FUN_00011512`), `0x11D1C` (`FUN_0000dc74`), `0x1220E` (`FUN_0000e03c`) |

Things the table does not say, because they are not what a preset needs:

* **`ref\` is gitignored.** Every script above is game-derived and lives on disk only; a missing
  script is a **SKIP**, not a failure. `out\` is gitignored too: `flight-live.txt` and
  `hospital-live.txt` are *played* sessions, so they can only be re-made by hand with
  `--run --record`.
* **A room's action menu** is up at frames ~960..1060 of `flight-crash-hospital-room.txt`: four
  lines at y 144..172 (x 19.., font 7 rows, baselines 150/157/164/171), the game's own default the
  blinking "Answer the Door" (entry 2), and the fire at 1060 commits the choice. `--hoverlog` prints
  every line the pointer seam records, with its entry and rectangle.
* **The oracle needs the injection point, not just the pc.** The host injects at its dispatch-loop
  boundary (after the translated function in progress), the oracle's `--callat` before the *next*
  instruction — so the *oracle* command is `--callat 0xFFCA:4876672:0:0x23512` for UNDER, fight and
  chicken: the count the host printed when it injected (4 876 672 — slightly more than the frame
  record's 4 876 320, because the injection lands after the frame boundary) and the pc it was at
  (`0x23512`). Without the matching point the two enter with different stack/register context and
  diverge one frame later.
* **Frames are worth dumping for a reason:** they are the frames whose `--ram` blobs were compared
  against the oracle (or, for port features, against a recorded session). A new row should come with
  frames chosen the same way — one where the screen is up, one at the transition, one after it.
* The **brake path** of the chicken race (frames 1620/1700 in `next-session.md`) is *unconfirmed
  here*: the recorded input on disk is the win script, and the brake script was not kept.

## "Done" for a port feature

Oracle parity cannot apply — the original has no such code. A port feature is done when all three
hold, and none of them is a picture:

1. **Its own claim is asserted on machine state** — the words the feature reads and writes (the map
   cursor's `0x28A54/0x28A58`, the picture offset, the destination under the cursor), or, where the
   feature *replaces* a key or behaviour, **bit-for-bit equivalence with what it replaces**:
   removing the key press and feeding a click instead has to leave the run byte-identical, frame
   record for frame record.
2. **One invariant is kept: a measurement run does not change.** The seam is inert unless the game is
   actually being played, and that is *shown*, not claimed: frame records of a feature run against
   the recorded session's must be identical up to the frame where the feature legitimately first
   acts (the pointer run and the plain run agree to frame 1205, diverge at 1206 — the map's first
   update with the pointer active). Anything earlier is a regression, whatever the screenshot says.
3. **The seam is inert unless the game is being played, and never behind an opt-in flag.** No
   `--enable-feature`; a shipped launch has the feature, a measurement (`--input`, `--call`,
   `--poke`, `--cover`) does not. If a fix only appears with a flag, it is not a fix — that is how
   the sheared player/plane sprites came back after having been "fixed".

`tools\mouse-check.ps1` is the worked example of all three: it reads the map's own words out of a
`--ram` dump (1), proves a pointer run is identical to the plain run until the map starts (2), and
proves the click is the same `/FIRE` as the key over all 2399 frame records, with no press producing
a divergence at exactly frame 1060 (1 and 3). Copy its shape rather than inventing a fourth.
`tools\pointer-check.ps1` adds the second shape: a hover has to select the same menu entry the stick
selects (the menu's stored index and action code), and a pointer that never reaches a line has to
leave the run byte-identical, frame record for frame record.

## The room screens' pointer, and a menu line under it

The situation map shows its own cursor (game art). The port also shows a pointer on every room
screen, and hovering a line of a room's text menu selects it — "Go to Map", "Answer the Door", the
evidence questions, … The arrow is the runtime overlay (`rt_pointer_at`, `display.c`), 17x18 with
its tip at the top left (the map sprite's shape and size), so it costs no machine state at all.

Reaching it goes through `rc_entryHook` three times:

| hook | what it is |
|---|---|
| `FUN_00005eac` / `FUN_00005824` | draw/update a location view: the screen is a room, so the arrow is shown (`g_roomFrame`). The intro, the flight and the minigames never call them. |
| `FUN_00004d76(text, x, y, pen, count)` | draws one line of a text menu. The line is recorded with its screen rectangle and the menu entry it belongs to — the caller's loop counter, so a wrapped line repeats its entry and skipped entries leave gaps. |
| `FUN_0001d1da` | flips the menu's two bitmaps at the end of a pass; the pointer's line is written into the menu's selection here. |

Both text menus keep their selection in a **stack local**, not a global, and add the stick to it
once per pass: `FUN_0000247a` (`link.w A5,-0x9a`) has the selection at `A5-6` and the entry loop
counter at `A5-2`; `FUN_00002b7c` (`link.w A5,-0x0c`) has them at `A5-4` and `A5-8`. The flip's
return address on the stack names which menu is running (`0x29D2` / `0x2C62`), so the pointer writes
the right local in the right frame. That is what a Down press does, without the per-pass ramp.

The highlighted pen cannot be used to find the selection: "Answer the Door" and the door/external
entries blink pen 8 whether selected or not (the `=`/`@` branches of `FUN_0000247a`). Reading the
stack local is exact; guessing from pixels is not.

Measured with `tools\pointer-check.ps1`: the room after the intro and the YES/NO load screen draws
four lines at y 144..172 (baseline 150, 7 pixels apart); the menu's own default is entry 2, action 7
("Answer the Door"), Up ×4 is 0/2 ("Go to Map"), Down ×2 is 3/4. Hovering line 1 and clicking gives
0/2 — the same entry and action the Up presses give — and line 4 gives 3/4. A `--mouse` run whose
pointer never reaches a line is byte-identical to the plain run; a hover run first differs at frame
974, the first pass after the pointer moved (970).

## The dev loop

`tools\gate.ps1 -Quick` while working — it skips both builds and runs the checks (interpreter
fixtures, translated vs interpreted, presenter, title, map cursor). Run the full `tools\gate.ps1`
once before handing off: it also builds the exporter and the oracle, and it is the definition of
green.
