/* The emulated Amiga machine: memory map, chipset stub, and the Musashi hooks.
 *
 * Phase A of docs\recomp-architecture.md: get the original `dshell` executing, then grow the
 * chipset and the exec/graphics/dos shims until it reaches its first LoadView.
 */
#ifndef EMU_MACHINE_H
#define EMU_MACHINE_H

#include "types.h"
#include "mem.h"

/* Memory map: the flattened dshell image is linked at 0 (A4 = 0x29A56 is baked into the code,
 * so the base must stay 0). The stack sits at 0x80000 and the fake library bases at the top. */
/* The image is flattened at 0x4000, not 0: address 4 must hold AbsExecBase, and at base 0 the
 * code hunk overlaps it (the cstart's `movea.l 4.w,a6` would read code). A4 and the entry are
 * therefore shifted by the same amount from the base-0 values the exporter/Ghidra model uses. */
#define EMU_IMAGE_BASE   0x00004000u
#define EMU_ENTRY        0x00004000u
#define EMU_A4           0x0002DA56u      /* 0x4000 + 0x29A56 */
#define EMU_RAM_SIZE     0x00100000u
#define EMU_STACK_TOP    0x00080000u
#define EMU_EXIT_PC      0x00000200u      /* sentinel return address: the program ended */
#define EMU_LIB_BASE     0x000E0000u
#define EMU_LIB_STRIDE   0x00002000u
#define EMU_LIB_SLOTS    20
/* Must be smaller than EMU_LIB_STRIDE, or a call is attributed to the wrong library. The
 * deepest LVO the game uses is -576 (FreeColorMap), so 0x1000 is ample. */
#define EMU_LIB_SPAN     0x00000F00u

#define EMU_MAX_FILES 16

/* One dos.library handle: a host file plus a cursor. Read-only for now; the game only ever
 * reads its data banks. */
typedef struct emu_file
{
    void *f;                              /* plat_file* */
    u32   size;
    u32   pos;
    u32   addr;                           /* the FileHandle block; dos returns addr>>2 */
} emu_file;

typedef struct emu_machine
{
    emu_mem mem;
    u16     custom[0x100 / 2];            /* 0xDFF000..0xDFF0FF, raw */
    u32     libraryBase[EMU_LIB_SLOTS];
    int     libraries;
    u32     imageTop;                     /* first byte past the loaded image */
    u32     signals;                      /* next signal number handed out */
    u32     view;                         /* last View passed to LoadView */
    u32     watch;                        /* PC to report on: dumps the recent PC ring */
    u32     ring[16];                     /* last executed PCs, for --watch */
    int     ringPos;
    const char *dataDir;                  /* where the extracted disk folders live */
    emu_file files[EMU_MAX_FILES];        /* dos.library handles */
    u32     frame;                        /* 50 Hz tick counter */
    long    insns;
    int     trace;
} emu_machine;

int  emu_init(emu_machine *m);
void emu_shutdown(emu_machine *m);
int  emu_load_image(emu_machine *m, u32 addr, const char *path);
u32  emu_library_new(emu_machine *m);
u32  emu_run(emu_machine *m, long maxInsns);
int  emu_library_of(emu_machine *m, u32 pc, s32 *lvo);

/* Sets PC/A7/A4 to the state the exporter documents and runs from there. */
void emu_boot(u32 entry, u32 a4);

extern emu_machine *emu_current;

#endif
