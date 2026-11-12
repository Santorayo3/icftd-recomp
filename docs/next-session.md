# Next session — the translator runs; the differential is the gate

Hand-off as of 2026-11-11 (Phase B, session 3). Read this, then **RULE 0** and the binding rules at
the top of the repo memory (`.github/copilot-instructions.md`, `docs/recomp-architecture.md`) - a bug
is a difference from the original, never a symptom, and that holds for every kind of bug.

## The bus arbiter: stages 0 and 4 (2026-11-12, later session)
`cpuStretch` is gone. The machine now has a real slot map and every consumer walks it.

**What exists**

* `src\runtime\amiga\slots.c` + `slots.h` - a 227-entry ownership map per line, built from the View
  (ViewPort DWidth/DHeight/Modes and the BitMap's depth - the numbers graphics.library would program
  into BPLCON0/DDFSTRT/STOP/DIWSTRT/STOP), from DMACON's audio channels, and from SPRxCTL. Strobe and
  three refresh slots sit at colour clocks 3/5/7/9, then disk, audio, sprites, then the bitplane
  fetch pattern of UAE's `cycle_diagram_table` (`custom.cpp`, `create_cycle_diagram_table`) through a
  20-word DDF window. `--slots-check` diffs that pattern against the table for 1..8 planes lores and
  1..4 hires (12 patterns, computed independently of the code under test); `--slots` prints the
  register snapshot, the map, the per-line and per-frame DMA totals; `--slotsat <frame>` dumps it at
  a frame boundary. The intro measures: 5 planes, DDF $38..$D0, 108 DMA clocks on a display line and
  4 on a blank one = **22,052 of 70,937 clocks per frame**, 3 of every 8 clocks free inside the
  fetch window.
* `src\runtime\amiga\bus_cycles.c` - bus words per opcode, **measured**, not guessed:
  `icftd-oracle.exe <image> --bustable out\bus.txt` counts every word the core reads or writes per
  opcode (fetch, extension words, operand reads and writes, 32-bit accesses as two words) and
  `tools\gen-buscycles.ps1` bakes it in. 1,190 opcode words occur in the original's own run, mean
  **2.22 words per instruction**; 15 have a data-dependent count (Bcc/DBcc transfer their extension
  word only when taken - the table holds the run's mean; MOVEM is charged exactly from its register
  mask at run time, so its 6..34 words are never averaged). The generator validates ten hand-derived
  HRM cases (NOP 1, RTS 3, MOVE.W (d16,A5),D0 3, CMPI.W #imm,(d16,A4) 4, LINK 4, UNLK 3,
  JSR (d16,A4) 4, ...) and refuses to write the file if one fails.
* `rt_bus_charge()` (CPU) and `rt_blit_charge()` (blitter) walk the map from the frame's own cursor:
  the CPU pays 2 colour clocks per memory word (address and data, HRM), the blitter one clock per
  enabled channel per output word (UAE `blit_cyclecount`), and every DMA-owned clock in front of a
  needed one is a wait state. Internal cycles run at the 68000's own rate. So CPU and blitter share
  one bus, which is the part the old frame-wide `dmaSteal`/`cpuStretch` aggregate could not express.
* Proof: `tools\gate.ps1` **4/4**, and oracle vs translated RAM at frame 400 is **byte-identical**
  (0 differing bytes of 2 MB) - the arbiter is applied identically by both front ends.
* `--framelog <file>` writes one `key=value` line per frame from *both* front ends: the colours out
  of the copper list MrgCop built, DMACON, BPLCON0, DDF, the four audio channels and the engine's
  own MovE step counter. Host and interpreter agree on **1404 of 1404 lines**, so it doubles as a
  cadence check that RAM-at-one-frame cannot give: the first line they disagree on is where a
  timing difference starts.

**What it changed, and what it did not**

| measure (intro, desert phase) | before | after |
|---|---|---|
| blitter charge, frame 1000 (cumulative) | 43.5M cycles | 64.9M (1.49x: the display now steals from the blitter too) |
| instructions/frame | 4,015 | 4,104 |
| engine MovE steps/frame (`--framelog`'s `step`, DAT 0x3010C) | - | 0.67/frame in the logo phase (59 at frame 201, 192 at frame 401) |
| "IT CAME FROM THE DESERT" fully drawn | frame 1400 = 28.0 s | frame 1400 = **28.0 s** |
| screen black / Load Screen | 1600 / ~1650 | **1600 / ~1650** |

So the arbiter is *more faithful* (it reproduces UAE's blitter_slowdown and the CPU's wait states per
access instead of one global factor) but it does **not** move the content timeline: the extra
blitter contention is offset because the old 1.92 flat stretch overcharged internal cycles.

**The WinUAE reference instrument is dead: do not put a Lua script in the emulator again**

Every reference run that loaded `tools\winuae-steplog.lua` came back with a *glitched picture* -
random colours at boot, half an intro, a black screen - and that includes the light version that
only read six registers per frame. The cause is where WinUAE runs the handler: `custom.cpp` calls
`uae_lua_run_handler("on_uae_vsync")` from inside `vsync_handler_post()`, between `DISK_vsync()` and
the frame-pacing/display code, i.e. *in the middle of the machine's own frame logic*. Anything that
takes time there (a `uae_read_u16`, an `io.flush()`) pushes the following frame out of its slot; the
Lua memory path also goes through `get_mem_bank()`, the same bank table the CPU/copper fetchers use.

Consequences, i.e. what to un-believe:

* "The original spends ~28 s loading" and "`DAT_0002C10C` reads 0" were measured in those runs. Both
  are void. Nothing about the original's timeline from a Lua-instrumented run is evidence.
* The step counter column of the reference is not available at all: WinUAE's Lua bridge reaches
  memory through `debug_read_memory_16`, and the colour registers are write-only, so `$DFF180` reads
  back `FFFF`. That is why the old trace was full of `FFFF`.
* What *is* trustworthy is the A/B the user ran by hand on the same configuration: with Chipset ->
  Cycle-exact (Full) **on**, the intro is several seconds longer and the fanfare plays; with it
  **off**, the logo is several seconds early and the fanfare is cut off. Our build behaves like
  "off". That is the target, and it is a *differential* - no wall clock, no floppy-loading confound.
* `tools\icftd-reference.uae` is the same machine with **no** script, for a clean run of the game.

**Where the frame time goes, and the one divergence it named (2026-11-12)**

`--ticklog` gives the accounting per vblank (`blitcyc` is cumulative, `budget` is what was left):

| frame | instructions | blitter cycles | budget at tick |
|---|---|---|---|
| 400 | 2,948 | 107,048 | ~0 (debt) |
| 800 | 4,024 | 86,402 | ~0 |
| 1200 | 2,563 | 121,100 | ~0 |

Blitter plus CPU fills the 141,875-cycle frame exactly, so the intro is **work-bound**: it runs the
machine flat out and the step rate is whatever that work affords (0.5 frames/step early in the logo
animation, 3.7 later). A machine that is flat out gets *faster* only by doing less work or by having
its work under-charged - which is why "make it slower" cannot be done with a knob, and why nothing
in the CPU model can be the remaining 30 %.

Two candidates were checked against UAE's own source:

* **The blitter's clock per word - real, fixed.** UAE `blitter.cpp:1165` charges
  `blit_cyclecount = 4 - (shifter_skip_b + shifter_skip_y)` colour clocks per output word: four,
  minus the channels that need no fetch (B off, or not both C and D on - with the fill-mode
  exception at 1157). We charged the number of *enabled channels*, so a blit without B or without
  C+D was charged too little (an A-only blit is two clocks in the original, one here). Effect: the
  intro's blitter charge at frame 400 went 91,536 -> 107,048 cycles, and step 430 moved from frame
  1377 to 1402 (+1.8 %). Commit `939a260`.
* **Per-access CPU stalls - a no-op, not shipped.** `rt_bus_charge` already walks exactly the slot
  sequence the accesses would walk: 4 cycles per bus word plus every DMA-owned colour clock in
  front of it. Splitting that walk per access moves wait states *inside* one instruction and charges
  the identical total, so it cannot move a timeline. What would be a real change is charging the
  instruction *fetch* words at their own slots - but the translated build never fetches them (the
  code is compiled), so the per-opcode table has to stand in for them.

So the remaining gap is work per step. **Measured, cleanly, with no instrument in the emulator:**
the reference takes **39 s** from the logo appearing to the Load Screen appearing; our build takes
**30.2 s** (first colours at frame 165, the Load Screen's palette at frame 1674, 50 Hz). That is
**1.29x**, and it is a 31 % deficit spread over the whole intro, not a single stuck scene.

Our side of that interval, per step (`--ticklog`, steady state):

| frames | steps | frames/step | blitter cycles/step | CPU cycles/step |
|---|---|---|---|---|
| 200..400 | 133 | 1.5 | 105,406 | 107,939 |
| 400..700 | 75 | 4.0 | 378,852 | 188,648 |
| 700..1000 | 71 | 4.2 | 383,129 | 216,343 |
| 1000..1402 | 92 | 4.4 | 427,851 | 192,081 |

The engine's own step counter reaches 454 when the picture fades to black (frame 1548) and 477 at
the Load Screen (frame 1674). Two thirds of a step's time is the blitter, so the 1.29x is either the
blitter being charged ~30 % cheap (per word, or in the slots it is granted) or the engine issuing
more blits per step than we do. Deciding between those needs the blit sequence of one step, from
our `--blitlog` and from the original's code - not another timing change.

**The bus clock is now the model, and it made us faster - that is the finding (2026-11-12)**

Two pieces of the cycle-exact architecture are in, both derived from UAE's own source:

* **The blitter is a device** (`a76e042`): `BLTSIZE` starts it, it takes one colour clock per channel
  per output word out of the same slots the display and the CPU use, the data path runs when its
  last slot has gone by, `DMACONR` reports BBUSY, `graphics.WaitBlit` advances the clock to the end
  of the blit instead of returning instantly, a `BLTSIZE` written while one is pending waits it out,
  and an idle frame advances the clock so a blit finishes inside the idle time.
* **A memory word is one colour clock of bus** (`f5f4d29`): UAE charges a chip-bank word one
  `CYCLE_UNIT` and then one `do_cck()` per clock Agnus stole (`newcpu.cpp`
  `mem_access_delay_word_read` -> `wait_cpu_cycle_read`); the other two clocks of the memory cycle
  are the 68000's own address phase. We charged two clocks per word, so every access demanded two
  free slots instead of one.

What the measurements say, and they are the useful part:

| build | step 430 at frame |
|---|---|
| two clocks per word, blitter block-charged | 1402 |
| blitter as a device | 1402 (bit-identical - so the blitter charge is *not* the pace) |
| one clock per word (UAE's rule) | **1368** |

So the *faithful* rule made the intro **2.4 % shorter**, not longer. We are already charging at
least as much per unit of work as the original does, and are still 29 % fast. That eliminates the
whole space of timing-rule explanations: no per-access accounting can be the remaining difference.
Either the original does ~30 % more *work* for the same picture (library code our shims answer with
instant C - `exec.AllocMem` 453 times over the intro, `MakeVPort`/`MrgCop`, `DisownBlitter` 38
times), or its display is not the 5-plane lores / DDF $38..$D0 we assume and it takes more bus than
we model. The second is decidable from one WinUAE savestate (custom registers), the first from the
disassembly of the library routines concerned.

**All three cycle-exact flags are modelled now (2026-11-12)**

`cpu_cycle_exact` (instruction cost from Musashi's table, one colour clock of bus per word, plus the
waits the slot map charges), `blitter_cycle_exact` (a device taking slots as the clock passes) and
`copper_cycle_exact` (a device fetching one instruction word per second clock, applying MOVEs at
their beam positions, WAIT parking on the beam position). With the display DMA, refresh, audio,
sprite and disk slots the map already claimed, every bus master now takes its time out of the same
per-line map, and nothing is charged as a lump at the end of an instruction or a frame except the
CPU's own words.

What is deliberately *not* cycle-exact, and why:

* **CPU accesses are charged at the instruction boundary, not at the access.** Doing it at the
  access made the two front ends charge the accesses each of them happens to perform, which differ
  (1456 frames against 1407 for the same instruction count) - the host/interpreter timeline
  invariant, the only mechanical check this project has, stopped holding. The clocks are the same;
  only where a wait lands inside one instruction differs.
* **The renderer is still one chunky conversion per frame**, so a list that changes a display
  register mid-screen would not be honoured per line. The copper's register writes land in the
  register file at the right time; the picture is composed at the frame boundary.
* **Sprite and audio fetch devices** are still missing: their slots are claimed, but nothing advances
  a sprite pointer or a shift register from them, and audio's fetch is driven by the device clock
  (`rt_time_slice`) rather than by bus slots.

**Interrupt masking: attempted, and it cannot be done in a shimmed model (2026-11-12)**

The 68000 takes an interrupt only when its level is above the mask in SR bits 8-10. This machine
delivers handlers when they arrive. Counting what the rule would change (interpreter, live SR):
**CIA (level 6) is masked 1305 times** and **the vblank (level 3) at every frame boundary**.

So masking was implemented - pending levels, a pump at each instruction boundary that compares the
mask. It broke the machine outright, in *both* front ends, identically: 0 handler runs, 0 rasters
presented, a black screen and a spin at 0x24930. The reason is the engine's design: its own code runs
at SR 0x2700 (mask 7) and it never lowers the mask itself, because on the machine its vblank server
is taken *inside the exec library* - WaitTOF, DoIO, the task switcher - which is exactly the code this
runtime replaces with shims. With no real library code there is nothing to unmask, so every level
stays pending for ever.

Delivery therefore stays on arrival (at the next instruction boundary, which is where a 68000 would
take it), which is the correct stand-in while the library calls are shims. Masking becomes possible
the day those routines are executed rather than shimmed - not before.

**Next, in this order**

1. **Find what the intro does per step, in the code.** The bus model is now hardware-derived and the
   content pacing did not move, so the remaining gap is *work* as much as clock: check what the
   original does per step - `DrawNode`/`LoadPicture`, the mask builder `FUN_0001E504`, the
   compositor `FUN_0001E8C8` - against what we do, and check whether a shim short-circuits work the
   engine performs through the blitter with waits.
2. Re-measure with `--framelog` (host vs interpreter, and our own before/after), not with WinUAE.
3. Re-baseline the four markers with RAM dumps at equal content positions (the 400-frame fingerprint
   stays retired) and decide level 1 vs level 2 from the evidence.

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

### Performance — as a percentage of the original (hand-off after `20f9098`)

The reference is the original's own frame. Measured with the oracle, the engine consumes its whole
141,875-cycle vblank budget every frame (3,449 of 3,926 frames run out of budget, average overspend
322 cycles = 0.2 %), so one engine frame is 20 ms on a 7.09 MHz A500 and 100 % means "our build
finishes a frame in the time the original did, on the same class of machine". The owner's memory of
"~20 fps on the original" does not move the ratio: our build runs the same engine at the same pacing.

**DOSBox `cycles` is instructions per millisecond, not MHz** - 66000 ~ a 486DX2-66, 100000 ~ a
DX4-100 (both at IPC ~0.5; lore tables that call 3000-5000 a DX2-66 are off by an order of
magnitude). Measured by wall clock, differencing a 60-frame and a 260/360-frame run so the
~35M-cycle startup drops out:

| target | wall time per frame | % of the original |
|---|---|---|
| 66 000 (486DX2-66) | 79.5 ms | **63 %** |
| 100 000 (486DX4-100) | 57.0 ms | **88 %** |
| 200 000 | 29.7 ms | 169 % |

**Validate the throttle before believing any of these**: 100000 vs 200000 halves the frame time, so
the emulated clock is the limiter and the figure is a machine-model figure. Need **1.6x** for 100 %
on a DX2-66, **1.14x** on a DX4-100.

**Two dead ends, recorded so nobody re-walks them.** The old "cycles/frame" figure (fix
`cycles=3000`, difference an 11-frame and a 1-frame run) reported the *same* 3,570,000 for the
per-pixel and the nibble-table conversion - two builds that differ by 4.7x in real work - and the
same number for `core=normal` and `core=dynamic`. It measures DOSBox's pacing, not our code. And
`--perf` is only valid at `cycles=max`: `plat_pit_now()`/`plat_ticks_ms()` extend a 16-bit 8254
snapshot, so any interval over 55 ms (a whole frame at a fixed clock) is truncated. A per-frame
split needs the interval subdivided - build that profiler before trusting any fine-grained claim.

Landed in `20f9098` (all verified): nibble-table planar->chunky, 4.7x cheaper in that loop and
byte-identical on five screens (it still runs 1.49 times per frame: `LoadView` converts, then
`rt_frame_present` converts the same view again); the PC ring off in the DOS build
(`-dEMU_TRACE_RING=0`); `rt_trace` behind a `traceTo` test; `rt_cia_service` only when an interrupt
is pending; `rt_time_slice()` instead of a per-instruction `rt_time_run`; a RAM fast path in
`rc_rd*/rc_wr*`; `rc_d_get/set`, `rc_a_get/set`, `rc_trunc`, `rc_ext` static in `cpu.h`; the crash
journal behind `--crashlog`. Proof: `tools\gate.ps1` 4/4 **and** an exact fingerprint - 400 frames,
596 rasters, 2,418,803 emulated instructions, unchanged from before.

What those two items bought: 66 MHz 84 -> 79.5 ms (5 %), host work at `cycles=max` 2.6 -> 1.9 ms
(1.35x). So the per-instruction *calls* were not the bulk; the emitted code's own straight-line work
is. Work volume today: **6,062 emulated 68k instructions/frame** (274 in the CIA/music handler) and
~5.5M x86 instruction-equivalents per frame at the model clock - ~900 per emulated instruction,
because the 68000 register file lives in memory inside `cpu_t`. 595 vblank-server instructions per
frame also still run on Musashi.

Order for the next session - the **emitter** step, measured after each slice at `cycles=66000`
(intro, frames 60 vs 260), acting only on a number that moved:

**Measured first (2026-11-11, same session, one build per row):**

| build | ms/frame |
|---|---|
| reference | **79.5** |
| 1. block cycle accounting, as specified | 82.5 |
| ... the same build with the per-instruction model forced | 80.5 |
| reference with the planar->chunky loop switched off (measurement only) | **48.0** |
| blitter pixel loop switched off (measurement only) | 57.0 |
| after the conversion group loop (`d2ab556`) | 66.0 |
| after the inlined blitter accessors + one conversion per changed picture | **58.0** |
| after the short-form blitter ALU + direct-to-VGA presenter | **57.0** |

- **Step 1 was implemented, measured and reverted.** A block charge cannot cover the device clock:
  batching Paula/CIA to the block boundary takes the interrupt at a different instruction, which
  moves the machine (400 frames: 591 rasters / 2,535,644 instructions instead of 596 / 2,418,803).
  Servicing the pending interrupt before or after the charge makes no difference, both are wrong.
  What is provably identical (no E-clock tick inside the block, `m->eAcc += cost`) is worth
  nothing: the guard and the per-block call make the build 2 ms **slower** than the same code with
  the per-instruction path forced and 3 ms slower than the reference, while the generated tree grows
  2.62 -> 2.95 MB. Do not re-walk it.
- **The frame is not spent in translated code.** It costs ~773 host instructions per emulated
  instruction in total (5.25 M / 6794), of which the per-instruction bookkeeping is ~45. That makes
  step 2 (register file in locals) a small lever, not the 1.6x.
- **The frame is spent converting the screen: 31.5 ms of 79.5 (40 %)**, at 1.55 passes/frame
  (`LoadView` presents *and* the vblank presents). The A/B with the loop switched off is the number
  to trust - `--perf`'s PIT figure said 29 % - and the experiment is clean: that build's 260-frame
  run printed the same 397 rasters / 1,871,324 instructions as the reference.

Revised order, highest measured item first:
1. **The conversion** (40 % of the frame; attributed by switching the loop off, 79.5 -> 48.0).
   Landed in two steps: the eight-pixel group loop lost its per-plane null tests (a missing plane
   reads a zero row) and writes two dword stores instead of eight bytes (**79.5 -> 66.0 ms**); then
   the conversion itself is skipped when the plane bytes and the geometry are unchanged since the
   last present of that view (**66.0 -> 58.0 ms**) - an exact test, because the chunky picture is a
   pure function of them, and it does not care who wrote the bytes (blitter, shim or translated
   code). Anything that draws into the chunky buffer itself (graphics primitives on the pseudo
   bitmap, the OSD) invalidates the comparison. `--perf` at `cycles=max`: conversion 6.1 -> 1.8 ms.
   (The `--perf` line "conversion runs N time(s)/frame" is frames/raster, not conversion passes -
   it never measured the pass count.)
2. **The blitter** (9.0 ms; attributed by switching its pixel loop off, 66.0 -> 57.0). Three measured
   attempts: the per-word accessors had been `rt_read16`/`rt_write16` - a call, a mask and a range
   check per word per channel - and are now inline with the same bounds rule (**66.0 -> 65.0 ms**); a
   generic "expand the minterm into a term array once per row" was **3.5 ms slower** - the array
   traffic cost more than the predictable bit tests it saved - and is not in the tree; naming the
   short forms of the frequent minterms (`0x0FCA`, the engine's ordinary blit, is "D = A ? B : C")
   and skipping the shift register when ASH/BSH are 0 is worth ~0.5 ms. All three are
   byte-identical: the 16 MB RAM dump at frame 200 has the same SHA256 before and after.
3. **Present straight into VGA memory**: mode 13h is linear 320x200x256, so the DOS framebuffer *is*
   the screen - the staging buffer and its 64 KB copy per present are gone (~0.5 ms, 64 KB less BSS).
4. Then the vblank: 595 instructions/frame still run on Musashi (the interrupt servers), which is
   most of what the vblank costs now, plus the emitter slices as originally planned (the 68k
   register file in locals).

Original plan, kept for the record:
1. Cycle accounting per basic block (measured above: no).
2. **The 68k register file in locals for the block** (`D0..D7/A0..A7/SR` as C locals, written back at
   block end, at library calls and anywhere the frame hook can observe).
3. vblank/CIA handlers through the translated dispatcher, one conversion pass per frame, present
   straight into VGA memory.

**The wall clock is host-load sensitive.** At a fixed `cycles` the emulator has to keep up with the
emulated clock, so a loaded host inflates every figure. Before trusting a delta under ~2 ms, check
that a `cycles=max --perf` run still reads ~20 ms/frame (it was 20.1 before the conversion work and
~20 since), and prefer back-to-back A/B inside one time window.

Gates for every step: `tools\gate.ps1` 4/4; the 400-frame fingerprint must still read
`596 raster(s), 2418803 instruction(s)`; emitter changes require regenerating `src\recomp\fn_*.c`
(the 0x9AE0 IFF-skipper seed moved into `step_budget()`, so regeneration is safe), header-only
changes just need a rebuild. On a 486 with 8 KB L1 the 2.7 MB of emitted code is part of the cost:
a change that shrinks instructions but grows code is not automatically a win.

### Display: the DAC shadow must start "unknown" after a mode set (`plat_dos.c`)

A mode set does not leave the DAC black: mode 13h loads the BIOS 256-colour palette, where entry 7
is `A8A8A8` grey and 1..6 are blue/green/red/magenta/brown/cyan. `plat_init()` used to declare the
shadow black, so `plat_set_palette()` skipped every entry the game asked for as **black** and the
picture kept the BIOS colour - the logo animation's background box stayed grey while the Windows
build (no DAC, correct palette) was right. Measured by reading the DAC back through 0x3C7/0x3C9 on
the third present: before the fix `asked 000000 dac A8A8A8` (entry 7), after it `000000/000000` for
0..9. The shadow now starts `0xFF`, and "does the DAC already hold this colour?" is answered by the
shadow alone (the second, redundant `g_pal` copy is gone, and with it the reason a stale entry could
never be corrected).


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



## The intro never starts another score: a 0-byte voice object (2026-11-12)

Found while looking for the missing fanfare, by following the machine rather than the picture.
Chain, all addresses image-relative (add the load base 0x4000 for a runtime PC):

```
frame 29   FUN_0000E804 (the instrument loader) allocates the four channel voice objects.
           For three of them `AllocMem($20, MEMF_CLEAR|MEMF_PUBLIC)` from 0x0E930.
           For the fourth the size word A4+0xAC2 is 0, so it is a 0-byte allocation.
frame 29   its handler word is therefore still 0 - FUN_0000F06A (which installs the type-2
           handler via `lea (0xc2c,PC)` -> 0x0FCCE) is never applied to it, and the block is
           8 bytes (rt_alloc(0)); the tick's channel entry (player block +0x3E, four 22-byte
           entries) points at it from +4.
frame 1630 FUN_0000F3F4 (the score player's per-channel tick) runs
           `move.l (4,A1),D0 / movea.l D0,A4 / movea.l (0,A4),A4 / jsr (0,A4)` at 0x0F40E..0x0F41E
           and calls 0. Eight handler runs fail (frames 1630..1637), each aborting the tick, so
           the player cannot start another score - which is the hand-off's "nothing starts
           another score after the volume fade at frame 1617".
```

Why the size word is 0: the loader sets it to 0x20 itself at 0x0E8EA for the *shared* pair, then
calls its open helper for the name it has just substituted, `"Desert1:sfx/o.rff"` (0x0E8D4). The
helper first looks the name up in the open bank's directory (compare loop at 0x20204, walk at
0x203xx) - the directory holds the *bare* names, and it does hold `o.rff` with size 0x20 - so the
lookup misses on the full path and the walk's end-of-list path clears the size word
(`clr.l (0xac2,A4)` at 0x2046E). It then falls back to a plain `dos.Open`, which succeeds, and the
loader allocates the size it now holds: 0.

Closed on the way: the FileHandle block we hand out now carries `fh_Pos` and `fh_End` (and zeroed
`fh_Funcs`/`fh_Arg1`/`fh_Arg2`), because AmigaDOS maintains those fields on every operation and we
left them zero - any code that asks a handle for a file's length read "empty". Measured: no change
to the intro (8M instructions still reach frame 1824 with 2286 rasters). A read-watch over the whole
44-byte block then showed the engine never reads it at all in the first 60 frames, so the file's
length is never taken from the handle here; the change is kept because it is a real difference from
AmigaDOS, not because it fixed anything.

### What the disassembly now says, and what it rules out

* `export\code\dshell4k\dshell.img` (the image we run) is `export\code\dshell\dshell.img` (the image
  `re\disasm` was made from) **relocated to 0x4000**: of 792 differing bytes, every one is explained
  by a long that differs by exactly +0x4000 (198 longs), and the 160-entry vector table at 0x21A58
  is 160/160 correct. So the image is not a divergence, and every address in the disassembly maps to
  a runtime address by minus 0x4000.
* Engine vector slot 116 is a plain **`strcmp`** (`0x208E8`: `cmpm.b`/`dbeq`, returns 0/1/-1). The
  loader's branch is therefore `strcmp(instrument_name, "o.rff") == 0`, and the intro's fifth
  instrument really is the generic pair - the branch itself is right.
* `FUN_00020266` (`0x20266`) is the file-context reset: it closes the current bank handle, clears the
  volume string, and **clears the size word** (`clr.l (0xac2,A4)` at `0x2029E`). The engine's open
  runs it *before* opening.
* `FUN_00020476` (`0x20476`) looks the name up in the parsed directory and, on a miss, tail-jumps to
  `dos.Open` (`jmp 0x2145C`, a three-instruction wrapper). It has no way to set the size.
* `FUN_000203DE` (`0x203DE`) is the directory parser: it stores each entry's size into the size word
  at `0x20422` and clears it at `0x2046E`.

Consequence, stated honestly: on the `Desert1:sfx/o.rff` path the engine's *own* instructions are
what leave the size at 0, and the loader then passes it to AllocMem. The reference runs the same
instructions on the same data, so the earlier claim that this chain *is* the missing fanfare is not
established - what is established is that our build ends up with a 0-byte voice object whose null
handler is called eight times at frames 1630..1637.

Next step, and it has to come from the reference: dump the reference's RAM at the same content
position (engine data base A4 = 0x29A56, size word at A4+0xAC2, and the four 22-byte channel entries
at player block +0x3E) and read whether the original holds 0x20 there and whether its channel 3
object has a handler. Without that, the engine's own code gives nothing further to diff.


## The reference savestate instrument works; first state decoded (2026-11-12)

`statefile_quit` in tools\icftd-reference.uae makes WinUAE write a full state on quit, and
tools\refstate.ps1 pulls memory out of it (chunk list, then one chunk as raw bytes). No Lua, no
keypress timed to a frame - the earlier objection (a Lua handler runs inside vsync_handler_post and
perturbed the machine) does not apply.

What a state contains and what it proved:

* `CONF` - the machine's *effective* configuration. One run recorded `cycle_exact=true`,
  `cpu_cycle_exact=true`, `cpu_memory_cycle_exact=true`, `blitter_cycle_exact=true`,
  `immediate_blits=false`, `waiting_blits=disabled`. So the two entries our .uae had that this
  WinUAE rejects (`cycle_exact=cpu`, `copper_cycle_exact`) were harmless duplicates; the config is
  fixed and says `cycle_exact=true` now.
* `BRAM` - 512 KB slow RAM, `CRAM` - 512 KB chip RAM (zlib chunks; the walker has to resynchronise,
  the padding after a chunk is not always what save_chunk() implies).
* `CPU ` - model 68000, then D0-D7, A0-A6, PC, irc/ir, USP, ISP, SR. Both captured states had
  **PC inside Kickstart ROM** (`0xFE5A6E`, `0xFE5862`) with A7 at the top of slow RAM, i.e. the main
  task was blocked in a library routine at the moment of quitting.
* The program is loaded at **0xC52660** in slow RAM (image offset 0x52660): the first instruction,
  `jmp <abs>`, holds base+0x20918 there. That retires the 0xC530E0 figure, which came from the void
  Lua tracer.
* The palette read twice - from the copper list in chip RAM (COLOR00..15 as (0x180+2i,value) pairs)
  and from the `CHIP` register dump - is `0000 0504 0000 0302 0411 0720 0934 0A55 0000 0710 0F94
  0B43 0933 0511 0D64 0E84`, which is the palette our own timeline holds at frames 364..1135
  (the desert scene). `DDFSTRT=$38`, `DDFSTOP=$D0`, `DMACONR=$43DF` (DMAEN+BPLEN+COPEN+BLTEN+all
  four audio channels) - the intro's own screen.

But the MovE step counter (image 0x2C10C, address 0x3010C in our build, 0xC7E76C in the reference)
reads **0** in both states, while our build has 195 there at frame 400. So either the reference was
showing that palette in a phase where the `!OPN` script is not advancing, or that word is not the
witness it looks like. Not settled - do not build on it.

A raw RAM diff against the reference is *not* a usable content matcher: our layout differs at the
roots (program at 0x4000 vs 0xC52660, ROM libraries replaced by stubs at 0x1C4000, heap elsewhere),
so ~4000 words differ at every frame (library and ROM pointers) and no frame stands out. Anchoring
has to use address-independent values: palette, audio registers, bitplane pointers.

### Second state, at the Load Screen: the content positions line up

Quit the instant the Load Screen appeared. Its palette, read from the copper list in chip RAM, is
`0222 088C 0226 0559 0E00` - **identical to our frame 1650**, so the two machines are at the same
content position, and our port gets there in 1650 frames (33 s) where the reference took ~39 s from
the logo.

Also checked, and worth keeping: our image against the reference's *running* copy over the whole
code region (0..0x21A58) differs in **8 words** out of 34,600 after normalising pointers by the base
delta - the code is identical, and the 0xC52660 base mapping is exact.

The step counter stays unexplained and is not to be used: our `--framelog` "step" word (address
0x3010C) is written *indirectly* - our image contains no reference to 0x0003010C at all - so its
counterpart in the reference's RAM cannot be located without following the pointer chain. It reads 0
in both reference states, which proves nothing either way.

Next: compare actual pixels at the same content position - the reference's bitplanes, from the
BPLxPT writes in its copper list, against ours from the View structures at frame 1650.

### Pixel-anchored content positions, and the reference's own clock (2026-11-12)

The screen is a 5-plane bitmap, `BytesPerRow 42`, `Rows 216`, two buffers in chip RAM, and the same
structure exists on both sides - so a state can be anchored to one of our frames *exactly*:

| reference state | our frame | difference | that means |
|---|---|---|---|
| desert scene, 18.5 s after the logo (user clock) | **900** | **0 of 45,360 bytes** | identical picture, identical content |
| Load Screen | **1650** | 68 of 45,360 bytes (0.15 %), rows 138..154, planes 0..2 | same screen bar one small element |

Two independent anchors, both pixel-exact, and both say the port plays the *same* content: 14.7 s
against 18.5 s after the logo, and 29.7 s against ~39 s at the Load Screen. So the earlier "the port
is missing content" reading is dead - the content is identical and the difference is a uniform ~28 %
of machine time per content position, i.e. a rate, not a missing scene.

The reference's own clock comes out of the `CYCS` chunk too: `get_cycles()` (u64, savestate.cpp
save_cycles) divided by `CYCLE_UNIT` 512 is colour clocks. The Load Screen state reads
156,559,541,248 -> 305,780,354 colour clocks -> 86.1 s of emulated time since reset, which matches
boot + load (~47 s) + the ~39 s intro.

The 68-byte difference is a live lead, not noise: a small element at rows 138..154 in planes 0..2.

Next: one more state (any desert position) so that two states carry both `CYCS` and a pixel anchor.
The delta between them is the reference's exact machine time for a known stretch of content, and the
divergence ratio then needs no stopwatch at all.
