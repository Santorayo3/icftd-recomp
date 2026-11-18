/* fn_000136e8 - 24 byte(s), 8 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000136e8(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000136e8u): goto L_136E8;
    case RC_ADDR(0x000136ecu): goto L_136EC;
    case RC_ADDR(0x000136f0u): goto L_136F0;
    case RC_ADDR(0x000136f2u): goto L_136F2;
    case RC_ADDR(0x000136f6u): goto L_136F6;
    case RC_ADDR(0x000136fau): goto L_136FA;
    case RC_ADDR(0x000136fcu): goto L_136FC;
    case RC_ADDR(0x000136feu): goto L_136FE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_136E8:
    /* 000136e8   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000136e8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_136EC:
    /* 000136ec   4  movem.l { D3 D4 D5 D6 D7 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x000136ecu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_136F0:
    /* 000136f0   2  movea.l (A1),A4 */
    c->pc = RC_ADDR(0x000136f0u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[1]);
    c->a[4] = t0;

L_136F2:
    /* 000136f2   4  bsr 00013532 */
    c->pc = RC_ADDR(0x000136f2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000136f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00013532u);
    return;

L_136F6:
    /* 000136f6   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 A0 A1 A2 A3 A4 } */
    c->pc = RC_ADDR(0x000136f6u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[4] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_136FA:
    /* 000136fa   2  clr.l D0 */
    c->pc = RC_ADDR(0x000136fau);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_136FC:
    /* 000136fc   2  unlk A5 */
    c->pc = RC_ADDR(0x000136fcu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_136FE:
    /* 000136fe   2  rts */
    c->pc = RC_ADDR(0x000136feu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
