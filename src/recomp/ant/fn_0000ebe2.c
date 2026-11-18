/* fn_0000ebe2 - 76 byte(s), 24 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000ebe2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000ebe2u): goto L_EBE2;
    case RC_ADDR(0x0000ebe6u): goto L_EBE6;
    case RC_ADDR(0x0000ebe8u): goto L_EBE8;
    case RC_ADDR(0x0000ebecu): goto L_EBEC;
    case RC_ADDR(0x0000ebf0u): goto L_EBF0;
    case RC_ADDR(0x0000ebf2u): goto L_EBF2;
    case RC_ADDR(0x0000ebf6u): goto L_EBF6;
    case RC_ADDR(0x0000ebf8u): goto L_EBF8;
    case RC_ADDR(0x0000ebfau): goto L_EBFA;
    case RC_ADDR(0x0000ec00u): goto L_EC00;
    case RC_ADDR(0x0000ec04u): goto L_EC04;
    case RC_ADDR(0x0000ec08u): goto L_EC08;
    case RC_ADDR(0x0000ec0au): goto L_EC0A;
    case RC_ADDR(0x0000ec0cu): goto L_EC0C;
    case RC_ADDR(0x0000ec10u): goto L_EC10;
    case RC_ADDR(0x0000ec14u): goto L_EC14;
    case RC_ADDR(0x0000ec18u): goto L_EC18;
    case RC_ADDR(0x0000ec1au): goto L_EC1A;
    case RC_ADDR(0x0000ec20u): goto L_EC20;
    case RC_ADDR(0x0000ec24u): goto L_EC24;
    case RC_ADDR(0x0000ec26u): goto L_EC26;
    case RC_ADDR(0x0000ec28u): goto L_EC28;
    case RC_ADDR(0x0000ec2au): goto L_EC2A;
    case RC_ADDR(0x0000ec2cu): goto L_EC2C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_EBE2:
    /* 0000ebe2   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000ebe2u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_EBE6:
    /* 0000ebe6   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x0000ebe6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EBE8:
    /* 0000ebe8   4  move.w (1110,A4),D0 */
    c->pc = RC_ADDR(0x0000ebe8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1110u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EBEC:
    /* 0000ebec   4  cmp.w (110e,A4),D0 */
    c->pc = RC_ADDR(0x0000ebecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110eu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_EBF0:
    /* 0000ebf0   2  beq 0000ec2c */
    c->pc = RC_ADDR(0x0000ebf0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_EC2C;

L_EBF2:
    /* 0000ebf2   4  jsr (0000ede8) */
    c->pc = RC_ADDR(0x0000ebf2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000ebf6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000ede8u);
    return;

L_EBF6:
    /* 0000ebf6   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000ebf6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_EBF8:
    /* 0000ebf8   2  beq 0000ec26 */
    c->pc = RC_ADDR(0x0000ebf8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_EC26;

L_EBFA:
    /* 0000ebfa   6  move.w (1110,A4),(110e,A4) */
    c->pc = RC_ADDR(0x0000ebfau);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1110u));
    rc_wr16(c, m, (c->a[4] + 0x110eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_EC00:
    /* 0000ec00   4  jsr (0000f78a) */
    c->pc = RC_ADDR(0x0000ec00u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000ec04u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f78au);
    return;

L_EC04:
    /* 0000ec04   4  move.w (110e,A4),D0 */
    c->pc = RC_ADDR(0x0000ec04u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EC08:
    /* 0000ec08   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ec08u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_EC0A:
    /* 0000ec0a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ec0au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EC0C:
    /* 0000ec0c   4  lea (fffffb1e,A4),A0 */
    c->pc = RC_ADDR(0x0000ec0cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4e2u);

L_EC10:
    /* 0000ec10   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000ec10u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_EC14:
    /* 0000ec14   4  jsr (0000f730) */
    c->pc = RC_ADDR(0x0000ec14u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000ec18u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f730u);
    return;

L_EC18:
    /* 0000ec18   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000ec18u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_EC1A:
    /* 0000ec1a   6  move.w #2,(1132,A4) */
    c->pc = RC_ADDR(0x0000ec1au);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x1132u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_EC20:
    /* 0000ec20   4  jsr (0000da1e) */
    c->pc = RC_ADDR(0x0000ec20u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000ec24u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000da1eu);
    return;

L_EC24:
    /* 0000ec24   2  bra 0000ec2c */
    c->pc = RC_ADDR(0x0000ec24u);
    rc_step(c, m, 10);
    goto L_EC2C;

L_EC26:
    /* 0000ec26   2  move.l (A7)+,D4 */
    c->pc = RC_ADDR(0x0000ec26u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EC28:
    /* 0000ec28   2  unlk A5 */
    c->pc = RC_ADDR(0x0000ec28u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_EC2A:
    /* 0000ec2a   2  rts */
    c->pc = RC_ADDR(0x0000ec2au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_EC2C:
    /* 0000ec2c   2  bra 0000ec26 */
    c->pc = RC_ADDR(0x0000ec2cu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_EC26;

}
