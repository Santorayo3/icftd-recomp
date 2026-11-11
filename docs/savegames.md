# Savegames — measured facts and a plan for save slots

Written 2026-11-11. Everything in "what the game does" is read from
`re\decomp_all\dshell\functions\01029e_FUN_0001029e.c`, `01042a_FUN_0001042a.c` and
`0000e4_FUN_000000e4.c` plus the raw image words — not guessed.

## What the game does (measured)

**Two routines, both reachable only through the engine's vector table:**

| slot | stub | routine | role |
|---|---|---|---|
| 49 | `0x021B7E` | `FUN_0001029e` | **load** — the "Lizard Breath has been awaiting your return." prompt |
| 50 | `0x021B84` | `FUN_0001042a` | **save** — "Is something more important than saving mankind from annihilation?" |

`FUN_000000e4` (the main loop) calls slot 49 once at start-up and slot 50 **after every game
session ends**, before the outer loop continues:

```c
local_42 = (*_DAT_00021b7e)();      /* load prompt: 0 = new game, 4 = loaded */
do {
    ... run the world (FUN_00005cce, FUN_0000551c, ...) ...
    (*_DAT_00021b66)();             /* end of session */
    FUN_00005596();
    (*_DAT_00021b84)();             /* save */
    local_42 = 1;                   /* next pass is not a new game */
} while (true);
```

So there is exactly **one save slot and one file**, written when a session ends. The save prompt is
interactive: "If you pushed save game by mistake, choose 'NO'" cancels it (`FUN_0001042a` returns
immediately when the YES/NO prompt answers 0).

**The file**: `ICFTD` in the directory assigned to `DSAVE:`, opened with
`dos.Open` mode `1005` (`MODE_OLDFILE`) to load and `1006` (`MODE_NEWFILE`) to save. Both routines
first call a slot-2 / slot-3 routine with the two strings `"DSAVE:"` and `"ICFTD"`
(`0x000105C1`/`0x00010423` and the pointer at `0x00023C66`).

**The content is a raw dump of two fixed engine ranges** — two `dos.Write` calls, no header, no
version, no checksum:

| # | length | image range | what it covers |
|---|---|---|---|
| 1 | 120 B (`0x78`) | `0x021E18..0x021E90` | starts exactly where the 160-entry vector table ends |
| 2 | 12 324 B (`0x3024`) | `0x02686C..0x029890` | the engine's world/state block |

Total **12 444 bytes**. Load is the same two reads into the same addresses. The lengths are not
literals — the code computes `buf2 - buf1` from two `lea (d16,A4),A0` pairs (`0x00010328`:
`lea (-0x7C3E,A4)` to `0x00010330`: `lea (-0x7BC6,A4)`), which is why the counts here are derived
rather than quoted.

Consequence that shapes the whole plan: **we never have to understand the save format.** It is the
game's own memory image at the game's own load address (0x4000), and the file name is the only
handle the engine has on it.

## What the runtime does today

**Implementing (2026-11-11) — Phase 0 and part of Phase 1/2 are in.**

| piece | state |
|---|---|
| `plat_create` / `plat_write` | added; `plat_open` is unchanged and still read-only |
| `dos.Open` | honours the mode: `1005` opens for reading, `1006`/`1004` create (`plat_create`) |
| `dos.Write` (LVO −48) | writes through a real handle and returns the byte count; handle 0 is the console and still echoes to stdout |
| `DSAVE:` | first-class volume → `<exe dir>\saves\slot<N>\`, both directory levels created on demand (a `Lock` on a missing directory would park the engine in its "insert volume" panel) |
| slot | `m->saveSlot`, default 1; **F1..F4 pick a slot, F5 cycles** — no ini entry; `--slot N` overrides for tests |
| feedback | the OSD: "Save Slot - N" in the top left (2 s) on a slot change, the save icon in the top right (2 s) when a save completes |

Verified so far (machine state, not pictures):

* `tools\dos-save-test.ps1` drives the exact call sequence of `FUN_0001042a` through `rt_os_call`
  (Lock → CurrentDir → Open(1006) → Write ×2 → Close) for a slot that does not exist yet: the file
  appears at `bin\win32\saves\slot3\ICFTD` with **12 444** bytes, both ranges byte-identical, and
  reads back identically with `Open(1005)`.
* A real run of the game reaches the load routine and resolves the volume: `dos.Lock("DSAVE:",-2)`
  answers, `CurrentDir` selects it, and `Open("ICFTD",1005)` opens the file the test wrote.
* With an empty slot the engine's own "no save yet" path runs unchanged: it writes a **1-byte**
  placeholder (`FUN_0000067c`) before opening for reading — that placeholder must not be reported
  as a save, so the icon only fires for a write of at least `EMU_SAVE_BYTES`.

Still open: the **save itself has not been observed end to end**, because it only happens after a
session ends (`FUN_000000e4`: the inner loop stops when the player walks into a location), which
needs real play. The path is identical to the one the test drives, but it has not been seen write
12444 bytes of live game state yet.

## Planned, not implemented

Phase 2 leftovers: `.bak` generation, write-to-temp-then-rename, `meta.txt` with the image checksum.
Phase 4: refuse a save from a different image, a native slot picker, an engine-side save screen.

## Plan

### Phase 0 — make writing possible (prerequisite, no game logic involved)

1. `platform.h` / `plat_win32.c`: `plat_create(path)` (truncate/create), `plat_write(f, offset, src, len)`,
   `plat_set_size(f, size)`. Keep the existing read path untouched.
2. `dos.Open`: honour the mode — `1005`/`1006`/`1004` (OLDFILE / NEWFILE / READWRITE). For
   `1006`, create the host file; for `1005`, fail when it is missing (the engine already checks).
3. `dos.Write`: write through, return the byte count in D0 (the engine ignores it today, but
   returning 0 for a successful write is a lie waiting to bite), and keep the stdout echo behind
   `--doslog`.
4. `DSAVE:` becomes a first-class volume: `<exe dir>\saves\slot<N>\`, created on first save.

### Phase 1 — one slot, original compatibility

**Decision (2026-11-11): the slot is chosen with function keys, not from the ini.** F1..F4 select
slot 1..4, F5 steps to the next one, and the runtime shows "Save Slot - N" for two seconds. The
ini entry below is therefore *not* implemented; it is kept here only as the alternative that was
considered.

`icftd.ini`:

```ini
[SAVE]
; Which save slot the game reads and writes. 1..9.
slot=1
; Directory (relative to the executable) that holds the slots.
directory=saves
```

The DOS shim maps `DSAVE:ICFTD` to `<exe>\<directory>\slot<slot>\ICFTD`. Nothing else changes: the
engine still writes its own 12 444 bytes, so a save written by a real Amiga (WinUAE on the same
image, base 0x4000) can be dropped into a slot unchanged, and ours can be taken back out.

**Verification (machine state, per the project rules):**
- `--state` a run that reaches the end of a session, answer the save prompt "NO" (i.e. do save),
  check the host file exists with exactly 12 444 bytes and that its two halves equal the engine
  RAM at `0x021E18`/`0x02686C` (read out of a `--ramstop` dump — a direct `cmp`, no guessing).
- Load it back in a second run and compare the two RAM ranges and the `--state` records against the
  first run. Loading must restore the same bytes that were written.
- A save with `slot=1` present but `slot=2` absent must make the YES/NO load prompt fail exactly as
  today (no new crash path).

### Phase 2 — several slots

- Layout: `saves\slot1\ICFTD`, `saves\slot2\ICFTD`, … The active slot comes from the ini; a
  `--slot N` command-line switch overrides it for testing (and is what a future UI would drive).
- When a save is written, keep the previous one as `ICFTD.bak` (one generation). Cheap and it
  removes the "my game got overwritten by a failed autosave" complaint.
- Write-through-temp: write `ICFTD.tmp`, then rename over `ICFTD`. The engine's own save routine
  writes the file directly and never truncates early, so a crash mid-save is the only real risk —
  the shim can absorb it because it owns the host file.
- Per-slot metadata for the future slot picker: `<slot>\meta.txt` with the image checksum + build id
  + a timestamp. Do **not** try to decode the 12 KB blob yet; if a "room / play time" line is wanted
  later, that is a separate (small) reverse-engineering job on the blob.

### Phase 3 — choosing a slot in-game

Three options, cheapest first:

1. **Host shortcuts** (no UI work): `F5` cycles the active slot and shows it in the window title (or
   a one-line OSD), `F6` re-reads the ini, `F7`/`F8` = quick load / quick save into the active slot.
   This alone satisfies "more than one savegame" for a player who can read the ini.
   **Done, with a different key set:** F1..F4 pick a slot, F5 cycles, and the OSD shows which one
   is active. Quick load / quick save are not implemented (the engine's own prompt already asks).
2. **Runtime-side dialog**: when the engine opens `DSAVE:ICFTD` for writing, show a native "save to
   slot N?" box; on a read, show a slot picker. Zero engine changes, but the UI is host-styled.
3. **Engine-side UI**: replace routines 49/50 (vector slots) with our own screens using the game's
   own narration-window art. Most faithful, most work — and it must not change what the game does
   with the blob.

Recommended order: 1 now, 3 later if the look matters; 2 is a stopgap that adds a second UI dialect.

### Phase 4 — robustness / compatibility

- Refuse to load a save written by a *different* image (store the image SHA-256 in `meta.txt`).
  A mismatch is a hard error with a clear message, not a silent corrupted world.
- Keep saves out of git (`/saves/` in `.gitignore` alongside `/export/`, `/re/`).
- The save blob is address-based; because our build uses the same load address (0x4000) and the same
  image, no relocation is needed. If the recompilation ever changes a layout, saves become
  version-specific — so pin `RC_BASE` in `meta.txt` too.

## Open questions for the implementation session

1. ~~What exactly are the slot-2 / slot-3 calls with `("DSAVE:", "ICFTD")`?~~ **Answered:**
   `FUN_000002f4` / `FUN_0000050e` are the load / save wrappers. They `Lock("DSAVE:", -2)`,
   `CurrentDir` onto it and then open the bare name `ICFTD`; when the lock fails they park the game
   in the "insert volume" panel and retry. So the shim must answer the lock and create the slot
   directory on demand — which it now does.
2. Does anything else write to `DSAVE:`? Only these two routines reference the string, so no.
   (One more thing does write there: `FUN_0000067c`, the load path's "no save yet" placeholder —
   a single byte from image offset `0x75A`.)
3. Does the save blob contain absolute pointers into OS structures (library bases, file handles)?
   The two ranges are engine state only, and the load path restores them before any library call —
   but this must be verified by the save → load → compare test in Phase 1, not assumed.
4. Should a *new game* delete the old save? On the original, starting a new game does not touch the
   file until the next session ends. Keep that behaviour (it is what players expect from an
   autosave-only game).
