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

## Validated so far (2026-11-09)

| case | fixture | result |
|---|---|---|
| `00002410` `move.l -(A4),(d16,A2)` | `00002410.json` | A4 -= 4, 4 bytes copied, N set — hand-checked |
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

`powershell -ExecutionPolicy Bypass -File tools\harness-check.ps1` re-runs all twelve cases
plus the 680-byte plane comparison and prints PASS/FAIL — run it after touching the
interpreter or a ported function.

## Port vs original (the actual diff)

`tools\port-diff.ps1` closes the loop that used to be done by eye:

```
rcmp <addr> --fixture f.json --dump a.txt --emit-raw a.fx    # original, in the interpreter
bin\win32\ctest.exe <addr> --fixture a.fx > b.txt            # the C port, on the same state
compare a.txt / b.txt                                        # D0-D7, A0-A6, changed memory
```

`rcmp --emit-raw` writes the resolved start state as `ICFX` v1 (magic, entry, 16 registers,
memory blocks) so the C side needs no JSON parser. `tools\ctest\` is that C side:

| file | role |
|---|---|
| `ctest.c` | 16 MB memory model, fixture loader, canonical dump writer |
| `cases.c` | one **adapter** per ported function |
| `cases.txt` | address → fixture, the list `-All` runs |
| `build.ps1` | Open Watcom win32 console build |

An adapter is the *proof of the calling convention*: it reads the arguments where the
original reads them (`SP+4`, word vs long, the low half of a pushed word), calls the C port
with typed arguments and writes the result back the way the original does. It also declares
its contract with `fx_expect("d0")` / `fx_expect("")`, because a void function must not be
diffed on a scratch register the dbf counter happened to leave behind. Memory is always
compared. If an adapter cannot be written without guessing, the port is not structurally
faithful yet and does not get one.

```
powershell -File tools\port-diff.ps1 -All
PASS 0001a47c   PASS 00020810   PASS 00020820   PASS 000208a4
```

The first run of this loop found a real bug in the *adapter* (the original branches into its
`dbf`, so the counter is the exact byte count, not count+1) and one in the fixture reader
(a word argument's byte is the low half of the pushed word). Both were invisible to the
eye-checking it replaced.

With `-Random N` every case that declares random ranges (third column of `cases.txt`) is
repeated with seeds 1..N; the gate runs 20 seeds per case, so about 52 comparisons in 5 s.
That is where the "200 inputs per function" idea lands: randomise only fields whose every
value is a legal input, never a pointer or a loop counter.

The random sweep paid for itself immediately: `0001a47c` negates its **argument slot in
place** (`neg.w (8,A5)`), which the pinned case could not show because 0x8000 is one of the
values `neg.w` leaves alone. The adapter now reproduces the side effect and says why. It also
found that the binary fixture captured the *declared* blocks instead of the post-randomisation
memory, so the C side was replaying different inputs than the interpreter.

## Reference frames are data

`ref\manifest.csv` is the visual gate now; `tools\verify-frames.ps1` renders and diffs each
row.

```
name,args,reference,maxdiff,kind
room,"--shot {pack} Desert2/BACKS/!B28 {out}",ref\room.bmp,0,bmp
scene,"--scene {pack} Desert2/BACKS/!B28 Desert2/BACKS/TWIN 2 135 28 {out}",ref\scene1.bmp,0,bmp
logo,"--compose {pack} {out} Desert1/OPEN/LogoFlash.pal Desert1/OPEN/Lgo1,39,46,0 ...",ref\logo.bmp,128,bmp
intro-logo,"--intro {pack} Desert1/OPEN/!OPN Logo 60 60 {out} --trace {trace}",ref\traces\logo.txt,0,trace
```

`args` is the complete command line after the exe with `{pack}` / `{out}` (and, for trace
rows, `{trace}`) placeholders, so the manifest documents the exact invocation and a new scene
is one row. Quote the field when it contains commas. `kind` selects the comparison: `bmp`
pixels (default) or `trace` text. `tools\verify-scene.ps1` is a compatibility wrapper.

## The MovE trace (`--trace <file>`)

A frame diff tells you *that* two builds differ. A trace tells you *what* differs, for every
frame of an animation, in text:

```
# icftd move trace v1
start label=Logo assets=50 labels=24
f20 cmd label=Logo a=20 op=01 p1=00270000 p2=002C0000 p3=00010000
f20 palsrc entry=108 name=Desert1/OPEN/LogoD.Pal n=32
f20 draw a=20 name=Lgo1 dst=39,44 src=0,0 size=234x47 scale=1 ch=888CD210
f20 end depth=5 fade=39 armed=1 pal=C4780455
```

`icftd.exe ... --intro/--play ... --trace out\x.txt` logs four kinds of line, none of which
contains a pointer or an address, so two runs (or two builds) diff byte for byte:

| line | meaning |
|---|---|
| `start` | label entered, script size |
| `cmd` | one executed MovE command: opcode, asset index, the three 32-bit arguments |
| `palsrc` | a `.pal` asset converted into the live or the fade-target palette |
| `draw` | one `Move_DrawNode`: resolved asset name, final screen position, source rect, scale, channel |
| `end` | per frame: blit depth, fade state, and an FNV-1a hash of the 32 published colours |

`tools\trace-diff.ps1 -A mine.txt -B ref\traces\logo.txt` prints the differing line count and
the first divergences with a line of context. `verify-frames.ps1` uses the same comparison for
`kind=trace` rows, so a 61-frame intro is one exact gate row (`maxdiff` = allowed lines, 0 for
a trace).

The one trace row paid for itself on the day it was written: it names the intro logo at
`dst=39,44` / `273,88` / `92,97`, while the accepted WinUAE capture only matches those assets
two pixels lower (composing them at the trace coordinates differs by 4,364 pixels, at +2 by 26).
So the runtime places the logo 2 px high - see `docs\next-session.md`, it is the first open
lead rather than a fudge in `DrawNode`.

## One-command gate

```
powershell -ExecutionPolicy Bypass -File tools\gate.ps1      # ~26 s
```

Runs: exporter build → win32 build (and exporter publish) → ctest build → interpreter
fixtures → port-vs-original → `verify-pack` → `verify-scene`, prints a PASS/FAIL table and
writes `out\gate-summary.txt` (UTF-8). `-Quick` skips the builds, `-WithDos` adds the DOS
target. This is the definition of green; nothing else needs remembering.

## The library-call policy

## Interpreter coverage

Implemented: MOVE/MOVEA/MOVEQ, MOVEM (both directions, predecrement mask reversal), CLR,
SWAP, EXG, EXT, LEA, PEA, LINK/UNLK, ADD/ADDA/ADDI/ADDQ, SUB/SUBA/SUBI/SUBQ, CMP/CMPA/CMPI/
CMPM, NEG/NEGX/NOT/TST/TAS, MULU/MULS, DIVU/DIVS, AND/OR/EOR (+I forms, +to CCR), shifts and
rotates (register and memory form), BTST/BCHG/BCLR/BSET (static and dynamic), Bcc/BSR/BRA,
DBcc, Scc, JSR/JMP/RTS/RTR/RTE, NOP, TRAPV, CHK.

Not implemented (named failures, added only when a real function needs them): ABCD/SBCD,
ADDX/SUBX, MOVEP, NBCD, MOVE to/from SR and USP, RESET/STOP, TRAP, line-A/line-F
(FRESTORE is what the F-line hits are).

## S0 sweep

`out\leaves.txt` is the 395 leaf candidates from `re\model\functions.csv` (no callees, not a
thunk), smallest first. `rleaf --os-basic` runs each with its saved fixture and writes
`docs\port-ledger.csv` (`--ledger`):

| verdict | count | meaning |
|---|---|---|
| pure | 168 | returned, only parameter/stack memory — the cheapest ports |
| state | 154 | returned, wrote engine globals in the data hunk (0x21A58..0x2D598) |
| HW | 38 | returned, wrote custom-chip registers (0xDFF0xx): needs a hardware model |
| os | 20 | pure, but only after `--os-basic` answered an exec call |
| budget | 9 | never returned — address-taken data or an unbounded loop |
| ERR | 6 | 2 line-F in exception handlers, 2 divide-by-zero (fixture divisor), 1 ABCD, 1 runaway into data |

Without `--os-basic` the same list gives 235 returned and 151 named failures, almost all of
them the first `AllocMem`/`FreeMem`/`Forbid` in the function — which is why the exec models
were worth writing.

233 fixtures were saved into `ref\fixtures` by `rleaf --save`, so the sweep replays exactly
the same start states.

## Which global is that? (`--reads` + `tools\global-heat.ps1`)

The 154 `state` functions are not one problem but two: a few dozen globals that really are
engine state, and a long tail of globals touched once. Naming the head of that distribution
unblocks the most ports per hour, so the sweep can record which engine-state addresses a
function touches:

```
rleaf out\leaves.txt --os-basic --reads --ledger out\leaf-ledger.csv
```

The ledger gains two columns. `writes` lists the modified ranges inside the data hunk as
`addr:len` (`;` separated, first 64), `reads` lists every engine-state address the function
read, sorted (`;` separated). `tools\global-heat.ps1` turns that into a ranking:

```
addr      writers readers touched
0265f6        0      23      23
021d9c        0      20      20
```

Two things to know before trusting a row:

* **Runs longer than `-MaxInsns` (default 5000) are excluded.** 90 of the 395 leaf candidates
  run 14k instructions from an all-zero fixture: they fall into a shared error path, not their
  own body, and they made 75 unrelated functions appear to write the same 6 bytes.
* **A wide fill counts only its first 64 bytes**, and a *read* is any access at that address,
  including one through a pointer register. So a hot read address can be an array element
  rather than a named global; `-MaxInsns 0` and `re\model\globals.csv` (static `DAT_` refs)
  are the cross-checks.

The point of the ranking is the annotation pass: name the top ~40 in `docs\annotations.csv`,
then `tools\ghidra\run-ghidra.ps1 -Annotated` re-decompiles with those names and the `state`
functions stop being `DAT_0002xxxx` soup.


Three things the sweep taught us, which is why it exists:

* the "leaf" list is polluted — about 40 entries are PC-relative targets (`pea (0x2a,PC)`)
  or empty stubs, not callable functions. A function is only a function if it returns.
* a *returning* run is not a *pure* run: 38 functions "returned" while writing blitter and
  copper registers at 0xDFF0xx.
* **a verdict describes the executed path, not the function.** `FUN_000016c0` looks `pure`
  only because the default fixture passes 0, which skips every branch that writes its four
  globals. Verify a second path before believing "pure".
