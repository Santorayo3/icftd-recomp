# Port features — where to attach, how to reach a screen, and what "done" means

A *port feature* is code the original game does not have: save slots, the OSD, the title screen,
the situation map's mouse cursor (and the room screens' pointer), the Ctrl+W minigame cheat, the
Ctrl+T clock freeze, the
window/present backend, host input plumbing, our own tooling. There is nothing to diff it against, so RULE 0
(`.github/copilot-instructions.md`) cannot decide it —
but RULE 0 still governs everything the original *does* have, and a port feature may not disturb it.
This page is what a session reads *before* writing one: where a feature attaches, the trap that has
cost the most time, how to reach each screen without playing to it, and the definition of done.

Everything below is measured, not remembered, unless it says otherwise.

## The five attachment points

| point | where | use it when |
|---|---|---|
| **Platform input** | `input_state` (`src\runtime\platform.h`), filled by `plat_win32.c` and `plat_dos.c` (the DOS layer reads the mouse through INT 33h) | the feature is an input the game never had: a pointer, a button, a key. Add the field to the struct, set it in the platform layer, and let the front end read it. Never read the OS inside game-side code. |
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
return address on the stack names which menu is running (`0x29D2` / `0x2C62`; the add-on's build
reaches its flip through a shared display stub but still names its own call sites, `0x2D5A` /
`0x2FFC`), so the pointer writes the right local in the right frame. That is what a Down press
does, without the per-pass ramp.

The highlighted pen cannot be used to find the selection: "Answer the Door" and the door/external
entries blink pen 8 whether selected or not (the `=`/`@` branches of `FUN_0000247a`). Reading the
stack local is exact; guessing from pixels is not.

Measured with `tools\pointer-check.ps1`: the room after the intro and the YES/NO load screen draws
four lines at y 144..172 (baseline 150, 7 pixels apart); the menu's own default is entry 2, action 7
("Answer the Door"), Up ×4 is 0/2 ("Go to Map"), Down ×2 is 3/4. Hovering line 1 and clicking gives
0/2 — the same entry and action the Up presses give — and line 4 gives 3/4. A `--mouse` run whose
pointer never reaches a line is byte-identical to the plain run; a hover run first differs at frame
974, the first pass after the pointer moved (970).

The DOS front end installs the same three seams (`line_record`, `menu_flip` and `g_roomFrame` in
`src\host\dos_main.c`, with `--hoverlog` printing the same lines). It has no DOS measurement yet:
reaching that room headlessly needs the recording the Windows check uses.

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
stack bytes at `0x17FCBC`, the known artifact). The DOS front end installs the same
`crosshair_present` seam at its frame boundary (`src\host\dos_main.c`); it has no DOS measurement
yet — reaching the fight headlessly there needs the preset's pokes, which the DOS front end does
not carry.

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

The DOS front end installs the same two aim seams (`aim_shot`, `aim_spray` in
`src\host\dos_main.c`) and the same ownership rule; like the crosshair they have no DOS measurement
yet, because the scenes are reached with the Windows-only `--poke`/recording presets.

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
* The DOS front end installs the same hook, shared with the pointer, crosshair, aim and loading
  seams.

Measured with `tools\cheat-check.ps1` (it is gate step 13): each scene is started from the title
(`--titlekey 1..7`), the request is raised at frame 600, and the run's final RAM holds the words
above (the fight, fire, escape, nest and ant runs return to the title and end there; the chicken's
win narration waits for /FIRE and the flight continues into the nest, so those two end at their
budget). The fight's documented preset, run with the seam installed but no request, is
byte-identical to the plain run on every frame record before frame 2500, and a plain measurement
run ends no scene.

## The map's Ctrl+T clock freeze

The original has no such key, so this is a port feature: there is no path to diff against. It is
also not a new clock — the engine's own clock pause is held, which is why nothing about the game's
date, time, shop hours or day/night has to be re-implemented.

The engine's clock is one routine, `FUN_00005406`. The clock VBI `FUN_000054cc` (installed once by
`FUN_0000551c`) counts `0x50` vblanks in `DAT_0002687e`/`DAT_00026880` and calls it, and it counts
the minute `DAT_00021e24` up, cascading at 59 into the hour `DAT_00021e22` (running the hourly code),
at midnight into the day `DAT_00021e1e` (the daily code) and keeping the hour the map prints —
`DAT_00026870` and its `"AM"`/`"PM"` string `DAT_00026872` — in step. Two places add time directly,
before calling the same routine: travelling on the map (`FUN_00003b1e` at `0x3208`, the
destination's minutes plus the current minute word) and sleeping (`FUN_0000579c` at `0x4204`).

| what | where |
|---|---|
| the pause gate | `DAT_00021e26`, tested by `FUN_00005406` at `0x4006` — it is 1 while the engine stops the clock for a narration page or a pause loop, and the routine then returns without touching anything |
| the frozen words | `DAT_00021e24` (minute), `DAT_00021e22` (hour), `DAT_00021e1e` (day), `DAT_00026870`/`0x26872` (the printed hour and AM/PM) |
| the key | left Ctrl + T, on the situation map, through the platform's own `input_state` (`KEY_CTRL` + a `KEY_T` press, either order) |
| the seams | platform input (`host_input` in `src\host\main.c`, `dos_input` in `dos_main.c`) and the frame boundary (`host_frame`/`dos_frame`, before the vblank whose interrupt servers tick the clock) |

While frozen, the frame boundary writes `DAT_00021e26 = 1` and puts the five words back if they
moved — the gate stops the VBI's tick and its hourly/midnight code exactly as during a narration,
and putting the words back is what undoes the two direct adds of travel and sleep (they would
otherwise surface, all at once, on the first tick after unfreezing). Words are only written when
they differ, so a frozen game whose clock would not have moved is not touched. Unfreezing clears
the gate. The state is the host's (`s_frozen`), so it survives every screen — a location, the
phone, a minigame — and ends where a game ends: the Escape restart, or a new game / a load from
the title, both of which replace the date and time. The feedback is the runtime's OSD line,
`Time frozen` / `Time unfrozen`.

One consequence of using the engine's own word: the save is a raw image of `0x021E18..0x021E90` and
`0x02686C..0x029890` (`docs\savegames.md`), and the first range holds the gate — so a game saved
while the clock was frozen carries it. It is the port's pause, not the game's, so the frames after
the title answers the engine's load screen with "yes" clear it (`host_time_freeze_loaded`, from
`host_title_check`; the loader is two synchronous reads, no vblank inside). A game saved while
frozen therefore loads *running*: the freeze is a session setting, like the window size.

`--timefreeze <frame>[,<frame>...]` is the scripted form (a test seam like `--cheat`): it raises the
same `input_state` the platform reports for the chord at each of those frame boundaries, so two
frames freeze and unfreeze again.

Measured with `tools\time-freeze-check.ps1` (gate step 20). The map is reached without a save and
without a recording — the world loop's entry `FUN_000043b8` is injected behind the clock VBI's
installer (`--call 0x951C:300:0x200:0x83B8`), so the run has a live map and a live clock:

| claim | measurement |
|---|---|
| frozen, the clock does not move | the five words at frames 400, 600 and 900 are identical (`day 14, 9:00`, printed hour 0) and the gate is 1 |
| unfrozen, it moves again | frozen at 400 and unfrozen at 700: the words still agree at 600, the minute is 2 by frame 900 and the gate is 0 |
| a travel adds no time | the same pointer-driven travel (cursor over a destination, then a click) ends at location 24 both times; with the clock running it moves it 27 minutes (`9:01` → `9:28`), frozen it moves it 0 (`9:00` → `9:00`) |
| a measurement is not disturbed | every frame record up to and including the freeze frame is identical to the plain run, and a run with no key never writes the gate |
| a save loads running | a save on disk copied into slot 10 with `DAT_00021e26 = 1` (a save made while frozen) loads at 9:12 and runs to 9:20 with the gate back at 0 |

The DOS front end installs the same seams (its own map-script test is `host_time_freeze_map_pc`),
so the chord works there too.

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

The DOS front end installs the same seam (`load_pc`, `loading_frame`, `host_loading_hold` in
`src\host\dos_main.c`, the line on the shared OSD), and it is measured the same way: the boot load
runs 42..136 and the injected world loop's picture-bank load 387..447, each with the line up and
down at those frames; the title's Load Game arms the hold on frame 37 and the line gives way at 403
when the screen it waited for is up. A DOS measurement run (no `--mouse`) logs no line at all.

## The title's Load Game slot list

The title menu's Load Game does not load the active slot: it replaces the buttons with ten
"Slot N" lines and a Back button, so the slot is picked with the pointer. It is drawn by
`title_slots_draw` (`src\host\title_button.c`) in the buttons' column (x 230, ten 8 px rows from
y 80, Back at y 164 on the shipped button art); the label font is the game's own, and the view is
plain host framebuffer work, so it writes no machine state. An empty slot is pen 250
`(128,128,128)`, an occupied one pen 255 white, and the pointer over an occupied one pen 251
`#00FF00`; the menu's button pens moved to 252..255. Empty slots are inert in both hover and click.
A click on an occupied slot sets `m->saveSlot` and takes the title's existing `TITLE_PICK_LOAD` path
- the intro skip, the answered load screen and `FUN_0001029e`'s own `DSAVE:ICFTD` read; Back returns
to the buttons. `MAX_SAVE_SLOTS` is 10 in both front ends (F1..F4 still pick 1..4, F5 cycles
all ten, `--slot` accepts 1..10).

Measured in the window with posted mouse messages (fullscreen 2048x1152, so client points map back
into the 4:3 picture): Load Game logs `title: load game: 10 save slot(s)`, the click on Slot 3 logs
`title: save slot 3 selected` and then opens `saves\slot3\ICFTD` (12 444 bytes); the list region
holds 9 760 px of grey and 3 927 px of white with the pointer off the slots, and 1 151 px of
`(0,255,0)` with the pointer on Slot 3. `--titlekey 11` still loads the active slot directly, so the
scripted title check is unaffected.

## The title's settings menu

Settings is not a placeholder any more: a click replaces the buttons with the settings view, and
Back puts them back. Three options, one row each — the label in the game's own disk font, the control
under it (the column is 73 px wide and "Music Vol." plus "[-] 10 [+]" needs 102, so the row's label
is on its own line while minus/value/plus stay on one):

| row | control | what a click does |
|---|---|---|
| Fullscreen | the toggle, `assets\toggle_off.png` / `toggle_on.png`, with its state spelled out ("Off"/"On") beside it | flips the window mode through `plat_set_fullscreen`, so the live Win32 window is restyled there and then (`apply_window_mode`), and writes `[VIDEO] fullscreen` |

One trap in that restyle, worth its line because it cost a session: **the visible bit lives in the
window style**, so a `SetWindowLong(GWL_STYLE, …)` whose style lacks `WS_VISIBLE` *hides* the window
the game keeps drawing into — the picture disappears, the taskbar shows no game, and it reads exactly
like a crash ("the window just closes"). The new style carries `WS_VISIBLE`, `SWP_SHOWWINDOW` says it
again, and the frame is composed once inside the switch so the new client rectangle never shows what
the old mode left in it.
| Music Vol. | minus, the value (0..10), plus — `assets\minus_*.png`, `assets\plus_*.png`, the hover state under the pointer | one step, clamped 0..10: `rt_audio_set_gain` changes the mixer **now**, so the map's score playing under the title is what the step is heard on, and `[AUDIO] music` is rewritten |
| Sound Vol. | the same three controls | the same for the effect channels and `[AUDIO] sound` |

Off the view, **Alt+Enter** is the same switch on every screen the game has - a scene, the map, the
title - and it goes through the same helper as the toggle (`host_fullscreen_toggle`, `title.c`), so
the window, the file and the view's own state cannot disagree: the key lands at the frame boundary
(`host_input`, `src\host\main.c`) during the game and in the title's own loop (`title_play`) when
the menu is up, where it also sets the state the toggle is drawn from. The key reaches the host as
`KEY_FULLSCREEN` in `input_state`, set by `plat_win32.c` from `WM_SYSKEYDOWN` (Alt+Enter is a system
key, never a `WM_KEYDOWN`, and its default handling beeps); the DOS layer has no window mode and
never reports it, so there `host_fullscreen_toggle` answers -1 and writes nothing.

The toggle, the two step buttons in both states and the value cell are
`src\host\settings_art.h`, generated byte-exact from the tracked PNGs by the new
`tools\mksettingsart.ps1`. The pictures' own palette indices become *pen offsets* in the table (0
outline, 1 fill, 2 hover, 3 on, 4 knob, 5 edge), and the tool refuses a redrawn picture that breaks
one of the relations the offsets rest on (one outline, one fill, the toggle's off track equal to the
buttons' fill, …). The toggle's cyan surround — the colour outside its rounded corners — is written
as `TITLE_SETTINGS_TRANSPARENT`, so those pixels leave the panel showing. The six pens are
233..238, clear of the presenter's and the OSD's 240..255, and `title_draw` installs the generated
palette every frame beside the menu's own.

Where it attaches:

* **Per-screen code.** The title menu is host code with its own loop (`title_play`,
  `src\host\title.c`), so the front end's frame hooks do not run while it is up. `title_play` itself
  drives `title_settings_pointer` (hover and hit boxes) and `title_settings_click` (the machine
  changes) — nothing is derived from a `pc ==` test.
* **Platform capability.** `plat_has_fullscreen` is what makes the DOS design right: the DOS build
  returns 0, so its view draws the two volume rows only, moved down into the middle of the space the
  three take, and it never offers a window mode it does not own. The DOS front end has the pointer
  since 2026-11-16 (`plat_dos.c` reads INT 33h and `dos_main.c` drives the menu), so the view is
  operable there too.
* **Settings file.** `rt_config_save_int` patches the ini in place and re-reads it: the comment
  lines, the key order and every key the write does not own are written back unchanged, and a key a
  file lacks is added under its section. The view reads the file for what to show (`rt_config_bool`
  for the flag, `rt_config_int` for the two gains, the machine's own values as the fallback), which
  is exactly what the front end applied at startup.
* **Test seams.** `--titlekey 13` opens the view for a scripted run, `--titlekey 14` puts the menu
  up for the run's `--mouse` script to click (the script ends the run on Quit Game), and
  `host_title_pointer` (`title.h`) is how those scripted positions reach a loop the frame hooks
  cannot see. A screen nothing clicks out of is bounded (`TITLE_SCRIPT_FRAMES`), so a missed click
  cannot hold a check for ever.

Measured with `tools\settings-check.ps1` (gate step 7). The toggle is measured as the live window's
geometry, not as a picture: the same click script runs with `--window` and the check samples the
window while it runs - `320x200 -> 2048x1152 -> 320x200`, i.e. the windowed picture, the whole
screen after the click and the window again after the second click (a machine with no desktop SKIPs
that part). Headless: from an ini with
`fullscreen=true, sound=7, music=10`, a click on Settings logs
`title: settings: music 10/10, sound 7/10, fullscreen on`; the toggle logs `title: fullscreen off`;
minus/minus/plus on Music and minus on Sound log `9/10`, `8/10`, `9/10` and `6/10` with the mixer's
gain in the same line (`90% gain`, `80% gain`, …, i.e. the change reached `rt_audio_set_gain`, not
just the file); Back logs `title: back to the main menu`, reopening shows `music 9/10, sound 6/10,
fullscreen off`, and the file afterwards holds `fullscreen=0`, `music=9`, `sound=6` with every
comment of the original still in place. A run without `--titlekey` never arms the title and logs
none of it.

## The title's Quit Game farewell

Quit Game no longer ends the process on the click. It replaces the menu with a black screen and two
lines in the game's own disk font, centred on the 320x200 picture:

```
Check out my spiritual successor "It Returned to the Desert"
Available on Steam and itch.io
```

The notice is held for 500 frames - ten seconds of the machine's own 50 Hz - and only then does
`title_play` return its quit, which stops the run as the button always did.

Where it attaches: the title's own per-screen loop. `title_quit_notice` (`src\host\title.c`) draws
every frame with `title_notice_draw` into the platform framebuffer (palette entry 0 black, the menu's
white text pen), ticks the machine through `title_tick` so the map's score keeps playing while it is
up, presents, and paces with `plat_frame_sync`. `plat_pump` still runs every frame, so closing the
window ends the notice early. Only the button's own click sets the flag: a closed window, a
`--titlekey` fallback or a `TITLE_SCRIPT_FRAMES` timeout still ends the run at once - those are not
Quit Game.

Measured with `tools\quit-check.ps1` (gate step 19). Headless, the click logs frames 40 to 540 -
500 frames, ten seconds - the two requested lines, and `title: quit game: closing`; the run spends
more than nine seconds of wall time on it, so the frames are the machine's paced 50 Hz and not a
loop run as fast as the host can. A run without `--titlekey` logs none of it. Where a desktop gives
the game a window, the check samples the client area while the notice is up: **98.8 % black, 746
white text pixels, their bounding box centred at 159,99 of the 320x200 picture, all four corners
black** - the title art is gone and the text is where the feature says it is.

## The title's fifth button: playing Antheads

A player whose data folder also holds the add-on "It Came from the Desert II - Antheads" gets one
more entry on the title menu, between New Game and Load Game: **Play Antheads**. The two entries are
two games, not a mode switch - New Game plays the 1989 game, Play Antheads plays the add-on - and
both start playing at once. The menu itself is the port's and is one menu: it is always drawn on the
1989 program's hold point (0x9870), and Escape from either game boots that program again and returns
to it, so the player always finds both games on the same screen. The add-on is a second translated
table linked at the same address (`src\recomp\ant\ant_table.c`), so "Play Antheads" is a boot of the
machine with that image (`docs\antheads.md`, Phases 3 and 6).

The two layouts (`title_button.c`) are chosen from `host_title_addon()`:

| | rows (y) |
|---|---|
| without the add-on | New Game 85, Load Game 106, Settings 127, Quit Game 164 - unchanged |
| with it | New Game 84, **Play Antheads** 103, Load Game 122, Settings 141, Quit Game 164 |

Quit Game keeps its place at the bottom of the panel either way; the four others move down to make
the 19-row gap. "Play Antheads" is 71 px in the game's own font, inside the 73-px button. A game
that is already running the add-on gets the four buttons: its New Game plays it, so the menu never
lists a game the player is in (and the first draft's "Play Original Game" label, which would have
needed 90 px, does not exist).

Where it attaches:

* **The action.** `TITLE_ACTION_ANTHEADS` is a pick the title takes like Quit Game's: `m->stop` and
  `rc_stopAt` end the run (the same double stop `host_title_escape` uses) and `g_switchTo` names
  the program. The front end's restart block - the one Esc already uses - reads it through
  `host_title_restart_program()`, sets `g_program`, `rc_active`, the image path, the save geometry
  and the disk tree (`ant1..3`), boots a machine made from scratch, and then calls
  `host_title_new_game()` on it.
* **A game start, never a screen.** `host_title_new_game()` does not park the new machine at the
  add-on's intro setup and draws no menu: the add-on's own intro runs from its first frame (frame
  17: `voice2`, `met`, `exp`) and the port answers only the engine's YES/NO load screen at the end
  of it - "nothing to load", the decision the button already made - so the player goes from the menu
  into the intro exactly as New Game goes into the 1989 one. The whole log holds **one** menu line.
  This is not only simpler, it is required: parked at the add-on's hold point and started from
  there, the port's injected calls change a stack word that the add-on's 8SVX chunk finder
  (`FUN_0000aeac`) reads *before* writing it, the "VHDR" search is skipped and `ldiv(0x369E99, 0)`
  traps (model 0x232BA). A natural boot has a non-zero word there - see the trap in
  `docs\antheads.md` §8 - so the add-on's intro must run untouched.
* **The gate.** `host_title_addon()` is the front end's answer, not a global: `main.c` asks
  `rt_assets_addon_ready(m->dataDir, RT_ASSETS_WINDOWS)` - the add-on's own tree, which
  `src\runtime\assets.c` extracts only when all three of its disks are present - and `dos_main.c`
  answers 0 until that front end boots the add-on too. No add-on, no button, and the menu is the
  one it has always been.
* **Shared save slots.** The slots belong to the port, not to a build: both games save into
  `saves\slotN\` (`ICFTD` and `ICFTD2`), which is what Phase 7's `(A)` marker is for and why a slot
  will boot the program that owns its file.

Measured with `tools\title-check.ps1` (gate step 6). Log: the two layouts rectangle by rectangle,
`5 button(s); New Game 230,84 ...; Play Antheads 230,103 ...; Quit Game 230,164` with the add-on, the
shipped four without it, and the four again on the add-on's own dev menu. Hit box: a `--mouse` click
at 266,110 boots the add-on (`title: playing Antheads (frame 40)` then `recomp: restarting as
Antheads`), and the identical click without it opens Load Game - the rectangle is where Load Game is
in that layout, so a picture that moved without its hit box (or the reverse) cannot pass. Machine
state: the booted run is on `A4=0002FAF6` with the add-on's own `voice2`/`met`/`exp` from `ant1`,
does *not* stop on the add-on's hold point, and answers the load screen at frame 2140; Escape from
an add-on game logs `restarting as It Came from the Desert` and ends on the 1989 hold point 0xD870
with the five-button menu up. Pixels, where a desktop gives the game a window: each button's top
edge is its art's 73-px black outline, found at 84/103/122/141/164 with the add-on and
85/106/127/164 without it, with no such run in the rows where the other layout has a button - the
four-button menu is drawn exactly where it was.

## The situation map's SAVE GAME mark

The map screen shows a "SAVE GAME" mark that belongs to the original: its script
`FUN_00003B1E` loads the ANI bank's `SVGM` once and, on every update while the map is up, hands it
to the MovE renderer as a child node whose position is the map picture's offset plus `0x20`/`0xa`
(`0x3cd2..0x3cf6`). `Move_Walk` adds the node's 16.16 x/y to the base it carries, `Move_DrawNode`
turns the sum into the blit's screen position (`screenX = ((x + 0x8000) >> 16) - hotX`,
`0x1dbe0..0x1dbfa`), so the mark sits on the map's own top-left corner and scrolls with the
picture — it is only seen after pushing the cursor to the map's top-left edge. The map creates and
frees its sprite nodes inside each update (op 1 … op 3), so the node is not left in RAM.

The port keeps the engine's mark and the engine's blit but pins it to the screen's bottom-right
corner, 2 px in from the right edge and 2 px above the bottom, then 12 px higher still: the map
cursor's travel window ends at `DAT_00028A48` (`0xC4`), so an arrow whose tip is the cursor less its
`0x12` hot spot cannot reach a mark at the very bottom. The seam is `Move_DrawNode`'s entry: when the
node being drawn carries the map's `SVGM` asset (`DAT_0002682c`), the two 16.16 position arguments on
the stack are replaced; the node's own x/y, and everything that moves it, are untouched. The screen
is the map's own rectangle in the bitmap — `0x140` across, the width `FUN_00003912` clamps the
selection box to, and `DAT_00026618` down, the height it uses and the clip the blitter applies (the
bitmap itself is 336x216 and only this part is shown). The mark's size is the node's source
rectangle (`srcW`/`srcH`, 59x16); `Move_DrawNode` subtracts the bitmap's hot spot (29,8), so that is
added back to the argument.

The pointer seam owns the mark too (`main.c`): while the pointer is over the mark's screen rectangle
the map window does not scroll — the cursor stops inside the travel window as at any other edge, but
the picture stays put — and a click (the left button's press edge) opens the save-slot picker. Back
returns to the map; picking a slot makes it active and then runs the save path below. The map's test
(`FUN_00003B1E`,
`0x40dc`: the fire held, the cursor less the picture offset inside `0x3c x 0x29`) can only be
satisfied at the map's corner, so at the entry of `FUN_0001061C` — after this update's picture, arrow
and nodes are drawn and right before the test — the seam presents the view the original had there:
offset 0 and the cursor at the map's top left. The engine then takes its own save path (clear
`DAT_00026886`, return from the map script, and the world loop's session end + save). A queued panel
in the tail can skip the test; then the offset is restored at the next map update, before that
update is drawn.

Measured on `ref\inputs\map-pointer.txt` with `--mouse` (the headless form of a played run) and
`--savelog`: the mark's node is placed at `-150,-119` in the original and at `259,170` with the
seam, on a 320x200 screen; the presented frames put the mark's own three sprite colours in exactly
x 259..317, y 170..185 over ten consecutive frames while the map scrolls (origin −153,−121 and
moving), so exactly 2 px stay clear to the right and 14 below (the 2 px padding plus the 12 px
lift). With the pointer parked on the mark the origin does not move at all for forty frames, and a
clicked fire there ends the map: the run loads the next session (`desert.dat`, the ANI bank,
`loading done`) instead of the map continuing. A `--input` run without `--mouse` installs no hook
and logs nothing — the mark is still handed the map's position, and a mark placed at bitmap 0,0
appears at the presented 0,0, which is the 1:1 mapping the corner is measured in.

On DOS the mark is pinned by `host_save_button_entry` and `map_pointer` (`src\host\dos_main.c`)
already holds the window still while the pointer is over it; the click and the picker are still
Task 2 of [`dos-parity.md`](./dos-parity.md), so a click on the mark does nothing on DOS yet.

### The save-slot picker

A click on the mark opens `src\host\save_ui.c`'s list instead of ending the session at once. The
box is `assets\portrait_box.png` (86x130, kept byte-exact in `src\host\portrait_box_art.h` by
`tools\mkportraitbox.ps1`), centred on the presented picture; its top-left key colour (the cyan
around the top tabs) is skipped when drawn, so only the box itself covers the map. Its mustard
interior holds "Save Game", ten 8 px slot rows and the same 73x14 Back button the title's Load Game
uses. Empty slots
are grey, occupied ones white, and the line under the pointer is `#00FF00` — the title menu's pens
250..255, installed through the runtime's port-overlay palette (`rt_overlay_begin`,
`rt_overlay_palette`); the box's nine colours sit at 224..232. The pointer arrow is drawn over the
popup, because the overlay is composed before `on_present` copies the frame and `save_ui_draw`
redraws the arrow last.

While the list is up the map is frozen at `FUN_00003B1E`'s entry: the decoded axes and the fire
word are cleared, so the cursor, the picture offset and the destination under the cursor cannot
change, and the front end also drops the stick and `/FIRE` before the vblank. A click on a slot
sets `m->saveSlot` and closes the list; the next map tail runs the engine's own save path exactly as
the mark's click used to (`save_mark_click`: fire plus the top-left view), so `DSAVE:` resolves to
the chosen `saves\slot<N>`. Back (or Escape) closes the list and the click that closed it is ignored
until the button is released, so it cannot also pick a destination. A measurement run never
installs the seam and never logs the picker.

Measured with `tools\save-ui-check.ps1` on `ref\inputs\map-pointer.txt`: a click at 290,177 opens
the list (`save: slot picker opened`, frame 1303); moving the pointer to 20,20 leaves the cursor at
307,195 and the picture at −153,−121; Back at (160,150) logs `save: slot picker closed` and the map
then follows the pointer to 57,58; a click on Slot 10 (`--slot 1`, so the command line did not pick
it) logs `save: save slot 10 selected`, `save: writing slot 10`, and the engine writes its 12 444
bytes to `saves\slot10\ICFTD`. The same script without `--mouse` never logs the picker.

## The fullscreen border

Fullscreen keeps the 320x200 picture at 4:3, so a widescreen window leaves bars either side. They
used to be black; the Windows build paints the port's own artwork there (`assets\border.png`:
curtains left and right, black across the middle, authored at 356x200 with the picture's footprint
at its centre). This is the present backend, not the game: `border_paint` (`border.c`) fills the
composed frame before `plat_present` blits the scaled picture over it, so the picture covers the
art's black centre and the bars show curtain. Nothing of the machine is read or written, and the
DOS build is untouched — VGA has no bars to fill. The windowed window uses the same frame for the
bars a resized window leaves (see "The window's own size" above).

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

That is the rule for **every** picture the executable draws on its own: tracked PNG in `assets\` →
generated table in `src\`, both committed, `assets\README.md` has the table. `tools\art-check.ps1`
(gate step 15) regenerates all of them and requires the committed table to match its tool's output,
so a stale or hand-edited table — a picture in the binary that no tracked PNG explains — fails.
Game art never takes this route: it stays in `export\` (or the `DISK1..3` folders of a DOS release)
and in `assets\game.pak`, neither of which is shipped or tracked.

## The window's own size, and the picture scaling with it

The window has a **resizable frame** (`window_style` in `plat_win32.c`: caption, close box,
minimize/maximize and `WS_THICKFRAME`), and the picture is scaled into it instead of the window
being nailed to the picture. Three rules, and the rest follows from them:

* **The client is laid out for the game's screen, 320x200.** Fullscreen shows that screen at the 4:3
  an Amiga monitor shows it on; a window shows it at one emulated pixel per desktop pixel at scale 1
  with the height driving the scale (both axes by the same factor, so its aspect is kept). Dragging
  the window's width changes nothing but the size of the bars beside the screen, and only a taller
  (or shorter) window makes the picture bigger or smaller. A client narrower than the screen's own
  shape would have to crop it, so that case keeps the screen whole and puts the bars above and below
  instead.
* **The picture is fitted inside that screen's rectangle, at the screen's pixel shape**
  (`picture_rect`). For every scene but one the picture *is* the screen, so nothing changes. The
  chicken race's copper list programs a display window of 368x216 - its own overscan, 32 pixels left
  of the standard edge, 15% wider and 8% taller than the screen - and taking that window as the shape
  of the display gave the scene a pixel shape of its own: fullscreen squeezed it into the 4:3
  (everything 6% narrower than the rest of the game) and a window fitted it by its own height, which
  made it 6.5% wider and 6.6% taller than the screen, over the curtains. Fitted into the screen
  instead, the whole picture stays visible (no column or row dropped) and every scene has the same
  pixel shape.
* **The bars are the border art.** Windowed and fullscreen share one present path: a 32-bit frame is
  filled with `border_paint` at the client's size, the picture is stretched over its own rectangle,
  and the window gets exactly one `BitBlt` of it. The 320x200 window is the screen at 1:1 - no bars,
  and the 8-bit DIB goes to the window as before - so the border only becomes visible when the window
  is made wider than the screen. The art is painted again whenever the picture's rectangle moves, not
  only when the client does: a scene with a screen of its own would otherwise leave the previous
  picture in the bands it no longer covers.

Fullscreen keeps the 4:3 an Amiga monitor shows the screen on (`4:3` stays the fullscreen rule, the
window's framebuffer aspect is the windowed one, which is why the default 320x200 window has no bars
at all); a picture larger than the screen is letterboxed inside it there too.

The window belongs to the player, so **nothing of the game resizes it any more**: the chicken race's
narration page is 368x216 and used to make the window jump. Because the picture is scaled, the
pointer is mapped back into it (`mouse_to_fb`), not just in fullscreen: the title's buttons, the
map's cursor and the two aims all read the same framebuffer coordinates they always did.

**The window captures the pointer while it has the focus**: the system cursor is hidden - the game
draws its own arrow where it needs one (`display.c`) - and the pointer is confined to the picture,
exactly as the fixed 320x200 window always did (`cursor_update`, `ClipCursor`). The clip also pulls
a pointer that was outside into the picture, and a windowed start takes the foreground
(`SetForegroundWindow`), so the capture is on from the first frame even when the game was started
from a console window. Losing the focus gives the pointer back (`WM_KILLFOCUS`), and that is the way
to the frame: Alt+Tab, then grab it.

The pointer is the game's only **while it is over the picture** and the window has the focus, and
the rule is decided by an *event*, not by where a cursor message happens to find the pointer:

* **The frame's own press gives the pointer back** (`WM_NCLBUTTONDOWN`/`WM_NCRBUTTONDOWN`/
  `WM_NCMBUTTONDOWN`): the caption, the close box, the borders. The system tracks such a press by
  the pointer, so a clip that pulled the pointer into the picture before the press was seen turned
  a click on the close box into a click on the picture - Alt+Tab followed by the X left the game
  playing (measured: the pointer at the box moved 23 px into the client and the window received no
  `WM_NCLBUTTONDOWN` at all). A frame click that starts a drag needs the same thing, and gets it
  from the same message. The window's own tracking (DefWindowProc) then runs untouched.
* **A move or a press over the picture takes it back** (`WM_MOUSEMOVE`, `WM_LBUTTONDOWN`,
  `cursor_retake`): after a frame press or a drag the pointer is on the frame, free; the moment it
  is over the picture again the game has it, hidden and confined, and a click there does the same.
* **The focus decides the rest**: `WM_SETFOCUS` takes it when the pointer is already over the
  picture (a click on the picture of a window that was not in use), `WM_KILLFOCUS` gives it back
  (Alt+Tab), and a size or move loop releases it for as long as it runs.

That is why the ownership is decided by *events* and not re-derived from where a cursor message finds
the pointer. Two measurements make the difference plain: a hit test at the client's far edge - where
the clip holds a pointer it has pulled in - answers `HTBOTTOMRIGHT` (that is where the frame's border
starts), and `ClipCursor` holds a pointer it has clamped even a pixel *past* the far edge (measured:
909,661 held by a clip of ../908,662). Either way, "is the pointer inside the picture?" answers no
about a pointer the game already owns - and acting on that answer let the pointer go exactly when a
player pushed it into a corner (`cursor_refresh` therefore keeps a pointer that is already the
game's, whatever the arithmetic says). `WM_SETCURSOR` only suppresses the window's own cursor shape
while the pointer is the game's (`g_cursorHidden`), so the game's drawn arrow is the only one seen
there.

A drag releases the pointer for as long as it runs (`WM_ENTERSIZEMOVE`/`WM_EXITSIZEMOVE`,
`g_inSizeMove`), because Windows measures a dragged frame from the pointer; the drag ends on the
frame, so the pointer stays the desktop's there and is the game's again over the picture. The
`WM_SETFOCUS` used to ask `GetKeyState(VK_LBUTTON)` for that frame click and only hide the pointer
when the button was down; that cannot work for the click that *activates* the window: the press is
delivered after the activation, and the thread's button byte is only current once the press has been
retrieved, so the state still read "up" and the activation took the pointer. Where the pointer is
(`pointer_over_client`) is known at that moment.

What it must never do is confine the pointer *during* a drag - that is what ran the window down to
its minimum tracking size: the clip followed the shrinking client, and the sizing loop follows the
clip (measured: the same keyboard resize took a 336 px window to 176 px, the minimum, while the
pointer was clipped, and grew it to 465 px with the clip lifted).

Switching to fullscreen remembers the client size first (`remember_window_size`), so the toggle
comes back to the window the player left. Windows keeps no size for an application's own window, so
the port keeps it: closing the game writes `[VIDEO] window_width` / `window_height` to `icftd.ini`
through the host (`main.c`), and the next windowed start passes them to `plat_set_window_size`
before `plat_init`, which creates the window at that client size. They are clamped to the desktop's
work area, so a size saved on a bigger monitor cannot open a window nobody can reach. A size the
file does not have is the picture at 1:1, 320x200.

`tools\window-check.ps1` is the feature's own check - run by hand, not by the gate, because it needs
a desktop and drives the real pointer (Alt+Tab, corner drags, the close box) - and it measures the
window rather than a picture: (1) a 320x200 client becomes 960x400 when the frame is asked to, (2)
at 960x400 the picture is 640x400 in the middle - the run's own 1:1 frame, doubled, no interpolation
and no dropped column - and every pixel outside it is `assets\border.png` point-sampled over the
client, (3) at 1280x400 the picture is still the same 640x400 pixel for pixel and only the bars are
wider, (4) closing the window writes `window_width=1280`, `window_height=400` and the next windowed
start comes back at that client size, and (5) a measurement run (no `--window`) writes no window
key at all. Claim (9) starts the one scene whose screen is not the game's own (`--titlekey 5`, the
chicken race) and measures where its 368x216 picture lands: nothing outside the 640x375 rectangle the
screen allows is anything but the border art, and the pixels just inside it are picture - so the
scene has the screen's pixel shape instead of one of its own, and it cannot grow over the curtains
(the pre-fix build draws 56 673 picture pixels where this claim allows none). Claim (10) clicks the
window's own close box while the window is not in use (the Alt+Tab, then the X a player does) and
requires the run to exit: taking the pointer for the picture during that click pulled it out of the
box, so the press landed on the picture and the run kept playing (measured on the real game: the
pointer moved 23 px into the client and the window received no `WM_NCLBUTTONDOWN`). Claims (6)-(8) drive
the real pointer (`SetCursorPos` + `mouse_event`) because a frame
can only be measured by dragging it: while the window has the focus the system cursor is `hidden`
and a pointer pushed at the far screen corner by a hand's burst of relative moves stays inside the
picture (the capture is read as the pointer's position, not as the clip rectangle), losing the focus
makes it `visible` and lets the
pointer go, a corner drag from there **grows** the window (with the border art still either side of
the picture at its new height scale) instead of collapsing it, using the window again captures the
pointer, and a drag inward stops at the 160x120 minimum.
It reads the client with `PrintWindow(PW_CLIENTONLY)`, i.e. the platform's own `WM_PRINTCLIENT`
answer, and parks the run's `--mouse` script on one picture position so the arrow the title draws
under it is in the same place in every capture. It SKIPs where no desktop gives the game a window,
like `tools\settings-check.ps1`. `tools\quit-check.ps1` drops a saved window size before its own
320x200 run, so the checks cannot hand each other a window shape.

## The sound device (playback, and never a one-way door)

The mixer hands the platform 512 frames at a time (`src\runtime\amiga\audio.c`, `aud_flush`) and the
platform's only job is to get them to the endpoint. There is no original counterpart to diff, so the
rule is its own: **a stalled device may cost the audio that was in flight, never the rest of the
run.** The DOS back end already kept that rule (`sb_service` notices a halted Sound Blaster transfer
and re-issues it); the Win32 one did not, and that is exactly the shape of the bug a player reported
in the hospital escape - the music played, cut out, played for a fraction of a second and was gone
for good, with the game and the picture running on.

The divergence was in `plat_audio_write`: with the eight-chunk queue full it returned after dropping
the new chunk, so nothing was ever *handed to the device* again. A device that stopped for ~90 ms -
an endpoint reset, another program taking it, a driver hiccup - filled the queue, and the ~93 ms
already in the device played out while every later chunk was thrown away: that is the "music, then a
fraction of a second, then silence" the player saw. Fixing it takes three pieces, all in
`src\runtime\plat\win32\plat_win32.c`:

* **The queue drains on every write** (`audio_drain`), whether or not the new chunk fitted. A full
  queue is back-pressure, not a state to stay in.
* **A watchdog** counts buffers that are outstanding with no completion for 300 ms; that is a device
  that stopped, and `waveOutReset` hands the buffers back so the queue can start it again. The
  chunks that were waiting are dropped rather than played as a burst from the wrong moment. A
  `waveOutReset` that fails, or 16 failed writes in a row, means the handle itself is gone and it is
  reopened (at most once a second, on whatever `WAVE_MAPPER` names now).
* **`audio-log.txt`**, next to the executable, appended by the first thing worth recording: a device
  fault (with the machine's own notes in front of it - the frame the score player was freed on) and
  the first queue-full drop of a session. A session with nothing to report leaves no file, and a
  measurement run, which opens no device, writes nothing at all. It is bounded, because it is a
  diagnostic a player sends us and not a transcript: the machine's notes are a ring of the last 16
  events, a session writes at most 200 lines (~18 KB) however badly the device behaves, and a file
  that has grown to 64 KB is replaced rather than appended to. In a normal session it is a handful
  of lines; its cost while playing is one 32-bit read of the score pointer per frame and one ~80-byte
  write per scene change.

`--audiostall <n>` is the check's seam: the *n*-th submission is taken and never played and nothing
is handed over after it, i.e. the shape of a device that hung, so the watchdog has to recover it.
The measurement is the report at the end of a windowed run: with `--audiostall 20` the log holds
`device stopped completing buffers (1 outstanding, no completion for 312 ms) - reset`, the summary
holds `audio device restarted 1 time(s)` and `audio dropped 16896 frame(s)` (the 312 ms that was in
flight and nothing after it), while a plain windowed run of the same length reports no dropped
frames at all. Before the fix the same seam run dropped 425 984 frames over 12 s - every chunk after
the stall, for the rest of the session.

## The four directions, one per pair of keys

The game's only control is a one-button stick, and the port's host input maps the arrow cluster onto
it. W/A/S/D are the same four directions, so a player whose left hand is on the letters never has to
reach across the keyboard.

This is **platform input** (`src\runtime\platform.h`, filled by both `plat_win32.c` and
`plat_dos.c`): the front end still reads `KEY_UP..KEY_RIGHT` and the joy word it builds from them is
unchanged, so no game-side code knows about the second key. What the platform owes is an *alias*,
not a second control — and an alias is more than one more `if`:

* **The trap is the level state.** A logical key is a level (`g_keys[KEY_LEFT]`), and with two
  physical keys behind it, a plain write reports a release when the *other* key is released: press A,
  press Left, release Left, and the player stops although A is still down — and Windows does not
  resend the make code until the auto-repeat delay, so the game sees a gap. Both layers therefore
  keep one bit per physical key (`g_dirHeld`: bit 0 the arrow, bit 1 W/A/S/D, one entry per
  direction) and derive the logical key from it. The press edge is only owed when the *first* of the
  two goes down, which is what `g_make`/`pressed` already express.
* **W is also a key of its own.** The title screen's third ending and the Ctrl+W cheat read `KEY_W`,
  so on Win32 W sets both `KEY_UP` and `KEY_W`, and DOS maps scan code 0x11 to both. The alias does
  not take that away: W is a direction *and* the letter W.
* **Losing the focus releases everything.** A key-up that lands in another window never arrives, so
  `WM_KILLFOCUS` clears the whole key state, not just the Ctrl it used to clear — otherwise a held
  direction would stay down with no key left to release it.

`tools\keys-check.ps1` (gate step 17) is the measurement: it compiles the *shipped* `plat_win32.c`,
posts the `WM_KEYDOWN`/`WM_KEYUP` messages a player produces, and compares what `plat_pump` reports.

| claim | measured |
|---|---|
| A, S, D produce the `input_state` their arrow produces (down and pressed) | the whole state compared field for field, not just the four direction bits |
| W is Up *and* the title's W | the direction compared like the others; `KEY_W` asserted separately, it is the one word that may differ by design |
| a direction outlives the release of one of its two keys | A + Left held, Left released → still left; then the other way round |
| an arrow is not W, and opposites still report both | arrow press leaves `KEY_W` clear; A + D report left and right |

The DOS layer takes the same two-keys-per-direction state machine (there the directions arrive as
scan codes 0x48/0x50/0x4B/0x4D in two forms, plus 0x11/0x1E/0x1F/0x20 for W/A/S/D); it is covered
by its build, and by the same argument, since a DOSBox run cannot be scripted from this check.

## The first start: the game data comes from the player's own disks

The port ships **no game data**. A release is `It Came from the Desert.exe` plus three empty
folders — `export\`, `disks\`, `saves\` (`tools\win32-pack.ps1`) — and the player puts the three
original Amiga floppy images in `disks\`. `rt_assets_ensure` (`src\runtime\assets.c`) runs once at
startup, before the machine boots, and asks one question: is there an extracted tree to run?

* **What "there" means** is machine-checkable, not a stamp file: `export\disk1`, `export\disk2`,
  `export\disk3` and `export\code\dshell4k\dshell.img`. The image is written **last**, so an
  interrupted extraction is not complete and the next start simply extracts again.
* **Which images** are the right ones is decided by the volume labels — `Desert1`, `Desert2`,
  `Desert3`, the names the runtime's `dos.library` shim already maps to `disk1..3`. A set that does
  not cover all three is not a data set the engine could run, so it is refused *before* anything is
  written. The 1990 add-on labels its disks the same way, so the label only names the disk; whose
  disk it is, is decided by one measured file per disk (the program's own size on disk 1, a data
  bank's on disks 2 and 3). Its three disks are extracted beside the game's (`ant1..3`) when all
  three are there and ignored otherwise — the add-on is optional, and never half-used. The formats
  are the exporter's, ported to C because a release cannot run .NET:
  `src\assetExport\Adf.cs` (the raw image), `AmigaFs.cs` (AmigaDOS OFS directory and data chains)
  and `Hunk.cs` (the game program's load image).
* **What is checked in an image is structure, never identity**: a size that is a multiple of 512
  bytes in 100..2048 blocks (51 200..1 048 576 — a double-density floppy), a boot block starting
  `DOS` with the OFS type byte, and the volume label in the root block. No checksum, hash or serial
  is compared anywhere, so any dump of the same floppies is accepted — and so is a modified image
  that keeps the filesystem (`disks\` is read file by file, so neither the file names nor the
  extensions in it matter; the first image by file name wins a label that appears twice). FFS is
  refused rather than half-read, because the data chains carry the 24-byte header only in OFS, and
  compressed or flux-level containers (`.adz`, `.dms`, `.ipf`, `.scp`, `.hfe`) are not formats this
  reader has at all — they have to be converted to a raw image first. What is extracted is the
  whole tree of each disk; the engine then opens its files by name, and the program it boots is
  bound to this exact `dshell` (fixed load base, entry and A4), so a different build of the game is
  out of reach even though nothing would refuse it up front.
* **The message is the feature's only player-facing text**, and it is the one the request named:
  `Please put the three original 'It Came from the Desert' disk images in the 'disks' folder and
  restart.` A windowed start puts it in a modal box (`plat_message`), a headless one prints it and
  exits 1.
* **Where the folders are** is resolved once (`host_asset_dirs` in `src\host\main.c`): `export\`
  and `disks\` next to the executable when the executable has an `export\` folder — the release
  layout, started from anywhere — and plain working-directory-relative `export\`/`disks` otherwise,
  which is how a run out of the repository root finds the developer's tree. `--data` and `--disks`
  override both, and `--extract` only fills the tree (the check seam).

**What is asserted** is not "the game starts": the extracted tree is byte-identical to what
`tools\extract.ps1` writes — 78 files and the 185 752-byte `dshell.img` (`hunk` flattening included:
622 relocations, 3 hunks, base 0x4000) — an empty `disks\` produces the message and exit 1, and a
headless run from the extracted release folder is **frame-record identical** to the development
tree's (`--state` dumps, 84 records). The extraction is a pure function of the images, so identity
of the tree is identity of everything downstream. With the add-on's disks in the folder the same
holds for its tree (82 files, the 196 712-byte `ant\code\dshell4k\dshell.img`): one add-on image
alone changes no byte of the game's tree, and a folder that gets the add-on's disks later adds
`ant1..3`, `ant\code\dshell4k\dshell.img` and the add-on's name-map entries without touching the
game's. A run of `--program ant` from the extracted tree is instruction- and register-identical to
the oracle's (`docs\antheads.md` §4).

The DOS front end calls the same `rt_assets_ensure`, with a second layout (`RT_ASSETS_DOS`): the
release tree there is `DISK1..3\` under 8.3 names, `NAMES.TXT` recording long=short (which is what
`plat_dos.c`'s failed-open retry reads) and `DSHELL.IMG` in the data folder, image last; the
add-on's are `ANT1..3\` and `ANTSHEL.IMG`, sharing that one `NAMES.TXT`. The DOS
release itself is `ICFTD.EXE` plus an empty `DISKS\` (and `SAVES\`, `ICFTD.CONF`), so no game data
is distributed there either. The naming is `tools\dos-pack.ps1 -Data`'s, character for character, so
an extracted tree and a staged one are the same bytes — `tools\dos-extract-check.ps1` asserts
exactly that in DOSBox for both trees (163 files, both images, one name map), including a first
start that extracts and then boots the same machine as the staged reference tree, the add-on's
disks arriving on a later start, and one add-on image changing nothing.

## The dev loop

The gate has tiers, because the port's scene replays cost minutes and say nothing about a change
that does not touch them. Pick the tier by what the change is:

| when | command | what runs |
|---|---|---|
| working on one port surface | `tools\gate.ps1 -Only <step>` (e.g. `-Only pointer`, `-Only port` for all of them) | that check (its own binary must be built: `tools\build-host.ps1`) |
| working on the translation | `tools\recomp-fixtures.ps1 -Only "000009*"`, then `tools\gate.ps1` | the fixtures under that address wildcard, then the core |
| before a hand-off | `tools\gate.ps1` | builds, interpreter fixtures, translated vs interpreted |
| several surfaces at once, or a presenter/input/host change | `tools\gate.ps1 -Full` | the core plus every port check |

`-Quick` still skips the two builds. No change owes a whole-gate run: it owes the measurement that
covers it — see `.github\copilot-instructions.md`, "Validation — check the change, not the
project". The full table is for hand-off and for changes whose blast radius is not obvious.
