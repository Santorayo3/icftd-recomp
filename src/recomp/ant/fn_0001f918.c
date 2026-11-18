/* fn_0001f918 - 84 byte(s), 33 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001f918(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f918u): goto L_1F918;
    case RC_ADDR(0x0001f91cu): goto L_1F91C;
    case RC_ADDR(0x0001f920u): goto L_1F920;
    case RC_ADDR(0x0001f924u): goto L_1F924;
    case RC_ADDR(0x0001f928u): goto L_1F928;
    case RC_ADDR(0x0001f92au): goto L_1F92A;
    case RC_ADDR(0x0001f92cu): goto L_1F92C;
    case RC_ADDR(0x0001f92eu): goto L_1F92E;
    case RC_ADDR(0x0001f930u): goto L_1F930;
    case RC_ADDR(0x0001f932u): goto L_1F932;
    case RC_ADDR(0x0001f936u): goto L_1F936;
    case RC_ADDR(0x0001f938u): goto L_1F938;
    case RC_ADDR(0x0001f93au): goto L_1F93A;
    case RC_ADDR(0x0001f93cu): goto L_1F93C;
    case RC_ADDR(0x0001f93eu): goto L_1F93E;
    case RC_ADDR(0x0001f940u): goto L_1F940;
    case RC_ADDR(0x0001f942u): goto L_1F942;
    case RC_ADDR(0x0001f946u): goto L_1F946;
    case RC_ADDR(0x0001f948u): goto L_1F948;
    case RC_ADDR(0x0001f94au): goto L_1F94A;
    case RC_ADDR(0x0001f94cu): goto L_1F94C;
    case RC_ADDR(0x0001f94eu): goto L_1F94E;
    case RC_ADDR(0x0001f950u): goto L_1F950;
    case RC_ADDR(0x0001f952u): goto L_1F952;
    case RC_ADDR(0x0001f954u): goto L_1F954;
    case RC_ADDR(0x0001f958u): goto L_1F958;
    case RC_ADDR(0x0001f95au): goto L_1F95A;
    case RC_ADDR(0x0001f95cu): goto L_1F95C;
    case RC_ADDR(0x0001f95eu): goto L_1F95E;
    case RC_ADDR(0x0001f962u): goto L_1F962;
    case RC_ADDR(0x0001f964u): goto L_1F964;
    case RC_ADDR(0x0001f968u): goto L_1F968;
    case RC_ADDR(0x0001f96au): goto L_1F96A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F918:
    /* 0001f918   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001f918u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1F91C:
    /* 0001f91c   4  movem.l { D4 D5 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001f91cu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1F920:
    /* 0001f920   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x0001f920u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_1F924:
    /* 0001f924   4  movea.l (c,A5),A3 */
    c->pc = RC_ADDR(0x0001f924u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[3] = t0;

L_1F928:
    /* 0001f928   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0001f928u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1F92A:
    /* 0001f92a   2  movea.l A2,A0 */
    c->pc = RC_ADDR(0x0001f92au);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[0] = t0;

L_1F92C:
    /* 0001f92c   2  addq.l #1,A2 */
    c->pc = RC_ADDR(0x0001f92cu);
    rc_step(c, m, 8);
    c->a[2] += 0x00000001u;

L_1F92E:
    /* 0001f92e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f92eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F930:
    /* 0001f930   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x0001f930u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1F932:
    /* 0001f932   4  and.w #f0,D0 */
    c->pc = RC_ADDR(0x0001f932u);
    rc_step(c, m, 10);
    t0 = 0x000000f0u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1F936:
    /* 0001f936   2  asl.w #4,D0 */
    c->pc = RC_ADDR(0x0001f936u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_1F938:
    /* 0001f938   2  move.w D0,(A3) */
    c->pc = RC_ADDR(0x0001f938u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, c->a[3], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F93A:
    /* 0001f93a   2  movea.l A2,A0 */
    c->pc = RC_ADDR(0x0001f93au);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[0] = t0;

L_1F93C:
    /* 0001f93c   2  addq.l #1,A2 */
    c->pc = RC_ADDR(0x0001f93cu);
    rc_step(c, m, 8);
    c->a[2] += 0x00000001u;

L_1F93E:
    /* 0001f93e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f93eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F940:
    /* 0001f940   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x0001f940u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1F942:
    /* 0001f942   4  and.w #f0,D0 */
    c->pc = RC_ADDR(0x0001f942u);
    rc_step(c, m, 10);
    t0 = 0x000000f0u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1F946:
    /* 0001f946   2  or.w D0,(A3) */
    c->pc = RC_ADDR(0x0001f946u);
    rc_step(c, m, 12);
    t3 = c->a[3];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1F948:
    /* 0001f948   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x0001f948u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_1F94A:
    /* 0001f94a   2  addq.l #2,A3 */
    c->pc = RC_ADDR(0x0001f94au);
    rc_step(c, m, 8);
    c->a[3] += 0x00000002u;

L_1F94C:
    /* 0001f94c   2  movea.l A2,A1 */
    c->pc = RC_ADDR(0x0001f94cu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[1] = t0;

L_1F94E:
    /* 0001f94e   2  addq.l #1,A2 */
    c->pc = RC_ADDR(0x0001f94eu);
    rc_step(c, m, 8);
    c->a[2] += 0x00000001u;

L_1F950:
    /* 0001f950   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f950u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F952:
    /* 0001f952   2  move.b (A1),D0 */
    c->pc = RC_ADDR(0x0001f952u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[1]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1F954:
    /* 0001f954   4  and.w #f0,D0 */
    c->pc = RC_ADDR(0x0001f954u);
    rc_step(c, m, 10);
    t0 = 0x000000f0u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1F958:
    /* 0001f958   2  lsr.w #4,D0 */
    c->pc = RC_ADDR(0x0001f958u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_1F95A:
    /* 0001f95a   2  or.w D0,(A0) */
    c->pc = RC_ADDR(0x0001f95au);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1F95C:
    /* 0001f95c   2  addq.w #1,D4 */
    c->pc = RC_ADDR(0x0001f95cu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_1F95E:
    /* 0001f95e   4  cmp.w #20,D4 */
    c->pc = RC_ADDR(0x0001f95eu);
    rc_step(c, m, 8);
    t0 = 0x00000020u;
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1F962:
    /* 0001f962   2  blt 0001f92a */
    c->pc = RC_ADDR(0x0001f962u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1F92A; }

L_1F964:
    /* 0001f964   4  movem.l (SP)+,{ D4 A2 A3 } */
    c->pc = RC_ADDR(0x0001f964u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1F968:
    /* 0001f968   2  unlk A5 */
    c->pc = RC_ADDR(0x0001f968u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F96A:
    /* 0001f96a   2  rts */
    c->pc = RC_ADDR(0x0001f96au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
