# Next session — the translator runs; the differential is the gate

Hand-off as of 2026-11-10 (Phase B, session 1). Read this, then the binding rules at the top of the
repo memory. They are not suggestions.

## Where the project stands

| directory | role | ships? |
|---|---|---|
| `src\runtime\` | `amiga\{memory,machine,blitter,display}.c`, `types.h`, `platform.h`, `plat\win32\`. No `m68k` reference anywhere. | **yes** |
| `src\oracle\` | `main.c` (tool) + `cpu.c` (Musashi hooks, step/run loop, 50 Hz tick, LVO trap) + `state.c` + `input.c` | no, dev tool |
| `src\assetExport\` | formats, the 68000 interpreter + `rcmp`/`rleaf`/`rrun`, **and the translator** (`Recomp\`) | no, a tool |
| `src\recomp\` | `cpu.h`/`cpu.c`, `hooks.c`, generated `fn_table.c` + `fn_<addr>.c`, `check.c` (fixture replay) | **yes** |

```
powershell -ExecutionPolicy Bypass -File tools\gate.ps1     # 4 steps
```

1. exporter build, 2. oracle build, 3. interpreter fixtures, 4. **translated vs interpreted**.

**Step 4 is GREEN**: 235 of 244 fixtures verify, 9 are skipped (4 the interpreter cannot finish -
busy-waits; 3 stop at the same unmodelled OS call on both sides but at a different pc, because the
interpreter steps into the library thunk before giving up; 1 interpreter ran into data; 1 more) and
0 differ. All four steps are green.

## The load address: 0x4000, decided by measurement

The translated code is written for base 0 (that is what Ghidra models and what the fixtures replay),
but the game must run at **0x4000**, the layout the original binary was linked for and the one the
oracle has been validated in. Measured on the same machine, same image bytes (the two files are one
hunk relocated by 0x4000):

| run | frame-boundary registers | 30M instructions |
|---|---|---|
| oracle, base 0x4000 | baseline | frame 5823, 5752 rasters, 21 out-of-range accesses |
| oracle, base 0 | **identical for 307 frames**, then diverges (first RAM difference at `0004008c`: heap block size 0x18 vs 0x60) | derails at 6.2M: `PC left the image at 02d598`, 34,684 out-of-range accesses |

At base 0 the AbsExecBase write at address 4 lands inside the image's own entry stub, and the frame
sentinels (`EMU_EXIT_PC` 0x200, `EMU_INT_RET` 0x204) land inside the image too. Whatever the
mechanism, base 0 is not the program's layout, so the product does not use it.

The translation is therefore load-address parametric instead of duplicated: every address in the
generated code is written `RC_ADDR(<image offset>)`, and `RC_BASE` in `src\recomp\cpu.h` is the only
difference between the two builds.

```
tools\build-recomp.ps1                     # RC_BASE 0 -> recomp-check.exe, the fixture replay
tools\build-recomp.ps1 -Base 0x4000 -Exe icftd-recomp.exe -ObjDir recomp-obj4k
```

`RC_BASE` defaults to 0, so the differential (`tools\recomp-fixtures.ps1`, 235/9/0) still builds and
runs exactly as before, while the whole set compiles and links at 0x4000 as well. Addresses and
immediates are told apart in `Emitter.cs`: `Imm()` is data, `ImmA()` is an address, and the table in
`fn_table.c` uses `RC_ADDR` too because `rc_lookup` compares against `c->pc`, a real address.


## What this session built

### 1. The state harness (acceptance = machine state, never images)

`--state <prefix> [--every n] [--ram <frame>[,<frame>]]` writes `<prefix>.state`: "ICST" v1, a
16-byte header and one 344-byte little-endian record per frame boundary — frame, insns, D0-D7,
A0-A7, SR, PC, FNV-1a-64 of the whole RAM image, `custom[128]`. `--ram` additionally writes the full
RAM image at the named frames (`<prefix>.<frame>.ram`); that is the only place where a difference can
be narrowed from "this frame" to "these bytes", so it is asked for explicitly.

`--input <script>` is a frame-indexed input timeline, `<frame> <fire> <joy0> [<joy1>]` (the joy words
are the raw active-low JOY0DAT/JOY1DAT values). A line takes effect at its frame and holds.

`tools\state-diff.ps1 -A <prefix> -B <prefix> [-Blobs]` prints the first divergent frame with the
fields that differ and — when both sides have a RAM blob for that frame — the differing byte ranges,
plus a note when a blob no longer hashes to its own record.

**Measured** (`bin\win32\icftd-oracle.exe export\code\dshell4k\dshell.img 0x4000 70000000`, 944
frames):

| case | result |
|---|---|
| same script twice | byte-identical dumps (SHA256 equal) |
| fire pressed at frame 500 vs no press | first divergence **501**, 7 bytes in 5 ranges (`028a85`, `17ff1e`, …) |
| the same press at frame 501 | first divergence **502** — one input frame moves it exactly one frame |
| one byte flipped in a RAM blob | pinpointed as `05a123 1 byte(s) 00 vs ff`, and the blob is flagged as modified |

Sampling happens at the end of the tick, so an input change at frame N is first *visible* at frame
N+1. That is a property of the machine, not of the harness, and it is the same for both runs.

### 2. The translator (`recomp`, `src\assetExport\Recomp\`)

`ICFTD.AmigaExport.exe recomp --report out\recomp-report.txt` translates the whole image:

```
recomp: 750 function(s), 121362 byte(s) of code
  emitted        726 function(s), 102920 byte(s), 29949 instruction(s)
  blocks          21 block(s) outside the model, 1974 byte(s), 545 instruction(s)
  not emitted     24 function(s)
```

- **Input**: `export\code\dshell\dshell.img` (base 0 — the image `rcmp` runs), function boundaries
  and instruction counts from `re\model\functions.csv`.
- **Decoding** mirrors the interpreter's group dispatch and effective-address table exactly
  (`Recomp\Decoder.cs`). A function is emitted only when the instruction lengths add up to Ghidra's
  size **and** the count matches the model's `insns`: that is what proves the decode complete. A body
  that falls off the end becomes a tail call into the next address, which is what the machine does.
  A straight walk is tried first; when it disagrees with the model it is retried **following control
  flow**, which skips the bytes a branch jumps over (opcode tables, hand-written data) - that is what
  emitted `000208e8` and `00006df2`, whose bodies contain data a linear walk decoded as code.
- **The machine is a trampoline**: a translated function never calls another one; it sets `c->pc` and
  returns, and `rc_call` is the instruction stream (dispatch on `c->pc`, run one function, repeat).
  Every instruction address is a `case` in the function's `switch (c->pc)`, so a `jsr`/`jmp` that
  lands *inside* a function - the engine's own opcode and command tables do exactly that - enters it
  at the matching label. Call depth is a counter (`rc_depth`), not a C frame, so an `rts` into the
  middle of a function works and recursion costs nothing.
- **Blocks**: a target outside every modelled function (a shared epilogue such as `0001f2ca`) is
  decoded as its own unit and enters the same table, so the dispatch resolves it instead of falling
  into the interpreter. 21 of them, found by following the constant targets of emitted code.
- **Output** (one file per function, deterministic): one C statement per 68000 instruction, the
  original's control flow as `L_<HEX>` labels, every instruction address in a comment and in
  `c->pc`, temps `t0` value / `t1` current / `t2` result / `t3` address / `t4` ea-scratch.
- **Seams**: `jsr <const>` and any branch out of the function push the return address, set `c->pc`
  and return; `jsr (d16,A4)` → the engine's vector slot, resolved *at emit time* (the displacement
  must divide into the 160-entry table, which also proves A4 is still 0x29A56); a slot landing on a
  library wrapper → `rc_os_call(c, m, lib, lvo)`; `jsr/jmp (d16,A6)` → `rc_os_call_a6`, where the
  runtime resolves the library from A6 (`rt_lib_index`). `(d8,PC,Xn)` transfers are computed at run
  time - dropping the index register sent `0001f89c`'s opcode dispatch to a fixed address.

### 3. The proof: `tools\recomp-fixtures.ps1`

For every translated function that has a pinned fixture, `rcmp` (interpreter) and `recomp-check` (the
same fixture through the C) print the same canonical dump — registers, SR, PC and every touched
memory byte — and the two are compared line by line. `-Rand n` replays seeded random variants of the
fixture's own memory fields; `-Only '0001*'` narrows the address range while a construct is being
added; the gate always runs the whole set.

`recomp-check` loads **the same load image** the interpreter loads and *then* applies the fixture, so
both sides start from the identical machine. The fixture's vector-slot stubs are resolved to
`(lib, lvo)` by the writer (`Harness.WriteRawFixture`) and matched on the LVO, which is the
interpreter's own rule.

**Measured: 235 verified, 9 skipped, 0 failed of 244 fixtures** (~46 s). Six bugs the differential
caught, five of them invisible in the generated text:

* `link.w`'s frame size was emitted as a no-op statement (`c->a[7] - 0xcu;`).
* The C replay did not load the image, so vector slots and the engine's pointer tables read as zeros.
* **No `jsr`/`bsr` pushed its return address** - every call frame sat 4 bytes high and the callee's
  `rts` popped the caller's own return address. 40 failures down to 8.
* `jmp (0x1f8ac,PC,D0w)` was emitted as a jump to a fixed address: the index register was dropped,
  so the engine's opcode dispatch always went to the same place.
* The replay had to be bounded (`rc_ops`/`rc_abort`, ticks on every access, call and backward
  branch): fixtures describing a fragment or a busy-wait otherwise never return.
* Two reference bugs, both in the interpreter side of the harness: `Cpu68k.DoStub` ran an unmodelled
  (passthrough) slot without counting it as a call, so the run stopped at the target's `rts`; and
  `Memory.Modified()` let a change run span pages that were never written, printing ~340 kB of
  "modified" memory that no store had touched.

The skip rule is ordered so a passing comparison is never skipped: compare first, and only excuse a
mismatch when the interpreter's own end state is meaningless (its instruction budget ran out, its
`rts` popped an address outside the image, or both sides stopped at the same unmodelled OS call).

## What is not emitted yet (24 functions)

| count | reason | next step |
|---|---|---|
| 18 | line-F (`FRESTORE`) | a 68000 has no line-F decoder; these are 68881 state restores. Decide whether the path is reachable before modelling anything. |
| 2 + 1 + 1 | `SUBX`, `SBCD`, `ABCD` | extend-flag and BCD forms; the interpreter implements none of them either |
| 2 | `jsr/jmp (d16,A4)` that is not a vector slot | find out what A4+disp is at those two sites |

One block was refused (`block at 00001c1e runs past its end at 00001c24`): the target sits in the
last 6 bytes before the next modelled function, so it never terminates inside its own range. It is
still reachable through the interpreter, so it is a coverage gap, not a crash.

## Next steps, in order

1. **Whole-program state equality** (the next acceptance layer): a host `bin\win32\icftd-recomp.exe`
   = the runtime + `src\recomp` (built with `-Base 0x4000`) + the oracle's register boot, with a
   Musashi-backed `rc_interpreter` installed so the 24 unemitted functions still run, then compare
   `--state` dumps of the interpreted and the translated build on one input script. `--state`,
   `--input` and `state-diff.ps1` are in place. The frame boundary must stay at 141,875
   instructions, so the host counts instructions per instruction (`rc_step`), not per unit: at the
   boundary it must run the game's interrupt servers - interpreted - and resume the translated code
   with whatever registers they changed.
2. The runtime gaps that appear once the translated build paints text: `diskfont -30`
   (`OpenDiskFont`), `graphics.Text`/`TextLength`, and the three IEEE single-precision ops
   (`-30/-36/-84` on the `mathffp` base). They are runtime code shared by both builds.
3. The 24 unemitted functions, once the whole-program run shows which of them are reachable.
4. Coverage: executed function/basic-block counters, so "what never ran" is a list, not a guess.
5. Performance and the DOS target, once the translated build plays the intro.

## Traps worth remembering

* **Watcom cannot be driven from a 700-source command line** and its `@response` file did nothing
  here. `tools\build-recomp.ps1` compiles in batches of 40 from `bin\win32\recomp-obj` with
  *relative* paths (the repo path has spaces, which Watcom splits on unquoted).
* Two overlapping replay processes lock `bin\win32\recomp-check.exe` and the link fails with
  "Permission denied". Only run one differential at a time.
* PowerShell 5.1: no `[ulong]` accelerator (use `[uint64]`), no `goto`, and `$arr += , @(...)` on a
  nested array throws "op_Multiply".
* Use `H:\Meine Programme\ripgrep\rg.exe` to search `re\disasm\dshell.asm`; the editor's grep
  silently returns nothing on that file.
* The integrated terminal dies after heavy use, and `Measure-Command`/pipelines can swallow a
  native command's output. One VS Code task, `dev: run`, executes `out\dev-run.ps1`; edit that
  script per job instead of adding tasks.

---

# Session 2 (2026-11-10, later) — the translated build *plays*

Whole-program parity is proven (120M instructions, 36,721 frame records byte-identical,
`tools\gate.ps1` 4/4, fixtures 225 verified / 19 skipped / 0 failed). The session then made the
translated build playable and fixed the first real screen.

## What the playable build is

```
play.cmd                                  # --run at --speed 30 (explicit --speed wins)
bin\win32\icftd-recomp.exe <img> <insns> [--window|--run] [--speed N] [--input file] [--shot f.bmp]
```

Intro runs ~592 vblanks (12 s), the YES/NO prompt appears, arrow keys move the selection, fire
confirms. Audio is still silent (only unmodelled device).

## The four fixes that made screens work

| defect | cause | fix |
|---|---|---|
| text drawn with an invented typeface | `diskfont OpenDiskFont` answered 0, so `SetFont` never ran | `rt_font_open_disk()` in `machine.c`: FontContents lookup, hunk font load, segment copied to the heap with `CharData/CharLoc/CharSpace/CharKern` relocated like the loader; `Text`/`TextLength` draw from `tf_CharData` with `tf_Modulo` rows, baseline at `cp_y` |
| a screen drawn once and then waiting never appeared | presenting only on `LoadView` | `oracle_tick` presents `m->view` every vblank (both front ends share it) |
| every interpolation the engine computed started from garbage | maths through `mathffp` (`SPFix/SPFlt/SPDiv`) answered 0 | FFP implemented in `machine.c` (sign, 7-bit excess-64 exponent bits 30..24, 24-bit fraction; `1.0 = 0x40800000`) |
| prompt invisible; arrows did nothing | see below | see below |

## Font file format (measured, both sizes agree)

`fonts/newnem.font` = FontContents: `0x0F00`, entry count, then 260-byte `{name[256], ySize, style,
flags}`. `fonts/newnem/<size>` = hunk file, `HUNK_CODE`, one segment; the `TextFont` inside it is
found by `ln_Type == 12`, `tf_YSize`, sane `tf_LoChar/HiChar`, and four in-segment offsets:

```
0x03A TextFont   YSize@20 XSize@24 Baseline@26 LoChar@32 HiChar@33
                 CharData@34 Modulo@38 CharLoc@40 CharSpace@44 CharKern@48
7  px: CharData 110  Modulo 40  CharLoc 390  CharSpace 806  CharKern 1014  (segment 1224)
10 px: CharData 110  Modulo 40  CharLoc 510  CharSpace 926  CharKern 1134  (segment 1344)
```

CharLoc is `{bit offset, width}` per character; glyph rows are `Modulo` bytes apart.

## Display/palette pipeline (all measured, no screenshots)

* the engine never touches `COLORxx`, `BPLxPT`, `COP1LC` or sprites — the blitter is the only
  directly programmed device, and `blitter.c` already models it. Colours and bitplane pointers live
  **only** in the copper list our `MrgCop` builds. A copper interpreter is *not* needed.
* live colour table = `0x298D2` (runtime `0x2D8D2`). Writers: `FUN_000007F4` panel open
  (pc `0x4842`, 5 words), `FUN_0001d96e` fade stepper (pc `0x219C2`, all 32 words **every** frame,
  final black copy at pc `0x21996`). The fade target `0x29964` is written with zeros by the engine
  at frame 30 and never re-armed — so the intro fades to black and, 11 frames after the panel
  opens, it wipes the panel's five colours. That overlap is invariant to the vblank model
  (141,875 and 35,469 instructions/frame tested) and identical in the interpreter.
* **workaround in place** (`display.c`, `rt_gfx_present`): while the panel-open flag `0x21F5A` is
  set, palette entries 0..4 are taken from the engine's own panel palette `0x21F50`
  (`0222 088C 0226 0559 0E00`). Documented as a port-side patch for that fade collision.

## Input decoding (`FUN_00011bf0`, the routine every menu polls)

```
JOY0DAT ($DFF00C):  bit1 = up, bit9 = down
                    bit0 ^ bit1 = left, bit8 ^ bit9 = right      => idle is all zero
$BFE001 bit7 = /FIRE (active low)
result: 0x24A80 = vertical (+1/-1), 0x24A82 = horizontal (+1/-1), 0x24A84 = "fire released"
```

The prompt's selection is the **horizontal** value: `-1` = YES (line redrawn in pen 4), `+1` = NO.
The host used to feed an active-low `0xFFFF` with bits 0..3, which the poller read as a permanent
"down"; `src\host\main.c` now emits the pattern above. Verified through the engine: right →
`0x24A82 = -1`. A frame-indexed `--input` script owns fire and joystick while one is loaded.

## Cheap state-based screen checks (use these, never a screenshot)

```
bin\win32\icftd-recomp.exe <img> <insns> [--input f] --shot out\f.bmp   # raster + palette + pen histogram
bin\win32\icftd-oracle.exe <img> 0x4000 <insns> --data export          # prints the library census
```

The census is the first thing to run after any shim change: it must say
`0 kind(s) answered with 0` (49 kinds, 4,716 calls today). A remaining 0 silently corrupts engine
control flow — that is how the font and the FFP maths were found.

## Next steps, revised

1. Play on: reach the map/first scene with fire and triage the next screen the same way
   (`--shot` histogram first, then the engine's own tables before any drawing code).
2. Audio: `AUD0/1/3 VOL+DAT+PER` are written directly (~1,300 writes/20M instructions). Nothing else.
3. The 24 untranslated functions + 1 refused block (26,645 interpreted instructions per 21M run —
   coverage gap, not a crash) once a screen depends on one of them.
4. Keep the rule: machine state is evidence; frames and pictures are not.

