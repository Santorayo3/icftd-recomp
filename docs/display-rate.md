# Presentation and input at display rate

A plan for making the port *look* and *respond* smoother without moving a single emulated
cycle. This is the design behind the answer "yes, but only outside the game's own timeline",
and it is written to be executed phase by phase, each phase verifiable on its own.

## The invariant this plan may not break

```
1 emulated frame = 141,875 guest cycles = 20.000 ms of wall time
```

- The budget is `EMU_CYCLES_PER_FRAME` (`src\runtime\amiga\machine.h`), spent by
  `step_budget()` (`src\recomp\cpu.c`) and by `oracle_run` (`src\oracle\cpu.c`). Untouched.
- `oracle_tick()` adds exactly one budget per vblank and carries the overspend, so a scene
  that needs 3.83 vblanks per update keeps needing 3.83 vblanks. Untouched.
- `plat_set_frame_hz()` / `--speed` keep their meaning. Untouched.
- `VPOSR`/`VHPOSR`, the CIA TOD counters and `waitFrames` are derived from that budget.
  Untouched.

**What this means in practice:** the intro's heavy phase runs at ~10–14 pictures/s and the
hospital's world update at ~12.5 Hz on the Amiga, and they will run at exactly those rates
here. There is no mechanism in this plan that could change that, and none is wanted.

## Content rate vs delivery rate

The distinction the whole plan rests on:

| thing | who decides it | can it be raised? |
|---|---|---|
| how often the game produces a *different* picture | the guest's cycle budget (the invariant above) | **no** |
| how many times a second that picture reaches the panel | the host's present path | **yes** |
| how often the port's own layers (arrow, OSD, picker) are drawn | the host | **yes** |
| how often the guest *samples* input | the guest's own poll, once per frame | no — but nothing is lost and nothing jitters |
| how promptly a sampled edge reaches the guest | the host's latch | **yes**, up to the 20 ms floor |

So this is a *delivery* change, never a *content* change. In scrolling scenes (the hospital,
the flight, the chicken race) the copper patches `BPLCON1` and the plane pointers every
vblank, so the guest already produces 50 distinct pictures a second — that is where delivery
matters, and it is exactly where the port is weakest today.

## Where a frame goes today

One emulated frame, in order:

```
rc_step → step_budget (cpu.c)
  budget < 0 → rc_frame_hook = host_frame (src\host\main.c:251)
    scatter()                         register mirror → 68000 core
    oracle_tick()                     src\oracle\cpu.c:388
      m->frame++;  budget += 141875
      rt_frame_present()              src\runtime\amiga\machine.c:1872
        rt_gfx_present()              src\runtime\amiga\display.c:1629
          copper latch → planar→chunky conversion into gfx->fb
          osd_draw()                  text, icon, pointer, crosshair — into gfx->fb
          gfx->frames++
          m->on_present = host_present (src\host\main.c:1589)
            save_ui_draw()            the slot picker — into gfx->fb
            --shot / --dump           read gfx->fb
            plat_set_framebuffer_size + memcpy picture → platform DIB
            plat_set_palette(0, 256, gfx->pal)      ← 256 entries + RealizePalette every present
            plat_present()            src\runtime\plat\win32\plat_win32.c:871
              present_dc() → BitBlt to the window DC (DWM composites it)
      input_apply()
      m->on_frame = host_input (src\host\main.c:1394)
        plat_pump()                   src\runtime\plat\win32\plat_win32.c:1329
                                      the ONLY message drain; pressed[] = key && !prev_pump
        … pointer seam, save picker, aim, OSD arming …
        plat_frame_sync()             src\runtime\plat\win32\plat_win32.c:1367
                                      QPC wait to the 20 ms mark (Sleep(1)/Sleep(0) spin)
      the vblank interrupt servers (original code)
    gather(); rc_frameBreak = 1       hand the front end back its loop
```

Four consequences:

1. **Composition is a pure read of guest RAM.** Every `rt_write*` in `display.c` is a library
   shim; `rt_gfx_present` only reads `m->mem` and writes host-side state (`gfx->fb`,
   `gfx->pal`, `gfx->cprList`, `gfx->frames`). The present path is therefore *observable-only*
   — moving or duplicating it cannot touch `--state` parity.
2. **Pacing lives in one place but is reached from five.** `plat_frame_sync()` is called from
   `host_input` (`main.c:1472`, `:1515`), the title's two loops (`title.c:516`, `:884`), the
   DOS front end (`dos_main.c:1259`, `:1292`) and the oracle (`oracle/main.c:89`).
3. **The overlay is welded into the picture.** `osd_draw()`, `rt_pointer_draw()` and
   `rt_overlay_begin()` all write into `gfx->fb` and set `g_srcValid = 0` /
   `row_src_invalidate()`. That defeats both identity caches *precisely on the screens that
   have a pointer* — the "0.21 conversions/frame" in `docs\dos-hospital-perf.txt` becomes
   "every present" once the arrow is up (~20 ms per present on the DOS target).
4. **Input is edge-diffed once per frame.** `plat_pump` computes
   `pressed[i] = g_keys[i] && !prev[i]` against the *previous pump*, and `wnd_proc` only runs
   when messages are drained — which is once per 20 ms. A key that goes down *and* up inside
   one window leaves `g_keys` unchanged and the edge is lost: Escape, F1–F5, Alt+Enter and the
   title's digit keys can all be swallowed by a fast tap.

There is also no clock in the platform suitable for a host-side wait loop: `plat_pit_now()`
returns 0 on Win32 ("nothing on Win32 uses it"), and the QPC state is static inside
`plat_frame_sync`.

## The three clocks

| clock | today | after this plan |
|---|---|---|
| **machine** | 20.000 ms per emulated frame, blocking wait in `plat_frame_sync` | identical, unchanged code path |
| **display** | one `BitBlt` per composed frame, `RealizePalette` per present, free-running into DWM | its own service at panel refresh, from the last composed picture + a fresh overlay |
| **input** | sampled once per 20 ms, edges diffed per pump | sampled continuously, edges *latched* and applied at the frame boundary |

The guest never observes the display clock; it observes exactly one input latch per frame,
as it does today.

## The four changes

### A. Split compose / upload / deliver

Composition **must stay synchronous at the frame boundary**: that is the only instant the
plane bytes are exactly that frame's. What gets separated is what happens *after* the
chunky picture and palette exist:

| step | when | cost |
|---|---|---|
| **compose** — planes → `gfx->fb`, palette → `gfx->pal` | once per present, at the boundary (unchanged) | unchanged |
| **upload** — picture + palette into the platform's *picture* surface | per composed frame | one 64 KB copy, one palette upload |
| **deliver** — picture + overlay into the *display* surface, present | per display refresh | one blit + overlay |

`m->on_present` stays attached to composition, so `--shot`, `--dump`, `--srcdiff`,
`m->perf.presents` and every tool keep their present meaning. `--dump` still writes one raster
per *presented* (composed) frame; that is what makes a `--dump` sequence line up with a
`--state`/`--ram` dump of the same frame, and it must not change.

### B. The overlay becomes its own layer

The port's own surfaces (OSD text, save icon, pointer arrow, save picker, title art) are drawn
at display rate into the display surface, on top of the uploaded picture. Three wins:

- the arrow moves at panel rate instead of 50 Hz (a mouse reports at 125–1000 Hz today, and
  50 of those samples reach the screen);
- `g_srcValid` / `row_src` stop being invalidated by the overlay, so the identity caches
  survive on pointer screens;
- `--shot`/`--dump` still get the overlay, because a headless run draws it into `gfx->fb`
  exactly as today.

The drawing routines already take a target surface (`rt_pointer_draw(dst, stride, w, h, …)`,
`rt_font_text_draw(m, dst, stride, …)`, `title_button_draw_at(…)`). The work is to give the
remaining ones (`osd_draw_text`, `osd_draw_icon`, `osd_draw_crosshair`, and `plot()` as used
by them) an explicit target and to make `rt_overlay_begin()` return the display surface when
one is armed.

**Deliberate limit:** the *crosshair* stays tied to the aim words (50 Hz, written by
`aim_input` into `0x29AE0`/`0x29AE2`), because it claims to mark the point the next shot is
tested at. The free pointer arrow may lead the 50 Hz hover selection by at most one frame;
that is a cosmetic lead, and it is written down here as a decision rather than discovered
later.

### C. A present backend that does not fight the compositor

Today every present is `SetPaletteEntries` + `RealizePalette` on a 256-entry logical palette,
then `StretchBlt` + `BitBlt` to a window DC, which DWM copies and composites a frame later.

Replace it with a flip-model swapchain (D3D11/DXGI, or D3D9Ex as a smaller step) fed by a
32-bit texture built through an index→RGB lookup table:

- no `RealizePalette` at all — the palette becomes data, not device state;
- no window-DC `BitBlt`, so no extra compositor hop in windowed mode and no tearing;
- overlay drawn as its own quad/alpha layer, so it also stops consuming picture palette
  entries (today `SAVE_UI_PEN_ART` is 224, i.e. inside the picture's 0..239 range);
- borderless fullscreen gets independent flip, so fullscreen stops being special.

Device selection is automatic with a fallback to the GDI path; that is *not* an opt-in flag
for behaviour (see `docs\port-features.md`, "the seam is inert unless the game is being
played, and never behind an opt-in flag").

**As built** (phase 3): the D3D9Ex step is the one taken, and two of the bullets above were
traded away after measuring what they cost - the swapchain is the discard one, not the flip
model (a flip-model swapchain leaves the client uncapturable, and the port's checks read the
client), and presenting runs on its own thread because a synchronous `Present` blocks for 5-16 ms
and would halve the machine's rate. The palette-as-data, the true-colour quad, the overlay's own
table and the automatic fallback are all in. See "Three things came out of building phase 3" under
Status for the measurements.

### D. Input: latch edges, sample continuously

- `plat_win32.c` gains a message-only drain (`plat_pump_display`, called by the display
  service) so `wnd_proc` runs at display rate and a press+release pair is never collapsed.
- `wnd_proc` accumulates `g_pressLatch[KEY_COUNT]` and a click counter (the click counter
  already exists: `g_mouse_clicks`). `plat_pump` merges the latch into `in->pressed[]` and
  clears it, so every existing call site keeps its semantics, and a tap registers exactly
  once.
- The pointer's *drawn* position is updated from the same drain; the pointer seam
  (`pointer_input`, `g_ptrActive`, clicks, hover) stays at 50 Hz because it writes guest state.
- `--record`/`--input` are untouched: the guest still sees one `fireDown`/`joy0` per frame, so
  every existing recording replays bit-identically (a recording stores 50 Hz levels and cannot
  express a sub-frame tap).
- DOS: the BIOS keyboard buffer already preserves a sub-frame tap; verify with a DOS run
  before changing anything there. The display service is a no-op where there is no window.

## Interfaces

All additive. The two entry points every existing call site already uses keep their meaning.

```c
/* src\runtime\platform.h */

/* Monotonic, microseconds. QPC on Win32. The host's wait loop is the only consumer. */
u64 plat_now_us(void);

/* The panel's refresh rate, 0 when it cannot be known (DOS mode 13h, a remote session). */
u32 plat_display_hz(void);
/* Draws the port's overlay for one display frame into a chunky 8-bit surface. Registered once
 * by the front end; called by the platform for every display frame it delivers, and by the
 * front end itself for a headless --shot/--dump, so both paths show the same overlay. */
typedef void (*plat_overlay_fn)(u8 *dst, u32 stride, int w, int h);
void plat_set_overlay(plat_overlay_fn fn);

/* One display frame's worth of service: drain messages, and deliver at most once per refresh.
 * Never blocks (a display tick may not delay the machine's 20 ms deadline). Called from
 * plat_frame_sync's wait loop, so every existing caller inherits it unchanged. */
void plat_display_service(void);

/* The pointer's position as the platform's last drain saw it; the port's overlay moves the drawn
 * arrow with it at display rate, while the seams that write guest state keep reading plat_pump. */
u32 plat_pointer_position(s16 *x, s16 *y);

/* --displaystat: display frames, overlay redraws, and the rate they were paced at. */
void plat_display_stats(u32 *frames, u32 *overlays, u32 *hz);

/* The overlay's own colour table, kept apart from the picture's: a presenter that builds a
 * true-colour picture resolves each layer through its own, so an overlay pen no longer takes a
 * picture entry (phase 3). */
void plat_set_overlay_palette(u32 first, u32 count, const u8 *rgb);

/* The presenter actually running, for --displaystat: "dx9" or "gdi" on Win32, "vga" on DOS. */
const char *plat_display_backend(void);

/* Unchanged meaning. plat_present(): "the picture in plat_framebuffer() is complete" — the
 * platform keeps it as the picture layer. plat_frame_sync(): "wait for the next 50 Hz tick". */
void plat_present(void);
void plat_frame_sync(void);
```

Inside `plat_win32.c`, the surfaces become:

```
g_bits   8-bit picture DIB       ← plat_present(): the composed frame, as the core handed it over
g_disp   8-bit display DIB       ← the GDI path: picture copy + overlay, blitted to the window DC
g_ovl    8-bit overlay layer     ← the port's own pixels for one display frame, 0 = nothing drawn
g_frame  32-bit composition      ← the GDI path's border-art frame (fullscreen/resized), as today
32-bit   true-colour composite   ← the true-colour presenter: g_bits and g_ovl through their
                                   index->RGB tables, uploaded to the swapchain's texture
```

`present_dc()` keeps composing `g_disp` on demand, because `WM_PAINT`, `WM_SIZE` and
`WM_PRINTCLIENT` (`tools\*-check.ps1` read the client that way) all go through it.

In `display.c`, the runtime side:

```c
typedef struct rt_surface { u8 *dst; u32 stride; int w, h; } rt_surface;

/* The port's whole overlay, onto any surface. Composed of the pieces the OSD/pointer/picker
 * already are; each piece takes the target instead of assuming EMU_BM_FRAMEBUFFER. */
void rt_overlay_draw(rt_machine *m, rt_surface *s);
```

`rt_gfx_present` calls `rt_overlay_draw(m, &(rt_surface){ gfx->fb, EMU_FB_MAX_W, w, h })` only
while no window is armed (headless `--shot`/`--dump`); with a window the platform calls the
same function per display frame through `plat_set_overlay`.

## Phases

| phase | what | risk | unlocks |
|---|---|---|---|
| 0 | baselines (no code) | none | proof for every later phase |
| 1 | decompose compose/upload/deliver; overlay gains a target | low, pixel-neutral | the structure |
| 2 | overlay layer + `plat_display_service` + `plat_now_us` | medium | display-rate overlay, identity caches restored |
| 3 | flip-model / true-colour backend | medium, contained to `plat_win32.c` | no `RealizePalette`, no DWM hop, overlay off the picture palette |
| 4 | input latch + display-rate message drain | low | no lost taps, no sampling jitter |

## Status (what is built)

| phase | state |
|---|---|
| 0 | Done, against a build of `HEAD` in a second worktree (`ref\inputs` is not in this checkout, so `present-check` reports SKIP; `--state`, `--shot` and a `--dump` sequence were compared byte for byte instead). |
| 1 | Done. `rt_surface`, `rt_overlay_draw`, `save_ui_draw(m, ui, surface)`; the headless `--shot`/`--dump` rasters, the `--state` records and the console register line are byte-identical to the baseline. |
| 2 | Done for Win32 (`g_disp` surface, `plat_display_service`, `plat_now_us`, `plat_display_hz`, `plat_set_overlay`, palette no-op guard, `g_pressLatch`'s drain). DOS no-ops the service as decided. |
| 3 | Done. `gfx->fb` and the overlay layer are resolved through two 256-entry index→RGB tables into a 32-bit image, which a D3D9Ex swapchain presents as a point-sampled quad over `picture_rect()`'s rectangle, the border art under it. The palette is data: no `RealizePalette` is left on the present path, and the overlay's pens stop taking picture entries. Two deviations from the plan, both measured into the design: the swapchain is the *discard* one, and presenting happens on its own thread. |
| 4 | Done. `plat_pump_display` runs in the display service; `g_pressLatch` is merged into `in->pressed[]` by `plat_pump`; `tools\keys-check.ps1` gained the tap case, which fails against the previous build on every mapped key. |

Two things are worth knowing beyond the plan:

* **The service is reached from two places**, not one: `plat_frame_sync`'s wait loop (the common
  case) and the front end's dispatch loop (`src\host\main.c`, once per translated function), because
  a scene whose frame needs more than one vblank - the hospital at ~12.5 Hz - never waits in
  `plat_frame_sync` at all. Both are non-blocking and both only deliver the last composed picture.
* **`plat_overlay_armed()`** is the one call the plan did not name: it is how the runtime knows not to
  compose the overlay into the picture when the platform is going to draw it (it would otherwise be
  in the picture layer and delivered twice).

The overlay's colours are its own, and that is a claim the presenter has to keep: `plat_set_palette`
takes a pointer to the *range's first entry* (`rgb` covers `first..first+count-1`), and the range
upload in `host_overlay_draw` first handed it the table's base, so the scene's pens 0..31 were loaded
into 224..255 and the OSD line and the arrow were painted in the scene's colours. `tools\window-check.ps1`
now measures it on the live window (case 11: the OSD line is white over a scene) - the first
check that fails on that bug and passes on the fix.

Measured on this machine (`--window --displaystat --osd TESTOVERLAY --call 0x1C19A:2500 5000000`,
a 59 Hz panel):

```
machine   1556 frame(s) in 31125 ms        = 50.0/s   (unchanged by this work)
composed  1928 present(s)                  = 61.9/s   (the intro presents 1.24x per frame)
display   1834 display frame(s)            = 58.9/s   (the panel's own rate)
overlay   3762 redraw(s), 1928 presents    ; conversions 0.20 per present
```

The last number is phase 2's exit criterion: the same run on the previous build converts **1.00
times per present** while the OSD is up (the overlay wrote into `gfx->fb` and invalidated both
identity caches on every present), and 0.20 is the no-overlay rate the hospital benchmark quotes
(`docs\dos-hospital-perf.txt`).

Three things came out of building phase 3, each one measured before it was designed around:

* **The flip model costs the port its own eyes.** `D3DSWAPEFFECT_FLIPEX` presents correctly, but a
  flip-model swapchain leaves the window without the redirection surface `PrintWindow` reads: the
  same window answers `PrintWindow(PW_CLIENTONLY)` with an empty bitmap under `FLIPEX` and with the
  picture under `DISCARD` (measured on Windows 11 - see the probe in the commit that built this).
  `tools\window-check.ps1`, `title-check.ps1` and `quit-check.ps1` all read the client that way, so
  a flip-model presenter would have made every one of them blind exactly when it started drawing.
  The swapchain is therefore the discard one: it keeps the seam, and the rest of what the phase is
  for - true colour from a texture, the palette as data, the overlay's own table - is unaffected.
* **A present waits for the compositor, so it cannot be on the machine's thread.** `Present` on this
  machine takes 5-16 ms of wall time, and with it in `plat_present`/`plat_display_service` the
  machine ran at **25.6 frames/s** (measured) instead of 50.0 - the emulated frame would have become
  39 ms of wall time, which is the one thing this plan may not do. The machine's thread now only
  builds the composite (0.2-0.3 ms: 64 000 pixels through two tables) into a shared buffer and wakes
  a presenter thread, which uploads and presents the newest frame as fast as the compositor takes
  them, i.e. at the panel's rate. Every D3D call is made on that thread; `D3DPOOL_MANAGED` is not
  even legal on a D3D9Ex device, which is why the border art is a dynamic default-pool texture
  uploaded when the client changes.
* **The overlay's own table is a platform call.** `plat_set_overlay_palette` (`platform.h`) is what
  `host_overlay_draw` hands the overlay's colours to - the same bytes it used to hand
  `plat_set_palette`, now going to a second table so the picture's pixels in 224..239 keep the
  scene's colours. On DOS, and on the GDI fallback path, the two tables are the same device table,
  exactly as before.

After phase 3, the same measurement, on the true-colour path:

```
machine   1005 frame(s) in 20110 ms        = 50.0/s   (unchanged by this work)
composed  1267 present(s)                  = 63.0/s
display   1197 display frame(s)            = 59.5/s   (the panel's own rate)
overlay   2450 redraw(s), 1267 presents    ; conversions 0.22 per present
          presenter dx9
```

and the claim the phase is held to, measured on the live window: `tools\window-check.ps1` case 12
runs with `--shot` (the raster the presenter composed) and compares it, pixel for pixel, with the
client the presented frame landed in - **0 differing pixels** of 64 000, on the title screen. The
same case on the GDI fallback reads 0 as well, because the two paths share the picture, the
overlay layer and the tables; only the last step to the panel differs.

### Phase 0 — baselines
Recorded once, then compared against after every phase:

```powershell
# machine state, every frame: the proof that nothing emulated moved
bin\win32\icftd-recomp.exe --data export --disks disks `
    --call 0x1C19A:2500 --input ref\inputs\flight-crash-hospital-room.txt `
    --state out\fps\base\s --every 1 27000000

# rasters: the proof that composition is pixel-identical
bin\win32\icftd-recomp.exe --data export --disks disks `
    --input ref\inputs\map-pointer.txt --dump out\fps\base\map\ 40 --dumpfrom 1290 11000000

# the standing port check, unchanged
powershell -ExecutionPolicy Bypass -File tools\gate.ps1 -Only presentation
```

`ref\` and `out\` are gitignored, so a missing script is a SKIP; the state hash list from the
first command is the primary artefact — it must be byte-identical at the end of phases 1–4.

### Phase 1 — decompose, change nothing

Files: `src\runtime\amiga\display.c`, `display.h`, `src\host\main.c`.

1. Introduce `rt_surface` and make the overlay pieces take it: `osd_draw_text`,
   `osd_draw_icon`, `osd_draw_crosshair`, the pointer call, and the `plot()` uses inside them.
   `plot()` already takes a bitmap address; add a surface-targeted variant and keep the
   `EMU_BM_FRAMEBUFFER` wrapper for the shims' own drawing.
2. Add `rt_overlay_draw(m, s)` that draws what `osd_draw` drew, in the same order and with the
   same pens/colours.
3. `rt_gfx_present` calls `rt_overlay_draw` into `gfx->fb` exactly where `osd_draw` is called
   today. Delete nothing else.
4. `host_present`'s `save_ui_draw` moves behind the same seam (it is an overlay, and it must
   travel with the rest in phase 2). In phase 1 it is still invoked at composition time.

**Exit criteria:** `tools\gate.ps1 -Only presentation` PASS; `--dump` output byte-identical to
phase 0; the `--state` hash list identical; `--shot` output byte-identical (compare the BMPs).

### Phase 2 — the overlay layer at display rate

Files: `src\runtime\platform.h`, `src\runtime\plat\win32\plat_win32.c`,
`src\runtime\plat\dos\plat_dos.c`, `src\host\main.c`, `src\host\title.c`, `src\host\save_ui.c`.

1. `plat_win32.c`: split the present path into *picture upload* (`plat_present`) and *display
   delivery* (`plat_display_service`). Add `g_disp`, `plat_now_us`, `plat_display_hz` (ask the
   monitor: `EnumDisplaySettings`, or the DWM refresh rate; 0 is a valid answer),
   `plat_set_overlay`.
2. `plat_frame_sync`: call `plat_display_service()` inside its existing wait loop, before the
   sleep decision. The deadline arithmetic (`g_nextFrame`, `g_frame_ticks`, the 100 ms
   catch-up rule) does not change. **Rule: the service must never block** — it presents or it
   skips.
3. `host\main.c`: register `host_overlay_draw`, which draws OSD + pointer + crosshair + save
   picker into the surface it is handed. Update the *drawn* pointer position from the
   display-rate drain when the pointer is active; leave `pointer_input`/`pointer_present`'s
   50 Hz state (`g_ptrActive`, hover, clicks) untouched.
4. Headless equivalence: `host_present` calls `host_overlay_draw` into `gfx->fb` before
   `--shot`/`--dump` write, and only then.
5. Remove the `g_srcValid`/`row_src` invalidation from the windowed overlay path (it no longer
   writes `gfx->fb`); keep it on the headless path.
6. `plat_dos.c`: `plat_display_service` is a no-op body (`plat_display_hz` → 0); the DOS
   presenter keeps its single mode-13h copy. This keeps one platform honest; a DOS display
   service is a later, separate improvement.
7. Overlay palette: `rt_overlay_palette` marks the range it wrote, and the display service
   re-uploads it only when the bytes differ from what the device last holds (a 96-byte memcmp
   over entries 224..255, not a `RealizePalette` per display frame). On the picker's screen that
   is one upload when it opens, not 120 a second.

**Exit criteria:** phase-0 hashes and rasters unchanged; `tools\gate.ps1 -Only presentation`,
`-Only border`, `-Only mouse`, `-Only pointer`, `-Only save`, `-Only crosshair`, `-Only keys`
PASS; `tools\window-check.ps1` PASS (it is not a gate step: it needs a desktop); and a new
measurement — a pointer screen's conversion count drops to the no-pointer rate. On the DOS
build `--perf` already reports conversions per present, so that is the instrument (the Windows
side can report the same counter through `--displaystat`).

### Phase 3 — the backend

Files: `src\runtime\plat\win32\plat_win32.c` (plus a new `present_dxgi.c` if it grows),
`src\runtime\platform.h`.

1. Build the picture+overlay into a 32-bit surface through an index→RGB table (256 entries,
   rebuilt only when `gfx->pal` changes — a memcmp, not a guess).
2. Present it through a flip-model swapchain; windowed, borderless fullscreen and resized
   windows all use the same path, with `picture_rect()`'s scaling applied as a quad.
3. Keep the GDI path as the fallback when the swapchain cannot be created, and keep it as the
   reference implementation for `--shot`/`--dump` (which read the 8-bit picture, not the
   device).
4. Overlay as a separate layer: the OSD/pointer/picker stop consuming picture palette entries,
   and the `SAVE_UI_PEN_ART = 224` clash inside the picture's 0..239 range disappears.

**Exit criteria:** `tools\gate.ps1 -Only border` and `-Only presentation` PASS,
`tools\window-check.ps1` PASS; the picture on screen is produced from the same
`gfx->fb`/`gfx->pal` the 8-bit path uses (so a `--shot` from a windowed-vs-headless run still
matches); no `RealizePalette` remains on the present path.

**As built:** items 1, 3 and 4 as written - the 32-bit image is resolved per display frame through
two tables (the picture's and the overlay's, each rebuilt in `plat_set_palette` /
`plat_set_overlay_palette` when its bytes change, which is the memcmp the plan asked for), the GDI
path stays the fallback and the reference, and the overlay's pens no longer take picture entries.
Item 2 deviates twice, both times because of what the machine measured (see "Three things came out
of building phase 3" under Status): the swapchain is `D3DSWAPEFFECT_DISCARD` - a flip-model one makes
the client uncapturable, which would blind the port's own checks - and the presenting runs on its own
thread, because a synchronous `Present` costs 5-16 ms and would halve the machine's rate. The quad,
`picture_rect()`'s rectangle, the point sampling and the border art under it are as planned.

### Phase 4 — input

Files: `src\runtime\plat\win32\plat_win32.c`, `tools\keys-check.ps1`.

1. `plat_pump_display()` — message-only drain, called from `plat_display_service`.
2. `g_pressLatch[KEY_COUNT]` set in `WM_KEYDOWN`/`WM_SYSKEYDOWN`/`dir_key(…, 1)`, merged into
   `in->pressed[]` by `plat_pump`, then cleared. `prev[]` keeps meaning "the state at the last
   boundary".
3. The same latch for `mouse_left_pressed` (the counter already provides it) and for
   accumulated mouse motion.
4. A new case in `tools\keys-check.ps1`: a synthetic key down+up inside a single 20 ms window
   produces exactly one `pressed` edge at the next boundary, on every key the port maps.
5. Verify the DOS path before touching it: if the BIOS buffer already preserves a sub-frame
   tap, DOS needs nothing.

**Exit criteria:** `-Only keys`, `-Only cheat`, `-Only clock freeze` PASS; the new tap case
passes; a `--record` made before the change replays identically after it.

### A measurement for the claim itself

Add `--displaystat`: at exit, one line with machine frames, composed frames, display frames
and overlay redraws, plus the measured display rate. The assertion the feature can be held to
without a camera:

```
machine frames : elapsed  == 50 Hz   (unchanged by this work)
display frames : elapsed  == the panel's refresh
```

Nothing about the picture's content rate is claimed, because none can be.

## What must not change

- `EMU_CYCLES_PER_FRAME`, `step_budget`, `oracle_tick`'s budget arithmetic, `waitFrames`,
  `rc_frameBreak`, the vblank/CIA server order.
- Composition staying synchronous at the boundary, and `m->on_present` staying attached to it.
- `--state`/`--ram` parity between this build and the oracle on one input script.
- `--shot`/`--dump` still containing the overlay, and still being one file per composed frame.
- `--input`/`--record` replaying identically.
- No opt-in flag for the feature itself.

## Rejected alternatives

| idea | why not |
|---|---|
| raise the emulated frame rate | divides every timing (intro pacing, `VPOSR` entropy, CIA TOD, `waitFrames`); it *is* the thing the cycle model exists to prevent |
| compose mid-frame | the guest is mid-draw; it would show states the original never displays, and break `--dump`'s frame alignment |
| interpolate between pictures | invents pixels and yields mixed-rate motion (blitter-drawn actors stay at 50 Hz); a research toy, not a fix |
| run the logic at 100 Hz "smoothly" | the original does not, and every scene's difficulty and pacing depend on 50 Hz |
| decouple audio | Paula is clocked by guest cycles; audio already follows the machine |

## Open decisions

1. **Pointer lead.** Does the arrow run at display rate ahead of the 50 Hz hover (≤1 frame), or
   does it stay at 50 Hz like everything else? Recommended: at display rate, since the hover
   result is unchanged and the arrow is the port's own mark.
2. **Overlay palette range.** Keep the current 224/240..255 split (and its overlap with the
   picture's 0..239) until phase 3 removes it, or reserve a wider range now? Recommended:
   leave it, and let the true-colour layer resolve it. **Settled in phase 3:** the split is kept
   and the split's *clash* is gone where it hurt - the true-colour presenter resolves the overlay
   through `plat_set_overlay_palette`'s table and the picture through `plat_set_palette`'s, so a
   picker pen of 224 no longer paints the scene's pen 224. On the GDI fallback and on DOS the two
   tables are one, as before.
3. **DOS.** No display clock in mode 13h beyond the VGA retrace poll. Recommended: no-op the
   service, keep DOS on its current single copy, revisit separately.
4. **Flip model.** The plan asked for a flip-model swapchain; it was built, measured and traded
   away: under `D3DSWAPEFFECT_FLIPEX` the window loses the redirection surface `PrintWindow` reads,
   so `window-check`, `title-check` and `quit-check` captured empty bitmaps - the port would have
   lost the seam that proves the screen is the composed picture. `D3DSWAPEFFECT_DISCARD` keeps it
   and loses only the compositor hop, which is measured as no frame-time cost either way once the
   present is off the machine's thread. Revisit with D3D11/DXGI plus a presenter-side capture
   (`GetRenderTargetData`/`IDXGIOutputDuplication`) if that hop ever shows up in a profile.
