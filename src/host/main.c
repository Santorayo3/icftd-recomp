/* icftd-recomp: the translated game.
 *
 * The runtime plus src\recomp - the image's own instructions as C - with the vendored 68000 core
 * behind it for the few functions the translator refuses (line-F, BCD, two odd vector calls).
 * Those two front ends run in the SAME machine: the frame budget, the tick and the game's own
 * interrupt servers all live in src\oracle\cpu.c, so the only difference to `icftd-oracle` is who
 * executes the instruction stream.
 *
 * That is the point: `--state` dumps of this build and of the oracle, on one `--input` script,
 * must be identical. Machine state is the acceptance criterion (repo memory); pictures are not.
 *
 *   icftd-recomp [<image>] [<insns>] [--state <prefix> [--every n] [--ram f,f]]
 *                [--input <script>] [--data <dir>] [--progress] [--base <addr>]
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "machine.h"
#include "display.h"
#include "input.h"
#include "state.h"
#include "m68k.h"
/* Two headers are called cpu.h: the 68000 front end's and the translated layer's. */
#include "../oracle/cpu.h"
#include "../recomp/cpu.h"
#include "../recomp/fn_table.h"

#define DEFAULT_IMAGE "export\\code\\dshell4k\\dshell.img"
#define HS_BASE       EMU_IMAGE_BASE
#define HS_ENTRY      EMU_ENTRY
#define HS_A4         EMU_A4

/* The 68000 register file, as oracle_regs_get/set order it: d0-d7, a0-a7, sr, pc. */
#define REGS_D 0
#define REGS_A 8
#define REGS_SR 16
#define REGS_PC 17

static void gather(cpu_t *c, rt_machine *m)
{
    u32 r[18];
    int i;

    oracle_regs_get(r);
    for (i = 0; i < 8; i++) { c->d[i] = r[REGS_D + i]; c->a[i] = r[REGS_A + i]; }
    c->sr = (u16)r[REGS_SR];
    c->pc = r[REGS_PC];
    (void)m;
}

static void scatter(cpu_t *c, rt_machine *m)
{
    u32 r[18];
    int i;

    for (i = 0; i < 8; i++) { r[REGS_D + i] = c->d[i]; r[REGS_A + i] = c->a[i]; }
    r[REGS_SR] = c->sr;
    r[REGS_PC] = c->pc;
    oracle_regs_set(r);
    (void)m;
}

/* The vertical blank, reached from inside translated code: the register file goes to the core, the
 * game's servers run there (they are original code, mostly untranslated), and whatever they left in
 * the registers comes back. */
static void host_frame(cpu_t *c, rt_machine *m)
{
    scatter(c, m);
    oracle_tick(m);
    gather(c, m);
}

int main(int argc, char **argv)
{
    rt_machine m;
    cpu_t c;
    const char *image = DEFAULT_IMAGE;
    const char *dataDir = "export";
    const char *statePrefix = 0;
    const char *ramFrames = 0;
    const char *ramStop = 0;
    const char *callLog = 0;
    long traceFrom = 0, traceTo = 0;
    int tickLog = 0;
    int ring = 0;
    const char *inputPath = 0;
    long insns = 40000000L;
    u32 base = HS_BASE;
    int i, rc = 1, progress = 0, stateEvery = 1;
    u32 translated = 0, interpreted = 0;

    setvbuf(stdout, NULL, _IONBF, 0);
    memset(&c, 0, sizeof c);

    for (i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "--state") == 0 && i + 1 < argc) { statePrefix = argv[++i]; continue; }
        if (strcmp(argv[i], "--ram") == 0 && i + 1 < argc) { ramFrames = argv[++i]; continue; }
        if (strcmp(argv[i], "--ramstop") == 0 && i + 1 < argc) { ramStop = argv[++i]; continue; }
        if (strcmp(argv[i], "--calllog") == 0 && i + 1 < argc) { callLog = argv[++i]; continue; }
        if (strcmp(argv[i], "--ring") == 0) { ring = 1; continue; }
        if (strcmp(argv[i], "--ticklog") == 0) { tickLog = 1; continue; }
        if (strcmp(argv[i], "--tracewin") == 0 && i + 1 < argc)
        {
            char *p = argv[++i];
            traceFrom = strtol(p, &p, 0);
            if (*p == ',') p++;
            traceTo = strtol(p, 0, 0);
            continue;
        }
        if (strcmp(argv[i], "--input") == 0 && i + 1 < argc) { inputPath = argv[++i]; continue; }
        if (strcmp(argv[i], "--every") == 0 && i + 1 < argc) { stateEvery = (int)strtol(argv[++i], 0, 0); continue; }
        if (strcmp(argv[i], "--data") == 0 && i + 1 < argc) { dataDir = argv[++i]; continue; }
        if (strcmp(argv[i], "--base") == 0 && i + 1 < argc) { base = (u32)strtoul(argv[++i], 0, 0); continue; }
        if (strcmp(argv[i], "--progress") == 0) { progress = 1; continue; }
        if (strcmp(argv[i], "--stopat") == 0 && i + 1 < argc)
        {
            rc_stopAt = strtol(argv[++i], 0, 0); insns = rc_stopAt; continue;
        }
        if (argv[i][0] == '-') { printf("recomp: unknown option %s\n", argv[i]); return 2; }
        if (strchr(argv[i], '\\') || strchr(argv[i], '/') || strchr(argv[i], '.')) image = argv[i];
        else insns = strtol(argv[i], 0, 0);
    }
    if (insns <= 0) insns = 40000000L;
    /* One rc_call runs a whole translated function, so the limit has to be armed inside the
     * stream too or a run overshoots it by up to a function. */
    if (rc_stopAt <= 0) rc_stopAt = insns;

    if (!rt_init(&m)) { printf("recomp: out of memory\n"); return 1; }
    if (!rt_load_image(&m, base, image)) { printf("recomp: cannot load %s\n", image); rt_shutdown(&m); return 1; }
    m.dataDir = dataDir;
    m.progress = progress;
    if (inputPath != 0 && !input_load(inputPath)) { rt_shutdown(&m); return 1; }
    if (callLog != 0) rt_calllog_open(&m, callLog);
    m.traceFrom = traceFrom;
    m.traceTo = traceTo;
    m.tickLog = tickLog;

    printf("recomp: %s at 0x%lx, %ld instruction(s), base %ld\n", image, (unsigned long)base,
           insns, (long)RC_BASE);

    oracle_boot(HS_ENTRY, HS_A4);
    if (statePrefix != 0)
    {
        if (!state_open(statePrefix, stateEvery, ramFrames)) { rt_shutdown(&m); return 1; }
        state_sample(&m);                              /* frame 0 */
    }

    rc_frame_hook = host_frame;
    rc_stopOnUnknown = 1;
    rc_abort = 0;                                      /* the game's loops are supposed to spin */
    gather(&c, &m);

    while (m.insns < insns && !m.stop)
    {
        u32 pc = m68k_get_reg(0, M68K_REG_PC);

        if (rc_containing(pc) != 0 || rc_lookup(pc) != 0)
        {
            /* Translated: it runs until it returns, or until it transfers somewhere the translator
             * refused, and c->pc then names where the core continues. */
            translated++;
            gather(&c, &m);                            /* the core's state is the machine's */
            rc_call(&c, &m, pc);
            scatter(&c, &m);                           /* ... and what the translation left is next */
            continue;
        }
        interpreted++;
        if (m.waitVblank) { m.waitVblank = 0; m.insnToTick = 0; }
        rt_trace(&m, pc);
        if (--m.insnToTick < 0) oracle_tick(&m);
        if (!oracle_step(&m)) break;
        if (progress && (m.insns % 1000000L) == 0)
            printf("recomp: %ld steps, frame %lu, %lu raster(s), %lu translated entry(ies)\n",
                   (long)m.insns, (unsigned long)m.frame, (unsigned long)m.gfx.frames,
                   (unsigned long)translated);
    }

    printf("recomp: stopped at 0x%lx after %ld instruction(s), frame %lu\n",
           (unsigned long)m68k_get_reg(0, M68K_REG_PC), (unsigned long)m.insns,
           (unsigned long)m.frame);
    printf("recomp: %lu translated entry(ies), %lu interpreted instruction(s)\n",
           (unsigned long)translated, (unsigned long)interpreted);
    if (ring) oracle_ring_print(&m);
    printf("regs:");
    for (i = 0; i < 8; i++) printf(" D%d=%08lX", i, (unsigned long)m68k_get_reg(0, M68K_REG_D0 + i));
    for (i = 0; i < 8; i++) printf(" A%d=%08lX", i, (unsigned long)m68k_get_reg(0, M68K_REG_D0 + 8 + i));
    printf(" SR=%04lX PC=%08lX\n", (unsigned long)m68k_get_reg(0, M68K_REG_SR),
           (unsigned long)m68k_get_reg(0, M68K_REG_PC));
    printf("recomp: D0=%08lX D1=%08lX A0=%08lX A1=%08lX A6=%08lX A7=%08lX SR=%04lX\n",
           (unsigned long)m68k_get_reg(0, M68K_REG_D0),
           (unsigned long)m68k_get_reg(0, M68K_REG_D1),
           (unsigned long)m68k_get_reg(0, M68K_REG_A0),
           (unsigned long)m68k_get_reg(0, M68K_REG_A1),
           (unsigned long)m68k_get_reg(0, M68K_REG_A6),
           (unsigned long)m68k_get_reg(0, M68K_REG_A7),
           (unsigned long)m68k_get_reg(0, M68K_REG_SR));
    if (m.mem.bad != 0)
        printf("recomp: %lu access(es) outside the RAM block\n", (unsigned long)m.mem.bad);
    printf("recomp: %lu raster(s) presented\n", (unsigned long)rt_gfx_frames());
    state_close();
    if (ramStop != 0) state_ram_snapshot(&m, ramStop);
    rt_shutdown(&m);
    rc = 0;
    return rc;
}
