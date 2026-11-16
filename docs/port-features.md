# Port features — where to attach, how to reach a screen, and what "done" means

A *port feature* is code the original game does not have: save slots, the OSD, the title screen,
the situation map's mouse cursor (and the room screens' pointer), the Ctrl+W minigame cheat, the
window/present backend, host input plumbing, our own tooling. There is nothing to diff it against, so RULE 0
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
| **giant-ant fight** (the pistol) | `--poke 999:0x2CA38=0x11,0x2CB10=0xC000000,0x2CB3E=0x21423132,0x2CB42=0 --call 0x951C:1000:0x200:0xCC5C` | 14 000 000 (3 391 records, 13 999 993); the fight is up from frame ~1700 | 2095 (aim 212,120), 2121 (aim 238,120 — the mark the next shot uses), 2122 (that shot stored) | `FUN_00008C5C` → `0xCC5C`, the chapter's entry, which runs `FUN_00007934` per update; the injection enters `FUN_0000551C` first (the clock VBI) and returns *into* `0xCC5C`, which is why the argument is `0x200` (the END sentinel the scene's own `rts` returns to) |

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
* **The giant-ant fight is entered from a room, and the room's state is what the preset pokes.** Its
  setup (`FUN_00008C5C` → `FUN_0000895E`) reads the location (`0x28A3A`, which picks the
  per-location sprite prefix from the table at `0x22CF6`) and looks a resource name up in the BACKS
  bank that `FUN_00005824` sprintf's into `0x28B3E` from the room byte (`0x28B10`). Without them it
  asks for the empty name, gets nothing and returns before the scene starts. The fight also needs the
  world loop's clock VBI: `FUN_0000A500` (its vblank server) is the *only* writer of `0x26898`, the
  fire edge `FUN_000086A0` tests, so a run without `FUN_0000551C` can aim but never shoot. The title's
  key 7 does the same three writes and the same install (see `src\host\title.c`).
* **A `--call` can chain into another routine.** `--call <pc>:<frame>:<arg>:<retpc>` pushes `<arg>`
  and then `<retpc>`; a routine that takes no arguments returns into `<retpc>` and leaves `<arg>` on
  the stack, where the *next* routine's `rts` finds it. `0x951C:1000:0x200:0xCC5C` is exactly that:
  install the clock VBI, continue at the fight, stop at the END sentinel.

## "Done" for a port feature

Oracle parity cannot apply — the original has no such code. A port feature is done when all three
hold, and none of them is a picture. "Asserted" is the measurement the feature *needs*, not the
largest one available: one read of the words it touches, or one replay comparison, is enough.

1. **Its own claim is asserted on machine state** — the words the feature reads and writes (the map
   cursor's `0x28A54/0x28A58`, the picture offset, the destination under the cursor), or, where the
   feature *replaces* a key or behaviour, equality with what it replaces: removing the key press and
   feeding a click instead has to leave the run byte-identical. Frame-by-frame records are the
   cheapest way to see that when the seam is on the frame path; a single state dump is enough when
   the feature only writes one word.
2. **A measurement run is not disturbed.** The seam is inert unless the game is actually being
   played. Show it when the seam can plausibly touch a measurement run — one comparison of the
   feature run against the plain run up to the frame where the feature legitimately first acts (the
   pointer run and the plain run agree to frame 1205, diverge at 1206). A feature that writes no
   machine state (the OSD line, the border) is not owed the full-frame proof; the byte-compare of a
   RAM dump is enough, and only if the code sits on a path a measurement takes.
3. **The seam is inert unless the game is being played, and never behind an opt-in flag.** No
   `--enable-feature`; a shipped launch has the feature, a measurement (`--input`, `--call`,
   `--poke`, `--cover`) does not. If a fix only appears with a flag, it is not a fix — that is how
   the sheared player/plane sprites came back after having been "fixed".

`tools\mouse-check.ps1` is the worked example of all three: it reads the map's own words out of a
`--ram` dump (1), proves a pointer run is identical to the plain run until the map starts (2), and
proves the click is the same `/FIRE` as the key over all 2399 frame records, with no press producing
a divergence at exactly frame 1060 (1 and 3). It is the *most* a feature has needed, not the
minimum. `tools\pointer-check.ps1` adds the second shape: a hover has to select the same menu entry
the stick selects (the menu's stored index and action code), and a pointer that never reaches a line
has to leave the run byte-identical, frame record for frame record. `tools\cheat-check.ps1` is the
third: each scene's success is the set of words its own win path writes, read out of the RAM the run
ends on, plus one armed-vs-plain frame-record comparison before the request.

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

## The giant-ant fight's crosshair

In the ant-invasion chapter's fight (`FUN_00007934`) the player aims a pistol with the stick and
shoots the antennas off a giant ant, and the original shows no mark at all — the aim is invisible
until the shot lands. The port draws `assets\crosshair.png` at the point the engine's own hit test
reads. Like the pointer it is the runtime overlay (`rt_crosshair_at`, `display.c`), 9x9 with its
centre pixel on the mark, drawn after the frame is composed, so it costs the machine nothing.

The mark is not a guess about pixels; it is the engine's own number:

| word | meaning | who writes it |
|---|---|---|
| `0x29AE0`/`0x29AE2` (word) | the pistol's screen position — its aim | `FUN_00007934` initialises it to `0xA0,0x78`, `FUN_000084E4` moves it with the stick and clamps it |
| `0x29AF2`/`0x29AFC` (3 words) | a shot's test point | `FUN_000086A0` at `0x87B0`: the aim `−0x1B` left, `−0x3A` up |
| `0x29CA8`/`0x29CAA` | the antennas still up | `FUN_0000823A`, which compares each shot point with the antenna sprites' rectangles |

Two attachments, both already in the front end:

| hook | what it does |
|---|---|
| `rc_entryHook` on `FUN_00007934` | the fight updated this frame (`g_antFrame`) |
| the **frame boundary** (`host_frame`, before the vblank's present) | reads the aim words, places the crosshair at them `−0x1B`/`−0x3A` |

The frame boundary is the right half of the seam, not the update: `FUN_000084E4` moves the pistol
*after* `FUN_000086A0` has tested the shot, so the value at the boundary is both the position the
pistol was last drawn at and the one the next trigger pull will use. Ten frames without an update
hides the mark (`ANT_IDLE_FRAMES`).

Measured with `tools\crosshair-check.ps1`, machine state first: on frame 2121 the aim is `238,120`
and the crosshair is drawn at `211,62`; the shot the engine stores on the next frame is `211,62` —
the mark the player aimed with is exactly the point the hit test used. At frame 2095 the aim is
`212,120` and the mark `185,62`, so it follows the stick. The same run without the seam draws no
crosshair and agrees with the armed run on all 3391 frame records.

The fight itself had never been entered before this feature; it is now a scene preset, and its
parity was measured the usual way: 4028 frame records identical to the oracle (registers, SR, PC,
custom chips), RAM byte-identical at frames 1900/2100/2300/2500 (frame 1750 differs in two dead
stack bytes at `0x17FCBC`, the known artifact). The DOS build installs no per-screen hook for the
crosshair, so it is inert there — the same gap the pointer has.

## The gun and the extinguisher, moved with the pointer

Two more original scenes are stick-only, and both read the stick the same way: `FUN_00011BF0` (called
at the top of every update) decodes JOY0DAT into `0x24A80`/`0x24A82` and /FIRE into `0x24A84`, and
each scene keeps its aim in the word pair `0x29AE0`/`0x29AE2`:

| scene | movement | what the aim is |
|---|---|---|
| giant-ant fight | `FUN_000084E4` ramps the axes into `0x29AE4`/`0x29AE6` (clamped ±8) and adds them | the pistol; `FUN_000086A0` tests a shot at it `−0x1B`/`−0x3A` — the crosshair's point |
| fire game | `FUN_0000B97C`, same ramp, same words | the hand: the sprite is drawn at it and `FUN_0000BADE`'s spray starts there |

The port writes the aim itself, at the entry of **`FUN_000086A0`** and **`FUN_0000B97C`** — not at
the scene's entry, because that is where `FUN_00011BF0` reads the stick and a write there would be
overwritten a few instructions later. Each write also clears the axes and the ramped acceleration, so
the engine's ramp cannot pull the aim away while the pointer owns it.

What the pointer *means* differs, because the two aims are not the same thing:

* **the fight**: pointer = the shot point, so the aim is the pointer `+0x1B/+0x3A` and the crosshair
  is drawn under the mouse.
* **the fire game**: the aim is the hand, and `FUN_0000B97C` only accelerates it *inside* a travel
  rectangle — x `0x28..0x12C`, y `0xA5..0xF0`, damped outside. Raw screen coordinates are the wrong
  control there: they aim the hand above the room (the sprite floats) and they cannot reach the low
  flames the stick reaches. Measured with the stick held: it comes to rest at x 40..300,
  y 165..240 (its ramp overshoots to x 28..311, y 149..251). The pointer's screen therefore spans
  that rectangle, so its corners are exactly the stick's stops (pointer `0,0` → `40,165`, pointer
  `319,199` → `300,240`).

Ownership is the map cursor's rule: the pointer takes the aim on its first movement **while the
scene is up**, and a held direction takes it back. A pointer put down before the scene started
leaves the engine's own aim alone — which is also what keeps an armed measurement run inert.

Measured with `tools\aim-check.ps1` (the fight's preset as above; the fire game is
`--call 0xFE34:1000`, whose extinguisher routine starts once the sprites are loaded, ~frame 1900):

| scene | pointer → aim | the engine acts at | keyboard | measurement |
|---|---|---|---|---|
| fight | `150,80` → `177,138`; `200,120` → `227,178` | the shot stored is `200,120` | stick moves it to `212,120` | a stale pointer leaves all 3 392 frame records unchanged; the pointer run first differs at 2001 (moved at 2000) |
| fire game | `100,50` → `121,183`; `200,100` → `203,202`; corners → `40,165` / `300,240` | the spray stored is `203,202` | stick moves it to `188,180` | a stale pointer leaves all 2 280 frame records unchanged; the pointer run first differs at 1963 (moved at 1960) |

The DOS build installs no per-screen hook for either aim, so both are inert there — the same gap
the pointer and the crosshair have.

## The Ctrl+W minigame cheat

The original has no cheat key. In a played game, left Ctrl + W ends whichever of the title's seven
scenes is running in that scene's own success state. The claim is a machine state, not a picture:
every scene already knows how its win looks, and the seam writes exactly the words its own success
path writes. Nothing is skipped - the engine's end-of-scene code still runs, so the fight's result,
the fire game's "the fire is out" countdown, the chicken's swerved narration and the flight's
landing are the game's own.

| scene | per-frame update | words written | what they are |
|---|---|---|---|
| Fight | `FUN_0000a74e`, `0x00a74e` | `0x230f6=1`, `0x29e26=8`, `0x29e24=0`, `0x29e36=0x76`, `0x2991e=1` | the update's own exit flag, the opponent's knockout pose, the player standing, the player at the setup's full health; the end of the update takes the result from the player's pose |
| Take a Flight | `FUN_000125aa`, `0x0125aa` | `0x2a552=1`, `0x2a544=1`, `0x2991e=1` | `FUN_00017b9c`'s landing at the nest (`0x17c78`); `FUN_000107a6` follows `0x2a552` into the nest minigame |
| Fire Game | `FUN_0000b528`, `0x00b528` | `0x29e88[0..7]=0`, `0x29cc0=1`, `0x29eba=1`, `0x2991e=1` | every flame out (`FUN_0000b7b2`'s own flag, which also stops a re-ignition that frame), the countdown's last step, the result |
| Escape Hospital | `FUN_00019e9c`, `0x019e9c` | `0x2a170=8`, `0x2991e=1` | `FUN_0001819a`'s loop exit (`FUN_00018832` counts the escape up the same way), the result |
| Chicken Race | `FUN_0001c838`, `0x01c838` | `0x2bcd4=1`, `0x2bcce=0`, `0x2bcd0=1` | Ice swerved - the win `FUN_0001cd94` narrates - not braking, and the race's own end flag |
| Underground | `FUN_0000d376`, `0x00d376` | `0x2a170=8`, `0x2991e=1` | `FUN_0000bfca`'s `while (DAT_0002a170 < 8)`, the result |
| Giant Ant | `FUN_00007934`, `0x007934` | `0x2991e=1`, `0x29920=1`, `0x29cc0=1` | the update's success branch, word for word |

Each update is called from one scene only (the callers are in `re\decomp_all\dshell\ALL.c`), so the
update identifies the scene. The request is consumed at its entry, within the three-frame window
`CHEAT_REQUEST_FRAMES` (measured 0..2 frames after the key).

Attachment points, in the table's order:

* **Platform input** - the platform layers map left Ctrl to `input_state.down[KEY_CTRL]` (Windows:
  `WM_KEYDOWN` `VK_CONTROL`/`VK_LCONTROL` with the extended bit clear; DOS: scancode `0x1D`, where
  the `0xE0 0x1D` right-hand key is not matched). `host_cheat_input` turns the chord into one
  request.
* **Per-screen code** - `host_cheat_entry` is called first from `rc_entryHook`, and consumes the
  request at the entry of the seven updates. The hook is installed in a played game (and for a
  `--mouse`/`--cheat` test run), never in a plain measurement, where the machine state must be the
  original's.
* A request is good for three frames (`CHEAT_REQUEST_FRAMES`), so a press on the title, a room or
  the map expires instead of winning the next scene. The title also ignores its W ending key while
  Ctrl is held, so the chord does not take that menu entry on the way in.
* `--cheat <frame>` is the scripted form (a test seam like `--esc`): it feeds the same
  `input_state` the platform reports, so a test run exercises the one test that decides the chord.
* The DOS front end installs the same hook for this feature alone; the pointer, crosshair and
  loading seams stay Windows-only.

Measured with `tools\cheat-check.ps1` (it is gate step 13): each scene is started from the title
(`--titlekey 1..7`), the request is raised at frame 600, and the run's final RAM holds the words
above (the fight, fire, escape, nest and ant runs return to the title and end there; the chicken's
win narration waits for /FIRE and the flight continues into the nest, so those two end at their
budget). The fight's documented preset, run with the seam installed but no request, is
byte-identical to the plain run on every frame record before frame 2500, and a plain measurement
run ends no scene.

## The hospital escape's camera

The original's "Escape Hospital" walk (`FUN_0001819a`) scrolls the picture only after the character
has walked to the edge of the dead band its update `FUN_000189aa` keeps: `0x18fba..0x18fe6` compare
(player - picture origin) with `200`/`0x78` across and `0x82`/`0x46` down, so the character may
wander 40 px left or right of the middle of the 288x180 window (30 px up or down) before the camera
follows. The port keeps it at the middle and the picture follows from one update to the next.

| what | where |
|---|---|
| the request word | `DAT_000297f2`, written by `FUN_000189aa` and applied one vblank later by `FUN_00017cec` (the fine scroll, the plane pointers, the coarse step) |
| the seam | the entry of `FUN_00019e9c`, the loop's actor draw, reached at `0x18298` right after the update and before that vblank |
| what it writes | `DAT_000297f2` only - the engine's own four direction bits |

The position held, and why it is two different quantities on the two axes:

* **across** the covered value is the *screen* position. The walk sprite is blitted into the bitmap
  at (player - `0x29ec6`) and the copper list's BPLCON1 entry delays the fetch by `DAT_00028cd4`
  colour clocks (the only horizontal scroll - see the flight's fix in `next-session.md`), so the
  screen x is `player - 0x29ec6 + 0x28cd4`, and the target is the window's middle, 144. Adding the
  delay also makes the value smooth: while the picture follows, the origin jumps 16 px every fifth
  update and the fine scroll jumps back by 13, so the sum does not move - a 2 px band neither lags
  nor oscillates, and the character is held within a few pixels of the middle. Measured: the sprite
  body is 12 px wide with its middle at 116.5 while `player - origin + fine` was 116.
* **down** the word `player - 0x29ec8` *is* the visible position (that scroll is the plane pointers
  and a redraw, not a display delay), so it is held at the original's own band midpoint, 100 - 10 px
  below the geometric centre, which is where the walk sprite's middle sits. Its band has to be 5 px
  either side: the word only moves in 10 px steps, and a narrower band cannot settle. Measured with a
  5 px band: the character standing still made the vertical offset ping-pong between 97 and 107.

Everything else stays the engine's - the same bits drive the same fine scroll, coarse step and
redraw, and the level's limits (`DAT_00028d46`, `DAT_0002ae22`) still stop the camera at a wall.
`--cameralog` prints one line per update (player, origin, fine scroll, screen position, request), so
a headless run says where the character is.

"Done" for it (the three claims of this page, measured with `tools\camera-check.ps1`, gate step 14):

1. **its claim is machine state** - walking right and down, the character's screen position stays at
   x 145..150 of 144 and y 97..107 of 100, the origin moves 32 px across and 10 px down with it, and
   the view is still over the last 37 idle frames;
2. **a measurement run is not disturbed** - the same script played without `--mouse` installs no
   entry hook, logs no camera line, and still walks to screen x 193, the edge of the original's band;
3. **no opt-in flag** - a played game (Windows `g_portArm`, the DOS played-run hook) has it, a
   measurement (`--input`, `--call`, `--poke`, `--cover`) does not; `--mouse` is the headless form of
   a played run, and `--cameralog` only prints.

## The loading line during a screen transition

The original waits for a screen's data with the previous picture still up, so a long transition (the
map into a location, a room into the map, the intro, a loaded save's first screen) is a stretch of
frames in which nothing moves. The port says so: `Loading` in the OSD, top left, in the game's own
font.

The trigger is the engine's own load-only code, not a timer. A frame counts as load work when one of
these was entered during it, or when the instruction the frame boundary lands on is inside one (a
long decode runs inside a single call and never dispatches, so the entry hook alone misses most of
it):

| range (image offsets) | what it is |
|---|---|
| `0xAAA..0xFA2` | `FUN_00000b62` — a scene's script: read the asset, then parse it (and its helpers) |
| `0x1EC42..0x1F03E` | `Sms_Load` — a picture bank's header, palette and tiles |
| `0x2011A..0x201D4` | `Sms_Unpack` — its RLE decode loop |
| `0x20204..0x204FA` | the bank directory search, `FUN_000202c4` (the bank opener), the asset lookup |
| `0x204FA..0x20518` | `FUN_000204fa` — read n bytes out of the open bank |
| `0x20518..0x207F0` | the LZ decruncher: state machine, bit reader, `FUN_000205e6`/`FUN_0002069c` |

The line appears after 25 frames of work (`LOAD_SHOW_FRAMES`, half a second — a single asset must not
flash) and survives gaps of up to 8 frames (`LOAD_IDLE_FRAMES`, the loader looking the next asset
up). It is only the runtime's OSD text, armed at the frame boundary before the vblank whose present
composes it; the engine keeps presenting the unchanged picture, so no extra present is needed.

There is one transition the loader code does not mark from its first frame: the intro into the game.
The title answers the engine's load screen at the moment the intro ends (`host_loading_hold`, called
from the title's prompt break and from the Load Game intro skip), so the line is up on that frame
instead of seconds later, when the world loop's script parser and the room's banks start. It hands
over to the loader detection when that runs and ends with it. Measured (menu New Game, fire during
the intro's desert scene): line up at the frame the intro ends (302), the script parse runs
302..586, the picture bank is decoded 588..809, line down at 809.

Measured with `tools\load-check.ps1` (the recordings are game-derived, so it SKIPs without them):

| transition | load work | line up | line down | new screen |
|---|---|---|---|---|
| map → Hilbers Field (`flight-crash-hospital-room.txt`) | 1411..1680 | 1436 | 1689 | 1683 |
| room → map (`map-pointer.txt`) | 1127..1200 | 1152 | 1209 | 1203 |

The seam is inert in a measurement: a run without `--mouse` (or a window) never installs
`rc_entryHook` for it, logs no line, and its RAM is byte-identical to the armed run's over all 2 MB.
The DOS front end installs no per-screen hook for the line, so it is inert there — the same gap the
pointer and the crosshair have.

## The fullscreen border

Fullscreen keeps the 320x200 picture at 4:3, so a widescreen window leaves bars either side. They
used to be black; the Windows build paints the port's own artwork there (`assets\border.png`:
curtains left and right, black across the middle, authored at 356x200 with the picture's footprint
at its centre). This is the present backend, not the game: `border_paint` (`border.c`) fills the
composed frame before `plat_present` blits the scaled picture over it, so the picture covers the
art's black centre and the bars show curtain. Nothing of the machine is read or written, and the
DOS build is untouched — VGA has no bars to fill.

The picture is not decoded at run time: `tools\mkborder.ps1` turns it into
`src\runtime\plat\win32\border_art.h`, run-length encoded (`count, R, G, B`; the shading has
thousands of colours, so an 8-bit palette would band it), decoded once into a static image. It is
scaled with **point sampling** — it is pixel art, and any smoothing turns the folds to mush — and
stretched over the whole client area, which reproduces the author's layout exactly at 16:9 (the
aspect the art was drawn for) and covers the bars completely at 16:10. A 21:9 window honestly
shows the art's own black next to the picture.

`tools\border-check.ps1` is the feature's own check, in the gate: (1) the generated table is
`assets\border.png` byte for byte, (2) the *shipped* `border_paint`, compiled with the build
scripts' flags, is exactly point sampling at several window sizes — every output pixel is the
input pixel at `x*W/w, y*H/h`, so an interpolating scale fails on the first non-uniform pixel —
and (3) on 16:9 and 16:10 the bars are 100 % curtain instead of black. It SKIPs without the
picture (user-supplied) or without Open Watcom.

The art itself is the port's, so `assets\border.png` is one of the few tracked files in `assets\`;
the generated header is tracked next to `crosshair_art.h` and `title_art.h`, so a build never
needs the PNG.

## The dev loop

The gate has tiers, because the port's scene replays cost minutes and say nothing about a change
that does not touch them. Pick the tier by what the change is:

| when | command | what runs |
|---|---|---|
| working on one port surface | `tools\gate.ps1 -Only <step>` (e.g. `-Only pointer`, `-Only port` for all ten) | that check (its own binary must be built: `tools\build-host.ps1`) |
| working on the translation | `tools\recomp-fixtures.ps1 -Only "000009*"`, then `tools\gate.ps1` | the fixtures under that address wildcard, then the core |
| before a hand-off | `tools\gate.ps1` | builds, interpreter fixtures, translated vs interpreted |
| several surfaces at once, or a presenter/input/host change | `tools\gate.ps1 -Full` | the core plus all ten port checks |

`-Quick` still skips the two builds. No change owes a whole-gate run: it owes the measurement that
covers it — see `.github\copilot-instructions.md`, "Validation — check the change, not the
project". The full table is for hand-off and for changes whose blast radius is not obvious.
