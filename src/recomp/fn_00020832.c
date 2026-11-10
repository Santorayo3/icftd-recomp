/* fn_00020832 - 114 byte(s), 44 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020832(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00020832u): goto L_20832;
    case RC_ADDR(0x00020836u): goto L_20836;
    case RC_ADDR(0x0002083au): goto L_2083A;
    case RC_ADDR(0x0002083eu): goto L_2083E;
    case RC_ADDR(0x00020842u): goto L_20842;
    case RC_ADDR(0x00020844u): goto L_20844;
    case RC_ADDR(0x00020848u): goto L_20848;
    case RC_ADDR(0x0002084au): goto L_2084A;
    case RC_ADDR(0x0002084cu): goto L_2084C;
    case RC_ADDR(0x0002084eu): goto L_2084E;
    case RC_ADDR(0x00020850u): goto L_20850;
    case RC_ADDR(0x00020854u): goto L_20854;
    case RC_ADDR(0x00020856u): goto L_20856;
    case RC_ADDR(0x00020858u): goto L_20858;
    case RC_ADDR(0x0002085au): goto L_2085A;
    case RC_ADDR(0x0002085cu): goto L_2085C;
    case RC_ADDR(0x00020860u): goto L_20860;
    case RC_ADDR(0x00020862u): goto L_20862;
    case RC_ADDR(0x00020864u): goto L_20864;
    case RC_ADDR(0x00020866u): goto L_20866;
    case RC_ADDR(0x00020868u): goto L_20868;
    case RC_ADDR(0x0002086au): goto L_2086A;
    case RC_ADDR(0x0002086cu): goto L_2086C;
    case RC_ADDR(0x0002086eu): goto L_2086E;
    case RC_ADDR(0x00020870u): goto L_20870;
    case RC_ADDR(0x00020872u): goto L_20872;
    case RC_ADDR(0x00020876u): goto L_20876;
    case RC_ADDR(0x00020878u): goto L_20878;
    case RC_ADDR(0x0002087au): goto L_2087A;
    case RC_ADDR(0x0002087eu): goto L_2087E;
    case RC_ADDR(0x00020880u): goto L_20880;
    case RC_ADDR(0x00020882u): goto L_20882;
    case RC_ADDR(0x00020884u): goto L_20884;
    case RC_ADDR(0x00020888u): goto L_20888;
    case RC_ADDR(0x0002088eu): goto L_2088E;
    case RC_ADDR(0x00020890u): goto L_20890;
    case RC_ADDR(0x00020892u): goto L_20892;
    case RC_ADDR(0x00020894u): goto L_20894;
    case RC_ADDR(0x00020896u): goto L_20896;
    case RC_ADDR(0x00020898u): goto L_20898;
    case RC_ADDR(0x0002089au): goto L_2089A;
    case RC_ADDR(0x0002089cu): goto L_2089C;
    case RC_ADDR(0x000208a0u): goto L_208A0;
    case RC_ADDR(0x000208a2u): goto L_208A2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20832:
    /* 00020832   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020832u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_20836:
    /* 00020836   4  movem.l { D5 A2 A3 },-(SP) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020836u);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_2083A:
    /* 0002083a   4  movea.l (8,A5),A2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002083au);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_2083E:
    /* 0002083e   4  cmpi.b #20,(A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002083eu);
    t0 = rc_rd8(c, m, c->a[2]);
    rc_cmp(c, RC_B, t0, 0x00000020u);

L_20842:
    /* 00020842   2  beq 0002084a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020842u);
    if (rc_cond(c, 7)) goto L_2084A;

L_20844:
    /* 00020844   4  cmpi.b #9,(A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020844u);
    t0 = rc_rd8(c, m, c->a[2]);
    rc_cmp(c, RC_B, t0, 0x00000009u);

L_20848:
    /* 00020848   2  bne 0002084e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020848u);
    if (rc_cond(c, 6)) goto L_2084E;

L_2084A:
    /* 0002084a   2  addq.l #1,A2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002084au);
    c->a[2] += 0x00000001u;

L_2084C:
    /* 0002084c   2  bra 0002083e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002084cu);
    rc_tick();
    goto L_2083E;

L_2084E:
    /* 0002084e   2  moveq #0,D5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002084eu);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_20850:
    /* 00020850   4  cmpi.b #2d,(A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020850u);
    t0 = rc_rd8(c, m, c->a[2]);
    rc_cmp(c, RC_B, t0, 0x0000002du);

L_20854:
    /* 00020854   2  bne 0002085c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020854u);
    if (rc_cond(c, 6)) goto L_2085C;

L_20856:
    /* 00020856   2  moveq #1,D5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020856u);
    c->d[5] = 0x00000001u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_20858:
    /* 00020858   2  addq.l #1,A2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020858u);
    c->a[2] += 0x00000001u;

L_2085A:
    /* 0002085a   2  bra 00020864 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002085au);
    goto L_20864;

L_2085C:
    /* 0002085c   4  cmpi.b #2b,(A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002085cu);
    t0 = rc_rd8(c, m, c->a[2]);
    rc_cmp(c, RC_B, t0, 0x0000002bu);

L_20860:
    /* 00020860   2  bne 00020864 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020860u);
    if (rc_cond(c, 6)) goto L_20864;

L_20862:
    /* 00020862   2  addq.l #1,A2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020862u);
    c->a[2] += 0x00000001u;

L_20864:
    /* 00020864   2  moveq #0,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020864u);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_20866:
    /* 00020866   2  bra 0002087e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020866u);
    goto L_2087E;

L_20868:
    /* 00020868   2  movea.l A2,A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020868u);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[0] = t0;

L_2086A:
    /* 0002086a   2  addq.l #1,A2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002086au);
    c->a[2] += 0x00000001u;

L_2086C:
    /* 0002086c   2  move.b (A0),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002086cu);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2086E:
    /* 0002086e   2  ext.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002086eu);
    rc_ext_w(c, 0);

L_20870:
    /* 00020870   2  move.w D4,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020870u);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20872:
    /* 00020872   4  mulu.w #a,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020872u);
    t0 = 0x0000000au;
    rc_mulu(c, 1, t0);

L_20876:
    /* 00020876   2  add.w D1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020876u);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_20878:
    /* 00020878   2  move.w D0,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020878u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2087A:
    /* 0002087a   4  sub.w #30,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002087au);
    t0 = 0x00000030u;
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_2087E:
    /* 0002087e   2  move.b (A2),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002087eu);
    t0 = rc_rd8(c, m, c->a[2]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20880:
    /* 00020880   2  ext.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020880u);
    rc_ext_w(c, 0);

L_20882:
    /* 00020882   2  addq.w #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020882u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_20884:
    /* 00020884   4  lea (ffffcd3c,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020884u);
    c->a[0] = (c->a[4] - 0x32c4u);

L_20888:
    /* 00020888   6  btst #2,(0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020888u);
    t4 = 0x00000002u;
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (c->a[0] + 0x0u + t4);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_2088E:
    /* 0002088e   2  bne 00020868 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002088eu);
    if (rc_cond(c, 6)) { rc_tick(); goto L_20868; }

L_20890:
    /* 00020890   2  tst.w D5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020890u);
    t0 = rc_d_get(c, 5, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_20892:
    /* 00020892   2  beq 0002089a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020892u);
    if (rc_cond(c, 7)) goto L_2089A;

L_20894:
    /* 00020894   2  move.w D4,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020894u);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20896:
    /* 00020896   2  neg.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020896u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_20898:
    /* 00020898   2  bra 0002089c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020898u);
    goto L_2089C;

L_2089A:
    /* 0002089a   2  move.w D4,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002089au);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2089C:
    /* 0002089c   4  movem.l (SP)+,{ D4 D5 A2 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002089cu);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_208A0:
    /* 000208a0   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000208a0u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_208A2:
    /* 000208a2   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000208a2u);
    rc_ret(c, m);
    return;

}
