# ICFTD recomp — ground rules

## RULE 0 — a bug is a DIFFERENCE, never a symptom (never overridden)

When the user reports a bug, the report tells you **only where to look**. Do not try to make the
symptom go away; find where our re-implementation differs from the original and close that gap.
This holds for **every kind of bug** — a wrong or garbled picture, a missing or wrong sound, a
crash, a hang, a wrong value, a scene that runs too slow or too fast, an input that is ignored, a
file that loads wrong. The report says where to look, nothing else.

1. Identify the path the original takes for that behaviour: `re/decomp_all/<module>/ALL.c`, the
   disassembly (`re/disasm/dshell.asm`), `re/model/*`, and the oracle run if needed.
2. Identify the same path in our code: generated `src/recomp/fn_*.c`, the runtime model
   (`src/runtime/amiga\*.c`: `blitter`, `display`, `machine`, `memory`), the OS shims, `plat_*`.
3. Diff the two and remove the divergence. The symptom disappears as a *consequence*.

A change justified by "it works now" is a band-aid and is rejected, even when every test is green.
Every fix must be able to name the divergence in one sentence: *the original does X at `0xNNNN`, we
do Y*. If that sentence cannot be written, the bug is not understood yet.

Corollaries, learned the hard way:

- The emulator is right by definition of this project: the original runs correctly on it. If our
  build misbehaves, the difference is in our code, not in the game.
- **Never gate a real fix behind an opt-in flag** that a normal launch does not pass. That is how
  the sheared player/plane sprites came back after having been "fixed".
- Machine state is the evidence, screenshots are not: `tools\gate.ps1`, `tools\state-diff.ps1`,
  byte-compare of `--state` / `--ram` dumps. A picture may *illustrate* a fix, never prove it.
- "It looks/feels right" is not a diagnosis in any domain. Timing, sound, input and memory are
  measured the same way the screen is: against the original's code and machine state.

Exception, and the only one: a bug in code that has **no counterpart in the original** — save
slots, the OSD, window/present backend, host input plumbing, our own tooling. There is nothing to
diff there, so implement it correctly on its own terms — but still never by papering over a symptom.
