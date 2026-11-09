# Next session: the 68k differential harness (Pillar A)

This is the plan for the one long, uninterrupted run. Everything else is in place; this is
the piece that turns porting from "read assembly, hope" into "run the original, diff the
result".

Read order: this file, then `docs/scaling-plan.md` §14.2 Pillar A and §14.5, then
`docs/model.md` (the model and annotation loop that this builds on).

## Why this, and why now

We have 750 functions, 121 362 code bytes, all names/structs we can currently prove, and a
frame-exact renderer. **5 functions are ported (0.7 %).** The bottleneck is not understanding
— it is that every port is validated by eye. A differential harness makes validation
mechanical, which is the precondition for 20–50 functions per session.

Feasibility, all measured: one 137 KB hunk, no overlays, no `jmp (An)`, OS access only
through the vector tables (stub and log it), and 391 leaf functions with no callees that are
the natural first targets.

## Deliverable

```
src/assetExport/Cpu68k/Cpu68k.cs       68000 interpreter (subset, grown on demand)
src/assetExport/Cpu68k/Memory.cs       flat 24-bit space, big-endian, read/write tracing
src/assetExport/Cpu68k/Fixture.cs      fixture definition + result record
src/assetExport/Program.cs             new commands: rcmp, rrun
```

### Commands

```
ICFTD.AmigaExport rcmp <addr> [--fixture f.json] [--seed n] [--max-insns n] [--dump out.bin]
                   [--trace] [--regs D0=0x1234,A0=0x2d590,...]
ICFTD.AmigaExport rrun <addr> --script steps.txt        # scripted single-stepping, for debugging
```

* `rcmp` runs **one original function** and prints/writes: final D0–D7/A0–A7/CCR/PC, the
  number of instructions, and every modified memory range (address, length, bytes) as hex.
  Deterministic: a fixed seed drives fixture randomisation and is echoed.
* `rrun` is the debugging companion: step, print PC/opcode/registers, dump operand addresses.
  Build it early — it is what makes the interpreter debuggable.

### Fixture format (JSON)

```json
{
  "entry": "0001ec42",
  "regs": { "D0": "0x00000000", "A0": "0x0002b800", "A4": "0x00029a56" },
  "mem": [ { "addr": "0x0002b800", "hex": "534d5300..." } ],
  "maxInsns": 200000,
  "stopOnRts": true,
  "allowOsStubs": false
}
```

`allowOsStubs: false` means any call through the vector table is an error — that tells us
immediately which functions are pure and therefore cheap to port. When the harness meets an
OS stub with logging on, it records the call (slot, arguments) and returns 0, marking the run
as "purity unknown".

## Interpreter scope

Start with the subset the leaf functions actually use, and grow strictly on demand — a
missing opcode must fail loudly with `unimplemented opcode 0x____ at 0x______`, never be
skipped. First pass:

* data movement: `MOVE`/`MOVEA` (all sizes and modes), `MOVEM`, `MOVEQ`, `CLR`, `SWAP`,
  `EXG`, `EXT`/`EXTB`, `LEA`, `PEA`
* arithmetic: `ADD`/`ADDA`/`ADDI`/`ADDQ`, `SUB`/`SUBA`/`SUBI`/`SUBQ`, `CMP`/`CMPA`/`CMPI`/
  `CMPM`, `NEG`, `NEGX`, `TST`, `MULU`/`MULS`, `DIVU`/`DIVS`
* logic: `AND`/`OR`/`EOR` (+`I` forms), `NOT`, `ANDI`/`ORI`/`EORI` to CCR/SR
* shifts/rotates: `LSL/LSR/ASL/ASR/ROL/ROR/ROXL/ROXR` (register and memory forms)
* bits: `BTST/BCHG/BCLR/BSET`
* control: `Bcc` (`BRA`, `BSR`, `Bcc` short+word), `DBcc`, `Scc`, `JSR`, `JMP`, `RTS`,
  `LINK`/`UNLK`, `TRAP` (error), `ILLEGAL` (error)
* tables: `ABCD/SBCD` are unlikely; `CHK` and `TRAPV` can wait for evidence

Decoding rules that matter: effective-address modes 0–7 with size-dependent rules, `An`
addressing is always long, byte writes to `An` are illegal, `MOVEM` mask direction depends on
control mode, `ADDQ`/`SUBQ` `#8` means 8 not 0, `DBcc` always decrements.

## Validation order (do not skip)

1. **Hand-computed leaves.** `tools/coverage.ps1` lists them, e.g. `00002410` (4 bytes, 1
   insn), `00020c92`, `0000f160`. Run each, compare against the disassembly by hand. This
   proves fetch, EA calculation, flags and RTS.
2. **Known-output functions.** `Move_CreateNode` (0x1DCB0) allocates through an OS stub — stub
   `AllocMem` to hand out a fixed address and the whole thing becomes testable; the expected
   result is already encoded in `src/game/core/move.c`. Same for the SMS loader 0x1EC42 with
   a fixture taken from a real record (bytes are in `assets\game.pak`).
3. **Cross-check against the port.** For each ported function, run the original on N random
   fixtures, run the C port on the same input, diff. Anything the harness and the port
   disagree on is either an interpreter bug or a port bug — both are worth knowing.
4. **Then the sweep.** S0 = the 391 leaves, in size order, each with a saved fixture so the
   whole set is one command. A leaf that needs an OS stub or an unimplemented opcode is
   logged and deferred, never guessed at.

## Acceptance

* `rcmp` on the leaf set: 100 % of runs either produce a result or fail with a *named* reason
  (no silent skip).
* Every opcode the interpreter implements has at least one hand-checked fixture, and the
  fixture files live in `ref\fixtures\` (regenerable, small).
* `src/game/core/structs.h` (generated) is used by the new ported code, so offsets are never
  retyped.
* Coverage in `tools/coverage.ps1` moves off 5 functions, with every ported function carrying
  a `PORTED: <addr>` tag and a passing fixture.

## Practical notes

* Build: `powershell -ExecutionPolicy Bypass -File src\game\build.ps1 -Target win32` (the
  exporter is published alongside; the harness lives in the exporter, not in the game).
* The exporter already reads `assets\game.pak` and `disks\`; `dshell.img` is at
  `export\code\dshell\dshell.img` (flattened, base 0). A4 = 0x29A56.
* Regenerate the model any time with `tools\ghidra\run-ghidra.ps1 -ModelOnly`, and apply
  annotations with `-Annotated` (about a minute each, no re-analysis).
* Gates that must stay green: `tools\verify-pack.ps1`, `tools\verify-scene.ps1`.
* Do not re-analyse the Ghidra project without reason: it takes ~15 minutes and the
  annotation CSVs are already applied. `-ModelOnly`/`-Annotated` never delete the project.
