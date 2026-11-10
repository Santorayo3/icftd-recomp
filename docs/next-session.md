# Next session — start Phase B with the state harness

Hand-off as of commit `706fedb` (2026-11-10). Read this, then the binding rules at the top of the
repo memory. They are not suggestions.

## Where the project stands

The project is one thing: statically **recompile the original `dshell` (750 functions / 121,362
bytes) into C** and ship a portable runtime. The tree was reset for that (commits `29c8877`,
`330af1f`, `706fedb`) and now contains three source directories and nothing else:

| directory | role | ships? |
|---|---|---|
| `src\runtime\` | `amiga\{memory,machine,blitter,display}.c`, `types.h`, `platform.h`, `plat\win32\`. Memory map, library shims, heap, exec structures, blitter, planar display. **No `m68k` reference anywhere.** | **yes** |
| `src\oracle\` | `main.c` (tool) + `cpu.c` (Musashi hooks, step/run loop, 50 Hz tick with the program's interrupt servers, boot, PC ring, `jsr (lvo,A6)` trap) | no, dev tool |
| `src\assetExport\` | formats **and** the 68000 interpreter + `rcmp`/`rleaf`/`rrun` differential harness | no, the reference |
| `src\recomp\` | **does not exist yet** — `fn_<addr>.c`, `fn_table.c`, `cpu_t` | **yes** |

Phase A is frozen and green. Measured: `bin\win32\icftd-oracle.exe` runs the original 30M
instructions to frame 662 with 478 rasters, 27,089 blits and 0 dropped writes (with a scripted fire
edge: frame 5823, 5752 rasters), and the call census reports **48 library calls used, 4 kinds
answered with 0** (`diskfont -30` OpenDiskFont; `-30/-36/-84` on the "mathffp" base = IEEE
single-precision Flt/Div/Fix).

```
powershell -ExecutionPolicy Bypass -File tools\gate.ps1     # 3 steps, ~19 s, green
```

## The rules (short form — the long form is in the memory file)

* **Verification is machine state, never images.** Registers + custom registers + RAM at frame
  boundaries. No frames, no screenshots, no captures, no `--match`. If the state matches, the
  visuals follow by construction.
* **No trial and error.** Every claim about the original comes from `re\disasm\dshell.asm` or
  `re\decomp_all\`. Chipset/OS contracts come from the HRM and UAE's source *read as documentation*.
* **Measure first.** `rt_lvo_report()` prints the call census at the end of every oracle run.
* **The seam is `u32 rt_os_call(rt_machine *m, u32 sp, u32 a1, int lib, s32 lvo)`.** The runtime
  never touches a CPU register; whoever executes code owns D0/A7/PC.

## Session goal

Prove the translation loop on **one** function, with the harness that will carry the other 749.

## Tasks, in order

1. **State dump + input script in the oracle.** `--state <prefix> [--every n]` and
   `--input <file>`. Canonical dump at each frame boundary: D0-D7, A0-A7, SR, PC, the custom-chip
   register file, and a hash of the full RAM image; the full RAM blob only around the first
   divergence. The input script is frame-indexed (`frame: fire,joy`) so a run is reproducible.
   *Accept:* the same script twice produces byte-identical dumps; changing one input frame moves the
   first divergence to exactly that frame.
2. **`tools\state-diff.ps1 -A -B`.** Prints the first divergent frame and the differing byte ranges.
   *Accept:* reports "identical" for equal dumps and pinpoints a deliberately injected 1-byte change.
3. **Translator skeleton.** `src\recomp\cpu.h` (`cpu_t { u32 d[8], a[8], pc; u16 sr; }` plus BE
   memory accessors over `rt_read8/16/32`), `fn_table.c` (sorted address table for computed jumps,
   **interpreter fallback**), and the emitter. Emit by hand first from the disassembly so the style is
   fixed, then automate from the existing `Cpu68k` decoder.
4. **First function end to end: `fn_0001dcb0` (`Move_CreateNode`).** Same fixture as `rcmp
   0001dcb0` — the three pinned ones are `ref\fixtures\0001dcb0*.json` (empty list, append, prepend,
   37/46/42 instructions). Registers and every touched memory byte must match the interpreter.
5. **Then** batch-emit, and report `translated / verified` per session.

## Definition of done for this session

* The harness is in place (1 + 2) and its own determinism is demonstrated.
* `fn_0001dcb0` diffs clean against the interpreter on all three pinned fixtures **and** under
  `rcmp --rand`.
* One command reports the count, and `tools\gate.ps1` grew a step "translated vs interpreted
  (fixtures)" — that is the only new gate step allowed.

## Traps worth remembering

* `--press <frame>` holds fire forever; the menus need a press **and** a release (`--release`).
* The program never exits by itself. Batch runs must be bounded — `tools\oracle-run.ps1` enforces a
  timeout and kills. A run that has to be killed by hand is a run that hides its own log.
* Watcom writes warnings to stderr; `ErrorActionPreference='Stop'` turns the first one into a
  "build failed". `tools\build-oracle.ps1` already wraps the compiler call and judges by exit code.
* The integrated terminal dies after heavy use — prefer `run_task`.
* The 68000 is big-endian and unaligned-safe: the translator must never cast emulated memory to a
  host pointer, always go through the accessors.
* `rt_lvo_report()` returning a new "answered with 0" kind is always a bug to fix, not a warning to
  ignore.
