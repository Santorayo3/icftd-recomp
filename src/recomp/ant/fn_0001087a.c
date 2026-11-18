/* fn_0001087a - 24 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001087a(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001087au): goto L_1087A;
    case RC_ADDR(0x0001087eu): goto L_1087E;
    case RC_ADDR(0x00010882u): goto L_10882;
    case RC_ADDR(0x00010886u): goto L_10886;
    case RC_ADDR(0x0001088au): goto L_1088A;
    case RC_ADDR(0x0001088cu): goto L_1088C;
    case RC_ADDR(0x00010890u): goto L_10890;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1087A:
    /* 0001087a   4  movem.l { D1 D2 D3 D4 D5 D6 A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001087au);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1087E:
    /* 0001087e   4  movea.l (2c,A7),A0 */
    c->pc = RC_ADDR(0x0001087eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x2cu));
    c->a[0] = t0;

L_10882:
    /* 00010882   4  movea.l (14da,A4),A3 */
    c->pc = RC_ADDR(0x00010882u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14dau));
    c->a[3] = t0;

L_10886:
    /* 00010886   4  movea.l (ffffa428,A4),A6 */
    c->pc = RC_ADDR(0x00010886u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bd8u));
    c->a[6] = t0;

L_1088A:
    /* 0001088a   2  bsr 000108d2 */
    c->pc = RC_ADDR(0x0001088au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001088cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000108d2u);
    return;

L_1088C:
    /* 0001088c   4  movem.l (SP)+,{ D4 D5 D6 D7 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x0001088cu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
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
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_10890:
    /* 00010890   2  rts */
    c->pc = RC_ADDR(0x00010890u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
