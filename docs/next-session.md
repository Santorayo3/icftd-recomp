# Next session — Phase B, verified by machine state

**Read this first, plus the binding rules at the top of the repo memory. They are not suggestions.**

The project is one thing: statically **recompile the original `dshell` (750 functions / 121,362
bytes) into C** and ship a portable runtime. Everything else is scaffolding.

* **Phase A (done, frozen)** — the original binary runs on the vendored Musashi 68000 core plus our
  own OS shims (`src\game\core\emu\`, `bin\win32\icftd-emu.exe`). It boots, plays the intro and runs
  the game loop (30M insns → frame 5823, 5752 rasters, 0 dropped blit writes). Its OS surface is
  measured on every run by `emu_lvo_report()`: **49 distinct library calls used, 86,898 calls,
  45 kinds implemented, 4 kinds answered with 0** (`diskfont -30` OpenDiskFont, and `-30/-36/-84` on
  the "mathffp" base = IEEE single-precision Flt/Div/Fix). Phase A is not polished further; it is an
  oracle.
* **Phase B (not started)** — the translator: `src\recomp\fn_<addr>.c`, `fn_table.c`, a `cpu_t`
  context, `jsr (d16,A6)` → `os_call()`, computed jumps → table lookup with **interpreter fallback**
  so partial builds still run.

## How correctness is decided (never with pictures)

Parity is **machine state**, compared at frame boundaries, driven by a frame-indexed input script:

```
D0-D7, A0-A7, SR, PC  +  custom-chip register file  +  hash of the full RAM image
```

A dump is a file; two dumps are diffed by `tools\state-diff.ps1`, which reports the first frame
index and the differing byte ranges.

| test | pass condition |
|---|---|
| function differential | translated function == interpreted function: all registers + memory over the touched ranges, on pinned fixtures **and** seeded random ones (`rcmp --rand`, `rleaf`) |
| whole program | interpreted build and translated build, same input script → state hash equal at **every** frame boundary |
| OS surface | the call census shows no kind answered with 0 |

**Frame/pixel comparison, screenshots, WinUAE captures, `--match`, `tools\diff-frame.ps1`,
`tools\verify-frames.ps1` and `ref\manifest.csv` are legacy artefacts of the abandoned hand port.**
They may keep running as a regression check on that port; they are never evidence about the
recompilation, they must not be extended, and "let me just check a frame" is not a debugging step.
If the machine state matches, the visuals follow by construction — the only model left is
planar→chunky + palette, a pure function of RAM, verified once with synthetic bitmaps.

Coverage is **measured, not played**. The game never has to be played through: a scripted input
timeline drives runs, executed-function/basic-block counters say what has not been reached, and
scenes are entered by calling the engine's own entry points (`slot 96/105`, the script label table),
not by earning them.

## Work order

1. **Harness** (small; everything else depends on it):
   - `--input <script>`: frame-indexed input timeline (fire + joystick), replacing
     `--press`/`--release` for anything scripted.
   - `--state <prefix> [--every n]`: canonical dump per frame boundary (registers + custom regs +
     RAM hash; full blob only around the first divergence).
   - `tools\state-diff.ps1`: first divergent frame + differing ranges.
2. **One function end to end**: emit `src\recomp\fn_0001dcb0.c` (`Move_CreateNode`) from the
   `Cpu68k` decoder, compare against the interpreter on the pinned fixture, then under `--rand`.
   When that diff is clean the loop for the other 749 is mechanical.
3. **Bulk translation**, reporting translated/verified counts per session, plus coverage counters
   for what has never executed.
4. **Runtime gaps, when the translated build first needs them**: `OpenDiskFont`, `Text`,
   `TextLength`, the three IEEE single-precision calls. Shared runtime code — the emulator and the
   translated build both call them — not emulator debugging.

## Ground truth

* `re\disasm\dshell.asm`, and the decompiled C in `re\decomp_all\` — every claim about the original
  comes from there, never from a picture.
* The HRM and UAE's source **read as documentation** for chipset/OS contracts (that is how the
  blitter data path was fixed: mask before the shift register, hold word across lines).
* `re\model\functions.csv` (750 rows), `docs\annotations.csv`, `docs\structs.csv`,
  `docs\drawing-model.md`, `docs\code-inventory.md`, `docs\os-calls.csv`, `docs\vector-table.csv`.
* Not a reference: `bin\win32\icftd.exe` (the hand port) and any screenshot.

## Housekeeping

* `tools\gate.ps1` — 3 steps, ~19 s, green: exporter build, emulator build, interpreter fixtures.
  There is no pixel, frame or capture step, and adding one is a regression, not a feature.
* The emulator is not in the gate: `tools\build-emu.ps1` → `bin\win32\icftd-emu.exe`.
* `tools\emu-run.ps1` writes a log and always enforces a timeout; it does **not** forward
  `--press`/`--release` (use `-EmuArgs`). `out\emu-post.ps1` (+ task "out: r") runs the post-intro
  case with a hard 45 s limit and an unconditional kill — a run that must be killed by hand is a run
  that hides its own log.
* The integrated terminal dies after heavy use, and the emulator can spin in a native loop that no
  instruction budget sees: kill `icftd-emu` before rebuilding, and prefer `run_task`.
* The retired hand-port plan is kept as `docs\archive-hand-port-plan.md` for history only.
