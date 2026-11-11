# Next session — the translator runs; the differential is the gate

Hand-off as of 2026-11-11 (Phase B, session 3). Read this, then **RULE 0** and the binding rules at
the top of the repo memory (`.github/copilot-instructions.md`, `docs/recomp-architecture.md`) - a bug
is a difference from the original, never a symptom, and that holds for every kind of bug.

## The MS-DOS target (2026-11-11, later session) — it runs; performance is the open work

Step 1 as agreed: **no audio**, VGA, `icftd.ini` without a fullscreen entry, save slots as
directories with the engine's `ICFTD` file.

What exists: `tools\build-dos.ps1` (`bin\dos\ICFTD.EXE`, Watcom + the DOS/32A extender that Open
Watcom already ships), `tools\dos-pack.ps1` (a runnable release in `bin\dos\game`), `tools\dos-run.ps1`
(DOSBox), `src\runtime\plat\dos\plat_dos.c`, `src\host\dos_main.c`. Details and the DOSBox facts:
repo memory `icftd-dos.md`.

**Two divergences were found by machine state, both closed** (see the memory file for the full text):
`oracle_boot()` installs the dev tool's own `on_cia` hook, so a front end must set its hook *after*
it - otherwise a CIA timer expiry inside translated code runs the music driver on a stale register
file and the machine leaves the image; and the engine's font is `fonts\newnem.font`, which FAT cannot
hold, so the release ships 8.3 names plus `NAMES.TXT` and the platform retries a failed open through
it (without it `OpenDiskFont` returns 0 and the engine takes the no-font path). After both: DOS and
Windows RAM are byte-identical at the same vblank, the tick logs match, and the call census shows
41 kinds / 2014 calls / **0 answered with 0**.

### Performance — as a percentage of the original

The reference is the original's own frame. Measured with the oracle, the engine consumes its whole
141,875-cycle vblank budget every frame (3,449 of 3,926 frames run out of budget, average overspend
322 cycles = 0.2 %), so one engine frame is 20 ms on a 7.09 MHz A500 and 100 % means "our build
finishes a frame in the time the original did, on the same class of machine".

Measured end to end from outside the program (wall clock, differencing a 60-frame and a 160-frame
run so the ~35M-cycle startup drops out) in the launcher's own configuration, `cycles=30000` = a
486DX2-66 (a Ryzen 7 5800X3D sustains it, confirmed by ear as well: at `cycles=max` the game is
fluid, at 30000 it runs at 4-5 fps):

| | |
|---|---|
| now | 179 ms/frame = **5.6 frame/s** = **28 %** of the original |
| 100 % | 50 ms/frame (20 fps) |

**The old "cycles/frame" figure is dead - do not use it.** `plat_pit_now()` extends a 16-bit 8254
snapshot with `& 0xFFFF`, so any interval longer than 65,536 counts (55 ms) is silently truncated,
and a frame at the 486 clock is 180 ms. Worse, the low-clock derivation an earlier session used
(fix `cycles=3000`, difference an 11-frame and a 1-frame run) reported **the same 3,570,000
cycles/frame for the per-pixel and the nibble-table conversion**, two builds that differ by 4.7x in
real work and are visibly different speeds. It was measuring DOSBox's pacing, not our code. The
same run also reported identical numbers for `core=normal` and `core=dynamic`, which settles it.

Landing already: the planar->chunky conversion used to be the single biggest hot spot - a per-pixel,
per-plane inner loop (five bit tests per pixel, 320x200, run 1.49 times per frame). It now goes
through nibble tables (two plane bytes name four pixels), verified byte-identical on five screens,
and is 4.7x cheaper in that loop (host time per frame 36.6 -> 24.0 ms at `cycles=max`).

What the profile says now (measured at `cycles=max`, where the 8254 tracks real time and the samples
stay inside one wrap): 6,062 68k instructions per frame, 274 of them in the CIA handler (the music
driver, 0.93 runs/frame); the conversion runs 1.49 times per frame; the copy into VGA is 64 KB.

Order for the next session (biggest first, in the percentage metric):
1. **The per-instruction seams.** Every translated 68k instruction makes 4-6 out-of-line calls
   (`rc_step`, `rt_trace`, `rt_time_run`, `rt_cia_service`, plus one or two memory helpers). That is
   what a frame's 6,062 instructions turn into 179 ms. Inline the no-op cases, call `rt_time_run` /
   `rt_cia_service` only when a timer is actually armed, and give the memory helpers a RAM fast path.
2. **Run the vblank/CIA handlers through the translated dispatcher** instead of `oracle_run_handler`
   - 595 instructions per frame currently go through the interpreter, which costs an order of
   magnitude more per instruction. Needs a machine hook like `on_cia` so `src\oracle\cpu.c` keeps its
   interpreted dev path; verify with `--ticklog` + `--ram` equality against the Windows build.
3. **Convert once per frame.** 1.49 conversion passes per frame: `LoadView` converts, then
   `rt_frame_present` converts the same view again at the vblank. Proving when the second pass can be
   skipped is worth ~1/3 of the conversion cost.
4. Present straight into VGA memory through a byte-pair lookup (no second 64 KB copy), and a blitter
   fast path for the common minterm 0xCA with direct byte-swapped word access.


## Where the last session left off (2026-11-11)

Done and verified in this session, in order:

1. **Palette:** `cprlist` `MaxCount` is a *count of entries*, not of register/longword pairs
   (`rt_gfx_mrg_cop` wrote `colours`, `rt_gfx_present` read pairs). Half the window was never
   loaded, so CLR14..31 stayed blank. Both sides fixed; the user confirmed the colours.
2. **Time is cycles, not instructions** (`docs/recomp-architecture.md`, "Time — cycles, not
   instructions"): `EMU_CYCLES_PER_FRAME 141875`, per-opcode cost baked into every generated
   `rc_step()` from Musashi's own table (`tools\gen-cycles.ps1` -> `Recomp\CycleTable.cs`), the
   blitter charging its DMA slots (`words*rows*channels*2`), `play.cmd --speed 30` deleted. Measured
   50.0 frame/s in the playable build, capability 285 f/s; MovE steps 160k/513k cycles against the
   A500 reference 146k/543k.
3. **Oracle cadence:** `m68k_execute(1)` now drains `RESET_CYCLES`, so oracle and translation agree
   exactly on insns + leftover budget at every vblank (previously one phantom step).
4. **Flight crash (divu)** after regenerating `src\recomp\fn_*.c`: the hand-edited IFF-skipper seed in
   `fn_00009ae0.c` was wiped and `ants`' 8SVHDR was parsed before it existed. The seed now lives in
   `step_budget()` (`src\recomp\cpu.c`), where regeneration cannot reach it. **Regenerating `fn_*.c`
   deletes hand edits - there is no `src\recomp\patches` yet, so keep every fix at a seam.**
5. **Garbled player/plane sprites - root cause found and closed:** the blitter's `BLTxPT` are *word*
   pointers. `FUN_00011208` fetches `w+2` bytes/row (extra word for the shift register,
   `BLTALWM = 0`) and writes `BLTAMOD = BLTBMOD = -1`, i.e. `w+1` read as bytes; with bit 0 dropped
   it is exactly `w`. `blitter.c row_advance()` now clears bit 0 for all channels and the write-back,
   and the pointer registers mask bit 0 on write. Proof in `docs/next-session.md` ("word pointer"),
   nothing flag-gated: `--byteptr` exists only to reproduce the old wrong model.
6. **RULE 0** written down (`.github/copilot-instructions.md`, README, `docs/recomp-architecture.md`,
   repo memory) after it became clear that a flag-gated "correction" plus a lost hand edit had
   let a fixed bug come back.7. **Phase 4 - the rest of the clock** (2026-11-11): `dos.Delay(n)` is a real `n`-frame wait
   (`m->waitFrames`, consumed before the next instruction; measured 108 -> 115 for `Delay(7)` and
   unchanged for `Delay(0)`), `$DFF004`/`$DFF006` and the CIA-A/B TOD counters are derived from the
   frame budget instead of reading as constant zero, and `plat_frame_sync` counts the 20.000 ms
   period on `QueryPerformanceCounter` (198 frames in a 4 s windowed run) instead of the 15.6 ms
   `GetTickCount`. Details in `docs\recomp-architecture.md`, "Time - cycles, not instructions".
State after this session: `tools\gate.ps1` **4/4**, `out\tilecheck.ps1` 2 mismatched cells
(baseline), oracle vs translated `--state`/`--ram` identical at frame 100, 50.0 frame/s.

Known open items:

- `tools\state-diff.ps1` reports **frame 30 with D0 only**; RAM is byte-identical at frames 100-500.
  Since the beam/TOD registers became clock-derived the low words agree (both 0x7FFE) and only the
  high word differs (oracle 0xFFFF7FFE, translation 0x00007FFE), i.e. a stale upper half in one of
  the two register files at that boundary - narrowing, still unexplained, still non-blocking.
- **Phase 4 is done** - what remains of it: `dos.Delay` is not called by any scripted run yet (0
  calls in 30M instructions to frame 12,198), so its shim is verified only by the deliberate call;
  the CIA-A/B *timers* (`$BFE401`..`$BFEE01`, armed by the audio driver) are still not modelled;
  and `plat_ticks_ms` still reads `GetTickCount`, which nothing time-critical uses.
- The DOS build stays a first-class target: no runtime cycle table, costs are baked into the
  generated C.

## Where the project stood before (2026-11-10, Phase B session 1)

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

## What is not emitted yet (18 functions + 1 block)

Updated 2026-11-11 (the `SUBX`/`SBCD`/`ABCD` and `jsr (d16,A4)` rows are done):

| count | reason | what it really is |
|---|---|---|
| 18 | "line f" | **not** an FPU: every one of them contains an inline 16-bit **jump table** (`bra.w`, then a run of `0xFFxx` offsets, then the handlers), reached by `move.w (d16,PC,Dn.w),Dn` + `jmp (d16,PC,Xn)`. The linear walk reads the table as code and stops on the first `0xFFxx`. A fix has to (a) know the table is data and (b) dispatch the computed jump - see below. |
| 1 | `block at 00001c1e runs past its end at 00001c24` | target sits in the last 6 bytes before the next modelled function. |

Done in this pass: `SUBX`/`ADDX` (2 functions), `SBCD` (1), `ABCD` (1) now decode, emit and are
implemented in the interpreter; the two `jsr (d16,A4)` refusals were **not** vector slots but
`movea.l D0,A4` + `movea.l (A4),A4` + `jsr (0,A4)` - a virtual call through an object - and now fall
through to the emitter's computed transfer. 726 -> 732 functions emitted.

Fixtures pinned for the new ones (`rleaf out\new-funcs.txt --save`): `00004782`, `0000715c`,
`0001bc0e` verify; `0001aaac` exhausts the step budget (a loop), and `0000f3f4`/`0000f5b8` stop at an
unmodelled library call, so those three have no fixture.

## Where the remaining interpreted instructions are (measured)

`bin\win32\icftd-recomp.exe <img> 120000000 --input out\input-narr.txt --interpstat` now prints one
line per *interpreted stretch*, keyed by the pc the interpreter was entered at:

```
recomp: 29679 translated entry(ies), 195048 interpreted instruction(s)
  0234B2 31752   023674 31400   02368C 19625   023396 17624   02491A 14029 ...
```

Every one of them is inside `FUN_0001f2ae`'s MovE opcode dispatch (runtime 0x2335E..0x23750 =
image 0x1f35e..0x1f750) plus the cstart at 0x20918 - i.e. **computed jumps inside translated
functions**, not refused functions. The block emitted at `0001f2d2` covers only up to the next
known target, so the handlers reached through the jump table fall back to the core. 195k of 120M
instructions (0.16%); behaviour is exact either way.

## Next steps, revised (2026-11-11)

1. **Audio: done** (see "Audio" below). Paula's four DMA channels and the CIA-A/B timer A
   interrupts are modelled; the engine's own music driver runs from the timer interrupt, as on the
   hardware. Nothing flag-gated: a normal launch plays.
2. Jump tables: emit the table as data and dispatch the computed jump over the table's own targets
   (`if (pos == RC_ADDR(t)) goto L_t;` for each entry), which turns the 18 refused functions *and*
   the 0.16% interpreted stretches into translated code.
3. Keep the rule: machine state is evidence; frames and pictures are not.

## Audio (2026-11-11)

The game never writes AUDxDAT (measured: zero stores in the whole program). It plays samples
through the audio DMA and generates its music with its own driver, so two things had to be modelled:

* **Paula** (`src/runtime/amiga/audio.c`): AUDxLC/AUDxLEN/AUDxPER/AUDxVOL per channel plus the
  DMACON channel bits and DMAEN. Playback rate is `3546895 / AUDxPER`, channels 0+3 mix left and
  1+2 right, AUDxVOL 0..64 and periods below 124 silence the channel. Mixing runs at 44.1 kHz into
  `waveOut` (`plat_audio_*`), 8 x 512-frame buffers (4 dropped ~16 % of the samples: the mixer
  hands over a frame's worth at each vblank, so the queue must hold several frames).
* **AUDxLC/AUDxLEN are START registers, not the DMA position** (2026-11-11, the difference that made
  the music distorted and the narration silent): the DMA keeps its own pointer and length and
  loads the two registers when the current buffer ends, or when the channel's DMACON bit goes
  0 -> 1. AUDxPER and AUDxVOL only change rate and volume.
  Evidence from the engine itself (`--audiodump` plus a temporary register-write log):
  * `FUN_0000f286`'s player writes **AUDxPER and AUDxVOL on every row**; treating a register write
    as a restart rewound every sample 50-60 times a second - the distortion.
  * `FUN_00009b60` (slot 30) starts a sample by clearing the channel, writing LC/PER/LEN/VOL, then
    setting the bit; `FUN_00009bca` (slot 32, "arm") writes the 2-word silence buffer *while the
    channel still plays* - that only works if the writes are queued for the buffer end.
  * Measured intro: frame 375 plays `voice1` on ch3 (LC 0x0005B180, PER 579, LEN 0x9A34 words =
    78952 bytes, VOL 63), nothing touches ch3 for the next rows, and frame 381 arms the silence
    loop - so the narration must run its full 12.9 s. Before the fix it restarted every 20 ms and
    was inaudible.
  Check: 20 ms self-correlation of the music region was 0.67 with the old model (sample restarted
  every frame) and is 0.07 now (same as at other lags).
* **CIA timers** (`audio.c`): TALO/TAHI/CRA at `$BFE401/$BFE501/$BFEE01` (and CIA-B equivalents),
  one counter step per E clock (10 CPU cycles), continuous reload from the latch, ICR mask.
  `rt_time_run()` raises the interrupt (pending, serviced at the next instruction boundary by
  `rt_cia_service`); the front end runs the handler (`oracle_run_icr`) - it is game code.
  Engine chain: `FUN_0000ed90` = `AddICRVector(ciaa.resource, 0, …)` + `AbleICR(0x81)` (bit 7 =
  enable, bit 0 = timer A), `FUN_0001013a` starts the timer at latch 0x2E9C = 59.4 Hz, and the
  handler `FUN_0000f264` → `FUN_0000f646` (tempo) + `FUN_0000f286` (player) + `FUN_0000f3f4`
  (per-channel DMA + volume, DMACON bit 15 = set/clear) reprograms it from the period table at
  `0x0F6E2` on every tempo change (measured 53..60 Hz).
* **Device time is the frame budget**: instruction cycles, blitter DMA cycles (`rt_blit_run`) and
  the idle rest of a frame (`rt_time_idle`, a WaitTOF) all reach mixer and timers, so 803 frames
  receive 114.0M cycles = 141,875 per frame. Charging only instructions left the audio 59 % short.
* **Settings**: `[AUDIO] sound=0..10` / `music=0..10` (`rt_config_int`). A channel is music when the
  interrupt handler started it (AUDxLC written with `audio.inHandler`), everything else - the
  engine's sample player slot 30/`FUN_00009b60` - is a sound effect. Measured on the intro:
  97 % of the non-silent bytes are music, 4.5 % sound.
* `icftd.ini` is written with its defaults on the first start (`rt_config_ensure`), next to the
  executable, and is no longer in git. Video default is fullscreen.
* Verification: `--audiodump <file>` on both front ends writes raw s16 stereo without a device;
  identical runs produce byte-identical captures (oracle and translated included), `sound=0`+`music=0`
  gives an all-zero capture. Oracle vs translation state parity is unchanged (1449 frame records,
  RAM byte-identical at frames 100/300; only the known frame-30 D0 high word differs),
  `tools/gate.ps1` 4/4.


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

## Save slots and the on-screen display (2026-11-11)

The engine has exactly one save file: `ICFTD` on volume `DSAVE:`, a raw dump of two fixed engine
ranges (120 B at `0x021E18`, 12 324 B at `0x02686C` — 12 444 bytes, no header). Details and the
plan: `docs/savegames.md`.

* The runtime maps `DSAVE:` to `<exe dir>\saves\slot<N>\` and creates both directory levels on
  demand — the engine `Lock`s the volume before it opens anything, and a failed lock parks it in
  its "insert volume" panel.
* `dos.Open` honours the mode now (`1005` read, `1006`/`1004` create), and `dos.Write` writes
  through a real handle and returns the count. Handle 0 is still the console and still echoes.
* **F1..F4 pick a save slot, F5 steps to the next; `--slot N` does the same headless.** There is no
  ini entry for it on purpose.
* Feedback goes through the runtime's own overlay (`rt_osd_text` / `rt_osd_icon` in `display.c`),
  not through the windowing layer: "Save Slot - N" in #00FF00 with the game's own disk font
  (`m->osdFont`, `newnem/7`) 2 px in from the top **left**, and the save icon 2 px in from the top
  **right** for 2 s. It is drawn into the chunky framebuffer at the end of `rt_gfx_present`, so a
  DOS/VGA build inherits it; only `plot()`'s `EMU_BM_FRAMEBUFFER` case is platform-visible.
  Palette indices 240..245 (icon) and 255 (text) are the OSD's, set after the game's table.
* The icon sprite is `assets\autosave.png` → `src\runtime\amiga\osd_icon.h` via
  `tools\mkosdicon.ps1` (16x17, six colours, own 2 px transparent border).

Checks that do not need a screenshot:

```
powershell -File tools\dos-save-test.ps1     # the save path through rt_os_call, slot3
bin\win32\icftd-recomp.exe <img> 12000000 --shot out\osd.bmp --osd "Save Slot - 2"
bin\win32\icftd-recomp.exe <img> 12000000 --shot out\osd.bmp --osd save
```

`--osd <text>|save` keeps an overlay up (a development aid), and `--shot` writes the last presented
raster, so "the overlay is really there" is a pixel count: 87 pixels of `(0,255,0)` in
`x 3..62, y 2..7`, 141 icon pixels in `x 306..317, y 2..14`.

**The save runs end to end** (measured 2026-11-11). `--call 0x1442A:900` enters `FUN_0001042a` at a
frame boundary with the program-end sentinel as its return address, so the engine's own routine runs
on the live machine state: `dos.Info` → "validated", `Open("ICFTD",1006)`, `saved 12444 byte(s) to
slot 1`, and the file is byte-identical to the RAM at `0x25E18..` (120 B) and `0x2A86C..` (12 324 B)
from a `--ramstop` dump at the same stop point.

That first real save (the user's "Take a Flight") found the last missing shim: **`dos.Info` (LVO
−114)**. `FUN_0000050e` calls it and loops until `id_DiskState` (+8) is `ID_VALIDATED` 0x52, drawing
"is write protected" for 0x50; answering 0 left the block zeroed, so neither branch matched and the
game retried the volume forever. The runtime now answers 0x52 for the save volume and 0x50 for the
read-only disk folders.

### The second "Take a Flight" failure was a missing data file, not the save

After the `dos.Info` fix the same action reported **"Unresolvable file read/write error! The game
is unplayable."** — `FUN_0000067c`'s panel for `Open(name, MODE_NEWFILE)` failing, which the engine
reaches through `FUN_000002f4` from *both* the save wrapper and the bank opener `FUN_000202c4`.
The flight routine `FUN_000107a6` (vector slot 53) calls that opener with `Desert3:WANI`, and
`WANI` was not in `export\disk3`: its header block (914) and its 376-block data chain are intact on
the disk, but **no directory chain reaches it** (nor `hurt2`, `jet`, `stab1`). `tools\extract.ps1`
now recovers unreferenced header blocks (`AmigaFs.ReadOrphans`, printed as `(orphan)` by
`list`). Measured after the fix: `--call 0x147A6:1000` logs `open "Desert3:WANI" -> export\disk3\WANI
(183016 bytes)` and the flight keeps running instead of parking in the panel.

Two runtime defects the diagnosis turned up, both fixed:

* `rt_file_close` never freed the 44-byte `FileHandle` block, so every open leaked engine heap —
  the same panel is what a failed `rt_alloc(44)` looks like.
* A failed `dos.Open` printed nothing. It now names the reason (`all 16 file handle(s) in use`,
  `no disk holds <name>`, `cannot create <path>`, `no heap for the FileHandle`) and the success
  line carries the live handle count (`[1 of 16]`), so a climbing count is a leaked close.
  `TBOX` and `background` are opened with mode 1005 and are *not* on the disks; the engine tolerates
  both.

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

---

# FLIGHT MINIGAME ("Take a Flight") — continue here

## What is already proven (do not redo)

- **The recompilation is faithful.** Oracle (patched image, `src\oracle`) and the translated build
  enter `FUN_000107a6` at the *same instruction and PC* and stay identical for **1562 frame
  records** (registers, custom-chip file, RAM hash). So anything wrong on screen is shared-runtime
  (blitter / present / palette) or a shim answer — not a translation bug.
  Reproduce with `out\flight-parity2.ps1 -Step host|oracle|diff -Insns 150000000` (driven from the
  `dev: run` task, which runs `out\dev-run.ps1`).
- **Instruments**: oracle `--callat <pc>:<insns>:<arg>[:<atpc>]` (inject at an exact instruction,
  optionally only at that PC); the host's `--call` line prints the pre-injection pc so the oracle can
  match the boundary; `--progress` in `display.c` prints the present geometry, palette sources and
  the row range that carries non-black colour.
- **Fixed so far**: the divu in the 8SVX loader (entry seed for `FUN_00009ae0`'s uninitialised loop
  flag, in *both* front ends — see the `oracle_step` comment and `fn_00009ae0.c`), and the flight
  palette (a 14-entry copper list against a 32-colour ViewPort; the ColorMap now fills the tail).

## State of the flight screen (measured, identical in both front ends)

- 320x200 view, bitmap **bpr 40, 216 rows, depth 5**, palette now 32.
- Engine bitmap carries content in **rows 0..109 only**; rows 110..199 are all index 0.
- ~6 hardware blits per frame, **0 dropped writes** (oracle `--progress` counters).

## SOLVED 2026-11-11: rows 110..199 were the tile renderer's chained blits

**Cause (measured, not guessed): the blitter did not write its pointer registers back.** The world
renderer (`FUN_00011512` and its variants at `0x11748/0x117f8/0x11a02/0x11a42/0x11a88/0x11adc/
0x11b2c`) writes `BLTDPT` **once per column** and then issues 20 blits of one 16x10 tile each,
letting the hardware leave D advanced by `2*words + dmod` (= one bpr) after every blit. Our model
computed every row from the start pointer and never stored the result, so all 20 tiles of a column
landed on the same 10 rows: the world filled 12 tile rows (~110 px) instead of 20 (~200 px).
`blitter.c` now advances `BLTAPT/BPT/CPT/DPT` after the blit (only for the DMA channels that blit
enabled), exactly as UAE/HRM have them, via `row_stride()`.

| measurement (`--progress 1200`, injection `--call 0x147A6:1000:0x20000`, 150M insns) | before | after |
|---|---|---|
| non-black rows of the presented picture | 0..109 | **0..199** |
| lit pixels | 29,733 | **57,320** |
| engine-bitmap bytes per 20-row band (bands 6..9 = rows 120..199) | 0 0 0 0 | **1386 1603 1372 1421** |

Checks that passed with the fix: `tools\gate.ps1` 4/4; flight parity oracle vs translated **1562
frame records identical**; the intro's frames are unchanged (lit px 7145/13359/18337/35721 at frames
185/189/193/197, the same before and after) because every other blit path in the engine reloads its
pointers per blit.

## The picture blits: modulo -1 is a word pointer losing its low bit

`FUN_00011208` fetches `w+2` bytes per row - one word more than the picture is wide (000112ce
`addq.w #2,D1` before `lsr.w #1,D1`), the extra word only filling the shift register and silenced
by `BLTALWM = 0` - and sets `BLTAMOD = BLTBMOD = -1` (000112be/000112c6). A byte-pointer reading of
that gives a row step of `2*words - 1 = w+1`, and every picture row shears by 8 px.

The buffers are `w` bytes per row, and the original never has to care: `BLTxPTH/BLTxPTL` are
**word** pointers, bit 0 of the low register does not exist, so the odd step loses that bit and
comes out as `w`. Three independent checks say so:

- `FUN_0001e504` (the mask builder) `AllocVec`s `h*w` bytes and steps its own one-word blits by
  `AMOD = w-2`, i.e. `w` for a 2-byte fetch (as written: no residue).
- `FUN_00011208`'s other two paths compute `w` from even modulos alone - clipped: `mod = k-2` with a
  `w-k+2` fetch; wide: `mod = w+m-bpr` with a `bpr-m` fetch - so only the narrow path relies on the
  truncation, which is exactly where the engine writes the odd `-1`.
- The flight's five sprite blits (frame 1305, `--blitlog 1200`) have B pointers `0x3A0 = 928` bytes
  apart, and `928 = 16` (MemHeader) `+ 24 rows * 38 bytes`: `w = 38`, the step the truncated pointer
  gives (the mask at 0x09EA38 also lines up at pitch 38 and drifts at 39).

`blitter.c` therefore uses `row_advance()` = `2*words + mod` with bit 0 cleared, for all four
channels and for the pointer write-back. Even steps are untouched, so the tile renderer, the mask
builder and the flipped scroll blits behave exactly as before. `--byteptr` (formerly `--blitfix`,
also accepted as `--noblitfix`) restores the wrong byte-pointer arithmetic for bisection; the
oracle takes it too, so both sides stay comparable.

**The composition chain, all measured:**

```
FUN_000107a6 -> FUN_00010e48   (tile geometry: 2-byte/16px wide, 10-row tiles, sheet 70x18,
                               map 1200 rows; FUN_00011094/slot 55 precomputes BLTSIZE 0x281)
FUN_0000bfca   loop: c390/c75e/ca5e/c310 -> slot 58 (tile renderer) -> d5e8 (sprites) ->
                                beda (RectFill strip, pen 0 + pen 6 border) -> d376
tile renderer  20 columns x 20 tile blits into the offscreen world planes (0x05BBE0.., 5 planes
               0x1F50 apart), chained on the blitter's pointer registers
pc 0x15730     5 blits, con0 0x09F0 (minterm F0 = copy A), 320x200, world planes -> screen planes
               (0442A8.. = 0x044270, or 04F460.. = 0x04F428: the two buffers alternate per frame)
pc 0x151F0     the scroll strips (32x5) that update the world buffer as the camera moves
```

Instrumentation added for this (all behind existing dev flags, no output by default):
`--progress [<frame>]` now also prints the bit content per 20-row band of the presented bitmap, the
8-row screen-write band mask, and **both** engine buffers (`0x26612`/`0x2660E`) plus the tile
renderer's parameters; `--blitlog [<frame>]` prints each hardware blit with its issuing pc, pointers,
modulos, size and whether it lands in the bitmap on screen (host only).

## Where to look next (in this order)

0. **The injected flight carries no flight state — and the game's own way in is the menu.**
   `FUN_0000247a` builds the location's action list and maps action characters to modes:
   `'~'` Make a Call = 1, `'|'` Go to Map = 2, `'%'` Fight = 3, `'}'` Escape Hospital = 6, `'{'`
   **Take a Flight = 9**, `` '`' `` Fire Game = 0xb, `'&'` = 0xc, `'/'` = 0xe, plus a synthetic
   "Situation Map" entry (4/0xf) for location `0x17`. It commits when `DAT_00026896 != 0` and moves
   the highlight by `DAT_00026894`. Setting `DAT_000269d6` from outside does not stick (the menu
   rewrites it every frame): poking 9 at frame 1060 was back to 0 within four frames. The tap
   script's sweeps only ever produce modes **0, 2 and 4** (measured over 300M instructions), so the
   current entry is `/fire` under a joystick sweep — reaching `{` needs the right location and the
   right number of highlight steps. Dev seam added for this: `--poke <frame>:<addr>=<val>[,...]`
   writes engine globals at a frame boundary (machine state, same class as `--call`).
1. **The world render is verified end to end.** `out\mapcheck.ps1` reads the tile map back:
   **3600 cells, indices 0..608 of the 630 the offset table holds, 0 out of range, 63 distinct
   tiles** — every cell indexes the table `FUN_00010e48` fills. `out\tilecheck.ps1` then matches
   every 16x10 destination cell against the engine's own sheet (`tiles.pic`, 560x180, 5 planes,
   record 0xde8): **398 of 400 byte-identical, 0 blank, 2 = the 16x20 seam at x 160, y 60..79** that
   the per-frame scroll strip (`FUN_00011130`, dest 0x04FF14 = row 68, byte 20) rewrites.
2. **The sprite path is only exercised through fixtures, not in the flight.** `FUN_000125aa` is the
   object update: it walks 8 slots (`DAT_0002a970` state, `0x2a9ac` frame, `0x2a8bc`/`0x2a8f8`
   position), draws each through slot `0x21BAE` (`FUN_00011208`) at `x - DAT_0002a850`,
   `y - DAT_0002a852`, and sets `DAT_0002a544` (flight over) on a crosshair hit. With no flight
   state every slot is idle, so the flight issues **no** slot-57 blit at all. Fixtures pinned this
   session: `ref\fixtures\000125aa.json` (36 compared lines) and `00016588.json` (20) — both PASS.
   `0x11130`, `0x11208`, `0x116e6`, `0x11748` already had fixtures.
3. **The readouts are text, gated on `DAT_0002ab0e == 0`.** `FUN_00016588` formats numbers into a
   stack buffer and prints them at (0xf,0xe) with `graphics.Text` while /FIRE has been held for
   >6 frames (`0x24a8c`); it is skipped entirely while `0x2ab0e != 0` (measured 634). Only 613
   `Text` calls in the whole run, all narration. `pbar`/`rbar` (290x24, 5 planes) unused so far.
4. **Raw-blitter path**: `FUN_0000e03c` programs `$DFF040/042/04C/054/058/060-066` directly
   (BLTCON0/1/APTH/DPTH/BLTSIZE/mods/DAT). It runs, but nothing proves the *result* is right — this
   is the first place to compare against HRM/UAE (`blitter.c`, `docs\graphics-notes.md`).
5. **Shims the flight leans on**: `graphics` RectFill/SetAPen (implemented, `display.c`),
   `MrgCop`/`LoadView` (implemented), `dos` reads of `Desert3:WANI`, `sfx\ants`, `sfx\exp`,
   `DES4:SCORES`, `DES4:INSTS` (all resolve), audio (`DoIO` is a no-op — the flight starts samples).

## A real blitter differential (started 2026-11-11, one open mismatch)

UAE's source is **vendored** at `third_party\reference\winuae\` — that is the reference for the
blitter, not guesswork. `blitter_dofast()` (blitter.cpp:481) confirms our model line by line: the
AFWM/ALWM table masks the A word **as fetched, before the shift**, the shift registers hold across
rows but are cleared per blit, and the pointer write-back is
`(hblitsize*2 + mod) * vblitsize` **per channel that has DMA enabled** — exactly what `blitter.c`
now does (this is the fix that filled rows 110..199 of the flight).

`out\blitverify.ps1` is a true differential: it takes a frame's blit log (`--blitlog <frame>`), the
RAM dump of the frame **before** and the one **after** (`--state out\nav --every 1 --ram F,F+1`),
replays every blit with UAE's algorithm on a copy of the "before" dump, and compares each
destination word with the machine's own result:

```
bin\win32\icftd-recomp.exe <img> 90000000 --input out\tap.txt --blitlog 999 --state out\nav --every 1 --ram 1000,1001,1002
powershell -File out\blitverify.ps1 -Before out\nav.1000.ram -After out\nav.1001.ram -Frame 1001
```

First run (frame 1001, the message-strip scene): 10 blits, 20,945 destination words replayed,
**310 disagree**, all inside a fixed **8-byte band (bytes 16..23 of the 42-byte row)**. The debug
trace shows the machine keeping the destination where the *overlay* blit's mask read `0xFFFF` and
the source had data (`con0 2FCA ash 2 bsh 2 r 0 i 9: A 0xFFFF B 0x063F -> replay 0x018F,
machine 0x0008`), i.e. our blitter did not copy where the mask was opaque.

**That was the frame window, not a blitter defect.** Sampling is at the *end* of a tick and the
engine draws after the vblank, so blits logged `f N` land *after* the `N` sample. With the window
shifted one frame (`-Before out\nav.1001.ram -After out\nav.1002.ram -Frame 1001`) the same 10 blits
give **310 -> 28** differing words, and filtering to one destination plane gives **4**, all
single-bit differences where the machine has `0`:

```
MISMATCH at 0462e0: replay 0020 vs machine 0000   (frame 1002, same shape)
```

Those are **`graphics.Text`/RectFill pixels**, which this runtime draws through `plot()` (CPU
plane writes) and which therefore never appear in the blit log — the replay cannot know about them.
So: the blit arithmetic now matches UAE on the engine's own register values; a frame's residual
differences are the non-blitter drawing. To make the check exact, restrict it to a frame with no
text the whole run.

**What this excludes for the "character and plane sprites are garbled, background is fine" report**
(user, 2026-11-11): the blit arithmetic is not the cause (UAE-identical on the engine's own
registers, including the shifted/masked sprite case `con0 2FCA con1 2000 afwm FFFF alwm 0000`), and
neither is the tile/world pipeline. What is left is the *input* to the sprite blits — the picture
and mask the engine hands over (mask cached at `bitmap+0x30`, built by `FUN_0001E504`; animation
frame chosen from `DAT_0002a9ac`) — or the engine state that positions them. Next step: run the
same differential on a frame where a *sprite* is drawn and where no text is drawn in that frame, so
the only writer of the destination is that one blit.

## Entry argument: the game pushes word 6 (and 2), never 0x20000

`out\flight-parity2.ps1` now injects `--call 0x147A6:1000:0x6`. Measured at 150M instructions:

| argument | picture | out-of-RAM accesses | parity |
|---|---|---|---|
| 0x6 / 0x2 / 0x6\|0x10000 | identical (57,320 lit px) | **27** | 1562 frames identical |
| 0x20000 (the earlier guess) | identical | 3,763 | 1562 frames identical |

0x20000 turns on `FUN_000131ac`/`FUN_00017b22` — a mode no call site ever requests — and the
out-of-RAM accesses are the price. Parity still holds either way (both front ends run the same code),
so parity alone could not have caught it.


