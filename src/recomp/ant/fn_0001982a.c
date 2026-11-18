/* fn_0001982a - 24 byte(s), 8 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001982a(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001982au): goto L_1982A;
    case RC_ADDR(0x0001982eu): goto L_1982E;
    case RC_ADDR(0x00019832u): goto L_19832;
    case RC_ADDR(0x00019834u): goto L_19834;
    case RC_ADDR(0x00019838u): goto L_19838;
    case RC_ADDR(0x0001983cu): goto L_1983C;
    case RC_ADDR(0x0001983eu): goto L_1983E;
    case RC_ADDR(0x00019840u): goto L_19840;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1982A:
    /* 0001982a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001982au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1982E:
    /* 0001982e   4  movem.l { D3 D4 D5 D6 D7 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x0001982eu);
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

L_19832:
    /* 00019832   2  movea.l (A1),A4 */
    c->pc = RC_ADDR(0x00019832u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[1]);
    c->a[4] = t0;

L_19834:
    /* 00019834   4  bsr 00019426 */
    c->pc = RC_ADDR(0x00019834u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00019838u));
    rc_depth++;
    c->pc = RC_ADDR(0x00019426u);
    return;

L_19838:
    /* 00019838   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 A0 A1 A2 A3 A4 } */
    c->pc = RC_ADDR(0x00019838u);
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

L_1983C:
    /* 0001983c   2  clr.l D0 */
    c->pc = RC_ADDR(0x0001983cu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1983E:
    /* 0001983e   2  unlk A5 */
    c->pc = RC_ADDR(0x0001983eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_19840:
    /* 00019840   2  rts */
    c->pc = RC_ADDR(0x00019840u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
