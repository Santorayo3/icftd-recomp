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
| 1 | 152 B (`0x98`) | `0x021E18..0x021EB0` | starts exactly where the 160-entry vector table ends |
| 2 | 12 324 B (`0x3024`) | `0x02686C..0x029890` | the engine's world/state block |

Total **12 476 bytes**. Load is the same two reads into the same addresses. The lengths are not
literals — the code computes `buf2 - buf1` with `lea (d16,A4),A0` pairs, which is why the byte
counts here are derived rather than quoted.

Consequence that shapes the whole plan: **we never have to understand the save format.** It is the
game's own memory image at the game's own load address (0x4000), and the file name is the only
handle the engine has on it.

## What the runtime does today

| piece | state |
|---|---|
| `plat_open` | **read-only** (`platform.h` has open/close/size/read, no write, no create) |
| `dos.Open` | ignores the mode; always `plat_open` → an existing file or 0 |
| `dos.Write` (LVO −48) | only echoes the bytes to stdout as a diagnostic, writes nothing, returns 0 |
| `DSAVE:` | unknown volume → `rt_volume_index()` returns −1 → path `<dataDir>\ICFTD`, read-only |

So saving does **not** work at all today: the save prompt can be answered, but the file is never
created. Loading "works" only in the sense that it fails cleanly when the file is missing.

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

`icftd.ini`:

```ini
[SAVE]
; Which save slot the game reads and writes. 1..9.
slot=1
; Directory (relative to the executable) that holds the slots.
directory=saves
```

The DOS shim maps `DSAVE:ICFTD` to `<exe>\<directory>\slot<slot>\ICFTD`. Nothing else changes: the
engine still writes its own 12 476 bytes, so a save written by a real Amiga (WinUAE on the same
image, base 0x4000) can be dropped into a slot unchanged, and ours can be taken back out.

**Verification (machine state, per the project rules):**
- `--state` a run that reaches the end of a session, answer the save prompt "NO" (i.e. do save),
  check the host file exists with exactly 12 476 bytes and that its two halves equal the engine
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

1. What exactly are the slot-2 / slot-3 calls with `("DSAVE:", "ICFTD")`? Most likely `Lock`/`Assign`
   wrappers. They must return non-zero for a writable `saves\slotN` directory, so the shim needs to
   answer them for a volume that does not exist yet (create on demand).
2. Does anything else write to `DSAVE:`? Only these two routines reference the string, so no.
3. Does the save blob contain absolute pointers into OS structures (library bases, file handles)?
   The two ranges are engine state only, and the load path restores them before any library call —
   but this must be verified by the save → load → compare test in Phase 1, not assumed.
4. Should a *new game* delete the old save? On the original, starting a new game does not touch the
   file until the next session ends. Keep that behaviour (it is what players expect from an
   autosave-only game).
