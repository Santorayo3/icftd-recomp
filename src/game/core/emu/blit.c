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
#include "blit.h"
#include "platform.h"
#include "m68k.h"

#include <stdio.h>
#include <string.h>

static u16 rd16(emu_machine *m, u32 a) { return (u16)emu_read16(&m->mem, a); }

/* Every write goes through here: a blit whose geometry is wrong must show up as a report, not as
 * silent corruption of whatever follows the destination in the heap. */
static void wr16(emu_machine *m, u32 a, u16 v)
{
    if (a + 1u >= m->mem.size)
    {
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
                   (long)m->blit.dmod, (unsigned long)m->blit.size,
                   (unsigned long)m68k_get_reg(0, M68K_REG_PC));
        }
        return;
    }
    emu_write16(&m->mem, a, v);
}

/* One bit of the minterm: the index is 4*A + 2*B + C (A/B/C = the three data inputs). */
static int alu(u16 minterm, int a, int b, int c)
{
    return (int)((minterm >> ((a << 2) | (b << 1) | c)) & 1u);
}

static void blit_row(emu_machine *m, int row, int words, int descending)
{
    emu_blitter *b = &m->blit;
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
    /* Row-to-row displacement. The pointer advances as the words of the row are fetched and the
     * modulo is added at the end of the row, so the displacement is 2*words + mod, *not* mod. The
     * engine relies on this: the intro's flipped picture blits pass mod = -(bpr + 2*words) exactly
     * so that 2*words + mod comes out as -bpr, walking up the bitmap one row at a time. Treating
     * mod as the stride (which this file did) sent those blits 82 bytes per row through the heap,
     * overrunning the plane and erasing the bitmap header that held the other plane pointers. */
    int sA = descending ? (int)b->amod - 2 * words : 2 * words + (int)b->amod;
    int sB = descending ? (int)b->bmod - 2 * words : 2 * words + (int)b->bmod;
    int sC = descending ? (int)b->cmod - 2 * words : 2 * words + (int)b->cmod;
    int sD = descending ? (int)b->dmod - 2 * words : 2 * words + (int)b->dmod;
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
        int bit;
        u16 mask = 0xFFFF;

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
         *     out = ((prev << 16) | cur) >> ASH            (low 16 bits)
         *
         * which gives `cur` at ASH = 0, `cur >> 1` for the first word at ASH = 1, and
         * (cur << 15) | (next >> 1) for the second - i.e. the picture slides right by exactly ASH.
         * The pair register starts empty at the head of every row, so the first word shifts zeros
         * in. (Pairing (cur, next) and shifting left - what this did - is the same expression only
         * at ASH = 0; for any other shift it moves the data the wrong way and by twice the amount,
         * which is why unshifted blits were always fine while the shifted picture blits came out
         * displaced and full of holes where the mask and the picture no longer agreed.) */
        if (useA)
        {
            u16 cur = (u16)rd16(m, (u32)(aoff + off));
            u16 prv = (i == 0) ? (u16)0 : (u16)rd16(m, (u32)(aoff + off - step));
            aw = (u16)((((u32)prv << 16) | (u32)cur) >> ash);
            if (i == 0) aw &= b->afwm;
            if (i == words - 1) aw &= b->alwm;
        }
        else aw = b->adat;
        if (useB)
        {
            u16 cur = (u16)rd16(m, (u32)(boff + off));
            u16 prv = (i == 0) ? (u16)0 : (u16)rd16(m, (u32)(boff + off - step));
            bw = (u16)((((u32)prv << 16) | (u32)cur) >> bsh);
        }
        else bw = b->bdat;

        cw = useC ? rd16(m, (u32)(coff + off)) : b->cdat;
        if (useD) dw = rd16(m, (u32)(doff + off));

        {
            u16 out = 0;
            for (bit = 15; bit >= 0; bit--)
            {
                int a = (aw >> bit) & 1, bb = (bw >> bit) & 1, c = (cw >> bit) & 1;
                out = (u16)((out << 1) | (u16)alu(minterm, a, bb, c));
            }
            if (useD) wr16(m, (u32)(doff + off), out);
        }
        (void)mask;
    }
}

void emu_blit_run(emu_machine *m)
{
    emu_blitter *b = &m->blit;
    int words = (b->size & 0x3Fu) == 0 ? 64 : (b->size & 0x3F);
    int rows = (b->size >> 6) & 0x3FF;
    int descending = (b->con1 & 0x0002) != 0;
    int r;

    if (rows == 0) return;
    m->blits++;
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
    for (r = 0; r < rows; r++)
        blit_row(m, descending ? (rows - 1 - r) : r, words, 0);
}

/* Register write from the emulated 68000. `reg` is the offset from $DFF000. */
void emu_custom_write16(emu_machine *m, u16 reg, u16 v)
{
    emu_blitter *b = &m->blit;

    switch (reg)
    {
    case 0x040: b->con0 = v; break;
    case 0x042: b->con1 = v; break;
    case 0x044: b->afwm = v; break;
    case 0x046: b->alwm = v; break;
    case 0x048: b->cpt = (b->cpt & 0x0000FFFFu) | ((u32)v << 16); break;
    case 0x04A: b->cpt = (b->cpt & 0xFFFF0000u) | v; break;
    case 0x04C: b->bpt = (b->bpt & 0x0000FFFFu) | ((u32)v << 16); break;
    case 0x04E: b->bpt = (b->bpt & 0xFFFF0000u) | v; break;
    case 0x050: b->apt = (b->apt & 0x0000FFFFu) | ((u32)v << 16); break;
    case 0x052: b->apt = (b->apt & 0xFFFF0000u) | v; break;
    case 0x054: b->dpt = (b->dpt & 0x0000FFFFu) | ((u32)v << 16); break;
    case 0x056: b->dpt = (b->dpt & 0xFFFF0000u) | v; break;
    case 0x058: b->size = v; emu_blit_run(m); break;      /* writing BLTSIZE starts the blit */
    case 0x060: b->cmod = (s16)v; break;
    case 0x062: b->bmod = (s16)v; break;
    case 0x064: b->amod = (s16)v; break;
    case 0x066: b->dmod = (s16)v; break;
    case 0x070: b->cdat = v; break;
    case 0x072: b->bdat = v; break;
    case 0x074: b->adat = v; break;
    case 0x096: /* DMACON: the engine toggles the blitter DMA bit; nothing to do */ break;
    default:    m->custom[reg >> 1] = v; break;
    }
}
