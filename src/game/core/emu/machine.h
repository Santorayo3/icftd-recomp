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
#define EMU_RAM_SIZE     0x00200000u     /* 2 MB: the intro alone wants ~500 KB of heap */
#define EMU_STACK_TOP    0x00180000u
#define EMU_EXIT_PC      0x00000200u      /* sentinel return address: the program ended */
#define EMU_LIB_BASE     0x001C0000u
#define EMU_LIB_STRIDE   0x00002000u
#define EMU_LIB_SLOTS    20
/* Must be smaller than EMU_LIB_STRIDE, or a call is attributed to the wrong library. The
 * deepest LVO the game uses is -576 (FreeColorMap), so 0x1000 is ample. */
#define EMU_LIB_SPAN     0x00000F00u

#define EMU_MAX_FILES 16

/* The chunky framebuffer the graphics.library shim presents into (emu\gfx.c). The planar model
 * the game draws into lives in emulated memory; this is only the present-time image. */
#define EMU_FB_MAX_W 640
#define EMU_FB_MAX_H 512
#define EMU_AREA_MAX 256

typedef struct emu_gfx_state{
    u8  *fb;                      /* EMU_FB_MAX_W * EMU_FB_MAX_H, from plat_alloc */
    int  fbW, fbH;
    u8   pal[256 * 3];
    int  palCount;
    u8   fgPen, bgPen, drMd;
    s16  curX, curY;
    s16  areaX[EMU_AREA_MAX], areaY[EMU_AREA_MAX];
    int  areaCount;
    u32  frames;                  /* rasters presented */    u32  presentFrame;            /* last vertical blank we presented on */} emu_gfx_state;
/* The exec structures we hand the game: the Process that FindTask returns and its CLI record.
 * Reserved above the AllocMem heap and below the stack - the image's BSS reaches 0x31598, so
 * anything lower would be overwritten by the image load. */
#define EMU_SYS_BASE     0x0017C000u
#define EMU_TASK_ADDR    EMU_SYS_BASE
/* The PC ring is a diagnostic, not part of the model: deep OS call chains run through a dozen
 * engine trampolines before the LVO is reached, so 16 entries lost the interesting caller. */
#define EMU_RING_SIZE 64

/* The vertical-blank cadence. A PAL A500 runs at 7,093,790 cycles/s with 50 fields/s, and this
 * core counts instructions, not cycles, so the tick is a straightforward instruction budget:
 * 141,875 instructions per frame - the exact period the game's own frame counter expects.
 * Nothing in the game reads a cycle counter, so the approximation is invisible to it. */
#define EMU_INSN_PER_FRAME 141875L
#define EMU_MAX_INT        8          /* interrupt servers the game can add */

/* One dos.library handle: a host file plus a cursor. Read-only for now; the game only ever
 * reads its data banks. */typedef struct emu_file
{
    void *f;                              /* plat_file* */
    u32   size;
    u32   pos;
    u32   addr;                           /* the FileHandle block; dos returns addr>>2 */
} emu_file;

/* --- the chipset blitter (blit.c) --------------------------------------------------------- */
/* The engine's compositor writes these registers directly rather than calling BltBitMap. */
typedef struct emu_blitter
{
    u16 con0, con1, afwm, alwm, size;
    u32 cpt, bpt, apt, dpt;
    s16 cmod, bmod, amod, dmod;
    u16 cdat, bdat, adat;
} emu_blitter;

typedef struct emu_machine
{
    emu_mem mem;
    u16     custom[0x100 / 2];            /* 0xDFF000..0xDFF0FF, raw */
    emu_blitter blit;                     /* BLTCON/pointers/modulos (blit.c) */
    emu_gfx_state gfx;                    /* framebuffer + drawing state (emu\gfx.c) */
    u32     libraryBase[EMU_LIB_SLOTS];
    int     libraries;
    u32     imageTop;                     /* first byte past the loaded image */
    u32     signals;                      /* next signal number handed out */
    u32     intCode[EMU_MAX_INT];         /* AddIntServer/AddICRVector: is_Code */
    u32     intData[EMU_MAX_INT];         /*                            is_Data */
    int     intCount;
    long    insnToTick;                   /* instruction budget left before the next vblank */
    int     inTick;                       /* the tick handler is running */
    int     waitVblank;                   /* WaitTOF/WaitBOVP is pending: end this frame early */
    u32     view;                         /* last View passed to LoadView */
    u32     watch;                        /* PC to report on: dumps the recent PC ring */
    u32     ring[EMU_RING_SIZE];          /* last executed PCs, for --watch and call dumps */
    int     ringPos;
    const char *dataDir;                  /* where the extracted disk folders live */
    emu_file files[EMU_MAX_FILES];        /* dos.library handles */
    u32     frame;                        /* 50 Hz tick counter */
    long    insns;
    int     trace;
    u8      fireDown;                     /* /FIRE on CIA-A PRA ($BFE001 bit 7), active low */
    u32     pressAt;                      /* frame to press /FIRE on (0 = never), for tools */
    int     stop;                         /* tool hook: set to end the run (window closed) */
    int     dosLog;                       /* log dos Open/Read/Seek/Close */
    int     progress;                     /* heartbeat every 1M steps */
    int     dffLog;                       /* log the first chipset register writes */
    int     dffSeen;
    int     blitLogs;
    u32     blits;                        /* blits started, for --progress */
    u32     blitDrops;                    /* blit writes the range check refused */
    u32     firePolls;                    /* reads of CIA-A PRA: the game is watching /FIRE */
    u32     handlerRuns;                  /* interrupt servers entered, for --progress */
    u32     presents;
    void  (*on_present)(struct emu_machine *m);  /* tool hook: dump a frame / show the window */
} emu_machine;

int  emu_init(emu_machine *m);
void emu_shutdown(emu_machine *m);
/* The AllocMem bump heap, shared with the graphics shim (MrgCop allocates a copper list). */
u32  emu_alloc_bytes(u32 bytes);
int  emu_load_image(emu_machine *m, u32 addr, const char *path);
u32  emu_library_new(emu_machine *m);
u32  emu_run(emu_machine *m, long maxInsns);
int  emu_library_of(emu_machine *m, u32 pc, s32 *lvo);

/* Sets PC/A7/A4 to the state the exporter documents and runs from there. */
void emu_boot(u32 entry, u32 a4);

extern emu_machine *emu_current;

#endif
