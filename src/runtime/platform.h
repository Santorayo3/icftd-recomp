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
void plat_shutdown(void);

u8  *plat_framebuffer(void);
void plat_present(void);

/* rgb holds count*3 bytes, each 0..255, for palette entries first..first+count-1. */
void plat_set_palette(u32 first, u32 count, const u8 *rgb);

/* Fills in the input state and drains OS messages.  Returns 0 when the user asked to quit. */
u32  plat_pump(input_state *in);

/* Blocks until the next 50 Hz game tick (the Amiga frame rate). */
void plat_frame_sync(void);

/* Frame rate for plat_frame_sync, default 50 Hz. A slower rate is a debugging aid: the same
 * animation content, shown for longer. */
void plat_set_frame_hz(u32 hz);

/* Milliseconds since plat_init (monotonic). */
u32  plat_ticks_ms(void);

/* --- files ---------------------------------------------------------------- */
/* Only what a pack reader needs: open, size, positional read, close.  No stdio in
 * the core, because the DOS build may later serve reads from XMS or a RAM cache. */
typedef struct plat_file plat_file;

plat_file *plat_open(const char *path);
void       plat_close(plat_file *f);
u32        plat_size(const plat_file *f);
u32        plat_read(const plat_file *f, u32 offset, void *dst, u32 len);

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

/* Runs exe with the given argument string (already quoted) and waits for it.
 * Returns the child's exit code, or -1 when it could not be started. */
s32 plat_spawn(const char *exe, const char *args);

/* Window/screen caption; may be a no-op. */
void plat_set_title(const char *text);

#endif /* ICFTD_PLATFORM_H */
