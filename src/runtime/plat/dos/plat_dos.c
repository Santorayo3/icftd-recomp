/* MS-DOS platform layer: VGA mode 13h, the VGA DAC, the keyboard controller and the 8254 timer.
 *
 * The runtime renders 8-bit chunky, one byte per pixel, which is exactly mode 13h (320x200x256):
 * the framebuffer is 64000 bytes and one copy puts it on screen. There is nothing to scale and no
 * window - a DOS build takes the whole display, as the original did.
 *
 * Two pieces of hardware are used directly because the BIOS cannot express what the game needs:
 *
 *  - The keyboard. INT 16h only reports key PRESSES, and the engine needs held directions (its
 *    compass decode reads the state every frame) and the moment fire is released (the YES/NO
 *    prompt waits for the release). So IRQ1 is masked and the 8042's output buffer is polled;
 *    make/break scancodes then give the exact held state. The mask is restored on shutdown.
 *  - The frame clock. The BIOS tick is 18.2 Hz; the Amiga frame is 20 ms. The 8254 channel 0
 *    counter (1.193182 MHz) is read latched and not reprogrammed, so the BIOS clock keeps its
 *    own rate while the game paces on the same crystal.
 *
 * Everything else is the DOS C library: files, the flat heap and directory calls.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <direct.h>
#include <dos.h>
#include <i86.h>

#include "types.h"
#include "platform.h"

#define PIT_HZ      1193182u        /* 8254 input clock */
#define VGA_MEMORY  0xA0000L        /* mode 13h framebuffer, linear in the DOS extender's map */
#define PIC_MASTER  0x21            /* interrupt mask register, bit 1 = IRQ1 (keyboard) */
#define KBC_STATUS  0x64
#define KBC_DATA    0x60

static u8   g_dac[PAL_ENTRIES * 3];         /* what the DAC currently holds */
static int  g_videoMode = 3;                /* mode to restore on shutdown */

static u32  g_period = 23863;               /* PIT counts per frame: 1193182 / 50 */
static u32  g_lastPit;
static u32  g_pitAcc;                       /* counts since the last frame boundary */
static u32  g_ms, g_msFrac;                 /* plat_ticks_ms accumulator */
static u32  g_frameHz = 50;

static u8   g_irq1Masked, g_irq1Old;
static u8   g_keys[KEY_COUNT];
static u8   g_make[KEY_COUNT];              /* a make code arrived since the last pump */
static u8   g_e0;                           /* the previous scancode was the E0 prefix */
static int  g_e1;                           /* bytes left of an E1 (Pause) sequence */

static char g_exeDir[144] = ".";

/* --- 8254 frame clock -------------------------------------------------------------------- */

static u32 pit_counter(void)
{
    u32 v;

    outp(0x43, 0x00);                       /* latch channel 0, no effect on the count */
    v = (u32)inp(0x40);
    v |= ((u32)inp(0x40)) << 8;
    return v;
}

/* Counts since the previous call (the counter counts down and wraps at 65536). */
static void pit_update(void)
{
    u32 now = pit_counter();
    u32 d = (g_lastPit - now) & 0xFFFFu;
    u32 ms;

    g_lastPit = now;
    g_pitAcc += d;
    /* Whole milliseconds, with the remainder carried - 1193182 counts per second. */
    ms = g_msFrac + d * 1000u;
    g_ms += ms / PIT_HZ;
    g_msFrac = ms % PIT_HZ;
}

/* --- keyboard ------------------------------------------------------------------------------ */

/* One scancode sequence. 0xE0 marks the arrow cluster (and the keypad Enter), 0xE1 the six-byte
 * Pause sequence; everything else is the basic set. A make code has bit 7 clear. */
static void kbd_scancode(u8 sc)
{
    int make, key = -1;

    if (sc == 0xE0) { g_e0 = 1; return; }
    if (sc == 0xE1) { g_e1 = 5; return; }
    if (g_e1) { g_e1--; return; }

    make = (sc & 0x80u) == 0;
    sc &= 0x7Fu;
    if (g_e0) {
        g_e0 = 0;
        switch (sc) {
        case 0x48: key = KEY_UP;    break;
        case 0x50: key = KEY_DOWN;  break;
        case 0x4B: key = KEY_LEFT;  break;
        case 0x4D: key = KEY_RIGHT; break;
        case 0x1C: key = KEY_ENTER; break;      /* the keypad's Enter */
        default: break;
        }
    } else {
        switch (sc) {
        case 0x01: key = KEY_ESCAPE; break;
        case 0x39: key = KEY_FIRE;   break;
        case 0x1C: key = KEY_ENTER;  break;
        case 0x3B: key = KEY_F1;     break;
        case 0x3C: key = KEY_F2;     break;
        case 0x3D: key = KEY_F3;     break;
        case 0x3E: key = KEY_F4;     break;
        case 0x3F: key = KEY_F5;     break;
        case 0x48: key = KEY_UP;     break;    /* the numeric keypad */
        case 0x50: key = KEY_DOWN;   break;
        case 0x4B: key = KEY_LEFT;   break;
        case 0x4D: key = KEY_RIGHT;  break;
        default: break;
        }
    }
    if (key < 0) return;
    if (make) {
        if (!g_keys[key]) g_make[key] = 1;
        g_keys[key] = 1;
    } else {
        g_keys[key] = 0;
    }
}

/* Drains everything the 8042 holds. Called from the frame wait as well as from plat_pump, so a
 * key cannot sit in the controller (one byte) and get overwritten by the next one. */
static void kbd_poll(void)
{
    int guard = 64;                             /* a stuck buffer must not spin forever */

    while (guard-- > 0 && (inp(KBC_STATUS) & 0x01u) != 0)
        kbd_scancode((u8)inp(KBC_DATA));
}

/* IRQ1 off: the BIOS keyboard interrupt would read port 0x60 before this code could. */
static void kbd_take(void)
{
    if (g_irq1Masked) return;
    g_irq1Old = (u8)inp(PIC_MASTER);
    outp(PIC_MASTER, (unsigned)(g_irq1Old | 0x02u));
    g_irq1Masked = 1;
    while ((inp(KBC_STATUS) & 0x01u) != 0) (void)inp(KBC_DATA);   /* stale keys */
    memset(g_keys, 0, sizeof g_keys);
    memset(g_make, 0, sizeof g_make);
    g_e0 = 0;
    g_e1 = 0;
}

static void kbd_release(void)
{
    if (!g_irq1Masked) return;
    outp(PIC_MASTER, (unsigned)g_irq1Old);
    g_irq1Masked = 0;
}

/* --- VGA ----------------------------------------------------------------------------------- */

static void set_video_mode(u32 mode)
{
    union REGS r;

    r.w.ax = (unsigned)mode;
    int386(0x10, &r, &r);
}

u32 plat_init(const char *title)
{
    union REGS r;

    (void)title;
    /* Remember the mode to come back to (the shell's text mode, normally 3). */
    r.w.ax = 0x0F00;
    int386(0x10, &r, &r);
    g_videoMode = (int)(r.h.al);

    kbd_take();
    set_video_mode(0x0013);
    /* A mode set does not leave the DAC black: mode 13h loads the BIOS 256-colour palette, where
     * 7 is grey (42,42,42). The shadow therefore starts as "unknown" and the first palette write
     * fills in all 256 entries - otherwise every entry that asks for black is skipped and the
     * picture keeps the BIOS colour (the logo's background box stayed grey). */
    memset(g_dac, 0xFF, sizeof g_dac);
    g_lastPit = pit_counter();
    g_pitAcc = 0;
    g_ms = 0;
    g_msFrac = 0;
    return 1;
}

void plat_set_program(const char *argv0)
{
    char full[160];
    int i, cut = -1;
    size_t n;

    if (argv0 == 0 || *argv0 == 0) { g_exeDir[0] = '.'; g_exeDir[1] = 0; return; }
    if (argv0[0] == '\\' || argv0[0] == '/' || (argv0[1] == ':' && argv0[0] != 0)) {
        n = strlen(argv0);
        if (n >= sizeof full) n = sizeof full - 1;
        memcpy(full, argv0, n);
        full[n] = 0;
    } else {
        if (getcwd(full, (int)sizeof full) == 0) { strcpy(full, "."); }
        strncat(full, "\\", sizeof full - strlen(full) - 1);
        strncat(full, argv0, sizeof full - strlen(full) - 1);
    }
    for (i = 0; full[i] != 0; i++)
        if (full[i] == '\\' || full[i] == '/') cut = i;
    if (cut < 0) { strcpy(g_exeDir, "."); return; }
    if (cut == 2 && full[1] == ':') cut = 2;    /* "C:\GAME.EXE" leaves "C:" */
    memcpy(g_exeDir, full, (size_t)cut);
    g_exeDir[cut] = 0;
}

void plat_set_fullscreen(u32 on)
{
    (void)on;                                   /* a DOS program owns the whole display */
}

u32 plat_fullscreen(void)
{
    return 0;
}

/* No window mode to choose, so the default ini does not carry one. */
const char *plat_default_ini(void)
{
    return "; ICFTD runtime settings. Written with these defaults on the first start.\r\n"
           "; Sections use [BRACKETS]; ';' or '#' at the start of a line is a comment.\r\n"
           "\r\n"
           "[AUDIO]\r\n"
           "; Volume 0..10, 0 = off, 10 = full.\r\n"
           "sound=10\r\n"
           "music=10\r\n";
}

void plat_shutdown(void)
{
    kbd_release();
    set_video_mode((u32)g_videoMode);
}

u8 *plat_framebuffer(void)
{
    /* Mode 13h is linear 320x200x256, exactly the runtime's chunky layout, so the screen *is* the
     * framebuffer: a staging buffer plus a 64 KB copy per present bought nothing. */
    return (u8 *)(u32)VGA_MEMORY;
}

void plat_present(void)
{
    /* Nothing to copy: the presenter wrote the screen directly. */
}

/* Only entries the DAC does not already hold are written: the presenter hands over all 256 every
 * frame, and the palette changes a few times per second at most. g_dac is the truth about the DAC
 * (it starts "unknown" after a mode set), so this is safe for black as well. */
void plat_set_palette(u32 first, u32 count, const u8 *rgb)
{
    u32 i;

    if (rgb == 0 || first >= PAL_ENTRIES) return;
    if (first + count > PAL_ENTRIES) count = PAL_ENTRIES - first;
    for (i = 0; i < count; i++) {
        u32 idx = first + i;
        const u8 *src = rgb + i * 3;
        u8 *dst = g_dac + idx * 3;

        if (memcmp(dst, src, 3) == 0) continue;
        memcpy(dst, src, 3);
        outp(0x3C8, idx);
        outp(0x3C9, (unsigned)(src[0] >> 2));   /* the DAC is 6 bits per gun */
        outp(0x3C9, (unsigned)(src[1] >> 2));
        outp(0x3C9, (unsigned)(src[2] >> 2));
    }
}

/* --- audio ---------------------------------------------------------------------------------
 * No device yet (the DOS step skips audio). Paula and the CIA timers are still modelled by the
 * runtime and the mixer still produces samples; they are simply not played. */
u32 plat_audio_open(u32 rate)
{
    (void)rate;
    return 0;
}

void plat_audio_close(void)
{
}

void plat_audio_write(const s16 *frames, u32 count)
{
    (void)frames;
    (void)count;
}

u32 plat_audio_dropped(void)
{
    return 0;
}

/* --- input and clock ----------------------------------------------------------------------- */

u32 plat_pump(input_state *in)
{
    u32 i;

    kbd_poll();
    for (i = 0; i < KEY_COUNT; i++) {
        in->down[i] = g_keys[i];
        in->pressed[i] = g_make[i];
        g_make[i] = 0;
    }
    in->mouse_x = 0;
    in->mouse_y = 0;
    in->mouse_left = 0;
    in->mouse_right = 0;
    return 1;
}

void plat_set_frame_hz(u32 hz)
{
    if (hz == 0) hz = 50;
    g_frameHz = hz;
    g_period = PIT_HZ / hz;
    if (g_period == 0) g_period = 1;
}

/* Blocks until the next frame boundary on the 8254 clock. Keyboard scanning happens here too:
 * this is where the program spends its idle time, and a scancode must not be overwritten in the
 * controller's one-byte buffer while it waits. */
void plat_frame_sync(void)
{
    for (;;) {
        pit_update();
        if (g_pitAcc < g_period) { kbd_poll(); continue; }
        g_pitAcc -= g_period;
        /* A frame that took far longer than a period (a load, a debugger) does not try to catch
         * up in a burst - that would spin the game through several frames at once. */
        if (g_pitAcc > g_period * 4u) g_pitAcc = 0;
        return;
    }
}

u32 plat_ticks_ms(void)
{
    pit_update();
    return g_ms;
}

/* Monotonic 32-bit count on the same 8254 counter, for the front end's --perf breakdown. */
static u32 g_perfLast;
static u32 g_perfTotal;

u32 plat_pit_now(void)
{
    u32 now = pit_counter();

    g_perfTotal += (g_perfLast - now) & 0xFFFFu;
    g_perfLast = now;
    return g_perfTotal;
}

/* --- files ---------------------------------------------------------------------------------
 * The engine asks for AmigaDOS names, a few of which are not legal DOS names
 * (fonts\newnem.font, sfx/screeeems, ...). The DOS release ships them under 8.3 names and
 * NAMES.TXT next to the executable records long=short; a path that does not open is retried
 * through that map part. That is the whole long-name story - the extracted disk folders on a
 * FAT drive cannot hold the original names at all. */

#define NAME_MAP_MAX 128

static struct { char from[40]; char to[14]; } g_map[NAME_MAP_MAX];
static int g_mapCount = -1;                 /* -1 = not read yet */

static void map_load(void)
{
    char path[160];
    char line[80];
    FILE *f;

    if (g_mapCount >= 0) return;
    g_mapCount = 0;
    sprintf(path, "%s\\NAMES.TXT", plat_exe_dir());
    f = fopen(path, "rb");
    if (f == 0) return;
    while (g_mapCount < NAME_MAP_MAX && fgets(line, (int)sizeof line, f) != 0) {
        char *eq = strchr(line, '=');
        char *to;
        size_t n;

        if (eq == 0 || line[0] == ';' || line[0] == '\r' || line[0] == '\n') continue;
        *eq = 0;
        to = eq + 1;
        n = strlen(to);
        while (n > 0 && (to[n - 1] == '\r' || to[n - 1] == '\n' || to[n - 1] == ' ')) to[--n] = 0;
        n = strlen(line);
        if (n == 0 || n >= sizeof g_map[0].from || strlen(to) >= sizeof g_map[0].to) continue;
        memcpy(g_map[g_mapCount].from, line, n + 1);
        strcpy(g_map[g_mapCount].to, to);
        g_mapCount++;
    }
    fclose(f);
}

static int ci_equal(const char *a, const char *b)
{
    while (*a != 0 && *b != 0) {
        char ca = *a, cb = *b;
        if (ca >= 'A' && ca <= 'Z') ca = (char)(ca - 'A' + 'a');
        if (cb >= 'A' && cb <= 'Z') cb = (char)(cb - 'A' + 'a');
        if (ca != cb) return 0;
        a++;
        b++;
    }
    return *a == 0 && *b == 0;
}

/* Same path with its file name replaced by the 8.3 name the map gives it. 1 = it changed. */
static int map_path(const char *path, char *out, int max)
{
    int cut = -1, i, n;

    map_load();
    if (g_mapCount == 0) return 0;
    for (i = 0; path[i] != 0; i++)
        if (path[i] == '\\' || path[i] == '/') cut = i;
    for (n = 0; n <= cut && n < max - 1; n++) out[n] = path[n];
    out[n] = 0;
    for (i = 0; i < g_mapCount; i++)
        if (ci_equal(path + cut + 1, g_map[i].from)) {
            if (n + (int)strlen(g_map[i].to) >= max) return 0;
            strcpy(out + n, g_map[i].to);
            return 1;
        }
    return 0;
}

struct plat_file {
    FILE *f;
    u32   size;
};

plat_file *plat_open(const char *path)
{
    plat_file *p;
    FILE *f;
    char alt[160];
    long size;

    if (path == 0 || *path == 0) return NULLP;
    f = fopen(path, "rb");
    if (f == 0 && map_path(path, alt, (int)sizeof alt)) f = fopen(alt, "rb");
    if (f == 0) return NULLP;
    if (fseek(f, 0, SEEK_END) != 0) { fclose(f); return NULLP; }
    size = ftell(f);
    if (size < 0) { fclose(f); return NULLP; }
    fseek(f, 0, SEEK_SET);
    p = (plat_file *)malloc(sizeof(plat_file));
    if (p == 0) { fclose(f); return NULLP; }
    p->f = f;
    p->size = (u32)size;
    return p;
}

void plat_close(plat_file *f)
{
    if (f == 0) return;
    fclose(f->f);
    free(f);
}

u32 plat_size(const plat_file *f)
{
    return f != 0 ? f->size : 0;
}

u32 plat_read(const plat_file *f, u32 offset, void *dst, u32 len)
{
    if (f == 0 || dst == 0 || len == 0) return 0;
    if (offset > f->size) return 0;
    if (len > f->size - offset) len = f->size - offset;
    if (fseek(f->f, (long)offset, SEEK_SET) != 0) return 0;
    return (u32)fread(dst, 1, (size_t)len, f->f);
}

plat_file *plat_create(const char *path)
{
    plat_file *p;
    FILE *f;

    if (path == 0 || *path == 0) return NULLP;
    f = fopen(path, "wb");
    if (f == 0) return NULLP;
    p = (plat_file *)malloc(sizeof(plat_file));
    if (p == 0) { fclose(f); return NULLP; }
    p->f = f;
    p->size = 0;
    return p;
}

u32 plat_write(plat_file *f, u32 offset, const void *src, u32 len)
{
    u32 put;

    if (f == 0 || src == 0 || len == 0) return 0;
    if (fseek(f->f, (long)offset, SEEK_SET) != 0) return 0;
    put = (u32)fwrite(src, 1, (size_t)len, f->f);
    if (offset + put > f->size) f->size = offset + put;
    return put;
}

/* --- heap ---------------------------------------------------------------------------------- */

void *plat_alloc(u32 bytes)
{
    return malloc((size_t)bytes);
}

void plat_free(void *p)
{
    if (p != 0) free(p);
}

/* --- startup ------------------------------------------------------------------------------- */

const char *plat_exe_dir(void)
{
    return g_exeDir;
}

u32 plat_path_kind(const char *path)
{
    unsigned attr;
    char alt[160];

    if (path == 0 || *path == 0) return PLAT_PATH_MISSING;
    if (_dos_getfileattr(path, &attr) != 0 &&
        !(map_path(path, alt, (int)sizeof alt) && _dos_getfileattr(alt, &attr) == 0))
        return PLAT_PATH_MISSING;
    return ((unsigned char)attr & _A_SUBDIR) ? PLAT_PATH_DIR : PLAT_PATH_FILE;
}

u32 plat_mkdir(const char *path)
{
    if (path == 0 || *path == 0) return 0;
    if (_mkdir(path) == 0) return 1;
    return plat_path_kind(path) == PLAT_PATH_DIR;
}

u32 plat_dir_empty(const char *path)
{
    char pattern[160];
    struct find_t ff;

    if (path == 0 || *path == 0) return 1;
    if (strlen(path) + 5 >= sizeof pattern) return 1;
    sprintf(pattern, "%s\\*.*", path);
    if (_dos_findfirst(pattern, 0x3Fu, &ff) != 0) return 1;      /* no directory is empty */
    do {
        if (strcmp(ff.name, ".") == 0 || strcmp(ff.name, "..") == 0) continue;
        if (((unsigned char)ff.attrib & _A_SUBDIR) == 0) {
            _dos_findclose(&ff);
            return 0;
        }
    } while (_dos_findnext(&ff) == 0);
    _dos_findclose(&ff);
    return 1;
}

s32 plat_spawn(const char *exe, const char *args)
{
    (void)exe;
    (void)args;
    return -1;                                  /* nothing spawns anything in this build */
}

void plat_set_title(const char *text)
{
    (void)text;
}

/* Fixed text of the last frame, rewritten ten times a second: the file survives the process
 * dying, and a FAT write on every single frame would cost more than the state is worth. */
void plat_crash_state(const char *text)
{
    static char path[160];
    static u32 calls;
    FILE *f;

    if (text == 0) return;
    if ((calls++ % 10u) != 0) return;
    if (path[0] == 0) sprintf(path, "%s\\RCRASH.TXT", plat_exe_dir());
    f = fopen(path, "wb");
    if (f == 0) return;
    fwrite(text, 1, strlen(text), f);
    fclose(f);
}
