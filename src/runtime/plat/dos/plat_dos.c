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

/* --- Sound Blaster ---------------------------------------------------------------------------
 * The runtime mixes Paula at 44.1 kHz into interleaved s16 stereo (audio.h) and hands it over in
 * 512-frame chunks; this layer plays it on whatever the BLASTER variable names.
 *
 *   BLASTER=A220 I5 D1 H5 T6    ->  base 0x220, IRQ 5, 8-bit DMA 1, 16-bit DMA 5, SB16
 *
 * The IRQ is parsed but not hooked: the card runs in auto-init DMA over a ring in conventional
 * memory and the writer asks the DMA controller where the playback is (the 8237's current-address
 * register), so nothing has to run in an interrupt at all - the game spends most of its time with
 * interrupts off in translated code.
 *
 * Formats, chosen from the DSP version rather than the T token (which users get wrong):
 *   DSP >= 4.00 (SB16)   16-bit stereo at 44100 Hz - the mixer's own rate, copied straight.
 *   DSP 3.x (Pro)         8-bit stereo at 22050 Hz - two mixer frames averaged into one.
 *   DSP 1.x/2.x (mono)    8-bit mono   at 22050 Hz.
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

#define SB_BUF_BYTES  8192u            /* ring in conventional memory: a power of two */
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
    u32 lastPos;                       /* last DMA position read */
    u32 played;                        /* bytes the card has played (free-running) */
    u32 dropped;                       /* frames the ring could not take */
    u32 lastServed;                    /* played when the card was last serviced */
    u32 stalls;                        /* frames the card made no progress */
    u32 resumes;                       /* times a halted transfer was nudged */
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

    (void)inp(DSP_STATUS(g_sb.base));
    if (g_sb.bits == 16) (void)inp(DSP_ACK16(g_sb.base));
    pos = sb_dma_pos();
    if (!g_sb.posValid) { g_sb.lastPos = pos; g_sb.posValid = 1; return g_sb.played; }
    g_sb.played += (pos - g_sb.lastPos) & (SB_BUF_BYTES - 1u);
    g_sb.lastPos = pos;
    return g_sb.played;
}

/* Hands converted bytes to the ring, dropping what does not fit (and counting it). */
static void sb_service(void);

/* The card consumes in real time, the mixer produces in emulated time; waiting here is what keeps
 * the two in step, and it is how the Windows build behaves too (the wave device blocks there). A
 * card that stops consuming must not hang the game, so the wait is bounded - after that the
 * samples are dropped and counted, exactly as before. */
static void sb_wait_for_room(u32 bytes)
{
    u32 start = g_ms;

    while ((s32)(g_sb.written - sb_played()) + (s32)bytes > (s32)SB_BUF_BYTES)
    {
        pit_update();
        if (g_ms - start >= 30u) return;
    }
}

static void sb_put(const u8 *src, u32 bytes)
{
    u32 played = sb_played();
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

    if (g_sb.major >= 4) { g_sb.bits = 16; g_sb.stereo = 1; g_sb.rate = 44100u; g_sb.decim = 1; }
    else if (g_sb.major == 3) { g_sb.bits = 8; g_sb.stereo = 1; g_sb.rate = 22050u; g_sb.decim = 2; }
    else { g_sb.bits = 8; g_sb.stereo = 0; g_sb.rate = 22050u; g_sb.decim = 2; }
    g_sb.bytesFrame = (u32)(g_sb.bits / 8) * (u32)(g_sb.stereo ? 2 : 1);

    if (!sb_alloc(SB_BUF_BYTES, g_sb.bits == 16 ? 0x20000u : 0x10000u))
    {
        printf("audio: no %u bytes of base memory for the DMA ring - sound disabled\n",
               (unsigned)(SB_BUF_BYTES * 2u));
        sb_free_mem();
        return 0;
    }
    /* Silence: unsigned 8-bit silence is 0x80, signed 16-bit silence is 0. */
    memset(g_sb.buf, g_sb.bits == 8 ? 0x80 : 0x00, SB_BUF_BYTES);

    /* Speaker, rate, block size, then the DMA channel, then the transfer: the order every real
     * driver uses. From here on a failure has to undo the ring and the IRQ mask. */
    sb_write(0xD1);
    if (g_sb.major >= 4)
    {
        if (!sb_write(0x41)) goto fail;                 /* SB16 sets the rate directly */
        sb_write((u8)(g_sb.rate >> 8));
        sb_write((u8)(g_sb.rate & 0xFFu));
    }
    else
    {
        u32 dr = g_sb.rate * (g_sb.stereo ? 2u : 1u);

        if (!sb_write(0x40)) goto fail;                 /* older cards: a time constant */
        sb_write((u8)(256u - (1000000u / dr)));
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

    g_sb.open = 1;
    g_sb.posValid = 0;
    printf("audio: Sound Blaster %u.%02u at %03X, IRQ %u, DMA %u/%u - %lu Hz %u-bit %s\n",
           (unsigned)g_sb.major, (unsigned)g_sb.minor, g_sb.base, (unsigned)g_sb.irq,
           (unsigned)g_sb.dma8, (unsigned)g_sb.dma16, (unsigned long)g_sb.rate,
           (unsigned)g_sb.bits, g_sb.stereo ? "stereo" : "mono");
    (void)rate;
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

void plat_audio_write(const s16 *frames, u32 count)
{
    u32 out, i;

    if (!g_sb.open || frames == 0 || count == 0) return;

    if (g_sb.decim == 1)
    {
        /* 16-bit stereo at the mixer's rate: the bytes are already what the card wants. */
        sb_wait_for_room(count * 4u);
        sb_put((const u8 *)frames, count * 4u);
        return;
    }

    out = count / g_sb.decim;
    if (out > SB_MAX_FRAMES) out = SB_MAX_FRAMES;
    sb_wait_for_room(out * g_sb.bytesFrame);
    for (i = 0; i < out; i++)
    {
        const s16 *f0 = frames + (i * g_sb.decim) * 2;
        const s16 *f1 = f0 + 2;
        int l = ((int)f0[0] + (int)f1[0]) / 2;
        int r = ((int)f0[1] + (int)f1[1]) / 2;

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

u32 plat_audio_played(void)
{
    return g_sb.open ? sb_played() : 0;
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
        sb_service();
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
