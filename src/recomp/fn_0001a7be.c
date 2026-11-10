/* fn_0001a7be - 194 byte(s), 56 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001a7be(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001a7beu): goto L_1A7BE;
    case RC_ADDR(0x0001a7c2u): goto L_1A7C2;
    case RC_ADDR(0x0001a7c6u): goto L_1A7C6;
    case RC_ADDR(0x0001a7cau): goto L_1A7CA;
    case RC_ADDR(0x0001a7ceu): goto L_1A7CE;
    case RC_ADDR(0x0001a7d2u): goto L_1A7D2;
    case RC_ADDR(0x0001a7d6u): goto L_1A7D6;
    case RC_ADDR(0x0001a7dau): goto L_1A7DA;
    case RC_ADDR(0x0001a7deu): goto L_1A7DE;
    case RC_ADDR(0x0001a7e0u): goto L_1A7E0;
    case RC_ADDR(0x0001a7e4u): goto L_1A7E4;
    case RC_ADDR(0x0001a7e6u): goto L_1A7E6;
    case RC_ADDR(0x0001a7e8u): goto L_1A7E8;
    case RC_ADDR(0x0001a7ecu): goto L_1A7EC;
    case RC_ADDR(0x0001a7f0u): goto L_1A7F0;
    case RC_ADDR(0x0001a7f4u): goto L_1A7F4;
    case RC_ADDR(0x0001a7f6u): goto L_1A7F6;
    case RC_ADDR(0x0001a7f8u): goto L_1A7F8;
    case RC_ADDR(0x0001a7fau): goto L_1A7FA;
    case RC_ADDR(0x0001a7fcu): goto L_1A7FC;
    case RC_ADDR(0x0001a800u): goto L_1A800;
    case RC_ADDR(0x0001a804u): goto L_1A804;
    case RC_ADDR(0x0001a808u): goto L_1A808;
    case RC_ADDR(0x0001a80au): goto L_1A80A;
    case RC_ADDR(0x0001a80cu): goto L_1A80C;
    case RC_ADDR(0x0001a810u): goto L_1A810;
    case RC_ADDR(0x0001a812u): goto L_1A812;
    case RC_ADDR(0x0001a814u): goto L_1A814;
    case RC_ADDR(0x0001a816u): goto L_1A816;
    case RC_ADDR(0x0001a818u): goto L_1A818;
    case RC_ADDR(0x0001a81au): goto L_1A81A;
    case RC_ADDR(0x0001a81eu): goto L_1A81E;
    case RC_ADDR(0x0001a822u): goto L_1A822;
    case RC_ADDR(0x0001a826u): goto L_1A826;
    case RC_ADDR(0x0001a828u): goto L_1A828;
    case RC_ADDR(0x0001a82au): goto L_1A82A;
    case RC_ADDR(0x0001a82eu): goto L_1A82E;
    case RC_ADDR(0x0001a832u): goto L_1A832;
    case RC_ADDR(0x0001a836u): goto L_1A836;
    case RC_ADDR(0x0001a838u): goto L_1A838;
    case RC_ADDR(0x0001a83eu): goto L_1A83E;
    case RC_ADDR(0x0001a840u): goto L_1A840;
    case RC_ADDR(0x0001a846u): goto L_1A846;
    case RC_ADDR(0x0001a848u): goto L_1A848;
    case RC_ADDR(0x0001a84eu): goto L_1A84E;
    case RC_ADDR(0x0001a854u): goto L_1A854;
    case RC_ADDR(0x0001a856u): goto L_1A856;
    case RC_ADDR(0x0001a85cu): goto L_1A85C;
    case RC_ADDR(0x0001a862u): goto L_1A862;
    case RC_ADDR(0x0001a864u): goto L_1A864;
    case RC_ADDR(0x0001a86au): goto L_1A86A;
    case RC_ADDR(0x0001a870u): goto L_1A870;
    case RC_ADDR(0x0001a872u): goto L_1A872;
    case RC_ADDR(0x0001a878u): goto L_1A878;
    case RC_ADDR(0x0001a87cu): goto L_1A87C;
    case RC_ADDR(0x0001a87eu): goto L_1A87E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1A7BE:
    /* 0001a7be   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001a7beu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1A7C2:
    /* 0001a7c2   4  movem.l { A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001a7c2u);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1A7C6:
    /* 0001a7c6   4  move.w (8,A5),D5 */
    c->pc = RC_ADDR(0x0001a7c6u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A7CA:
    /* 0001a7ca   4  sub.w (470,A4),D5 */
    c->pc = RC_ADDR(0x0001a7cau);
    t0 = rc_rd16(c, m, (c->a[4] + 0x470u));
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_1A7CE:
    /* 0001a7ce   4  move.w (a,A5),D6 */
    c->pc = RC_ADDR(0x0001a7ceu);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A7D2:
    /* 0001a7d2   4  sub.w (472,A4),D6 */
    c->pc = RC_ADDR(0x0001a7d2u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x472u));
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_1A7D6:
    /* 0001a7d6   4  clr.w (70e,A4) */
    c->pc = RC_ADDR(0x0001a7d6u);
    rc_wr16(c, m, (c->a[4] + 0x70eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A7DA:
    /* 0001a7da   4  clr.w (70c,A4) */
    c->pc = RC_ADDR(0x0001a7dau);
    rc_wr16(c, m, (c->a[4] + 0x70cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A7DE:
    /* 0001a7de   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0001a7deu);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1A7E0:
    /* 0001a7e0   4  pea (ffff83ff).l */
    c->pc = RC_ADDR(0x0001a7e0u);
    rc_push32(c, m, RC_ADDR(0xffff83ffu));

L_1A7E4:
    /* 0001a7e4   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a7e4u);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A7E6:
    /* 0001a7e6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a7e6u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1A7E8:
    /* 0001a7e8   4  lea (ffffc75e,A4),A0 */
    c->pc = RC_ADDR(0x0001a7e8u);
    c->a[0] = (c->a[4] - 0x38a2u);

L_1A7EC:
    /* 0001a7ec   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a7ecu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A7F0:
    /* 0001a7f0   4  muls.w (c,A5),D1 */
    c->pc = RC_ADDR(0x0001a7f0u);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_muls(c, 1, t0);

L_1A7F4:
    /* 0001a7f4   2  add.w D6,D1 */
    c->pc = RC_ADDR(0x0001a7f4u);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A7F6:
    /* 0001a7f6   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001a7f6u);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A7F8:
    /* 0001a7f8   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a7f8u);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A7FA:
    /* 0001a7fa   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a7fau);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1A7FC:
    /* 0001a7fc   4  lea (ffffc756,A4),A0 */
    c->pc = RC_ADDR(0x0001a7fcu);
    c->a[0] = (c->a[4] - 0x38aau);

L_1A800:
    /* 0001a800   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a800u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A804:
    /* 0001a804   4  muls.w (c,A5),D1 */
    c->pc = RC_ADDR(0x0001a804u);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_muls(c, 1, t0);

L_1A808:
    /* 0001a808   2  add.w D5,D1 */
    c->pc = RC_ADDR(0x0001a808u);
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A80A:
    /* 0001a80a   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001a80au);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A80C:
    /* 0001a80c   4  jsr (0001aa04) */
    c->pc = RC_ADDR(0x0001a80cu);
    rc_push32(c, m, RC_ADDR(0x0001a810u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001aa04u);
    return;

L_1A810:
    /* 0001a810   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001a810u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1A812:
    /* 0001a812   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001a812u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1A814:
    /* 0001a814   2  beq 0001a836 */
    c->pc = RC_ADDR(0x0001a814u);
    if (rc_cond(c, 7)) goto L_1A836;

L_1A816:
    /* 0001a816   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a816u);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A818:
    /* 0001a818   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a818u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1A81A:
    /* 0001a81a   4  lea (ffffc756,A4),A0 */
    c->pc = RC_ADDR(0x0001a81au);
    c->a[0] = (c->a[4] - 0x38aau);

L_1A81E:
    /* 0001a81e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a81eu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A822:
    /* 0001a822   4  sub.w D1,(70c,A4) */
    c->pc = RC_ADDR(0x0001a822u);
    t3 = (c->a[4] + 0x70cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 1, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A826:
    /* 0001a826   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a826u);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A828:
    /* 0001a828   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a828u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1A82A:
    /* 0001a82a   4  lea (ffffc75e,A4),A0 */
    c->pc = RC_ADDR(0x0001a82au);
    c->a[0] = (c->a[4] - 0x38a2u);

L_1A82E:
    /* 0001a82e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a82eu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A832:
    /* 0001a832   4  sub.w D1,(70e,A4) */
    c->pc = RC_ADDR(0x0001a832u);
    t3 = (c->a[4] + 0x70eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 1, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A836:
    /* 0001a836   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0001a836u);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_1A838:
    /* 0001a838   6  cmp.l #4,D4 */
    c->pc = RC_ADDR(0x0001a838u);
    t0 = 0x00000004u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1A83E:
    /* 0001a83e   2  blt 0001a7e0 */
    c->pc = RC_ADDR(0x0001a83eu);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1A7E0; }

L_1A840:
    /* 0001a840   6  cmpi.w #ffff,(70c,A4) */
    c->pc = RC_ADDR(0x0001a840u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70cu));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1A846:
    /* 0001a846   2  bge 0001a84e */
    c->pc = RC_ADDR(0x0001a846u);
    if (rc_cond(c, 12)) goto L_1A84E;

L_1A848:
    /* 0001a848   6  move.w #ffff,(70c,A4) */
    c->pc = RC_ADDR(0x0001a848u);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x70cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A84E:
    /* 0001a84e   6  cmpi.w #1,(70c,A4) */
    c->pc = RC_ADDR(0x0001a84eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70cu));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1A854:
    /* 0001a854   2  ble 0001a85c */
    c->pc = RC_ADDR(0x0001a854u);
    if (rc_cond(c, 15)) goto L_1A85C;

L_1A856:
    /* 0001a856   6  move.w #1,(70c,A4) */
    c->pc = RC_ADDR(0x0001a856u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x70cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A85C:
    /* 0001a85c   6  cmpi.w #ffff,(70e,A4) */
    c->pc = RC_ADDR(0x0001a85cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70eu));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1A862:
    /* 0001a862   2  bge 0001a86a */
    c->pc = RC_ADDR(0x0001a862u);
    if (rc_cond(c, 12)) goto L_1A86A;

L_1A864:
    /* 0001a864   6  move.w #ffff,(70e,A4) */
    c->pc = RC_ADDR(0x0001a864u);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x70eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A86A:
    /* 0001a86a   6  cmpi.w #1,(70e,A4) */
    c->pc = RC_ADDR(0x0001a86au);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70eu));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1A870:
    /* 0001a870   2  ble 0001a878 */
    c->pc = RC_ADDR(0x0001a870u);
    if (rc_cond(c, 15)) goto L_1A878;

L_1A872:
    /* 0001a872   6  move.w #1,(70e,A4) */
    c->pc = RC_ADDR(0x0001a872u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x70eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A878:
    /* 0001a878   4  movem.l (SP)+,{ D4 D5 D6 } */
    c->pc = RC_ADDR(0x0001a878u);
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

L_1A87C:
    /* 0001a87c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001a87cu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1A87E:
    /* 0001a87e   2  rts */
    c->pc = RC_ADDR(0x0001a87eu);
    rc_ret(c, m);
    return;

}
