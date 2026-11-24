# It Came from the Desert — Amiga recompilation

Statically recompiling the 1989 Cinemaware game "It Came from the Desert" from its three original
Amiga floppy images: the original `dshell` binary (750 functions, 137 KB of 68000 code) is
translated to C and runs against a portable runtime we write. Targets: **Windows (32-bit PE, Open
Watcom)** and **MS-DOS** (VGA mode 13h, DOS/32A; being brought to full parity with the Windows
build — see [`docs\dos-parity.md`](docs/dos-parity.md)).

**No game data is in this repository.** The disk images are copyrighted, and so is everything
decoded from them (`assets/`, `export/`, `re/`, `ref/`); `.gitignore` keeps all of it out of git.
You supply the images; the tools decode them locally.

<a href="https://recomplauncher.com"><picture><source media="(prefers-color-scheme: dark)" srcset="https://recomplauncher.com/assets/press/launcher/badge-light.svg"><img alt="Get it on RecompLauncher" src="https://recomplauncher.com/assets/press/launcher/badge-dark.svg" height="48"></picture></a>

**How to play.** Take the three original Amiga disk images of *It Came from the Desert* (Disk 1, 2
and 3 — `.adf`, or any raw image of the three floppies) and do one of these two things:

* install the recomp from [RecompLauncher](https://recomplauncher.com) and point its setup at the
  folder that holds all three — the launcher runs the extraction for you and Play starts the game;
* or unzip the release anywhere, put the three images in the `disks\` folder next to
  `It Came from the Desert.exe` and start it: the first start extracts them into `export\` and
  boots, and later starts never look at `disks\` again.

## RULE 0 — a bug is a DIFFERENCE, never a symptom

Every fix is a diff against the original — for bugs of any kind: picture, sound, crash, hang, wrong
value, wrong speed, ignored input. Find the path the original takes, find the same path in our code,
close the gap. A change that only makes the symptom go away is rejected, even when all tests pass;
and a real fix never stays behind an opt-in flag. The one exception is code the original does not
have — save slots, OSD, the present/window backend, host input, our tooling. Full text:
[`.github/copilot-instructions.md`](.github/copilot-instructions.md) and the top of
[`docs/recomp-architecture.md`](docs/recomp-architecture.md); what a feature on that side has to show
instead is [`docs/port-features.md`](docs/port-features.md).

## The two phases

| phase | what it is | state |
|---|---|---|
| **A — run the original** | The real `dshell` image executing on the vendored Musashi 68000 core plus our own Amiga OS shims. This is the **oracle** (`src\oracle` + `src\runtime`): it is how we learn what the program actually does, and where the fixtures come from. A tool — the shipped game links no 68000 core. | **Done, frozen.** Boots, plays the intro, runs the game loop: 30M instructions reach frame 5823 with a raster presented every frame, 0 dropped blit writes. OS surface measured every run: **49 library calls used, 45 kinds implemented, 4 answered with 0** (`OpenDiskFont`, three IEEE single-precision ops). |
| **B — the product** | Static translation of the 750 functions into `src\recomp\fn_<addr>.c` + `fn_table.c` against a `cpu_t` context, `jsr (d16,A6)` → `os_call()`, computed jumps → table lookup with interpreter fallback. | **Done.** `recomp` emits **all 750 functions (121 362 of 121 362 bytes) plus all 51 blocks** of code the model does not cover; nothing is left for the interpreter, and the report has no refused entry. The differential is green: **263 of 263 fixtures verified, 0 skipped, 0 failed**. |

## How correctness is decided

Parity is **machine state**, never images:

```
D0-D7, A0-A7, SR, PC  +  custom-chip register file  +  hash of the full RAM image
```

compared at frame boundaries, driven by a frame-indexed input script.

* **Function level:** a translated function must equal the interpreter on the same fixture — all
  registers and the memory it touched — for pinned fixtures *and* seeded random ones.
* **Whole program:** the interpreted build and the translated build, given the same input script,
  must produce the same state hash at **every** frame boundary.
* **OS surface:** the call census must show no library call answered with `0`.

Validation scales with the change, not with the table: `tools\gate.ps1` runs the translation core
(builds + the two fixture layers), `-Full` adds the port's own scene checks, and `-Only <step>` runs
one of them. A change owes the measurement that covers it, not a whole-gate run.

**Frames, screenshots, WinUAE captures and image matching are retired.** They cannot cover a whole
game, and pixel-watching is the trial-and-error this project already paid for. If the machine state
matches, the visuals follow by construction; the only model left is planar→chunky + palette, which
is a pure function of RAM and is verified once with synthetic bitmaps.

The game never has to be *played* to be verified: coverage is measured with executed-function and
basic-block counters, and scenes are reached by calling the engine's own entry points (the MovE
label table), not by earning them.

## Quick start

```powershell
# 1. copy the three Amiga disk images into disks\   (see disks\README.md)
# 2. extract the filesystems and decompile
powershell -ExecutionPolicy Bypass -File tools\extract.ps1
powershell -ExecutionPolicy Bypass -File tools\ghidra\run-ghidra.ps1

# 3. gate: exporter build + oracle build + the two fixture layers (the translation core)
powershell -ExecutionPolicy Bypass -File tools\gate.ps1
#    -Full adds the port's own checks (presenter, title menu, settings, quit notice, pointer,
#    crosshair, aim, border, loading line, the Ctrl+W minigame cheat, the Ctrl+T clock freeze, the
#    hospital escape's camera, the WASD aliases, the gamepad, the art tables), -Only <step> runs one of them while working on that surface
```

## Running the original (Phase A)

```powershell
tools\build-oracle.ps1
bin\win32\icftd-oracle.exe export\code\dshell4k\dshell.img 0x4000 --run
#   space or left mouse = fire, esc or close = quit; runs at the Amiga's 50 Hz

# batch / scripted runs - always bounded, so a stuck model cannot hang the terminal
powershell -ExecutionPolicy Bypass -File tools\oracle-run.ps1 -Insns 30000000 -Progress
```

Flags worth knowing: `--progress` (counters every million steps), `--lvo` (library-call census),
`--press <frame>` / `--release <frame>` (scripted fire), `--doslog`, `--dfflog`, `--watch <pc>`,
`--dump <prefix> [n]` (BMP per presented raster), `--state <prefix> [--every n] [--ram <frames>]`
(canonical machine-state dump per frame boundary) and `--input <script>` (frame-indexed input:
`<frame> <fire> <joy0> [<joy1>]`). `tools\state-diff.ps1 -A -B` compares two dumps.

The translated build takes the same measurement flags, plus `--cover <file>`: one line per function
that ran (`<entry> <calls>`, and `<pc> <instructions>` for code the core executed), which is how
"what never ran" is a list instead of a guess (`docs\implementation-survey.md`).

## The Windows release

A release is **the executable, the launcher's file and three empty folders** — no game data is
distributed:

```
It Came from the Desert.exe   the translated game
recomplauncher.json           RecompLauncher's setup file (see below)
export\                       empty: filled on the first start
disks\                        empty: the player's three original Amiga floppy images go here
saves\                        empty: the ten save slots
```

`recomplauncher.json` is how [RecompLauncher](https://recomplauncher.com) installs and starts the
recomp: it asks the player for the folder that holds their three images, runs the game's own
extraction there and then (`--prepare --disks <folder> --data <install>\export`, which reports its
work as `progress <0..1> <text>` lines instead of a window), and shows the `icftd.ini` settings on
the game's page — window mode, the music and sound volumes, the language, the side curtains and,
under the advanced options, the gamepad pointer's speed — so Play starts the game without anyone
editing a file. Without a launcher nothing changes: the file is inert, and the `disks\` first start
above is the whole setup.

The executable's icon and version page (`It Came from the Desert`, `Copyright © 2026 Tim Rachor`)
are compiled into it from `src\runtime\plat\win32\icftd.rc`; the icon is the port's own
`assets\app_icon.png`, resampled to a multi-size `.ico` by `tools\mkappicon.ps1`, and the game's
window carries it too — the title bar and Alt+Tab show the game's picture, not a generic icon.

```powershell
powershell -ExecutionPolicy Bypass -File tools\win32-pack.ps1
#   -> bin\win32\game  (what a release is)
#   -> bin\win32\ItCameFromTheDesert-<version>-windows-x86.zip  (named the way RecompLauncher
#      reads a release: the system and the processor in the file name; the version is the
#      executable's own version page, or -Version <x.y.z>)
```

Double-clicking `It Came from the Desert.exe` plays the game: the console window the executable is
given is hidden, so only the game's own window is seen. Started from a terminal (or by one of the
check scripts, which read its log through a redirected handle) the console is left alone — the log
belongs to whoever started the run. A run that ends by itself leaves nothing beside the executable;
a run that did not — a crash, a hang, a process killed from outside — leaves `game-log.txt` there
with the last frame's machine state, and the unhandled exception appends its code and address.

On the first start
`src\runtime\assets.c` extracts the files the engine asks for from the player's own disk images in
`disks\` and writes them to
`export\` (`disk1..3` plus `code\dshell4k\dshell.img`, the game program flattened at 0x4000), then
boots; later starts read `export\` and never look at `disks\` again. Without the three images it
shows one line and stops:

> Please put the three original 'It Came from the Desert' disk images in the 'disks' folder and restart.

**Which images it accepts.** Any raw image of the three floppies — `disks\` is read file by file, so
the names and extensions there are the player's business; each file is tried as an AmigaDOS
floppy. What has to match is the filesystem: a raw, uncompressed sector image of a double-density
disk (`901 120` bytes, the `.adf` a dumper writes), formatted with the original **OFS** filesystem,
carrying the volume labels `Desert1`, `Desert2` and `Desert3`. A second image with the same label is
ignored (the first by file name is used). Copy-protection schemes do not matter, because the data is
read through the filesystem rather than the floppy's tracks; compressed or flux-level containers
(`.adz`, `.dms`, `.ipf`, `.scp`, `.hfe`) have to be converted to a plain `.adf` first, and
FFS-formatted or high-density images are refused. A different *revision* of the game is not
supported: the extractor only checks the structure, but the recompiled program is bound to this
exact `dshell` at its load address, so another build would neither run nor say so cleanly.

The extraction is the exporter's formats in C (`src\assetExport\Adf.cs`/`AmigaFs.cs`/`Hunk.cs`
ported), and it lands on the same bytes `tools\extract.ps1` writes — that identity, not a
screenshot, is what the feature is checked against (`docs\port-features.md`, "The first start").

**Controls.** The stick is the keyboard: the arrow cluster, or W/A/S/D for the same four
directions. Space (or the left mouse button) fires, Esc restarts the game, F1–F4 pick a save slot
and F5 steps to the next one, and the title screen's `1`–`7` and `W`/`C`/`T` start its scenes.
A gamepad works too: its d-pad is those four directions, its left stick is the four directions (or,
on a screen that shows a cursor — the situation map, the phone book, the aiming scenes, the title
and the port's popups — the pointer, more slowly the less it is pushed), each of the four face
buttons is fire, and Start is Esc. Xbox pads are read through XInput and PlayStation pads through
DirectInput, so either family works as it is, plugged in; the pointer's speed is
`[INPUT] pad_sensitivity` in `icftd.ini` (per cent, `10..200`, default `50` — half the pad's full
speed, which is what playing with it asked for) (`docs\port-features.md`, "The gamepad").
The title's own menu is clicked with the pointer: New Game, Load Game (the ten save slots), Settings
(the fullscreen toggle, the two volume rows and the language row, which all take effect at once and
are written back to `icftd.ini`) and Quit Game, which shows a ten-second notice naming the successor
on a black screen before the application closes. Alt+Enter is the shortcut for the same window
switch, on every screen the game has (the settings view's toggle shows it there and then), and it
writes `[VIDEO] fullscreen` back as well. The language row steps through the languages the game found
at start-up — English, the original's, then every complete `lang\<code>.csv` next to the executable,
shown by its two-letter name — and each step switches the interface and the game at once, so a
translation is added by dropping its file in, not by editing anything (`en`, the default, is the
original's English): see docs\port-features.md, "The language", and `lang\README.md`. The game's own
text — the menus, the messages, the port's screens and the story, what the rooms narrate and what the
people say on the telephone — is entirely in that file, whose English side the game writes itself on
the first start (from the data it just extracted, never shipped), and which `tools\lang-export.ps1`
writes in three steps for a development tree: the game's own text (`lang\en.csv`, not committed), the
translator's three-column working file, and the finished translation keyed by an id instead of by the
English — so the shipped file carries none of the original's script. Two cheats: left Ctrl+W ends a
minigame in that scene's own success state, and left Ctrl+T on the situation map freezes the game's
clock (`Time frozen`, then `Time unfrozen` again), holding it through every screen until the game is
restarted or a new game is started from the title.

## The MS-DOS build

The same translated image, on MS-DOS: VGA mode 13h (320x200, one byte per pixel), the 8042 keyboard
polled for held keys, a 50 Hz clock from the 8254 timer, and the machine's own `icftd.ini` (without a
`[VIDEO] fullscreen` entry - a DOS program owns the display). 32-bit DOS needs an extender; the build
binds **DOS/32A**, which Open Watcom already ships, so nothing extra has to be downloaded.

**Double-click `play_dos.cmd`.** It stages the release on first use (build + package) and starts
DOSBox with the settings the game needs. Its clock defaults to `cycles=30000`, a 486DX2-66-class
machine - the hardware this port is aimed at - so what you see is the real target performance;
`set ICFTD_CYCLES=max` runs it at whatever the host can do. The individual steps, if you want them:

```powershell
powershell -ExecutionPolicy Bypass -File tools\build-dos.ps1     # -> bin\dos\ICFTD.EXE
powershell -ExecutionPolicy Bypass -File tools\dos-pack.ps1      # -> bin\dos\game (empty release)
powershell -ExecutionPolicy Bypass -File tools\dos-run.ps1       # DOSBox, cycles=max, core=dynamic
```

`bin\dos\game` is the release as it ships: `ICFTD.EXE`, an empty `DISKS\` (the player's three
original floppy images go there), an empty `SAVES\` and `ICFTD.CONF`, a DOSBox config for it -
start it with `dosbox -conf ICFTD.CONF`. There is **no game data** in it: the game extracts the
player's own disks on its first start and shows

```
Please put the three original 'It Came from the Desert' disk images in the 'disks' folder and restart.
```

when they are not there, and while it reads them it says
`Please wait... extracting resources from disk images`. Those two lines are the only text the DOS
build writes to the screen - everything else goes to stdout, which a played run binds to `NUL` so
no diagnostic can draw into the mode 13h picture. What that first start writes is the tree the
engine runs from: `DISK1..3`
(the three filesystems, every file under a legal DOS 8.3 name), `NAMES.TXT` and `DSHELL.IMG` (the
game program flattened at 0x4000), plus `ICFTD.INI`. `NAMES.TXT` exists because the engine asks for
AmigaDOS names FAT cannot hold (`fonts\newnem.font`); the extractor renames those files to 8.3 and
the platform layer retries a failed open through that map. Save slots are directories next to the
executable (`SAVES\SLOT1..4`), holding the engine's `ICFTD` file, exactly as on Windows.

**The mouse works on DOS.** The platform layer reads the DOS driver through INT 33h, so the title
menu's buttons, the Load Game list and the Settings view are clicked with the pointer, and on the
situation map the game's own cursor follows it — pushed past the travel window the picture scrolls,
and the SAVE GAME mark holds the window still while the pointer is over it. The room screens' arrow,
the menu-line hover, the fight's crosshair and the two minigame aims are installed as well, and a
click on the map's SAVE GAME mark opens the same ten-slot picker Windows has. The engine's long
screen transitions say `Loading` while the game's own loader runs, as on Windows, and their frames
are not held to the 50 Hz clock: a transition takes host time (docs\port-features.md, "The loader's
fast-forward").

**A first start extracts itself.** `play_dos.cmd` hands the game the repository's `disks\` folder
(`--disks`), so the first run in a freshly staged `bin\dos\game` fills it with the tree above and
boots. A release is the same thing with the player's own images dropped into `DISKS\`; with none
there the game prints the message and exits, and `ICFTD.EXE --extract` does the extraction on its
own. `DSHELL.IMG` is written last, so an interrupted extraction is simply redone, and the tree is
byte-identical to what `tools\dos-pack.ps1 -Data <dir>` stages from the development `export\` tree
(`tools\dos-extract-check.ps1` is the check).

**DOSBox settings matter:** `core=dynamic` (the JIT) is roughly ten times faster than `core=normal`,
and the cycle count is the emulated CPU: `30000` is about a 486DX2-66, `3000` a 386 (the stock
setting, on which the game crawls) and `max` whatever the host can do. Those are DOSBox's own
settings - they say nothing about real hardware, where the binary simply runs natively. What the
hardware sees is the work per frame: **~3.5 million x86 cycles currently**, i.e. about 8 fps on a
486DX2-66 against the 50 fps target, so the DOS target still needs roughly a 6x reduction (the
vblank handler running on the 68000 interpreter is the first item). Measured cost, method and plan:
`docs/next-session.md`.

## Layout

```
disks/*.adf            the original floppies (not in git)
export/disk1..disk3    extracted filesystems
export/code            dshell flattened for Ghidra (base 0) and for the runtime (base 0x4000)
re/                    Ghidra project, decompiled C, disassembly, exported program model
ref/fixtures           pinned 68000 harness fixtures (the oracle's test inputs)
src/assetExport        ADF filesystem, banks, SMS/LZ codecs, hunk loader, AND the 68000
                       interpreter + the rcmp/rleaf differential harness
src/runtime            the machine the game code runs on: memory, library shims, heap, exec
                       structures, blitter, planar display, platform   (ships)
src/oracle             the 68000 front end: executes the original binary so it can be measured
                       and mined for fixtures   (dev tool, links Musashi)
src/recomp            the translated functions (`fn_<addr>.c`), `fn_table.c`, `cpu_t`, the fixture replay
third_party/musashi    MIT 68000 core
tools/                 see below
docs/                  architecture, plan, program model
```

## Tools

| tool | purpose |
|---|---|
| `tools\gate.ps1` | the gate, tiered: by default the translation core (exporter build, oracle build, interpreter fixtures, translated vs interpreted); `-Full` adds the port's own checks (presenter, title menu, title settings, quit notice, map pointer, save picker, room pointer, crosshair, ant-head aim, border, loading line, pointer aim, minigame cheat, clock freeze, hospital camera, WASD keys, gamepad, art tables), `-Only <step>` runs one |
| `tools\build-oracle.ps1` | build `bin\win32\icftd-oracle.exe` (runtime + Musashi front end) |
| `tools\oracle-run.ps1` | run the oracle with a hard timeout, log to `out\` |
| `tools\state-diff.ps1` | first divergent frame between two `--state` dumps, and the RAM byte ranges |
| `tools\build-recomp.ps1` | build `bin\win32\recomp-check.exe`: runtime + `src\recomp`, no 68000 core |
| `tools\win32-pack.ps1` | stage the Windows release in `bin\win32\game` (`It Came from the Desert.exe`, `recomplauncher.json` + empty `export\`, `disks\`, `saves\`) and zip it as `<name>-<version>-windows-x86.zip` |
| `tools\mkappicon.ps1` | the executable's icon: `assets\app_icon.png` → `bin\win32\res\icftd.ico` (build output, linked in by `tools\build-host.ps1`) |
| `tools\build-dos.ps1` | build `bin\dos\ICFTD.EXE`: the game for MS-DOS (DOS/32A extender) |
| `tools\dos-pack.ps1` | stage the DOS release in `bin\dos\game` (ICFTD.EXE, empty `DISKS\`/`SAVES\`, `ICFTD.CONF`); `-Data <dir>` stages the extracted 8.3 tree the first start writes (the check's reference) |
| `tools\dos-run.ps1` | run the DOS build under DOSBox with a generated config |
| `tools\dos-extract-check.ps1` | the DOS first start: an empty release folder plus the floppy images extracts the tree `dos-pack.ps1 -Data` stages (8.3 paths, `NAMES.TXT`, `DSHELL.IMG`), a second start does nothing, an empty or incomplete `disks\` is refused, and the run boots the same machine |
| `tools\recomp-fixtures.ps1` | translated vs interpreted, one fixture at a time (`-Rand n` for random fields) |
| `tools\musashi-gen.ps1` | generate Musashi's `m68kops.c` (git-ignored) |
| `tools\extract.ps1` | disk images → `export\` |
| `tools\ghidra\run-ghidra.ps1` | decompile + export the program model (`-ModelOnly`, `-Annotated`) |
| `tools\harness-check.ps1` | re-run the pinned interpreter fixtures |
| `tools\fieldmap.ps1`, `structs.ps1`, `asmrange.ps1`, `banktable.ps1` | query the model / disassembly |
| `tools\analyse-os-calls.ps1`, `decompile-quality.ps1`, `global-heat.ps1` | model reporting |
| `tools\gamepack.ps1` | pack assets for the shipped runtime (the data seam) |
| `tools\dos-save-test.ps1` | build + run the save path (`DSAVE:` → `saves\slot<N>\ICFTD` and the add-on's `ICFTD2`) against `rt_os_call`, and the slot state the two files make |
| `tools\mkosdicon.ps1` | PNG → `src\runtime\amiga\osd_icon.h`, the table the on-screen display draws |
| `tools\mktitleart.ps1` | PNG → `src\host\title_art.h`, the picture the title screen draws while the map's score plays |
| `tools\mksettingsart.ps1` | PNG → `src\host\settings_art.h`, the minus and plus buttons and the fullscreen toggle the title's settings view draws |
| `tools\title-check.ps1` | the title's digit keys start the minigames and W/C/T the three endings (scene data, rasters, and the return to the title), the two menu layouts, and the shared save slots: one row per save file, "(A)" for the add-on's, no cross-loading, and paging when there are more files than rows |
| `tools\settings-check.ps1` | the title's settings menu: the Settings button opens it, the fullscreen toggle and the two volumes change the machine and are written back to icftd.ini, Back restores the menu, and Alt+Enter (posted to the live window) switches the window from the view and leaves the toggle showing the state it took |
| `tools\lang-check.ps1` | `[GAME] language`: en draws the original's line and de the German one from the same machine, the RAM differs only in the catalog's own region, the machine state is record-for-record identical up to the first German line, a room's action list is German, the `--langdump` text is the English whatever the setting says, a translation file translates the interface and a whole story record both by English key and by id (its middle column ignored) while a file without the key runs in English, and the source text the game writes from the extracted data (`--langsource`) is byte-identical to `tools\lang-export.ps1`'s, the add-on's half included |
| `tools\lang-export.ps1` | writes the translation files — `lang\en.csv` (`<id>;<English>`, the game's own text, not committed; the game itself writes the same bytes from the player's own data at the first start), `-Work` the translator's `<id>;<English>;<German>`, `-Pack` the committable `<id>;<German>` — from the prose in `desert.dat`, the program image and `PHONE.DAT` plus the interface list (`docs\port-features.md`, "The translation file", `lang\README.md`) |
| `tools\quit-check.ps1` | Quit Game's farewell: the click replaces the menu with the two requested lines on black, centred, held for ten seconds (500 frames), then the application closes; a measurement run is untouched |
| `tools\mouse-check.ps1` | the mouse-feature seams: the map cursor follows the pointer, scrolls at the window's edge, yields to the stick, and a click is /FIRE (frame-for-frame identical to the key); a pointer run still sees the original's machine state up to the map |
| `tools\pointer-check.ps1` | the room pointer's seams: a text menu line under the pointer selects the same entry and action the stick selects, and a pointer that never reaches a line leaves the run byte-identical |
| `tools\crosshair-check.ps1` | the giant-ant fight's crosshair: its centre is the point the engine's shot test reads (the aim `−0x1b`/`−0x3a`, the value `FUN_000086A0` stores for `FUN_0000823A`), it follows the stick, and a measurement run draws none |
| `tools\anthead-check.ps1` | the add-on's own "Fight Ant Head" scene: the same aid and pointer control in it (`FUN_0000ca1a`/`FUN_0000cf24`, the shot `FUN_0000cf4e` stores at the aim `−0x1b`/`−0x3a`) — pointer → aim, the crosshair at the shot point, the stick still aiming, and a stale pointer leaving the run unchanged — plus the add-on's column of the giant-ant fight's own rows |
| `tools\aim-check.ps1` | the pointer's gun and extinguisher: the aim words are the pointer's point in the fight (`+0x1b/+0x3a`) and inside the fire game's own travel rectangle (`0x28..0x12c × 0xa5..0xf0`, so the mouse stops where the stick stops), the engine's shot/spray lands there, the keyboard still aims, and a measurement run is untouched |
| `tools\cheat-check.ps1` | the Ctrl+W minigame cheat: each of the title's seven scenes ends in the words its own success path writes (the fight's result, the flight's landing, the fire game's "no fire left", the escape/nest step count, the chicken's swerve, the ant's win), and a run with the seam installed but no key is byte-identical to the plain one before the request |
| `tools\time-freeze-check.ps1` | the Ctrl+T clock freeze: the engine's date, time, printed hour and pause gate do not move while frozen and do again after the second press, a whole travel adds 27 minutes with the clock running and none while it is held, the real keys do it in the game window, a save that carries the pause word loads running, and a run with no key is the plain run frame for frame |
| `tools\camera-check.ps1` | the hospital escape's camera: the character's screen position stays at the middle of the window while it walks (the picture follows from one update to the next), and the same script played as a measurement still shows the original's camera |
| `tools\keys-check.ps1` | the four directions on two keys each: a press of A/S/D/W hands the front end the same `input_state` its arrow does, a direction stays down until both its keys are released, and an arrow press is not the title's W |
| `tools\pad-check.ps1` | the gamepad: the d-pad is those four directions (one press edge per press), any face button is `/FIRE` and one click, Start is Escape, the stick is the pointer at a speed that follows its deflection (6 px a frame at full deflection at the default sensitivity, a nudge one pixel in twenty frames), `[INPUT] pad_sensitivity` scales it, and — with a pad attached to the machine — the shipped platform layer reports it with its stick at rest inside the deadzone |
| `tools\mkcrosshair.ps1` | PNG → `src\runtime\amiga\crosshair_art.h`, the aiming aid the fight draws |
| `tools\mkborder.ps1` | PNG → `src\runtime\plat\win32\border_art.h`, the art the Windows fullscreen paints behind the 4:3 picture |
| `tools\mkportraitbox.ps1` | PNG → `src\host\portrait_box_art.h`, the box the map's save-slot picker draws |
| `tools\save-ui-check.ps1` | the map's save-slot picker: a click opens it, the map stays put, Back resumes, and a slot writes the engine's 12 444-byte save; a slot holding the add-on's 13 014-byte `ICFTD2` is a saved slot, a one-byte placeholder is not |
| `tools\border-check.ps1` | the fullscreen border: the art table is the PNG byte for byte, `border_paint` is point sampling, and the bars are curtain rather than black |
| `tools\art-check.ps1` | the shipping invariant: every picture compiled into the executable is what its tracked `assets\*.png` generates, so no game-derived art ships in the binary |

## Where to start reading

* `docs/next-session.md` — **what is being built right now** and in what order
* `docs/port-features.md` — **read this before adding a port feature**: the five attachment points,
  the one trap that costs the most time, the scene presets (how to reach each screen headlessly) and
  what "done" means for code that has no counterpart in the original
* `docs/implementation-survey.md` — **what of the game is implemented, proven and never run**: the
  feature inventory, the `--cover` coverage matrix and the open divergences
* `docs/recomp-architecture.md` — the architecture, the phase plan, and the binding acceptance
  tests (machine state, never images)
* `docs/model.md` — the exported program model (`re/model/*.csv`), the field map, the annotation
  loop (`docs/structs.csv` + `docs/annotations.csv`)
* `docs/code-inventory.md`, `docs/drawing-model.md`, `docs/graphics-notes.md` — what the engine
  actually does, derived from the disassembly
* `re/README.md` — the Ghidra setup, dshell memory layout (A4 = 0x29A56), known artifacts
* `src/assetExport/amiga_formats.md` — disk, hunk, resource and picture formats

## Program model (struct archaeology)

Ghidra's view of the program is exported as data, not text, so "what is `param_2 + 0x38`" is a
query:

```powershell
powershell -ExecutionPolicy Bypass -File tools\ghidra\run-ghidra.ps1 -ModelOnly   # regenerate re\model
powershell -ExecutionPolicy Bypass -File tools\fieldmap.ps1 FUN_0001DBD0          # fields in a function
powershell -ExecutionPolicy Bypass -File tools\fieldmap.ps1 -Offset 0x38          # who touches 0x38
powershell -ExecutionPolicy Bypass -File tools\ghidra\run-ghidra.ps1 -Annotated   # apply the annotations
powershell -ExecutionPolicy Bypass -File tools\structs.ps1                        # -> docs\structs.md
```

See `docs/model.md` for the files, their columns and the caveats.

## What is not in git

`disks/`, `export/`, `assets/`, `re/`, `ref/` and `bin/` are game data, derived from it, or build
output; `.gitignore` excludes them (only `disks/README.md` and `assets/README.md` are tracked, as
placeholders and instructions). Everything in them can be regenerated from the original floppy
images with the tools above.
