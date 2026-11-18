/* fn_00000c80 - 100 byte(s), 30 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00000c80(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00000c80u): goto L_C80;
    case RC_ADDR(0x00000c84u): goto L_C84;
    case RC_ADDR(0x00000c86u): goto L_C86;
    case RC_ADDR(0x00000c8au): goto L_C8A;
    case RC_ADDR(0x00000c8eu): goto L_C8E;
    case RC_ADDR(0x00000c90u): goto L_C90;
    case RC_ADDR(0x00000c94u): goto L_C94;
    case RC_ADDR(0x00000c98u): goto L_C98;
    case RC_ADDR(0x00000c9au): goto L_C9A;
    case RC_ADDR(0x00000c9cu): goto L_C9C;
    case RC_ADDR(0x00000ca0u): goto L_CA0;
    case RC_ADDR(0x00000ca4u): goto L_CA4;
    case RC_ADDR(0x00000ca8u): goto L_CA8;
    case RC_ADDR(0x00000cacu): goto L_CAC;
    case RC_ADDR(0x00000caeu): goto L_CAE;
    case RC_ADDR(0x00000cb2u): goto L_CB2;
    case RC_ADDR(0x00000cb6u): goto L_CB6;
    case RC_ADDR(0x00000cb8u): goto L_CB8;
    case RC_ADDR(0x00000cbcu): goto L_CBC;
    case RC_ADDR(0x00000cbeu): goto L_CBE;
    case RC_ADDR(0x00000cc2u): goto L_CC2;
    case RC_ADDR(0x00000cc4u): goto L_CC4;
    case RC_ADDR(0x00000cc8u): goto L_CC8;
    case RC_ADDR(0x00000ccau): goto L_CCA;
    case RC_ADDR(0x00000cceu): goto L_CCE;
    case RC_ADDR(0x00000cd4u): goto L_CD4;
    case RC_ADDR(0x00000cd8u): goto L_CD8;
    case RC_ADDR(0x00000cdeu): goto L_CDE;
    case RC_ADDR(0x00000ce0u): goto L_CE0;
    case RC_ADDR(0x00000ce2u): goto L_CE2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_C80:
    /* 00000c80   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00000c80u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_C84:
    /* 00000c84   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00000c84u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_C86:
    /* 00000c86   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00000c86u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C8A:
    /* 00000c8a   4  jsr (ffff83b0,A4) */
    c->pc = RC_ADDR(0x00000c8au);
    rc_step(c, m, 18);
    /* vector 157 */
    rc_push32(c, m, RC_ADDR(0x00000c8eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002398cu);
    return;

L_C8E:
    /* 00000c8e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000c8eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_C90:
    /* 00000c90   4  pea (000000c7).l */
    c->pc = RC_ADDR(0x00000c90u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000000c7u);

L_C94:
    /* 00000c94   4  pea (0000013f).l */
    c->pc = RC_ADDR(0x00000c94u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000013fu);

L_C98:
    /* 00000c98   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00000c98u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_C9A:
    /* 00000c9a   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00000c9au);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_C9C:
    /* 00000c9c   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00000c9cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CA0:
    /* 00000ca0   4  jsr (ffff83aa,A4) */
    c->pc = RC_ADDR(0x00000ca0u);
    rc_step(c, m, 18);
    /* vector 156 */
    rc_push32(c, m, RC_ADDR(0x00000ca4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002397au);
    return;

L_CA4:
    /* 00000ca4   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00000ca4u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_CA8:
    /* 00000ca8   4  tst.w (ffff8572,A4) */
    c->pc = RC_ADDR(0x00000ca8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7a8eu));
    rc_set_nzvc(c, t0, RC_W);

L_CAC:
    /* 00000cac   2  beq 00000ce0 */
    c->pc = RC_ADDR(0x00000cacu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_CE0;

L_CAE:
    /* 00000cae   4  clr.w (ffff8572,A4) */
    c->pc = RC_ADDR(0x00000caeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7a8eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CB2:
    /* 00000cb2   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00000cb2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CB6:
    /* 00000cb6   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00000cb6u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_CB8:
    /* 00000cb8   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00000cb8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CBC:
    /* 00000cbc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00000cbcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CBE:
    /* 00000cbe   4  lea (7bc,A4),A0 */
    c->pc = RC_ADDR(0x00000cbeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x7bcu);

L_CC2:
    /* 00000cc2   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00000cc2u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_CC4:
    /* 00000cc4   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00000cc4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CC8:
    /* 00000cc8   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00000cc8u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_CCA:
    /* 00000cca   4  lea (7f6,A4),A1 */
    c->pc = RC_ADDR(0x00000ccau);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x7f6u);

L_CCE:
    /* 00000cce   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00000cceu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CD4:
    /* 00000cd4   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00000cd4u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_CD8:
    /* 00000cd8   6  cmpi.w #5,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00000cd8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_CDE:
    /* 00000cde   2  bcs 00000cb6 */
    c->pc = RC_ADDR(0x00000cdeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_CB6; }

L_CE0:
    /* 00000ce0   2  unlk A5 */
    c->pc = RC_ADDR(0x00000ce0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_CE2:
    /* 00000ce2   2  rts */
    c->pc = RC_ADDR(0x00000ce2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
