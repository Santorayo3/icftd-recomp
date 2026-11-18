# Antheads — integration plan (hand-off)

Written 2026-11-18, after an analysis session only: **nothing was implemented**. This file is the
starting point for the session that does the work. It carries the measurements, the architecture
decision, the step-by-step todolist, and the address map that the port's seams need.

Read first, in this order: RULE 0 in [`../.github/copilot-instructions.md`](../.github/copilot-instructions.md),
[`port-features.md`](port-features.md) (the title button, the save list and the "(A)" marker are port
features), then this file.

**Working tree note.** When this plan was written the tree already had uncommitted changes in
`docs/next-session.md`, `docs/port-features.md`, `src/host/main.c`,
`src/runtime/plat/dos/plat_dos.c`, `src/runtime/plat/win32/plat_win32.c`, `src/runtime/platform.h`
and `tools/gate.ps1`. They are not part of this plan; do not drop them.

---

## 1. What Antheads is (measured)

*"It Came from the Desert II — Antheads"* is **a second build of the same engine with a new story**,
not a data pack. It ships its own `dshell`, and its disks carry the **same volume labels**
(`Desert1`, `Desert2`, `Desert3`) as the 1989 release.

| disk | original | Antheads |
|---|---|---|
| 1 | `dshell` 160 332, `HDesert`, `HD_INSTALL`, `OPEN` 105 328 | `dshell` **170 972**, `HDesert2`, `HDInstall2(.info)`, **`NEWS`**, `OPEN` 105 030 |
| 1 (sfx) | `sfx/voice1` | `sfx/voice2` |
| 2 | `desert.dat`, `PHONE.DAT`, `BACKS` 388 436, `PEOPLE` 254 529 | **`Desert2.dat`**, **`PHONE2.DAT`**, `BACKS` 400 681, `PEOPLE` 222 010, **`sfx/AHEADS`**, **`sfx/boing`** |
| 3 | `FIRE`, `HOSP` 60 349, `WANI` 183 016, `BACKS1`, `BIGANT`, `CHICK`, `FIGHT` | **no `FIRE`**, `HOSP` 71 752, `WANI` 182 926, `BACKS1`, `BIGANT`, `CHICK`, `FIGHT`, **`MORPH`**, **`sfx/BURBLE`** |

Byte-identical on both sets: `ANI`, `INSTS`, `SCORES`, `UNDER`, `rs`, `BIGANT`, `CHICK`, `FIGHT`.

The story is new (38 long narration strings appear only in the addon); the room action menu gained
`Fight Ant Head` and **lost `Fire Game`**; `Desert1:NEWS`, `Desert3:MORPH`, `sfx/aheads`,
`sfx/boing`, `sfx/Burble` are new. The flight, hospital escape, chicken race, ant nest and the
giant-ant fight are still there.

**The fire game is gone.** No `Desert3:FIRE`, no `FireA`…`FireE`, no `Fire Game` menu entry, no
`sfx/fire`. Everything the port hangs on it is dead in Antheads: `FIRE_UPDATE`, `AIM_SPRAY_PC`,
`FIRE_ACTIVE`, `FIRE_END_WAIT`, and the title's digit key `3`.

## 2. The program (measured)

| | original | Antheads |
|---|---|---|
| file | 160 332 | 170 972 |
| hunks | code 0x0..0x21A58, data 0x21A58..0x2D594, bss 4 | code 0x0..0x23AF8, data 0x23AF8..0x30064, bss 4 |
| flattened image | 185 752 | 196 712 |
| relocations | 622 | 713 |
| vector table (`jsr (d16,A4)`, 160 × `jmp`) | 0x21A58 | **0x23AF8** |
| A4 (model / at load 0x4000) | 0x29A56 / 0x2DA56 | **0x2BAF6 / 0x2FAF6** |
| functions / code bytes (Ghidra) | 750 / 121 362 | 770 / 125 700 |
| strings with code xrefs | 573 | 611 |

**Same engine source, rebuilt.** Comparing mnemonic sequences per function: **642 of the
original's 750 functions are instruction-for-instruction identical** in the addon (operands
ignored). 127 addon functions have no identical original counterpart (2 439 instructions total);
107 original functions have no identical addon counterpart.

**The oracle already runs it, unchanged.** With the addon image flattened at 0x4000 and the addon
disks extracted:

```
bin\win32\icftd-oracle.exe out\antscan\img4\dshell.img 0x4000 3000000 --base 0x4000 --data out\antscan\data
  -> 41 library call(s) used, 0 answered with 0, 1074 raster(s) presented
```

A fire-press script (`<frame> 1 0` / `<frame+12> 0 0` from frame 200, step 120) drives it through
the Cinemaware intro into **its own situation map** — "Home Base / January 1, 1956 – 03:30 a.m." —
and into its room conversations. 16 641 rasters, 41 libraries, 0 unhandled calls. Nothing of the
runtime had to change.

**The translator needs one constant.** `recomp` crashed with
`IndexOutOfRangeException` in `Emitter.Follow` because `Emitter.cs` hard-codes
`VectorTableBase = 0x21A58`; with `0x23AF8` it emits **766 of 770 functions (125 320 of 125 700
bytes)**, plus 35 blocks outside the model; the 4 refusals are the same `line f` group the original
has.

**The data layout is not uniformly shifted.** The code hunk grows by 0x20A0, but inside the data
hunk everything moves differently (measured: clock words +0x20BA, map words +0x2848, aim words
+0x2AE0). Never map a global with a single delta — use §6.

## 3. Architecture decision

**One executable, two programs.**

* Both images load at 0x4000, so `RC_BASE` stays 0x4000 for both and the generated code needs no
  change. Only the *function table* differs.
* `src\recomp\` keeps the 1989 translation. The addon's goes to `src\recomp\ant\` (its own
  `fn_*.c` names would otherwise collide) with **prefixed symbols** (`ant_functions`,
  `ant_lookup`, `ant_containing`).
* A `rc_program` struct (table, entry, A4, image size, save name and size, vector-table base) is
  selected at boot; `rc_stream`/`rc_lookup`/`rc_containing` consult the active one.
* The port's hand-written seams stop being `#define`s with one program's addresses and become a
  **seam table with one row per program** (§6).
* The addon is optional. No addon disks → no second button, no boot path taken, menu byte-identical
  to today.

Costs that are known and accepted: ~125 KB more code in the executable; ~800 more generated source
files; the build compiles both sets.

## 4. Todolist

Order matters. Phases 1–3 prove the two-program boot; 4–5 make it a product; 6–7 are the visible
features; 8 pays DOS; 9 closes.

### Phase 0 — reproduce the measurements (no product change)

- [x] **0.1 Extract the addon disks.**
  `src\assetExport\bin\Debug\net10.0\ICFTD.AmigaExport.exe extract "<addon disk>" out\antscan\data\disk<N>`
  (3 images → 43 / 9 / 30 files). — done 2026-11-18: 43 / 9 / 30 files.
- [x] **0.2 Flatten `dshell` twice.** `hunk <disk1>\dshell out\antscan\img0 0x0` and
  `… out\antscan\img4 0x4000` → 196 712-byte image (base 0 and 0x4000). — done: 196 712 bytes,
  713 relocations, hunk 0 `0x0..0x23AF8`, hunk 1 `0x23AF8..0x30064`, hunk 2 4 bytes.
- [x] **0.3 Ghidra the addon.**
  `tools\ghidra\run-ghidra.ps1 -Image out\antscan\img0\dshell.img -Relocs out\antscan\img0\dshell.rel -CodeEnd 0x23AF8 -ProjectName antscan -OutRoot out\antscan\ghidra`
  → 770 functions, 125 700 code bytes, `dshell.asm` + model CSVs under `out\antscan\ghidra\`.
  (The script's defaults point at `re\`; passing the three arguments is enough, nothing else is
  hard-coded except `ProjectName`.) — done: 770 functions (32 thunks), 125 700 code bytes,
  611 strings, model in `out\antscan\ghidra\model\`.
- [x] **0.4 Boot it in the oracle** (§2 command). Expect 41 libraries, 0 answered with 0. — done:
  41 libraries, 2281 calls, 0 answered with 0, 1074 rasters, 3 000 262 instructions.
- [x] **0.5 Keep the artefacts** under `out\antscan\` for the rest of the session. `out\` is
  gitignored: they are scratch, not deliverables. — done.

### Phase 1 — make the translator and the model path image-agnostic

- [x] **1.1 `RecompCommand.cs`:** `ImagePath`, `HunkPath`, `ModelPath`, `OutDir` become defaults of
  new flags `--image`, `--hunk`, `--model`, `--out` (plus `--code-end` and `--vector-base`). — done;
  `--prefix` (symbol and file prefix), `--save-name`, `--save-bytes`, `--program-name`, `--a4` and
  `--entry` came with it (see 2.2/3.1).
- [x] **1.2 `Emitter.cs`:** `VectorTableBase` becomes a constructor parameter (default 0x21A58);
  `SlotOf`/`SlotTarget`/`JmpChain`/the `jsr (d16,A4)` emission use the field. Today it is a
  `const`, which is why a different build *crashes* instead of reporting. — done; A4 follows from
  the table base (`+0x7FFE` in both builds), so `SmallDataBase`/`ExecBaseGlobal` are derived and
  `SlotOf` is an instance method. The header's provenance line names the image it came from.
- [x] **1.3 Regression:** re-run the base translation into a temp dir and require the emitted
  `fn_*.c` and `fn_table.c` to be **byte-identical** to `src\recomp\` (the flags must not change
  what is generated). This is the check for the whole phase. — done: 793 `fn_*.c` + `fn_table.c`,
  0 differing (compared EOL-normalised, because `core.autocrlf=true` checks the tree out as CRLF
  while the emitter writes LF; `git diff` on the regenerated tree is empty).
- [x] **1.4 Gate:** `tools\gate.ps1` unchanged and green (translation core). — the two builds and
  the native-patch/flag-wait steps pass. Steps 3–4 (interpreter and translated fixtures) cannot run
  in this tree: `ref\fixtures` is absent (`ref\` is gitignored), so they fail with
  `DirectoryNotFoundException` before and after the change. The byte-identity check above is the
  substitute, and it is stronger for this phase.

### Phase 2 — translate the addon

- [x] **2.1** `recomp --image out\antscan\img0\dshell.img --hunk out\antscan\data\disk1\dshell
  --model out\antscan\ghidra\model\functions.csv --out src\recomp\ant --vector-base 0x23AF8`
  → 766 functions, 35 blocks, 4 refused (`line f`). — done, exactly those numbers. The command
  now also needs the add-on's save file, see 2.2.
- [x] **2.2** Rename the emitted table's symbols: `rc_functions`→`ant_functions`,
  `rc_lookup`→`ant_lookup`, `rc_containing`→`ant_containing`, `rc_functionCount`→`ant_functionCount`
  (a flag on the emitter, or a small post-step; **do not** hand-edit 766 files). — done with
  `--prefix ant`, which also prefixes the function symbols (`ant_fn_0001dcb0`; without it the two
  sets collide at link - only 8 file names collide, but hundreds of function names do). The
  table now emits `<prefix>_functions`, `<prefix>_functionCount` and the build's `rc_program`
  (`ant_engine`); `rc_lookup`/`rc_containing` became hand-written in `src\recomp\cpu.c` and search
  whichever table `rc_active` names, so there is one implementation for both builds (see 3.1).
  The full command is in §10.
- [x] **2.3** Add `src\recomp\ant\*.c` and `ant_table.c` to `tools\build-host.ps1` and
  `tools\build-dos.ps1` source lists. Note the object-file naming collision rule already used for
  `src\oracle\cpu.c` vs `src\recomp\cpu.c`: give the addon set its own object directory. — done for
  `build-host.ps1` (`ant` object group). The link of ~1 600 objects exceeds the 32 767-character
  Windows command line, so the host build now links through a wlink directive file (`link.lnk`);
  `build-dos.ps1` is Phase 8.
- [x] **2.4** Done when: both front ends link and the executable's size grows by ~130 KB only. —
  the Win32 build links and runs. The size grows by ~2.5 MB, not 130 KB: 130 KB is the 68000 code
  the add-on adds, and translated C is ~20× that in x86 (`icftd-recomp.exe` 3.34 MB → 5.8 MB).
  Only one image is resident at run time; the second table is code, not RAM.

### Phase 3 — runtime: select the program at boot

- [x] **3.1 `src\recomp\cpu.h`:** add
  ```c
  typedef struct rc_program {
      const rc_entry *fns;  unsigned count;  u32 imageSize, a4, entry;
      const char *saveName;  u32 saveBytes;
  } rc_program;
  extern const rc_program *rc_active;
  ```
  `rc_stream`/`rc_lookup`/`rc_containing` read `rc_active->fns` (`rc_breakPc`, `rc_coverHook`,
  `rc_entryHook` are unchanged). — done, plus a `name` field for the log. `rc_lookup`/
  `rc_containing` are now hand-written in `src\recomp\cpu.c`; the generated table is data only
  (`rc_functions`, `rc_functionCount`, `rc_engine`). `rc_coverHook`'s index is `own -
  rc_active->fns`, and the host's `--cover` report follows the same table.
- [x] **3.2 `src\runtime\amiga\machine.h`:** constants for the addon —
  `ANT_IMAGE_BASE 0x4000`, `ANT_A4 0x2FAF6`, `ANT_IMAGE_SIZE 196712`, `ANT_SAVE_BYTES (0xC2+0x3214)`
  (=13 014), `ANT_ENTRY 0x4000`. `EMU_SAVE_BYTES` becomes a per-program value
  (`rt_save_bytes(&m)`), because `machine.c` uses it for the "is this a real save" test. — done
  differently, and better: `rc_program` already carries image size, A4, entry, save name and save
  size, and every generated table emits its build's descriptor (`rc_engine` / `ant_engine`, with
  A4 and the entry written as image offsets and `RC_ADDR` applied). So no duplicated `ANT_*`
  constants: `rt_machine` gained `saveName`/`saveBytes`, `rt_save_slot_empty` and the
  "save completed" test in `rt_file_close` read them, and the front end fills them from
  `rc_active` at boot.
- [x] **3.3 `src\host\main.c`:** `g_program` (0 = original, 1 = Antheads), `--program ant` dev
  flag, image path `code\ant4k\dshell.img`, boot with `rt_load_image(&m, 0x4000, antImage)` +
  `oracle_boot(ANT_ENTRY, ANT_A4)` + `rc_active = &rc_ant`. — done; the image path is
  `<data>\ant\code\dshell4k\dshell.img` (the layout Phase 4 produces), `src\host\programs.c`
  maps the id to `rc_engine`/`ant_engine`, and the boot reads entry/A4/save geometry from
  `rc_active`.
- [ ] **3.4 Same in `src\host\dos_main.c`.** — Phase 8.
- [x] **3.5 Done when:** `icftd-recomp --program ant --data out\antscan\data --run` reaches the
  addon's intro, and a headless run reproduces the oracle's 1 074 rasters / 3 000 262 instructions
  (machine state, not a picture). — measured: 3 000 262 instructions, stop at `0x24BE6`, 1074
  rasters, and every register identical to the oracle's (A4 = 0x2FAF6). A `--state` diff against
  the oracle (same 844 records) agrees on every register and custom-chip word of every frame; the
  first RAM difference is at frame 267 and sits in dead stack space below A7 (`0x17FE22`), the same
  class of noise the 1989 build shows at frame 5 against the oracle. The intro itself is what the
  run plays (`voice2`/`met`/`exp` are loaded from the add-on's disk 1); a `--run` window start was
  not part of the measurement.
- [x] **3.6** `docs\recomp-architecture.md`: one paragraph on the two-program model (it is a
  decision, and the doc currently says "the game binary" singular). — done, "Two programs, one
  machine" under phase B.

### Phase 4 — extract the addon disks

- [x] **4.1 Discriminate by content, not label.** `assets.c`'s `disk_volume()` accepts a label
  `desertN`; both sets pass. Add: a disk-1 image is the **original** if it carries `HDesert` and
  `dshell` of 160 332 bytes, the **addon** if it carries `HDesert2`/`NEWS` and `dshell` of 170 972.
  (Cheap: read the root directory and compare the `dshell` size.) — done as `disk_build()` plus
  `root_file_size()` (the root hash table, walked once per image). Disk 1 is decided by the
  program's own size as planned; disks 2 and 3 carry no program, so each got one measured marker
  of its own from §1 — `BACKS` 388 436 / 400 681, `HOSP` 60 349 / 71 752. The add-on is recognised
  **positively** and every other labelled disk stays the 1989 game, so a patched original set is
  accepted exactly as before (the plan's "original if 160 332" test would have refused one).
- [x] **4.2 Two destinations.** `disk1..3` (original, required) and `ant1..3` (addon, optional), in
  the same data folder; `ant\code\dshell4k\dshell.img` written the same way as the original's. —
  done, 185 752 and 196 712 bytes from the same flattener. **This needed one more change than the
  bullet says:** the runtime's dos.library shim mapped every program's `DesertN:` to
  `<data>\diskN`, so a booted add-on could not read its own files
  (`Open("voice2") failed: no disk holds sfx\voice2`). `rt_machine` gained `tree` ("disk" / "ant"),
  `rt_init` sets `"disk"` and `src\host\main.c` sets `"ant"` from `g_program`; `rt_exists`,
  `rt_file_open` and `rt_host_file` (the diskfont reader) use it. Measured: `--program ant --data
  export 3000000` is 3 000 262 instructions, stop at `0x24BE6`, A4 = 0x2FAF6, 1074 rasters — the
  oracle's numbers from §2 — and the 1989 run from the same tree is register-identical to the
  oracle's (3 000 199 instructions, stop `0x22AE4`, 1061 rasters).
- [x] **4.3 `rt_assets_ready`** keeps requiring the original set; add
  `rt_assets_addon_ready(dataDir)` for the optional one (all three `antN` folders **and** the addon
  image). An incomplete addon set is *ignored*, never half-used — that is what makes the button
  appear or not. — done; both are `tree_ready(dataDir, layout, build)` under different names, and
  the signature takes the layout (`rt_assets_addon_ready(dataDir, layout)`) because the DOS tree is
  `ANT1..3` / `ANTSHEL.IMG` and also needs `NAMES.TXT`. `rt_assets_ensure` extracts a set only when
  all three of its disks are present, and an add-on extraction that fails is printed and dropped:
  the image is written last, so a half-written add-on tree is never "ready" and never used.
- [x] **4.4 DOS layout:** `DISK1..3` plus `ANT1..3`, `ANTSHEL.IMG`, and the 8.3/`NAMES.TXT` map
  extended to the addon tree (`tools\dos-pack.ps1 -Data` must produce the same bytes). — done.
  One map serves both trees, and a start that extracts only the add-on (the game's tree already
  there) reads the existing map back (`read_names`) instead of replacing it. The packer's sort had
  to stop being `Sort-Object`'s culture order, which puts `_` after letters and so ordered
  `HD_INSTALL` before `HDINSTALL2` where the extractor's rule (skip `-`/`.`, compare code points)
  does the opposite; both tools now follow one explicit rule, spelled out in `dos-pack.ps1`.
- [x] **4.5 Done when:** a folder holding both sets extracts both trees (78 files + addon); a folder
  with only the addon images still prints "Please put the three original 'It Came from the
  Desert' disk images…"; a folder with one addon image extracts nothing of the addon and the menu
  is unchanged. — measured on Windows (`--extract`): 78 files + 82 add-on files, both images, all
  six trees byte-identical to the exporter's; add-on-only → the message, exit 1, nothing written;
  3 originals + 1 add-on disk → the game's tree only and byte-identical to an originals-only
  extraction, no add-on line. The menu half of the claim is Phase 6 (there is no button yet), and
  the add-on's tree is enough for it to appear only when `rt_assets_addon_ready` says so.
- [x] **4.6** Check: `tools\dos-extract-check.ps1` gains the addon case. — done, in DOSBox and
  green: the first start writes 163 files byte-identical to `dos-pack.ps1 -Data` (both trees, one
  `NAMES.TXT`, `DSHELL.IMG` 185 752, `ANTSHEL.IMG` 196 712); the add-on's disks added on a later
  start are extracted and the game's tree and name map keep their entries; one add-on image
  changes nothing; a second start still extracts nothing; the RAM dump is still identical.
  `tools\extract.ps1` now splits the two sets as well (`export\disk1..3` + `export\ant1..3`,
  `export\ant\code\dshell4k`), because that tree is what the packer stages the reference from.

**Note for the next phase:** `--data out\antscan\data` (Phase 3.5's scratch tree, which held the
add-on's files in `disk1..3`) no longer runs the add-on — it reads `ant1..3` now. Use
`--program ant --data export` after `tools\extract.ps1`.

### Phase 5 — the seam table (the bulk of the work)

- [x] **5.1 Introduce `src\host\seams.h` + `seams.c`:** one `seam_set` struct holding every engine
  address the port uses, **as model (image) addresses**, plus `seam_active()` returning the active
  program's set. Replace the `#define`s in:
  `main.c`, `dos_main.c`, `title.c`, `cheat.c`, `time_freeze.c`, `hospital_camera.c`,
  `save_button.c`. — done. `seam_set` has 100 rows (41 code, 55 data, the two load-range fields and
  the instruction-address count); the eight files' old names are now macros onto the active row
  (`#define MAP_SCRIPT_PC SEAM(mapScriptPc)`), so the call sites keep their shape and every
  `RC_ADDR()` stays where it was. `seam_active()` compares `rc_active` against `rc_engine`, so it
  cannot disagree with the program that is running and the MS-DOS front end (which does not link
  the add-on's table yet) keeps working. `cheat.c`'s `switch` became an `if/else` chain: a `case`
  label has to be a constant and a table row is not. The loading line's load-only code ranges are
  rows too (`loadRanges`/`loadRangeCount`), because they are engine addresses the port uses - left
  as a local table they would have silently stopped matching in the add-on.
- [x] **5.2 Fix the convention while moving them.** `title.c` stores **runtime** addresses
  (model + 0x4000); every other file stores model addresses and adds `RC_ADDR`. The table stores
  model addresses only; `title.c`'s constants lose 0x4000 as they move in. — done, and this is
  what caught the bug the bullet was written for: `title.c` held the fight and fire entries as
  `0x0F46C`/`0x0FE34`, which *look* like model addresses but are the runtime addresses of
  0xB46C/0xBE34 (the engine's own vector slots 41/42). Moved in as model addresses they were
  wrong by exactly 0x4000, and the fight and fire keys stopped starting their scenes. The four
  scene entries are table rows now (`fightScenePc`, `flightScenePc`, `fireScenePc`,
  `hospitalScenePc`) and a key whose row is 0 is not offered.
- [x] **5.3 Fill the addon column** from §6. 81 of 90 are already measured; the exceptions are
  listed in §6.1 and need one measurement each. — done: the five §6.1 rows are settled (the values
  are in §6 and in `seams.c`'s header), two more rows §6 did not have were measured (`MAP_MAX_Y`,
  `MAP_ORG_MINY`), the four scene entries were mapped, and the loading line's ranges were mapped
  from the same function boundaries in both builds.
- [x] **5.4 Validate.** For the original program, every existing check must stay green
  (`tools\gate.ps1 -Full`, step by step). For the addon, each seam gets the same claim its sibling
  has. — the port tier was run twice: after the conversion it fails only `title menu (scenes)` and
  `minigame cheat (Ctrl+W)`. The first was mine (the 0x4000 bug above) and is green again. The
  second **fails on the pre-change tree too** (measured with the host sources stashed: the same
  `Escape Hospital` case fails at `--cheat 600`, and passes at 300 on both trees), so it is a
  pre-existing property of that check, not this change; left alone and written down here.
  For the addon, measured on machine state: the title engages on the add-on image (its hold,
  score, music block and unload rows are live - "the map screen's score starts under the title"),
  every scene key enters its own scene and loads its own bank (`Desert3:FIGHT` from `ant3`,
  `Desert1:UNDER` from `ant1`, `Desert3:BIGANT`, `tankidle`), a played run reaches the add-on's
  first room and its text menus (295 recorded lines: `TEXT_LINE_PC`, `TEXT_LINE_RET`,
  `MENU_ACTION_PC/END`, `TEXT_RASTPORT`) and its situation map, where the SAVE GAME mark is pinned
  at 259,170 (59x16) - i.e. `SAVE_DRAW_PC` and `SAVE_ASSET` are live - and the "Loading" line
  appears during the add-on's own loads, i.e. its load ranges match. Every one of the 41 code rows
  in both columns is also checked against the translated tables: each is an instruction the running
  program's `fn_*.c` knows. That check flagged the two scene entries before the title check did
  ("`0xf46c` is not a translated instruction") and is the cheap way to catch a table typo.
  Not measured live in the add-on: the map cursor, the phone book, the two aims, the hospital
  camera, the clock freeze and the save picker (they need the add-on to be played to that screen).
  Their rows are the §6 measurements; their code path is the same one the 1989 checks exercise.
- [x] **5.5 Done when:** no engine address outside `seams.c` (grep the seven files for `0x` in a
  `#define`; `FIRE_MIN_X`-style *screen* constants stay where they are), and the addon scenes can be
  reached by `--program ant --titlekey <n>`. — done: the only `#define`s with `0x` left in the seven
  files are the map/phone travel windows, the cursor's hot spot, the shot offset, the fire game's
  rectangle and the node/bitmap field offsets - no engine address. `--program ant --titlekey 1..10`
  reaches every add-on scene (and `3` says the program has no such entry instead of waiting).

**Open from this phase** (for phase 6/7, not seam addresses): the add-on's Escape Hospital, started
from the title, ends at frame 30 with a divide-by-zero inside the image's own library stub
(`divu` at `0x272BA`, runtime); the other six scenes run their budget. The 1989 build reaches the
same scene from the title normally, so whatever the add-on's hospital needs (a room's state, or a
library call the runtime does not shim) is worth a measurement before the title's button ships.
— **explained in Phase 6** (§8, third trap): it is the add-on's own 8SVX chunk finder reading an
uninitialised frame word, and the title's injected calls are what leave a zero there. The played
path (Play Antheads → the add-on's own game → its hospital) takes no title injection, and the
button's own start was moved off the hold point for the same reason. — **closed**: the runtime
seeds that frame word for the add-on's finder as it already did for the 1989 one (§8), so the
scene runs from the title too.

**Do not start Phase 6 before 3.6 works**: a title button that switches program is meaningless
until the second program boots.

### Phase 6 — the title screen

- [x] **6.1 A fifth button, only when the addon is available.** `title_button.c`'s
  `g_titleButtonLayout` becomes two layouts chosen in `title_menu_init` by
  `rt_assets_addon_ready()`:
  * without the addon: **unchanged** — 85 / 106 / 127 / 164 (New Game, Load Game, Settings, Quit);
  * with it: 84 / 103 / 122 / 141 / 164 — `New Game`, **`Play Antheads`**, `Load Game`, `Settings`,
    `Quit Game` (step 19, Quit keeps its place; the panel is y 72..184 and the button is 14 high, so
    164+14=178 fits). The player asked for the two buttons to move *down*: that is exactly this.
  — done, as two tables (`g_titleButtonLayout` / `g_titleButtonLayoutAddon`) and
  `title_menu_init(menu, addon, addonRunning)`. The gate is `host_title_addon()` - a front-end
  function, because "the add-on is there" is also "this front end can boot it": `main.c` answers
  from `rt_assets_addon_ready(m->dataDir, RT_ASSETS_WINDOWS)`, `dos_main.c` answers 0 (Phase 8).
  A game already running the add-on gets the four buttons: its New Game plays it, so there is no
  second game to offer (`addonRunning`).
  Measured: from `export\` (both trees) the log's layout is
  `5 button(s); New Game 230,84; Play Antheads 230,103; Load Game 230,122; Settings 230,141;
  Quit Game 230,164`, from a data folder holding only `code` + `disk1..3`
  `4 button(s); New Game 230,85; Load Game 230,106; Settings 230,127; Quit Game 230,164` - today's
  four, unchanged - and from the add-on's own program the same four (its `--titlekey 14` dev path).
  The windowed sample of `tools\title-check.ps1` shows the five buttons' 73-px black top edges at
  84/103/122/141/164 and nothing in the gaps, and the four buttons at 85/106/127/164 with nothing at
  84, 103 or 141.
- [x] **6.2 The action is a program switch, not a scene.** The title is drawn while the *original*
  is held at `TITLE_HOLD_PC` (0x9870). `TITLE_ACTION_ANTHEADS` must end the run and reboot the
  machine with the addon image (§3.3), like Escape does today, with `g_program = 1`. — done, with
  the *player-facing* correction the session asked for: the button is **New Game for the other
  build**, so it is a game start, never a screen. `TITLE_ACTION_ANTHEADS` returns
  `TITLE_PICK_ANTHEADS`, which sets `m->stop` and `rc_stopAt` exactly as `host_title_escape` does
  and leaves `g_switchTo = HOST_PROGRAM_ANT` + `g_playOnBoot` for the front end; `main.c`'s restart
  block picks the add-on's table (`host_program`), image, save geometry and disk tree (`ant1..3`),
  boots it, and calls `host_title_new_game()` on the fresh machine. That function does *not* park
  the add-on at its intro setup and draws no menu: the add-on's own intro runs from the very start
  (its boot's frame 17: `voice2`, `met`, `exp`), and the port only answers the engine's YES/NO load
  screen at the end of it (`title: a new game, nothing to load`, frame 2140 in an 8 M-instruction
  run). **One menu line in the whole log** is the check for that.
  Why not drive the add-on's own title instead: parked at 0xAC3C and started from there, the
  add-on's 8SVX chunk finder (`FUN_0000aeac`) reads its loop flag at `(-0xe,A5)` **before writing
  it** - an uninitialised frame word - and the title's injected calls change what it finds there.
  With a zero there the "VHDR" search is skipped, the sample rate word stays 0, and
  `ldiv(0x369E99, 0)` traps at model 0x232BA (runtime 0x272BA) at frame 22. A natural boot has a
  non-zero word there, so the add-on's intro - and its hospital's later sounds - run untouched when
  the port boots the program instead of parking it. That is the same trap Phase 5 left open; it is
  the add-on's own latent bug, and the port's fix is not to perturb it (no game code was changed).
- [x] **6.3 The addon needs its own title.** After booting the addon, hold it at its own intro
  setup: `TITLE_HOLD_PC` twin **0xAC3C**; its music descriptor is **0x25E44** (`Overhead2.tiny`),
  loaded with the twin of `FUN_00009CF2` (**0xB0BE**) and freed with the twin of `FUN_0000EC8A`
  (**0x104F6**). The addon's title must show the same picture and menu (port art, unchanged). — no
  longer part of the *player's* path: the menu is the port's and is always drawn on the 1989
  program, so the add-on never shows one (6.2). The add-on's own hold/score/unload rows are still
  live and measured - `--program ant --titlekey 14` stops on 0xEC3C with the map's score under the
  title, its own (four-button) menu, and `--titlekey 0` starts its game - which keeps the whole
  seam column honest and is what the digit-key dev seams still use.
- [x] **6.4 What the button says when you are already in Antheads.** Decision D1 (§7).
  Recommended: the same slot reads **`Play Original Game`** and switches back, so the player is
  never trapped in either half. — settled differently, and simpler: there is one menu and it always
  lists both games, so no label has to flip. Escape from an add-on game boots the 1989 program (the
  menu's own build) and shows that menu again - `recomp: restarting as It Came from the Desert`,
  stopped on its hold point 0xD870 - which is how the player gets back. The add-on's own dev menu
  offers four buttons (no `Play Antheads` row), where `New Game` plays the add-on.
- [x] **6.5 `--titlekey`** gains a value for the button; `tools\title-check.ps1` gains a claim
  (button rectangle present/absent, the two shifted positions, and the switch reaching the addon's
  intro). — done: `--titlekey 15` is the button (it says so and ends the run when there is no
  add-on to play: no add-on tree, or a game already running it). `tools\title-check.ps1` now
  asserts: the two layouts rectangle by rectangle; the fifth button's *hit box* (a `--mouse` click
  at 266,110 plays the add-on's game with the add-on present, and opens Load Game without it); the
  boot and the add-on's own intro in one run (A4 `0x2FAF6`, one menu line, `voice2`/`met`/`exp`
  from `ant1`, the answered load screen); and Escape from an add-on game landing on the 1989 menu.
  A `--program ant --titlekey 15` run is refused. Where a desktop gives the game a window, the
  drawn pixels are checked as well (the buttons' black top edges, and none where a button is
  absent).
- [x] **6.6 Done when:** without addon disks the menu's rectangles and rendering are byte-identical
  to today (assert the rectangles and a rendered frame, not a feeling); with them, five buttons and
  a click on `Play Antheads` lands on the addon's intro and *its* title. — measured by
  `tools\title-check.ps1` (gate step 6): the four-button log line is the shipped one, the windowed
  capture of that menu has its four black top edges at 85/106/127/164 and none at 84/103/141 (the
  five-button rows), and a click/`--titlekey 15` boots the add-on and plays its intro - measured on
  machine state (A4, the hold point it does *not* stop on, the add-on's own assets) and watched in
  a window. `tools\settings-check.ps1` (step 7) and `tools\quit-check.ps1` (step 19) were the two
  checks the shift could break - Settings moves to y 141 - and both are green: settings-check now
  reads Settings' rectangle from the layout the build logs instead of hard-coding it, Quit Game
  keeps its place.

### Phase 7 — saves and the "(A)" marker

The two engines write **different files by their own code**: the addon's save routine
(`FUN_00011C98` model / `0x15C98` runtime) writes `DSAVE:`**`ICFTD2`** in two ranges, taken from its
four `lea (d16,A4)` pairs at 0x11D36/0x11D3E and 0x11D66/0x11D6E:
`0x23ED0..0x23F92` (0xC2) and `0x29094..0x2C2A8` (0x3214) — **13 014 bytes**;
the original writes `ICFTD`, 12 444 bytes. No metadata is needed to tell them apart.

- [ ] **7.1** `rt_save_slot_empty()` becomes `rt_save_slot_state(slot)` →
  `{ EMPTY, ORIGINAL(ICFTD), ANTHEADS(ICFTD2), BOTH }` (`machine.c`; the file names come from
  `rc_active->saveName`, the byte count from `rc_active->saveBytes`).
- [ ] **7.2** The title's Load Game renders `Slot N (A)` for an Antheads save. Decision D2 for
  **BOTH** (recommended: two lines, `Slot N` and `Slot N (A)`, each loading its own program).
- [ ] **7.3** A click on a slot boots the program that owns the file: `g_program = 0/1`,
  `m.saveSlot = n`, then the title's existing "answer the load prompt" path runs in *that*
  program (`TITLE_LOAD_ANSWER` twin 0x11B54 for the addon).
- [ ] **7.4** `tools\save-ui-check.ps1` and `tools\dos-save-test.ps1` gain the `ICFTD2` case
  (13 014 bytes, ranges identical to RAM at 0x23ED0 / 0x29094).
- [ ] **7.5 Done when:** a save made in Antheads shows `(A)`, loads back into Antheads, and a 1989
  save in the same slot still loads into the 1989 program; the two never cross-load.

### Phase 8 — MS-DOS

- [ ] **8.1** `tools\build-dos.ps1`: the addon object set; check the extender's memory budget with
  two translated programs linked (source size, not runtime RAM — only one image is loaded at a time).
- [ ] **8.2** `dos_main.c`: `g_program`, `ANT1..3` / `ANTSHEL.IMG`, the same seam table (that is the
  point of Phase 5 — the DOS front end must not grow a second copy of the addresses).
- [ ] **8.3** `tools\dos-extract-check.ps1` and `tools\dos-pack.ps1` cover both trees.
- [ ] **8.4 Done when:** `play_dos.cmd` with both disk sets shows the five-button menu, and the
  addon runs under DOSBox with the same machine state as the Win32 build.

### Phase 9 — documentation and release

- [ ] **9.1** `README.md`: the `disks\` folder now also accepts the Antheads images; the title's
  fifth button and when it appears; `(A)` in the slot list. `disks\README.md`: the addon file names.
  `assets\README.md`: no new tracked art is needed (the button art is shared, only the label
  differs) — unless D1's label needs a different width, in which case the label is drawn by
  `title_button.c`, not a PNG.
- [ ] **9.2** `docs\port-features.md`: a short section for the button and the slot marker, with the
  claim each is checked by.
- [ ] **9.3** `tools\gate.ps1 -Full` green, plus one `--program ant` smoke step (boot + one scene).
- [ ] **9.4** `tools\win32-pack.ps1` unchanged (the release still ships an empty `disks\`); a
  release with the addon images dropped in shows the button.

---

## 5. What the addon changes for the player

For orientation while testing: the addon starts in **January 1956**, its map header reads
`Home Base` and its action list is
`Answer Door / Situation Map / Go to Map / Make a Call / Fight / Escape Hospital / Take a Flight /
Fight / Fight Ant Head` — no fire game. Its bulletin ("Bulletin: Giant ants attack downtown…") and
its deadline logic are different (day < 6, hours 0xC/0x7/0x12 instead of day == 0, hours
0x11/0x5/0x11), which is why the bulletin routine is one of the changed functions.

## 6. The measured seam map

Model (image) addresses. `mapped` is the addon's model address at the same load origin (0x0); add
0x4000 for a runtime address. Method `function-hash` = unique identical mnemonic sequence;
`insn-index` = same instruction index inside a hash-matched function; `use-site` = the same A4/PC
operand of the same instruction in a hash-matched function, several agreeing; `string` / `caller` /
`structure` / `start+size` / `return` / `adjacent` = the evidence named in the row.
Cross-checked: `TITLE_SCORE_DESC` 0x25E44 holds 0x0000FFB8 = the addon's `Overhead2.tiny`
(original: 0x23B84 holds 0x0000E74C); `TITLE_END_FLAG` 0x25078 is the word the addon's bulletin
routine writes `3` into; the clock words keep their relative order (day/hour/gate 0x23ED8/DC/E0).

| symbol | original | Antheads | method |
|---|---|---|---|
| `MENU_ACTION_PC` | 0x247A | 0x27D8 | string |
| `MENU_ACTION_FLIP` | 0x29D2 | 0x2D5A | return (corrected: see §6.1) |
| `MENU_ACTION_END` | 0x2B0E | 0x2E96 | start+size |
| `MENU_LOOK_PC` | 0x2B7C | 0x2F16 | function-hash |
| `MENU_LOOK_FLIP` | 0x2C62 | 0x2FFC | insn-index |
| `MENU_LOOK_END` | 0x2C92 | 0x302C | start+size |
| `MAP_SCRIPT_PC` | 0x3B1E | 0x3F9E | string |
| `TEXT_LINE_PC` | 0x4D76 | 0x53B0 | function-hash |
| `TEXT_LINE_RET` | 0x4F40 | 0x557A | insn-index |
| `TITLE_CLOCKVBI_PC` | 0x551C | 0x5B5E | function-hash |
| `ROOM_UPDATE_PC` | 0x5824 | 0x5E3E | string |
| `ROOM_DRAW_PC` | 0x5EAC | 0x6500 | function-hash |
| `PHONE_UPDATE_PC` | 0x5FBE | 0x6612 | function-hash |
| `PHONE_UPDATE_RET` | 0x6632 | 0x6CAA | return (settled: see §6.1) |
| `ANT_SCENE_PC` | 0x7934 | 0x9238 | function-hash |
| `AIM_SHOT_PC` | 0x86A0 | 0x9F60 | function-hash |
| `TITLE_ANT_PC` | 0x8C5C | 0xA526 | caller |
| `TITLE_HOLD_PC` | 0x9870 | 0xAC3C | function-hash |
| `TITLE_INTRO_RUN` | 0x98F8 | 0xACC4 | insn-index |
| `TITLE_INTRO_SKIP` | 0x98FC | 0xACC8 | insn-index |
| `TITLE_SCORE_PC` | 0x9CF2 | 0xB0BE | function-hash |
| `TITLE_END_PC` | 0xA4D6 | 0xB9DE | function-hash |
| `FIGHT_UPDATE` | 0xA74E | 0xBC56 | function-hash |
| `FIRE_UPDATE` | 0xB528 | (gone) | removed scene |
| `AIM_SPRAY_PC` | 0xB97C | (gone) | removed scene |
| `TITLE_UNDER_PC` | 0xBFCA | 0xD83C | function-hash |
| `UNDER_UPDATE` | 0xD376 | 0xEBE2 | function-hash |
| `TITLE_UNLOAD_PC` | 0xEC8A | 0x104F6 | function-hash |
| `TITLE_LOAD_PROMPT` | 0x102A2 | 0x11B10 | insn-index |
| `TITLE_LOAD_ANSWER` | 0x102E6 | 0x11B54 | insn-index |
| `SCENE_FIGHT_PC` (title key 1) | 0xB46C | 0xC974 | structure + function-hash |
| `SCENE_FLIGHT_PC` (key 2) | 0x107A6 | 0x11FF8 | function-hash |
| `SCENE_FIRE_PC` (key 3) | 0xBE34 | (gone) | removed scene |
| `SCENE_HOSPITAL_PC` (key 4) | 0x1819A | 0x198D4 | function-hash |
| `MAP_EVENT_PC` | 0x1061C | 0x11E8A | structure |
| `FLIGHT_UPDATE` | 0x125AA | 0x13E16 | function-hash (settled: 295/295) |
| `HOSP_UPDATE` | 0x19E9C | 0x1B766 | function-hash |
| `TITLE_CHICKEN_PC` | 0x1BA3E | 0x1DAB0 | function-hash |
| `CHICKEN_UPDATE` | 0x1C838 | 0x1E8AA | function-hash |
| `MENU_FLIP_PC` | 0x1D1DA | 0x1F260 | function-hash |
| `SAVE_DRAW_PC` | 0x1DBD0 | 0x1FC6C | function-hash |
| `CLOCK_DAY` | 0x21E1E | 0x23ED8 | use-site |
| `CLOCK_HOUR` | 0x21E22 | 0x23EDC | use-site |
| `CLOCK_GATE` | 0x21E26 | 0x23EE0 | use-site |
| `TITLE_END_FLAG` | 0x22D68 | 0x25078 | use-site |
| `FIGHT_OVER` | 0x230F6 | 0x25406 | use-site |
| `TITLE_SCORE_DESC` | 0x23B84 | 0x25E44 | use-site |
| `HOST_SCORE_PTR` | 0x23C58 | 0x25F18 | use-site |
| `TITLE_MUSIC_BLOCK` | 0x23C5E | 0x25F1E | use-site |
| `AIM_AXIS_X` | 0x24A80 | 0x26D40 | use-site |
| `AIM_AXIS_Y` | 0x24A82 | 0x26D42 | use-site |
| `TEXT_RASTPORT` | 0x2656A | 0x28D8E | use-site |
| `SAVE_SCREEN_H` | 0x26618 | 0x28E3C | use-site |
| `SAVE_ASSET` | 0x2682C | 0x29050 | use-site |
| `CLOCK_DISP_H` | 0x26870 | 0x29098 | use-site |
| `CLOCK_DISP_AP` | 0x26872 | 0x2909A | adjacent |
| `MAP_AXIS_X` | 0x26892 | 0x290BA | use-site |
| `MAP_AXIS_Y` | 0x26894 | 0x290BC | use-site |
| `MAP_FIRE_HELD` | 0x26896 | 0x290BE | use-site |
| `TITLE_LOCATION_PC` | 0x28A3A | 0x2B282 | use-site |
| `MAP_MAX_Y` | 0x28A48 | 0x2B290 | use-site |
| `MAP_ORG_X` | 0x28A4C | 0x2B294 | use-site |
| `MAP_ORG_Y` | 0x28A50 | 0x2B298 | use-site |
| `MAP_ORG_MINY` | 0x28A5C | 0x2B2A4 | use-site |
| `MAP_CUR_X` | 0x28A54 | 0x2B29C | use-site |
| `MAP_CUR_Y` | 0x28A58 | 0x2B2A0 | use-site |
| `TITLE_ROOM_PC` | 0x28B10 | 0x2B358 | use-site |
| `TITLE_ROOM_NAME` | 0x28B3E | 0x2B386 | string |
| `MAP_PANEL` | 0x28C1C | 0x2B464 | use-site |
| `HOSP_FINE` | 0x28CD4 | 0x2B51C | use-site |
| `HOSP_SCROLL` | 0x297F2 | 0x2C1F6 | use-site |
| `SCENE_INIT` | 0x29896 | 0x2C2B0 | use-site |
| `SCENE_RESULT` | 0x2991E | 0x2C34C | use-site |
| `ANT_WON` | 0x29920 | 0x2C350 | use-site |
| `AIM_X` | 0x29AE0 | 0x2C5C0 | use-site |
| `AIM_Y` | 0x29AE2 | 0x2C5C2 | use-site |
| `AIM_ACC_X` | 0x29AE4 | 0x2C5C4 | use-site |
| `AIM_ACC_Y` | 0x29AE6 | 0x2C5C6 | use-site |
| `ANT_OVER` | 0x29CC0 | 0x2C7A0 | use-site |
| `FIGHT_H_POSE` | 0x29E24 | 0x2C8C2 | use-site |
| `FIGHT_O_POSE` | 0x29E26 | 0x2C8C4 | use-site |
| `FIGHT_H_HEALTH` | 0x29E36 | 0x2C8D4 | use-site |
| `FIRE_ACTIVE` | 0x29E88 | (gone) | removed scene |
| `FIRE_END_WAIT` | 0x29EBA | (gone) | removed scene |
| `HOSP_VIEW_X` | 0x29EC6 | 0x2C962 | use-site |
| `HOSP_VIEW_Y` | 0x29EC8 | 0x2C964 | use-site |
| `HOSP_PLAYER_X` | 0x29ED0 | 0x2C96C | use-site |
| `HOSP_PLAYER_Y` | 0x29ED2 | 0x2C96E | use-site |
| `PANEL_FLAG` | 0x21F5A | 0x24068 | use-site |
| `PANEL_COLS` | 0x21F50 | 0x2405E | use-site |
| `HOST_HOSP_PROG` | 0x2A170 | 0x2CC0C | use-site |
| `FLIGHT_OVER` | 0x2A544 | 0x2CFDE | use-site |
| `FLIGHT_LANDED` | 0x2A552 | 0x2CFEC | use-site |
| `CHICK_BRAKE` | 0x2BCCE | 0x2E79C | use-site |
| `CHICK_OVER` | 0x2BCD0 | 0x2E79E | use-site |
| `CHICK_WON` | 0x2BCD4 | 0x2E7A2 | use-site |
| `TITLE_SWERVE_PC` | 0x2C100 | 0x2EBCE | use-site |
| `TITLE_SWERVE_END` | 0x2C102 | 0x2EBD0 | use-site |

### 6.1 The five rows §6 left open — all settled 2026-11-18

* **`SAVE_ASSET` 0x2682C → 0x29050** — the same five asset loads in the same order after the map's
  MMAP (`0x28a36→0x2b27e`, `0x26824→0x29048`, `0x2682c→0x29050` = "SVGM", `0x26828→0x2904c`,
  `0x28a2e→0x2b276`). Live in the add-on: the mark is pinned at 259,170 from the add-on's map.
* **`TITLE_ROOM_NAME` 0x28B3E → 0x2B386** — the `pea !B%02d` + `pea (d16,A4)` pair in the room
  draw, the same two instructions as the original's at 0x5996.
* **`CLOCK_DISP_AP` 0x26872 → 0x2909A** — the long right after `CLOCK_DISP_H` (0x29098); the add-on
  writes it with `move.l A0,(-0x2a5c,A4)` at 0x5AE6/0x5AF0, the twin of the original's two writes.
* **`PHONE_UPDATE_RET` 0x6632 → 0x6CAA** (not 0x701C): the call at 0x6CA6 is followed by
  `addq.w #4,SP` and a branch back to the loop's head, exactly as the original's 0x662E is; the
  other caller (0x7018) is the panel path.
* **`FLIGHT_UPDATE` 0x125AA → 0x13E16** — confirmed: all 295 original instructions appear in order
  inside it (the add-on adds 4), and it is called from the flight engine's twin (0x11FF8).
* **`MENU_ACTION_FLIP` 0x29D2 → 0x2D5A** (not 0x1F410, the value this table first carried): it is
  the return address of the flip call *inside the action list*, `jsr (-0x7df4,A4)` at 0x2D56, the
  twin of the original's 0x29CE → 0x29D2. 0x1F410 is the return address one level down, inside the
  add-on's display wrapper FUN_0001f34c (`jsr 0x0001f260` at 0x1F40C), which a scene's own display
  loop - the intro's among them - calls every pass, so the old row made the port take those scenes
  for a text menu. Measured in a
  played add-on run (`--program ant --titlekey 0 --mouse ...`): the list's flip arrives as 0x2D5A
  on every pass (0x2FFC from the "Look ..." list, unchanged), the arrow stays up for the whole
  list, and hovering line 2 commits entry 1/action 2 - exactly what one Down press commits. Before
  the correction the pointer was hidden from 1605 to 2600, the list's whole life (its passes do not
  redraw the location picture, so the room seam had gone stale), and no line could be picked.
  `tools\ant-pointer-check.ps1` is the regression check (gate step 9b).
* **Not in §6, measured now:** `MAP_MAX_Y` 0x28A48 → 0x2B290 and `MAP_ORG_MINY` 0x28A5C → 0x2B2A4
  (the map script and FUN_000035D2's twin read/write them at the same instructions; the whole
  0x28A36..0x28A62 block moves by +0x2848).
* **`PANEL_FLAG` 0x21F5A → 0x24068 and `PANEL_COLS` 0x21F50 → 0x2405E** — the runtime display's
  narration-panel palette compensation (`display.c`, "while the panel flag is up its five entries
  come from the engine's own table") used the 1989 build's two addresses unconditionally. Under
  the add-on 0x21F5A lands in its *code* hunk, so the test read a non-zero instruction word,
  believed the panel was open and took five code words as colours: the intro's background came out
  blue (COLOR00 = 0x0000EE) with pen 1..4 wrong as well. The add-on's twin FUN_00000b9e stages its
  colours at 0x2405E (`lea (-0x7a98,A4)`) and raises its flag at 0x24068
  (`move.w #1,(-0x7a8e,A4)`), the same instruction indices as FUN_000007F4's 0x21F50/0x21F5A.
  Both rows now reach the display through `rt_machine.panelFlag/panelCols`, set from this table at
  boot.
* **The title's four scene entries** are seams too and were not in the table: fight 0xB46C→0xC974
  (the same "Fight.tiny", `0x40` into the music block and FUN_0000a74e as its update), flight
  0x107A6→0x11FF8, hospital 0x1819A→0x198D4, fire gone. **Read them as model addresses:** the 1989
  title stored the *runtime* addresses 0xF46C/0xFE34, which are 0xB46C/0xBE34 in the image.
* **The loading line's load-only ranges** moved into the table as well: the same eight code regions,
  mapped function-boundary to function-boundary (`0xAAA..0xFA2 → 0xE54..0x134C`,
  `0x1EC42..0x1F03E → 0x20CBA..0x210D0` - Sms_Load grew -, `0x2011A..0x201D4 → 0x221BC..0x22276`,
  `0x20204..0x202C4 → 0x222A6..0x22366`, `0x202C4..0x204FA → 0x22366..0x2259C`,
  `0x204FA..0x20518 → 0x2259C..0x225BA`, `0x20518..0x205E6 → 0x225BA..0x22688`,
  `0x205E6..0x207F0 → 0x22688..0x22892`). Live in the add-on: "Loading" appears during its loads.

## 7. Open decisions

| # | question | recommendation |
|---|---|---|
| D1 | What does the fifth button say while the addon is running? | the port's menu is one menu, always drawn on the 1989 program, and Escape from either game returns to it, so nothing has to flip. A game already running the add-on simply gets the four buttons (its New Game plays it), and there is no "way back" label at all. **Settled 2026-11-18** (the first draft's `Play Original Game` was 90 px in a 73 px button, and it only existed because the menu was drawn per build) |
| D2 | A slot directory holding **both** `ICFTD` and `ICFTD2` (the player saved from both halves in one slot) | show **two lines**: `Slot N` and `Slot N (A)`; each loads its own program. The slots are shared by the two games, which is what makes this the only honest way to show a slot both wrote |
| D3 | Where the addon's generated code lives | commit it under `src\recomp\ant\` (the model is generated too; generating at build time would need the model in the repo) |
| D4 | The title's digit keys in Antheads | keep 1,2,4,5,6,7 and the three endings (all mapped here); **disable 3** (fire game removed) and say so in `--titlekey`'s help |
| D5 | Save compatibility with a real Amiga | none needed: both saves are raw address-based dumps at base 0x4000; a WinUAE save still drops in |

## 8. Traps (all of these cost time if rediscovered)

* **No uniform data delta.** Code hunk +0x20A0, clock +0x20BA, map +0x2848, aim +0x2AE0. Use §6.
* **The runtime model reads engine addresses too.** `display.c` consults the narration panel's
  flag and colour words (0x21F5A/0x21F50) to keep the panel visible through the intro fade. They
  are engine data, so the add-on's differ (0x24068/0x2405E); left hard-coded, the add-on's intro
  read code bytes as colours and came out blue. They are the `PANEL_FLAG`/`PANEL_COLS` rows now,
  reaching the display through `rt_machine.panelFlag/panelCols`. Any other `rt_read*` of an engine
  address in the runtime needs the same row.
* **`Emitter.VectorTableBase` is a `const`.** Without Phase 1 the translator *crashes*
  (`IndexOutOfRangeException`) instead of reporting; do not debug the addon with the old build.
* **`title.c` mixes conventions** with every other seam file (runtime vs model addresses). Moving
  its entries into the table as model addresses is where 0xF46C/0xFE34 became 0xB46C/0xBE34: as
  *runtime* values they are the fight and fire scene entries, as *model* values they are
  instructions in the middle of other functions. That mistake cost a green `title-check`; the
  tell was "the scene never loaded Desert3:FIGHT".
* **The vector table is sorted by address, so its slot indices do not match between the builds.**
  Slot 41 is 0xB46C in the 1989 build and 0xB292 in the add-on (a different function); mapping by
  slot gives nonsense. Map by content (§9's method), not by slot.
* **A seam that the program does not have is 0, not the other build's address.** The add-on's
  fire seams are 0 and every user of them tests for it; `RC_ADDR(0)` would otherwise be the boot
  instruction and the hook would fire there.
* **Both disk sets carry the same volume labels.** The extractor must discriminate by content.
* **`fn_*.c` names collide** between the two programs; the addon needs its own directory and its own
  object directory in both build scripts.
* **`rc_breakPc` is one global** (the title's hold point) — it must follow the active program.
* **The fire game is removed**, so four seams have no counterpart; code that assumes them must be
  skipped, not "kept pointing at the original's address".
* **Measurement runs must still start where the original starts**: the title only arms for a played
  game (`docs/port-features.md`, "Done"), and that rule does not change for Antheads.
* **`PHONE_UPDATE_RET` and the map's save mark are detected by `pc ==` comparisons in a hook**;
  a wrong address fails silently (the feature simply never fires). Validate each with its check.
* **The title's menu is one row taller with the add-on**, and the four other buttons move down with
  it (Settings 127 → 141, Load Game 106 → 122, New Game 85 → 84). A check that clicks a fixed
  coordinate silently misses - `tools\settings-check.ps1` now reads Settings' rectangle from the
  layout the build logs (`title: menu: ...`), and `tools\title-check.ps1` asserts both layouts.
* **`--program ant` needs the add-on's image.** The flag picks the table, entry, A4 and save
  geometry, not the file: a scripted run that also passes `export\code\dshell4k\dshell.img` boots
  the 1989 image with the add-on's table and dies at once ("the program jumped outside its image").
  Either omit the image (the front end derives `<data>\ant\code\dshell4k\dshell.img`) or pass the
  add-on's.
* **Starting the add-on from a title hold point breaks its sound loader.** The add-on's 8SVX chunk
  finder (`FUN_0000aeac`) tests its loop flag at `(-0xe,A5)` *before* writing it - an uninitialised
  frame word. The 1989 title's injections (the score unload, the return into the hold pc) change
  what that word holds; when it is 0 the "VHDR" search is skipped, the sample rate stays 0 and
  `ldiv(0x369E99, 0)` traps at model 0x232BA. A natural boot has a non-zero word there. So "Play
  Antheads" **boots** the add-on and lets its intro run untouched; it does not park it at 0xAC3C
  and start it from the menu. (This is also the answer to the hospital's `divu` Phase 5 left open.)
  The slot is seeded for the add-on's finder the way it already was for the 1989 one
  (`0x9AE0`), so no path can leave a zero there any more: `src\recomp\cpu.c` and
  `src\oracle\cpu.c` store 1 at `A7-0x12` when the entry word is the finder's `link a5,#-0xe`
  prologue - which picks the right routine in either build, since each address is other code in the
  other one. Measured before/after on the same command: `--program ant --titlekey 4` (Escape
  Hospital) trapped at frame 30 (`divu` at 0x272BA, `D0=0x369E99`) and now loads `elbell`,
  `screeeems`, `dthatstheguy` and `Desert3:HOSP` and runs on. A played game reaches the same
  finder through the same loader (`--titlekey 5`'s `carcrash`), so its stack history no longer
  decides whether the chicken race plays.

## 9. How the map in §6 was produced (so it can be regenerated)

1. Take each `; ---- <addr> <name> (<n> bytes)` section of `re\disasm\dshell.asm` and
   `out\antscan\ghidra\disasm\dshell.asm`; hash the *mnemonic sequence* (SHA-1, first 16 hex).
2. A function maps when exactly one addon function has the same hash (`function-hash`).
3. For an address inside a mapped function, take the same instruction index (`insn-index`) — this
   is how return addresses are found.
4. For a data address, find an original instruction that references it (A4 displacement, or a PC
   relative/absolute operand) in `re\model\xrefs.csv`, locate the same instruction index in the
   mapped function, and read the addon instruction's operand; several use sites must agree
   (`use-site`).
5. What remains is matched by a distinctive string (`string`), the caller graph (`caller`), or
   structure (`structure`), and is listed in §6.1.

## 10. Where the work does *not* go

The addon's program is game data and behaves like the original's: it is **not** part of the port's
own code. No game logic is written by hand — the addon is translated like the 1989 build, and any
difference from the addon's own binary is a bug by RULE 0. The port's additions (the fifth button,
the `(A)` marker, the program switch) are port features: they follow
[`port-features.md`](port-features.md) and may never be hidden behind an opt-in flag — a shipped
launch with the addon disks shows the button.

## 11. Regenerating the add-on's translation

The generated files are committed, so this is only needed when the translator or the model
changes. Run from the repository root, after Phase 0 left its artefacts in `out\antscan\`:

```
dotnet build src\assetExport\ICFTD.AmigaExport.csproj
src\assetExport\bin\Debug\net10.0\ICFTD.AmigaExport.exe recomp `
    --image out\antscan\img0\dshell.img `
    --hunk  out\antscan\data\disk1\dshell `
    --model out\antscan\ghidra\model\functions.csv `
    --out   src\recomp\ant `
    --vector-base 0x23AF8 --prefix ant `
    --save-name ICFTD2 --save-bytes 0x32D6 --program-name Antheads
```

* `--prefix ant` writes `ant_fn_<addr>` functions, `ant_functions`/`ant_functionCount` and
  `ant_engine`, plus `ant_table.h`; the 1989 build's files are left alone.
* `--vector-base` is where the add-on's `jsr (d16,A4)` table starts (= the end of its code hunk).
  A4 follows from it (`+0x7FFE`), which is why only one address is needed.
* `--save-name`/`--save-bytes`/`--program-name` are what the emitted `rc_program` carries: the
  file the add-on's own save routine writes (`ICFTD2`, 0xC2 + 0x3214 = 13 014 bytes) and the name
  the log prints. `--a4`/`--entry` exist for a build whose layout differs from that rule.
* The same command without `--prefix`/`--vector-base` regenerates the 1989 translation
  (`src\recomp`); `git diff` must stay empty for it.
* Rebuild with `tools\build-host.ps1` (the add-on set is its own object group; the link goes
  through a wlink directive file because ~1 600 objects do not fit on one command line).
