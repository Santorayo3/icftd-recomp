# DOS parity — the Windows feature set on MS-DOS

**Status: in progress (started 2026-11-16).** This is the hand-off memory for bringing
`bin\dos\ICFTD.EXE` up to the Windows build's feature set. Read it with
[`next-session.md`](./next-session.md), [`port-features.md`](./port-features.md) and RULE 0 in
[`.github/copilot-instructions.md`](../.github/copilot-instructions.md).

The scope was agreed as **full parity**: the DOS build gets the pointer-driven screens too, which
means a real DOS mouse driver, and the first start extracts the player's own floppy images into the
DOS 8.3 release layout (`DISK1..3`, `DSHELL.IMG`, `NAMES.TXT`) exactly as
`tools\dos-pack.ps1 -Data` stages it. The release itself is `ICFTD.EXE` plus an empty `DISKS\`
(the images), an empty `SAVES\` and `ICFTD.CONF` — no game data, like the Windows release.

Nothing here is a symptom fix: every item is a port feature (the original has no such code), so it
is done when its own claim is measured (see "Done" in [`port-features.md`](./port-features.md)),
not when a screenshot looks right. A measurement run must stay inert: a played game — or the
scripted form of one (`--mouse`, `--cheat`) — installs `rc_entryHook`; a measurement (`--frames`,
`--call`, `--dump`, `--shot`) does not.

---

## Current state at the start of this plan

### Already ported (working tree, before this plan)

| feature | where |
|---|---|
| W/A/S/D as the four directions, two keys per direction | `src\runtime\plat\dos\plat_dos.c` (`dir_key`), `src\runtime\platform.h` |
| Ctrl+W minigame cheat | `src\host\cheat.c`, installed from `dos_entry`; scancode 0x1D for left Ctrl |
| Ctrl+T clock freeze | `src\host\time_freeze.c`, `dos_frame`/`dos_input`, `--timefreeze` |
| Hospital escape camera | `src\host\hospital_camera.c`, installed from `dos_entry` |
| Map SAVE GAME mark pinned to the screen corner | `src\host\save_button.c`, installed from `dos_entry` |
| Ten save slots (F1..F4, F5 cycles 1..10) | `src\host\dos_main.c` |
| Title menu, Load Game slot list, Settings view, Quit notice | shared `src\host\title.c` / `title_button.c` (now operated on DOS: the platform mouse and key input feed the menu; `--mouse` is its headless form) |
| Settings written back to `icftd.ini` | `src\runtime\config.c` (`rt_config_save_int`), shared title code |
| `plat_has_fullscreen`, `plat_dir_files`, `plat_message`, `dir_key` | `src\runtime\plat\dos\plat_dos.c` |
| Build wiring for `time_freeze.c`, `save_ui.c` | `tools\build-dos.ps1` |

### Done in this plan so far

| item | state | evidence |
|---|---|---|
| **Task 0 — DOS mouse driver** | **Done, compiled, smoke-run** | `plat_dos.c`: INT 33h reset, hide the driver's own cursor, poll position/buttons, report `input_state.mouse_present/x/y/left/right/left_pressed/moved`. Coordinates are raw mode 13h screen pixels (0..319 × 0..199). `tools\build-dos.ps1` succeeds (22 s full, 1.4 s incremental); the boot log says `icftd: mouse driver present` under DOSBox, and a `--frames 300 --noaudio` run finishes 300 frames, 49.3 frame/s, 0 library calls unanswered. |
| **Task 5 — headless seams** | **Done** | `dos_main.c`: `--mouse <file>` (same file format as `src\host\main.c`; positions are platform pixels and are mapped onto the picture), `--shot <bmp>` (24-bit BMP of the composed raster, written from `dos_present`), `--hoverlog` (the pointer/menu/aim lines the Windows seams print), and `--call`'s fourth field (return address, so the world loop can be entered and left at a sentinel). See Task 5. |
| **Task 1 — pointer state and seams** | **Done for the map, room, phone, menu-hover, crosshair and both aims; measured on the map** | `dos_main.c`: `g_ptrKnown/g_ptrActive/g_hoverOwn/g_ptrX/g_ptrY`, the mode-13h → picture mapping, `pointer_input`/`aim_input`/`pointer_present`, `crosshair_present` at the frame boundary, and the entry-hook seams for `FUN_00003b1e`, `FUN_00005eac`/`FUN_00005824`, `FUN_00004d76`/`FUN_0001d1da`, `FUN_00005fbe`, `FUN_00007934`, `FUN_000086a0`, `FUN_0000b97c`. Map cursor, window edge and scrolling measured from a RAM dump (below); the resting seams have no DOS measurement yet. |
| **Task 2 — map save-slot picker** | **Done, measured end to end** | `dos_main.c`: the Windows picker state machine (`save_click_note`, `save_fake_view`, `save_mark_click`, `save_owns_input`, `save_ui_frame`, `save_ui_watch`, `save_ui_draw` in `dos_present`, Escape first). Measured headless (below): mark click opens the list, the map words stay put while it is up, Back restores the pointer-driven cursor, and the chosen slot reaches the engine's own save — `SAVES\SLOT10\ICFTD`, 12 444 bytes. |
| **Task 3 — loading line** | **Done, measured** | `dos_main.c`: `g_loadRanges`/`load_pc`, `load_pc` as an entry-hook seam, `loading_frame` in `dos_frame` before `oracle_tick`, `host_loading_hold` arming the 10-second hold and `rt_osd_text(m, "Loading", 2)`. Measured headless: line up/down on the boot load (42..136) and the injected world loop's picture-bank load (387..447), the title's Load Game hold up at 37 and down at 403; a plain measurement logs no line. See Task 3. |
| **Task 4 — DOS first start** | **Done, measured as a byte identity** | `assets.c`/`.h`: a layout parameter (`RT_ASSETS_WINDOWS`/`RT_ASSETS_DOS`) on the same OFS reader and hunk flattener; the DOS branch names every file with `dos-pack.ps1`'s `Get-ShortName` rule, records `long=short`, writes `NAMES.TXT` (same bytes, packer sort order) and the image last. `dos_main.c`: `--data`/`--disks`/`--image`/`--extract`, the image default `<dataDir>\DSHELL.IMG` (falling back to a `code\dshell4k\dshell.img` export tree), the message and exit 1. `tools\build-dos.ps1` compiles `assets.c`; `tools\dos-extract-check.ps1` measures it in DOSBox (below). |

**Trap learned the hard way:** in the 32-bit Watcom target `union REGS` has `x` = `DWORDREGS`
(`eax`/`ebx`/…), not `ax`/`bx`, and `int86()` is not declared for it. Use
`int386(0x33, &r, &r)` with `r.x.eax`/`ebx`/`ecx`/`edx`, mask the low 16 bits, and
`memset(&r, 0, sizeof r)` before each call. This compiles and runs under DOS/32A + DOSBox.

### Not done (the rest of this file)

Task 4 is in: a first start on an empty release extracts `DISK1..3`, `NAMES.TXT` and `DSHELL.IMG`
from the player's own floppy images, byte-identical to what `tools\dos-pack.ps1` stages. What is
left is Task 6 — the documentation and verification pass (DOSBox runs for every seam, the remaining
docs, the gate wiring of the extraction check).

---

## Task 1 — pointer state and coordinate mapping in `dos_main.c`

**State: done (2026-11-16).** The pointer state, mapping, per-frame drive, title hook and all the
per-screen seams below are in `dos_main.c`; the map's cursor/scrolling and the seam's inertness
before the pointer moves were measured from a RAM dump (see "Done" at the end of this task). The
room, phone, menu-hover and aim seams are installed but have no DOS measurement yet — their
Windows checks (`pointer-check.ps1`, `aim-check.ps1`, `crosshair-check.ps1`) use `--poke` /
recordings the DOS front end does not carry.

**Goal:** the front end turns the platform mouse into the same `g_ptrKnown / g_ptrActive /
g_hoverOwn / g_ptrX / g_ptrY` state the Windows seams use, maps VGA pixels onto the presented
picture, and drives the pointer once per frame.

**Files:** `src\host\dos_main.c` (copy the constants and seam code from `src\host\main.c`).

### Coordinate rule (important)

`plat_pump` reports the INT 33h position in **mode 13h pixels** (0..319 × 0..199). The game picture
can be larger (`rt_gfx_width()`/`rt_gfx_height()`: 320×200 normally, 368×216 for the chicken race's
narration page); `dos_present` fits a larger picture into the fixed mode with
`x * w / 320`, `y * h / 200` and puts a smaller one in the top-left corner.

* The **title menu** draws straight into the 320×200 platform framebuffer, so it takes the raw
  pointer position: `title_play` already passes `in.mouse_x`/`in.mouse_y` unchanged. Do not map it.
* The **game seams, save picker and pointer overlay** live in the runtime picture, so map:
  `g_ptrX = w > 320 ? in.mouse_x * w / 320 : in.mouse_x` (same for y with 200); clamp to the
  picture. The overlay (`rt_pointer_at`) is then sampled into VGA by `dos_present`, putting the
  arrow's tip under the physical pointer.

### Per-frame state (in `dos_input`, which is `m.on_frame`)

Port `pointer_input`'s rule: a held direction wins (`g_ptrActive = g_hoverOwn = 0`), a reported
movement claims the pointer (`g_ptrKnown = g_ptrActive = g_hoverOwn = 1`). `in.mouse_moved` is
already the platform's "position changed since the last pump". Then:

* call `aim_input(m, moved, joy != 0 || m->joy0 != 0)`;
* clear `g_ptrActive` when neither the map's nor the phone's script ran within
  `MAP_IDLE_FRAMES` (the next screen starts with the game's own placement);
* call `pointer_present(m)`;
* make the save picker own input (Task 2).

### Entry hook (`dos_entry`)

Extend the existing `dos_entry` (installed only in a played run, like the cheat) with the Windows
`host_entry` answers, in this order:

| pc | seam |
|---|---|
| `0x00000AAA..0x00000FA2` etc. | `load_pc` → `g_loadSeen = m->frame` (Task 3) |
| `host_hospital_camera_entry` | already there |
| `host_save_button_entry` | already there |
| `0x00004D76` (`FUN_00004d76`) | `line_record` — one text-menu line, its rectangle and entry |
| `0x0001D1DA` (`FUN_0001d1da`) | `menu_flip` — pointer's line becomes the menu's selection |
| `0x00003B1E` (`FUN_00003b1e`, map script) | `map_pointer` — map cursor, scrolling, save-mark hover (currently only used to set `g_mapFrame` for Ctrl+T) |
| `0x0001061C` (`FUN_0001061c`, map tail) | `save_mark_click` (Task 2) |
| `0x00005FBE` (`FUN_00005fbe`, phone update) | `phone_pointer` |
| `0x00007934` (`FUN_00007934`, ant fight) | `g_antFrame = m->frame` |
| `0x000086A0` (`FUN_000086a0`, fight trigger) | `aim_shot` |
| `0x0000B97C` (`FUN_0000b97c`, extinguisher) | `g_fireFrame = m->frame; aim_spray` |
| `0x00005EAC` / `0x00005824` | `g_roomFrame = m->frame` |

`host_time_freeze_map_pc` is already checked first; keep it, and let `map_pointer` set
`g_mapFrame` too (it must not return early before the map seam runs).

### Frame boundary (`dos_frame`, `rc_frame_hook`)

`dos_frame` wraps `oracle_tick`, and `oracle_tick` calls `rt_frame_present` (which runs
`dos_present`) **before** `m.on_frame` (`dos_input`) and before the engine's interrupt servers.
So anything that must be inside the presented frame goes **before `oracle_tick`**:

* `host_time_freeze_frame` (already there);
* `crosshair_present` — reads the aim words and places `rt_crosshair_at` (Task 1);
* `loading_frame` — arms the OSD line (Task 3).

**Acceptance:** a DOSBox window with a mouse, on the situation map: moving the mouse moves the
map's own cursor, pushing past the window edge scrolls, holding a direction yields to the stick;
the room screens show the game's arrow; hovering a text-menu line selects the same entry the stick
selects. A headless `--frames` run without a pointer keeps the game's own cursor words in a run
whose pointer never moves (a whole-RAM identity does not hold between a measurement and a played
run — see Known traps). Do not claim a picture as proof: read the map
cursor words (`0x28A54/0x28A58`), the picture offset (`0x28A4C/0x28A50`) and the menu's stack
selection (`A5-6` / `A5-4`) out of a RAM dump, or compare frame records.

### Done (2026-11-16)

What landed, all in `src\host\dos_main.c`:

* `g_ptrKnown/g_ptrActive/g_hoverOwn/g_ptrX/g_ptrY`, `ptr_set` (mode-13h position → picture
  position: `x * w / 320`, `y * h / 200` for a larger picture, clamped), `pointer_input` and
  `pointer_script_tick` with the Windows ownership rule (a held direction wins, a reported
  movement claims the pointer).
* `host_title_pointer`: the title menu's own loop gets the `--mouse` script (raw 320×200
  coordinates, as it draws straight into VGA) and otherwise leaves `plat_pump`'s real pointer
  alone. The DOS title menu, Load Game list and Settings view are therefore operable.
* The entry-hook seams: `map_pointer` (`FUN_00003b1e`, with the SAVE GAME mark's hover clamp),
  `line_record`/`menu_flip` (`FUN_00004d76`/`FUN_0001d1da`), `phone_pointer` (`FUN_00005fbe`),
  `g_antFrame`/`crosshair_present` (`FUN_00007934`, placed before `oracle_tick`), `aim_shot`
  (`FUN_000086a0`) and `g_fireFrame`/`aim_spray` (`FUN_0000b97c`), plus `g_roomFrame` from
  `FUN_00005eac`/`FUN_00005824`.
* `g_portArm`: a played run **or** `--mouse`. The hook is installed for that or for `--cheat`; a
  measurement (`--frames`, `--call`, `--dump`, `--shot`) installs nothing.

**Measured** under DOSBox (`tools\dos-run.ps1`), with the live map reached by the same injection
the Windows check uses (`--call 0x951C:300:0x200:0x83B8` — install the clock VBI, return into the
world loop), `--frames 700 --noaudio`, RAM dump at frame 600:

| run | cursor `0x28A54/58` | picture origin `0x28A4C/50` | location `0x28A3A` |
|---|---|---|---|
| plain (no `--mouse`) | 178, 119 | −153, −121 | 23 |
| pointer `(20,20)` at frame 550 (inside the travel window) | **37, 38** = pointer + hot spot `0x11/0x12` | −153, −121 (unchanged) | 23 |
| same run, pointer pushed to `319,100` at frame 570 (past `0x136`) | **310, 118** = the window's right edge, clamped | **−207**, −121 (−54 px = 9 map updates × the seam's 6) | 23 |

`--hoverlog` shows the seam acting on the map's own script: `map pointer 20,20 -> cursor 37,38
(frame 551)`, `map pointer 319,100 -> cursor 310,118 (frame 571)`. All three runs agree that the
pointer never picks a destination by itself (location 23 everywhere).

A first attempt put the script's only position at frame 400, before the map's script runs; the
pointer was claimed and cleared again within `MAP_IDLE_FRAMES`, so the dump showed the game's own
cursor. That is the Windows rule working ("a pointer that has not moved since the map opened leaves
the cursor where the game put it"), and it is why a DOS pointer script must move **while** the
screen's script is running.

The room/menu/phone/aim seams returned no DOSBox measurement yet; they are the same code as the
Windows seams and the next session should measure them with the same `--dump` reader (a room can be
reached from the map with a scripted pointer click, as the Windows travel test does).

---

## Task 2 — the map's save-slot picker on DOS

**State: done (2026-11-16), measured end to end** (see "Done" at the end of this task).

**Files:** `src\host\dos_main.c`, `src\host\save_ui.c` (already built into the DOS target).

Port the Windows state machine from `src\host\main.c`:

* `save_click_note` (a click on the mark is remembered for `SAVE_CLICK_FRAMES`);
* `save_fake_view` and `save_mark_click` (the picker opens at `FUN_0001061C`'s entry, right before
  the map's own click test; a chosen slot puts the map's own fire word back for one update);
* `save_owns_input` (picker open, save pending, or the click that closed the picker still held);
* `map_pointer` must clear the map axes and fire and return while the picker owns input;
* `save_ui_frame` (pointer hover + click: Back closes, a slot sets `m->saveSlot` and closes);
* `save_ui_watch` (close the picker if the map left);
* Escape closes the picker first, otherwise it restarts the game (as Windows does).

**Drawing:** add `save_ui_draw(m, &g_saveUi)` in `dos_present` before the copy to VGA. It calls
`rt_overlay_begin`, so it writes into the runtime framebuffer and the next present recomposes the
planes; the pointer arrow is drawn last by `save_ui_draw`. Install the portrait-box/overlay palette
the same way Windows does (`save_ui_draw` does it itself through `rt_overlay_palette`).

**Acceptance:** from the map, click the SAVE GAME mark → picker opens and the map stops (axes and
fire are zero for those updates); Back resumes with the map following the pointer; a slot click
writes the engine's own save to `SAVES\SLOT<N>\ICFTD` (12 444 bytes). Log lines are the measurement
(`save: slot picker opened`, `save: save slot N selected`, `save: writing slot N`). A run without a
pointer logs none of it and its RAM dump is unchanged.

### Done (2026-11-16)

What landed, all in `src\host\dos_main.c`: the Windows state machine verbatim — `SAVE_CLICK_FRAMES`,
`save_click_pending`, `save_owns_input`, `save_click_note`, `save_fake_view`, `save_mark_click`
(seam `FUN_0001061C`, `MAP_EVENT_PC`, `MAP_FIRE_HELD`, `MAP_PANEL`), the map-freeze branch in
`map_pointer` (axes + fire zero, `s_fakeView` restore), `save_ui_frame`/`save_ui_watch` in
`dos_input`, Escape closes the picker before it restarts the game, the picker owns the F-key slot
choice while it is up, `save_ui_draw(m, &g_saveUi)` in `dos_present` before the copy (and before
`--shot`), the picker's arrow branch in `pointer_present`, and a full reset on the title's restart.

Also added, because the acceptance needs the engine's *prompt* to be answered headlessly:
`--input <file>` (the same `frame fire joy0` script as `src\host\main.c`, loaded through
`src\oracle\input.c`; while one is active it owns fire and the stick, exactly as on Windows — the
platform keyboard is ignored, which is correct for a scripted run and surprising when a human
presses keys into a test window).

**Measured** under DOSBox (`tools\dos-run.ps1`), live map via the Task 1 injection
(`--call 0x951C:300:0x200:0x83B8`), map words read from the `--dump` RAM at image base 0x4000 +
0x28A54/58 (cursor) and 0x28A4C/50 (picture origin):

| run | frame | cursor `0x28A54/58` | origin `0x28A4C/50` | log |
|---|---|---|---|---|
| pointer over the mark, click at 560 | 620 | 307, 195 (mark hover clamp) | −153, −121 | `save: slot picker opened (10 slot(s)) at frame 560` |
| same run, pointer moved to 20,20 at 700 (picker up) | 720 | **307, 195** | −153, −121 | map frozen: axes and fire zero, no map log |
| plain run (no `--mouse`), same injection | 720 | 178, 119 (the game's own cursor) | −153, −121 | no `save:` line at all |

Back (`BACK.MOU`, click at 640, pointer to 40,40 at 800): `save: slot picker closed (frame 640)`,
the map resumes at 663 and the dump at 900 reads cursor **57,58** = pointer + 0x11/0x12.

Slot 10 (`SLOT.MOU` click at 640, `SLOT.INP` holding up from 700 and pressing fire at 1900, world
loop entered so its own save section runs): `save: save slot 10 selected (frame 640)`,
`save: writing slot 10 (frame 643)`, then the engine's own prompt (`FUN_0001042a` →
`FUN_000101e4`) is answered at frame 1930 and writes `SAVES\SLOT10\ICFTD` = **12 444 bytes**
(`recomp: saved 12444 byte(s) to slot 10`); the world loop then reloads the map (`desert.dat`,
`DES4:ANI`) and the run finishes its 2 000 frames normally. Returning straight into the prompt
instead (`--call 0x951C:300:0x1442A:0x83B8`) saves the same 12 444 bytes at frame 830.

The prompt is the original's and is not a pointer screen: **W (up) selects YES, the default is NO,
and Space or the left button confirms.** A headless run therefore has to schedule the press in
`--input`; a human pressing keys into such a window sees a frozen box because the script owns fire.

---

## Task 3 — the loading line on DOS

**State: done (2026-11-16), measured** (see "Done" at the end of this task).

**Files:** `src\host\dos_main.c`.

Port from `src\host\main.c`:

* `g_loadRanges` and `load_pc` (image offsets: `0xAAA..0xFA2`, `0x1EC42..0x1F03E`,
  `0x2011A..0x201D4`, `0x20204..0x202C4`, `0x202C4..0x204FA`, `0x204FA..0x20518`,
  `0x20518..0x205E6`, `0x205E6..0x207F0`);
* `g_loadSeen/g_loadStart/g_loadOn/g_loadShown/g_loadHold/g_loadHoldSeen`;
* `loading_frame` (call it in `dos_frame` before `oracle_tick`);
* `host_loading_hold` — the DOS version currently does nothing; make it arm the 10-second hold and
  `rt_osd_text(m, "Loading", 2)` exactly like Windows, because `title.c` already calls it when the
  title answers the engine's load screen.

The OSD is drawn by the shared runtime (`display.c`, `osd_draw`) and `dos_present` copies the
framebuffer, so nothing platform-specific is needed.

**Acceptance:** a DOSBox run through a map→room transition logs `loading` a couple of thousand
frames in and `loading done` after the new screen appears; the world-loop intro transition gets the
line from `host_loading_hold` on the prompt frame. A run that never plays (no hook) logs no line and
its RAM dump is unchanged.

### Done (2026-11-16)

What landed, all in `src\host\dos_main.c`: `g_loadRanges` and `load_pc`; the `load_pc(pc)` entry
hook (`g_loadSeen = m->frame`, checked after the cheat and before the screen seams, as on Windows);
`g_loadSeen/g_loadStart/g_loadOn/g_loadShown/g_loadHold/g_loadHoldSeen`; `loading_frame` called in
`dos_frame` before `crosshair_present` and `oracle_tick`, so the line is composed by the present
inside the tick; `host_loading_hold` replacing the DOS stub — behind `g_portArm` it arms the
500-frame hold and `rt_osd_text(m, "Loading", 2)`, exactly as `src\host\main.c` does, which is what
`title.c` already calls on its prompt break and its intro skip; and the restart reset of the six
words. The line is the runtime's own OSD, so `dos_present` needed no change.

**Measured** under DOSBox (`tools\dos-run.ps1`), headless with `--noaudio`; the log's edges are
`loading: loading (frame N)` / `loading: loading done (frame N)`:

| run | what the loader was doing | line |
|---|---|---|
| `--frames 4000 --call 0x951C:300:0x200:0x83B8 --mouse TRAVEL.MOU` | boot: OPEN, then the boot scene's script | up 42, down 136 |
| the same run, the injected world loop | `DES4:ANI` picture bank, then the map | up 387, down 447 (the mark was placed at 441) |
| `--frames 1500 --titlekey 11` (Load Game) | the title's hold at the intro skip/load prompt (frame 37), then `desert.dat` + `ANI` | **up 37** (the hold, on the prompt frame), down 403 |
| `--frames 700 --call …` (plain, no `--mouse`) | the same work with no seam installed | no line at all |

The third row is the second acceptance: `title: skipping the intro (frame 37)` /
`title: loading the selected save slot (frame 37)` → the line at 37, i.e. on the prompt frame rather
than four hundred frames later when the loader's own detection would reach it, and it gives way at
403 when the screen it waited for is up.

**One caveat, which also explains the Task 1 mystery.** An *armed* DOS run's `--dump` is not
byte-identical to a plain measurement's: frame 600 of the runs above differs in 845 bytes of chip
RAM (8-byte records at a 0x2A stride, the shape of the engine's own move-node structures), while the
map's words agree (cursor 178,119; origin −153,−121; location 23), and two plain runs are
byte-identical to each other as are two armed runs. The cause is the *run*, not the line: an armed
run is a played run, so the port's map-mark seam places the SAVE GAME mark's node at the screen
corner (`save: the map's SAVE GAME mark is pinned to the screen's corner (frame 397)`) and the
engine's node list follows it. The loading seam itself is host OSD state only, so its inertness is
measured by the log (a plain run logs no line) — the DOS front end has no frame recorder to isolate
the line from the other seams a played run installs.

---

## Task 4 — first-start extraction into the DOS 8.3 layout

**State: done (2026-11-16), measured as a byte identity in DOSBox.**

**Files:** `src\runtime\assets.c`, `src\runtime\assets.h`, `src\host\dos_main.c`,
`src\host\main.c`, `tools\build-dos.ps1`, `tools\dos-extract-check.ps1`, docs.

Windows calls `rt_assets_ensure(dataDir, diskDir, RT_ASSETS_WINDOWS, ...)` and gets `disk1..3` +
`code\dshell4k\dshell.img`. The DOS release is a different layout and cannot hold long names. It
ships **no game data** — `tools\dos-pack.ps1` stages `ICFTD.EXE`, an empty `DISKS\`, an empty
`SAVES\` and `ICFTD.CONF` — and the first start writes:

```
ICFTD.EXE
DISK1..3\        the three extracted filesystems (8.3 names)
DSHELL.IMG       the game program flattened at 0x4000
NAMES.TXT        ; long name = DOS 8.3 name, loaded from plat_exe_dir()
SAVES\           the ten save slots
ICFTD.INI        created on first start
```

### Required changes

1. **A layout parameter** on the asset API (e.g. an enum or a second entry point), so the same OFS
   reader/hunk flattener writes either the Windows export tree or the DOS release tree. Do not
   fork the extractor.
2. **Completion test (DOS):** `DISK1`, `DISK2`, `DISK3` directories, `NAMES.TXT`, and `DSHELL.IMG`
   at `dataDir`; write the image **last** so an interrupted extraction is not "ready" (the Windows
   test already relies on that ordering).
3. **8.3 names:** shorten each file name exactly like `tools\dos-pack.ps1`:
   * split at the last dot into base and extension, uppercase both;
   * truncate the base to 8 characters, the extension to 3;
   * a collision retries `stem~1`, `stem~2`, … with the stem truncated to 6 characters, unique per
     directory;
   * record `UPPERCASE(long name)=SHORT` in a map; if one long name maps differently in two
     directories, keep the first mapping and warn (same behaviour as the packer).
   * Directory names in the extracted tree are already 8.3 (`code`, `dshell4k`, `disk1`, `fonts`,
     `newnem`, `libs`, `sfx`, `devs`, `l`, `s`, `c`), but validate and fail loudly otherwise.
4. **`NAMES.TXT`:** write it at `dataDir` with the packer's header line
   (`; long name = DOS 8.3 name, for the files MS-DOS could not hold`) and sorted `long=short`
   lines. It must be written before the image (completion marker).
5. **`dos_main.c`:** before `rt_load_image`, resolve `dataDir` (exe dir by default), `disks`
   (`<exe dir>\disks`; `--disks` override) and the image (`<dataDir>\DSHELL.IMG`; `--image`
   override). Call the DOS layout ensure. On `RT_ASSETS_NO_DISKS`/`FAILED`, print the existing
   message (`Please put the three original 'It Came from the Desert' disk images in the 'disks'
   folder and restart.`) and stop with exit code 1; add `--extract` to fill the folder and exit.
6. **Fix the image default:** the current `dos_main` uses `<exe dir>\DSHELL.IMG` even when
   `--data` points elsewhere. Make it `<dataDir>\DSHELL.IMG`, so a development run with
   `--data Y:\export` still works (and use the extracted image when it exists).
7. **Runtime volume lookup:** `machine.c` looks for `<dataDir>\disk%d` and FAT is
   case-insensitive, so `DISK1..3` is fine. `plat_dos.c`'s `NAMES.TXT` retry already reads
   `plat_exe_dir()\NAMES.TXT`; in a release dataDir == exe dir.

### Acceptance (this is a byte identity, not a picture)

* From an **empty** release folder plus the three ADFs, a first start writes exactly the tree
  `tools\dos-pack.ps1 -Data <dir>` stages: every file byte-identical (hash per file, path with 8.3
  names), the same `NAMES.TXT`, and a 185 752-byte `DSHELL.IMG` at the root.
* A second start does nothing (no rewrite, no message).
* An empty `disks\` prints the message and exits 1; the same disk copied twice is refused before
  anything is written (the volume set is incomplete).
* A headless run from the extracted release folder produces the same frame/`--dump` output as a run
  from the reference tree.

**Simplest verification:** add `tools\dos-extract-check.ps1` that runs the DOS build with
`--extract` in a scratch DOSBox mount, then compares the result against the tree the packer stages
for it (`-Data`, excluding `ICFTD.EXE`, `SAVES`, logs and the DOSBox config). This can become a gate
step later, but is not required for every change.

### Done (2026-11-16)

What landed:

* `assets.h`: `RT_ASSETS_WINDOWS`/`RT_ASSETS_DOS` and the layout argument on `rt_assets_ready` and
  `rt_assets_ensure` — one reader, one flattener, two trees. `src\host\main.c` passes the Windows
  layout; nothing else about the Win32 first start changed.
* `assets.c`: the DOS branch of `extract_dir` walks a directory's hash table twice (folders first,
  then files) so a folder's name is in the directory's name space before files are named past it —
  exactly what the packer does. `short_name` is `Get-ShortName` character for character: split at
  the last dot, uppercase, cut a base over 8 to 6, truncate the extension to 3, then `stem~n` until
  free. A folder name that is not 8.3 fails loudly (`RT_ASSETS_FAILED` with the name in the
  message) instead of writing a folder the game could never open again. `record_name` keeps the
  first mapping and reports a second, like the packer. `write_names` writes the packer's header and
  sort order — PowerShell's `Sort-Object` gives `-`/`.` no weight, so `DISK-VALIDATOR` comes *after*
  `DISKFONT.LIBRARY`; an ASCII sort would not reproduce the file. Byte output is CRLF, like
  `Set-Content -Encoding ascii`. `rt_assets_ready(DOS)` wants `DISK1..3`, `NAMES.TXT` and
  `DSHELL.IMG`; `NAMES.TXT` is written before the image, so the image stays the completion marker.
  The three disk images are now closed at the end of the ensure: a first start extracts and then
  boots in the same process, and the DOS file handles are what the engine's own opens come from.
* `dos_main.c`: `--data`, `--disks`, `--image`, `--extract`; `dataDir` defaults to the executable's
  own folder, `disks` to `<exe dir>\disks`, the image to `<dataDir>\DSHELL.IMG` (with a
  `code\dshell4k\dshell.img` export tree accepted, so `--data Y:\export` still runs). A missing
  image runs the DOS ensure and, when that fails, prints the message and exits 1.
* `tools\build-dos.ps1` compiles `assets.c` (the DOS build did not link the extractor at all).
* `tools\dos-pack.ps1` now stages the release as it ships — `ICFTD.EXE`, an empty `DISKS\` and
  `SAVES\`, `ICFTD.CONF` — instead of the extracted tree; `-Data <dir>` stages that tree from
  `export\`, which is the reference the check compares against (the naming rules stay in one
  place). `play_dos.cmd` mounts the repository's `disks\` and passes `--disks`, `tools\dos-run.ps1`
  defaults to `--disks Y:\disks`, so both keep working from a freshly staged, empty release.
* `tools\dos-extract-check.ps1`: the measurement — see below.

Measured (DOSBox, `tools\dos-extract-check.ps1`, 300-frame dumps):

| claim | result |
|---|---|
| first start from an empty release folder + the three ADFs | 78 files, 11 renamed names, 185 752-byte `DSHELL.IMG`; **every file byte-identical** to the packer's `-Data` tree (SHA-256 per path), same 314-byte `NAMES.TXT`, same image |
| a second start | no `assets: extracting` line, every file's hash unchanged |
| an empty `disks\` | the message, exit code 1 (through the DOS shell's `errorlevel`), no `DISK1..3`/`NAMES.TXT`/`DSHELL.IMG` |
| the same image twice | refused before writing anything (no extracting line, no tree) |
| headless run from the extracted tree vs the packer's `-Data` tree | `--frames 300 --dump` RAM images **identical** |
| a first start that extracts and then boots (one process) | the same 300-frame RAM image as the staged release |

The Win32 first start still produces its documented tree: `--extract --data <scratch> --disks disks`
writes the same 78 files and 185 752-byte `code\dshell4k\dshell.img` (the only differences against
`export\` are the Ghidra artefacts `tools\extract.ps1 -RunGhidra` writes, which the runtime never
did), and `tools\build-host.ps1` links both front ends.

---

## Task 5 — headless test seams so the DOS features can be measured

**State: done (2026-11-16).** `--mouse <file>`, `--shot <bmp>` and `--hoverlog` are in
`dos_main.c`, and `--call` now parses the fourth field (return address). The installed-hook
condition is the cheat's with `|| g_mousePath != 0` added, i.e. a `--mouse` run is a played run's
headless form (exactly what `--cheat` is for the cheat); `--frames`, `--call`, `--dump` and
`--shot` alone still install nothing.

The Windows checks drive pointer features with `--mouse <file>` (`<frame> <x> <y> [<button>]`) and
sample screens with `--shot`. The DOS front end has neither. Without a seam, a DOS feature can only
be checked by a human in DOSBox, which the project's rules reject as proof.

Add to `src\host\dos_main.c`, as developer flags (never required for a shipped launch):

* `--mouse <file>`: parse the same format as `src\host\main.c` (`HOST_MOUSE_MAX` positions), and
  when a script is loaded use it instead of the platform mouse (the platform mouse keeps working
  when no script is given). This feeds the same `g_ptrX/g_ptrY/g_ptrButton` state the seams read.
* `--input <file>` (added for Task 2): the same `frame fire joy0 [joy1]` script as
  `src\host\main.c`, loaded with `input_load` from `src\oracle\input.c` and applied by the shared
  `oracle_tick`. While one is active `dos_input` returns right after the pointer block, so the
  script owns fire and the stick and the keyboard only quits — the Windows rule. Needed because the
  engine's own save prompt (`FUN_000101e4`) waits for stick + fire.
* optionally `--shot <bmp>`: the same 24-bit BMP writer as `main.c`, called from `dos_present`
  after `save_ui_draw`; useful for the picker/OSD/title, but machine state remains the acceptance.
* `--hoverlog`/`--savelog`/`--cameralog`-style logging where the port already has it; add the
  `save:`/`loading`/pointer log lines the Windows seams print, with an `icftd:` prefix if desired.

Keep the installed-hook condition identical to the existing cheat condition:
`((frameLimit == 0 || titleKey >= 0) && g_callPc == 0 && g_dumpPath == 0) || g_cheatFrame != 0`.
A measurement (`--frames`, `--call`, `--dump`) must not install the seam.

---

## The frame reaches the display as one frame (2026-11-16)

Asked for: the title menu's buttons and the Quit Game notice's white text flicker on DOS.

**The divergence.** Since `6d50d03` the DOS layer hands video memory out as the framebuffer
(`plat_framebuffer()` returned `0xA0000`) and `plat_present()` did nothing, so every partial state
of a compose is on the display while it is drawn: `title_draw` lays the art down first and the
buttons last, so a frame caught in between shows the picture with no buttons at all, and
`title_notice_draw` clears the screen black and then draws two lines, so a frame caught in between
shows one line or none. The Win32 build never had this: it composes into a DIB - or, since
`docs\display-rate.md`'s phase 3, into a texture the presenter draws in one frame - and the window
sees one complete frame per present (`plat_win32.c`).

**The fix, in the present backend only** (port code: the original has no such surface). `g_screen`
is the frame `plat_framebuffer()` hands out; `plat_present()` writes video memory exactly once, with
one `memcpy` of the finished 64 000-byte frame. The palette follows the same rule: `plat_set_palette`
now notes the colours in `g_pal` and `plat_present` programs the DAC for the entries that changed,
just before the copy. That also closes a real-hardware-only fault on the title: `title_draw`
installs the art's whole 256-entry table every frame and then the menu's pens (233..238, 246..247,
250..255) over it, and a DAC write is the one change a running display shows at once - the buttons
flashed black for the ~50 µs between the two calls, every frame. Staged, the table reaches the DAC
once, as the state the frame was drawn with.

**Measured by sampling the displayed window** (the notice is a static picture, so *any* difference
between two samples of it is the defect). DOSBox window sampled ~50 times a second across the
notice, A/B on the same sources: the old build's samples differ from each other - white-pixel counts
19 598 / 18 598 / 18 086 / 19 102, and the saved PNG of a low sample is missing the second line
("Available on Steam and itch.io"); the fixed build's samples are identical, 24 811 white pixels in
every one of ~190 samples, from the first notice frame to the last. Machine state is untouched (the
presenter is the only code that changed): `ICFTD.EXE --titlekey 14 --mouse CLICKS.TXT` still logs
`showing the notice for 500 frame(s) (frame 40)`, `closing after 500 frame(s) (frame 540)`, 525
rasters, and the title menu still runs to its script bound (624 frames).

---

## Task 6 — verification and documentation (when the code is in)

* `tools\build-dos.ps1` (compile), `tools\build-host.ps1` (shared files), and the default
  `tools\gate.ps1` (translation core) after any shared runtime change (`assets.c`, `platform.h`,
  `config.c`, `display.c`).
* DOSBox runs for each feature, with the seams driven headlessly: map pointer, room pointer,
  crosshair/aim, save picker, loading line, title settings/load list/quit notice.
* `docs\port-features.md`: replace every "DOS front end has no pointer / installs no seam" note with
  the DOS behaviour and its measurement; add the DOS first-start section.
* `docs\next-session.md`: a short dated section pointing here and recording what landed.
* `README.md`: the MS-DOS build section gains the mouse controls, the title menu, the save picker,
  the loading line and the empty-folder first start; the controls paragraph is shared with Windows.
* `src\runtime\README.md`: `assets.c` now has two layouts; the DOS layer has a mouse.
* `docs\savegames.md`: the picker is now on DOS too.
* `tools\dos-run.ps1`/`dos-pack.ps1` docs if the release layout changes.

---

## Order of work (dependencies)

1. **Task 0 — DOS mouse driver** — *done*.
2. **Task 1 — pointer state + seams** — *done* (map measured; room/menu/aim seams installed).
3. **Task 2 — save picker** — depends on Task 1 (map seam + click state). *Done.*
4. **Task 3 — loading line** — independent of 1/2. *Done.*
5. **Task 4 — first-start extraction** — independent of 1/2/3; needs `assets.c` and `dos_main.c`.
   *Done, measured as a byte identity.*
6. **Task 5 — `--mouse`/`--shot`/`--input` seams** — *done* (before Tasks 1–3, as planned; `--input`
   added with Task 2).
7. **Task 6 — verification + docs** — after all. **Next.**

A sensible split over sessions:

| session | work | leaves |
|---|---|---|
| A | Task 5 + Task 1 | *done*: pointer works live and headless; map/room/phone/aim/crosshair seams installed, the map's cursor and scrolling measured |
| B | Task 2 + Task 3 | *done: picker and loading line* — picker opens, freezes the map, Back restores it, the chosen slot reaches the engine's 12 444-byte save; the line covers the boot, world-loop and title-hold loads |
| C | Task 4 | *done: first start* — an empty release folder extracts itself; the tree is byte-identical to the packer's `-Data` staging and boots the same machine |
| D | Task 6 | docs and full DOSBox checks |

---

## File map / where things live

| concern | file |
|---|---|
| DOS front end (the game; dev flags `--frames`/`--call`/`--dump`/`--mouse`/`--shot`) | `src\host\dos_main.c` |
| Windows front end (the source of every seam) | `src\host\main.c` |
| Shared port features | `src\host\cheat.c`, `time_freeze.c`, `hospital_camera.c`, `save_button.c`, `save_ui.c`, `title.c`, `title_button.c` |
| Platform contract | `src\runtime\platform.h` |
| DOS platform (VGA, keyboard, now mouse) | `src\runtime\plat\dos\plat_dos.c` |
| First-start extractor (both layouts) | `src\runtime\assets.c` / `.h` |
| DOS release staging (empty `DISKS\`/`SAVES\`, `ICFTD.CONF`) | `tools\dos-pack.ps1` |
| Extracted 8.3 tree (naming rules, the check's reference) | `tools\dos-pack.ps1 -Data <dir>` |
| DOS run harness | `tools\dos-run.ps1` |
| DOS first-start check (DOSBox) | `tools\dos-extract-check.ps1` |
| DOS add-on check — both builds, menus, shared saves (DOSBox) | `tools\dos-ant-check.ps1` |
| Build | `tools\build-dos.ps1` (object dir `bin\dos\obj`) |

## Known traps

* **Frame order:** `oracle_tick` presents *before* `m.on_frame`. Crosshair/loading/freeze go in
  `dos_frame` before `oracle_tick`; `save_ui_draw` goes in `dos_present`; pointer input and
  `pointer_present` go in `dos_input` (one frame later is correct and matches Windows).
* **The title is not the runtime picture.** It draws into `plat_framebuffer()` at 320×200 and takes
  raw INT 33h coordinates. Only the game seams and `save_ui` use mapped picture coordinates.
* **`rt_overlay_begin` writes the runtime framebuffer**, not the screen. A host surface
  (title/picker) writes to `plat_framebuffer()`; a runtime overlay (pointer/crosshair) writes
  through `rt_pointer_at`/`rt_crosshair_at`/`save_ui_draw`. Neither is video memory: on DOS
  `plat_framebuffer()` is a staging frame and only `plat_present` writes VGA (see "The frame reaches
  the display as one frame" below).
* **INT 33h under 32-bit Watcom:** `int386`, `r.x.eax`; see the trap above. `plat_init` calls
  `mouse_init()` after the mode set. If no driver is present, `mouse_present` stays 0 and every
  seam must stay inert — that is the DOSBox `sbtype=none`-style fallback.
* **8.3 naming is per directory.** The packer's map is keyed by the uppercased file name and ignores
  the directory; reproduce that exactly so `NAMES.TXT` is identical. The image is written last.
  Two details bite: a folder's name is reserved *before* the directory's files are named (hence the
  two passes over the hash table in `extract_dir`), and the map is sorted with PowerShell's
  `Sort-Object` rules — `-` and `.` carry no weight, so a plain ASCII sort produces a different
  `NAMES.TXT`: it puts `DISK-VALIDATOR` before `DISKFONT.LIBRARY`, the packer puts it after.
* **A DOS dev run points `--data` at the export tree.** The image default is `<dataDir>\DSHELL.IMG`,
  so `--data Y:\export` falls back to `Y:\export\code\dshell4k\dshell.img` when that exists rather
  than extracting; without the fallback the run would ask for `Y:\export\DISK1` and stop. `disks\`
  for such a run is still next to the executable.
* **The DOS shell's exit code is only visible through `if errorlevel`.** `tools\dos-run.ps1` takes
  one autoexec line, so a check that needs the code writes its own DOSBox config with several lines
  (`tools\dos-extract-check.ps1`); a batch file run as the last autoexec line leaves DOSBox hanging.
* **A console write is a screen write.** In mode 13h INT 10h teletype draws the BIOS glyphs into
  video memory and scrolls it, so every `printf` (the front end's, the platform's or the runtime's)
  damages the picture. `plat_quiet_console()` runs first in `dos_main.c` and binds the console to
  `NUL`; the OSD (`rt_osd_text`) is picture data and is unaffected. A redirected stdout is not a
  character device - INT 21h AH=44h reports bit 7 of DX - so `> ICFTD.LOG` keeps every diagnostic
  line the checks read. Do not "restore" the start banner or the run summary: a played DOS run
  prints nothing.
* **Do not gate a fix behind a flag.** The seams must be installed in a normal played launch; the
  existing played-run condition in `dos_main.c` is the model. A measurement run must not install
  `rc_entryHook`.
* **Keep a DOS test invocation compact.** One Autoexec line of 153 characters arrived truncated
  (the `--dump` path came through as `C:\BASE6`), so a `tools\dos-run.ps1 -Autoexec` command must
  stay short: run from the exe's own directory so the image can default, mount the export tree as
  `Y:`, and keep dump names 8.3 (`C:\P600.BIN`). A `--mouse` script path is the longest argument —
  put it in the mounted `C:` under an 8.3 name (`MAP.MOU`). 142-character lines have arrived whole;
  do not rely on much more.
* **A pointer script must move while the screen's script runs.** The `MAP_IDLE_FRAMES` rule clears
  `g_ptrActive` on a frame with no map/phone script, so a position applied at frame 400 (before the
  injected world loop has reached the map) is discarded and the map opens with the game's own
  cursor. Move at a frame the screen is demonstrably live (550 in the injected map above).
* **Read the words the seam claims, not the whole RAM.** A plain DOSBox run and an *armed* one
  always differ in ~845 bytes of chip RAM (8-byte records at a 0x2A stride) even when the pointer
  never moves. It is settled now: that is the run, not host timing — two plain runs and two armed
  runs are each byte-identical, and the armed run's own log places the map's SAVE GAME mark at the
  screen corner (`… pinned to the screen's corner (frame 397)`), which moves the engine's move-node
  records. Every played run installs that seam, so a DOS armed/plain RAM identity can only prove the
  *other* seams inert, never the mark's; the loading line's inertness is the log (a plain run logs
  no line). The cursor/origin/location readings stay exact and causal.
