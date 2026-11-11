/* fn_0001a6fa - 196 byte(s), 57 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001a6fa(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001a6fau): goto L_1A6FA;
    case RC_ADDR(0x0001a6feu): goto L_1A6FE;
    case RC_ADDR(0x0001a702u): goto L_1A702;
    case RC_ADDR(0x0001a706u): goto L_1A706;
    case RC_ADDR(0x0001a70au): goto L_1A70A;
    case RC_ADDR(0x0001a70eu): goto L_1A70E;
    case RC_ADDR(0x0001a712u): goto L_1A712;
    case RC_ADDR(0x0001a716u): goto L_1A716;
    case RC_ADDR(0x0001a71au): goto L_1A71A;
    case RC_ADDR(0x0001a71cu): goto L_1A71C;
    case RC_ADDR(0x0001a720u): goto L_1A720;
    case RC_ADDR(0x0001a722u): goto L_1A722;
    case RC_ADDR(0x0001a724u): goto L_1A724;
    case RC_ADDR(0x0001a728u): goto L_1A728;
    case RC_ADDR(0x0001a72cu): goto L_1A72C;
    case RC_ADDR(0x0001a730u): goto L_1A730;
    case RC_ADDR(0x0001a732u): goto L_1A732;
    case RC_ADDR(0x0001a734u): goto L_1A734;
    case RC_ADDR(0x0001a736u): goto L_1A736;
    case RC_ADDR(0x0001a738u): goto L_1A738;
    case RC_ADDR(0x0001a73cu): goto L_1A73C;
    case RC_ADDR(0x0001a740u): goto L_1A740;
    case RC_ADDR(0x0001a742u): goto L_1A742;
    case RC_ADDR(0x0001a746u): goto L_1A746;
    case RC_ADDR(0x0001a748u): goto L_1A748;
    case RC_ADDR(0x0001a74au): goto L_1A74A;
    case RC_ADDR(0x0001a74eu): goto L_1A74E;
    case RC_ADDR(0x0001a750u): goto L_1A750;
    case RC_ADDR(0x0001a752u): goto L_1A752;
    case RC_ADDR(0x0001a754u): goto L_1A754;
    case RC_ADDR(0x0001a756u): goto L_1A756;
    case RC_ADDR(0x0001a758u): goto L_1A758;
    case RC_ADDR(0x0001a75cu): goto L_1A75C;
    case RC_ADDR(0x0001a760u): goto L_1A760;
    case RC_ADDR(0x0001a764u): goto L_1A764;
    case RC_ADDR(0x0001a766u): goto L_1A766;
    case RC_ADDR(0x0001a768u): goto L_1A768;
    case RC_ADDR(0x0001a76cu): goto L_1A76C;
    case RC_ADDR(0x0001a770u): goto L_1A770;
    case RC_ADDR(0x0001a774u): goto L_1A774;
    case RC_ADDR(0x0001a776u): goto L_1A776;
    case RC_ADDR(0x0001a77cu): goto L_1A77C;
    case RC_ADDR(0x0001a77eu): goto L_1A77E;
    case RC_ADDR(0x0001a784u): goto L_1A784;
    case RC_ADDR(0x0001a786u): goto L_1A786;
    case RC_ADDR(0x0001a78cu): goto L_1A78C;
    case RC_ADDR(0x0001a792u): goto L_1A792;
    case RC_ADDR(0x0001a794u): goto L_1A794;
    case RC_ADDR(0x0001a79au): goto L_1A79A;
    case RC_ADDR(0x0001a7a0u): goto L_1A7A0;
    case RC_ADDR(0x0001a7a2u): goto L_1A7A2;
    case RC_ADDR(0x0001a7a8u): goto L_1A7A8;
    case RC_ADDR(0x0001a7aeu): goto L_1A7AE;
    case RC_ADDR(0x0001a7b0u): goto L_1A7B0;
    case RC_ADDR(0x0001a7b6u): goto L_1A7B6;
    case RC_ADDR(0x0001a7bau): goto L_1A7BA;
    case RC_ADDR(0x0001a7bcu): goto L_1A7BC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1A6FA:
    /* 0001a6fa   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001a6fau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1A6FE:
    /* 0001a6fe   4  movem.l { A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001a6feu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1A702:
    /* 0001a702   4  move.w (8,A5),D5 */
    c->pc = RC_ADDR(0x0001a702u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A706:
    /* 0001a706   4  sub.w (470,A4),D5 */
    c->pc = RC_ADDR(0x0001a706u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x470u));
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_1A70A:
    /* 0001a70a   4  move.w (a,A5),D6 */
    c->pc = RC_ADDR(0x0001a70au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A70E:
    /* 0001a70e   4  sub.w (472,A4),D6 */
    c->pc = RC_ADDR(0x0001a70eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x472u));
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_1A712:
    /* 0001a712   4  clr.w (70e,A4) */
    c->pc = RC_ADDR(0x0001a712u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x70eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A716:
    /* 0001a716   4  clr.w (70c,A4) */
    c->pc = RC_ADDR(0x0001a716u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x70cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A71A:
    /* 0001a71a   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0001a71au);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1A71C:
    /* 0001a71c   4  pea (ffff83ff).l */
    c->pc = RC_ADDR(0x0001a71cu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xffff83ffu);

L_1A720:
    /* 0001a720   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a720u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A722:
    /* 0001a722   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a722u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A724:
    /* 0001a724   4  lea (ffffc726,A4),A0 */
    c->pc = RC_ADDR(0x0001a724u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x38dau);

L_1A728:
    /* 0001a728   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a728u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A72C:
    /* 0001a72c   4  muls.w (c,A5),D1 */
    c->pc = RC_ADDR(0x0001a72cu);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_muls(c, 1, t0);

L_1A730:
    /* 0001a730   2  add.w D6,D1 */
    c->pc = RC_ADDR(0x0001a730u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A732:
    /* 0001a732   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001a732u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A734:
    /* 0001a734   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a734u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A736:
    /* 0001a736   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a736u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A738:
    /* 0001a738   4  lea (ffffc716,A4),A0 */
    c->pc = RC_ADDR(0x0001a738u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x38eau);

L_1A73C:
    /* 0001a73c   4  move.w (c,A5),D1 */
    c->pc = RC_ADDR(0x0001a73cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A740:
    /* 0001a740   2  addq.w #1,D1 */
    c->pc = RC_ADDR(0x0001a740u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A742:
    /* 0001a742   4  muls.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a742u);
    rc_step(c, m, 48);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_muls(c, 1, t0);

L_1A746:
    /* 0001a746   2  add.w D5,D1 */
    c->pc = RC_ADDR(0x0001a746u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A748:
    /* 0001a748   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001a748u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A74A:
    /* 0001a74a   4  jsr (0001aa04) */
    c->pc = RC_ADDR(0x0001a74au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001a74eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001aa04u);
    return;

L_1A74E:
    /* 0001a74e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001a74eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1A750:
    /* 0001a750   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001a750u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1A752:
    /* 0001a752   2  beq 0001a774 */
    c->pc = RC_ADDR(0x0001a752u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A774;

L_1A754:
    /* 0001a754   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a754u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A756:
    /* 0001a756   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a756u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A758:
    /* 0001a758   4  lea (ffffc736,A4),A0 */
    c->pc = RC_ADDR(0x0001a758u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x38cau);

L_1A75C:
    /* 0001a75c   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a75cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A760:
    /* 0001a760   4  add.w D1,(70c,A4) */
    c->pc = RC_ADDR(0x0001a760u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x70cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A764:
    /* 0001a764   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a764u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A766:
    /* 0001a766   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a766u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A768:
    /* 0001a768   4  lea (ffffc746,A4),A0 */
    c->pc = RC_ADDR(0x0001a768u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x38bau);

L_1A76C:
    /* 0001a76c   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a76cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A770:
    /* 0001a770   4  add.w D1,(70e,A4) */
    c->pc = RC_ADDR(0x0001a770u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x70eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A774:
    /* 0001a774   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0001a774u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_1A776:
    /* 0001a776   6  cmp.l #8,D4 */
    c->pc = RC_ADDR(0x0001a776u);
    rc_step(c, m, 14);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1A77C:
    /* 0001a77c   2  blt 0001a71c */
    c->pc = RC_ADDR(0x0001a77cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1A71C; }

L_1A77E:
    /* 0001a77e   6  cmpi.w #ffff,(70c,A4) */
    c->pc = RC_ADDR(0x0001a77eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70cu));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1A784:
    /* 0001a784   2  bge 0001a78c */
    c->pc = RC_ADDR(0x0001a784u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1A78C;

L_1A786:
    /* 0001a786   6  move.w #ffff,(70c,A4) */
    c->pc = RC_ADDR(0x0001a786u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x70cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A78C:
    /* 0001a78c   6  cmpi.w #1,(70c,A4) */
    c->pc = RC_ADDR(0x0001a78cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70cu));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1A792:
    /* 0001a792   2  ble 0001a79a */
    c->pc = RC_ADDR(0x0001a792u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1A79A;

L_1A794:
    /* 0001a794   6  move.w #1,(70c,A4) */
    c->pc = RC_ADDR(0x0001a794u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x70cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A79A:
    /* 0001a79a   6  cmpi.w #ffff,(70e,A4) */
    c->pc = RC_ADDR(0x0001a79au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70eu));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1A7A0:
    /* 0001a7a0   2  bge 0001a7a8 */
    c->pc = RC_ADDR(0x0001a7a0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1A7A8;

L_1A7A2:
    /* 0001a7a2   6  move.w #ffff,(70e,A4) */
    c->pc = RC_ADDR(0x0001a7a2u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x70eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A7A8:
    /* 0001a7a8   6  cmpi.w #1,(70e,A4) */
    c->pc = RC_ADDR(0x0001a7a8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70eu));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1A7AE:
    /* 0001a7ae   2  ble 0001a7b6 */
    c->pc = RC_ADDR(0x0001a7aeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1A7B6;

L_1A7B0:
    /* 0001a7b0   6  move.w #1,(70e,A4) */
    c->pc = RC_ADDR(0x0001a7b0u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x70eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A7B6:
    /* 0001a7b6   4  movem.l (SP)+,{ D4 D5 D6 } */
    c->pc = RC_ADDR(0x0001a7b6u);
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
    c->d[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1A7BA:
    /* 0001a7ba   2  unlk A5 */
    c->pc = RC_ADDR(0x0001a7bau);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1A7BC:
    /* 0001a7bc   2  rts */
    c->pc = RC_ADDR(0x0001a7bcu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
