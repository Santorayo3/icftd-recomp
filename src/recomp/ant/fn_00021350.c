/* fn_00021350 - 28 byte(s), 9 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00021350(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00021350u): goto L_21350;
    case RC_ADDR(0x00021354u): goto L_21354;
    case RC_ADDR(0x00021358u): goto L_21358;
    case RC_ADDR(0x0002135cu): goto L_2135C;
    case RC_ADDR(0x0002135eu): goto L_2135E;
    case RC_ADDR(0x00021360u): goto L_21360;
    case RC_ADDR(0x00021364u): goto L_21364;
    case RC_ADDR(0x00021368u): goto L_21368;
    case RC_ADDR(0x0002136au): goto L_2136A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21350:
    /* 00021350   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00021350u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_21354:
    /* 00021354   4  movem.l { D4 D5 },-(SP) */
    c->pc = RC_ADDR(0x00021354u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    c->a[7] = t3;

L_21358:
    /* 00021358   4  move.b (9,A5),D0 */
    c->pc = RC_ADDR(0x00021358u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0x9u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2135C:
    /* 0002135c   2  ext.w D0 */
    c->pc = RC_ADDR(0x0002135cu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_2135E:
    /* 0002135e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0002135eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_21360:
    /* 00021360   4  bra 0002193e */
    c->pc = RC_ADDR(0x00021360u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002193eu);
    return;

L_21364:
    /* 00021364   4  tst.l (a,A5) */
    c->pc = RC_ADDR(0x00021364u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    rc_set_nzvc(c, t0, RC_L);

L_21368:
    /* 00021368   2  bne 00021374 */
    c->pc = RC_ADDR(0x00021368u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6))
    {
        c->pc = RC_ADDR(0x00021374u);
        return;
    }

L_2136A:
    /* 0002136a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0002136au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

    /* falls through into 0002136c */
    c->pc = RC_ADDR(0x0002136cu);
    return;
}
