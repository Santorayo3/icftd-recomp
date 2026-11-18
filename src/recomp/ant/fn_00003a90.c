/* fn_00003a90 - 130 byte(s), 36 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00003a90(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00003a90u): goto L_3A90;
    case RC_ADDR(0x00003a94u): goto L_3A94;
    case RC_ADDR(0x00003a98u): goto L_3A98;
    case RC_ADDR(0x00003a9cu): goto L_3A9C;
    case RC_ADDR(0x00003aa0u): goto L_3AA0;
    case RC_ADDR(0x00003aa2u): goto L_3AA2;
    case RC_ADDR(0x00003aa6u): goto L_3AA6;
    case RC_ADDR(0x00003aacu): goto L_3AAC;
    case RC_ADDR(0x00003aaeu): goto L_3AAE;
    case RC_ADDR(0x00003ab2u): goto L_3AB2;
    case RC_ADDR(0x00003ab6u): goto L_3AB6;
    case RC_ADDR(0x00003abau): goto L_3ABA;
    case RC_ADDR(0x00003abeu): goto L_3ABE;
    case RC_ADDR(0x00003ac0u): goto L_3AC0;
    case RC_ADDR(0x00003ac4u): goto L_3AC4;
    case RC_ADDR(0x00003ac6u): goto L_3AC6;
    case RC_ADDR(0x00003ac8u): goto L_3AC8;
    case RC_ADDR(0x00003accu): goto L_3ACC;
    case RC_ADDR(0x00003aceu): goto L_3ACE;
    case RC_ADDR(0x00003ad2u): goto L_3AD2;
    case RC_ADDR(0x00003ad6u): goto L_3AD6;
    case RC_ADDR(0x00003adau): goto L_3ADA;
    case RC_ADDR(0x00003adcu): goto L_3ADC;
    case RC_ADDR(0x00003ae0u): goto L_3AE0;
    case RC_ADDR(0x00003ae4u): goto L_3AE4;
    case RC_ADDR(0x00003aeau): goto L_3AEA;
    case RC_ADDR(0x00003aeeu): goto L_3AEE;
    case RC_ADDR(0x00003af2u): goto L_3AF2;
    case RC_ADDR(0x00003af6u): goto L_3AF6;
    case RC_ADDR(0x00003afau): goto L_3AFA;
    case RC_ADDR(0x00003afcu): goto L_3AFC;
    case RC_ADDR(0x00003b00u): goto L_3B00;
    case RC_ADDR(0x00003b04u): goto L_3B04;
    case RC_ADDR(0x00003b0au): goto L_3B0A;
    case RC_ADDR(0x00003b0eu): goto L_3B0E;
    case RC_ADDR(0x00003b10u): goto L_3B10;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_3A90:
    /* 00003a90   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00003a90u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_3A94:
    /* 00003a94   4  move.w (fffff78c,A4),D0 */
    c->pc = RC_ADDR(0x00003a94u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3A98:
    /* 00003a98   4  mulu.w #12,D0 */
    c->pc = RC_ADDR(0x00003a98u);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_3A9C:
    /* 00003a9c   4  lea (ffff85ea,A4),A0 */
    c->pc = RC_ADDR(0x00003a9cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a16u);

L_3AA0:
    /* 00003aa0   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00003aa0u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_3AA2:
    /* 00003aa2   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00003aa2u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3AA6:
    /* 00003aa6   6  move.l #a0,D0 */
    c->pc = RC_ADDR(0x00003aa6u);
    rc_step(c, m, 12);
    t0 = 0x000000a0u;
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_3AAC:
    /* 00003aac   2  sub.l D1,D0 */
    c->pc = RC_ADDR(0x00003aacu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_3AAE:
    /* 00003aae   4  move.l D0,(fffff79e,A4) */
    c->pc = RC_ADDR(0x00003aaeu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x862u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3AB2:
    /* 00003ab2   4  move.w (fffff78c,A4),D0 */
    c->pc = RC_ADDR(0x00003ab2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3AB6:
    /* 00003ab6   4  mulu.w #12,D0 */
    c->pc = RC_ADDR(0x00003ab6u);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_3ABA:
    /* 00003aba   4  lea (ffff85ec,A4),A0 */
    c->pc = RC_ADDR(0x00003abau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a14u);

L_3ABE:
    /* 00003abe   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00003abeu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_3AC0:
    /* 00003ac0   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00003ac0u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3AC4:
    /* 00003ac4   2  moveq #64,D0 */
    c->pc = RC_ADDR(0x00003ac4u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000064u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_3AC6:
    /* 00003ac6   2  sub.l D1,D0 */
    c->pc = RC_ADDR(0x00003ac6u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_3AC8:
    /* 00003ac8   4  move.l D0,(fffff7a2,A4) */
    c->pc = RC_ADDR(0x00003ac8u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x85eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3ACC:
    /* 00003acc   2  bsr 00003a52 */
    c->pc = RC_ADDR(0x00003accu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00003aceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00003a52u);
    return;

L_3ACE:
    /* 00003ace   4  move.w (fffff78c,A4),D0 */
    c->pc = RC_ADDR(0x00003aceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3AD2:
    /* 00003ad2   4  mulu.w #12,D0 */
    c->pc = RC_ADDR(0x00003ad2u);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_3AD6:
    /* 00003ad6   4  lea (ffff85ea,A4),A0 */
    c->pc = RC_ADDR(0x00003ad6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a16u);

L_3ADA:
    /* 00003ada   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00003adau);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_3ADC:
    /* 00003adc   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00003adcu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3AE0:
    /* 00003ae0   4  add.l (fffff79e,A4),D1 */
    c->pc = RC_ADDR(0x00003ae0u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x862u));
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_3AE4:
    /* 00003ae4   6  add.l #12,D1 */
    c->pc = RC_ADDR(0x00003ae4u);
    rc_step(c, m, 16);
    t0 = 0x00000012u;
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_3AEA:
    /* 00003aea   4  move.l D1,(fffff7a6,A4) */
    c->pc = RC_ADDR(0x00003aeau);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x85au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3AEE:
    /* 00003aee   4  move.w (fffff78c,A4),D0 */
    c->pc = RC_ADDR(0x00003aeeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3AF2:
    /* 00003af2   4  mulu.w #12,D0 */
    c->pc = RC_ADDR(0x00003af2u);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_3AF6:
    /* 00003af6   4  lea (ffff85ec,A4),A0 */
    c->pc = RC_ADDR(0x00003af6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a14u);

L_3AFA:
    /* 00003afa   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00003afau);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_3AFC:
    /* 00003afc   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00003afcu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3B00:
    /* 00003b00   4  add.l (fffff7a2,A4),D1 */
    c->pc = RC_ADDR(0x00003b00u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x85eu));
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_3B04:
    /* 00003b04   6  add.l #13,D1 */
    c->pc = RC_ADDR(0x00003b04u);
    rc_step(c, m, 16);
    t0 = 0x00000013u;
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_3B0A:
    /* 00003b0a   4  move.l D1,(fffff7aa,A4) */
    c->pc = RC_ADDR(0x00003b0au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x856u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3B0E:
    /* 00003b0e   2  unlk A5 */
    c->pc = RC_ADDR(0x00003b0eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_3B10:
    /* 00003b10   2  rts */
    c->pc = RC_ADDR(0x00003b10u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
