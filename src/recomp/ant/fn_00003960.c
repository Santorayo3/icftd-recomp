/* fn_00003960 - 40 byte(s), 11 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00003960(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00003960u): goto L_3960;
    case RC_ADDR(0x00003964u): goto L_3964;
    case RC_ADDR(0x0000396au): goto L_396A;
    case RC_ADDR(0x0000396eu): goto L_396E;
    case RC_ADDR(0x00003970u): goto L_3970;
    case RC_ADDR(0x00003974u): goto L_3974;
    case RC_ADDR(0x0000397au): goto L_397A;
    case RC_ADDR(0x0000397eu): goto L_397E;
    case RC_ADDR(0x00003982u): goto L_3982;
    case RC_ADDR(0x00003984u): goto L_3984;
    case RC_ADDR(0x00003986u): goto L_3986;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_3960:
    /* 00003960   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00003960u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_3964:
    /* 00003964   6  move.l (ffffd46a,A4),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00003964u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2b96u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_396A:
    /* 0000396a   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0000396au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_396E:
    /* 0000396e   2  beq 00003984 */
    c->pc = RC_ADDR(0x0000396eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_3984;

L_3970:
    /* 00003970   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00003970u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_3974:
    /* 00003974   6  andi.w #fffd,(a,A0) */
    c->pc = RC_ADDR(0x00003974u);
    rc_step(c, m, 20);
    t3 = (c->a[0] + 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 & 0x0000fffdu;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_397A:
    /* 0000397a   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0000397au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_397E:
    /* 0000397e   4  move.l (A0),(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000397eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3982:
    /* 00003982   2  bra 0000396a */
    c->pc = RC_ADDR(0x00003982u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_396A;

L_3984:
    /* 00003984   2  unlk A5 */
    c->pc = RC_ADDR(0x00003984u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_3986:
    /* 00003986   2  rts */
    c->pc = RC_ADDR(0x00003986u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
