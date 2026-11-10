/* icftd-emu: the recompilation runtime bring-up tool.
 *
 *   icftd-emu <image> [<entry>] [<insns>] [--trace] [--watch <pc>] [--data <dir>]
 *             [--window] [--dump <prefix> [frames]]
 *
 * Loads the flattened dshell image at 0, boots the 68000 core and runs. Phase A grows this
 * into the machine that plays the original game; see docs\recomp-architecture.md.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "types.h"
#include "platform.h"
#include "m68k.h"
#include "machine.h"
#include "emu/gfx.h"

#define DEFAULT_ENTRY EMU_ENTRY
#define DEFAULT_A4    EMU_A4

/* --- frame output ------------------------------------------------------------------------- */
/* An 8-bit BMP: the chunky framebuffer is already in palette indices, so a screenshot is the
 * buffer plus the palette. Rows are bottom-up and padded to four bytes. */
static int write_bmp(const char *path, const u8 *fb, int stride, int w, int h, const u8 *pal)
{
    FILE *f;
    u8 head[54];
    u32 image = (u32)(((w + 3) & ~3) * h);
    u32 fileSize = 54 + 1024 + image;
    int i, row;

    f = fopen(path, "wb");
    if (!f) return 0;
    memset(head, 0, sizeof head);
    head[0] = 'B'; head[1] = 'M';
    head[2] = (u8)fileSize; head[3] = (u8)(fileSize >> 8);
    head[4] = (u8)(fileSize >> 16); head[5] = (u8)(fileSize >> 24);
    head[10] = 54; head[11] = 4;
    head[14] = 40;
    head[18] = (u8)w; head[19] = (u8)(w >> 8);
    head[22] = (u8)h; head[23] = (u8)(h >> 8);
    head[26] = 1;
    head[28] = 8;
    head[34] = (u8)image; head[35] = (u8)(image >> 8);
    head[36] = (u8)(image >> 16); head[37] = (u8)(image >> 24);
    fwrite(head, 1, 54, f);
    for (i = 0; i < 256; i++)
    {
        u8 bgr[4];
        bgr[0] = pal[i * 3 + 2]; bgr[1] = pal[i * 3 + 1]; bgr[2] = pal[i * 3 + 0]; bgr[3] = 0;
        fwrite(bgr, 1, 4, f);
    }
    for (row = h - 1; row >= 0; row--)
    {
        fwrite(fb + (u32)row * (u32)stride, 1, (size_t)w, f);
        if ((w & 3) != 0) { u8 pad[4] = { 0, 0, 0, 0 }; fwrite(pad, 1, (size_t)(4 - (w & 3)), f); }
    }
    fclose(f);
    return 1;
}

static u32  g_window;
static char g_prefix[192];
static int  g_shots, g_shotIndex, g_every = 1;
static u8   g_fireShown;          /* last fire state reported, so a press prints once */

/* Once per emulated frame: read the keyboard, follow the window, and hold the machine to 50 Hz.
 *
 * This has to be independent of presenting. The intro presents every frame, but the menus do not -
 * they spin on /FIRE - so pumping input inside on_present() left the window unpumped (and the run
 * unthrottled) for exactly the stretch where the player is expected to press something. */
static void on_frame(emu_machine *m)
{
    input_state in;

    if (!plat_pump(&in)) m->stop = 1;
    if (in.down[KEY_ESCAPE]) m->stop = 1;
    m->fireDown = (u8)(in.down[KEY_FIRE] ? 1u : 0u);
    if (m->fireDown != g_fireShown)
    {
        g_fireShown = m->fireDown;
        printf("emu: /FIRE %s at frame %lu\n", m->fireDown ? "pressed" : "released",
               (unsigned long)m->frame);
    }
    plat_frame_sync();
}

static void on_present(emu_machine *m)
{
    const u8 *fb = emu_gfx_framebuffer();
    const u8 *pal = emu_gfx_palette();
    int w = emu_gfx_width(), h = emu_gfx_height();

    if (g_window)
    {
        u8 *dst = plat_framebuffer();
        int y, cw = w < SCREEN_W ? w : SCREEN_W;

        plat_set_palette(0, 256, pal);
        for (y = 0; y < SCREEN_H; y++)
        {
            if (y >= h) break;
            memcpy(dst + (u32)y * SCREEN_W, fb + (u32)y * EMU_FB_MAX_W, (size_t)cw);
        }
        plat_present();
    }
    if (g_prefix[0] != 0 && g_shotIndex < g_shots)
    {
        if (g_every > 1 && (emu_gfx_frames() % (u32)g_every) != 0u) return;
        char path[256];
        sprintf(path, "%s%04d.bmp", g_prefix, g_shotIndex++);
        write_bmp(path, fb, EMU_FB_MAX_W, w, h, pal);
    }
}

int main(int argc, char **argv)
{
    emu_machine m;
    const char *image = 0;
    u32 entry = DEFAULT_ENTRY;
    long insns = 1000;
    int i, rc = 1, trace = 0, haveEntry = 0, dosLog = 0, progress = 0, dffLog = 0, runForever = 0;
    u32 watch = 0;
    u32 pressAt = 0;
    u32 releaseAt = 0;
    const char *dataDir = "export";

    /* Unbuffered: a run that is killed (see tools\emu-run.ps1) must still leave its log behind up to
     * the point where it stopped, otherwise a hang is indistinguishable from a crash. */
    setvbuf(stdout, NULL, _IONBF, 0);

    for (i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "--trace") == 0) { trace = 1; continue; }
        if (strcmp(argv[i], "--doslog") == 0) { dosLog = 1; continue; }
        if (strcmp(argv[i], "--progress") == 0) { progress = 1; continue; }
        if (strcmp(argv[i], "--dfflog") == 0) { dffLog = 1; continue; }
        if (strcmp(argv[i], "--window") == 0) { g_window = 1; continue; }
        if (strcmp(argv[i], "--run") == 0) { g_window = 1; runForever = 1; continue; }
        if (strcmp(argv[i], "--dump") == 0 && i + 1 < argc)
        {
            strncpy(g_prefix, argv[++i], sizeof(g_prefix) - 1);
            g_shots = 64;
            if (i + 1 < argc && argv[i + 1][0] >= '0' && argv[i + 1][0] <= '9')
                g_shots = (int)strtol(argv[++i], 0, 0);
            if (i + 1 < argc && strcmp(argv[i + 1], "--every") == 0 && i + 2 < argc)
            {
                i++;
                g_every = (int)strtol(argv[++i], 0, 0);
                if (g_every < 1) g_every = 1;
            }
            continue;
        }
        if (strcmp(argv[i], "--watch") == 0 && i + 1 < argc) { watch = (u32)strtoul(argv[++i], 0, 0); continue; }
        if (strcmp(argv[i], "--press") == 0 && i + 1 < argc) { pressAt = (u32)strtoul(argv[++i], 0, 0); continue; }
        if (strcmp(argv[i], "--release") == 0 && i + 1 < argc) { releaseAt = (u32)strtoul(argv[++i], 0, 0); continue; }
        if (strcmp(argv[i], "--data") == 0 && i + 1 < argc) { dataDir = argv[++i]; continue; }
        if (image == 0) { image = argv[i]; continue; }
        if (!haveEntry) { entry = (u32)strtoul(argv[i], 0, 0); haveEntry = 1; continue; }
        insns = strtol(argv[i], 0, 0);
    }
    if (image == 0)
    {
        printf("usage: icftd-emu <image> [<entry>] [<insns>] [--trace] [--watch <pc>] [--data <dir>]\n"
               "                [--window] [--run] [--dump <prefix> [frames]] [--press <frame>]\n"
               "  --run   open the window and play until it is closed (space = fire, esc = quit)\n");
        return 1;
    }
    if (runForever)
    {
        insns = 2000000000L;                 /* ended by the window, not by a budget */
        printf("emu: window mode - space = fire, esc or close = quit\n");
    }

    if (g_window && !plat_init("It Came from the Desert (recomp)"))
    {
        printf("emu: cannot open a window\n");
        return 1;
    }

    if (!emu_init(&m)) { printf("emu: out of memory\n"); return 1; }
    if (!emu_load_image(&m, EMU_IMAGE_BASE, image)) { printf("emu: cannot load %s\n", image); emu_shutdown(&m); return 1; }

    m.trace = trace;
    m.dosLog = dosLog;
    m.progress = progress;
    m.dffLog = dffLog;
    m.watch = watch;
    m.pressAt = pressAt;
    m.releaseAt = releaseAt;
    m.dataDir = dataDir;
    if (g_window) m.on_frame = on_frame;
    if (g_window || g_prefix[0] != 0) m.on_present = on_present;

    printf("emu: %s loaded, entry 0x%lx, A4 0x%lx, %ld instruction(s)\n",
           image, (unsigned long)entry, (unsigned long)DEFAULT_A4, insns);

    emu_boot(entry, DEFAULT_A4);
    {
        u32 pc = emu_run(&m, insns);
        s32 lvo = 0;
        int lib = emu_library_of(&m, pc, &lvo);

        printf("emu: stopped at 0x%lx after %ld instruction(s)\n", (unsigned long)pc,
               (unsigned long)m.insns);
        if (lib >= 0)
            printf("emu: library call, base %d, LVO %ld\n", lib, (long)lvo);
        printf("emu: D0=%08lX D1=%08lX A0=%08lX A1=%08lX A6=%08lX A7=%08lX SR=%04lX\n",
               (unsigned long)m68k_get_reg(0, M68K_REG_D0),
               (unsigned long)m68k_get_reg(0, M68K_REG_D1),
               (unsigned long)m68k_get_reg(0, M68K_REG_A0),
               (unsigned long)m68k_get_reg(0, M68K_REG_A1),
               (unsigned long)m68k_get_reg(0, M68K_REG_A6),
               (unsigned long)m68k_get_reg(0, M68K_REG_A7),
               (unsigned long)m68k_get_reg(0, M68K_REG_SR));
        if (m.mem.bad != 0) printf("emu: %lu access(es) outside the RAM block\n",
                                   (unsigned long)m.mem.bad);
        printf("emu: %lu raster(s) presented\n", (unsigned long)emu_gfx_frames());
        rc = 0;
    }

    emu_shutdown(&m);
    if (g_window) plat_shutdown();
    return rc;
}
