/* icftd-emu: the recompilation runtime bring-up tool.
 *
 *   icftd-emu <image> [<entry>] [<insns>] [--trace]
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

#define DEFAULT_ENTRY EMU_ENTRY
#define DEFAULT_A4    EMU_A4

int main(int argc, char **argv)
{
    emu_machine m;
    const char *image = 0;
    u32 entry = DEFAULT_ENTRY;
    long insns = 1000;
    int i, rc = 1, trace = 0, haveEntry = 0;
    u32 watch = 0;
    const char *dataDir = "export";

    for (i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "--trace") == 0) { trace = 1; continue; }
        if (strcmp(argv[i], "--watch") == 0 && i + 1 < argc) { watch = (u32)strtoul(argv[++i], 0, 0); continue; }
        if (strcmp(argv[i], "--data") == 0 && i + 1 < argc) { dataDir = argv[++i]; continue; }
        if (image == 0) { image = argv[i]; continue; }
        if (!haveEntry) { entry = (u32)strtoul(argv[i], 0, 0); haveEntry = 1; continue; }
        insns = strtol(argv[i], 0, 0);
    }
    if (image == 0)
    {
        printf("usage: icftd-emu <image> [<entry>] [<insns>] [--trace] [--watch <pc>] [--data <dir>]\n");
        return 1;
    }

    if (!emu_init(&m)) { printf("emu: out of memory\n"); return 1; }
    if (!emu_load_image(&m, EMU_IMAGE_BASE, image)) { printf("emu: cannot load %s\n", image); emu_shutdown(&m); return 1; }

    m.trace = trace;
    m.watch = watch;
    m.dataDir = dataDir;

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
        rc = 0;
    }

    emu_shutdown(&m);
    return rc;
}
