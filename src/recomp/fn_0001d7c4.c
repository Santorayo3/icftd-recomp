/* fn_0001d7c4 - 184 byte(s), 52 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001d7c4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d7c4u): goto L_1D7C4;
    case RC_ADDR(0x0001d7c8u): goto L_1D7C8;
    case RC_ADDR(0x0001d7ceu): goto L_1D7CE;
    case RC_ADDR(0x0001d7d4u): goto L_1D7D4;
    case RC_ADDR(0x0001d7d8u): goto L_1D7D8;
    case RC_ADDR(0x0001d7dau): goto L_1D7DA;
    case RC_ADDR(0x0001d7deu): goto L_1D7DE;
    case RC_ADDR(0x0001d7e0u): goto L_1D7E0;
    case RC_ADDR(0x0001d7e4u): goto L_1D7E4;
    case RC_ADDR(0x0001d7e8u): goto L_1D7E8;
    case RC_ADDR(0x0001d7ecu): goto L_1D7EC;
    case RC_ADDR(0x0001d7eeu): goto L_1D7EE;
    case RC_ADDR(0x0001d7f2u): goto L_1D7F2;
    case RC_ADDR(0x0001d7f6u): goto L_1D7F6;
    case RC_ADDR(0x0001d7f8u): goto L_1D7F8;
    case RC_ADDR(0x0001d7fau): goto L_1D7FA;
    case RC_ADDR(0x0001d7feu): goto L_1D7FE;
    case RC_ADDR(0x0001d802u): goto L_1D802;
    case RC_ADDR(0x0001d804u): goto L_1D804;
    case RC_ADDR(0x0001d806u): goto L_1D806;
    case RC_ADDR(0x0001d80au): goto L_1D80A;
    case RC_ADDR(0x0001d810u): goto L_1D810;
    case RC_ADDR(0x0001d814u): goto L_1D814;
    case RC_ADDR(0x0001d81au): goto L_1D81A;
    case RC_ADDR(0x0001d81cu): goto L_1D81C;
    case RC_ADDR(0x0001d81eu): goto L_1D81E;
    case RC_ADDR(0x0001d822u): goto L_1D822;
    case RC_ADDR(0x0001d826u): goto L_1D826;
    case RC_ADDR(0x0001d828u): goto L_1D828;
    case RC_ADDR(0x0001d82au): goto L_1D82A;
    case RC_ADDR(0x0001d82eu): goto L_1D82E;
    case RC_ADDR(0x0001d832u): goto L_1D832;
    case RC_ADDR(0x0001d834u): goto L_1D834;
    case RC_ADDR(0x0001d836u): goto L_1D836;
    case RC_ADDR(0x0001d83au): goto L_1D83A;
    case RC_ADDR(0x0001d840u): goto L_1D840;
    case RC_ADDR(0x0001d844u): goto L_1D844;
    case RC_ADDR(0x0001d84au): goto L_1D84A;
    case RC_ADDR(0x0001d84cu): goto L_1D84C;
    case RC_ADDR(0x0001d850u): goto L_1D850;
    case RC_ADDR(0x0001d854u): goto L_1D854;
    case RC_ADDR(0x0001d858u): goto L_1D858;
    case RC_ADDR(0x0001d85au): goto L_1D85A;
    case RC_ADDR(0x0001d85eu): goto L_1D85E;
    case RC_ADDR(0x0001d860u): goto L_1D860;
    case RC_ADDR(0x0001d864u): goto L_1D864;
    case RC_ADDR(0x0001d866u): goto L_1D866;
    case RC_ADDR(0x0001d86au): goto L_1D86A;
    case RC_ADDR(0x0001d86eu): goto L_1D86E;
    case RC_ADDR(0x0001d872u): goto L_1D872;
    case RC_ADDR(0x0001d878u): goto L_1D878;
    case RC_ADDR(0x0001d87au): goto L_1D87A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D7C4:
    /* 0001d7c4   4  link.w A5,#fffffffe */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7c4u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1D7C8:
    /* 0001d7c8   6  move.w (28c2,A4),(28c0,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7c8u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x28c2u));
    rc_wr16(c, m, (c->a[4] + 0x28c0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D7CE:
    /* 0001d7ce   6  move.w (ffffff4e,A4),(fffffecc,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7ceu);
    t0 = rc_rd16(c, m, (c->a[4] - 0xb2u));
    rc_wr16(c, m, (c->a[4] - 0x134u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D7D4:
    /* 0001d7d4   4  tst.w (26ba,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7d4u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26bau));
    rc_set_nzvc(c, t0, RC_W);

L_1D7D8:
    /* 0001d7d8   2  bne 0001d7e0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7d8u);
    if (rc_cond(c, 6)) goto L_1D7E0;

L_1D7DA:
    /* 0001d7da   4  tst.w (ffffcb1e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7dau);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34e2u));
    rc_set_nzvc(c, t0, RC_W);

L_1D7DE:
    /* 0001d7de   2  beq 0001d85a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7deu);
    if (rc_cond(c, 7)) goto L_1D85A;

L_1D7E0:
    /* 0001d7e0   4  clr.w (ffffcb1e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7e0u);
    rc_wr16(c, m, (c->a[4] - 0x34e2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D7E4:
    /* 0001d7e4   4  clr.w (26ba,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7e4u);
    rc_wr16(c, m, (c->a[4] + 0x26bau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D7E8:
    /* 0001d7e8   4  tst.w (ffffcb20,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7e8u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34e0u));
    rc_set_nzvc(c, t0, RC_W);

L_1D7EC:
    /* 0001d7ec   2  beq 0001d81e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7ecu);
    if (rc_cond(c, 7)) goto L_1D81E;

L_1D7EE:
    /* 0001d7ee   4  clr.w (fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7eeu);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D7F2:
    /* 0001d7f2   4  move.w (fffffffe,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7f2u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D7F6:
    /* 0001d7f6   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7f6u);
    rc_ext_l(c, 0);

L_1D7F8:
    /* 0001d7f8   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7f8u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1D7FA:
    /* 0001d7fa   4  lea (fffffece,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7fau);
    c->a[0] = (c->a[4] - 0x132u);

L_1D7FE:
    /* 0001d7fe   4  move.w (fffffffe,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7feu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D802:
    /* 0001d802   2  ext.l D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d802u);
    rc_ext_l(c, 1);

L_1D804:
    /* 0001d804   2  asl.l #1,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d804u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_1D806:
    /* 0001d806   4  lea (fffffe7c,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d806u);
    c->a[1] = (c->a[4] - 0x184u);

L_1D80A:
    /* 0001d80a   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d80au);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D810:
    /* 0001d810   4  addq.w #1,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d810u);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D814:
    /* 0001d814   6  cmpi.w #20,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d814u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000020u);

L_1D81A:
    /* 0001d81a   2  blt 0001d7f2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d81au);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1D7F2; }

L_1D81C:
    /* 0001d81c   2  bra 0001d84c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d81cu);
    goto L_1D84C;

L_1D81E:
    /* 0001d81e   4  clr.w (fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d81eu);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D822:
    /* 0001d822   4  move.w (fffffffe,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d822u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D826:
    /* 0001d826   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d826u);
    rc_ext_l(c, 0);

L_1D828:
    /* 0001d828   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d828u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1D82A:
    /* 0001d82a   4  lea (282,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d82au);
    c->a[0] = (c->a[4] + 0x282u);

L_1D82E:
    /* 0001d82e   4  move.w (fffffffe,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d82eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D832:
    /* 0001d832   2  ext.l D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d832u);
    rc_ext_l(c, 1);

L_1D834:
    /* 0001d834   2  asl.l #1,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d834u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_1D836:
    /* 0001d836   4  lea (fffffe7c,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d836u);
    c->a[1] = (c->a[4] - 0x184u);

L_1D83A:
    /* 0001d83a   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d83au);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D840:
    /* 0001d840   4  addq.w #1,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d840u);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D844:
    /* 0001d844   6  cmpi.w #20,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d844u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000020u);

L_1D84A:
    /* 0001d84a   2  blt 0001d822 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d84au);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1D822; }

L_1D84C:
    /* 0001d84c   4  pea (fffffe7c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d84cu);
    rc_push32(c, m, (c->a[4] - 0x184u));

L_1D850:
    /* 0001d850   4  move.l (ffffcb10,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d850u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D854:
    /* 0001d854   4  jsr (0001d9c8) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d854u);
    rc_push32(c, m, RC_ADDR(0x0001d858u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d9c8u);
    return;

L_1D858:
    /* 0001d858   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d858u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D85A:
    /* 0001d85a   4  tst.w (ffffff50,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d85au);
    t0 = rc_rd16(c, m, (c->a[4] - 0xb0u));
    rc_set_nzvc(c, t0, RC_W);

L_1D85E:
    /* 0001d85e   2  beq 0001d878 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d85eu);
    if (rc_cond(c, 7)) goto L_1D878;

L_1D860:
    /* 0001d860   4  tst.w (fffffecc,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d860u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x134u));
    rc_set_nzvc(c, t0, RC_W);

L_1D864:
    /* 0001d864   2  beq 0001d878 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d864u);
    if (rc_cond(c, 7)) goto L_1D878;

L_1D866:
    /* 0001d866   4  clr.w (ffffff50,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d866u);
    rc_wr16(c, m, (c->a[4] - 0xb0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D86A:
    /* 0001d86a   4  clr.w (fffffecc,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d86au);
    rc_wr16(c, m, (c->a[4] - 0x134u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D86E:
    /* 0001d86e   4  jsr (0001d8f4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d86eu);
    rc_push32(c, m, RC_ADDR(0x0001d872u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d8f4u);
    return;

L_1D872:
    /* 0001d872   6  move.w #1,(fffffecc,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d872u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x134u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D878:
    /* 0001d878   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d878u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D87A:
    /* 0001d87a   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d87au);
    rc_ret(c, m);
    return;

}
