/* The chip bus: the per-line slot map and the 68000's wait states (see slots.h).
 *
 * Everything here follows the original hardware, with WinUAE's cycle-exact core as the authority:
 *
 *   - PAL lores: 227 colour clocks per line, 454 68000 clock cycles per line, 312.5 lines per
 *     frame (EMU_CYCLES_PER_FRAME = 141,875 = 312.5 * 454).
 *   - The bitplane fetch pattern inside the DDF window is UAE's cycle_diagram_table
 *     (custom.cpp, create_cycle_diagram_table): one fetch group per 8 colour clocks in lores,
 *     the planes fetched in the order { 8,4,6,2,7,3,5,1 }; with five planes that is three free
 *     colour clocks per group out of eight.
 *   - The rest of the line is claimed in the order the DMA request stream (DMAL) carries them:
 *     the strobe and three refresh slots first (REFRESH_FIRST_HPOS = 3), then disk, audio and
 *     sprites. A claim that lands on a clock somebody else already owns is moved to the next free
 *     clock - two DMA channels cannot share a bus cycle.
 *   - A 68000 memory access is 4 clock cycles: address phase, data phase. Only the data phase needs
 *     a bus cycle; every DMA-owned colour clock in front of it is a wait state (UAE custom.cpp,
 *     wait_cpu_cycle_read -> dma_cycle). Internal cycles run at full speed.
 */
#include <stdio.h>
#include <string.h>

#include "types.h"
#include "machine.h"
#include "display.h"
#include "slots.h"
#include "copper.h"
#include "blitter.h"

/* UAE custom.cpp: the plane fetch order for a fetch group. */
static const u8 g_seq8[8] = { 8, 4, 6, 2, 7, 3, 5, 1 };   /* 8-plane max (lores)  */
static const u8 g_seq4[8] = { 4, 2, 3, 1 };               /* 4-plane max (hires)  */
static const u8 g_seq2[8] = { 2, 1 };                     /* 2-plane max (shres)  */

#define SLOT_DMACON_DMAEN 0x0200u
#define SLOT_DMACON_BPLEN 0x0100u
#define SLOT_DMACON_SPREN 0x0020u
#define SLOT_DMACON_DSKEN 0x0010u

static u16 reg16(const rt_machine *m, u16 reg)
{
    return m->custom[(reg & 0x1FFu) >> 1];
}

/* One claim: the owner takes the colour clock if it is free, otherwise the next free one. Two
 * channels cannot own a clock at the same time, which is why a request that collides with another
 * DMA source is deferred by a clock. */
static void claim(u8 *map, int pos, int owner)
{
    int i;

    if (pos < 0) pos = 0;
    pos %= EMU_LINE_COLOR_CLOCKS;
    for (i = 0; i < EMU_LINE_COLOR_CLOCKS; i++)
    {
        if (map[pos] == RT_SLOT_CPU) { map[pos] = (u8)owner; return; }
        if (++pos == EMU_LINE_COLOR_CLOCKS) pos = 0;
    }
}

/* UAE's create_cycle_diagram_table: the owner of fetch-group clock `cycle` for this many planes.
 * Returns -1 for a free clock, else the plane number (0-based). */
static int diagram_owner(int planes, int hires, int cycle)
{
    const u8 *seq;
    int maxplane, fetchstart;

    if (hires) { seq = g_seq4; maxplane = 4; fetchstart = 4; }
    else       { seq = g_seq8; maxplane = 8; fetchstart = 8; }
    if (cycle < 0 || cycle >= fetchstart) return -1;
    if (cycle >= maxplane) return -1;
    if (planes >= seq[cycle]) return (int)seq[cycle] - 1;
    return -1;
}

/* The two maps for the current register state. `sprites` decides whether the sprite channels in
 * SPRxCTL (bit 7) are added; they are only added when the display really has them enabled. */
static void build_maps(rt_slots *s, int spritesEnabled)
{
    int i, n, b;

    memset(s->map, RT_SLOT_CPU, sizeof s->map);
    memset(s->mapBlank, RT_SLOT_CPU, sizeof s->mapBlank);

    /* The refresh block: the strobe and three refresh slots (REFRESH_FIRST_HPOS 3 in UAE, one
     * slot every two colour clocks). It runs on every line, display or not. */
    claim(s->map, 3, RT_SLOT_STROBE);
    claim(s->map, 5, RT_SLOT_REFRESH);
    claim(s->map, 7, RT_SLOT_REFRESH);
    claim(s->map, 9, RT_SLOT_REFRESH);
    memcpy(s->mapBlank, s->map, sizeof s->map);

    /* Disk, audio and sprites: the DMAL stream carries them in this order before the bitplane
     * sequencer starts (the bitplane window begins at DDFSTRT, normally 0x38). */
    if ((s->dmacon & SLOT_DMACON_DMAEN) != 0)
    {
        if ((s->dmacon & SLOT_DMACON_DSKEN) != 0)
            claim(s->map, 13, RT_SLOT_DISK);
        for (n = 0; n < 4; n++)
            if ((s->dmacon & (1u << n)) != 0)
                claim(s->map, 17 + 2 * n, RT_SLOT_AUD0 + n);
        if (spritesEnabled && (s->dmacon & SLOT_DMACON_SPREN) != 0)
            for (n = 0; n < 8; n++)
                if ((s->sprctl[n] & 0x0080u) != 0)
                {
                    claim(s->map, 25 + 2 * n, RT_SLOT_SPR0 + n);
                    claim(s->map, 26 + 2 * n, RT_SLOT_SPR0 + n);
                }
    }

    /* Bitplane DMA: one fetch group per word through the DDF window, the group's pattern from
     * UAE's cycle diagram. The window holds (DDFSTOP-DDFSTRT)/8 + 1 words. */
    if ((s->dmacon & (SLOT_DMACON_DMAEN | SLOT_DMACON_BPLEN)) ==
        (SLOT_DMACON_DMAEN | SLOT_DMACON_BPLEN) && s->planes > 0 && s->words > 0)
    {
        int base = s->ddfstrt;
        int i2;

        for (n = 0; n < s->words; n++)
            for (i2 = 0; i2 < s->fetchStart; i2++)
            {
                int owner = diagram_owner(s->planes, s->hires, i2);
                int pos = base + n * s->fetchStart + i2;
                if (owner >= 0 && pos >= 0 && pos < EMU_LINE_COLOR_CLOCKS)
                    claim(s->map, pos, RT_SLOT_BPL0 + owner);
            }
    }

    /* Lines outside the vertical display window have no bitplane or sprite fetch. */
    for (i = 0; i < EMU_LINE_COLOR_CLOCKS; i++)
    {
        int o = s->map[i];
        if ((o >= RT_SLOT_BPL0 && o <= RT_SLOT_BPL7) ||
            (o >= RT_SLOT_SPR0 && o <= RT_SLOT_SPR7))
            s->mapBlank[i] = RT_SLOT_CPU;
    }

    s->dmaDisplay = 0;
    s->dmaBlank = 0;
    for (i = 0; i < EMU_LINE_COLOR_CLOCKS; i++)
    {
        if (s->map[i] != RT_SLOT_CPU) s->dmaDisplay++;
        if (s->mapBlank[i] != RT_SLOT_CPU) s->dmaBlank++;
    }
}

/* The set bits of a MOVEM register mask. */
static int count_bits(u16 v)
{
    int n = 0;

    while (v != 0) { n += v & 1; v >>= 1; }
    return n;
}

/* The whole frame's slot map, one byte per colour clock (the walker section below builds it). */
static void build_frame_map(rt_slots *s);

/* Applies one copper-list DMACON write (bit 15 set = set the bits, clear = clear them). */
static u16 dmacon_apply(u16 cur, u16 v)
{
    if ((v & 0x8000u) != 0) return (u16)(cur | (v & 0x7FFFu));
    return (u16)(cur & ~(v & 0x7FFFu));
}

void rt_slots_reset(rt_machine *m)
{
    rt_slots *s = &m->slots;

    memset(s, 0, sizeof *s);
    /* A500 defaults until the engine programs a display: 320 lores, DDF $38..$D0, PAL 256 lines. */
    s->bplcon0 = 0x0000u;
    s->ddfstrt = 0x0038u;
    s->ddfstop = 0x00D0u;
    s->diwstrt = 0x2C81u;
    s->diwstop = 0x2CC1u;
    s->dmacon  = 0x0000u;
    s->vstart  = 0x2C;
    s->vstop   = 0x2C + 256;
    s->dirty   = 1;
}

void rt_slots_update(rt_machine *m)
{
    rt_slots *s = &m->slots;
    rt_view_regs vr;
    u32 view = m->view, vp = 0;
    int vstart, vstop, planes, hires, words, i;

    /* The display state the engine programs lives in the View it installed, exactly as the
     * presenter reads it: graphics.library turns ViewPort DWidth/DHeight/Modes and the BitMap's
     * depth into the copper list's BPLCON0/DDFSTRT/DDFSTOP/DIWSTRT/DIWSTOP, and on hardware it is
     * those registers that decide which colour clocks Agnus takes. rt_gfx_view_regs() is that
     * derivation - the same one MrgCop writes into the list - so the map and the copper cannot
     * disagree about the geometry.
     *
     * A register the code wrote directly still wins: the game programs BPLCON0/DIW itself on
     * some screens, and that is the state the display is in. */
    if (view != 0) vp = rt_read32(&m->mem, view);
    rt_gfx_view_regs(m, vp, &vr);
    planes = vr.planes;
    hires = vr.hires;
    words = vr.words;
    vstart = vr.vstart;
    vstop = vr.vstop;
    /* The copper list / direct register writes, when the engine made them. */
    {
        u16 bplcon0 = reg16(m, 0x100);
        u16 ddfstrt = reg16(m, 0x092), ddfstop = reg16(m, 0x094);
        u16 diwstrt = reg16(m, 0x08E), diwstop = reg16(m, 0x090);

        if (bplcon0 != 0)
        {
            int p = (int)((bplcon0 >> 12) & 7u);
            if (p > 0) { planes = p; hires = (bplcon0 & 0x8000u) != 0; }
        }
        if (ddfstop > ddfstrt && ddfstrt != 0)
            words = (int)((ddfstop - ddfstrt) / 8u) + 1;
        if (diwstrt != 0 && diwstop != 0)
        {
            vstart = (int)(diwstrt >> 8);
            vstop = (int)(diwstop >> 8);
            if (vstop <= vstart) vstop += 256;
            if (vstart > EMU_FRAME_LINES) vstart = EMU_FRAME_LINES;
            if (vstop > EMU_FRAME_LINES) vstop = EMU_FRAME_LINES;
        }
        s->bplcon0 = bplcon0 != 0 ? bplcon0 : vr.bplcon0;
        s->ddfstrt = ddfstrt != 0 ? ddfstrt : vr.ddfstrt;
        s->ddfstop = ddfstop != 0 ? ddfstop : vr.ddfstop;
        s->diwstrt = diwstrt != 0 ? diwstrt : vr.diwstrt;
        s->diwstop = diwstop != 0 ? diwstop : vr.diwstop;
    }
    s->copperList = m->gfx.cprList;
    s->copperEntries = 0;
    s->copperMoves = 0;
    s->vstart = vstart;
    s->vstop = vstop;

    /* DMACON's enable bits: bitplane and sprites as programmed, audio from Paula's channel
     * state (a shim arms the channels, so its bits are authoritative), disk never. */
    s->dmacon = (u16)(SLOT_DMACON_DMAEN | (planes > 0 ? SLOT_DMACON_BPLEN : 0u));
    for (i = 0; i < 4; i++)
    {
        s->audper[i] = m->custom[(0x0A6u + 16u * (u32)i) >> 1];
        if ((m->audio.dma & (1u << i)) != 0) s->dmacon |= (u16)(1u << i);
    }
    for (i = 0; i < 8; i++)
    {
        s->sprpos[i] = m->custom[(0x140u + 8u * (u32)i) >> 1];
        s->sprctl[i] = m->custom[(0x142u + 8u * (u32)i) >> 1];
        if ((s->sprctl[i] & 0x0080u) != 0) s->dmacon |= SLOT_DMACON_SPREN;
    }

    s->hires = hires;
    s->planes = planes;
    s->fetchStart = hires ? 4 : 8;
    if (words > EMU_LINE_COLOR_CLOCKS / 8) words = EMU_LINE_COLOR_CLOCKS / 8;
    s->words = words;

    build_maps(s, 1);
    build_frame_map(s);

    s->groupFree = 0;
    for (i = 0; i < s->fetchStart; i++)
        if (diagram_owner(planes, hires, i) < 0) s->groupFree++;

    {
        long frameCck = EMU_CYCLES_PER_FRAME / 2;             /* 70,937 colour clocks */
        long disp = (long)(vstop - vstart);
        long blank = EMU_FRAME_LINES - disp;
        long dma = (long)s->dmaDisplay * disp + (long)s->dmaBlank * blank;

        if (dma > frameCck) dma = frameCck;
        s->frameDma = (u32)dma;
        s->cpuShare = (u32)((frameCck - dma) * 1000L / frameCck);
    }
    s->valid = 1;
    s->dirty = 0;
}

/* --- the bus walker ------------------------------------------------------------------------ *
 * Every consumer walks the map one colour clock at a time: a clock the display DMA owns is a wait
 * for whoever wants the bus, and a clock that belongs to nobody is taken by the first consumer
 * that asks. The CPU's memory word needs 2 clocks (address and data, HRM), the blitter one clock
 * per channel per output word (UAE blitter.cpp, blit_cyclecount). The walk starts at the time
 * already spent in this frame, so CPU and blitter share one bus - which is what makes the total
 * conserved instead of each consumer being charged twice, and what makes a running blit slow the
 * CPU down instead of being a lump on the budget.
 *
 * Not modelled, and measured rather than assumed: UAE also lets a waiting CPU steal the blitter's
 * slot once it has waited through BLIT_NASTY_CPU_STEAL_CYCLE_COUNT DMA cycles with BLTPRI clear
 * (custom.cpp dma_cycle -> nasty_cnt, blitter.cpp:1755). Implementing that made this machine
 * *faster* - the MovE script finished by frame 700 instead of 1640 - so this engine's cost is not
 * a starved CPU but blit work, and the rule stays out until the blit side is right. */

/* The frame's slot map as one array, one byte per colour clock from the top of the frame, built by
 * rt_slots_update() from the two per-line maps. The walkers keep their position in the frame in
 * 68000 cycles, reduced to [0, EMU_CYCLES_PER_FRAME) as they step, so a slot is a byte load at
 * pos/2 - the per-clock division and modulo the first version did (line, then clock in line) was
 * the largest single cost of an emulated instruction. */
#define EMU_FRAME_SLOTS  ((EMU_CYCLES_PER_FRAME + 1) / 2)   /* 70,938 colour clocks */

static u8 g_frameMap[EMU_FRAME_SLOTS];
static int g_busReference;                               /* --refbus */

void rt_bus_set_reference(int on)
{
    g_busReference = on;
}

static void build_frame_map(rt_slots *s)
{
    int line, idx = 0;

    for (line = 0; line < EMU_FRAME_LINES && idx < EMU_FRAME_SLOTS; line++)
    {
        const u8 *row = (line >= s->vstart && line < s->vstop) ? s->map : s->mapBlank;
        int n = EMU_LINE_COLOR_CLOCKS;

        if (n > EMU_FRAME_SLOTS - idx) n = EMU_FRAME_SLOTS - idx;
        memcpy(&g_frameMap[idx], row, (size_t)n);
        idx += n;
    }
}

/* 1 when the colour clock at `pos` (68000 cycles into the frame) belongs to DMA. */
int rt_slot_taken(rt_machine *m, long pos)
{
    if (!m->slots.valid) return 0;
    if (pos < 0 || pos >= (long)EMU_CYCLES_PER_FRAME)
    {
        pos %= (long)EMU_CYCLES_PER_FRAME;
        if (pos < 0) pos += (long)EMU_CYCLES_PER_FRAME;
    }
    return g_frameMap[(u32)pos >> 1] != RT_SLOT_CPU;
}

/* --- the reference walkers -----------------------------------------------------------------
 * The first implementation, kept behind --refbus so a run can be diffed against it: it derives
 * line and clock from the position with a division per clock and hands the copper an absolute
 * position. Nothing else uses it; it is the differential half of the fast path below. */
static int slot_taken_ref(rt_machine *m, long pos)
{
    rt_slots *s = &m->slots;
    long line, cck;
    const u8 *map;

    if (!s->valid) return 0;
    pos %= (long)EMU_CYCLES_PER_FRAME;
    if (pos < 0) pos += EMU_CYCLES_PER_FRAME;
    line = pos / EMU_LINE_CYCLES;
    cck = (pos % EMU_LINE_CYCLES) >> 1;
    if (line >= EMU_FRAME_LINES) line = EMU_FRAME_LINES - 1;
    map = (line >= s->vstart && line < s->vstop) ? s->map : s->mapBlank;
    return map[cck] != RT_SLOT_CPU;
}

static long walk_slots_ref(rt_machine *m, long pos, int clocks)
{
    int i = 0;

    while (i < clocks)
    {
        int taken = slot_taken_ref(m, pos);
        if (!taken && rt_cop_take_clock_ref(m, pos)) { pos += 2; continue; }  /* the copper */
        if (!taken && rt_blit_take_clock(m))         { pos += 2; continue; }  /* the blitter */
        pos += 2;
        if (!taken) i++;
    }
    return pos;
}

static long beam_pass_ref(rt_machine *m, long pos, int clocks)
{
    while (clocks-- > 0)
    {
        long at = pos % (long)EMU_CYCLES_PER_FRAME;
        if (at == 0) rt_cop_vblank(m);
        if (!slot_taken_ref(m, pos))
        {
            if (!rt_cop_take_clock_ref(m, pos)) rt_blit_take_clock(m);
        }
        pos += 2;
    }
    return pos;
}

/* --- the fast walkers --------------------------------------------------------------------- */

static long frame_cursor(const rt_machine *m);

/* Waits for a running blit the way the hardware makes the CPU wait: the clock keeps passing, the
 * blitter takes the clocks nobody else owns, and the caller's budget is charged for the time that
 * goes by. Returns the 68000 cycles it cost. */
long rt_blit_wait(rt_machine *m)
{
    long start = m->cyclesToTick;
    long guard = 64L * EMU_CYCLES_PER_FRAME;      /* a wedged blit must not hang the front end */

    while (m->blit.run && guard-- > 0)
    {
        if (!rt_slot_taken(m, frame_cursor(m))) rt_blit_take_clock(m);
        m->cyclesToTick -= 2;
    }
    return start - m->cyclesToTick;
}

/* One colour clock passes with the CPU not using the bus (an instruction's internal cycles, or an
 * idle frame): the copper and the blitter still take the clocks nobody else owns, and at the top
 * of the frame the copper restarts at its list. `at` is the frame position, in [0, one frame).
 *
 * The copper's state is read into locals: while it is held at a WAIT the beam has not reached, a
 * clock nobody owns only steps its one-on-one-off alternation - which is all rt_cop_take_clock
 * would do, with a call - so that step is collected and applied to the delay once at the end. */
static void bus_internal(rt_machine *m, long *atp, int clocks)
{
    rt_copper *cp = &m->copper;
    long at = *atp;
    int live = cp->installed && !cp->done;
    int waiting = cp->waiting;
    long wake = cp->wakeAt;
    int toggle = 0;

    while (clocks-- > 0)
    {
        if (at == 0)
        {
            rt_cop_vblank(m);
            toggle = 0;
            live = cp->installed && !cp->done;
            waiting = cp->waiting;
            wake = cp->wakeAt;
        }
        if (g_frameMap[(u32)at >> 1] == RT_SLOT_CPU)
        {
            int took = 0;

            if (live)
            {
                if (waiting && at < wake) toggle ^= 1;
                else
                {
                    if (toggle) { cp->delay ^= 1; toggle = 0; }
                    took = rt_cop_take_clock(m, at);
                    live = cp->installed && !cp->done;
                    waiting = cp->waiting;
                    wake = cp->wakeAt;
                }
            }
            if (!took && m->blit.run) rt_blit_take_clock(m);
        }
        at += 2;
        if (at >= (long)EMU_CYCLES_PER_FRAME) at -= (long)EMU_CYCLES_PER_FRAME;
    }
    if (toggle) cp->delay ^= 1;
    *atp = at;
}

/* The CPU's own bus words, one colour clock each: the clock the word lands on is the first one no
 * DMA source owns, every owned clock in front of it is a wait state. Returns the time it took. */
static long bus_words(rt_machine *m, long *atp, int words)
{
    rt_copper *cp = &m->copper;
    long at = *atp, spent = 0;
    int i = 0;

    while (i < words)
    {
        if (g_frameMap[(u32)at >> 1] == RT_SLOT_CPU)
        {
            int took = 0;

            if (cp->installed && !cp->done)
            {
                if (cp->waiting && at < cp->wakeAt) cp->delay ^= 1;
                else took = rt_cop_take_clock(m, at);
            }
            if (!took && m->blit.run) took = rt_blit_take_clock(m);
            if (!took) i++;
        }
        at += 2;
        if (at >= (long)EMU_CYCLES_PER_FRAME) at -= (long)EMU_CYCLES_PER_FRAME;
        spent += 2;
    }
    *atp = at;
    return spent;
}

/* Time passing without the CPU using the bus (an instruction's internal cycles, or an idle
 * frame). Returns the 68000 cycles the clock advanced, which is `cycles` rounded down to a clock.
 */
long rt_bus_idle(struct rt_machine *m, long cycles)
{
    long clocks = cycles / 2L;

    if (clocks > 0)
    {
        long at = frame_cursor(m);

        if (g_busReference) beam_pass_ref(m, at, (int)clocks);
        else                    bus_internal(m, &at, (int)clocks);
    }
    return cycles;
}

/* A CPU memory access at the moment it happens: one colour clock of chip bus per word, plus one
 * per clock the display or a running blit owns in front of it (UAE custom.cpp dma_cycle loops
 * do_cck() while the bus is allocated).
 *
 * NOT USED for the front ends' charging. Charging at the access makes the two front ends disagree:
 * each charges the accesses *it* performs, and the interpreter and the translated code do not
 * perform identical numbers of them (measured: 1456 frames against 1407 for the same instruction
 * count), which destroys the only mechanical check the project has. The instruction boundary
 * charges the same clocks from the measured word count instead, and the placement of a wait inside
 * one instruction is second-order. Kept here for the device side, where the sequence is exact. */
static long bus_access_cost(rt_machine *m, int words)
{
    long start, pos;

    if (!m->slots.valid) return 2L * (long)words;
    if (m->slots.dirty) rt_slots_update(m);
    start = frame_cursor(m);
    pos = walk_slots_ref(m, start, words);
    return pos - start;
}

/* Where in the frame the machine currently is, in 68000 clock cycles. */
static long frame_cursor(const rt_machine *m)
{
    long pos = (long)EMU_CYCLES_PER_FRAME - m->cyclesToTick;

    /* The budget is spent inside one frame, so this is a comparison in the common case; only a
     * request that forced the counter to 0 or past the frame needs the modulo. */
    if (pos < 0 || pos >= (long)EMU_CYCLES_PER_FRAME)
    {
        pos %= (long)EMU_CYCLES_PER_FRAME;
        if (pos < 0) pos += (long)EMU_CYCLES_PER_FRAME;
    }
    return pos;
}

/* MOVEM's word count is its register list, not the opcode: 0x48xx stores registers to memory and
 * 0x4Cxx loads them, both with the mask in the extension word. Charging the measured average there
 * would be wrong by up to 24 words. */
static int bus_accesses(rt_machine *m, long cost, u16 opcode, u32 pc)
{
    int accesses = (int)rt_bus_cycles[opcode];

    if ((opcode & 0xFB80u) == 0x4880u)
        accesses += count_bits(rt_read16(&m->mem, pc + 2u));
    if (accesses < 0) accesses = 0;
    /* Clamp: a memory cycle is 4 clock cycles, so an instruction cannot have more bus words than
     * half its cycle count. */
    if ((long)accesses * 2L > cost) accesses = (int)(cost / 2L);
    return accesses;
}

/* The charge itself. `fetch` is how many of the words are the instruction's own fetch, which the
 * slow reference walker places before the operand words; -1 walks them in one run (a group of
 * instructions a hand-written replacement stands in for has no single fetch length). */
static long charge(rt_machine *m, long cost, int accesses, int fetch)
{
    rt_slots *s = &m->slots;
    long at, start, spent;

    if (!s->valid) return cost;
    if (s->dirty) rt_slots_update(m);

    if (accesses < 0) accesses = 0;
    /* Clamp: a memory cycle is 4 clock cycles, so an instruction cannot have more bus words than
     * half its cycle count. */
    if ((long)accesses * 2L > cost) accesses = (int)(cost / 2L);
    at = start = frame_cursor(m);

    if (g_busReference)
    {
        long pos;

        if (fetch < 0 || fetch > accesses) fetch = accesses;
        pos = beam_pass_ref(m, start, (int)((cost - 2L * (long)accesses) / 2L));
        pos = walk_slots_ref(m, pos, fetch);
        pos = walk_slots_ref(m, pos, accesses - fetch);
        return pos - start;
    }

    /* Two parts, in the order the 68000 spends them: the instruction's internal cycles (which pass
     * through the clock at full rate, letting a running blit take the slots it wants), then its
     * memory words at one colour clock each, split with rt_inst_len so the fetch part can never
     * exceed the total. UAE charges accesses one clock each (mem_access_delay_* ->
     * wait_cpu_cycle_read); the other two clocks of the memory cycle are the 68000's address phase
     * and are inside `cost`. */
    {
        int clocks = (int)((cost - 2L * (long)accesses) / 2L);

        bus_internal(m, &at, clocks);
        spent = 2L * (long)clocks;
    }
    spent += bus_words(m, &at, accesses);
    return spent;
}

long rt_bus_charge(struct rt_machine *m, long cost, u16 opcode, u32 pc)
{
    if (!m->slots.valid) return cost;
    return charge(m, cost, bus_accesses(m, cost, opcode, pc), (int)rt_inst_len[opcode]);
}

long rt_bus_charge_words(struct rt_machine *m, long cost, int words)
{
    return charge(m, cost, words, -1);
}

/* --- the --slots report -------------------------------------------------------------------- */

static char slot_char(int owner)
{
    if (owner >= RT_SLOT_BPL0 && owner <= RT_SLOT_BPL7)
        return (char)('0' + (owner - RT_SLOT_BPL0));
    if (owner >= RT_SLOT_SPR0 && owner <= RT_SLOT_SPR7)
        return (char)('a' + (owner - RT_SLOT_SPR0));
    if (owner >= RT_SLOT_AUD0 && owner <= RT_SLOT_AUD3)
        return (char)('A' + (owner - RT_SLOT_AUD0));
    switch (owner)
    {
    case RT_SLOT_STROBE:  return 'S';
    case RT_SLOT_REFRESH: return 'R';
    case RT_SLOT_DISK:    return 'D';
    case RT_SLOT_COPPER:  return 'C';
    case RT_SLOT_BLITTER: return 'T';
    default:              return '.';
    }
}

void rt_slots_print(rt_machine *m)
{
    rt_slots *s = &m->slots;
    int i;

    if (!s->valid) rt_slots_update(m);
    printf("slots: BPLCON0 %04lX %d plane(s), %s; DMACON %04lX%s%s%s\n",
           (unsigned long)s->bplcon0, s->planes, s->hires ? "hires" : "lores",
           (unsigned long)s->dmacon,
           (s->dmacon & SLOT_DMACON_DMAEN) ? " dmaen" : "",
           (s->dmacon & SLOT_DMACON_BPLEN) ? " bplen" : "",
           (s->dmacon & SLOT_DMACON_SPREN) ? " spren" : "");
    printf("slots: DDF %04lX..%04lX = %d word(s)/line, fetch group %d clocks (%d free); "
           "DIW %04lX..%04lX = lines %d..%d\n",
           (unsigned long)s->ddfstrt, (unsigned long)s->ddfstop, s->words, s->fetchStart,
           s->groupFree, (unsigned long)s->diwstrt, (unsigned long)s->diwstop,
           s->vstart, s->vstop);
    rt_cop_report(m);
    printf("slots: refresh 3/5/7/9; disk 13; audio 17/19/21/23; sprites 25..; "
           "bitplane window at DDFSTRT\n");
    printf("slots: %d DMA clock(s) on a display line, %d on a blank line; "
           "%lu of 70937 per frame = CPU share %lu.%lu%%\n",
           s->dmaDisplay, s->dmaBlank, (unsigned long)s->frameDma,
           (unsigned long)(s->cpuShare / 10), (unsigned long)(s->cpuShare % 10));
    printf("slots: sprite status:");
    for (i = 0; i < 8; i++)
        printf(" %d:%04lX/%04lX%s", i, (unsigned long)s->sprpos[i], (unsigned long)s->sprctl[i],
               (s->sprctl[i] & 0x80) ? "*" : "");
    printf("\n");
    printf("slots: audio period:");
    for (i = 0; i < 4; i++)
        printf(" %d:%lu", i, (unsigned long)s->audper[i]);
    printf("\n");
    printf("slots: line map (display line):\n");
    for (i = 0; i < EMU_LINE_COLOR_CLOCKS; i += 76)
    {
        int k, n = EMU_LINE_COLOR_CLOCKS - i;
        if (n > 76) n = 76;
        printf("slots: %3d |", i);
        for (k = 0; k < n; k++) putchar(slot_char(s->map[i + k]));
        printf("|\n");
    }
    printf("slots: legend: . cpu  S strobe  R refresh  D disk  A-D audio  a-h sprite  "
           "0-7 bitplane  C copper  T blitter\n");

    /* The bitplane diagram, printed the way UAE's debug_cycle_diagram() labels it: one character
     * per colour clock of a fetch group, '.' for a clock the CPU gets. */
    printf("slots: bitplane diagram (UAE cycle_diagram_table[0][%d][%d]): ",
           s->hires ? 1 : 0, s->planes);
    for (i = 0; i < s->fetchStart; i++)
    {
        int owner = diagram_owner(s->planes, s->hires, i);
        putchar(owner < 0 ? '.' : (char)('0' + owner));
    }
    printf("  (%d fetch(es), %d free per group)\n",
           s->fetchStart - s->groupFree, s->groupFree);
}

/* --- the diagram self-test -----------------------------------------------------------------
 * These strings were computed independently from UAE's create_cycle_diagram_table
 * (custom.cpp: cycle_sequences, fetchstarts, fm_maxplanes), not by this file's code. */
static const struct { int hires, planes; const char *pattern; } g_diagrams[] =
{
    { 0, 1, ".......0" },
    { 0, 2, "...1...0" },
    { 0, 3, "...1.2.0" },
    { 0, 4, ".3.1.2.0" },
    { 0, 5, ".3.1.240" },
    { 0, 6, ".351.240" },
    { 0, 7, ".3516240" },
    { 0, 8, "73516240" },
    { 1, 1, "...0" },
    { 1, 2, ".1.0" },
    { 1, 3, ".120" },
    { 1, 4, "3120" }
};

int rt_slots_selftest(void)
{
    int i, c, bad = 0;

    for (i = 0; i < (int)(sizeof g_diagrams / sizeof g_diagrams[0]); i++)
    {
        int start = g_diagrams[i].hires ? 4 : 8;
        char got[9];

        for (c = 0; c < start; c++)
        {
            int owner = diagram_owner(g_diagrams[i].planes, g_diagrams[i].hires, c);
            got[c] = owner < 0 ? '.' : (char)('0' + owner);
        }
        got[start] = 0;
        if (strcmp(got, g_diagrams[i].pattern) != 0)
        {
            printf("slots: FAIL %s %d plane(s): got \"%s\", UAE's table says \"%s\"\n",
                   g_diagrams[i].hires ? "hires" : "lores", g_diagrams[i].planes,
                   got, g_diagrams[i].pattern);
            bad++;
        }
    }
    printf("slots: cycle-diagram self-test: %s (%d pattern(s))\n",
           bad == 0 ? "PASS" : "FAIL",
           (int)(sizeof g_diagrams / sizeof g_diagrams[0]));
    return bad;
}
