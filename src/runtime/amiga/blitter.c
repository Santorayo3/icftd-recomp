/* The Amiga blitter (OCS), in immediate mode.
 *
 * Why this exists: the engine does not draw with `graphics.BltBitMap`. Its compositor and its mask
 * builder write the blitter registers directly - BLTCON0/BLTCON1, the four pointers, the modulos,
 * BLTSIZE - and let the hardware do the work (FUN_0001E504 for the 1-bit mask, FUN_0001E8C8 for
 * every picture). The earlier "the game never touches the video hardware" note came from a scan
 * for *absolute* references and missed exactly this, because the engine addresses the registers
 * through a base register.
 *
 * Only what the engine uses is modelled, but that is the linear data path in full: minterms,
 * A/B shifts, first/last-word masks, modulos, both directions and the fill mode. The blit runs
 * when BLTSIZE is written (no DMA queue, no busy bit: by the time the game's next instruction
 * reads the bitmap, the hardware would have finished anyway).
 */
#include "blitter.h"
#include "display.h"
#include "platform.h"
#include "slots.h"

#include <stdio.h>
#include <string.h>

/* Word access, direct. A blit moves tens of thousands of words and every one of them went through
 * rt_read16/rt_write16 - a call, a mask and a range check per word per channel - which was most of
 * what a blit cost. The rule is unchanged and stays here: inside the RAM block the two bytes are
 * read and written as the big-endian word the blitter sees; anything else goes to the checked
 * accessor, which masks, counts m->bad and reports. */
static u16 rd16(rt_machine *m, u32 a)
{
    a &= 0xFFFFFFu;
    if (a + 1u < m->mem.size)
        return (u16)(((u32)m->mem.base[a] << 8) | (u32)m->mem.base[a + 1]);
    return (u16)rt_read16(&m->mem, a);
}

/* Every write goes through here: a blit whose geometry is wrong must show up as a report, not as
 * silent corruption of whatever follows the destination in the heap. */
static void wr16(rt_machine *m, u32 a, u16 v)
{
    a &= 0xFFFFFFu;
    if (a + 1u < m->mem.size)
    {
        m->mem.base[a] = (u8)(v >> 8);
        m->mem.base[a + 1] = (u8)v;
        return;
    }
    m->blitDrops++;
    if (m->blitLogs < 200)
    {
        m->blitLogs++;
        printf("emu: blit write outside RAM at %08lX (con0 %04lX con1 %04lX A %06lX B %06lX "
               "C %06lX D %06lX mods %ld/%ld/%ld/%ld size %04lX) from pc %06lX\n",
               (unsigned long)a, (unsigned long)m->blit.con0, (unsigned long)m->blit.con1,
               (unsigned long)m->blit.apt, (unsigned long)m->blit.bpt,
               (unsigned long)m->blit.cpt, (unsigned long)m->blit.dpt,
               (long)m->blit.amod, (long)m->blit.bmod, (long)m->blit.cmod,
               (long)m->blit.dmod, (unsigned long)m->blit.size, (unsigned long)m->pc);
    }
}

/* The minterm bit for the three data inputs A, B and C has the index 4*A + 2*B + C. It is a
 * bitwise boolean function, so it evaluates on whole words: the result is the OR of the product
 * terms the minterm selects, each (a ? A : ~A) & (b ? B : ~B) & (c ? C : ~C). Sixteen per-bit
 * iterations become a handful of word operations, which matters: the intro runs tens of thousands
 * of blits per second.
 *
 * The one the engine uses for ordinary blits (BLTCON0 = 0x0FCA) has the short form "D = A ? B : C",
 * and the plain pass-throughs are one operation each; those are named here because they are what
 * the intro actually executes. A generic "expand the minterm into a term array once per row" was
 * measured *slower* (61.5 ms against 58.0): the array traffic cost more than the predictable bit
 * tests it saved. */
static u16 alu_word(u16 minterm, u16 aw, u16 bw, u16 cw)
{
    u16 na, nb, nc, out;

    switch (minterm)
    {
    case 0x00u: return 0;
    case 0xFFu: return 0xFFFFu;
    case 0xF0u: return aw;
    case 0x0Fu: return (u16)~aw;
    case 0xCCu: return bw;
    case 0x33u: return (u16)~bw;
    case 0xAAu: return cw;
    case 0x55u: return (u16)~cw;
    case 0xCAu: return (u16)((aw & bw) | (~aw & cw));   /* D = A ? B : C */
    case 0xACu: return (u16)((aw & cw) | (~aw & bw));
    default: break;
    }

    na = (u16)~aw;
    nb = (u16)~bw;
    nc = (u16)~cw;
    out = 0;
    if (minterm & 0x01u) out |= (u16)(na & nb & nc);
    if (minterm & 0x02u) out |= (u16)(na & nb & cw);
    if (minterm & 0x04u) out |= (u16)(na & bw & nc);
    if (minterm & 0x08u) out |= (u16)(na & bw & cw);
    if (minterm & 0x10u) out |= (u16)(aw & nb & nc);
    if (minterm & 0x20u) out |= (u16)(aw & nb & cw);
    if (minterm & 0x40u) out |= (u16)(aw & bw & nc);
    if (minterm & 0x80u) out |= (u16)(aw & bw & cw);
    return out;
}

/* How far a channel pointer moves from one row to the next. The pointer advances as the words of
 * the row are fetched and the modulo is added at the end of the row, so the displacement is
 * 2*words + mod, *not* mod. The engine relies on this: the intro's flipped picture blits pass
 * mod = -(bpr + 2*words) exactly so that 2*words + mod comes out as -bpr (walking *up* the bitmap
 * one row at a time). Treating mod as the stride (which this file did) sent those blits 82 bytes
 * per row through the heap, overran the plane, and erased the 40-byte BitMap header holding the
 * other plane pointers.
 *
 * BLTxPTH/BLTxPTL are *word* pointers: bit 0 of the low register is not implemented, so a row
 * displacement that comes out odd loses that bit. The engine counts on exactly that. FUN_00011208
 * fetches w+2 bytes per row - one word more than the picture is wide, to fill the shift register,
 * silenced by BLTALWM = 0 (00011318) - and sets BLTAMOD = BLTBMOD = -1 (000112be/000112c6), i.e.
 * a displacement of w+1, while the picture and mask buffers are w bytes per row: FUN_0001e504
 * allocates h*w bytes for the mask and steps its own one-word blits by AMOD = w-2, which is w for
 * a 2-byte fetch. The flight's five sprite blits confirm w = 38 without any picture: their B
 * pointers are 0x3A0 = 928 bytes apart, and 928 = 16 (MemHeader) + 24 rows * 38 bytes. Dropped to
 * w, the narrow path also agrees with the function's other two paths (clipped: mod k-2 with a
 * w-k+2 fetch; wide: mod w+m-bpr with a bpr-m fetch); reading the pointers as byte pointers
 * sheared every picture row by 8 px, which is what the flight's player and plane showed. */
static int row_advance(const rt_machine *m, s32 mod, int words, int descending)
{
    s32 step = descending ? mod - 2 * words : 2 * words + mod;
    if (m->blitBytePtr) return (int)step;            /* --byteptr: the wrong model, bisection */
    return (int)(step & ~(s32)1);
}

static void blit_row(rt_machine *m, int row, int words, int descending, u16 *holdA, u16 *holdB)
{
    rt_blitter *b = &m->blit;
    u16 minterm = (u16)(b->con0 & 0xFF);
    /* BLTCON0 bits 15-12 are the A shift; bits 11-8 are the channel enables USEA/USEB/USEC/USED.
     * The B shift lives in BLTCON1 bits 15-12 - reading it from BLTCON0's bits 11-8 (which this
     * file did) turned the enables into a shift, so every ordinary blit (BLTCON0 = 0x0FCA) ran B
     * through a 15-pixel shift against the mask and the picture came out torn, thin and full of
     * holes. */
    int ash = (b->con0 >> 12) & 0xF;
    int bsh = (b->con1 >> 12) & 0xF;
    int useA = (b->con0 & 0x0800) != 0, useB = (b->con0 & 0x0400) != 0;
    int useC = (b->con0 & 0x0200) != 0, useD = (b->con0 & 0x0100) != 0;
    /* Row-to-row displacement: see row_advance(). */
    int sA = row_advance(m, b->amod, words, descending);
    int sB = row_advance(m, b->bmod, words, descending);
    int sC = row_advance(m, b->cmod, words, descending);
    int sD = row_advance(m, b->dmod, words, descending);
    s32 aoff = (s32)b->apt + (s32)row * sA;
    s32 boff = (s32)b->bpt + (s32)row * sB;
    s32 coff = (s32)b->cpt + (s32)row * sC;
    s32 doff = (s32)b->dpt + (s32)row * sD;
    int step = descending ? -2 : 2;
    int fill = (b->con1 & 0x0018) != 0 && !useA && !useB && !useC;
    int w;

    for (w = 0; w < words; w++)
    {
        int i = descending ? (words - 1 - w) : w;
        s32 off = (s32)i * (s32)step;
        u16 aw, bw, cw, dw = 0;

        if (fill)
        {
            /* Area fill: the blitter repeats the fill bit (inclusive or exclusive), and the two
             * word masks trim the first and last word of the row. */
            int incl = (b->con1 & 0x0008) != 0;
            dw = (u16)(incl ? 0xFFFF : 0x0000);
            if (i == 0) dw &= b->afwm;
            if (i == words - 1) dw &= b->alwm;
            if (useD) wr16(m, (u32)(doff + off), dw);
            continue;
        }

        /* The A and B channels run through 16-bit shift registers. To displace a picture right by
         * `s` pixels the pixel at source bit 15-p has to land at bit 15-p-s, so the hardware pairs
         * the word fetched *before* this one with the current word and shifts the 32-bit pair
         * RIGHT:
         *
         *     out = ((hold << 16) | cur) >> ASH            (low 16 bits)
         *
         * which gives `cur` at ASH = 0, `cur >> 1` for the first word at ASH = 1, and
         * (cur << 15) | (next >> 1) for the second - i.e. the picture slides right by exactly ASH.
         * Two details are the hardware's and matter:
         *
         *  - AFWM/ALWM mask the word as it is *fetched*, before the shift register (the shift then
         *    carries the masked bits along). Masking the shifted output instead removes the wrong
         *    pixels. The engine depends on this: when a picture is blitted with a shift and is not
         *    clipped at the right it extends the blit by one word, sets ALWM = 0 and shrinks the A
         *    modulo by 2 (image 0x1EA4A..0x1EA5C) - that trailing word exists only to receive the
         *    last ASH pixels the shift register pushes past the end of the row, and ALWM = 0
         *    silences the extra fetched word, not the bits already in the register. Masking after
         *    the shift blanked the whole word, so every shifted sprite lost its last ASH columns:
         *    a right-edge cut of up to 15 pixels that changed size with the scroll position.
         *  - The hold register is cleared once per blit, not per line, so the first word of each
         *    row shifts in the tail of the previous row; clearing it per row loses those bits. */
        if (useA)
        {
            u16 cur = (u16)rd16(m, (u32)(aoff + off));
            if (i == 0) cur &= b->afwm;
            if (i == words - 1) cur &= b->alwm;
            /* Descending blits fetch backwards and shift by (16 - ASH) with the pair the other way
             * round; the engine never sets DESC, but the data path is transcribed faithfully so a
             * DESC blit cannot silently take the ascending route. */
            if (descending) aw = (u16)((((u32)cur << 16) | (u32)*holdA) >> (16 - ash));
            else if (ash == 0) aw = cur;              /* the pair shifts to the word itself */
            else            aw = (u16)((((u32)*holdA << 16) | (u32)cur) >> ash);
            *holdA = cur;
        }
        else aw = b->adat;
        if (useB)
        {
            u16 cur = (u16)rd16(m, (u32)(boff + off));
            if (descending) bw = (u16)((((u32)cur << 16) | (u32)*holdB) >> (16 - bsh));
            else if (bsh == 0) bw = cur;
            else            bw = (u16)((((u32)*holdB << 16) | (u32)cur) >> bsh);
            *holdB = cur;
        }
        else bw = b->bdat;

        cw = useC ? rd16(m, (u32)(coff + off)) : b->cdat;

        if (useD) wr16(m, (u32)(doff + off), alu_word(minterm, aw, bw, cw));
    }
}

/* The blitter is not free. It owns the bus for its DMA cycles, and the engine waits for it -
 * WaitBlit, or a DMACONR poll - before it touches the result. Charging those slots to the frame
 * budget is what makes a blit-heavy scene lose frames the way the original does: the picture is
 * still produced here in one go (the bytes are identical), only the clock moves. The slots are
 * walked through the same map the CPU uses (slots.c, rt_blit_charge), because it is the same
 * chip bus - with five bitplanes the display takes five of every eight clocks, and the blitter
 * only gets the rest. */

/* Cycles the blitter spends per output word, in colour clocks: UAE blitter.cpp:1165,
 *
 *     blit_cyclecount = 4 - (shifter_skip_b + shifter_skip_y);
 *     shifter_skip_b  = B channel off                    (blitter.cpp:1131)
 *     shifter_skip_y  = not (C and D both on)            (blitter.cpp:1156)
 *
 * i.e. a four-channel blit takes four clocks per word and each channel that does not need its own
 * fetch is skipped - it is *not* one clock per enabled channel, which is what this used to charge
 * (an A-only blit is two clocks in the original, not one). Line mode never fetches D, and in fill
 * mode with D on and C off the D cycle is needed after all (blitter.cpp:1157-1160). */
static int blit_words_cost(const rt_blitter *b)
{
    int line = (b->con1 & 0x0001u) != 0;                 /* BLTLINE */
    int fill = !line && (b->con1 & 0x0008u) != 0;        /* BLTFILL */
    int skipB = (b->con0 & 0x0400u) == 0;
    int skipY;

    if (line) skipY = 1;
    else skipY = (b->con0 & 0x0300u) != 0x0300u;         /* not both C and D */
    if (fill && (b->con0 & 0x0300u) == 0x0100u) skipY = 0;   /* D on, C off: needed */
    return 4 - skipB - skipY;
}

u32 rt_blit_perf;                        /* 8254 counts spent in the pixel loop, for --perf */

void rt_blit_run(rt_machine *m)
{
    rt_blitter *b = &m->blit;
    int words = (b->size & 0x3Fu) == 0 ? 64 : (b->size & 0x3F);
    int rows = (b->size >> 6) & 0x3FF;
    int descending = (b->con1 & 0x0002) != 0;
    int r;

    if (rows == 0) return;
    m->blits++;
    /* Spent before the blit does its work, so a frame boundary inside it sees the same state the
     * interpreter sees. A single blit may cost several frames: the budget carries the debt (see
     * oracle_tick), which is exactly "the CPU is stuck waiting for the blitter". */
    {
        long cost = rt_blit_charge(m, words, rows, blit_words_cost(b));
        long cap = 16L * EMU_CYCLES_PER_FRAME;
        if (cost > cap)
        {
            if (m->progress && m->blitLogs < 20)
            {
                m->blitLogs++;
                printf("emu: blit %dx%d costs %ld cycles, clamped to %ld (frame %lu)\n",
                       words * 16, rows, cost, cap, (unsigned long)m->frame);
            }
            cost = cap;
        }
        m->cyclesToTick -= cost;
        m->blitCycles += cost;
        /* The blit is device time too: while it runs the music and the CIA timers keep going. */
        rt_time_run(m, cost);
    }
    /* --blitlog: every blit's geometry plus where it lands in the bitmap on screen (D is a plane
     * pointer, so the first row is (D - plane) / bytesPerRow). That is how the tile renderer
     * (FUN_00011512) and the sprite path (FUN_0000e03c) are measured against the view. */
    if (m->blitLog && m->frame >= m->blitLogFrame && m->blitLogN < 600)
    {
        u32 sbm = rt_gfx_screen_bitmap(m);
        int bpr = sbm != 0 ? (int)rt_read16(&m->mem, sbm + 0) : 0;
        int depth = sbm != 0 ? (int)rt_read8(&m->mem, sbm + 5) : 0;
        int p, where = -1;
        for (p = 0; bpr > 0 && p < depth && p < 8; p++)
        {
            u32 plane = rt_read32(&m->mem, sbm + 8 + 4 * p);
            if (plane != 0 && b->dpt >= plane && (b->dpt - plane) < (u32)(bpr * rows))
            {
                where = (int)(b->dpt - plane) / bpr;
                break;
            }
        }
        m->blitLogN++;
        printf("     blit f %lu pc %06lX con0 %04lX con1 %04lX A %06lX B %06lX C %06lX D %06lX "
               "mods %ld/%ld/%ld/%ld afwm %04lX alwm %04lX %dwx%dr size %04lX -> %s%s\n",
               (unsigned long)m->frame, (unsigned long)m->pc, (unsigned long)b->con0,
               (unsigned long)b->con1,
               (unsigned long)b->apt, (unsigned long)b->bpt, (unsigned long)b->cpt,
               (unsigned long)b->dpt, (long)b->amod, (long)b->bmod, (long)b->cmod,
               (long)b->dmod, (unsigned long)b->afwm, (unsigned long)b->alwm,
               words * 16, rows, (unsigned long)b->size,
               where >= 0 ? "screen" : "elsewhere",
               (2 * words + (long)b->amod != row_advance(m, b->amod, words, 0) ||
               2 * words + (long)b->bmod != row_advance(m, b->bmod, words, 0)) ? " [wordptr]" : "");
        if (where >= 0)
            printf("          screen plane row %d..%d (bpr %d)\n", where, where + rows - 1, bpr);
    }
    /* --progress: a blit that points at a plane of the bitmap on screen tells which rows it can
     * reach - D is a plane pointer, so the first row is (D - plane) / bytesPerRow. That is how the
     * tile renderer (FUN_00011512, raw $DFF050/$DFF054/$DFF058) is measured against the view. */
    if (m->progress)
    {
        u32 sbm = rt_gfx_screen_bitmap(m);
        if (sbm != 0)
        {
            int bpr = (int)rt_read16(&m->mem, sbm + 0);
            int depth = (int)rt_read8(&m->mem, sbm + 5);
            int p;
            for (p = 0; bpr > 0 && p < depth && p < 8; p++)
            {
                u32 plane = rt_read32(&m->mem, sbm + 8 + 4 * p);
                if (plane != 0 && b->dpt >= plane && (b->dpt - plane) < (u32)(bpr * rows))
                {
                    int row = (int)(b->dpt - plane) / bpr;
                    rt_gfx_screen_touched(m, row, row + rows - 1);
                    break;
                }
            }
        }
    }
    /* Log only blits into the screen raster (the two animation bitmaps live just above the
     * loaded pictures' scratch buffers), because only those can reach the screen. */
    if (m->dffLog && m->blitLogs < 12 && b->dpt < 0x5B000u)
    {
        m->blitLogs++;
        printf("     blit con0 %04lX con1 %04lX A %06lX B %06lX C %06lX D %06lX mods %ld/%ld/%ld/%ld size %04lX\n",
               (unsigned long)b->con0, (unsigned long)b->con1, (unsigned long)b->apt,
               (unsigned long)b->bpt, (unsigned long)b->cpt, (unsigned long)b->dpt,
               (long)b->amod, (long)b->bmod, (long)b->cmod, (long)b->dmod,
               (unsigned long)b->size);
    }
    if ((b->con1 & 0x0001) != 0)
    {
        /* Line mode is only used for AreaFill on the Amiga; the engine never needs it. */
        if (m->dffLog) printf("     blit: line mode ignored (con1 %04lX)\n", (unsigned long)b->con1);
        return;
    }
    /* --spritelog: the engine's sprite blit (FUN_00011208, runtime 0x15208..0x153A0) is the one the
     * flight's objects use. Record its geometry, the words it reads and the words it leaves, so the
     * data can be checked against UAE's algorithm offline - no screenshot needed. */
    {
        FILE *sl = (FILE *)m->spriteLog;
        int trace = sl != 0 && m->spriteLogN < 4000 && m->frame >= m->spriteLogFrom &&
                    m->pc >= 0x15208u && m->pc < 0x153A0u;
        u16 beforeA[8], beforeB[8], beforeD[8];
        int k;
        if (trace)
        {
            m->spriteLogN++;
            for (k = 0; k < 8; k++)
            {
                beforeA[k] = rd16(m, b->apt + (u32)(2 * k));
                beforeB[k] = rd16(m, b->bpt + (u32)(2 * k));
                beforeD[k] = rd16(m, b->dpt + (u32)(2 * k));
            }
            fprintf(sl, "blit f %lu pc %06lX con0 %04lX con1 %04lX "
                        "A %06lX B %06lX C %06lX D %06lX mods %ld/%ld/%ld/%ld "
                        "afwm %04lX alwm %04lX %dwx%dr size %04lX inram %d%d%d\n",
                    (unsigned long)m->frame, (unsigned long)m->pc, (unsigned long)b->con0,
                    (unsigned long)b->con1, (unsigned long)b->apt, (unsigned long)b->bpt,
                    (unsigned long)b->cpt, (unsigned long)b->dpt, (long)b->amod, (long)b->bmod,
                    (long)b->cmod, (long)b->dmod, (unsigned long)b->afwm, (unsigned long)b->alwm,
                    words * 16, rows, (unsigned long)b->size,
                    b->apt + (u32)(rows * row_advance(m, b->amod, words, 0)) <= m->mem.size,
                    b->bpt + (u32)(rows * row_advance(m, b->bmod, words, 0)) <= m->mem.size,
                    b->dpt + (u32)(rows * row_advance(m, b->dmod, words, 0)) <= m->mem.size);
        }
        {
            /* The shift registers' hold words start empty for each blit (not each line) and then
             * carry the last fetched word along, including across a line boundary. A descending
             * blit walks the rows downwards from the start pointer, which the negative stride
             * above already does - the engine never sets DESC, so this ordering is unexercised but
             * self-consistent. */
            u16 holdA = 0, holdB = 0;
            u32 pt0 = plat_pit_now();
            for (r = 0; r < rows; r++)
                blit_row(m, r, words, descending ? 1 : 0, &holdA, &holdB);
            if (pt0 != 0) rt_blit_perf += plat_pit_now() - pt0;
        }
        if (trace)
        {
            fprintf(sl, "  mask  A:");
            for (k = 0; k < 8; k++) fprintf(sl, " %04lX", (unsigned long)beforeA[k]);
            fprintf(sl, "\n  src   B:");
            for (k = 0; k < 8; k++) fprintf(sl, " %04lX", (unsigned long)beforeB[k]);
            fprintf(sl, "\n  dst   C:");
            for (k = 0; k < 8; k++) fprintf(sl, " %04lX", (unsigned long)beforeD[k]);
            fprintf(sl, "\n  result D:");
            for (k = 0; k < 8; k++)
                fprintf(sl, " %04lX", (unsigned long)rd16(m, b->dpt + (u32)(2 * k)));
            fprintf(sl, "\n");
            fflush(sl);
        }
    }
    /* The hardware leaves the pointer registers *advanced* past the last word it wrote (2 bytes per
     * word fetched, plus the modulo at the end of every line), and the engine chains blits on that:
     * its tile renderer (FUN_00011512 / FUN_00011748 / FUN_000117f8 ...) writes BLTDPT once per
     * column and then issues 20 blits of one tile each, letting D walk down the screen. Without the
     * write-back every one of those 20 tiles landed on the same 10 rows, which is why the world
     * carried content only down to row ~110 instead of 199. */
    {
        int sa = row_advance(m, b->amod, words, descending);
        int sb = row_advance(m, b->bmod, words, descending);
        int sc = row_advance(m, b->cmod, words, descending);
        int sd = row_advance(m, b->dmod, words, descending);
        if ((b->con0 & 0x0100u) != 0) b->dpt += (u32)(rows * sd);
        if ((b->con0 & 0x0800u) != 0) b->apt += (u32)(rows * sa);
        if ((b->con0 & 0x0400u) != 0) b->bpt += (u32)(rows * sb);
        if ((b->con0 & 0x0200u) != 0) b->cpt += (u32)(rows * sc);
    }
}

/* Register write from the emulated 68000. `reg` is the offset from $DFF000. */
void rt_custom_write16(rt_machine *m, u16 reg, u16 v)
{
    rt_blitter *b = &m->blit;

    /* The register file keeps what was written: the display registers (BPLCON0 at $100, the DDF
     * window, DIW, the sprites) are the state the slot map is built from, and a read-back must
     * return it. DMACON is the one set/clear register, so its effective value is accumulated. */
    if (reg != 0x096u)
        m->custom[(reg & 0x1FFu) >> 1] = v;
    else
    {
        u16 cur = m->custom[0x096 >> 1];
        cur = (u16)(((v & 0x8000u) != 0) ? (cur | (v & 0x7FFFu)) : (cur & ~(v & 0x7FFFu)));
        m->custom[0x096 >> 1] = cur;
    }
    m->slots.dirty = 1;

    /* Paula's four channels: $DFF0A0..$DFF0DE (their state lives in audio.c). */
    if (reg >= 0x0A0u && reg <= 0x0DEu)
    {
        rt_audio_write16(m, reg, v);
        return;
    }
    switch (reg)
    {
    case 0x040: b->con0 = v; break;
    case 0x042: b->con1 = v; break;
    case 0x044: b->afwm = v; break;
    case 0x046: b->alwm = v; break;
    case 0x048: b->cpt = (b->cpt & 0x0000FFFFu) | ((u32)v << 16); break;
    case 0x04A: b->cpt = ((b->cpt & 0xFFFF0000u) | v) & ~1u; break;
    case 0x04C: b->bpt = (b->bpt & 0x0000FFFFu) | ((u32)v << 16); break;
    case 0x04E: b->bpt = ((b->bpt & 0xFFFF0000u) | v) & ~1u; break;
    case 0x050: b->apt = (b->apt & 0x0000FFFFu) | ((u32)v << 16); break;
    case 0x052: b->apt = ((b->apt & 0xFFFF0000u) | v) & ~1u; break;
    case 0x054: b->dpt = (b->dpt & 0x0000FFFFu) | ((u32)v << 16); break;
    case 0x056: b->dpt = ((b->dpt & 0xFFFF0000u) | v) & ~1u; break;   /* word pointer: no bit 0 */
    case 0x058: b->size = v; rt_blit_run(m); break;      /* writing BLTSIZE starts the blit */
    case 0x060: b->cmod = (s16)v; break;
    case 0x062: b->bmod = (s16)v; break;
    case 0x064: b->amod = (s16)v; break;
    case 0x066: b->dmod = (s16)v; break;
    case 0x070: b->cdat = v; break;
    case 0x072: b->bdat = v; break;
    case 0x074: b->adat = v; break;
    case 0x096: rt_audio_dmacon(m, v); break;   /* DMACON: audio DMA bits, master DMAEN */
    default:    break;                          /* the register file already holds it */
    }
}
