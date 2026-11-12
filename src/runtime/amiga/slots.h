/* The chip bus: one owner per colour clock, and the 68000's stalls.
 *
 * Chip RAM has a single bus and Agnus hands out its DMA slots first; the 68000 only gets a memory
 * cycle in a slot nobody else asked for. The model has two halves:
 *
 *   - rt_slots_update() builds, from the live display registers (BPLCON0, DDFSTRT/STOP, DMACON,
 *     DIWSTRT/STOP, SPRxPOS/CTL, AUDxPER - the copper list is where the engine programs them), a
 *     227-entry map of who owns each colour clock of a line. The bitplane pattern inside the DDF
 *     window is exactly UAE's cycle_diagram_table (custom.cpp, create_cycle_diagram_table) - see
 *     rt_slots_selftest(), which checks it against patterns computed independently.
 *
 *   - rt_bus_charge() walks an instruction's bus words through that map. A 68000 memory access is
 *     4 clocks (2 colour clocks): the address phase does not need the bus, the data phase needs one
 *     free colour clock. Every DMA-owned colour clock in front of it is a wait state. Internal
 *     cycles (register work, EA calculation) run at full speed. This is the UAE cycle-exact rule
 *     (custom.cpp, wait_cpu_cycle_read -> dma_cycle), applied per instruction with the access count
 *     of the opcode from bus_cycles.c.
 */
#ifndef EMU_SLOTS_H
#define EMU_SLOTS_H

#include "types.h"

#define EMU_LINE_COLOR_CLOCKS 227     /* PAL lores: 227 colour clocks (64 us)       */
#define EMU_LINE_CYCLES       454     /* ... which are 454 68000 clock cycles        */
#define EMU_FRAME_LINES       313     /* 312.5 lines rounded up; the half line is 0  */

/* Who owns a colour clock. CPU is 0 so an empty map is "all owned by the CPU". */
enum {
    RT_SLOT_CPU = 0,
    RT_SLOT_STROBE,
    RT_SLOT_REFRESH,
    RT_SLOT_BPL0, RT_SLOT_BPL1, RT_SLOT_BPL2, RT_SLOT_BPL3,
    RT_SLOT_BPL4, RT_SLOT_BPL5, RT_SLOT_BPL6, RT_SLOT_BPL7,
    RT_SLOT_SPR0, RT_SLOT_SPR1, RT_SLOT_SPR2, RT_SLOT_SPR3,
    RT_SLOT_SPR4, RT_SLOT_SPR5, RT_SLOT_SPR6, RT_SLOT_SPR7,
    RT_SLOT_AUD0, RT_SLOT_AUD1, RT_SLOT_AUD2, RT_SLOT_AUD3,
    RT_SLOT_DISK,
    RT_SLOT_COPPER,
    RT_SLOT_BLITTER
};

typedef struct rt_slots
{
    u8  map[EMU_LINE_COLOR_CLOCKS];       /* a line inside the vertical display window */
    u8  mapBlank[EMU_LINE_COLOR_CLOCKS];  /* a line outside it: no bitplane/sprite fetch */
    int vstart, vstop;                    /* display lines [vstart, vstop)             */
    int valid;                            /* a map has been built                      */
    int dirty;                            /* a register changed since it was built     */
    /* The register snapshot the maps came from. --slots prints it, and it is the diff target
     * against UAE's cycle_diagram_table. */
    u16 bplcon0, ddfstrt, ddfstop, dmacon, diwstrt, diwstop;
    u16 sprpos[8], sprctl[8], audper[4];
    int planes, hires;
    int words;                            /* bitplane words fetched per line           */
    int fetchStart;                       /* colour clocks per fetch group (8 lores)   */
    int groupFree;                        /* free colour clocks in one fetch group     */
    int dmaDisplay, dmaBlank;             /* DMA colour clocks per line                */
    u32 cpuShare;                         /* per-mille of the frame the CPU can use    */
    u32 frameDma;                         /* DMA colour clocks per frame               */
    u32 copperList;                       /* the list the snapshot came from           */
    int copperEntries, copperMoves;       /* entries scanned / MOVEs applied           */
} rt_slots;

struct rt_machine;

/* Build the maps from the live registers and the installed copper list. Cheap enough to call once
 * per frame and on a display-register write; it only does work when something changed. */
void rt_slots_update(struct rt_machine *m);
/* Forget everything (rt_init). */
void rt_slots_reset(struct rt_machine *m);

/* 1 when the colour clock at `pos` (68000 cycles into the frame) belongs to DMA. */
int  rt_slot_taken(struct rt_machine *m, long pos);

/* The time an instruction really takes: `cost` from the 68000 cycle table, split into internal
 * cycles (full speed) and `rt_bus_cycles[opcode]` bus words walked through the slot map. `pc` is
 * the instruction's own address - MOVEM's word count comes from the mask in its extension word.
 * Returns the time to charge to the frame budget. */
long rt_bus_charge(struct rt_machine *m, long cost, u16 opcode, u32 pc);

long rt_blit_wait(struct rt_machine *m);

/* Nobody is using the bus for `cycles` 68000 cycles (an idle frame, a dos.Delay): the clock keeps
 * passing and the blitter keeps taking the clocks nobody else owns, so a blit started before the
 * idle time is finished by it. Returns `cycles`. */
long rt_bus_idle(struct rt_machine *m, long cycles);

/* --slots: register snapshot, ownership of one line, the bitplane diagram, and the frame share. */
void rt_slots_print(struct rt_machine *m);
/* Checks the bitplane diagram against the patterns computed from UAE's cycle_diagram_table for
 * 1..8 planes lores and 1..4 planes hires. Returns 0 when a pattern differs. */
int  rt_slots_selftest(void);

/* Bus words per opcode, generated from the original program's measured accesses on the oracle
 * (tools\gen-buscycles.ps1 writes src\runtime\amiga\bus_cycles.c). */
extern const u8 rt_bus_cycles[0x10000];

#endif /* EMU_SLOTS_H */
