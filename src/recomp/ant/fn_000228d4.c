/* fn_000228d4 - 114 byte(s), 44 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000228d4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000228d4u): goto L_228D4;
    case RC_ADDR(0x000228d8u): goto L_228D8;
    case RC_ADDR(0x000228dcu): goto L_228DC;
    case RC_ADDR(0x000228e0u): goto L_228E0;
    case RC_ADDR(0x000228e4u): goto L_228E4;
    case RC_ADDR(0x000228e6u): goto L_228E6;
    case RC_ADDR(0x000228eau): goto L_228EA;
    case RC_ADDR(0x000228ecu): goto L_228EC;
    case RC_ADDR(0x000228eeu): goto L_228EE;
    case RC_ADDR(0x000228f0u): goto L_228F0;
    case RC_ADDR(0x000228f2u): goto L_228F2;
    case RC_ADDR(0x000228f6u): goto L_228F6;
    case RC_ADDR(0x000228f8u): goto L_228F8;
    case RC_ADDR(0x000228fau): goto L_228FA;
    case RC_ADDR(0x000228fcu): goto L_228FC;
    case RC_ADDR(0x000228feu): goto L_228FE;
    case RC_ADDR(0x00022902u): goto L_22902;
    case RC_ADDR(0x00022904u): goto L_22904;
    case RC_ADDR(0x00022906u): goto L_22906;
    case RC_ADDR(0x00022908u): goto L_22908;
    case RC_ADDR(0x0002290au): goto L_2290A;
    case RC_ADDR(0x0002290cu): goto L_2290C;
    case RC_ADDR(0x0002290eu): goto L_2290E;
    case RC_ADDR(0x00022910u): goto L_22910;
    case RC_ADDR(0x00022912u): goto L_22912;
    case RC_ADDR(0x00022914u): goto L_22914;
    case RC_ADDR(0x00022918u): goto L_22918;
    case RC_ADDR(0x0002291au): goto L_2291A;
    case RC_ADDR(0x0002291cu): goto L_2291C;
    case RC_ADDR(0x00022920u): goto L_22920;
    case RC_ADDR(0x00022922u): goto L_22922;
    case RC_ADDR(0x00022924u): goto L_22924;
    case RC_ADDR(0x00022926u): goto L_22926;
    case RC_ADDR(0x0002292au): goto L_2292A;
    case RC_ADDR(0x00022930u): goto L_22930;
    case RC_ADDR(0x00022932u): goto L_22932;
    case RC_ADDR(0x00022934u): goto L_22934;
    case RC_ADDR(0x00022936u): goto L_22936;
    case RC_ADDR(0x00022938u): goto L_22938;
    case RC_ADDR(0x0002293au): goto L_2293A;
    case RC_ADDR(0x0002293cu): goto L_2293C;
    case RC_ADDR(0x0002293eu): goto L_2293E;
    case RC_ADDR(0x00022942u): goto L_22942;
    case RC_ADDR(0x00022944u): goto L_22944;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_228D4:
    /* 000228d4   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000228d4u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_228D8:
    /* 000228d8   4  movem.l { D5 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x000228d8u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_228DC:
    /* 000228dc   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x000228dcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_228E0:
    /* 000228e0   4  cmpi.b #20,(A2) */
    c->pc = RC_ADDR(0x000228e0u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[2]);
    rc_cmp(c, RC_B, t0, 0x00000020u);

L_228E4:
    /* 000228e4   2  beq 000228ec */
    c->pc = RC_ADDR(0x000228e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_228EC;

L_228E6:
    /* 000228e6   4  cmpi.b #9,(A2) */
    c->pc = RC_ADDR(0x000228e6u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[2]);
    rc_cmp(c, RC_B, t0, 0x00000009u);

L_228EA:
    /* 000228ea   2  bne 000228f0 */
    c->pc = RC_ADDR(0x000228eau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_228F0;

L_228EC:
    /* 000228ec   2  addq.l #1,A2 */
    c->pc = RC_ADDR(0x000228ecu);
    rc_step(c, m, 8);
    c->a[2] += 0x00000001u;

L_228EE:
    /* 000228ee   2  bra 000228e0 */
    c->pc = RC_ADDR(0x000228eeu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_228E0;

L_228F0:
    /* 000228f0   2  moveq #0,D5 */
    c->pc = RC_ADDR(0x000228f0u);
    rc_step(c, m, 4);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_228F2:
    /* 000228f2   4  cmpi.b #2d,(A2) */
    c->pc = RC_ADDR(0x000228f2u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[2]);
    rc_cmp(c, RC_B, t0, 0x0000002du);

L_228F6:
    /* 000228f6   2  bne 000228fe */
    c->pc = RC_ADDR(0x000228f6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_228FE;

L_228F8:
    /* 000228f8   2  moveq #1,D5 */
    c->pc = RC_ADDR(0x000228f8u);
    rc_step(c, m, 4);
    c->d[5] = 0x00000001u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_228FA:
    /* 000228fa   2  addq.l #1,A2 */
    c->pc = RC_ADDR(0x000228fau);
    rc_step(c, m, 8);
    c->a[2] += 0x00000001u;

L_228FC:
    /* 000228fc   2  bra 00022906 */
    c->pc = RC_ADDR(0x000228fcu);
    rc_step(c, m, 10);
    goto L_22906;

L_228FE:
    /* 000228fe   4  cmpi.b #2b,(A2) */
    c->pc = RC_ADDR(0x000228feu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[2]);
    rc_cmp(c, RC_B, t0, 0x0000002bu);

L_22902:
    /* 00022902   2  bne 00022906 */
    c->pc = RC_ADDR(0x00022902u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_22906;

L_22904:
    /* 00022904   2  addq.l #1,A2 */
    c->pc = RC_ADDR(0x00022904u);
    rc_step(c, m, 8);
    c->a[2] += 0x00000001u;

L_22906:
    /* 00022906   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x00022906u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_22908:
    /* 00022908   2  bra 00022920 */
    c->pc = RC_ADDR(0x00022908u);
    rc_step(c, m, 10);
    goto L_22920;

L_2290A:
    /* 0002290a   2  movea.l A2,A0 */
    c->pc = RC_ADDR(0x0002290au);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[0] = t0;

L_2290C:
    /* 0002290c   2  addq.l #1,A2 */
    c->pc = RC_ADDR(0x0002290cu);
    rc_step(c, m, 8);
    c->a[2] += 0x00000001u;

L_2290E:
    /* 0002290e   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x0002290eu);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_22910:
    /* 00022910   2  ext.w D0 */
    c->pc = RC_ADDR(0x00022910u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_22912:
    /* 00022912   2  move.w D4,D1 */
    c->pc = RC_ADDR(0x00022912u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22914:
    /* 00022914   4  mulu.w #a,D1 */
    c->pc = RC_ADDR(0x00022914u);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_mulu(c, 1, t0);

L_22918:
    /* 00022918   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x00022918u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_2291A:
    /* 0002291a   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x0002291au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2291C:
    /* 0002291c   4  sub.w #30,D4 */
    c->pc = RC_ADDR(0x0002291cu);
    rc_step(c, m, 10);
    t0 = 0x00000030u;
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_22920:
    /* 00022920   2  move.b (A2),D0 */
    c->pc = RC_ADDR(0x00022920u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[2]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_22922:
    /* 00022922   2  ext.w D0 */
    c->pc = RC_ADDR(0x00022922u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_22924:
    /* 00022924   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00022924u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_22926:
    /* 00022926   4  lea (ffffd4c0,A4),A0 */
    c->pc = RC_ADDR(0x00022926u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2b40u);

L_2292A:
    /* 0002292a   6  btst #2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0002292au);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (c->a[0] + 0x0u + t4);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_22930:
    /* 00022930   2  bne 0002290a */
    c->pc = RC_ADDR(0x00022930u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_2290A; }

L_22932:
    /* 00022932   2  tst.w D5 */
    c->pc = RC_ADDR(0x00022932u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_22934:
    /* 00022934   2  beq 0002293c */
    c->pc = RC_ADDR(0x00022934u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2293C;

L_22936:
    /* 00022936   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00022936u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22938:
    /* 00022938   2  neg.w D0 */
    c->pc = RC_ADDR(0x00022938u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_2293A:
    /* 0002293a   2  bra 0002293e */
    c->pc = RC_ADDR(0x0002293au);
    rc_step(c, m, 10);
    goto L_2293E;

L_2293C:
    /* 0002293c   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x0002293cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2293E:
    /* 0002293e   4  movem.l (SP)+,{ D4 D5 A2 } */
    c->pc = RC_ADDR(0x0002293eu);
    rc_step(c, m, 12);
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

L_22942:
    /* 00022942   2  unlk A5 */
    c->pc = RC_ADDR(0x00022942u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_22944:
    /* 00022944   2  rts */
    c->pc = RC_ADDR(0x00022944u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
