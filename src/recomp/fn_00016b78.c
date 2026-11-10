/* fn_00016b78 - 136 byte(s), 42 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00016b78(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00016b78u): goto L_16B78;
    case RC_ADDR(0x00016b7cu): goto L_16B7C;
    case RC_ADDR(0x00016b80u): goto L_16B80;
    case RC_ADDR(0x00016b84u): goto L_16B84;
    case RC_ADDR(0x00016b88u): goto L_16B88;
    case RC_ADDR(0x00016b8eu): goto L_16B8E;
    case RC_ADDR(0x00016b90u): goto L_16B90;
    case RC_ADDR(0x00016b94u): goto L_16B94;
    case RC_ADDR(0x00016b98u): goto L_16B98;
    case RC_ADDR(0x00016b9au): goto L_16B9A;
    case RC_ADDR(0x00016b9cu): goto L_16B9C;
    case RC_ADDR(0x00016ba0u): goto L_16BA0;
    case RC_ADDR(0x00016ba2u): goto L_16BA2;
    case RC_ADDR(0x00016ba6u): goto L_16BA6;
    case RC_ADDR(0x00016ba8u): goto L_16BA8;
    case RC_ADDR(0x00016bacu): goto L_16BAC;
    case RC_ADDR(0x00016bb0u): goto L_16BB0;
    case RC_ADDR(0x00016bb4u): goto L_16BB4;
    case RC_ADDR(0x00016bb6u): goto L_16BB6;
    case RC_ADDR(0x00016bb8u): goto L_16BB8;
    case RC_ADDR(0x00016bbcu): goto L_16BBC;
    case RC_ADDR(0x00016bbeu): goto L_16BBE;
    case RC_ADDR(0x00016bc2u): goto L_16BC2;
    case RC_ADDR(0x00016bc6u): goto L_16BC6;
    case RC_ADDR(0x00016bcau): goto L_16BCA;
    case RC_ADDR(0x00016bceu): goto L_16BCE;
    case RC_ADDR(0x00016bd0u): goto L_16BD0;
    case RC_ADDR(0x00016bd2u): goto L_16BD2;
    case RC_ADDR(0x00016bd6u): goto L_16BD6;
    case RC_ADDR(0x00016bd8u): goto L_16BD8;
    case RC_ADDR(0x00016bdcu): goto L_16BDC;
    case RC_ADDR(0x00016bdeu): goto L_16BDE;
    case RC_ADDR(0x00016be2u): goto L_16BE2;
    case RC_ADDR(0x00016be6u): goto L_16BE6;
    case RC_ADDR(0x00016beau): goto L_16BEA;
    case RC_ADDR(0x00016becu): goto L_16BEC;
    case RC_ADDR(0x00016beeu): goto L_16BEE;
    case RC_ADDR(0x00016bf0u): goto L_16BF0;
    case RC_ADDR(0x00016bf4u): goto L_16BF4;
    case RC_ADDR(0x00016bfau): goto L_16BFA;
    case RC_ADDR(0x00016bfcu): goto L_16BFC;
    case RC_ADDR(0x00016bfeu): goto L_16BFE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16B78:
    /* 00016b78   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x00016b78u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_16B7C:
    /* 00016b7c   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00016b7cu);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16B80:
    /* 00016b80   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00016b80u);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16B84:
    /* 00016b84   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00016b84u);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16B88:
    /* 00016b88   6  cmpi.w #60,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00016b88u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000060u);

L_16B8E:
    /* 00016b8e   2  bcc 00016bfc */
    c->pc = RC_ADDR(0x00016b8eu);
    if (rc_cond(c, 4)) goto L_16BFC;

L_16B90:
    /* 00016b90   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00016b90u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16B94:
    /* 00016b94   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00016b94u);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16B98:
    /* 00016b98   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00016b98u);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_16B9A:
    /* 00016b9a   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x00016b9au);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16B9C:
    /* 00016b9c   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00016b9cu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_16BA0:
    /* 00016ba0   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00016ba0u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_16BA2:
    /* 00016ba2   4  move.b (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x00016ba2u);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_16BA6:
    /* 00016ba6   2  asl.w #4,D0 */
    c->pc = RC_ADDR(0x00016ba6u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W);

L_16BA8:
    /* 00016ba8   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00016ba8u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16BAC:
    /* 00016bac   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00016bacu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16BB0:
    /* 00016bb0   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00016bb0u);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16BB4:
    /* 00016bb4   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00016bb4u);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_16BB6:
    /* 00016bb6   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x00016bb6u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16BB8:
    /* 00016bb8   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00016bb8u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_16BBC:
    /* 00016bbc   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00016bbcu);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_16BBE:
    /* 00016bbe   4  move.b (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x00016bbeu);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_16BC2:
    /* 00016bc2   4  or.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00016bc2u);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_16BC6:
    /* 00016bc6   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00016bc6u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16BCA:
    /* 00016bca   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00016bcau);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16BCE:
    /* 00016bce   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00016bceu);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_16BD0:
    /* 00016bd0   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x00016bd0u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16BD2:
    /* 00016bd2   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00016bd2u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_16BD6:
    /* 00016bd6   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00016bd6u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_16BD8:
    /* 00016bd8   4  move.b (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x00016bd8u);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_16BDC:
    /* 00016bdc   2  lsr.w #4,D0 */
    c->pc = RC_ADDR(0x00016bdcu);
    c->d[0] = rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W);

L_16BDE:
    /* 00016bde   4  or.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00016bdeu);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_16BE2:
    /* 00016be2   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00016be2u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16BE6:
    /* 00016be6   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00016be6u);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16BEA:
    /* 00016bea   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00016beau);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_16BEC:
    /* 00016bec   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x00016becu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16BEE:
    /* 00016bee   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00016beeu);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_16BF0:
    /* 00016bf0   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00016bf0u);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_16BF4:
    /* 00016bf4   6  move.w (fffffffa,A5),(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00016bf4u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16BFA:
    /* 00016bfa   2  bra 00016b88 */
    c->pc = RC_ADDR(0x00016bfau);
    rc_tick();
    goto L_16B88;

L_16BFC:
    /* 00016bfc   2  unlk A5 */
    c->pc = RC_ADDR(0x00016bfcu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16BFE:
    /* 00016bfe   2  rts */
    c->pc = RC_ADDR(0x00016bfeu);
    rc_ret(c, m);
    return;

}
