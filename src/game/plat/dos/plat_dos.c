/* DOS platform layer (16-bit real mode, VGA mode 13h).
 *
 * Built with: wcl -bt=dos -ml -4r -ox -i=..\core ..\core\main.c ..\core\gfx.c plat_dos.c
 *
 * - mode 13h: 320x200, 256 colours, video memory at A000:0000 (64000 B = one segment)
 * - palette: ports 3C8/3C9 (6 bit per channel, so the core's 8 bit value is >> 2)
 * - the core draws into a far-malloc'ed buffer; plat_present() copies it into video
 *   memory during vertical retrace (no tearing, no second buffer needed)
 * - pacing: the VGA runs at 70.09 Hz, the game at 50 Hz; five ticks are seven
 *   retraces, so no PIT programming is needed
 *
 * KEYBOARD: the BIOS queue only reports key-makes, so a held key is seen once.
 * Milestone 7 replaces this with an INT 9h handler that tracks the break codes.
 */
#include <conio.h>
#include <direct.h>
#include <dirent.h>
#include <dos.h>
#include <i86.h>
#include <malloc.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "platform.h"

#define VGA_SEG   0xA000
#define CRTC_STAT 0x3DA

static u8  *g_fb;
static u8   g_keys[KEY_COUNT];
static u8   g_prev[KEY_COUNT];
static u8   g_quit;
static s16  g_mouse_x, g_mouse_y;
static u8   g_mouse_ready;
static u8   g_mouse_buttons;
static u32  g_retraces;
static u32  g_ticks;

static void wait_retrace(void)
{
    while (inp(CRTC_STAT) & 8) ;        /* end of the current frame */
    while (!(inp(CRTC_STAT) & 8)) ;     /* start of the next one */
}

static void set_video_mode(u16 mode)
{
    union REGS r;
    r.w.ax = mode;
    int86(0x10, &r, &r);
}

static void hide_cursor(void)
{
    union REGS r;
    r.h.ah = 0x01;
    r.w.cx = 0x2000;
    int86(0x10, &r, &r);
}

static void mouse_init(void)
{
    union REGS r;
    r.w.ax = 0x0000;
    int86(0x33, &r, &r);
    g_mouse_ready = (u8)(r.w.ax == 0xFFFF);
    if (!g_mouse_ready) return;
    r.w.ax = 0x0001;                      /* show pointer */
    int86(0x33, &r, &r);
    r.w.ax = 0x0007; r.w.cx = 0; r.w.dx = SCREEN_W - 1;
    int86(0x33, &r, &r);
    r.w.ax = 0x0008; r.w.cx = 0; r.w.dx = SCREEN_H - 1;
    int86(0x33, &r, &r);
}

static void mouse_poll(void)
{
    union REGS r;
    if (!g_mouse_ready) return;
    r.w.ax = 0x0003;
    int86(0x33, &r, &r);
    g_mouse_x = (s16)r.w.cx;
    g_mouse_y = (s16)r.w.dx;
    g_mouse_buttons = (u8)(r.w.bx & 3);
}

static void key_poll(void)
{
    int c, scan;

    while (kbhit()) {
        c = getch();
        if (c == 0) {                     /* extended key: next byte is the scan code */
            scan = getch();
            switch (scan) {
            case 0x48: g_keys[KEY_UP] = 1; break;
            case 0x50: g_keys[KEY_DOWN] = 1; break;
            case 0x4B: g_keys[KEY_LEFT] = 1; break;
            case 0x4D: g_keys[KEY_RIGHT] = 1; break;
            default: break;
            }
            continue;
        }
        switch (c) {
        case 27:  g_keys[KEY_ESCAPE] = 1; break;
        case 13:  g_keys[KEY_ENTER] = 1; break;
        case 32:  g_keys[KEY_FIRE] = 1; break;
        default: break;
        }
    }
}

u32 plat_init(const char *title)
{
    u32 i;
    (void)title;

    g_fb = (u8 *)_fmalloc(SCREEN_PIXELS);
    if (!g_fb) return 0;
    for (i = 0; i < SCREEN_PIXELS; i++) g_fb[i] = 0;

    set_video_mode(0x0013);
    hide_cursor();
    mouse_init();
    g_retraces = 0;
    g_ticks = 0;
    return 1;
}

void plat_shutdown(void)
{
    if (g_mouse_ready) {
        union REGS r;
        r.w.ax = 0x0002;                  /* hide pointer */
        int86(0x33, &r, &r);
    }
    set_video_mode(0x0003);
    if (g_fb) {
        _ffree(g_fb);
        g_fb = 0;
    }
    g_quit = 1;
}

u8 *plat_framebuffer(void)
{
    return g_fb;
}

void plat_present(void)
{
    u8 __far *video = (u8 __far *)MK_FP(VGA_SEG, 0);
    wait_retrace();
    _fmemcpy(video, g_fb, SCREEN_PIXELS);
}

void plat_set_palette(u32 first, u32 count, const u8 *rgb)
{
    u32 i;
    outp(0x3C8, (int)(first & 0xFF));
    for (i = 0; i < count; i++) {
        outp(0x3C9, (int)(rgb[i * 3 + 0] >> 2));
        outp(0x3C9, (int)(rgb[i * 3 + 1] >> 2));
        outp(0x3C9, (int)(rgb[i * 3 + 2] >> 2));
    }
}

u32 plat_pump(input_state *in)
{
    u32 i;

    key_poll();
    mouse_poll();
    for (i = 0; i < KEY_COUNT; i++) {
        in->down[i] = g_keys[i];
        in->pressed[i] = (u8)(g_keys[i] && !g_prev[i]);
        g_prev[i] = g_keys[i];
        g_keys[i] = 0;                    /* BIOS gives makes only; see header */
    }
    in->mouse_x = g_mouse_x;
    in->mouse_y = g_mouse_y;
    in->mouse_left = (u8)(g_mouse_buttons & 1);
    in->mouse_right = (u8)(g_mouse_buttons & 2);
    return (u32)(!g_quit);
}

void plat_frame_sync(void)
{
    /* Block until tick g_ticks+1 is due: 5 ticks == 7 retraces. */
    u32 need = (g_ticks + 1) * 7u;
    while (g_retraces * 5u < need) {
        wait_retrace();
        g_retraces++;
    }
    g_ticks++;
}

u32 plat_ticks_ms(void)
{
    return g_ticks * 20u;
}

/* --- files and heap ------------------------------------------------------- */

struct plat_file {
    FILE *f;
    u32   size;
};

plat_file *plat_open(const char *path)
{
    FILE *fp;
    plat_file *pf;

    fp = fopen(path, "rb");
    if (!fp) return NULLP;
    pf = (plat_file *)malloc(sizeof(plat_file));
    if (!pf) { fclose(fp); return NULLP; }
    pf->f = fp;
    if (fseek(fp, 0L, SEEK_END) != 0) { fclose(fp); free(pf); return NULLP; }
    pf->size = (u32)ftell(fp);
    return pf;
}

void plat_close(plat_file *f)
{
    if (!f) return;
    fclose(f->f);
    free(f);
}

u32 plat_size(const plat_file *f)
{
    return f ? f->size : 0;
}

u32 plat_read(const plat_file *f, u32 offset, void *dst, u32 len)
{
    if (!f || !dst || len == 0) return 0;
    if (offset > f->size) return 0;
    if (len > f->size - offset) len = f->size - offset;
    if (fseek(f->f, (long)offset, SEEK_SET) != 0) return 0;
    return (u32)fread(dst, 1, len, f->f);
}

void *plat_alloc(u32 bytes)
{
    /* Far heap: keeps large buffers out of the 64 KB DGROUP. */
    return (void *)_fmalloc(bytes);
}

void plat_free(void *p)
{
    if (p) _ffree(p);
}

/* --- startup -------------------------------------------------------------- */
/* DOS runs from the game folder, so the working directory is the data root and
 * there is no separate asset exporter to spawn: game.pak has to be built by
 * tools\gamepack.ps1 on the host first. */

const char *plat_exe_dir(void)
{
    return ".";
}

u32 plat_path_kind(const char *path)
{
    DIR *d;
    FILE *f;

    if (!path || !*path) return PLAT_PATH_MISSING;
    d = opendir(path);
    if (d) { closedir(d); return PLAT_PATH_DIR; }
    f = fopen(path, "rb");
    if (f) { fclose(f); return PLAT_PATH_FILE; }
    return PLAT_PATH_MISSING;
}

u32 plat_mkdir(const char *path)
{
    if (!path || !*path) return 0;
    if (mkdir(path) == 0) return 1;
    return plat_path_kind(path) == PLAT_PATH_DIR;
}

s32 plat_spawn(const char *exe, const char *args)
{
    (void)exe;
    (void)args;
    return -1;
}

void plat_set_title(const char *text)
{
    (void)text;
}
