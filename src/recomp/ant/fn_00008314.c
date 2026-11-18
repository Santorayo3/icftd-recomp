/* fn_00008314 - 42 byte(s), 12 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00008314(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00008314u): goto L_8314;
    case RC_ADDR(0x00008318u): goto L_8318;
    case RC_ADDR(0x0000831eu): goto L_831E;
    case RC_ADDR(0x00008322u): goto L_8322;
    case RC_ADDR(0x00008326u): goto L_8326;
    case RC_ADDR(0x00008328u): goto L_8328;
    case RC_ADDR(0x0000832au): goto L_832A;
    case RC_ADDR(0x0000832eu): goto L_832E;
    case RC_ADDR(0x00008334u): goto L_8334;
    case RC_ADDR(0x00008336u): goto L_8336;
    case RC_ADDR(0x0000833au): goto L_833A;
    case RC_ADDR(0x0000833cu): goto L_833C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_8314:
    /* 00008314   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00008314u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_8318:
    /* 00008318   6  move.l (fffff738,A4),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00008318u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x8c8u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_831E:
    /* 0000831e   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000831eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8322:
    /* 00008322   4  subq.w #1,(8,A5) */
    c->pc = RC_ADDR(0x00008322u);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_8326:
    /* 00008326   2  tst.w D0 */
    c->pc = RC_ADDR(0x00008326u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_8328:
    /* 00008328   2  beq 00008336 */
    c->pc = RC_ADDR(0x00008328u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_8336;

L_832A:
    /* 0000832a   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0000832au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_832E:
    /* 0000832e   6  move.l (8,A0),(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000832eu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_8334:
    /* 00008334   2  bra 0000831e */
    c->pc = RC_ADDR(0x00008334u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_831E;

L_8336:
    /* 00008336   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00008336u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_833A:
    /* 0000833a   2  unlk A5 */
    c->pc = RC_ADDR(0x0000833au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_833C:
    /* 0000833c   2  rts */
    c->pc = RC_ADDR(0x0000833cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
