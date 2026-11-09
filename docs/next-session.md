# Next session: turn the remaining two bottlenecks into work

The framework is in place and one command says whether it is green:

```powershell
powershell -ExecutionPolicy Bypass -File tools\gate.ps1     # 7 steps, ~37 s
```

It builds the exporter, the win32 game (and republishes `icftd-export.exe`), `tools\ctest`,
then runs the interpreter fixtures, the port-vs-original diff (`tools\port-diff.ps1 -All
-Random 20`) and both asset gates. `out\gate-summary.txt` is the result. Reference:
`docs/harness.md`, decisions and numbers: `docs/scaling-plan.md` §14.8.

## Where the time actually goes now

`rleaf --os-basic` over the 395 leaf candidates: **168 pure, 154 write engine globals, 38 write
custom-chip registers, 20 pure-but-for-an-exec-call, 15 fragments/failures.** Only 6 fail for
an *interpreter* reason, so the interpreter is no longer the bottleneck. The two real ones are:

* **unnamed engine state** — 322 functions read or write the data hunk. Porting them now would
  be transcription against `DAT_0002xxxx`, which is exactly the cost the framework was built
  to remove.
* **hardware** — 38 functions write 0xDFF0xx, so their ports cannot even be compared until a
  register model exists.

## Work items, in order

0. **The intro cinematic runs** (done this session, not yet finished visually). `--intro <pack>
   Desert1/OPEN/!OPN MAIN 0 740 prefix` walks the real timeline: MAIN instantiates its children
   by *label index* (64 -> label 14 = Logo, 69 -> Sky, 54 -> Clouds, 63 -> Land, 59 ->
   Explosion, 72 -> Titles, 60 -> Fade1), each child runs its own label and instantiates
   grandchildren, so the whole tree is the engine's own structure. All opcodes the script uses
   are ported except **0x05** (3 sites: Meteor 1x, Volcano 2x - it calls three Amiga library
   thunks at 0x2199e/0x219a8/0x219b2 that are not identified yet).
   What is still wrong is *compositing*: the frame at 455 shows the sky and the IT logo but
   leaves an orange panel and a black lower third. Fixing it needs the loader's mask/channel
   semantics, which are not in the pack yet (see item 3).
   Also found and fixed: AmigaDOS is case-insensitive (`LandBack.win` vs `landback.win`,
   `Main.pal` vs `main.pal`), so `pak_find` now folds case - 46 of 50 assets resolved before,
   50 of 50 now.
   Correction to a commit message: `Desert1/OPEN/!LOS`, `!WIN` and `!WN2` are the *lose/win
   end sequences* (their labels are `BringInEnd`/`CreditUnit`, the art is `TheE.win` = "The
   End" and `Credits.win`), not the Load Game screen. They render now; the frame at 20 shows the
   ant, the landscape, the banner and scrolling credits, with purple panels where a picture's
   transparent index is not 0 - the same mask/model gap as above.
   **The Load Game screen is not a MovE script in the pack** (the pack's 108 scripts are listed
   by `--movelist`), so it belongs to the `OPEN` module's own code, which has never been
   analysed. Reaching it means decompiling `OPEN` (a separate Amiga hunk executable) or
   modelling that UI directly.

1. ~~`ref\manifest.csv` + `tools\verify-frames.ps1`~~ **Done** — five data rows now (room,
   scene, logo, intro-logo trace, intro-main trace), `verify-scene.ps1` is a wrapper.
2. ~~`--trace` in the recomp~~ **Done** — see `docs/harness.md`; `intro-main` pins 1153 trace
   lines (which label is created when, where every object is placed, which palette loads).
3. **The 2-pixel lead is solved**: the standalone `Logo` label sits at y=44 because it has no
   parent; through MAIN the node y is 2, so the engine draws it at 46 - exactly what the WinUAE
   capture shows. The lesson is in the data: always play the label through its driver.
   What replaces it as the next visual task is the mask/channel model below.
4. **The mask/channel model** (the next visual task, half a session). `Move_DrawNode` blits with
   minterm 0xCA through `bitmap->maskSource` and a channel already folded with
   `g_planeOrMask[g_screenDepth] | channel & g_planeAndMask[g_screenDepth]`, so a picture is
   only written where the mask says so and only on the planes it has. The port now skips the
   transparent colour (key 0) and limits the blend to `min(depth, picture planes)`, which
   removed the flat beige panel from the IT logo, but overlapping layers are still wrong (the
   frame at 455 keeps an orange surround and a black lower third). Ground truth to fetch: the
   Amiga art loader that builds `move_bitmap` (maskSource + per-plane tables at `+0x38`) - not
   `Move_DrawNode`, which is already transcribed faithfully.
5. **Annotation pass for the globals** (one session, mostly curation). The worklist is now
   `rleaf out\leaves.txt --os-basic --reads --ledger out\leaf-ledger.csv` then
   `tools\global-heat.ps1`, which ranks engine-state words by how many functions read and
   write them. Name the top ~40 in `docs\annotations.csv`, run
   `tools\ghidra\run-ghidra.ps1 -Annotated` (~1 min) and re-measure with
   `tools\decompile-quality.ps1`. Target: the 154 `state` functions become readable.
6. **Then S0/S1 in volume**, with the rule that a port is done when `tools\port-diff.ps1` has
   an adapter for it and it passes. No adapter means it is not a port yet.

## Deliberate decision still open

Interpreter-led (model hardware + dos/graphics, run the whole original as an oracle, replace
subsystems one at a time) versus port-led (the S0 to S7 order). `docs/scaling-plan.md` §14.8 has
the trade-off and the numbers. Choose it explicitly before item 4 starts, because it changes
what "progress" means.

## Rules that keep the numbers honest

* A verdict describes the executed **path**, not the function - check a second fixture before
  believing `pure`.
* `os-stub` calls are recorded in the run result; a function that only completed because of one
  is `os`, never `pure`.
* The DOS target is parked (win32 only); `gate.ps1 -WithDos` exists if that changes.
* Interpreter gaps (named failures, added only on demand): ABCD/SBCD, ADDX/SUBX, MOVEP, NBCD,
  MOVE to/from SR/USP, RESET/STOP, TRAP, line-A/F.
