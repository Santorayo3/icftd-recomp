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

1. ~~`ref\manifest.csv` + `tools\verify-frames.ps1`~~ **Done** — three data rows (room, scene,
   logo), `verify-scene.ps1` is a wrapper, step is in the gate. Adding a scene is one CSV row.
2. ~~`--trace` in the recomp~~ **Done** — `icftd.exe --intro/--play ... --trace <file>`
   writes one text line per command, palette load, draw and frame (no addresses, so it diffs),
   `tools\trace-diff.ps1` explains a mismatch, and `kind=trace` manifest rows compare a whole
   animation exactly (61 frames = 212 lines = one gate row). Details: `docs/harness.md`.
3. **The 2-pixel lead the trace found** (half a session). The trace places the intro logo at
   `dst=39,44` / `273,88` / `92,97`; the accepted WinUAE capture only matches those assets two
   pixels lower (composing at the trace coordinates differs by 4,364 px, at +2 by 26). The
   scene row matches exactly, so the capture is not offset - the runtime places the logo 2 px
   high. Next step is the ground truth, not a fudge: decompile the Amiga art loader that fills
   `move_bitmap` and compare its header words with the SMS record our pack stores (`Sms.cs`
   reads the hotspot from +12/+14, `Move_DrawNode` subtracts it). A `hotY` of -2 would explain
   it exactly.
4. **Annotation pass for the globals** (one session, mostly curation). The worklist is now
   data: `rleaf out\leaves.txt --os-basic --reads --ledger out\leaf-ledger.csv` then
   `tools\global-heat.ps1`, which ranks engine-state words by how many functions read and
   write them. Name the top ~40 in `docs\annotations.csv`, run
   `tools\ghidra\run-ghidra.ps1 -Annotated` (~1 min) and re-measure with
   `tools\decompile-quality.ps1`. Target: the 154 `state` functions become readable.
5. **Then S0/S1 in volume**, with the rule that a port is done when `tools\port-diff.ps1` has
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
