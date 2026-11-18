/* fn_0001256e - 208 byte(s), 58 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001256e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001256eu): goto L_1256E;
    case RC_ADDR(0x00012572u): goto L_12572;
    case RC_ADDR(0x00012576u): goto L_12576;
    case RC_ADDR(0x00012578u): goto L_12578;
    case RC_ADDR(0x0001257cu): goto L_1257C;
    case RC_ADDR(0x00012580u): goto L_12580;
    case RC_ADDR(0x00012584u): goto L_12584;
    case RC_ADDR(0x00012588u): goto L_12588;
    case RC_ADDR(0x0001258cu): goto L_1258C;
    case RC_ADDR(0x0001258eu): goto L_1258E;
    case RC_ADDR(0x00012592u): goto L_12592;
    case RC_ADDR(0x00012594u): goto L_12594;
    case RC_ADDR(0x00012596u): goto L_12596;
    case RC_ADDR(0x0001259au): goto L_1259A;
    case RC_ADDR(0x0001259cu): goto L_1259C;
    case RC_ADDR(0x000125a0u): goto L_125A0;
    case RC_ADDR(0x000125a2u): goto L_125A2;
    case RC_ADDR(0x000125a6u): goto L_125A6;
    case RC_ADDR(0x000125acu): goto L_125AC;
    case RC_ADDR(0x000125b0u): goto L_125B0;
    case RC_ADDR(0x000125b6u): goto L_125B6;
    case RC_ADDR(0x000125b8u): goto L_125B8;
    case RC_ADDR(0x000125bcu): goto L_125BC;
    case RC_ADDR(0x000125c0u): goto L_125C0;
    case RC_ADDR(0x000125c6u): goto L_125C6;
    case RC_ADDR(0x000125cau): goto L_125CA;
    case RC_ADDR(0x000125ceu): goto L_125CE;
    case RC_ADDR(0x000125d0u): goto L_125D0;
    case RC_ADDR(0x000125d2u): goto L_125D2;
    case RC_ADDR(0x000125d6u): goto L_125D6;
    case RC_ADDR(0x000125dau): goto L_125DA;
    case RC_ADDR(0x000125dcu): goto L_125DC;
    case RC_ADDR(0x000125e0u): goto L_125E0;
    case RC_ADDR(0x000125e6u): goto L_125E6;
    case RC_ADDR(0x000125eau): goto L_125EA;
    case RC_ADDR(0x000125eeu): goto L_125EE;
    case RC_ADDR(0x000125f0u): goto L_125F0;
    case RC_ADDR(0x000125f4u): goto L_125F4;
    case RC_ADDR(0x000125fau): goto L_125FA;
    case RC_ADDR(0x000125feu): goto L_125FE;
    case RC_ADDR(0x00012602u): goto L_12602;
    case RC_ADDR(0x00012604u): goto L_12604;
    case RC_ADDR(0x00012608u): goto L_12608;
    case RC_ADDR(0x0001260cu): goto L_1260C;
    case RC_ADDR(0x00012610u): goto L_12610;
    case RC_ADDR(0x00012614u): goto L_12614;
    case RC_ADDR(0x00012616u): goto L_12616;
    case RC_ADDR(0x0001261au): goto L_1261A;
    case RC_ADDR(0x0001261cu): goto L_1261C;
    case RC_ADDR(0x00012620u): goto L_12620;
    case RC_ADDR(0x00012624u): goto L_12624;
    case RC_ADDR(0x00012628u): goto L_12628;
    case RC_ADDR(0x0001262cu): goto L_1262C;
    case RC_ADDR(0x00012630u): goto L_12630;
    case RC_ADDR(0x00012634u): goto L_12634;
    case RC_ADDR(0x00012638u): goto L_12638;
    case RC_ADDR(0x0001263au): goto L_1263A;
    case RC_ADDR(0x0001263cu): goto L_1263C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1256E:
    /* 0001256e   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x0001256eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_12572:
    /* 00012572   4  pea (8dc,A4) */
    c->pc = RC_ADDR(0x00012572u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x8dcu));

L_12576:
    /* 00012576   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00012576u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_12578:
    /* 00012578   4  pea (0001263e) */
    c->pc = RC_ADDR(0x00012578u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001263eu));

L_1257C:
    /* 0001257c   4  jsr (0001834e) */
    c->pc = RC_ADDR(0x0001257cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00012580u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001834eu);
    return;

L_12580:
    /* 00012580   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00012580u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_12584:
    /* 00012584   4  move.l D0,(ffff8556,A4) */
    c->pc = RC_ADDR(0x00012584u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x7aaau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_12588:
    /* 00012588   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00012588u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1258C:
    /* 0001258c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001258cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1258E:
    /* 0001258e   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001258eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12592:
    /* 00012592   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00012592u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_12594:
    /* 00012594   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00012594u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_12596:
    /* 00012596   4  adda.l (ffff8556,A4),A0 */
    c->pc = RC_ADDR(0x00012596u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7aaau));
    c->a[0] += t0;

L_1259A:
    /* 0001259a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001259au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1259C:
    /* 0001259c   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001259cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_125A0:
    /* 000125a0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000125a0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_125A2:
    /* 000125a2   4  lea (fffffaa8,A4),A1 */
    c->pc = RC_ADDR(0x000125a2u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x558u);

L_125A6:
    /* 000125a6   6  move.l (8,A0),(0,A1,D0.w) */
    c->pc = RC_ADDR(0x000125a6u);
    rc_step(c, m, 30);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_125AC:
    /* 000125ac   4  addq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000125acu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_125B0:
    /* 000125b0   6  cmpi.w #5,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000125b0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_125B6:
    /* 000125b6   2  bcs 0001258c */
    c->pc = RC_ADDR(0x000125b6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1258C; }

L_125B8:
    /* 000125b8   4  movea.l (ffff8556,A4),A0 */
    c->pc = RC_ADDR(0x000125b8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7aaau));
    c->a[0] = t0;

L_125BC:
    /* 000125bc   4  move.w (A0),(fffffa9c,A4) */
    c->pc = RC_ADDR(0x000125bcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_wr16(c, m, (c->a[4] - 0x564u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_125C0:
    /* 000125c0   6  move.w #12,(fffffa9e,A4) */
    c->pc = RC_ADDR(0x000125c0u);
    rc_step(c, m, 16);
    t0 = 0x00000012u;
    rc_wr16(c, m, (c->a[4] - 0x562u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_125C6:
    /* 000125c6   4  move.w (fffffa9c,A4),D0 */
    c->pc = RC_ADDR(0x000125c6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x564u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_125CA:
    /* 000125ca   4  mulu.w (fffffa9e,A4),D0 */
    c->pc = RC_ADDR(0x000125cau);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x562u));
    rc_mulu(c, 0, t0);

L_125CE:
    /* 000125ce   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x000125ceu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_125D0:
    /* 000125d0   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x000125d0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_125D2:
    /* 000125d2   4  move.l D1,(fffffac4,A4) */
    c->pc = RC_ADDR(0x000125d2u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x53cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_125D6:
    /* 000125d6   4  move.l (fffffac4,A4),D0 */
    c->pc = RC_ADDR(0x000125d6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x53cu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_125DA:
    /* 000125da   2  lsr.l #1,D0 */
    c->pc = RC_ADDR(0x000125dau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_125DC:
    /* 000125dc   4  move.l D0,(fffffac8,A4) */
    c->pc = RC_ADDR(0x000125dcu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x538u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_125E0:
    /* 000125e0   6  pea (00010001).l */
    c->pc = RC_ADDR(0x000125e0u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_125E6:
    /* 000125e6   4  move.l (fffffac4,A4),-(A7) */
    c->pc = RC_ADDR(0x000125e6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x53cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_125EA:
    /* 000125ea   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x000125eau);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x000125eeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_125EE:
    /* 000125ee   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000125eeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_125F0:
    /* 000125f0   4  move.l D0,(fffffabc,A4) */
    c->pc = RC_ADDR(0x000125f0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x544u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_125F4:
    /* 000125f4   6  pea (00010001).l */
    c->pc = RC_ADDR(0x000125f4u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_125FA:
    /* 000125fa   4  move.l (fffffac8,A4),-(A7) */
    c->pc = RC_ADDR(0x000125fau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x538u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_125FE:
    /* 000125fe   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x000125feu);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x00012602u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_12602:
    /* 00012602   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00012602u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_12604:
    /* 00012604   4  move.l D0,(fffffac0,A4) */
    c->pc = RC_ADDR(0x00012604u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x540u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_12608:
    /* 00012608   4  pea (000003ed).l */
    c->pc = RC_ADDR(0x00012608u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000003edu);

L_1260C:
    /* 0001260c   4  pea (00012648) */
    c->pc = RC_ADDR(0x0001260cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00012648u));

L_12610:
    /* 00012610   4  jsr (ffff82b4,A4) */
    c->pc = RC_ADDR(0x00012610u);
    rc_step(c, m, 18);
    /* vector 115 */
    rc_push32(c, m, RC_ADDR(0x00012614u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023daau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022518u);
    return;

L_12614:
    /* 00012614   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00012614u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_12616:
    /* 00012616   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00012616u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1261A:
    /* 0001261a   2  beq 0001263a */
    c->pc = RC_ADDR(0x0001261au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1263A;

L_1261C:
    /* 0001261c   4  move.l (fffffac8,A4),-(A7) */
    c->pc = RC_ADDR(0x0001261cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x538u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_12620:
    /* 00012620   4  move.l (fffffac0,A4),-(A7) */
    c->pc = RC_ADDR(0x00012620u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x540u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_12624:
    /* 00012624   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00012624u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_12628:
    /* 00012628   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00012628u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0001262cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_1262C:
    /* 0001262c   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001262cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_12630:
    /* 00012630   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00012630u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_12634:
    /* 00012634   4  jsr (ffff82ba,A4) */
    c->pc = RC_ADDR(0x00012634u);
    rc_step(c, m, 18);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x00012638u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023db0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022532u);
    return;

L_12638:
    /* 00012638   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00012638u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1263A:
    /* 0001263a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001263au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1263C:
    /* 0001263c   2  rts */
    c->pc = RC_ADDR(0x0001263cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
