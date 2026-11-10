/* fn_0001a880 - 194 byte(s), 56 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001a880(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001a880u): goto L_1A880;
    case RC_ADDR(0x0001a884u): goto L_1A884;
    case RC_ADDR(0x0001a888u): goto L_1A888;
    case RC_ADDR(0x0001a88cu): goto L_1A88C;
    case RC_ADDR(0x0001a890u): goto L_1A890;
    case RC_ADDR(0x0001a894u): goto L_1A894;
    case RC_ADDR(0x0001a898u): goto L_1A898;
    case RC_ADDR(0x0001a89cu): goto L_1A89C;
    case RC_ADDR(0x0001a8a0u): goto L_1A8A0;
    case RC_ADDR(0x0001a8a2u): goto L_1A8A2;
    case RC_ADDR(0x0001a8a6u): goto L_1A8A6;
    case RC_ADDR(0x0001a8a8u): goto L_1A8A8;
    case RC_ADDR(0x0001a8aau): goto L_1A8AA;
    case RC_ADDR(0x0001a8aeu): goto L_1A8AE;
    case RC_ADDR(0x0001a8b2u): goto L_1A8B2;
    case RC_ADDR(0x0001a8b6u): goto L_1A8B6;
    case RC_ADDR(0x0001a8b8u): goto L_1A8B8;
    case RC_ADDR(0x0001a8bau): goto L_1A8BA;
    case RC_ADDR(0x0001a8bcu): goto L_1A8BC;
    case RC_ADDR(0x0001a8beu): goto L_1A8BE;
    case RC_ADDR(0x0001a8c2u): goto L_1A8C2;
    case RC_ADDR(0x0001a8c6u): goto L_1A8C6;
    case RC_ADDR(0x0001a8cau): goto L_1A8CA;
    case RC_ADDR(0x0001a8ccu): goto L_1A8CC;
    case RC_ADDR(0x0001a8ceu): goto L_1A8CE;
    case RC_ADDR(0x0001a8d2u): goto L_1A8D2;
    case RC_ADDR(0x0001a8d4u): goto L_1A8D4;
    case RC_ADDR(0x0001a8d6u): goto L_1A8D6;
    case RC_ADDR(0x0001a8d8u): goto L_1A8D8;
    case RC_ADDR(0x0001a8dau): goto L_1A8DA;
    case RC_ADDR(0x0001a8dcu): goto L_1A8DC;
    case RC_ADDR(0x0001a8e0u): goto L_1A8E0;
    case RC_ADDR(0x0001a8e4u): goto L_1A8E4;
    case RC_ADDR(0x0001a8e8u): goto L_1A8E8;
    case RC_ADDR(0x0001a8eau): goto L_1A8EA;
    case RC_ADDR(0x0001a8ecu): goto L_1A8EC;
    case RC_ADDR(0x0001a8f0u): goto L_1A8F0;
    case RC_ADDR(0x0001a8f4u): goto L_1A8F4;
    case RC_ADDR(0x0001a8f8u): goto L_1A8F8;
    case RC_ADDR(0x0001a8fau): goto L_1A8FA;
    case RC_ADDR(0x0001a900u): goto L_1A900;
    case RC_ADDR(0x0001a902u): goto L_1A902;
    case RC_ADDR(0x0001a908u): goto L_1A908;
    case RC_ADDR(0x0001a90au): goto L_1A90A;
    case RC_ADDR(0x0001a910u): goto L_1A910;
    case RC_ADDR(0x0001a916u): goto L_1A916;
    case RC_ADDR(0x0001a918u): goto L_1A918;
    case RC_ADDR(0x0001a91eu): goto L_1A91E;
    case RC_ADDR(0x0001a924u): goto L_1A924;
    case RC_ADDR(0x0001a926u): goto L_1A926;
    case RC_ADDR(0x0001a92cu): goto L_1A92C;
    case RC_ADDR(0x0001a932u): goto L_1A932;
    case RC_ADDR(0x0001a934u): goto L_1A934;
    case RC_ADDR(0x0001a93au): goto L_1A93A;
    case RC_ADDR(0x0001a93eu): goto L_1A93E;
    case RC_ADDR(0x0001a940u): goto L_1A940;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1A880:
    /* 0001a880   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001a880u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1A884:
    /* 0001a884   4  movem.l { A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001a884u);
    rc_step(c, m);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1A888:
    /* 0001a888   4  move.w (8,A5),D5 */
    c->pc = RC_ADDR(0x0001a888u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A88C:
    /* 0001a88c   4  sub.w (470,A4),D5 */
    c->pc = RC_ADDR(0x0001a88cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x470u));
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_1A890:
    /* 0001a890   4  move.w (a,A5),D6 */
    c->pc = RC_ADDR(0x0001a890u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A894:
    /* 0001a894   4  sub.w (472,A4),D6 */
    c->pc = RC_ADDR(0x0001a894u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x472u));
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_1A898:
    /* 0001a898   4  clr.w (70e,A4) */
    c->pc = RC_ADDR(0x0001a898u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x70eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A89C:
    /* 0001a89c   4  clr.w (70c,A4) */
    c->pc = RC_ADDR(0x0001a89cu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x70cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A8A0:
    /* 0001a8a0   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0001a8a0u);
    rc_step(c, m);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1A8A2:
    /* 0001a8a2   4  pea (ffff83ff).l */
    c->pc = RC_ADDR(0x0001a8a2u);
    rc_step(c, m);
    rc_push32(c, m, 0xffff83ffu);

L_1A8A6:
    /* 0001a8a6   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a8a6u);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A8A8:
    /* 0001a8a8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a8a8u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A8AA:
    /* 0001a8aa   4  lea (ffffc76e,A4),A0 */
    c->pc = RC_ADDR(0x0001a8aau);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x3892u);

L_1A8AE:
    /* 0001a8ae   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a8aeu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A8B2:
    /* 0001a8b2   4  muls.w (c,A5),D1 */
    c->pc = RC_ADDR(0x0001a8b2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_muls(c, 1, t0);

L_1A8B6:
    /* 0001a8b6   2  add.w D6,D1 */
    c->pc = RC_ADDR(0x0001a8b6u);
    rc_step(c, m);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A8B8:
    /* 0001a8b8   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001a8b8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A8BA:
    /* 0001a8ba   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a8bau);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A8BC:
    /* 0001a8bc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a8bcu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A8BE:
    /* 0001a8be   4  lea (ffffc766,A4),A0 */
    c->pc = RC_ADDR(0x0001a8beu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x389au);

L_1A8C2:
    /* 0001a8c2   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a8c2u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A8C6:
    /* 0001a8c6   4  muls.w (c,A5),D1 */
    c->pc = RC_ADDR(0x0001a8c6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_muls(c, 1, t0);

L_1A8CA:
    /* 0001a8ca   2  add.w D5,D1 */
    c->pc = RC_ADDR(0x0001a8cau);
    rc_step(c, m);
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A8CC:
    /* 0001a8cc   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001a8ccu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A8CE:
    /* 0001a8ce   4  jsr (0001aa04) */
    c->pc = RC_ADDR(0x0001a8ceu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001a8d2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001aa04u);
    return;

L_1A8D2:
    /* 0001a8d2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001a8d2u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1A8D4:
    /* 0001a8d4   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001a8d4u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1A8D6:
    /* 0001a8d6   2  beq 0001a8f8 */
    c->pc = RC_ADDR(0x0001a8d6u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1A8F8;

L_1A8D8:
    /* 0001a8d8   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a8d8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A8DA:
    /* 0001a8da   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a8dau);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A8DC:
    /* 0001a8dc   4  lea (ffffc766,A4),A0 */
    c->pc = RC_ADDR(0x0001a8dcu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x389au);

L_1A8E0:
    /* 0001a8e0   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a8e0u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A8E4:
    /* 0001a8e4   4  sub.w D1,(70c,A4) */
    c->pc = RC_ADDR(0x0001a8e4u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x70cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 1, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A8E8:
    /* 0001a8e8   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a8e8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A8EA:
    /* 0001a8ea   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a8eau);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A8EC:
    /* 0001a8ec   4  lea (ffffc76e,A4),A0 */
    c->pc = RC_ADDR(0x0001a8ecu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x3892u);

L_1A8F0:
    /* 0001a8f0   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a8f0u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A8F4:
    /* 0001a8f4   4  sub.w D1,(70e,A4) */
    c->pc = RC_ADDR(0x0001a8f4u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x70eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 1, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A8F8:
    /* 0001a8f8   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0001a8f8u);
    rc_step(c, m);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_1A8FA:
    /* 0001a8fa   6  cmp.l #4,D4 */
    c->pc = RC_ADDR(0x0001a8fau);
    rc_step(c, m);
    t0 = 0x00000004u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1A900:
    /* 0001a900   2  blt 0001a8a2 */
    c->pc = RC_ADDR(0x0001a900u);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1A8A2; }

L_1A902:
    /* 0001a902   6  cmpi.w #ffff,(70c,A4) */
    c->pc = RC_ADDR(0x0001a902u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70cu));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1A908:
    /* 0001a908   2  bge 0001a910 */
    c->pc = RC_ADDR(0x0001a908u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_1A910;

L_1A90A:
    /* 0001a90a   6  move.w #ffff,(70c,A4) */
    c->pc = RC_ADDR(0x0001a90au);
    rc_step(c, m);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x70cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A910:
    /* 0001a910   6  cmpi.w #1,(70c,A4) */
    c->pc = RC_ADDR(0x0001a910u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70cu));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1A916:
    /* 0001a916   2  ble 0001a91e */
    c->pc = RC_ADDR(0x0001a916u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_1A91E;

L_1A918:
    /* 0001a918   6  move.w #1,(70c,A4) */
    c->pc = RC_ADDR(0x0001a918u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x70cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A91E:
    /* 0001a91e   6  cmpi.w #ffff,(70e,A4) */
    c->pc = RC_ADDR(0x0001a91eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70eu));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1A924:
    /* 0001a924   2  bge 0001a92c */
    c->pc = RC_ADDR(0x0001a924u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_1A92C;

L_1A926:
    /* 0001a926   6  move.w #ffff,(70e,A4) */
    c->pc = RC_ADDR(0x0001a926u);
    rc_step(c, m);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x70eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A92C:
    /* 0001a92c   6  cmpi.w #1,(70e,A4) */
    c->pc = RC_ADDR(0x0001a92cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70eu));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1A932:
    /* 0001a932   2  ble 0001a93a */
    c->pc = RC_ADDR(0x0001a932u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_1A93A;

L_1A934:
    /* 0001a934   6  move.w #1,(70e,A4) */
    c->pc = RC_ADDR(0x0001a934u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x70eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A93A:
    /* 0001a93a   4  movem.l (SP)+,{ D4 D5 D6 } */
    c->pc = RC_ADDR(0x0001a93au);
    rc_step(c, m);
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

L_1A93E:
    /* 0001a93e   2  unlk A5 */
    c->pc = RC_ADDR(0x0001a93eu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1A940:
    /* 0001a940   2  rts */
    c->pc = RC_ADDR(0x0001a940u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
