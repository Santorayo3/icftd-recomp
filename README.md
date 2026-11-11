# It Came from the Desert — Amiga recompilation

Statically recompiling the 1989 Cinemaware game "It Came from the Desert" from its three original
Amiga floppy images: the original `dshell` binary (750 functions, 137 KB of 68000 code) is
translated to C and runs against a portable runtime we write. Target: **Windows (32-bit PE, Open
Watcom)**; the DOS target stays possible but is not being worked on.

**No game data is in this repository.** The disk images are copyrighted, and so is everything
decoded from them (`assets/`, `export/`, `re/`, `ref/`); `.gitignore` keeps all of it out of git.
You supply the images; the tools decode them locally.

## The two phases

| phase | what it is | state |
|---|---|---|
| **A — run the original** | The real `dshell` image executing on the vendored Musashi 68000 core plus our own Amiga OS shims. This is the **oracle** (`src\oracle` + `src\runtime`): it is how we learn what the program actually does, and where the fixtures come from. A tool — the shipped game links no 68000 core. | **Done, frozen.** Boots, plays the intro, runs the game loop: 30M instructions reach frame 5823 with a raster presented every frame, 0 dropped blit writes. OS surface measured every run: **49 library calls used, 45 kinds implemented, 4 answered with 0** (`OpenDiskFont`, three IEEE single-precision ops). |
| **B — the product** | Static translation of the 750 functions into `src\recomp\fn_<addr>.c` + `fn_table.c` against a `cpu_t` context, `jsr (d16,A6)` → `os_call()`, computed jumps → table lookup with interpreter fallback. | **Started.** `recomp` emits 726 of 750 functions (102,920 of 121,362 bytes) plus 21 blocks of code the model does not cover; the other 24 are reported with the construct that is missing. The differential is green: **235 of 244 fixtures verified, 9 skipped, 0 failed**. |

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

# 3. gate: exporter build + emulator build + interpreter fixtures (~19 s)
powershell -ExecutionPolicy Bypass -File tools\gate.ps1
```

## Running the original (Phase A)

```powershell
tools\build-oracle.ps1
bin\win32\icftd-oracle.exe export\code\dshell4k\dshell.img 0x4000 --run
#   space = fire, esc or close = quit; runs at the Amiga's 50 Hz

# batch / scripted runs - always bounded, so a stuck model cannot hang the terminal
powershell -ExecutionPolicy Bypass -File tools\oracle-run.ps1 -Insns 30000000 -Progress
```

Flags worth knowing: `--progress` (counters every million steps), `--lvo` (library-call census),
`--press <frame>` / `--release <frame>` (scripted fire), `--doslog`, `--dfflog`, `--watch <pc>`,
`--dump <prefix> [n]` (BMP per presented raster), `--state <prefix> [--every n] [--ram <frames>]`
(canonical machine-state dump per frame boundary) and `--input <script>` (frame-indexed input:
`<frame> <fire> <joy0> [<joy1>]`). `tools\state-diff.ps1 -A -B` compares two dumps.

## Layout

```
disks/*.adf            the original floppies (not in git)
export/disks           extracted filesystems
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
| `tools\gate.ps1` | the definition of green: exporter build, oracle build, interpreter fixtures, translated vs interpreted |
| `tools\build-oracle.ps1` | build `bin\win32\icftd-oracle.exe` (runtime + Musashi front end) |
| `tools\oracle-run.ps1` | run the oracle with a hard timeout, log to `out\` |
| `tools\state-diff.ps1` | first divergent frame between two `--state` dumps, and the RAM byte ranges |
| `tools\build-recomp.ps1` | build `bin\win32\recomp-check.exe`: runtime + `src\recomp`, no 68000 core |
| `tools\recomp-fixtures.ps1` | translated vs interpreted, one fixture at a time (`-Rand n` for random fields) |
| `tools\musashi-gen.ps1` | generate Musashi's `m68kops.c` (git-ignored) |
| `tools\extract.ps1` | disk images → `export\` |
| `tools\ghidra\run-ghidra.ps1` | decompile + export the program model (`-ModelOnly`, `-Annotated`) |
| `tools\harness-check.ps1` | re-run the pinned interpreter fixtures |
| `tools\fieldmap.ps1`, `structs.ps1`, `asmrange.ps1`, `banktable.ps1` | query the model / disassembly |
| `tools\analyse-os-calls.ps1`, `decompile-quality.ps1`, `global-heat.ps1` | model reporting |
| `tools\gamepack.ps1` | pack assets for the shipped runtime (the data seam) |
| `tools\dos-save-test.ps1` | build + run the save path (`DSAVE:` → `saves\slot<N>\ICFTD`) against `rt_os_call` |
| `tools\mkosdicon.ps1` | PNG → `src\runtime\amiga\osd_icon.h`, the table the on-screen display draws |

## Where to start reading

* `docs/next-session.md` — **what is being built right now** and in what order
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
