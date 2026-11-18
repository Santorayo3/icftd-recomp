# The differential harness (Pillar A)

A 68000 interpreter inside the asset exporter that runs **one original function** from
`export/code/dshell/dshell.img` on a pinned start state and reports everything it changed.
It is the mechanical replacement for "port it and look at the frame".

```
src/assetExport/Cpu68k/Memory.cs    flat 24-bit big-endian space, page-wise change tracking
src/assetExport/Cpu68k/Cpu68k.cs    the interpreter (subset, grown on demand, loud failures)
src/assetExport/Cpu68k/Fixture.cs   fixture JSON in/out
src/assetExport/Cpu68k/Harness.cs   rcmp / rrun / rleaf
```

## Commands

```powershell
# run one function, print the result
src\assetExport\bin\Debug\net10.0\ICFTD.AmigaExport.exe rcmp 0001dcb0

# with an explicit fixture, tracing, and the write log (struct archaeology)
... rcmp 0001ec42 --fixture ref\fixtures\0001ec42.json --trace
... rcmp 0001ec42 --writes --writes-in 0x50000:0x400

# randomised inputs: fill these fields from the seed (all values hex)
... rcmp 0001a47c --rand 0x60004:0x2 --seed 7

# scripted single stepping (rrun)
... rrun 0001ec42 --script out\sms-debug.steps

# a whole sweep in one command, with a verdict per entry
... rleaf out\leaves.txt --save --out out\leaf-sweep.txt
```

Options: `--fixture <json>`, `--seed n`, `--max-insns n`, `--dump <txt>` (canonical result
for diffing against a C port), `--emit-raw <fx>` (binary fixture for the C replay),
`--trace`, `--regs D0=0x..,A0=..`, `--save <json>`, `--image <path>`, `--writes`,
`--writes-in <addr>:<len>`, `--dump-mem <addr>:<len>`, `--os-basic`.

`rcmp` finds `ref\fixtures\<addr>.json` automatically when `--fixture` is absent, so a pinned
case needs no arguments. Exit code 0 = RTS, 2 = step budget, 3 = named failure.

## Fixture format

```json
{
  "entry": "0001ec42",
  "regs":  { "A7": "0x00060000" },
  "mem":   [ { "addr": "0x00030000", "file": "sms/UANT.rec" },
             { "addr": "0x00038000", "fill": { "len": 256 } },
             { "addr": "0x0002c4d8", "hex": "00030000" } ],
  "maxInsns": 200000,
  "stopOnRts": true,
  "allowOsStubs": true,
  "stubs": { "137": { "model": "allocmem", "base": "0x00050000" } }
}
```

* `mem` sources: `hex`, `file` (relative to the fixture folder), `fill`.
* Defaults when the fixture omits them: `A4 = 0x29A56` (data hunk + 0x7FFE), `A7 = 0x80000`
  (clear of the image, which ends at 0x2D598), `SR = 0`.
* `stubs` models: `allocmem` (bump allocator at `base`, 8-byte aligned, honours MEMF_CLEAR),
  `freemem`, `zero`. Keys are vector slots (`"137"` = AllocMem) or library LVOs (`"-198"`).

## What a run does

* `stopOnRts` stops at the RTS that returns from the **entry** function (call depth 0).
* A `jsr` **through the A4 vector table** (0x21A58, 160 six-byte `jmp abs.l` stubs) is
  intercepted. A modelled slot runs its model; an unmodelled one *passes through* to the
  stub's target, so engine-internal entries (blitter, MovE, SMS loader, …) execute their
  real code instead of being skipped.
* An Amiga **library call** is recognised at `jmp/jsr (d16,A6)`: the displacement is the LVO,
  so no library base is needed. `allowOsStubs: false` turns any such call into a named
  failure — that is the purity test. With `true`, the call is recorded and returns 0.
* `--os-basic` (fixture `"basicOs": true`) additionally models the six exec.library calls
  whose effect is unambiguous — `AllocMem`, `FreeMem` (a bump heap at 0x800000), and
  `Forbid`/`Permit`/`Disable`/`Enable` (return 0) — and marks anything answered that way with
  `os-stub` in the record. Timing-dependent calls such as `Wait` stay unmodelled on purpose.
* Every write is diffed page-wise (256-byte pages, copy on first write); the report lists
  each changed run as `address len bytes`. `--writes` logs `pc -> addr size value` instead.
* Unimplemented opcodes, illegal EAs, divide-by-zero, CHK traps and TRAPs fail with the
  address and the mnemonic. Nothing is skipped, nothing is approximated.

## Validated so far (2026-11-09, fixture set re-pinned 2026-11-18)

| case | fixture | result |
|---|---|---|
| `00002410` `move.l -(A4),(d16,A2)` | `00002410.json` | A4 -= 4, 4 bytes copied, N set — hand-checked. The start state has A4 at base+4, because `0x2410` is not a function at all: it is the `"%d"` Ghidra took for one when it saw the `pea 0x2410` two instructions earlier, and starting at the real base would leave A4 four bytes low (see below) |
| `00002cc4` `move.w (d8,A0,D0.w),-(A1)` | `00002cc4.json` | index EA, A1 -= 2, word copy — hand-checked |
| `00020698` `unlk`/`rts` | `00020698.json` | frame restore, stops on RTS — hand-checked |
| `0000f160` `bclr.b #0,(d16,A6)` | `0000f160.json` | 0xFF -> 0xFE, Z = old bit — hand-checked |
| `0001dcb0` `Move_CreateNode` | `0001dcb0*.json` (3 cases) | AllocMem stub -> node at 0x40000 with asset/id/priority/srcW/srcH/channel; empty-list, append and head-insert paths all match the decompiled C |
| `0001ec42` `Sms_Load` | `0001ec42.json` | runs the real record `UANT` from the game data; the five unpacked planes are **byte-identical** (680/680) to `Sms.Decode` in the exporter |
| `0001dbd0` `Move_DrawNode` | `0001dbd0.json`, `0001dbd0-negative.json` | screen position = `((base + 0x8000) >> 16) - hot`, confirmed against `move.c` for a positive base (3,1) and a negative one (-13): the port's arithmetic and the original's unsigned shift agree once truncated to a word. The port's *blit* is a reimplementation, not the engine's blitter, so only the positions are diffable |
| `0001a47c` `abs16` | `0001a47c-neg.json` | -32768 -> -32768 (`neg.w` wrap) |
| `00020820` `strlen` | `00020820-strlen.json` | "Hello" -> 5 |

The SMS run is the strongest evidence collected: the interpreter, the stub ABI, the RLE
unpacker and the C decoder all agree on 680 bytes of bitplane data.

`powershell -ExecutionPolicy Bypass -File tools\harness-check.ps1` re-runs every case above
plus the 680-byte plane comparison and prints PASS/FAIL — run it after touching the interpreter,
the stub ABI or the harness itself. A ported function is covered by `tools\recomp-fixtures.ps1`,
which needs no new pinned case: the fixtures in `ref\fixtures` are a regression set, not a
per-function obligation.


## The Phase B differential

The pieces above are the oracle: `rcmp` runs one original function in the interpreter on a
fixture and dumps registers + the memory it touched. Phase B reuses exactly that: the *translated*
function is called with the same fixture and its dump must be byte-identical
(`tools\recomp-fixtures.ps1`, `src\recomp\check.c`). Seeded random
fixtures (`rcmp --rand addr:len --seed N`) cover branches the game rarely takes, and `rleaf`
pins a fixture per function so a translated function is replayable forever.

As of 2026-11-18 the pinned set is **263 fixtures and all 263 verify, none skipped, none failed**
against the complete translation (750 functions + 51 blocks). Three conventions had to agree for a
dump to be comparable, and they are the whole of what "skip" used to cover:

* **A refused library call stops inside the library on both sides.** The `jsr/jmp (d16,A6)` has
  been taken, so the PC is `A6 + LVO`; the translation always reported it that way (it is where the
  oracle stands too), the interpreter reported the call site until 2026-11-18.
* **A dump is complete.** `Memory.Modified()` used to stop at 4 096 changed ranges; a fixture that
  scatters 65 536 writes was being compared truncated against a complete dump.
* **Some model entries are not code.** Ghidra creates a function wherever a `pea`/`lea` names an
  address inside the code hunk, so `0x2410` (the string `"%d"`) and `0x1c20` (the 7 200-byte size
  word passed to `AllocMem`) are phantom entries. Their instructions still translate - the
  differential proves the translation of whatever bytes the model calls a function - but the
  fixture has to start in a state where those bytes are legal for both machines.

What a skip can still mean, and why the current set has none: a fixture whose function never
returns (a busy-wait nothing releases) or whose `rts` pops a value that is not code. Both are
fixture defects, not translation evidence, and both are fixed by pinning a start state the
function can finish in.

Nothing here compares images. A dump is registers plus memory, so a difference is a byte and an
address, not a picture.

