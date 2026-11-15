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

**Scope of RULE 0.** RULE 0 in full applies to the re-implementation — everything the original also
has, i.e. everything that can be diffed against it. *Port features* are the code the original does
not have (save slots, the OSD, the title screen, the map's pointer control, host input plumbing, our
tooling); they follow the definition of done in
[`docs/port-features.md`](../docs/port-features.md) instead of a parity diff, and they too may never
be justified by a symptom or hidden behind an opt-in flag.

## Validation — check the change, not the project

RULE 0 decides *where* the change goes; this section decides how much has to be checked afterwards.
The game is feature-complete and in good shape, so validation is a cost to keep small:

* **The check that covers the change is the bar.** A translator, interpreter or runtime-model change
  is validated by the fixtures that exercise it (or by the core gate once); a change to a port
  surface by the one port check that measures it (`tools\gate.ps1 -Only <step>`). A whole-gate run is
  not a precondition for every change: `tools\gate.ps1` is the translation core, `-Full` adds the
  port checks for hand-off or for changes that touch several surfaces at once.
* **No new fixture is owed for every addition.** `ref\fixtures` is a regression set, not a checklist.
  Add a case when it is the cheapest way to see a divergence, not because a function was touched.
* **Name the divergence first, then measure.** For a re-implementation fix the one-sentence diff
  (*the original does X at `0xNNNN`, we do Y*) is still required; what is no longer required is the
  full parity apparatus around it. One targeted measurement — a single fixture, one
  `tools\state-diff.ps1` pair, one `--state`/`--ram` comparison — is enough when it shows the gap
  closed.
* **A picture may show a symptom; it never closes a fix.** Frames and screenshots are allowed as a
  first look, and for the port's own surfaces. The change itself still has to be explained as a
  difference from the original, or — for port code — asserted against its own claim, not against how
  the screen looks.
