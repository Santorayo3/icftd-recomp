/* The emulated Amiga machine: memory map, chipset stub, and the Musashi hooks.
 *
 * Phase A of docs\recomp-architecture.md: get the original `dshell` executing, then grow the
 * chipset and the exec/graphics/dos shims until it reaches its first LoadView.
 */
#ifndef EMU_MACHINE_H
#define EMU_MACHINE_H

#include "types.h"
#include "memory.h"
#include "audio.h"

/* Memory map. The image is flattened at 0x4000, not 0: address 4 must hold AbsExecBase, and at
 * base 0 the code hunk (entry stub `jmp`) overlaps it - the cstart's `movea.l 4.w,a6` would read
 * code. A4 and the entry are the base-0 values the exporter/Ghidra model uses, plus that base. */
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

/* What FUN_0001042a writes: 0x78 bytes at 0x021E18 and 0x3024 at 0x02686C. A shorter write on the
 * save volume is the engine's own "no save yet" placeholder, not a save. */
#define EMU_SAVE_BYTES (0x78u + 0x3024u)

/* The chunky framebuffer the graphics.library shim presents into (emu\gfx.c). The planar model
 * the game draws into lives in emulated memory; this is only the present-time image. */
#define EMU_FB_MAX_W 640
#define EMU_FB_MAX_H 512
#define EMU_AREA_MAX 256

typedef struct rt_gfx_state{
    u8  *fb;                      /* EMU_FB_MAX_W * EMU_FB_MAX_H, from plat_alloc */
    int  fbW, fbH;
    u8   pal[256 * 3];
    int  palCount;
    u8   fgPen, bgPen, drMd;
    s16  curX, curY;
    s16  areaX[EMU_AREA_MAX], areaY[EMU_AREA_MAX];
    int  areaCount;
    u32  frames;                  /* rasters presented */
    u32  presentFrame;            /* last vertical blank we presented on */
    u32  cprList;                 /* copper list installed by the last LoadView */
    char osdText[40];             /* overlay line in the top left corner, "" when idle */
    u32  osdTextUntil;            /* m->frame the line disappears on */
    u32  osdIconUntil;            /* m->frame the save icon disappears on */
} rt_gfx_state;
/* The exec structures we hand the game: the Process that FindTask returns and its CLI record.
 * Reserved above the AllocMem heap and below the stack - the image's BSS reaches 0x31598, so
 * anything lower would be overwritten by the image load. */
#define EMU_SYS_BASE     0x0017C000u
#define EMU_TASK_ADDR    EMU_SYS_BASE
/* The PC ring is a diagnostic, not part of the model: deep OS call chains run through a dozen
 * engine trampolines before the LVO is reached, so 16 entries lost the interesting caller. */
#define EMU_RING_SIZE 64

/* The vertical-blank cadence, in 68000 clock cycles.
 *
 * A PAL A500 runs at 7,093,790 cycles/s with 50 fields/s, so a frame is 141,875 cycles. The budget
 * has to be cycles and not instructions: an instruction costs 4-40 of them, and the game's own
 * loops (a blitter wait, a MovE step) only run out of frame when the *cycles* run out. With an
 * instruction budget nothing ever ran out, so scenes the original can only manage at ~10 Hz played
 * at the full 50 Hz (docs\drawing-model.md, "Measured timing"). */
#define EMU_CYCLES_PER_FRAME 141875L
#define EMU_MAX_INT        8          /* interrupt servers the game can add */

/* One dos.library handle: a host file plus a cursor. Read-only for now; the game only ever
 * reads its data banks. */typedef struct rt_file
{
    void *f;                              /* plat_file* */
    u32   size;
    u32   pos;
    u32   addr;                           /* the FileHandle block; dos returns addr>>2 */
    int   writable;                       /* opened with a write mode */
    int   inSaveDir;                      /* DSAVE: - closing it means a save completed */
} rt_file;

/* One dos.library Lock. The engine locks a volume, calls CurrentDir on it and then opens the
 * bare file name, so the name has to stay reachable from the lock token. */
#define EMU_MAX_LOCKS 16
typedef struct rt_lock
{
    u32  token;                           /* 0 = free */
    char name[160];
} rt_lock;

/* --- the chipset blitter (blit.c) --------------------------------------------------------- */
/* The engine's compositor writes these registers directly rather than calling BltBitMap. */
typedef struct rt_blitter
{
    u16 con0, con1, afwm, alwm, size;
    u32 cpt, bpt, apt, dpt;
    s16 cmod, bmod, amod, dmod;
    u16 cdat, bdat, adat;
} rt_blitter;

typedef struct rt_machine
{
    rt_mem mem;
    u16     custom[0x100 / 2];            /* 0xDFF000..0xDFF0FF, raw */
    rt_blitter blit;                     /* BLTCON/pointers/modulos (blit.c) */
    rt_gfx_state gfx;                    /* framebuffer + drawing state (emu\gfx.c) */
    rt_audio audio;                      /* Paula channels, mixer, gains (audio.c) */
    rt_cia   cia[2];                     /* CIA-A/CIA-B timer A (audio.c) */
    rt_icr_vector icr[EMU_MAX_ICR];      /* AddICRVector servers (audio.c) */
    int      icrCount;
    u32      eAcc;                       /* 68000 cycles toward the next E-clock tick */
    u32      ciaCode;                    /* handler to run at the next instruction boundary */
    u32      ciaData;                    /* its is_Data (A1) */
    int      ciaPending;
    /* The front end runs an ICR handler: the runtime models the devices, but only the CPU side
     * can execute the game's code (and save/restore the interrupted register file). */
    void   (*on_cia)(struct rt_machine *m, u32 code);
    u32     libraryBase[EMU_LIB_SLOTS];
    int     libraries;
    u32     imageTop;                     /* first byte past the loaded image */
    u32     imageBase;                    /* where the image is loaded: 0 or 0x4000 */
    u32     signals;                      /* next signal number handed out */
    u32     intCode[EMU_MAX_INT];         /* AddIntServer/AddICRVector: is_Code */
    u32     intData[EMU_MAX_INT];         /*                            is_Data */
    int     intCount;
    long    cyclesToTick;                 /* 68000 cycles left before the next vblank */
    long    blitCycles;                   /* cycles the blitter took, for the timing report */
    int     inTick;                       /* the tick handler is running */
    int     waitFrames;                   /* frame boundaries the program asked to wait for */
    u32     todLatch[2];                  /* CIA-A/B TOD read latch, in frames */
    int     todLatched[2];                /* 1 = TODLO was read: the latch stays frozen */
    u32     view;                         /* last View passed to LoadView */
    u32     watch;                        /* PC to report on: dumps the recent PC ring */
    u32     ring[EMU_RING_SIZE];          /* last executed PCs, for --watch and call dumps */
    int     ringPos;
    const char *dataDir;                  /* where the extracted disk folders live */
    rt_file files[EMU_MAX_FILES];        /* dos.library handles */
    rt_lock locks[EMU_MAX_LOCKS];        /* dos.library locks (Lock/CurrentDir/UnLock) */
    char    cwd[160];                     /* the name CurrentDir last selected */
    u32     cwdLock;                      /* that lock's token */
    u32     frame;                        /* 50 Hz tick counter */
    u32     osdFont;                      /* the game's TextFont, for the on-screen display */
    int     saveSlot;                     /* saves\slot<N> - the player picks it with F1..F5 */
    const char *saveDir;                  /* "saves" relative to the executable */
    u32     saves;                        /* save files completed, for the log */
    long    insns;
    u32     pc;                           /* current PC, reported by the CPU front end */
    int     osUnhandled;                  /* the last rt_os_call hit a shim we do not implement */
    int     trace;
    u8      fireDown;                     /* /FIRE on CIA-A PRA ($BFE001 bit 7), active low */
    u16     joy0, joy1;                   /* JOY0DAT/JOY1DAT, raw and active low (0xFFFF = idle) */
    u32     pressAt;                      /* frame to press /FIRE on (0 = never), for tools */
    u32     releaseAt;                    /* frame to release it again (0 = never) */
    int     stop;                         /* tool hook: set to end the run (window closed) */
    int     dosLog;                       /* log dos Open/Read/Seek/Close */
    int     progress;                     /* heartbeat every 1M steps */
    u32     progressFrom;                 /* ... and the row/palette report from this frame on */
    int     dffLog;                       /* log the first chipset register writes */
    int     dffSeen;
    int     blitLog;                      /* log the geometry of every hardware blit */
    int     blitLogN;
    u32     blitLogFrame;                 /* ... from this emulated frame on (--blitlog <frame>) */
    void   *spriteLog;                    /* --spritelog: FILE* for sprite-blit source/result dumps */
    int     spriteLogN;
    u32     spriteLogFrom;                /* ... from this emulated frame on */
    int     blitBytePtr;                  /* --byteptr: byte pointers instead of word pointers */
    int     blitLogs;
    u32     blits;                        /* blits started, for --progress */
    u32     blitDrops;                    /* blit writes the range check refused */
    u32     screenBands;                  /* --progress: bit b = a write reached rows 8b..8b+7 */
    u32     screenWrites;                 /* --progress: writes that reached the shown bitmap */
    u32     textDraws;                    /* graphics.Text calls so far, for --progress */
    u32     firePolls;                    /* reads of CIA-A PRA: the game is watching /FIRE */
    void *callLog;                        /* --calllog: one line per library call, for bisection */
    long    traceFrom, traceTo;           /* --trace: print insns/budget/pc in this window */
    int     tickLog;                      /* --ticklog: one line per vblank, entry and exit */
    int     textLog;                      /* --textlog: dump the RastPort/BitMap a Text call gets */
    int     textSeen;
    u32     handlerRuns;                  /* interrupt servers entered, for --progress */
    u32     presents;
    void  (*on_frame)(struct rt_machine *m);    /* tool hook: once per emulated frame, input+pacing */
    void  (*on_present)(struct rt_machine *m);  /* tool hook: dump a frame / show the window */
} rt_machine;

int  rt_init(rt_machine *m);
void rt_shutdown(rt_machine *m);
/* The AllocMem heap, shared with the graphics shim (MrgCop allocates a copper list). */
u32  rt_alloc_bytes(u32 bytes);
int  rt_load_image(rt_machine *m, u32 addr, const char *path);
u32  rt_library_new(rt_machine *m);

/* --- the seam between the machine model and whatever executes the code ---------------------
 * rt_os_call is one library call: the stack pointer plus the registers the Amiga library ABI
 * uses for arguments (graphics primitives take them in A0/A1/D0/D1, exec and dos on the stack),
 * and the result is returned. */
u32  rt_os_call(rt_machine *m, u32 sp, u32 a0, u32 a1, u32 d0, u32 d1, int lib, s32 lvo);
/* Opens the call log: "<insns> <lib> <lvo>" per library call, so two runs can be compared where
 * their instruction counts start to differ. */
int  rt_calllog_open(rt_machine *m, const char *path);
/* Raw RAM at the stop point, for bisecting between frame boundaries. */
void rt_ram_snapshot(rt_machine *m, const char *path);
/* "<insns> <budget> <pc>" when the run is inside the --trace window. */
void rt_trace(rt_machine *m, u32 pc);
/* Dumps a graphics.library Text call's pointers and pens (development aid). */
void rt_text_log(rt_machine *m, u32 rp, u32 text, u32 count, u32 plotted);
/* A shim asked for the next vertical blank: end this frame without executing anything. */
void rt_request_vblank(rt_machine *m);
/* dos.Delay(n): the calling task is asleep for n of the 50 Hz ticks, i.e. n frame boundaries. */
void rt_delay_ticks(rt_machine *m, u32 ticks);
/* 1 when the save slot's DSAVE: directory holds no file yet (the overlay shows "(Empty)"). */
int  rt_save_slot_empty(const rt_machine *m, int slot);
/* Frame boundary: shows the loaded view, so drawing done since the last flip becomes visible. */
void rt_frame_present(rt_machine *m);
/* Where the runtime put the CLI argument tail (the front end passes it to the program in A0). */
u32  rt_args_addr(void);
/* Builds the Process/CLI record. Called after the image is loaded (its BSS overruns this block). */
void rt_build_process(rt_machine *m);
/* Print the library-call census (which calls are real, which are answered with 0). */
void rt_lvo_report(void);

/* Which library base (0..EMU_LIB_SLOTS-1) the address `pc` falls inside, or -1. The bases are
 * machine state; mapping a code address onto one is how the front end recognises `jsr (lvo,A6)`. */
int  rt_library_of(rt_machine *m, u32 pc, s32 *lvo);

/* Which library *base value* this is (the translated `jmp (d16,A6)` knows A6, not the PC), or -1. */
int  rt_lib_index(rt_machine *m, u32 base);

/* --- the 68000 bus --------------------------------------------------------------------------
 * One access, wherever it lands: the chipset register file ($DFF000..$DFF0FF), the fire button
 * on CIA-A and the joystick ports are handled here, everything else is the RAM block. */
int  rt_bus_is_io(rt_machine *m, u32 a);
u32  rt_bus_read8(rt_machine *m, u32 a);
u32  rt_bus_read16(rt_machine *m, u32 a);
u32  rt_bus_read32(rt_machine *m, u32 a);
void rt_bus_write8(rt_machine *m, u32 a, u32 v);
void rt_bus_write16(rt_machine *m, u32 a, u32 v);
void rt_bus_write32(rt_machine *m, u32 a, u32 v);

extern rt_machine *rt_current;

#endif


