# Scaling plan — framework, tooling, sweeps

*Written 2026-11-09, after the intro logo milestone. This supersedes "one animation at a
time": the goal is a reusable engine library plus the tooling that lets us sweep whole
subsystems, 20–50 original functions per session, with automatic verification.*

---

## 14.1 Where we are, honestly

| what | state |
|---|---|
| Assets (AFD/ADF, banks, SMS, LZ, MovE containers) | decoded exactly, `verify-pack` 547/0 |
| Blitter (`FUN_0001E8C8`) + palette engine + display list + MovE VM | ported, intro logo frame-exact (26/64000) |
| Original code covered | ~10 functions of **752** (≈2 % of 121 424 code bytes) |
| Automated tests per ported function | **none** — verification is "render a frame and look" |
| Machine-readable model of the program (types, structs, call graph) | none; it lives in `docs/*.csv` by hand and in notes |

The assets were the right first investment: everything downstream needs pixels, palettes and
scripts that are provably correct. The *next* bottleneck is not knowledge of the game — it is
the **cost of one port**: read raw Ghidra C with `DAT_0002c4c2` everywhere, reconstruct a
struct by trial, port, then judge the result by eye. That cost has to go down by an order of
magnitude before any sweep is realistic.

## 14.2 The three pillars

### Pillar A — differential execution harness (the lever)

A **68000 interpreter** inside the asset exporter that can run one *original* function in
isolation:

```
icftd-export rcmp <addr> [--fixture <file>] [--dump <regions>] [--trace]
```

* Flat 4 MB memory; the dshell code+data hunk loaded at 0, `A4 = 0x29A56`, a stub vector table
  so `jsr (-0x7ffe+6*slot,A4)` lands in a C# callback (AllocMem/FreeMem, palette push, blit,
  RectFill, …) which records what the original asked for.
* Executes until `RTS`, a step budget, or a call into a stub that has no faithful model.
* `--fixture` = a memory image (structs pre-filled) + register state; the exporter prints the
  **resulting** memory regions as the golden output.
* The C port replays the same fixture (a tiny `ctest` target compiled next to the game) and
  emits its own dump; the two are diffed byte for byte.
* **Randomised fixtures**: fields filled from plausible ranges, seed stored in the fixture, so
  a failing case is reproducible and becomes a regression.

Why this is feasible here: dshell is a *single* code hunk with **no indirect jumps** and all
OS access through a 160-entry vector table (`docs/vector-table.csv`, `docs/engine-slots.csv`).
The instruction subset actually used is small — no FPU, no supervisor tricks, no
self-modifying code. Estimated 1 500–2 500 lines of C#: effective-address decoding, the
MOVE/ALU/shift/mul/div/branch/PEA/JSR/RTS/DBcc/movem set, plus the stub table.

What it buys, beyond testing:

* **Struct layouts, measured instead of guessed.** Run a real function on a real struct and
  dump which offsets it reads/writes with what types. This is how the picture struct, object
  struct and the adventure state records get nailed down once and for all.
* **Behavioural oracle for the C port** that costs nothing per call — 200 random inputs per
  function instead of one eyeballed frame.
* It also documents the "not yet located" pieces (e.g. where the key-colour mask plane is
  built) by simply showing the write.

### Pillar B — machine-readable registry

Everything we learn must be data, not prose, so the tools can use it.

| file | role | built by |
|---|---|---|
| `docs/annotations.csv` | address → name, size, subsystem, kind, one-line purpose. Hand-curated, grown as we go. | us |
| `docs/functions.csv` | generated call graph: address, size, callers, callees, leaf flag, subsystem (from annotations, else inherited from callers), port status | `tools/funcs.ps1` |
| `docs/structs.md` + `src/game/core/game/structs.h` | struct layouts from a small DSL (`struct object @0x10: x i32, y i32, …`) | `tools/structs.ps1` |
| coverage report | ported functions / bytes per subsystem + a ranked "port these next" queue (fan-in × size) | `tools/coverage.ps1` |

Ported functions carry a tag in the C source:

```c
/* PORTED: 0001ec42 SMS picture record loader */
```

so coverage is *derived*, never a hand-maintained list. `docs/port-ledger.csv` becomes a
generated artefact rather than a promise.

### Pillar C — engine skeleton and a fixed port recipe

`src/game/core/` grows to mirror the original's own layering:

```
core/sys/    memory (arena + AllocMem pools), list helpers, string, math, rng, time
core/mov/    MovE VM + display list (exists: move.c)
core/gfx/    blitter (exists), bitmap, palette engine, text/font, screen/copper, fx
core/game/   narration/dialogue, world+map, adventure state, menus, minigames (later)
core/amiga/  the API subset the binary actually calls
```

The recipe, followed mechanically for every function:

1. `tools/coverage.ps1 next` → pick the next cluster (highest fan-in, lowest size first).
2. Read the decompile + asm; annotate the globals/structs it touches **once** in
   `docs/annotations.csv` (a struct annotated today is free for every later function).
3. `rcmp --fixture` a handful of inputs from the original.
4. Port into the owning module, tagged with the original address, using the generated struct
   headers — no `(*(int*)(p+0x14))` casts in new code.
5. `rcmp` diff → must be byte-identical. Add the fixture as a permanent regression.
6. Visual gate: the scene/frame references still match.

## 14.3 Sweep order

Dependency-driven; each stage unlocks the next and is small enough to finish in one or two
sessions.

| stage | contents | why first | exit criterion |
|---|---|---|---|
| **S0 helpers** | memory pools, list insert/remove, string compare/copy, fixed-point math, RNG, sorting — mostly leaves, many callers | biggest fan-in, cheapest ports, proves the harness | `rcmp` green on ≥ 30 functions, coverage report shows them |
| **S1 state & IO** | section/bank tables, save-state structs, input mapping, tick counters, disk-load sequencing | everything reads/writes these | game boots to the intro from ported state code |
| **S2 graphics** | bitmap alloc/clear/copy, screen setup (`FUN_0001D00A`), copper list, text/diskfont renderer, sprite/FX helpers | needed by all scenes; blitter/palette already done | a text box renders from ported code |
| **S3 display layer** | finish MovE: label chaining/calls, remaining opcodes (05/06/07/09/0A/0B/0E/14-16/18-1A/1B), the intro driver | the whole intro then runs unmodified | `ref\logo.bmp` + intro sequence frames match |
| **S4 narration/UI** | narration presenter, dialogue boxes, portraits, menu widgets | most of the game's surface | a dialogue scene plays from the script |
| **S5 adventure shell** | world map, travel/time, locations, inventory, event flags | the actual game loop | can walk from the intro into day 1 |
| **S6 arcade sequences** | one at a time (fight, ant cave, plane, …) each self-contained | parallelisable, low risk | each matches its emulator frames |
| **S7 audio** | sample player, tracker, sfx cues | deferred until visuals are done (already the plan) | — |

## 14.4 Tooling to build (in this order)

1. **`tools/funcs.ps1` + `tools/coverage.ps1`** — *(done as `tools/coverage.ps1`; the
   function table comes from `re/model/functions.csv` instead of being parsed out of the
   disassembly)*: bytes/functions ported, names, and a "port these next" queue that lists
   unported leaf functions, smallest first.
2. **`src/assetExport/Cpu68k/` + `rcmp`** — the interpreter and the differential runner.
   Validate it on the S0 leaves (hand-computed results + the fixtures of functions whose
   output we can already see in the emulator).
3. **`docs/annotations.csv` + `tools/structs.ps1`** — seeded with what we already know:
   picture struct, object/display-list node, the four palette arrays, MovE label and command.
   Emits `docs/structs.md` and `core/game/structs.h`.
   *(half done: `docs/annotations.csv` + `docs/structs.csv` exist and are applied by
   `run-ghidra.ps1 -Annotated`; the C-header emitter is still missing)*
4. **`ref/manifest.csv` + `tools/verify-frames.ps1`** — generalise `verify-scene.ps1`:
   `scene, script, label, frame, reference.bmp, tolerance` rows, so every new scene becomes
   one line of data instead of a new script.
5. **`--trace` / `--trace-diff` in the recomp** — per frame log of objects (asset, position,
   channel mask, vscale), executed commands and palette writes. When a frame mismatches this
   answers "why" in seconds instead of a debugging session.
6. **Ghidra export hook** (`tools/ghidra/`) — dump renamed functions/structs from the project
   so `annotations.csv` can be seeded and merged instead of typed from scratch.
   *(done: `ExportModel.java` + `FieldMap.java` + `tools/fieldmap.ps1`, see `docs/model.md`)*

### 14.4.1 Making Ghidra earn its keep

Measured baseline for the current decompile (`tools/decompile-quality.ps1`): 752 functions,
28 057 lines, **9 049** anonymous global references (`DAT_0002…`), **1 684** raw field casts
`*(type *)(p + 0xNN)`, 603 `unaff_` register pseudo-vars, 387 `in_D/in_A` pseudo-parameters,
446 `CONCAT` workarounds, **0** named functions.

The analysis itself is already good — every function found, 0 undefined bytes, relocations
applied, Decompiler Parameter ID / Aggressive Instruction Finder / address tables /
Call Convention ID all on. What is missing is *semantics*: no types, no names, and no
machine-readable model. Four changes, in order of payoff:

| change | why | effort |
|---|---|---|
| **Types and names applied *before* analysis** (`ApplyAnnotations.java` + `docs/structs.csv` + `docs/annotations.csv` — **done**, see `docs/model.md`) | collapses the field casts and `DAT_` references into `move_node->channel` and friends, and every caller inherits it | done, re-runnable in ~1 min |
| **Structured exports instead of text** (`ExportModel.java`, `FieldMap.java` — **done**, see `docs/model.md`) | this is the struct-archaeology automator — offset 0x0a being a sort key, 0x38 going to the blitter etc. are now a lookup instead of asm reading | done |
| **Feedback loop**: re-run apply + analyse + decompile after each sweep | the decompile gets better every session instead of being a one-off dump | free once the first two exist |
| **Benchmark the compiler spec** (68000 `default` vs `gcc`) on 5 known functions with `decompile-quality.ps1` | the `unaff_`/`in_D`/`CONCAT` noise is mostly calling-convention guesswork; pick whichever scores best | 1 hour |

No extra Ghidra extensions are required: Jython ships with Ghidra and the 68000 module
decodes the whole image (0 undefined bytes). Optional only: `pyghidra` if we prefer Python
scripts, and an MCP bridge if interactive queries during a session are wanted.

**Structured exports are done and the annotation loop is closed.** `run-ghidra.ps1
-ModelOnly` writes (`re\model`): 750 functions (121 362 of 121 424 code bytes), 27 778
references with read/write/call flags, 1 937 data symbols, 573 strings, and the field map —
**3 437 typed accesses** in **1 069 buckets**, 22 unresolved, 6 functions that fail to
decompile. `tools\fieldmap.ps1` queries it. `run-ghidra.ps1 -Annotated` applies
`docs\structs.csv` + `docs/annotations.csv` and regenerates everything in about a minute;
`tools\decompile-quality.ps1` measures the result.

Effect so far (one sitting, only the MovE layer plus the ABI stubs): **85 named functions**
(was 0), raw field casts 1 684 → 1 603, `DAT_0002…` 9 042 → 8 892, `types.json` no longer
empty. Read the numbers as a floor: the two structs only touch five functions, and the
other 66 names are library stubs that cannot reduce cast noise. The decompile itself went
from `*(short *)(param_1 + 0xc) = ... - *(short *)(*(int *)(iVar1 + 0xc) + 8)` to
`param_1->screenX = ... - pmVar1->bitmap->hotX`.

The map was validated against layouts obtained the hard way before it was trusted:
`FUN_0001dcb0` yields `param_2+0xb` flag / `+0xc` pointer and the allocated node as
`+0` next, `+0x0a` sort key, `+0x36`; `FUN_0001dbd0` (`DrawNode`) reads `param_1+0x38`
(channel, 4 bytes) and `+0x3c` (vscale, 2 bytes), which is precisely what
`src/game/core/move.c` uses after reading the assembly. So struct archaeology is now a
query: `tools\fieldmap.ps1 -Offset 0x38`.

Detail, column meanings and caveats: `docs/model.md`.


## 14.5 Metrics to steer by

* **code coverage**: ported bytes / 121 424 (today ≈ 2 %). Target: 25 % after S0–S2,
  60 % after S4, 100 % excluding audio at S7.
* **test coverage**: functions with a passing `rcmp` fixture (today 0 %). Target: 100 % of
  ported functions — no exceptions, that is what makes sweeps safe.
* **reference coverage**: scene × frame pairs that are frame-exact against WinUAE.
* **velocity**: functions per session. Today ≈ 3–5; the framework should make 20–50 normal.

## 14.6 Risks and how they are handled

| risk | mitigation |
|---|---|
| the 68k interpreter is wrong in subtle ways | validate against hand-computed leaf functions first, then against functions whose visible output the emulator already proves (blitter, SMS loader); keep a fixture per instruction form |
| struct archaeology remains slow | dump structs from live runs (`rcmp` read/write tracing) instead of reading casts; annotate once in `annotations.csv` |
| the adventure layer is 60 % of the code and highly interdependent | S5 is explicitly a *system* port (state + event tables), not per-location code; use the world tables as data |
| regressions in already-good visual output | `verify-pack`, `verify-scene`, `verify-frames` stay in every gate |
| DOS target rots | same core, `ctest`/`rcmp` are host-only; build the DOS target on every commit |

## 14.7 Immediate next steps

1. **Annotation pre-pass** (`ApplyAnnotations` + re-analysis): define the display node, the
   picture struct, the palette arrays and the A4 globals; name the MovE and blitter
   functions. Measure with `tools/decompile-quality.ps1` (target: far fewer than 9 049
   `DAT_` refs and 1 684 casts, and `types.json` no longer empty).
   *(done for the MovE layer and every identified ABI stub; the rest of the game's globals
   and structures get named as sweeps reach them, since that is when the evidence exists)*
2. `tools/funcs.ps1` + `tools/coverage.ps1` → visibility, and the work queue for S0.
3. `Cpu68k` + `rcmp`, validated on ~10 S0 leaf functions.
3. `annotations.csv` + `structs.ps1`, seeded with the structures we already know, so the first
   sweep starts from typed structs.

After that: **S0 in one sweep**, then S1, then finish S3 (the intro end-to-end) as the visible
milestone.
