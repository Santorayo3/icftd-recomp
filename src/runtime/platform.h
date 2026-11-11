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
    KEY_UP = 0,
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
    KEY_COUNT
};

typedef struct {
    u8  down[KEY_COUNT];   /* 1 while held */
    u8  pressed[KEY_COUNT];/* 1 for the frame the key went down */
    s16 mouse_x;           /* framebuffer coordinates */
    s16 mouse_y;
    u8  mouse_left;
    u8  mouse_right;
} input_state;

/* Returns non-zero on success.  The core draws into plat_framebuffer(). */
u32  plat_init(const char *title);

/* The program's own path, as the runtime got it (argv[0]); call it first thing in main on
 * platforms whose API cannot tell (DOS).  Windows ignores it - GetModuleFileName knows. */
void plat_set_program(const char *argv0);

/* The icftd.ini a fresh installation starts with.  The settings that only make sense on one
 * platform (fullscreen) are only in that platform's default text. */
const char *plat_default_ini(void);

/* Window mode, from icftd.ini [VIDEO] fullscreen; call before plat_init.  Off keeps the window
 * at exactly the framebuffer size and blits it 1:1; on takes the whole screen and scales the
 * picture up.  May be a no-op. */
void plat_set_fullscreen(u32 on);

u32  plat_fullscreen(void);

void plat_shutdown(void);

u8  *plat_framebuffer(void);
void plat_present(void);

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
u32  plat_audio_played(void);

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

/* Milliseconds since plat_init (monotonic). */
u32  plat_ticks_ms(void);u32 plat_rtc_elapsed_ms(void);
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

/* Runs exe with the given argument string (already quoted) and waits for it.
 * Returns the child's exit code, or -1 when it could not be started. */
s32 plat_spawn(const char *exe, const char *args);

/* Window/screen caption; may be a no-op. */
void plat_set_title(const char *text);

/* --- diagnostics ---------------------------------------------------------- */
/* Rewrites <exe dir>\recomp-crash.txt with `text` (fixed size, NUL padded, flushed). Cheap
 * enough to call every frame, and it survives the process dying: after a crash the file holds
 * the machine state of the last frame that started. */
void plat_crash_state(const char *text);

/* A free-running counter for measuring where a frame's emulated time goes (the 8254 clock on
 * DOS, 0 elsewhere). Monotonic, wraps at 2^32. */
u32  plat_pit_now(void);

#endif /* ICFTD_PLATFORM_H */
