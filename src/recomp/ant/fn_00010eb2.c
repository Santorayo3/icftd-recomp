/* fn_00010eb2 - 76 byte(s), 27 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00010eb2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00010eb2u): goto L_10EB2;
    case RC_ADDR(0x00010eb6u): goto L_10EB6;
    case RC_ADDR(0x00010eb8u): goto L_10EB8;
    case RC_ADDR(0x00010ebcu): goto L_10EBC;
    case RC_ADDR(0x00010ebeu): goto L_10EBE;
    case RC_ADDR(0x00010ec0u): goto L_10EC0;
    case RC_ADDR(0x00010ec2u): goto L_10EC2;
    case RC_ADDR(0x00010ec4u): goto L_10EC4;
    case RC_ADDR(0x00010ec8u): goto L_10EC8;
    case RC_ADDR(0x00010eccu): goto L_10ECC;
    case RC_ADDR(0x00010eceu): goto L_10ECE;
    case RC_ADDR(0x00010ed0u): goto L_10ED0;
    case RC_ADDR(0x00010ed2u): goto L_10ED2;
    case RC_ADDR(0x00010ed4u): goto L_10ED4;
    case RC_ADDR(0x00010ed6u): goto L_10ED6;
    case RC_ADDR(0x00010ed8u): goto L_10ED8;
    case RC_ADDR(0x00010edau): goto L_10EDA;
    case RC_ADDR(0x00010edeu): goto L_10EDE;
    case RC_ADDR(0x00010ee0u): goto L_10EE0;
    case RC_ADDR(0x00010ee4u): goto L_10EE4;
    case RC_ADDR(0x00010ee6u): goto L_10EE6;
    case RC_ADDR(0x00010eeau): goto L_10EEA;
    case RC_ADDR(0x00010eecu): goto L_10EEC;
    case RC_ADDR(0x00010ef2u): goto L_10EF2;
    case RC_ADDR(0x00010ef4u): goto L_10EF4;
    case RC_ADDR(0x00010ef8u): goto L_10EF8;
    case RC_ADDR(0x00010efcu): goto L_10EFC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10EB2:
    /* 00010eb2   4  move.w (3c,A6),D0 */
    c->pc = RC_ADDR(0x00010eb2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0x3cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10EB6:
    /* 00010eb6   2  beq 00010ee4 */
    c->pc = RC_ADDR(0x00010eb6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10EE4;

L_10EB8:
    /* 00010eb8   4  mulu.w (22,A6),D0 */
    c->pc = RC_ADDR(0x00010eb8u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[6] + 0x22u));
    rc_mulu(c, 0, t0);

L_10EBC:
    /* 00010ebc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00010ebcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_10EBE:
    /* 00010ebe   2  bcs 00010ee6 */
    c->pc = RC_ADDR(0x00010ebeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) goto L_10EE6;

L_10EC0:
    /* 00010ec0   2  swap D0 */
    c->pc = RC_ADDR(0x00010ec0u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_10EC2:
    /* 00010ec2   2  move.w D0,D3 */
    c->pc = RC_ADDR(0x00010ec2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10EC4:
    /* 00010ec4   4  move.w (38,A6),D1 */
    c->pc = RC_ADDR(0x00010ec4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0x38u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10EC8:
    /* 00010ec8   4  move.w (3a,A6),D2 */
    c->pc = RC_ADDR(0x00010ec8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0x3au));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10ECC:
    /* 00010ecc   2  sub.w D1,D2 */
    c->pc = RC_ADDR(0x00010eccu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_10ECE:
    /* 00010ece   2  bcc 00010ed4 */
    c->pc = RC_ADDR(0x00010eceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_10ED4;

L_10ED0:
    /* 00010ed0   2  neg.w D3 */
    c->pc = RC_ADDR(0x00010ed0u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_10ED2:
    /* 00010ed2   2  neg.w D2 */
    c->pc = RC_ADDR(0x00010ed2u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_10ED4:
    /* 00010ed4   2  cmp.w D2,D0 */
    c->pc = RC_ADDR(0x00010ed4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_10ED6:
    /* 00010ed6   2  bcc 00010ee6 */
    c->pc = RC_ADDR(0x00010ed6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_10EE6;

L_10ED8:
    /* 00010ed8   2  add.w D3,D1 */
    c->pc = RC_ADDR(0x00010ed8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_10EDA:
    /* 00010eda   4  move.w D1,(38,A6) */
    c->pc = RC_ADDR(0x00010edau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[6] + 0x38u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10EDE:
    /* 00010ede   2  lsr.w #8,D1 */
    c->pc = RC_ADDR(0x00010edeu);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000008u, rc_d_get(c, 1, RC_W), RC_W));

L_10EE0:
    /* 00010ee0   4  move.w D1,(0,A6) */
    c->pc = RC_ADDR(0x00010ee0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[6] + 0x0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10EE4:
    /* 00010ee4   2  rts */
    c->pc = RC_ADDR(0x00010ee4u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_10EE6:
    /* 00010ee6   4  move.w (3a,A6),D1 */
    c->pc = RC_ADDR(0x00010ee6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0x3au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10EEA:
    /* 00010eea   2  bne 00010ef8 */
    c->pc = RC_ADDR(0x00010eeau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_10EF8;

L_10EEC:
    /* 00010eec   6  bclr #0,(1c,A6) */
    c->pc = RC_ADDR(0x00010eecu);
    rc_step(c, m, 20);
    t3 = (c->a[6] + 0x1cu);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 & ~(1u << t4);
    rc_wr8(c, m, t3, t2);

L_10EF2:
    /* 00010ef2   2  beq 00010ef8 */
    c->pc = RC_ADDR(0x00010ef2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10EF8;

L_10EF4:
    /* 00010ef4   4  bsr 000109d2 */
    c->pc = RC_ADDR(0x00010ef4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00010ef8u));
    rc_depth++;
    c->pc = RC_ADDR(0x000109d2u);
    return;

L_10EF8:
    /* 00010ef8   4  clr.w (3c,A6) */
    c->pc = RC_ADDR(0x00010ef8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[6] + 0x3cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10EFC:
    /* 00010efc   2  bra 00010ede */
    c->pc = RC_ADDR(0x00010efcu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_10EDE;

}
