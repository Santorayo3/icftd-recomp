/* fn_00004bee - 110 byte(s), 34 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00004bee(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00004beeu): goto L_4BEE;
    case RC_ADDR(0x00004bf2u): goto L_4BF2;
    case RC_ADDR(0x00004bf6u): goto L_4BF6;
    case RC_ADDR(0x00004bf8u): goto L_4BF8;
    case RC_ADDR(0x00004bfau): goto L_4BFA;
    case RC_ADDR(0x00004bfeu): goto L_4BFE;
    case RC_ADDR(0x00004c04u): goto L_4C04;
    case RC_ADDR(0x00004c08u): goto L_4C08;
    case RC_ADDR(0x00004c0au): goto L_4C0A;
    case RC_ADDR(0x00004c0cu): goto L_4C0C;
    case RC_ADDR(0x00004c10u): goto L_4C10;
    case RC_ADDR(0x00004c16u): goto L_4C16;
    case RC_ADDR(0x00004c1au): goto L_4C1A;
    case RC_ADDR(0x00004c1eu): goto L_4C1E;
    case RC_ADDR(0x00004c22u): goto L_4C22;
    case RC_ADDR(0x00004c26u): goto L_4C26;
    case RC_ADDR(0x00004c28u): goto L_4C28;
    case RC_ADDR(0x00004c2cu): goto L_4C2C;
    case RC_ADDR(0x00004c30u): goto L_4C30;
    case RC_ADDR(0x00004c34u): goto L_4C34;
    case RC_ADDR(0x00004c36u): goto L_4C36;
    case RC_ADDR(0x00004c3au): goto L_4C3A;
    case RC_ADDR(0x00004c3eu): goto L_4C3E;
    case RC_ADDR(0x00004c42u): goto L_4C42;
    case RC_ADDR(0x00004c44u): goto L_4C44;
    case RC_ADDR(0x00004c46u): goto L_4C46;
    case RC_ADDR(0x00004c4au): goto L_4C4A;
    case RC_ADDR(0x00004c4cu): goto L_4C4C;
    case RC_ADDR(0x00004c4eu): goto L_4C4E;
    case RC_ADDR(0x00004c50u): goto L_4C50;
    case RC_ADDR(0x00004c52u): goto L_4C52;
    case RC_ADDR(0x00004c56u): goto L_4C56;
    case RC_ADDR(0x00004c58u): goto L_4C58;
    case RC_ADDR(0x00004c5au): goto L_4C5A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_4BEE:
    /* 00004bee   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x00004beeu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_4BF2:
    /* 00004bf2   4  move.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x00004bf2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4BF6:
    /* 00004bf6   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004bf6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4BF8:
    /* 00004bf8   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00004bf8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_4BFA:
    /* 00004bfa   4  lea (ffff847c,A4),A0 */
    c->pc = RC_ADDR(0x00004bfau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7b84u);

L_4BFE:
    /* 00004bfe   6  move.l (0,A0,D0.w),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00004bfeu);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4C04:
    /* 00004c04   4  move.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x00004c04u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4C08:
    /* 00004c08   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004c08u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4C0A:
    /* 00004c0a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00004c0au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_4C0C:
    /* 00004c0c   4  lea (ffff8440,A4),A0 */
    c->pc = RC_ADDR(0x00004c0cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7bc0u);

L_4C10:
    /* 00004c10   6  move.l (0,A0,D0.w),(fffffff8,A5) */
    c->pc = RC_ADDR(0x00004c10u);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4C16:
    /* 00004c16   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00004c16u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4C1A:
    /* 00004c1a   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00004c1au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4C1E:
    /* 00004c1e   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00004c1eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_4C22:
    /* 00004c22   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00004c22u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_4C26:
    /* 00004c26   2  beq 00004c58 */
    c->pc = RC_ADDR(0x00004c26u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4C58;

L_4C28:
    /* 00004c28   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00004c28u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4C2C:
    /* 00004c2c   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00004c2cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_4C30:
    /* 00004c30   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00004c30u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_4C34:
    /* 00004c34   2  beq 00004c52 */
    c->pc = RC_ADDR(0x00004c34u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4C52;

L_4C36:
    /* 00004c36   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00004c36u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4C3A:
    /* 00004c3a   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00004c3au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_4C3E:
    /* 00004c3e   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00004c3eu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_4C42:
    /* 00004c42   2  ext.w D1 */
    c->pc = RC_ADDR(0x00004c42u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_4C44:
    /* 00004c44   2  subq.w #1,D1 */
    c->pc = RC_ADDR(0x00004c44u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_4C46:
    /* 00004c46   4  cmp.w (8,A5),D1 */
    c->pc = RC_ADDR(0x00004c46u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_4C4A:
    /* 00004c4a   2  bne 00004c52 */
    c->pc = RC_ADDR(0x00004c4au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_4C52;

L_4C4C:
    /* 00004c4c   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00004c4cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_4C4E:
    /* 00004c4e   2  unlk A5 */
    c->pc = RC_ADDR(0x00004c4eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_4C50:
    /* 00004c50   2  rts */
    c->pc = RC_ADDR(0x00004c50u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_4C52:
    /* 00004c52   4  addq.w #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00004c52u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4C56:
    /* 00004c56   2  bra 00004c1a */
    c->pc = RC_ADDR(0x00004c56u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_4C1A;

L_4C58:
    /* 00004c58   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00004c58u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_4C5A:
    /* 00004c5a   2  bra 00004c4e */
    c->pc = RC_ADDR(0x00004c5au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_4C4E;

}
