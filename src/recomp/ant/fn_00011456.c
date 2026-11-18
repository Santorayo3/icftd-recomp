/* fn_00011456 - 100 byte(s), 39 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00011456(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00011456u): goto L_11456;
    case RC_ADDR(0x0001145au): goto L_1145A;
    case RC_ADDR(0x0001145eu): goto L_1145E;
    case RC_ADDR(0x00011462u): goto L_11462;
    case RC_ADDR(0x00011466u): goto L_11466;
    case RC_ADDR(0x00011468u): goto L_11468;
    case RC_ADDR(0x0001146cu): goto L_1146C;
    case RC_ADDR(0x0001146eu): goto L_1146E;
    case RC_ADDR(0x00011470u): goto L_11470;
    case RC_ADDR(0x00011472u): goto L_11472;
    case RC_ADDR(0x00011474u): goto L_11474;
    case RC_ADDR(0x00011478u): goto L_11478;
    case RC_ADDR(0x0001147au): goto L_1147A;
    case RC_ADDR(0x0001147eu): goto L_1147E;
    case RC_ADDR(0x00011480u): goto L_11480;
    case RC_ADDR(0x00011482u): goto L_11482;
    case RC_ADDR(0x00011484u): goto L_11484;
    case RC_ADDR(0x00011488u): goto L_11488;
    case RC_ADDR(0x0001148au): goto L_1148A;
    case RC_ADDR(0x0001148cu): goto L_1148C;
    case RC_ADDR(0x0001148eu): goto L_1148E;
    case RC_ADDR(0x00011490u): goto L_11490;
    case RC_ADDR(0x00011492u): goto L_11492;
    case RC_ADDR(0x00011494u): goto L_11494;
    case RC_ADDR(0x00011496u): goto L_11496;
    case RC_ADDR(0x00011498u): goto L_11498;
    case RC_ADDR(0x0001149au): goto L_1149A;
    case RC_ADDR(0x0001149cu): goto L_1149C;
    case RC_ADDR(0x0001149eu): goto L_1149E;
    case RC_ADDR(0x000114a0u): goto L_114A0;
    case RC_ADDR(0x000114a2u): goto L_114A2;
    case RC_ADDR(0x000114a4u): goto L_114A4;
    case RC_ADDR(0x000114a6u): goto L_114A6;
    case RC_ADDR(0x000114aau): goto L_114AA;
    case RC_ADDR(0x000114acu): goto L_114AC;
    case RC_ADDR(0x000114aeu): goto L_114AE;
    case RC_ADDR(0x000114b2u): goto L_114B2;
    case RC_ADDR(0x000114b4u): goto L_114B4;
    case RC_ADDR(0x000114b8u): goto L_114B8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11456:
    /* 00011456   4  movem.l { D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x00011456u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_1145A:
    /* 0001145a   4  movea.l (4,A0),A1 */
    c->pc = RC_ADDR(0x0001145au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    c->a[1] = t0;

L_1145E:
    /* 0001145e   4  lea (8,A0),A0 */
    c->pc = RC_ADDR(0x0001145eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[0] + 0x8u);

L_11462:
    /* 00011462   4  lea (000114ba),A2 */
    c->pc = RC_ADDR(0x00011462u);
    rc_step(c, m, 8);
    c->a[2] = RC_ADDR(0x000114bau);

L_11466:
    /* 00011466   2  clr.w D3 */
    c->pc = RC_ADDR(0x00011466u);
    rc_step(c, m, 4);
    rc_d_set(c, 3, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11468:
    /* 00011468   4  move.b (7f,A0),D4 */
    c->pc = RC_ADDR(0x00011468u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x7fu));
    rc_d_set(c, 4, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1146C:
    /* 0001146c   2  ext.w D4 */
    c->pc = RC_ADDR(0x0001146cu);
    rc_step(c, m, 4);
    rc_ext_w(c, 4);

L_1146E:
    /* 0001146e   2  asl.w #7,D4 */
    c->pc = RC_ADDR(0x0001146eu);
    rc_step(c, m, 6);
    rc_d_set(c, 4, RC_W, rc_shift(c, 0, 1, 0x00000007u, rc_d_get(c, 4, RC_W), RC_W));

L_11470:
    /* 00011470   2  clr.w D0 */
    c->pc = RC_ADDR(0x00011470u);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11472:
    /* 00011472   2  move.w (A2)+,D1 */
    c->pc = RC_ADDR(0x00011472u);
    rc_step(c, m, 8);
    t3 = c->a[2];
    c->a[2] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11474:
    /* 00011474   4  move.w #8000,D2 */
    c->pc = RC_ADDR(0x00011474u);
    rc_step(c, m, 8);
    t0 = 0x00008000u;
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11478:
    /* 00011478   2  sub.w D1,D2 */
    c->pc = RC_ADDR(0x00011478u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_1147A:
    /* 0001147a   4  mulu.w #e666,D2 */
    c->pc = RC_ADDR(0x0001147au);
    rc_step(c, m, 42);
    t0 = 0x0000e666u;
    rc_mulu(c, 2, t0);

L_1147E:
    /* 0001147e   2  swap D2 */
    c->pc = RC_ADDR(0x0001147eu);
    rc_step(c, m, 4);
    t0 = c->d[2];
    c->d[2] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[2], RC_L);

L_11480:
    /* 00011480   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x00011480u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_11482:
    /* 00011482   2  clr.w D5 */
    c->pc = RC_ADDR(0x00011482u);
    rc_step(c, m, 4);
    rc_d_set(c, 5, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11484:
    /* 00011484   4  move.b (0,A0,D5.w),D6 */
    c->pc = RC_ADDR(0x00011484u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[5], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 6, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_11488:
    /* 00011488   2  ext.w D6 */
    c->pc = RC_ADDR(0x00011488u);
    rc_step(c, m, 4);
    rc_ext_w(c, 6);

L_1148A:
    /* 0001148a   2  asl.w #7,D6 */
    c->pc = RC_ADDR(0x0001148au);
    rc_step(c, m, 6);
    rc_d_set(c, 6, RC_W, rc_shift(c, 0, 1, 0x00000007u, rc_d_get(c, 6, RC_W), RC_W));

L_1148C:
    /* 0001148c   2  sub.w D4,D6 */
    c->pc = RC_ADDR(0x0001148cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_1148E:
    /* 0001148e   2  muls.w D1,D6 */
    c->pc = RC_ADDR(0x0001148eu);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 1, RC_W);
    rc_muls(c, 6, t0);

L_11490:
    /* 00011490   2  asl.l #2,D6 */
    c->pc = RC_ADDR(0x00011490u);
    rc_step(c, m, 8);
    rc_d_set(c, 6, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 6, RC_L), RC_L));

L_11492:
    /* 00011492   2  swap D6 */
    c->pc = RC_ADDR(0x00011492u);
    rc_step(c, m, 4);
    t0 = c->d[6];
    c->d[6] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[6], RC_L);

L_11494:
    /* 00011494   2  add.w D6,D3 */
    c->pc = RC_ADDR(0x00011494u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_11496:
    /* 00011496   2  add.w D3,D4 */
    c->pc = RC_ADDR(0x00011496u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_11498:
    /* 00011498   2  ror.w #7,D4 */
    c->pc = RC_ADDR(0x00011498u);
    rc_step(c, m, 6);
    rc_d_set(c, 4, RC_W, rc_shift(c, 3, 0, 0x00000007u, rc_d_get(c, 4, RC_W), RC_W));

L_1149A:
    /* 0001149a   2  move.b D4,(A1)+ */
    c->pc = RC_ADDR(0x0001149au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 4, RC_B);
    t3 = c->a[1];
    c->a[1] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1149C:
    /* 0001149c   2  rol.w #7,D4 */
    c->pc = RC_ADDR(0x0001149cu);
    rc_step(c, m, 6);
    rc_d_set(c, 4, RC_W, rc_shift(c, 3, 1, 0x00000007u, rc_d_get(c, 4, RC_W), RC_W));

L_1149E:
    /* 0001149e   2  muls.w D2,D3 */
    c->pc = RC_ADDR(0x0001149eu);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 2, RC_W);
    rc_muls(c, 3, t0);

L_114A0:
    /* 000114a0   2  asl.l #1,D3 */
    c->pc = RC_ADDR(0x000114a0u);
    rc_step(c, m, 8);
    rc_d_set(c, 3, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 3, RC_L), RC_L));

L_114A2:
    /* 000114a2   2  swap D3 */
    c->pc = RC_ADDR(0x000114a2u);
    rc_step(c, m, 4);
    t0 = c->d[3];
    c->d[3] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[3], RC_L);

L_114A4:
    /* 000114a4   2  addq.w #1,D5 */
    c->pc = RC_ADDR(0x000114a4u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_114A6:
    /* 000114a6   4  cmpi.w #80,D5 */
    c->pc = RC_ADDR(0x000114a6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000080u);

L_114AA:
    /* 000114aa   2  bcs 00011484 */
    c->pc = RC_ADDR(0x000114aau);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_11484; }

L_114AC:
    /* 000114ac   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x000114acu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_114AE:
    /* 000114ae   4  cmpi.w #40,D0 */
    c->pc = RC_ADDR(0x000114aeu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000040u);

L_114B2:
    /* 000114b2   2  bne 00011472 */
    c->pc = RC_ADDR(0x000114b2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_11472; }

L_114B4:
    /* 000114b4   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x000114b4u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_114B8:
    /* 000114b8   2  rts */
    c->pc = RC_ADDR(0x000114b8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
