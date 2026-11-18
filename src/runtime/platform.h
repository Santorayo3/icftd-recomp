/* The complete platform contract.  Everything platform specific lives behind these
 * calls; the core never includes an OS header.
 *
 * Milestone 1 needs a framebuffer, a palette, input, a 50 Hz frame clock, files and
 * a heap.  Later milestones grow this interface (audio), never the other way round:
 * if the core needs something from the OS it goes in here.
 */
#ifndef ICFTD_PLATFORM_H
#define ICFTD_PLATFORM_H

#include "types.h"

enum {
    KEY_UP = 0,                         /* the four directions: the arrow cluster, and W/A/S/D. A
                                         * direction stays down while either of its keys is held
                                         * (the platform layer keeps the two apart), so the game
                                         * only ever sees one joystick. */
    KEY_DOWN,
    KEY_LEFT,
    KEY_RIGHT,
    KEY_FIRE,
    KEY_ESCAPE,
    KEY_ENTER,
    KEY_F1,
    KEY_F2,
    KEY_F3,
    KEY_F4,
    KEY_F5,
    KEY_0,                              /* the digit row: the title screen's menu keys. KEY_1..KEY_9
                                         * must stay in order - both platform layers index them as
                                         * KEY_0 + digit. */
    KEY_1,
    KEY_2,
    KEY_3,
    KEY_4,
    KEY_5,
    KEY_6,
    KEY_7,
    KEY_8,
    KEY_9,
    KEY_W,                              /* the title screen's three ending keys (they do nothing in
                                         * the game itself: no scene decodes a letter). W is also
                                         * the arrow cluster's Up, so holding it sets KEY_UP too. */
    KEY_C,
    KEY_T,
    KEY_CTRL,                           /* left Control, held: the Ctrl+W minigame cheat (cheat.c) */
    KEY_FULLSCREEN,                     /* Alt+Enter, pressed: switch between windowed and fullscreen
                                         * on whichever screen is up - a scene (src\host\main.c's
                                         * frame hook) or the title's own loop (src\host\title.c). A
                                         * platform with no window mode never reports it. */
    KEY_COUNT
};

typedef struct {
    u8  down[KEY_COUNT];   /* 1 while held */
    u8  pressed[KEY_COUNT];/* 1 for the frame the key went down */
    s16 mouse_x;           /* framebuffer coordinates */
    s16 mouse_y;
    u8  mouse_left;
    u8  mouse_right;
    u8  mouse_left_pressed;/* 1 for the frame the left button went down */
    u8  mouse_present;     /* 1 = the pointer has an absolute position (mouse_x/y are live) */
    u8  mouse_moved;       /* 1 = it moved since the previous plat_pump */
} input_state;

/* Returns non-zero on success.  The core draws into plat_framebuffer(). */
u32  plat_init(const char *title);

/* The program's own path, as the runtime got it (argv[0]); call it first thing in main on
 * platforms whose API cannot tell (DOS).  Windows ignores it - GetModuleFileName knows. */
void plat_set_program(const char *argv0);

/* The icftd.ini a fresh installation starts with.  The settings that only make sense on one
 * platform (fullscreen) are only in that platform's default text. */
const char *plat_default_ini(void);

/* Window mode, from icftd.ini [VIDEO] fullscreen; call before plat_init.  Off opens a window with
 * a resizable frame laid out for the game's 320x200 screen, one emulated pixel per desktop pixel at
 * scale 1: the screen scales with the client's height (both axes by the same factor, so its aspect
 * is kept), a wider window shows the platform's border art in the bars beside it, and a client
 * narrower than the screen's shape shows the bars above and below instead of cropping it.  A picture
 * larger than the screen (the chicken race's 368x216 window, a scene's own overscan) keeps the
 * screen's pixel shape and is fitted inside the screen's rectangle.  On takes the whole screen and
 * scales the screen up.  May be a no-op - plat_has_fullscreen says whether it is one - and where it
 * is not, a call after plat_init switches the window there and then (the title menu's settings). */
void plat_set_fullscreen(u32 on);

/* The client size windowed mode uses, in desktop pixels; 0x0 (or not calling it at all) is the
 * picture at 1:1.  Call before plat_init.  Windows keeps no size for an application's own window,
 * so the host keeps it: it reads [VIDEO] window_width / window_height and writes them back with
 * plat_window_size when the game closes.  A size the desktop cannot show is shrunk to fit. */
void plat_set_window_size(u32 w, u32 h);

/* The client size a windowed mode uses now - the window's own size, or the size a windowed mode
 * would come back to while it is fullscreen.  1 when the platform has a window at all, 0 when it
 * has none (DOS), so the host knows whether there is a size worth writing back. */
u32  plat_window_size(u32 *w, u32 *h);

u32  plat_fullscreen(void);

/* 1 when this platform has a window mode of its own, i.e. when plat_set_fullscreen does something:
 * the title's settings menu offers the fullscreen toggle only where it can be acted on. */
u32  plat_has_fullscreen(void);

void plat_shutdown(void);

u8  *plat_framebuffer(void);
void plat_present(void);

/* Says what the picture of this frame is: `w` x `h` 8-bit palette indices in the framebuffer
 * plat_framebuffer() points at, exactly as large as the screen the copper list programs - 320x200
 * normally, 368x216 while the chicken race shows its narration page, whose text is laid out across
 * the overscan. The pointer plat_framebuffer() returns may move, so take it *after* this call.
 *
 * Returns the row stride in bytes (a platform may pad a row to its own alignment), or 0 when the
 * video mode is fixed (DOS: VGA mode 13h) - the core then has to fit the picture into the mode it
 * has. Windowed, the picture is scaled into the window (so the window's own size is not touched by
 * a scene with a different screen size); fullscreen, it is scaled into the 4:3 area. Both fit it
 * into the rectangle of the game's 320x200 screen at that screen's pixel shape, so a scene whose
 * window is larger than the screen - the chicken race's 368x216, its own overscan - is shown whole
 * at the same pixel shape as every other scene instead of at a shape and a size of its own. Neither
 * drops a column or a row. */
u32  plat_set_framebuffer_size(u32 w, u32 h);

/* rgb holds count*3 bytes, each 0..255, for palette entries first..first+count-1. */
void plat_set_palette(u32 first, u32 count, const u8 *rgb);

/* --- audio ---------------------------------------------------------------- */
/* A stereo, signed 16-bit PCM output at rate Hz. Returns 1 when a device is playing; 0 is not an
 * error - the machine keeps its own audio state and simply renders nothing. */
u32  plat_audio_open(u32 rate);
void plat_audio_close(void);

/* Interleaved left/right frames, count pairs. Never blocks: when every device buffer is still
 * being played the call drops the samples and counts them (plat_audio_dropped). */
void plat_audio_write(const s16 *frames, u32 count);
u32  plat_audio_dropped(void);

/* Bytes the device has consumed since it opened (0 when it cannot report it). */
u32  plat_audio_played(void);/* Frames that began with the ring empty: the card had nothing to play and repeated its buffer. */
u32 plat_audio_starved(void);
/* Diagnoses the audio device: sets up each format it supports, measures what the card actually
 * consumes and prints one line per case. DOS only; a no-op elsewhere. */
void plat_audio_probe(void);

/* Fills in the input state and drains OS messages.  Returns 0 when the user asked to quit. */
u32  plat_pump(input_state *in);

/* Blocks until the next 50 Hz game tick (the Amiga frame rate). */
void plat_frame_sync(void);

/* Frame rate for plat_frame_sync, default 50 Hz. A slower rate is a debugging aid: the same
 * animation content, shown for longer. */
void plat_set_frame_hz(u32 hz);

/* Milliseconds since plat_init (monotonic), and the same interval measured on the CMOS clock. */
u32  plat_ticks_ms(void);
u32  plat_rtc_elapsed_ms(void);
/* Machine time the 8254 counted (emulated milliseconds): with a fixed DOSBox cycle setting this is
 * the host instruction count of the run, divided by the cycles per millisecond. */
u32  plat_emulated_ms(void);
/* Largest free block of base memory in KB (0 where the platform has no such concept). */
u32  plat_free_base_kb(void);
/* Conventional memory the machine has, in KB. */
u32  plat_base_total_kb(void);
/* --- files ---------------------------------------------------------------- */
/* Only what a pack reader needs: open, size, positional read, close.  No stdio in
 * the core, because the DOS build may later serve reads from XMS or a RAM cache. */
typedef struct plat_file plat_file;

plat_file *plat_open(const char *path);
void       plat_close(plat_file *f);
u32        plat_size(const plat_file *f);
u32        plat_read(const plat_file *f, u32 offset, void *dst, u32 len);

/* Creates (or truncates) a file for writing. The caller writes it sequentially with
 * plat_write and finishes with plat_close. */
plat_file *plat_create(const char *path);

/* Writes len bytes at offset; returns the number written. Offsets leave a gap filled with
 * zeroes on every platform this is meant for, but the runtime only appends. */
u32        plat_write(plat_file *f, u32 offset, const void *src, u32 len);

/* --- heap ----------------------------------------------------------------- */
/* The DOS implementation maps this to _fmalloc so the 64000-byte picture buffer
 * never has to live in DGROUP. */
void *plat_alloc(u32 bytes);
void  plat_free(void *p);

/* --- startup -------------------------------------------------------------- */
/* What plat_path_kind reports for a path. */
enum {
    PLAT_PATH_MISSING = 0,
    PLAT_PATH_FILE    = 1,
    PLAT_PATH_DIR     = 2
};

/* Directory the running executable lives in, without a trailing separator. */
const char *plat_exe_dir(void);

u32 plat_path_kind(const char *path);

/* Creates one directory level; 1 when it exists afterwards. */
u32 plat_mkdir(const char *path);

/* 1 when the directory holds no file. A missing directory counts as empty: each save slot is a
 * directory, so a slot nothing was written to yet is an empty one. */
u32 plat_dir_empty(const char *path);

/* Calls visit(name, size, ctx) once for every file directly in dir; subdirectories are skipped and
 * `name` is the entry's own name, not a path. Returns how many files were visited. The order is the
 * platform's, so a caller that needs a stable one sorts. Used by the first-start extraction to find
 * the player's floppy images (src\runtime\assets.c). */
typedef void (*plat_dir_visit)(const char *name, u32 size, void *ctx);
u32 plat_dir_files(const char *dir, plat_dir_visit visit, void *ctx);

/* Runs exe with the given argument string (already quoted) and waits for it.
 * Returns the child's exit code, or -1 when it could not be started. */
s32 plat_spawn(const char *exe, const char *args);

/* Window/screen caption; may be a no-op. */
void plat_set_title(const char *text);

/* Puts `text` in front of the player and returns once it is dismissed: a modal box where the
 * platform has one, the console where it does not. Startup errors use it, and they happen before
 * there is a window to draw in. */
void plat_message(const char *title, const char *text);

/* Binds the console to the null device when the console is the display the game draws on, so the
 * front end's and the runtime's diagnostics do not draw into the picture (DOS: in mode 13h a
 * console write is INT 10h teletype, which writes the BIOS glyphs into video memory and scrolls
 * it). stdout redirected to a file is not the console and keeps its log. Call once, before the
 * first write. DOS only; a no-op elsewhere. */
void plat_quiet_console(void);

/* Hides the console window this process owns, when it owns one - the console a double-click gives a
 * console executable - so a run that shows the game's window shows nothing else. A console the run
 * was started from (a terminal, or a check script's redirected handles) is left alone: its log
 * belongs to whoever started the run. Call once, before anything is written. Win32: the window is
 * hidden rather than the console detached, so the log still exists; a no-op elsewhere. */
void plat_console_hide_own(void);

/* --- diagnostics ---------------------------------------------------------- */
/* Rewrites the run journal beside the executable with `text` (fixed size, NUL padded, flushed):
 * game-log.txt on Win32, RCRASH.TXT on DOS. Cheap enough to call every frame, and it survives the
 * process dying: after a crash the file holds the machine state of the last frame that started, and
 * the unhandled exception appends its code and address. A Win32 run that ends by itself deletes the
 * file again (plat_shutdown), so a journal still there belongs to a run that did not end by itself. */
void plat_crash_state(const char *text);

/* A free-running counter for measuring where a frame's time goes (the 8254 clock on DOS, 0
 * elsewhere). Monotonic, wraps at 2^32; deltas of two samples are exact however far apart they
 * are, so a segment longer than a frame's worth of counts is measured as it is, and a sparse
 * sampler measures the same interval as a frequent one. */
u32  plat_pit_now(void);

/* Counts of that counter per second - the factor that turns a segment into the milliseconds
 * plat_ticks_ms reports. 0 where plat_pit_now is 0. */
u32  plat_pit_per_second(void);

/* What the platform's clock established about its timebase, for a --perf header. On DOS this is the
 * 8254's own mode (3 = the counter steps by two and reloads every half period, 2 = one wrap per
 * BIOS tick, 0 = the chip's read-back is unavailable and the clock ran on the linear fallback), and
 * the sample counts that say how clean the readings were. */
typedef struct plat_clock_info
{
    u32 mode;                             /* timer mode the clock uses: 2, 3, or 0 for linear */
    u32 readBack;                         /* 1: status and count were latched together          */
    u32 samples;                          /* samples adopted                                    */
    u32 snapFails;                        /* samples lost: no consistent snapshot               */
    u32 rejects;                          /* samples lost: the counter read stepped backwards   */
    u32 pending;                          /* period boundaries the BIOS tick had not counted yet */
} plat_clock_info;

void plat_clock_report(plat_clock_info *info);

#endif /* ICFTD_PLATFORM_H */
