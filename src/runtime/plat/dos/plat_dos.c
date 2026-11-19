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
 *  - The Sound Blaster. Paula is mixed at 44.1 kHz and handed to the card through a ring in base
 *    memory; BLASTER names the card and the DSP version picks the format (16-bit stereo on an
 *    SB16, 8-bit stereo on a Pro or 2.0, single-cycle 8-bit mono on a 1.x). No interrupt runs:
 *    the block IRQ is masked in the 8259 and acknowledged by polling the status port.
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
#include "pitclock.h"

#define VGA_MEMORY  0xA0000L        /* mode 13h framebuffer, linear in the DOS extender's map */
#define PIC_MASTER  0x21            /* interrupt mask register, bit 1 = IRQ1 (keyboard) */
#define KBC_STATUS  0x64
#define KBC_DATA    0x60

/* The frame the front end composes, and the palette it is drawn with. Neither is the screen:
 * video memory is written in one place only, by plat_present, which hands the finished frame over
 * in one copy. Mode 13h's linear layout invites drawing straight into video memory, but the
 * display reads that memory while the frame is being composed - the title's art arrives first and
 * its buttons after it, so a frame caught in between shows the art with no buttons, and the Quit
 * Game notice's white text is caught half written. The Win32 build has the same split (a DIB,
 * composed off screen, then one BitBlt). */
static u8   g_screen[SCREEN_PIXELS];        /* the frame plat_framebuffer() hands out */
static u8   g_pal[PAL_ENTRIES * 3];         /* the palette that frame is drawn with */
static u8   g_dac[PAL_ENTRIES * 3];         /* what the DAC currently holds, 0xFF = unknown */
static int  g_palUp;                        /* g_pal differs from what was handed over */
static int  g_videoMode = 3;                /* mode to restore on shutdown */

static u32  g_period = 23863;               /* PIT counts per frame: 1193182 / 50 */
static u32  g_lastPit;                      /* pit_clock_read() at the last pit_update() */
static u32  g_pitAcc;                       /* counts since the last frame boundary */
static u32  g_ms, g_msFrac;                 /* plat_ticks_ms accumulator */
static u32  g_frameHz = 50;

static u8   g_irq1Masked, g_irq1Old;
static u8   g_keys[KEY_COUNT];
static u8   g_make[KEY_COUNT];              /* a make code arrived since the last pump */
static u8   g_dirHeld[4];                   /* per direction: bit 0 the arrow keys, bit 1 W/A/S/D */
static u8   g_e0;                           /* the previous scancode was the E0 prefix */
static int  g_e1;                           /* bytes left of an E1 (Pause) sequence */

/* The mouse, through the DOS driver's INT 33h. The driver's own arrow is kept hidden: the runtime
 * draws the game's arrow into the picture (rt_pointer_at), and a second, always-visible cursor on
 * top of it would be a different pointer from the one the seams use. */
static int  g_mouse = -1;                   /* -1 = not probed, 0 = no driver, 1 = there */
static s16  g_mouseX, g_mouseY;             /* mode 13h pixels, 0..319 / 0..199 */
static u8   g_mouseButtons;                 /* bit 0 left, bit 1 right */
static u8   g_mousePrevButtons;
static u32  g_mouseMoves;                   /* positions reported, for "did it move" */
static u32  g_mouseMovesSeen;

static void mouse_init(void);

static char g_exeDir[144] = ".";

/* --- 8254 frame clock -------------------------------------------------------------------- */

/* The BIOS's own tick count (0040:006C): one increment per output period of channel 0, i.e. one per
 * 65,536 input clocks. One 32-bit load reads it whole, which is exact because the BIOS handler
 * increments it in one instruction too. */
static u32 bios_tick(void)
{
    return *(volatile u32 *)0x46Cu;
}

static int g_pitReadBack = 1;               /* the read-back status/count command answers */
static pit_clock g_pitClock;
static int g_pitMode;                       /* 2 or 3 as established, 0 for the linear fallback */

/* One latched reading of channel 0, with the tick on either side of the latch.
 *
 * Status and count come from ONE read-back command, so they describe the same instant: the counter's
 * own value does not say which half of a mode-3 period it is in (see pitclock.h), and reading the
 * two separately could pair one half with the other's tick. The tick is read before and after the
 * latch command; one that moved in between makes the pair inconsistent and the caller retries.
 *
 * Without read-back the latch is the plain command-0 one and the status stays 0, which pitclock.h
 * reads as "no OUT bit" and turns into the linear fallback. */
static int pit_read_snapshot(void *ctx, pit_snapshot *s)
{
    u32 t1, t2;
    u16 c;

    (void)ctx;
    t1 = bios_tick();
    if (g_pitReadBack)
    {
        outp(0x43, 0xC2);                   /* read-back: latch channel 0's status and count */
        t2 = bios_tick();
        s->status = (u8)inp(0x40);
        c = (u16)inp(0x40);
        c = (u16)(c | (u16)((u16)inp(0x40) << 8));
    }
    else
    {
        outp(0x43, 0x00);                   /* plain latch, no effect on the count */
        t2 = bios_tick();
        c = (u16)inp(0x40);
        c = (u16)(c | (u16)((u16)inp(0x40) << 8));
        s->status = 0;
    }
    if (t1 != t2) return 0;
    s->tick = t1;
    s->counter = c;
    return 1;
}

/* Which mode channel 0 runs in, and which OUT level opens a period: established once, from the
 * read-back status byte and from watching three BIOS ticks.
 *
 * The status byte names the mode; the watch confirms it. A mode-3 counter must wrap twice per tick
 * (two half periods) and OUT must change level at each wrap, with the level after the tick change
 * the same every period - that is what makes the counter value unambiguous. A mode-2 counter wraps
 * once per tick. If the byte does not look like a status, or a mode-3 counter does not behave like
 * one, the clock keeps the linear reading instead of inventing halves; g_pitMode then says so and
 * the --perf header reports it. */
static void clock_setup(void)
{
    pit_snapshot s;
    pit_clock watch;
    u32 spins;
    int seen = 0, mode = -1;
    int havePrev = 0, changes = 0, wraps = 0, flips = 0, badBoundary = 0, badOut = 0;
    int outAfter = -1;
    u32 prevTick = 0, prevPhase = 0;
    int prevOut = 0;

    g_pitReadBack = 1;
    for (spins = 0; spins < 64u && !seen; spins++)
    {
        if (!pit_read_snapshot(0, &s)) continue;
        mode = pit_status_mode(s.status);
        seen = 1;
    }
    if (!seen || mode < 0)
    {
        g_pitReadBack = 0;
        g_pitMode = 0;
        pit_clock_begin(&g_pitClock, 0, 0);
        return;
    }

    pit_clock_begin(&watch, mode == 3, 1);
    for (spins = 0; spins < 8000000u && changes < 4; spins++)
    {
        u32 phase;
        int out;

        if (!pit_read_snapshot(0, &s)) continue;
        out = (int)(((u32)s.status >> 7) & 1u);
        phase = pit_phase(&watch, s.counter);
        if (!havePrev)
        {
            havePrev = 1;
            prevTick = s.tick;
            prevPhase = phase;
            prevOut = out;
            continue;
        }
        if (out != prevOut) flips++;
        if (phase < prevPhase) wraps++;
        if (s.tick != prevTick)
        {
            changes++;
            /* The tick must count a full period, i.e. the BIOS handler must run near the counter's
             * reload - if it ran half a period later the two would not describe the same period at
             * all. A few thousand clocks of handler latency is normal; a quarter period is not. */
            if (changes > 1 && phase > PIT_HALF / 4u) badBoundary++;
            if (changes > 1 && outAfter >= 0 && out != outAfter) badOut++;
            outAfter = out;
            prevTick = s.tick;
        }
        prevPhase = phase;
        prevOut = out;
    }
    (void)prevOut;

    if (mode == 3 && changes >= 4 && badOut == 0 && badBoundary == 0 && outAfter >= 0 &&
        wraps >= 2 * (changes - 2) && flips + 2 >= wraps && wraps + 2 >= flips)
    {
        g_pitMode = 3;
        pit_clock_begin(&g_pitClock, 1, outAfter);
    }
    else if (mode == 2 && changes >= 2)
    {
        g_pitMode = 2;
        pit_clock_begin(&g_pitClock, 0, 0);
    }
    else
    {
        g_pitMode = 0;
        pit_clock_begin(&g_pitClock, 0, 0);
    }
}

/* Counts of channel 0 since plat_init(), monotonic and past the counter's 16 bits. The arithmetic
 * and what it refuses are in pitclock.h; here the clock is just the port's snapshot reader. */
static u32 pit_clock_read(void)
{
    return pit_clock_sample(&g_pitClock, pit_read_snapshot, 0);
}

/* Counts per real second, and the amplification the emulator introduces in between.
 *
 * On a real machine the 8254 counts at 1,193,182 Hz, so a 20 ms Amiga frame is 23,863 counts. Under
 * an emulator that is not guaranteed: DOSBox with cycles=max runs the whole machine - timers
 * included - about twice as fast as real time, and then the same wait yields a hundred frames per
 * second, so the game and its music run at double tempo while the Sound Blaster, the one device on
 * real time, is overrun (that overrun is the crackle). The CMOS clock cannot be stretched, so it is
 * the reference: one second of it is measured once at startup and both the frame wait and the
 * mixer's millisecond clock follow real time from then on - which is what they do on hardware.
 *
 * The count is in input clocks, the unit pitclock.h produces regardless of the timer mode, so
 * g_pitCounts / 1193 really is milliseconds of emulated machine time. */
static u32 g_ticksPerSec = PIT_INPUT_HZ;
static u32 g_pitCounts;                 /* input clocks, i.e. emulated time */

/* Counts since the previous call. On the monotonic clock, so a gap longer than one 16-bit wrap is
 * still counted whole: between two vblanks a frame does more than 55 ms of this machine's time, and
 * the modulo difference this replaced threw those wraps away. */
static void pit_update(void)
{
    u32 now = pit_clock_read();
    u32 d = now - g_lastPit;

    g_lastPit = now;
    g_pitAcc += d;
    g_pitCounts += d;
    /* Whole milliseconds, with the remainder carried. In chunks, because a load can be seconds long
     * and d * 1000 would leave 32 bits. */
    while (d != 0)
    {
        u32 chunk = d > 1000000u ? 1000000u : d;
        u32 ms;
        d -= chunk;
        ms = g_msFrac + chunk * 1000u;
        g_ms += ms / g_ticksPerSec;
        g_msFrac = ms % g_ticksPerSec;
    }
}

/* The CMOS clock's time of day, in seconds. Hours are included (the old minute*60+second wrapped
 * once an hour) and the read is repeated if the seconds register moved under it, so a minute
 * boundary inside the read does not pair one minute with the next one's seconds. */
static u32 rtc_field(u32 reg)
{
    outp(0x70, (unsigned)reg);
    return (u32)inp(0x71) & 0xFFu;
}

static u32 rtc_units(u32 v, u32 b)
{
    if ((b & 0x04u) != 0)                  /* register B bit 2: binary units, not BCD */
        return v;
    return ((v >> 4) & 0xFu) * 10u + (v & 0xFu);
}

static u32 rtc_secs(void)
{
    u32 s = 0, m = 0, h = 0, b = 0, s2, tries, tod;

    for (tries = 0; tries < 8u; tries++)
    {
        s = rtc_field(0x00);
        m = rtc_field(0x02);
        h = rtc_field(0x04);
        b = rtc_field(0x0B);
        s2 = rtc_field(0x00);
        if (s == s2) break;
    }
    tod = rtc_units(h, b) * 3600u + rtc_units(m, b) * 60u + rtc_units(s, b);
    return tod < 86400u ? tod : 0;          /* a broken RTC reads as units out of range */
}

static u32 g_rtc0;

/* One second of the CMOS clock against the 8254: how many counts its clock runs per real second.
 * Both ends are pit_clock_read() readings, so the count is in input clocks whatever the timer mode. */
static void clock_calibrate(void)
{
    u32 t0, prev, now;

    t0 = rtc_secs();
    while (rtc_secs() == t0) { }           /* align to the RTC's own second boundary */
    t0 = rtc_secs();
    prev = pit_clock_read();
    for (;;)
    {
        now = pit_clock_read();
        if (rtc_secs() != t0) break;
    }
    if ((u32)(now - prev) > 100000u)       /* anything less is a broken RTC: keep the nominal */
        g_ticksPerSec = now - prev;
}

u32 plat_rtc_elapsed_ms(void)
{
    u32 now = rtc_secs();

    return ((now + 86400u - g_rtc0) % 86400u) * 1000u;   /* the wall clock can pass midnight */
}

/* Machine time as the 8254 counted it: 1,193,182 input clocks per emulated second, whatever the
 * host does. Multiply by the DOSBox cycle setting to get the host instructions a run consumed. */
u32 plat_emulated_ms(void)
{
    return g_pitCounts / 1193u;
}

/* What the clock established about the timer, for the --perf header: the mode the counter runs in
 * (2, 3, or 0 when the read-back command is not available and the linear reading is all there is),
 * and how many samples had to be retried or were lost. A lost sample costs nothing - the next good
 * one measures the whole interval - but a non-zero count says the readings were not all clean. */
void plat_clock_report(plat_clock_info *info)
{
    info->mode = (u32)g_pitMode;
    info->readBack = (u32)g_pitReadBack;
    info->samples = g_pitClock.samples;
    info->snapFails = g_pitClock.snapFails;
    info->rejects = g_pitClock.rejects;
    info->pending = g_pitClock.pending;
}

/* --- keyboard ------------------------------------------------------------------------------ */

static void kbd_key(int key, int make)
{
    if (make) {
        if (!g_keys[key]) g_make[key] = 1;
        g_keys[key] = 1;
    } else {
        g_keys[key] = 0;
    }
}

/* The arrow cluster and W/A/S/D are the same four directions, so one direction can be held by two
 * physical keys at once: the logical key stays down until the last of them is released, and a
 * release of one must not report a release of the direction. */
static void dir_key(int dir, int wasd, int down)
{
    u8 bit = (u8)(wasd ? 2 : 1);
    int key = KEY_UP + dir;

    if (down) g_dirHeld[dir] |= bit;
    else      g_dirHeld[dir] &= (u8)~bit;
    if (g_dirHeld[dir] != 0) {
        if (!g_keys[key]) g_make[key] = 1;
        g_keys[key] = 1;
    } else {
        g_keys[key] = 0;
    }
}

/* One scancode sequence. 0xE0 marks the arrow cluster (and the keypad Enter), 0xE1 the six-byte
 * Pause sequence; everything else is the basic set. A make code has bit 7 clear. */
static void kbd_scancode(u8 sc)
{
    int make, key = -1, e0;

    if (sc == 0xE0) { g_e0 = 1; return; }
    if (sc == 0xE1) { g_e1 = 5; return; }
    if (g_e1) { g_e1--; return; }

    make = (sc & 0x80u) == 0;
    sc &= 0x7Fu;
    e0 = g_e0;
    g_e0 = 0;

    /* The four directions come in two scan-code forms (the E0 set and the keypad's own codes) and
     * are also on W/A/S/D, so they are handled before the key table below. */
    switch (sc) {
    case 0x48: dir_key(0, 0, make); return;     /* up */
    case 0x50: dir_key(1, 0, make); return;     /* down */
    case 0x4B: dir_key(2, 0, make); return;     /* left */
    case 0x4D: dir_key(3, 0, make); return;     /* right */
    default: break;
    }
    if (!e0) {
        switch (sc) {
        /* W is a direction and, alone, the title screen's and the cheat's key of its own. */
        case 0x11: dir_key(0, 1, make); kbd_key(KEY_W, make); return;
        case 0x1E: dir_key(2, 1, make); return;     /* A */
        case 0x1F: dir_key(1, 1, make); return;     /* S */
        case 0x20: dir_key(3, 1, make); return;     /* D */
        default: break;
        }
    }

    if (e0) {
        switch (sc) {
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
        /* The digit row, 0x02 ('1') .. 0x0A ('9') and 0x0B ('0'). */
        case 0x02: case 0x03: case 0x04: case 0x05: case 0x06:
        case 0x07: case 0x08: case 0x09: case 0x0A:
            key = KEY_1 + (sc - 0x02); break;
        case 0x0B: key = KEY_0;      break;
        /* The title screen's ending keys. */
        case 0x2E: key = KEY_C;      break;
        case 0x14: key = KEY_T;      break;
        /* Left Control (0xE0 0x1D, the right-hand one, is not this case). */
        case 0x1D: key = KEY_CTRL;   break;
        default: break;
        }
    }
    if (key < 0) return;
    kbd_key(key, make);
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
    memset(g_dirHeld, 0, sizeof g_dirHeld);
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
    g_pitAcc = 0;
    g_ms = 0;
    g_msFrac = 0;
    clock_setup();                          /* which mode channel 0 runs in, and its halves */
    clock_calibrate();
    /* The clocks start after the calibration second, and pit_clock_read() takes its first sample. */
    g_lastPit = pit_clock_read();
    g_rtc0 = rtc_secs();
    mouse_init();
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

u32 plat_has_fullscreen(void)
{
    return 0;                                   /* no window mode: no [VIDEO] settings either */
}

/* No bars to fill: VGA mode 13h is the screen, so the border art has nothing to paint on. */
void plat_set_border(u32 on)
{
    (void)on;
}

/* No window and no mode to choose, so there is no size to set or to write back. */
void plat_set_window_size(u32 w, u32 h)
{
    (void)w;
    (void)h;
}

u32 plat_window_size(u32 *w, u32 *h)
{
    (void)w;
    (void)h;
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
           "music=10\r\n"
           "\r\n"
           "[GAME]\r\n"
           "; The language of the game's own text: en = the original's English (the default).\r\n"
           "; Any other code reads LANG\\<code>.CSV next to the game (de = German), which holds\r\n"
           "; every translated line - the interface and the port's own screens too.\r\n"
           "language=en\r\n";
}

void plat_shutdown(void)
{
    kbd_release();
    set_video_mode((u32)g_videoMode);
}

u8 *plat_framebuffer(void)
{
    /* Mode 13h is linear 320x200x256, exactly the runtime's chunky layout - but the frame is
     * composed here and not in video memory, because the display is reading that memory the whole
     * time the frame is drawn (see g_screen). plat_present puts it there in one copy. */
    return g_screen;
}

/* Mode 13h is a fixed 320x200: it has no room for the screen a scene programs when that screen is
 * larger (the chicken race's narration page is 368x216 across the overscan). Answering 0 tells the
 * front end to fit the picture into the mode; the Win32 build, whose window follows the picture,
 * answers with the stride instead. */
u32 plat_set_framebuffer_size(u32 w, u32 h)
{
    (void)w; (void)h;
    return 0;
}

/* Only entries the DAC does not already hold are written: the presenter hands over all 256 every
 * frame, and the palette changes a few times per second at most. g_dac is the truth about the DAC
 * (it starts "unknown" after a mode set), so this is safe for black as well. */
static void dac_update(void)
{
    u32 i;

    if (!g_palUp) return;
    g_palUp = 0;
    if (memcmp(g_pal, g_dac, sizeof g_pal) == 0) return;
    for (i = 0; i < PAL_ENTRIES; i++) {
        const u8 *src = g_pal + i * 3;
        u8 *dst = g_dac + i * 3;

        if (memcmp(dst, src, 3) == 0) continue;
        memcpy(dst, src, 3);
        outp(0x3C8, i);
        outp(0x3C9, (unsigned)(src[0] >> 2));   /* the DAC is 6 bits per gun */
        outp(0x3C9, (unsigned)(src[1] >> 2));
        outp(0x3C9, (unsigned)(src[2] >> 2));
    }
}

/* The frame goes to the display whole, with the palette it was drawn with. The DAC first: the
 * title installs its full 256-entry table every frame and then its own pens over it, and a DAC
 * write is the one change a running display shows at once, so the table reaches it once, as the
 * state the frame was drawn with, and never as the intermediate one. */
void plat_present(void)
{
    dac_update();
    memcpy((void *)VGA_MEMORY, g_screen, SCREEN_PIXELS);
}

/* The palette is noted, not programmed: an entry written between two composes would be seen on
 * the frame the display is showing, in the colours of the frame being drawn. */
void plat_set_palette(u32 first, u32 count, const u8 *rgb)
{
    if (rgb == 0 || first >= PAL_ENTRIES) return;
    if (first + count > PAL_ENTRIES) count = PAL_ENTRIES - first;
    memcpy(g_pal + first * 3, rgb, (size_t)count * 3);
    g_palUp = 1;
}

/* --- Sound Blaster ---------------------------------------------------------------------------
 * The runtime mixes Paula into interleaved s16 stereo (audio.h) and hands it over in 512-frame
 * chunks; this layer plays it on whatever the BLASTER variable names, at the rate the front end
 * asked for.
 *
 *   BLASTER=A220 I5 D1 H5 T6    ->  base 0x220, IRQ 5, 8-bit DMA 1, 16-bit DMA 5, SB16
 *
 * The IRQ is parsed but not hooked: the card runs in auto-init DMA over a ring in conventional
 * memory and the writer asks the DMA controller where the playback is (the 8237's current-address
 * register), so nothing has to run in an interrupt at all - the game spends most of its time with
 * interrupts off in translated code.
 *
 * Formats, chosen from the DSP version rather than the T token (which users get wrong):
 *   DSP >= 4.00 (SB16)   16-bit stereo at the mixer's rate - copied straight, the card is
 *                        programmed with that rate.
 *   DSP 3.x (Pro)         8-bit stereo at 22050 Hz - each device frame is the average of the
 *                        mixer frames it spans (two of them when the mixer runs at 44100).
 *   DSP 1.x/2.x (mono)    8-bit mono   at 22050 Hz, averaged the same way.
 * Without the variable, or when the card does not answer, no device is opened and the mixer never
 * starts (rt_time_slice then keeps its cheap path as well).
 */

#define DSP_RESET(base)  ((u16)((base) + 0x06))
#define DSP_READ(base)   ((u16)((base) + 0x0A))
#define DSP_WRITE(base)  ((u16)((base) + 0x0C))
#define DSP_WSTATUS(base) ((u16)((base) + 0x0C))  /* bit 7 set while the DSP is busy */
#define DSP_STATUS(base) ((u16)((base) + 0x0E))   /* bit 7 set when a byte can be read */
#define DSP_MIXER(base)  ((u16)((base) + 0x04))
#define DSP_ACK16(base)  ((u16)((base) + 0x0F))   /* SB16: acknowledges its 16-bit IRQ */

/* 8237 DMA: the 8-bit controller's registers, and the 16-bit one's (slave). The slave's registers
 * are double-spaced, so its clear-flip-flop is 0xD8 and 0xDC clears every mask instead. */
static const u8 g_page8[4]  = { 0x87, 0x83, 0x81, 0x82 };
static const u8 g_page16[4] = { 0x8F, 0x8B, 0x89, 0x8A };
#define DMA8_MASK      0x0Au
#define DMA8_MODE      0x0Bu
#define DMA8_CLEAR_FF  0x0Cu
#define DMA16_MASK     0xD4u
#define DMA16_MODE     0xD6u
#define DMA16_CLEAR_FF 0xD8u

/* 32 KB of audio = 372 ms at 22,050 Hz stereo. It has to absorb the writer's per-frame burst
 * (1764 B every 20 ms) and DOSBox's mixer blocks (1024 samples = 46 ms), and a frame can be a few
 * milliseconds late without the card noticing. The allocator takes twice the ring so it can step
 * over a DMA page boundary, so this costs 64 KB of the 583 KB of base memory left; the 64 KB window
 * an 8-bit channel needs is exactly this size, which is why it is the largest that is safe there. */
#define SB_BUF_BYTES  32768u           /* ring in conventional memory: a power of two */
#define SB_MAX_FRAMES (SB_BUF_BYTES / 2u)

static struct
{
    u16 base;
    u8  irq, dma8, dma16;
    u8  major, minor;
    int open;
    int bits;                          /* 8 or 16 */
    int stereo;
    u32 rate;                          /* device frames per second */
    u32 decim;                         /* mixer frames per device frame */
    u32 bytesFrame;                    /* device bytes per device frame */
    u8 *buf;                           /* DMA ring, in the aligned low-memory window */
    u16 sel;                           /* DPMI selector for that block, 0 when none */
    u32 allocSeg;                      /* its real-mode segment */
    u32 phys;                          /* its physical address (the aligned window) */
    u32 written;                       /* bytes handed to the ring (free-running) */
    u32 consumed;                      /* bytes the card is due to have taken */
    u32 lastConsMs;                    /* g_ms of the last consumption step */
    u32 lastPos;                       /* last DMA position read */
    u32 played;                        /* bytes the card has played (free-running) */
    u32 dropped;                       /* frames the ring could not take */
    u32 lastServed;                    /* played when the card was last serviced */
    u32 stalls;                        /* frames the card made no progress */
    u32 resumes;                       /* times a halted transfer was nudged */
    u32 starved;                       /* frames that began with an empty ring */
    int posValid;
} g_sb;

static u8 g_stage[SB_MAX_FRAMES];      /* conversion scratch, 8-bit paths */

static void sb_udelay(void)
{
    int i;
    for (i = 0; i < 32; i++) (void)inp(0x80);      /* ~3 us of I/O, the DSP's reset time */
}

/* Waits for the DSP to accept a byte (write-status bit 7 clear), returns 0 on timeout. */
static int sb_write(u8 v)
{
    long guard = 100000L;

    while (guard-- > 0 && (inp(DSP_WSTATUS(g_sb.base)) & 0x80u) != 0) ;
    if (guard < 0) return 0;
    outp(DSP_WRITE(g_sb.base), v);
    return 1;
}

/* Waits for a byte from the DSP (status bit 7 set), or -1. */
static int sb_read(void)
{
    long guard = 100000L;

    while (guard-- > 0 && (inp(DSP_STATUS(g_sb.base)) & 0x80u) == 0) ;
    if (guard < 0) return -1;
    return (int)inp(DSP_READ(g_sb.base));
}

/* The reset handshake: 1 to the reset port, 0 three microseconds later, then 0xAA from the DSP. */
static int sb_reset(void)
{
    outp(DSP_RESET(g_sb.base), 1);
    sb_udelay();
    outp(DSP_RESET(g_sb.base), 0);
    sb_udelay();
    return sb_read() == 0xAA;
}

/* Parses BLASTER into g_sb; returns 0 when the variable is missing or names no base address. */
static int sb_parse(void)
{
    const char *s = getenv("BLASTER");
    int haveBase = 0;

    g_sb.irq = 5; g_sb.dma8 = 1; g_sb.dma16 = 5;
    if (s == 0) return 0;
    while (*s != 0)
    {
        char key = *s++;
        if (key == ' ' || key == '\t' || key == ',') continue;
        switch (key)
        {
        case 'A': case 'a': g_sb.base = (u16)strtoul(s, (char **)&s, 16); haveBase = 1; break;
        case 'I': case 'i': g_sb.irq   = (u8)strtoul(s, (char **)&s, 10); break;
        case 'D': case 'd': g_sb.dma8  = (u8)strtoul(s, (char **)&s, 10); break;
        case 'H': case 'h': g_sb.dma16 = (u8)strtoul(s, (char **)&s, 10); break;
        case 'T': case 't': (void)strtoul(s, (char **)&s, 10); break;
        case 'P': case 'p': (void)strtoul(s, (char **)&s, 10); break;
        default: return 0;                       /* not a BLASTER string: do not guess */
        }
    }
    if (!haveBase || g_sb.base < 0x200u) return 0;
    if (g_sb.dma8 > 3u) g_sb.dma8 = 1;
    if (g_sb.dma16 < 5u || g_sb.dma16 > 7u) g_sb.dma16 = 5;
    return 1;
}

/* 32-bit physical address of a real-mode paragraph address. */
static u32 sb_phys(u32 seg) { return (u32)seg << 4; }

/* Allocates the ring in conventional memory. A DMA channel cannot carry into the next page, so the
 * window has to sit inside one 128 KB block (16-bit) or 64 KB block (8-bit); one spare window is
 * enough to step over a boundary, which keeps the footprint at twice the ring instead of the
 * 128 KB a plain 128 KB alignment would cost on a machine that has little base memory left. */
/* Allocates the ring in base memory. DPMI 0100h returns a real-mode block - the only memory an
 * 8237 can reach - plus a selector whose base locates it, which is what the writes use. A channel
 * cannot carry into the next page, so the window also has to sit inside one 128 KB block (16-bit)
 * or 64 KB block (8-bit); one spare window is enough to step over a boundary. */
/* Conventional memory the BIOS reports for this machine, in KB (640 on any PC). */
u32 plat_base_total_kb(void)
{
    union REGS r;

    r.x.eax = 0;
    int386(0x12, &r, &r);
    return (u32)(r.x.eax & 0xFFFFu);
}

/* Largest free block of base memory, in KB: INT 21h AH=48h with an impossible size always fails
 * and leaves the largest block it could have served in BX. Base memory is what an 8237 can reach,
 * so this is the budget the DMA ring has to come out of. */
u32 plat_free_base_kb(void)
{
    union REGS r;

    r.h.ah = 0x48;
    r.x.ebx = 0xFFFFu;
    int386(0x21, &r, &r);
    return r.x.cflag ? (u32)(r.x.ebx & 0xFFFFu) / 64u : 0u;
}

static int sb_alloc(u32 bytes, u32 boundary)
{
    union REGS r;
    u32 selBase, base;

    r.x.eax = 0x0100u;
    r.x.ebx = (bytes * 2u + 15u) >> 4;
    int386(0x31, &r, &r);
    if (r.x.cflag) return 0;
    g_sb.allocSeg = (u32)(r.x.eax & 0xFFFFu);      /* real-mode segment */
    g_sb.sel = (u16)(r.x.edx & 0xFFFFu);           /* selector for the same block */

    r.x.eax = 0x0006u;                             /* selector base -> CX:EDX */
    r.x.ebx = (u32)g_sb.sel;
    int386(0x31, &r, &r);
    selBase = ((u32)r.x.ecx << 16) | (r.x.edx & 0xFFFFu);
    base = r.x.cflag ? sb_phys(g_sb.allocSeg) : selBase;

    g_sb.phys = (base + bytes - 1u) & ~(bytes - 1u);
    if ((g_sb.phys & ~(boundary - 1u)) != ((g_sb.phys + bytes - 1u) & ~(boundary - 1u)))
        g_sb.phys += bytes;
    g_sb.buf = (u8 *)g_sb.phys;                  /* DOS/32A maps base memory 1:1 */
    return (g_sb.phys + bytes) <= 0x100000u;     /* the 8237 can only reach base memory */
}

static void sb_free_mem(void)
{
    if (g_sb.sel != 0)
    {
        union REGS r;

        r.x.eax = 0x0101u;                         /* DPMI: free DOS memory */
        r.x.edx = (u32)g_sb.sel;
        int386(0x31, &r, &r);
    }
    g_sb.sel = 0;
    g_sb.allocSeg = 0;
    g_sb.buf = 0;
}

/* The card raises an IRQ per block and holds the line until the DSP is read. Nothing here runs in
 * an interrupt - the writer polls - so the line is masked in the 8259 (the same way the keyboard's
 * IRQ1 is) and acknowledged by the status read in sb_played(). The mask is restored on close. */
static int g_sbIrqMasked;
static u8  g_sbIrqOld, g_sbIrqHighOld;

static void sb_irq_take(void)
{
    if (g_sbIrqMasked || g_sb.irq > 15u) return;
    if (g_sb.irq < 8u)
    {
        g_sbIrqOld = (u8)inp(0x21);
        outp(0x21, (unsigned)(g_sbIrqOld | (1u << g_sb.irq)));
    }
    else
    {
        g_sbIrqHighOld = (u8)inp(0xA1);
        outp(0xA1, (unsigned)(g_sbIrqHighOld | (1u << (g_sb.irq - 8u))));
    }
    g_sbIrqMasked = 1;
}

static void sb_irq_release(void)
{
    if (!g_sbIrqMasked) return;
    if (g_sb.irq < 8u) outp(0x21, (unsigned)g_sbIrqOld);
    else               outp(0xA1, (unsigned)g_sbIrqHighOld);
    g_sbIrqMasked = 0;
}

/* Programs the 8237 for auto-init playback of the whole ring. */
static void sb_dma_start(void)
{
    u32 addr = g_sb.phys;
    u32 count = g_sb.bits == 16 ? (SB_BUF_BYTES / 2u) - 1u : SB_BUF_BYTES - 1u;

    if (g_sb.bits == 16)
    {
        u8 ch = g_sb.dma16;
        outp(DMA16_MASK, 0x00u);                   /* the cascade channel must be open */
        outp(DMA16_MASK, (unsigned)(0x04u | (ch - 4u)));
        outp(DMA16_CLEAR_FF, 0);
        outp(DMA16_MODE, (unsigned)(0x58u | (ch - 4u)));
        outp((u16)(0xC0u + (u16)(ch - 4u) * 4u), (unsigned)((addr >> 1) & 0xFFu));
        outp((u16)(0xC0u + (u16)(ch - 4u) * 4u), (unsigned)(((addr >> 1) >> 8) & 0xFFu));
        outp(DMA16_CLEAR_FF, 0);
        outp((u16)(0xC2u + (u16)(ch - 4u) * 4u), (unsigned)(count & 0xFFu));
        outp((u16)(0xC2u + (u16)(ch - 4u) * 4u), (unsigned)((count >> 8) & 0xFFu));
        outp(g_page16[ch - 4u], (unsigned)((addr >> 16) & 0xFEu));
        outp(DMA16_MASK, (unsigned)(ch - 4u));
    }
    else
    {
        u8 ch = g_sb.dma8;
        outp(DMA8_MASK, (unsigned)(0x04u | ch));
        outp(DMA8_CLEAR_FF, 0);
        outp(DMA8_MODE, (unsigned)(0x58u | ch));
        outp((u16)(0x00u + (u16)ch * 2u), (unsigned)(addr & 0xFFu));
        outp((u16)(0x00u + (u16)ch * 2u), (unsigned)((addr >> 8) & 0xFFu));
        outp(DMA8_CLEAR_FF, 0);
        outp((u16)(0x01u + (u16)ch * 2u), (unsigned)(count & 0xFFu));
        outp((u16)(0x01u + (u16)ch * 2u), (unsigned)((count >> 8) & 0xFFu));
        outp(g_page8[ch], (unsigned)((addr >> 16) & 0xFFu));
        outp(DMA8_MASK, (unsigned)ch);
    }
}

/* Acknowledge the block interrupt. The DSP raises one per block and DOSBox's Sound Blaster stops
 * the transfer when the previous one is still unacknowledged, so the ack has to arrive within a
 * block - 1024 samples = 23 ms at the default mixer setting. Acknowledging once per frame (20 ms)
 * rides that edge and every late ack costs a halt plus a restart, audible as a click. The read is
 * harmless, so it also happens in the idle frame wait, about once a millisecond. */
static void sb_ack(void)
{
    (void)inp(DSP_STATUS(g_sb.base));
    if (g_sb.bits == 16) (void)inp(DSP_ACK16(g_sb.base));
}

/* Where the card is reading, in bytes from the start of the ring. The 8237 reports a 16-bit
 * address (words for a 16-bit channel); the ring is aligned so that those 16 bits cover it. */
static u32 sb_dma_pos(void)
{
    u32 addr;

    if (g_sb.bits == 16)
    {
        u8 ch = g_sb.dma16;
        u16 port = (u16)(0xC0u + (u16)(ch - 4u) * 4u);
        outp(DMA16_CLEAR_FF, 0);
        addr = (u32)inp(port);
        addr |= (u32)inp(port) << 8;
        return (addr << 1) & (SB_BUF_BYTES - 1u);          /* phys is 128 KB aligned */
    }
    {
        u8 ch = g_sb.dma8;
        u16 port = (u16)(0x00u + (u16)ch * 2u);
        outp(DMA8_CLEAR_FF, 0);
        addr = (u32)inp(port);
        addr |= (u32)inp(port) << 8;
        return addr & (SB_BUF_BYTES - 1u);                 /* phys is 64 KB aligned */
    }
}

/* Bytes the card has consumed since the ring was handed to it. Reading the status ports also
 * acknowledges the block interrupt, which is what releases the (masked) IRQ line. */
static u32 sb_played(void)
{
    u32 pos;

    sb_ack();
    pos = sb_dma_pos();
    if (!g_sb.posValid) { g_sb.lastPos = pos; g_sb.posValid = 1; return g_sb.played; }
    g_sb.played += (pos - g_sb.lastPos) & (SB_BUF_BYTES - 1u);
    g_sb.lastPos = pos;
    return g_sb.played;
}

/* Hands converted bytes to the ring, dropping what does not fit (and counting it). */
static void sb_service(void);

/* The card consumes in real time, the mixer produces in emulated time; waiting here is what keeps
 * the two in step, and it is how the Windows build behaves too (the wave device blocks there).
 *
 * What the card has taken comes from the rate we programmed and the 8254 clock, not from the 8237
 * position register: that register counts in units the card chooses and read back a factor of two
 * away from the byte offset, which made every earlier attempt at pacing run the emulator at half
 * speed. A card that stops consuming must not hang the game, so the wait is bounded - after that
 * the samples are dropped and counted. */
static u32 sb_consumed(void)
{
    u32 dt;

    pit_update();                      /* a stale millisecond clock would overfill the ring */
    dt = g_ms - g_sb.lastConsMs;
    g_sb.lastConsMs = g_ms;
    g_sb.consumed += (g_sb.rate * g_sb.bytesFrame * dt) / 1000u;
    if ((s32)(g_sb.consumed - g_sb.written) > 0) g_sb.consumed = g_sb.written;
    return g_sb.consumed;
}

static void sb_wait_for_room(u32 bytes)
{
    u32 start = g_ms;

    while ((s32)(g_sb.written - sb_consumed()) + (s32)bytes > (s32)SB_BUF_BYTES)
    {
        pit_update();
        if (g_ms - start >= 30u) return;
    }
}

static void sb_put(const u8 *src, u32 bytes)
{
    u32 played = sb_consumed();
    s32 used = (s32)(g_sb.written - played);
    u32 free;

    if (used < 0)
    {
        /* The card drained the ring and is replaying what is left: the write pointer snaps to the
         * read pointer instead of running backwards (which would make "used" enormous). */
        g_sb.written = played;
        used = 0;
    }
    free = (u32)used >= SB_BUF_BYTES ? 0u : SB_BUF_BYTES - (u32)used;

    if (bytes > free)
    {
        g_sb.dropped += (bytes - free) / g_sb.bytesFrame;
        bytes = free;
    }
    while (bytes > 0)
    {
        u32 at = g_sb.written & (SB_BUF_BYTES - 1u);
        u32 n = SB_BUF_BYTES - at;

        if (n > bytes) n = bytes;
        memcpy(g_sb.buf + at, src, n);
        src += n;
        bytes -= n;
        g_sb.written += n;
    }
    if (g_sb.major < 2) sb_service();      /* single-cycle transfers need re-arming */
}

/* Issues the transfer command for the format in use. The whole ring is one block, so an auto-init
 * transfer loops it; DSP 1.x cards have no auto-init, which is why their block is re-issued. */
static int sb_start_stream(void)
{
    if (g_sb.bits == 16)
    {
        u32 samples = (SB_BUF_BYTES / 2u) - 1u;

        if (!sb_write(0xB6)) return 0;
        sb_write((u8)(0x10u | (g_sb.stereo ? 0x20u : 0x00u)));   /* signed, stereo */
        sb_write((u8)(samples & 0xFFu));
        sb_write((u8)((samples >> 8) & 0xFFu));
    }
    else
    {
        u32 frames = (SB_BUF_BYTES / g_sb.bytesFrame) - 1u;

        if (!sb_write(0x48)) return 0;
        sb_write((u8)(frames & 0xFFu));
        sb_write((u8)((frames >> 8) & 0xFFu));
        if (!sb_write(g_sb.major >= 2 ? 0x1C : 0x14)) return 0;
    }
    return 1;
}

/* Called once per frame. An SB16 stops playing when a block ends while the previous block
 * interrupt is still unacknowledged, so the status port is read here whatever the game is doing;
 * a transfer that stays stopped is restarted. */
static void sb_service(void)
{
    if (!g_sb.open) return;
    if ((s32)(g_sb.written - sb_consumed()) <= 0) g_sb.starved++;
    (void)sb_played();
    if (g_sb.written - g_sb.played < SB_BUF_BYTES) { g_sb.stalls = 0; return; }
    if (g_sb.played != g_sb.lastServed) { g_sb.lastServed = g_sb.played; g_sb.stalls = 0; return; }
    if (++g_sb.stalls < (g_sb.major >= 2 ? 4u : 1u)) return;   /* ~80 ms of silence, then recover */
    g_sb.stalls = 0;
    if (g_sb.major >= 2) sb_write(g_sb.bits == 16 ? 0xD6 : 0xD4);   /* continue the halted transfer */
    else sb_start_stream();
    g_sb.resumes++;
}

u32 plat_audio_open(u32 rate)
{
    int ver;
    u32 tcUsed = 0;
    u32 freeBefore;

    memset(&g_sb, 0, sizeof g_sb);
    if (!sb_parse())
    {
        printf("audio: no BLASTER variable - sound disabled\n");
        return 0;
    }
    if (!sb_reset())
    {
        printf("audio: no Sound Blaster answered at %03X - sound disabled\n", g_sb.base);
        return 0;
    }
    ver = sb_write(0xE1) ? sb_read() : -1;
    if (ver < 0) { printf("audio: DSP version read failed - sound disabled\n"); return 0; }
    g_sb.major = (u8)ver;
    g_sb.minor = (u8)sb_read();

    if (g_sb.major >= 4)
    {
        /* SB16: 16-bit stereo, and the card is programmed with the rate the mixer produces. */
        g_sb.bits = 16; g_sb.stereo = 1;
        g_sb.rate = (rate != 0u) ? rate : 44100u;
    }
    else if (g_sb.major == 3) { g_sb.bits = 8; g_sb.stereo = 1; g_sb.rate = 22050u; }
    else { g_sb.bits = 8; g_sb.stereo = 0; g_sb.rate = 22050u; }
    /* Mixer frames per device frame: the older cards only do 22050, so a faster mixer is
     * decimated. A card at the mixer's rate takes every frame. */
    g_sb.decim = (rate > g_sb.rate) ? (rate / g_sb.rate) : 1u;
    g_sb.bytesFrame = (u32)(g_sb.bits / 8) * (u32)(g_sb.stereo ? 2 : 1);

    freeBefore = plat_free_base_kb();
    if (!sb_alloc(SB_BUF_BYTES, g_sb.bits == 16 ? 0x20000u : 0x10000u))
    {
        printf("audio: no %u bytes of base memory for the DMA ring - sound disabled\n",
               (unsigned)(SB_BUF_BYTES * 2u));
        sb_free_mem();
        return 0;
    }
    printf("audio: DMA ring %u B, %u KB of base memory (%u -> %u KB free)\n",
           (unsigned)SB_BUF_BYTES, freeBefore - plat_free_base_kb(),
           freeBefore, plat_free_base_kb());
    /* Silence: unsigned 8-bit silence is 0x80, signed 16-bit silence is 0. */
    memset(g_sb.buf, g_sb.bits == 8 ? 0x80 : 0x00, SB_BUF_BYTES);

    /* Speaker, rate, block size, then the DMA channel, then the transfer: the order every real
     * driver uses. From here on a failure has to undo the ring and the IRQ mask. */
    sb_write(0xD1);
    {
        /* Two rate commands, one per DSP generation, and never both: an SB16 takes 0x41 with the
         * exact rate, the earlier cards only know the time constant 0x40. Sending 0x40 first and
         * then 0x41 halves the SB16's rate (measured: 89,400 B/s instead of 176,400), and 0x41 is
         * an unknown command on a DSP 1.x-3.x. The time constant is a byte rate on the old cards -
         * they halve it themselves for stereo - so it takes the bytes per frame as a factor. */
        if (g_sb.major >= 4)
        {
            if (!sb_write(0x41)) goto fail;
            sb_write((u8)(g_sb.rate >> 8));
            sb_write((u8)(g_sb.rate & 0xFFu));
        }
        else
        {
            u32 target = g_sb.rate * g_sb.bytesFrame;
            u32 tc = 256u - ((1000000u + target / 2u) / target);

            if (!sb_write(0x40)) goto fail;
            sb_write((u8)(tc & 0xFFu));
            tcUsed = tc;
        }
        if (g_sb.major == 3)
        {
            /* Pro: the CT1345 mixer's register 0x0E bit 1 is the stereo switch. */
            outp(DSP_MIXER(g_sb.base), 0x0E);
            sb_udelay();
            outp(DSP_MIXER(g_sb.base) + 1, (unsigned)(g_sb.stereo ? 0x02 : 0x00));
            sb_udelay();
        }
    }

    /* The block is the whole ring, so auto-init loops it. DSP 1.x cards have no auto-init and get a
     * single-cycle block that sb_service() re-issues. */
    sb_dma_start();
    sb_irq_take();
    if (!sb_start_stream()) goto fail;

    /* The ring starts full of silence, so the write pointer starts one ring ahead of the read
     * pointer and the card has a full ring to work through before it needs anything from us. */
    g_sb.written = SB_BUF_BYTES;
    g_sb.consumed = 0;
    g_sb.lastConsMs = g_ms;

    g_sb.open = 1;
    g_sb.posValid = 0;
    printf("audio: Sound Blaster %u.%02u at %03X, IRQ %u, DMA %u/%u - %lu Hz %u-bit %s (tc %lu)\n",
           (unsigned)g_sb.major, (unsigned)g_sb.minor, g_sb.base, (unsigned)g_sb.irq,
           (unsigned)g_sb.dma8, (unsigned)g_sb.dma16, (unsigned long)g_sb.rate,
           (unsigned)g_sb.bits, g_sb.stereo ? "stereo" : "mono", (unsigned long)tcUsed);
    return 1;

fail:
    sb_irq_release();
    sb_free_mem();
    printf("audio: the DSP at %03X did not take the setup - sound disabled\n", g_sb.base);
    return 0;
}

void plat_audio_close(void)
{
    if (g_sb.open)
    {
        sb_write(0xD3);                                /* speaker off */
        sb_write(0xDA);                                /* stop auto-init 8-bit */
        sb_write(0xD9);                                /* stop auto-init 16-bit */
        if (g_sb.resumes != 0)
            printf("audio: resumed a stopped transfer %lu time(s)\n",
                   (unsigned long)g_sb.resumes);
    }
    sb_irq_release();
    sb_free_mem();
    g_sb.open = 0;
}

/* --- the --sbtest probe -------------------------------------------------------------------- */

/* Sets up one format, lets the card read the ring for ~400 ms with nothing else touching it, and
 * reports what it actually consumed. The 8237 position register reads back HALF the byte rate, so
 * the numbers need doubling: at 44,100 Hz mono 16-bit expect ~44,000 here and stereo ~88,000. A
 * stereo case that matches the mono one means the card never took the stereo bit. */
static u32 probe_case(const char *title, int bits16, u8 cmd, u8 mode, u32 rate, int mixerStereo)
{
    u32 t0, last, units = 0, elapsed = 0, mask = SB_BUF_BYTES - 1u, len;
    int i;

    printf("%-48s ", title);
    if (!sb_reset()) { printf("no DSP\n"); return 0; }

    g_sb.bits = bits16 ? 16 : 8;
    g_sb.stereo = 1;
    g_sb.bytesFrame = (u32)(bits16 ? 4 : 2);
    g_sb.played = 0;
    g_sb.written = 0;
    g_sb.posValid = 0;

    sb_write(0xD1);                                    /* speaker on */
    if (rate != 0u)
    {
        if (g_sb.major >= 4)                           /* SB16: a plain sample rate */
        {
            sb_write(0x41);
            sb_write((u8)(rate >> 8));
            sb_write((u8)(rate & 0xFFu));
        }
        else                                           /* earlier cards: a time constant */
        {
            sb_write(0x40);
            sb_write((u8)(256u - (1000000u / rate)));
        }
    }
    if (mixerStereo >= 0)
    {
        outp(DSP_MIXER(g_sb.base), 0x0E);
        sb_udelay();
        outp(DSP_MIXER(g_sb.base) + 1, (unsigned)(mixerStereo ? 0x02u : 0x00u));
        sb_udelay();
    }

    memset(g_sb.buf, bits16 ? 0x00 : 0x80, SB_BUF_BYTES);
    sb_dma_start();

    len = (bits16 ? (SB_BUF_BYTES / 2u) : SB_BUF_BYTES) - 1u;
    if (bits16 || cmd == 0xC6)                         /* commands that carry mode and length */
    {
        sb_write(cmd);
        sb_write(mode);
        sb_write((u8)(len & 0xFFu));
        sb_write((u8)((len >> 8) & 0xFFu));
    }
    else                                               /* 0x1C: length from 0x48 */
    {
        sb_write(0x48);
        sb_write((u8)(len & 0xFFu));
        sb_write((u8)((len >> 8) & 0xFFu));
        sb_write(cmd);
    }

    pit_update();
    t0 = g_ms;
    last = sb_dma_pos();
    do
    {
        u32 now = sb_dma_pos();

        units += (now - last) & mask;
        last = now;
        (void)inp(DSP_STATUS(g_sb.base));
        (void)inp(DSP_ACK16(g_sb.base));
        pit_update();
        elapsed = g_ms - t0;
    } while (elapsed < 400u);

    sb_write(0xD0);                                    /* halt */
    sb_write(0xD5);
    sb_write(0xDA);                                    /* exit auto-init */
    sb_write(0xD9);
    sb_write(0xD3);                                    /* speaker off */

    if (elapsed == 0u) elapsed = 1u;
    printf("%lu byte/s over %lu ms\n", (unsigned long)(units * 1000u / elapsed),
           (unsigned long)elapsed);
    for (i = 0; i < 1; i++) ;                          /* keep the compiler quiet about i */
    return units * 1000u / elapsed;
}

/* Same as probe_case, but sets the rate with the time constant command 0x40 (the pre-SB16 way,
 * which an SB16 still honours) and optionally sends 0x41 twice. */
static u32 probe_rate_style(const char *title, int style, u32 rate)
{
    u32 t0, last, units = 0, elapsed = 0, len;

    printf("%-48s ", title);
    if (!sb_reset()) { printf("no DSP\n"); return 0; }
    g_sb.bits = 16;
    g_sb.stereo = 1;
    g_sb.bytesFrame = 4;
    g_sb.played = 0;
    g_sb.written = 0;
    g_sb.posValid = 0;

    sb_write(0xD1);
    if (style == 1)                                    /* 0x40 + time constant */
    {
        u8 tc = (u8)(256u - (1000000u / rate));

        sb_write(0x40);
        sb_write(tc);
        printf("[tc %u] ", (unsigned)tc);
    }
    else                                               /* 0x41 + rate, twice */
    {
        sb_write(0x41);
        sb_write((u8)(rate >> 8));
        sb_write((u8)(rate & 0xFFu));
        sb_write(0x41);
        sb_write((u8)(rate >> 8));
        sb_write((u8)(rate & 0xFFu));
    }

    memset(g_sb.buf, 0x00, SB_BUF_BYTES);
    sb_dma_start();
    len = (SB_BUF_BYTES / 2u) - 1u;
    sb_write(0xB6);
    sb_write(0x30);
    sb_write((u8)(len & 0xFFu));
    sb_write((u8)((len >> 8) & 0xFFu));

    pit_update();
    t0 = g_ms;
    last = sb_dma_pos();
    do
    {
        u32 now = sb_dma_pos();

        units += (now - last) & (SB_BUF_BYTES - 1u);
        last = now;
        (void)inp(DSP_STATUS(g_sb.base));
        (void)inp(DSP_ACK16(g_sb.base));
        pit_update();
        elapsed = g_ms - t0;
    } while (elapsed < 400u);

    sb_write(0xD0);
    sb_write(0xD5);
    sb_write(0xDA);
    sb_write(0xD9);
    sb_write(0xD3);

    if (elapsed == 0u) elapsed = 1u;
    printf("%lu byte/s over %lu ms\n", (unsigned long)(units * 1000u / elapsed),
           (unsigned long)elapsed);
    return units * 1000u / elapsed;
}

void plat_audio_probe(void)
{
    u32 mono, stereo, mixer, noRate;
    u32 ticks0 = *(volatile u32 *)0x46Cu;            /* BIOS tick count, 18.2 Hz */
    u32 ms0;

    memset(&g_sb, 0, sizeof g_sb);
    if (!sb_parse())
    {
        printf("sbtest: BLASTER is not set, nothing to probe\n");
        return;
    }
    if (!sb_reset() || !sb_write(0xE1))
    {
        printf("sbtest: no Sound Blaster answered at %03X\n", g_sb.base);
        return;
    }
    g_sb.major = (u8)sb_read();
    g_sb.minor = (u8)sb_read();
    printf("sbtest: BLASTER [%s], DSP %u.%02u, IRQ %u, DMA %u/%u\n",
           getenv("BLASTER"), (unsigned)g_sb.major, (unsigned)g_sb.minor, (unsigned)g_sb.irq,
           (unsigned)g_sb.dma8, (unsigned)g_sb.dma16);
    if (!sb_alloc(SB_BUF_BYTES, g_sb.bits == 16 ? 0x20000u : 0x10000u))
    {
        printf("sbtest: no base memory for the ring\n");
        return;
    }
    printf("sbtest: ring at %06lX; position halves the rate, so expect ~44000 B/s mono at 44100\n",
           (unsigned long)g_sb.phys);
    pit_update();
    ms0 = g_ms;

    if (g_sb.major >= 4)
    {
        mono   = probe_case("16-bit auto-init, mode 10h (signed mono)", 1, 0xB6, 0x10, 44100u, -1);
        stereo = probe_case("16-bit auto-init, mode 30h (signed stereo)", 1, 0xB6, 0x30, 44100u, -1);
        mixer  = probe_case("16-bit auto-init, mode 30h, mixer 0Eh stereo", 1, 0xB6, 0x30, 44100u, 1);
        noRate = probe_case("16-bit auto-init, mode 30h, no rate command", 1, 0xB6, 0x30, 0u, -1);
        printf("sbtest: stereo/mono = %lu.%02lu%s (mixer 0Eh: %lu, no-rate: %lu)\n",
               (unsigned long)(mono ? stereo / mono : 0u),
               (unsigned long)(mono ? (stereo % mono) * 100u / mono : 0u),
               (mono != 0u && stereo >= mono * 2u) ? " - stereo is applied" : " - stream is mono",
               (unsigned long)mixer, (unsigned long)noRate);
        probe_rate_style("16-bit stereo, rate via 0x40 time constant", 1, 44100u);
        probe_rate_style("16-bit stereo, 0x41 sent twice", 2, 44100u);
    }
    else
    {
        mono = probe_case("8-bit auto-init 1Ch, mixer 0Eh stereo", 0, 0x1C, 0x00, 22050u, 1);
        stereo = probe_case("8-bit auto-init C6h, mode 20h (stereo)", 0, 0xC6, 0x20, 22050u, -1);
        printf("sbtest: 8-bit byte rates: 1Ch %lu, C6h %lu\n", (unsigned long)mono,
               (unsigned long)stereo);
    }

    /* Both clocks measure the same interval: a case reports half the rate it should when the
     * millisecond clock runs fast, and this line says which of the two is lying. */
    pit_update();
    printf("sbtest: %lu ms by the 8254, %lu ms by the BIOS tick\n", (unsigned long)(g_ms - ms0),
           (unsigned long)((*(volatile u32 *)0x46Cu - ticks0) * 1000u / 182u));

    sb_free_mem();
    g_sb.open = 0;
}

void plat_audio_write(const s16 *frames, u32 count)
{
    u32 out, i, k, step;

    if (!g_sb.open || frames == 0 || count == 0) return;

    step = g_sb.decim;
    if (g_sb.bits == 16 && g_sb.stereo && step == 1)
    {
        /* 16-bit stereo at the mixer's rate: the bytes are already what the card wants. */
        sb_wait_for_room(count * 4u);
        sb_put((const u8 *)frames, count * 4u);
        return;
    }

    out = count / step;
    if (out > SB_MAX_FRAMES) out = SB_MAX_FRAMES;
    sb_wait_for_room(out * g_sb.bytesFrame);
    for (i = 0; i < out; i++)
    {
        const s16 *f = frames + (i * step) * 2;
        int l = 0, r = 0;

        for (k = 0; k < step; k++) { l += (int)f[k * 2]; r += (int)f[k * 2 + 1]; }
        l /= (int)step;
        r /= (int)step;

        if (g_sb.stereo)
        {
            g_stage[i * 2 + 0] = (u8)(((l >> 8) + 128) & 0xFF);
            g_stage[i * 2 + 1] = (u8)(((r >> 8) + 128) & 0xFF);
        }
        else
        {
            g_stage[i] = (u8)((((l + r) / 2) >> 8) + 128);
        }
    }
    sb_put(g_stage, out * g_sb.bytesFrame);
}

u32 plat_audio_dropped(void)
{
    return g_sb.dropped;
}

u32 plat_audio_starved(void)
{
    return g_sb.starved;
}

u32 plat_audio_played(void)
{
    return g_sb.open ? g_sb.written : 0;
}

/* The Sound Blaster's own fault path is sb_service's (a halted transfer is re-issued); there is no
 * second device to reopen and no place to write a log, so these answer with what it counted and do
 * nothing. The host's --audiostall is a waveOut seam and has no DOS counterpart. */
u32 plat_audio_stalls(void) { return g_sb.resumes; }
u32 plat_audio_reopens(void) { return 0; }
void plat_audio_simulate_stall(u32 afterBuffers) { (void)afterBuffers; }
void plat_audio_log(const char *text) { (void)text; }

/* --- mouse --------------------------------------------------------------------------------- */

/* INT 33h, function 0: reset the driver and read whether one is there. Function 2 hides its
 * text/graphics cursor; the port's own arrow is part of the picture and is what the seams use. */
static void mouse_init(void)
{
    union REGS r;

    memset(&r, 0, sizeof r);
    r.x.eax = 0x0000;
    int386(0x33, &r, &r);                       /* DPMI reflects the driver's real-mode vector */
    g_mouse = ((r.x.eax & 0xFFFFu) == 0xFFFFu) ? 1 : 0;
    if (g_mouse) {
        memset(&r, 0, sizeof r);
        r.x.eax = 0x0002;
        int386(0x33, &r, &r);
    }
    printf("icftd: mouse driver %s\n", g_mouse ? "present" : "not present");
}

/* Function 3: position and button state. Mode 13h reports 0..319 x 0..199, the framebuffer's own
 * pixels; the front end maps that onto the picture when the copper list asks for another size. */
static void mouse_poll(void)
{
    union REGS r;

    if (g_mouse != 1) return;
    memset(&r, 0, sizeof r);
    r.x.eax = 0x0003;
    int386(0x33, &r, &r);
    if ((s16)(r.x.ecx & 0xFFFFu) != g_mouseX || (s16)(r.x.edx & 0xFFFFu) != g_mouseY) {
        g_mouseX = (s16)(r.x.ecx & 0xFFFFu);
        g_mouseY = (s16)(r.x.edx & 0xFFFFu);
        g_mouseMoves++;
    }
    g_mouseButtons = (u8)(r.x.ebx & 0x03u);
}

/* --- input and clock ----------------------------------------------------------------------- */

u32 plat_pump(input_state *in)
{
    u32 i;

    kbd_poll();
    mouse_poll();
    for (i = 0; i < KEY_COUNT; i++) {
        in->down[i] = g_keys[i];
        in->pressed[i] = g_make[i];
        g_make[i] = 0;
    }
    in->mouse_x = g_mouseX;
    in->mouse_y = g_mouseY;
    in->mouse_left = (u8)(g_mouseButtons & 1u);
    in->mouse_right = (u8)((g_mouseButtons >> 1) & 1u);
    in->mouse_left_pressed = (u8)((g_mouseButtons & 1u) && !(g_mousePrevButtons & 1u));
    in->mouse_present = (u8)(g_mouse == 1);
    in->mouse_moved = (u8)(g_mouseMoves != g_mouseMovesSeen);
    g_mousePrevButtons = g_mouseButtons;
    g_mouseMovesSeen = g_mouseMoves;
    return 1;
}

void plat_set_frame_hz(u32 hz)
{
    if (hz == 0) hz = 50;
    g_frameHz = hz;
    g_period = g_ticksPerSec / hz;
    if (g_period == 0) g_period = 1;
}

/* Blocks until the next frame boundary on the 8254 clock. Keyboard scanning happens here too:
 * this is where the program spends its idle time, and a scancode must not be overwritten in the
 * controller's one-byte buffer while it waits. */
void plat_frame_sync(void)
{
    u32 lastAck = g_pitCounts;

    for (;;) {
        pit_update();
        if (g_pitAcc < g_period) {
            kbd_poll();
            /* This is idle time: keep the card's block interrupt acknowledged while waiting. */
            if (g_pitCounts - lastAck >= 1193u) { lastAck = g_pitCounts; sb_ack(); }
            continue;
        }
        g_pitAcc -= g_period;
        /* A frame that took far longer than a period (a load, a debugger) does not try to catch
         * up in a burst - that would spin the game through several frames at once. */
        if (g_pitAcc > g_period * 4u) g_pitAcc = 0;
        sb_service();
        return;
    }
}

u32 plat_ticks_ms(void)
{
    pit_update();
    return g_ms;
}

/* --- display rate ---------------------------------------------------------------------------
 * Mode 13h has no refresh of its own beyond the VGA retrace, and the port's overlay is composed
 * into the picture the front end hands over in one copy: docs\display-rate.md leaves the DOS build
 * on that single copy on purpose (its phase 2, item 6), so the service is a no-op here and the
 * panel's rate is reported as unknown. */
u64 plat_now_us(void)
{
    return (u64)plat_ticks_ms() * 1000u;
}

u32 plat_display_hz(void)
{
    return 0;
}

void plat_set_overlay(plat_overlay_fn fn)
{
    (void)fn;
}

u32 plat_overlay_armed(void)
{
    return 0;
}

void plat_display_service(void)
{
}

void plat_display_stats(u32 *frames, u32 *overlays, u32 *hz)
{
    if (frames != 0) *frames = 0;
    if (overlays != 0) *overlays = 0;
    if (hz != 0) *hz = 0;
}

/* The overlay is composed into the picture itself here (plat_overlay_armed answers 0), so its pens
 * are the picture's pens: one table serves both, exactly as it did before the split. */
void plat_set_overlay_palette(u32 first, u32 count, const u8 *rgb)
{
    plat_set_palette(first, count, rgb);
}

/* The VGA's own copy of the picture is the presenter: there is no window and no fallback to name. */
const char *plat_display_backend(void)
{
    return "vga";
}

/* The pointer's position in framebuffer pixels, as the last poll saw it. */
u32 plat_pointer_position(s16 *x, s16 *y)
{
    if (g_mouse != 1) return 0;
    if (x != 0) *x = g_mouseX;
    if (y != 0) *y = g_mouseY;
    return 1;
}

/* The same monotonic clock pit_update() accumulates from, handed to the front end's --perf
 * breakdown; a call here keeps the clock current for the accumulators too. A sample never moves the
 * clock backwards: a reading that would is retried and then dropped, and the next one measures the
 * whole interval (pitclock.h). */
u32 plat_pit_now(void)
{
    return pit_clock_read();
}

/* Input clocks per real second (the CMOS-clock calibration), the factor that turns a --perf segment
 * into the milliseconds plat_ticks_ms reports. */
u32 plat_pit_per_second(void)
{
    return g_ticksPerSec;
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

/* Every file directly in dir (8.3 names, like everything else this layer sees). */
u32 plat_dir_files(const char *dir, plat_dir_visit visit, void *ctx)
{
    char pattern[160];
    struct find_t ff;
    u32 n = 0;

    if (dir == 0 || *dir == 0 || visit == 0) return 0;
    if (strlen(dir) + 5 >= sizeof pattern) return 0;
    sprintf(pattern, "%s\\*.*", dir);
    if (_dos_findfirst(pattern, 0x3Fu, &ff) != 0) return 0;
    do {
        if ((unsigned char)ff.attrib & _A_SUBDIR) continue;
        visit(ff.name, (u32)ff.size, ctx);
        n++;
    } while (_dos_findnext(&ff) == 0);
    _dos_findclose(&ff);
    return n;
}

/* A started DOS program writes to the console, and the console is the game's own screen: in mode
 * 13h a write is INT 10h teletype, which lays the BIOS' 8x8 glyphs into the picture and scrolls
 * the video memory when the cursor leaves the last row. Every diagnostic line the front end, the
 * platform or the runtime prints would therefore damage the screen - the release is a game, so the
 * console is bound to the null device before anything is written.
 *
 * stdout redirected to a file is not the console and keeps its log: `ICFTD.EXE ... > ICFTD.LOG` is
 * how tools\dos-run.ps1 and the DOS checks read the build, so only the console is silenced.
 * INT 21h AH=44h AL=00h (IOCTL, get device information) answers with bit 7 of DX set for a
 * character device and clear for a file. */
void plat_quiet_console(void)
{
    union REGS r;

    memset(&r, 0, sizeof r);
    r.x.eax = 0x4400;
    r.x.ebx = 1;                                /* stdout */
    int386(0x21, &r, &r);
    if ((r.x.edx & 0x0080u) == 0) return;       /* a file: the redirection is the caller's log */
    (void)freopen("NUL", "wb", stdout);
}

/* See platform.h. The line goes to the console device, not to stdout, because the release binds
 * stdout to NUL (plat_quiet_console): DOS's own CON handle is the text screen, and both notices are
 * written before the boot sets mode 13h, so the screen is still there to hold them. A redirected
 * stdout keeps its copy of the line, which is what the checks read. */
void plat_console_line(const char *text)
{
    FILE *con;

    if (text == 0 || *text == 0) return;
    printf("%s\n", text);
    fflush(stdout);
    con = fopen("CON", "w");
    if (con == 0) return;
    fputs(text, con);
    fputc('\n', con);
    fclose(con);
}

/* A DOS program's console is its one screen - there is no separate console window to hide, and the
 * WINDOWS host never runs here; plat_quiet_console is the DOS answer to the same question. */
void plat_console_hide_own(void)
{
}

/* No message box in a DOS program: the console, which is where a started program writes - and
 * which plat_quiet_console has already bound to NUL for a played run. */
void plat_message(const char *title, const char *text)
{
    if (title != 0 && *title != 0) printf("\n%s\n", title);
    if (text != 0) printf("%s\n", text);
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
