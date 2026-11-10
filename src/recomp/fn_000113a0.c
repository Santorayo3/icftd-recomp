/* fn_000113a0 - 370 byte(s), 109 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000113a0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000113a0u): goto L_113A0;
    case RC_ADDR(0x000113a4u): goto L_113A4;
    case RC_ADDR(0x000113a6u): goto L_113A6;
    case RC_ADDR(0x000113a8u): goto L_113A8;
    case RC_ADDR(0x000113aau): goto L_113AA;
    case RC_ADDR(0x000113aeu): goto L_113AE;
    case RC_ADDR(0x000113b0u): goto L_113B0;
    case RC_ADDR(0x000113b4u): goto L_113B4;
    case RC_ADDR(0x000113b8u): goto L_113B8;
    case RC_ADDR(0x000113bcu): goto L_113BC;
    case RC_ADDR(0x000113c0u): goto L_113C0;
    case RC_ADDR(0x000113c4u): goto L_113C4;
    case RC_ADDR(0x000113c8u): goto L_113C8;
    case RC_ADDR(0x000113ccu): goto L_113CC;
    case RC_ADDR(0x000113ceu): goto L_113CE;
    case RC_ADDR(0x000113d2u): goto L_113D2;
    case RC_ADDR(0x000113d4u): goto L_113D4;
    case RC_ADDR(0x000113d6u): goto L_113D6;
    case RC_ADDR(0x000113dau): goto L_113DA;
    case RC_ADDR(0x000113dcu): goto L_113DC;
    case RC_ADDR(0x000113deu): goto L_113DE;
    case RC_ADDR(0x000113e0u): goto L_113E0;
    case RC_ADDR(0x000113e2u): goto L_113E2;
    case RC_ADDR(0x000113e4u): goto L_113E4;
    case RC_ADDR(0x000113e8u): goto L_113E8;
    case RC_ADDR(0x000113ecu): goto L_113EC;
    case RC_ADDR(0x000113eeu): goto L_113EE;
    case RC_ADDR(0x000113f0u): goto L_113F0;
    case RC_ADDR(0x000113f2u): goto L_113F2;
    case RC_ADDR(0x000113f4u): goto L_113F4;
    case RC_ADDR(0x000113f6u): goto L_113F6;
    case RC_ADDR(0x000113f8u): goto L_113F8;
    case RC_ADDR(0x000113fcu): goto L_113FC;
    case RC_ADDR(0x000113feu): goto L_113FE;
    case RC_ADDR(0x00011400u): goto L_11400;
    case RC_ADDR(0x00011402u): goto L_11402;
    case RC_ADDR(0x00011408u): goto L_11408;
    case RC_ADDR(0x0001140eu): goto L_1140E;
    case RC_ADDR(0x00011412u): goto L_11412;
    case RC_ADDR(0x00011414u): goto L_11414;
    case RC_ADDR(0x00011418u): goto L_11418;
    case RC_ADDR(0x0001141au): goto L_1141A;
    case RC_ADDR(0x0001141cu): goto L_1141C;
    case RC_ADDR(0x00011422u): goto L_11422;
    case RC_ADDR(0x00011426u): goto L_11426;
    case RC_ADDR(0x00011428u): goto L_11428;
    case RC_ADDR(0x0001142cu): goto L_1142C;
    case RC_ADDR(0x00011430u): goto L_11430;
    case RC_ADDR(0x00011432u): goto L_11432;
    case RC_ADDR(0x00011434u): goto L_11434;
    case RC_ADDR(0x00011436u): goto L_11436;
    case RC_ADDR(0x0001143au): goto L_1143A;
    case RC_ADDR(0x0001143cu): goto L_1143C;
    case RC_ADDR(0x0001143eu): goto L_1143E;
    case RC_ADDR(0x00011442u): goto L_11442;
    case RC_ADDR(0x00011444u): goto L_11444;
    case RC_ADDR(0x00011446u): goto L_11446;
    case RC_ADDR(0x0001144cu): goto L_1144C;
    case RC_ADDR(0x00011452u): goto L_11452;
    case RC_ADDR(0x00011454u): goto L_11454;
    case RC_ADDR(0x00011456u): goto L_11456;
    case RC_ADDR(0x0001145eu): goto L_1145E;
    case RC_ADDR(0x00011466u): goto L_11466;
    case RC_ADDR(0x00011468u): goto L_11468;
    case RC_ADDR(0x0001146cu): goto L_1146C;
    case RC_ADDR(0x0001146eu): goto L_1146E;
    case RC_ADDR(0x00011474u): goto L_11474;
    case RC_ADDR(0x0001147au): goto L_1147A;
    case RC_ADDR(0x0001147eu): goto L_1147E;
    case RC_ADDR(0x00011480u): goto L_11480;
    case RC_ADDR(0x00011482u): goto L_11482;
    case RC_ADDR(0x00011484u): goto L_11484;
    case RC_ADDR(0x00011486u): goto L_11486;
    case RC_ADDR(0x0001148au): goto L_1148A;
    case RC_ADDR(0x0001148cu): goto L_1148C;
    case RC_ADDR(0x00011490u): goto L_11490;
    case RC_ADDR(0x00011492u): goto L_11492;
    case RC_ADDR(0x00011496u): goto L_11496;
    case RC_ADDR(0x00011498u): goto L_11498;
    case RC_ADDR(0x0001149au): goto L_1149A;
    case RC_ADDR(0x0001149cu): goto L_1149C;
    case RC_ADDR(0x000114a0u): goto L_114A0;
    case RC_ADDR(0x000114a4u): goto L_114A4;
    case RC_ADDR(0x000114a6u): goto L_114A6;
    case RC_ADDR(0x000114a8u): goto L_114A8;
    case RC_ADDR(0x000114b0u): goto L_114B0;
    case RC_ADDR(0x000114b8u): goto L_114B8;
    case RC_ADDR(0x000114bau): goto L_114BA;
    case RC_ADDR(0x000114bcu): goto L_114BC;
    case RC_ADDR(0x000114c2u): goto L_114C2;
    case RC_ADDR(0x000114c6u): goto L_114C6;
    case RC_ADDR(0x000114c8u): goto L_114C8;
    case RC_ADDR(0x000114ccu): goto L_114CC;
    case RC_ADDR(0x000114d0u): goto L_114D0;
    case RC_ADDR(0x000114d2u): goto L_114D2;
    case RC_ADDR(0x000114d4u): goto L_114D4;
    case RC_ADDR(0x000114d8u): goto L_114D8;
    case RC_ADDR(0x000114deu): goto L_114DE;
    case RC_ADDR(0x000114e4u): goto L_114E4;
    case RC_ADDR(0x000114eau): goto L_114EA;
    case RC_ADDR(0x000114ecu): goto L_114EC;
    case RC_ADDR(0x000114eeu): goto L_114EE;
    case RC_ADDR(0x000114f4u): goto L_114F4;
    case RC_ADDR(0x000114fau): goto L_114FA;
    case RC_ADDR(0x00011500u): goto L_11500;
    case RC_ADDR(0x00011508u): goto L_11508;
    case RC_ADDR(0x0001150au): goto L_1150A;
    case RC_ADDR(0x0001150eu): goto L_1150E;
    case RC_ADDR(0x00011510u): goto L_11510;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_113A0:
    /* 000113a0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000113a0u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_113A4:
    /* 000113a4   2  clr.l D4 */
    c->pc = RC_ADDR(0x000113a4u);
    rc_step(c, m);
    rc_d_set(c, 4, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_113A6:
    /* 000113a6   2  clr.l D5 */
    c->pc = RC_ADDR(0x000113a6u);
    rc_step(c, m);
    rc_d_set(c, 5, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_113A8:
    /* 000113a8   2  clr.l D6 */
    c->pc = RC_ADDR(0x000113a8u);
    rc_step(c, m);
    rc_d_set(c, 6, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_113AA:
    /* 000113aa   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x000113aau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_113AE:
    /* 000113ae   2  move.w (A0),D1 */
    c->pc = RC_ADDR(0x000113aeu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_113B0:
    /* 000113b0   4  move.w (a,A5),D0 */
    c->pc = RC_ADDR(0x000113b0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_113B4:
    /* 000113b4   4  cmpi.w #c7,D0 */
    c->pc = RC_ADDR(0x000113b4u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t0, 0x000000c7u);

L_113B8:
    /* 000113b8   4  bgt 0001150e */
    c->pc = RC_ADDR(0x000113b8u);
    rc_step(c, m);
    if (rc_cond(c, 14)) goto L_1150E;

L_113BC:
    /* 000113bc   4  add.w (2,A0),D0 */
    c->pc = RC_ADDR(0x000113bcu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_113C0:
    /* 000113c0   4  beq 0001150e */
    c->pc = RC_ADDR(0x000113c0u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1150E;

L_113C4:
    /* 000113c4   4  bmi 0001150e */
    c->pc = RC_ADDR(0x000113c4u);
    rc_step(c, m);
    if (rc_cond(c, 11)) goto L_1150E;

L_113C8:
    /* 000113c8   4  cmp.w (fffff2d0,A4),D0 */
    c->pc = RC_ADDR(0x000113c8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd30u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_113CC:
    /* 000113cc   2  blt 000113d6 */
    c->pc = RC_ADDR(0x000113ccu);
    rc_step(c, m);
    if (rc_cond(c, 13)) goto L_113D6;

L_113CE:
    /* 000113ce   4  sub.w (fffff2d0,A4),D0 */
    c->pc = RC_ADDR(0x000113ceu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd30u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_113D2:
    /* 000113d2   2  move.w D0,D6 */
    c->pc = RC_ADDR(0x000113d2u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_113D4:
    /* 000113d4   2  bra 000113e8 */
    c->pc = RC_ADDR(0x000113d4u);
    rc_step(c, m);
    goto L_113E8;

L_113D6:
    /* 000113d6   4  move.w (a,A5),D0 */
    c->pc = RC_ADDR(0x000113d6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_113DA:
    /* 000113da   2  bpl 000113e8 */
    c->pc = RC_ADDR(0x000113dau);
    rc_step(c, m);
    if (rc_cond(c, 10)) goto L_113E8;

L_113DC:
    /* 000113dc   2  neg.w D0 */
    c->pc = RC_ADDR(0x000113dcu);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_113DE:
    /* 000113de   2  move.w D0,D6 */
    c->pc = RC_ADDR(0x000113deu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_113E0:
    /* 000113e0   2  mulu.w D1,D0 */
    c->pc = RC_ADDR(0x000113e0u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_mulu(c, 0, t0);

L_113E2:
    /* 000113e2   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x000113e2u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_113E4:
    /* 000113e4   4  clr.w (a,A5) */
    c->pc = RC_ADDR(0x000113e4u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] + 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_113E8:
    /* 000113e8   4  move.w (8,A5),D2 */
    c->pc = RC_ADDR(0x000113e8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_113EC:
    /* 000113ec   2  bpl 00011428 */
    c->pc = RC_ADDR(0x000113ecu);
    rc_step(c, m);
    if (rc_cond(c, 10)) goto L_11428;

L_113EE:
    /* 000113ee   2  neg.w D2 */
    c->pc = RC_ADDR(0x000113eeu);
    rc_step(c, m);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_113F0:
    /* 000113f0   2  move.w D2,D0 */
    c->pc = RC_ADDR(0x000113f0u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_113F2:
    /* 000113f2   2  lsr.w #4,D2 */
    c->pc = RC_ADDR(0x000113f2u);
    rc_step(c, m);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 2, RC_W), RC_W));

L_113F4:
    /* 000113f4   2  lsl.w #1,D2 */
    c->pc = RC_ADDR(0x000113f4u);
    rc_step(c, m);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W));

L_113F6:
    /* 000113f6   2  cmp.w D1,D2 */
    c->pc = RC_ADDR(0x000113f6u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_113F8:
    /* 000113f8   4  bge 0001150e */
    c->pc = RC_ADDR(0x000113f8u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_1150E;

L_113FC:
    /* 000113fc   2  sub.w D2,D1 */
    c->pc = RC_ADDR(0x000113fcu);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_113FE:
    /* 000113fe   2  add.w D2,D4 */
    c->pc = RC_ADDR(0x000113feu);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_11400:
    /* 00011400   2  subq.w #2,D2 */
    c->pc = RC_ADDR(0x00011400u);
    rc_step(c, m);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_11402:
    /* 00011402   6  move.w D2,(00dff062).l */
    c->pc = RC_ADDR(0x00011402u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, 0x00dff062u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11408:
    /* 00011408   6  move.w D2,(00dff064).l */
    c->pc = RC_ADDR(0x00011408u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1140E:
    /* 0001140e   4  andi.w #f,D0 */
    c->pc = RC_ADDR(0x0001140eu);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 & 0x0000000fu;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_11412:
    /* 00011412   2  bne 0001141a */
    c->pc = RC_ADDR(0x00011412u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1141A;

L_11414:
    /* 00011414   4  clr.w (8,A5) */
    c->pc = RC_ADDR(0x00011414u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] + 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11418:
    /* 00011418   2  bra 00011466 */
    c->pc = RC_ADDR(0x00011418u);
    rc_step(c, m);
    goto L_11466;

L_1141A:
    /* 0001141a   2  moveq #fffffffe,D5 */
    c->pc = RC_ADDR(0x0001141au);
    rc_step(c, m);
    c->d[5] = 0xfffffffeu;
    rc_set_nzvc(c, c->d[5], RC_L);

L_1141C:
    /* 0001141c   6  move.w #10,(8,A5) */
    c->pc = RC_ADDR(0x0001141cu);
    rc_step(c, m);
    t0 = 0x00000010u;
    rc_wr16(c, m, (c->a[5] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11422:
    /* 00011422   4  sub.w D0,(8,A5) */
    c->pc = RC_ADDR(0x00011422u);
    rc_step(c, m);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_11426:
    /* 00011426   2  bra 00011466 */
    c->pc = RC_ADDR(0x00011426u);
    rc_step(c, m);
    goto L_11466;

L_11428:
    /* 00011428   4  cmpi.w #13f,D2 */
    c->pc = RC_ADDR(0x00011428u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x0000013fu);

L_1142C:
    /* 0001142c   4  bgt 0001150e */
    c->pc = RC_ADDR(0x0001142cu);
    rc_step(c, m);
    if (rc_cond(c, 14)) goto L_1150E;

L_11430:
    /* 00011430   2  lsr.w #4,D2 */
    c->pc = RC_ADDR(0x00011430u);
    rc_step(c, m);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 2, RC_W), RC_W));

L_11432:
    /* 00011432   2  lsl.w #1,D2 */
    c->pc = RC_ADDR(0x00011432u);
    rc_step(c, m);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W));

L_11434:
    /* 00011434   2  add.w D1,D2 */
    c->pc = RC_ADDR(0x00011434u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_11436:
    /* 00011436   4  cmpi.w #26,D2 */
    c->pc = RC_ADDR(0x00011436u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000026u);

L_1143A:
    /* 0001143a   2  ble 00011456 */
    c->pc = RC_ADDR(0x0001143au);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_11456;

L_1143C:
    /* 0001143c   2  sub.w D1,D2 */
    c->pc = RC_ADDR(0x0001143cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_1143E:
    /* 0001143e   4  sub.w (fffff2ce,A4),D2 */
    c->pc = RC_ADDR(0x0001143eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd32u));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_11442:
    /* 00011442   2  neg.w D2 */
    c->pc = RC_ADDR(0x00011442u);
    rc_step(c, m);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_11444:
    /* 00011444   2  sub.w D2,D1 */
    c->pc = RC_ADDR(0x00011444u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_11446:
    /* 00011446   6  move.w D1,(00dff062).l */
    c->pc = RC_ADDR(0x00011446u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, 0x00dff062u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1144C:
    /* 0001144c   6  move.w D1,(00dff064).l */
    c->pc = RC_ADDR(0x0001144cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11452:
    /* 00011452   2  move.w D2,D1 */
    c->pc = RC_ADDR(0x00011452u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11454:
    /* 00011454   2  bra 00011468 */
    c->pc = RC_ADDR(0x00011454u);
    rc_step(c, m);
    goto L_11468;

L_11456:
    /* 00011456   8  move.w #ffff,(00dff062).l */
    c->pc = RC_ADDR(0x00011456u);
    rc_step(c, m);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff062u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1145E:
    /* 0001145e   8  move.w #ffff,(00dff064).l */
    c->pc = RC_ADDR(0x0001145eu);
    rc_step(c, m);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11466:
    /* 00011466   2  addq.w #2,D1 */
    c->pc = RC_ADDR(0x00011466u);
    rc_step(c, m);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_11468:
    /* 00011468   4  move.w (fffff2ce,A4),D0 */
    c->pc = RC_ADDR(0x00011468u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd32u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1146C:
    /* 0001146c   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x0001146cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1146E:
    /* 0001146e   6  move.w D0,(00dff066).l */
    c->pc = RC_ADDR(0x0001146eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff066u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11474:
    /* 00011474   6  move.w D0,(00dff060).l */
    c->pc = RC_ADDR(0x00011474u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff060u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1147A:
    /* 0001147a   4  move.w (2,A0),D2 */
    c->pc = RC_ADDR(0x0001147au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1147E:
    /* 0001147e   2  sub.w D6,D2 */
    c->pc = RC_ADDR(0x0001147eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_11480:
    /* 00011480   2  lsl.w #6,D2 */
    c->pc = RC_ADDR(0x00011480u);
    rc_step(c, m);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000006u, rc_d_get(c, 2, RC_W), RC_W));

L_11482:
    /* 00011482   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x00011482u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_11484:
    /* 00011484   2  or.w D1,D2 */
    c->pc = RC_ADDR(0x00011484u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 | rc_d_get(c, 2, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 2, RC_W, t2);

L_11486:
    /* 00011486   4  movea.l (24,A0),A3 */
    c->pc = RC_ADDR(0x00011486u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0x24u));
    c->a[3] = t0;

L_1148A:
    /* 0001148a   2  adda.l D4,A3 */
    c->pc = RC_ADDR(0x0001148au);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[3] += t0;

L_1148C:
    /* 0001148c   4  lea (fffff326,A4),A1 */
    c->pc = RC_ADDR(0x0001148cu);
    rc_step(c, m);
    c->a[1] = (c->a[4] - 0xcdau);

L_11490:
    /* 00011490   2  clr.l D1 */
    c->pc = RC_ADDR(0x00011490u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_11492:
    /* 00011492   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00011492u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11496:
    /* 00011496   2  move.w D0,D3 */
    c->pc = RC_ADDR(0x00011496u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11498:
    /* 00011498   2  lsr.w #4,D0 */
    c->pc = RC_ADDR(0x00011498u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_1149A:
    /* 0001149a   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x0001149au);
    rc_step(c, m);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_1149C:
    /* 0001149c   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x0001149cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_114A0:
    /* 000114a0   4  mulu.w (fffff2ce,A4),D1 */
    c->pc = RC_ADDR(0x000114a0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd32u));
    rc_mulu(c, 1, t0);

L_114A4:
    /* 000114a4   2  add.w D0,D1 */
    c->pc = RC_ADDR(0x000114a4u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_114A6:
    /* 000114a6   2  add.l D5,D1 */
    c->pc = RC_ADDR(0x000114a6u);
    rc_step(c, m);
    t0 = rc_d_get(c, 5, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_114A8:
    /* 000114a8   8  move.w #ffff,(00dff044).l */
    c->pc = RC_ADDR(0x000114a8u);
    rc_step(c, m);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff044u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_114B0:
    /* 000114b0   8  move.w #0,(00dff046).l */
    c->pc = RC_ADDR(0x000114b0u);
    rc_step(c, m);
    t0 = 0x00000000u;
    rc_wr16(c, m, 0x00dff046u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_114B8:
    /* 000114b8   2  asl.w #6,D3 */
    c->pc = RC_ADDR(0x000114b8u);
    rc_step(c, m);
    rc_d_set(c, 3, RC_W, rc_shift(c, 0, 1, 0x00000006u, rc_d_get(c, 3, RC_W), RC_W));

L_114BA:
    /* 000114ba   2  asl.w #6,D3 */
    c->pc = RC_ADDR(0x000114bau);
    rc_step(c, m);
    rc_d_set(c, 3, RC_W, rc_shift(c, 0, 1, 0x00000006u, rc_d_get(c, 3, RC_W), RC_W));

L_114BC:
    /* 000114bc   6  move.w D3,(00dff042).l */
    c->pc = RC_ADDR(0x000114bcu);
    rc_step(c, m);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff042u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_114C2:
    /* 000114c2   4  move.w (10,A5),D4 */
    c->pc = RC_ADDR(0x000114c2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_114C6:
    /* 000114c6   2  moveq #4,D0 */
    c->pc = RC_ADDR(0x000114c6u);
    rc_step(c, m);
    c->d[0] = 0x00000004u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_114C8:
    /* 000114c8   4  ori.w #b0a,D3 */
    c->pc = RC_ADDR(0x000114c8u);
    rc_step(c, m);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 | 0x00000b0au;
    rc_d_set(c, 3, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_114CC:
    /* 000114cc   4  and.w #fb0a,D3 */
    c->pc = RC_ADDR(0x000114ccu);
    rc_step(c, m);
    t0 = 0x0000fb0au;
    t2 = t0 & rc_d_get(c, 3, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 3, RC_W, t2);

L_114D0:
    /* 000114d0   2  lsr.w #1,D4 */
    c->pc = RC_ADDR(0x000114d0u);
    rc_step(c, m);
    rc_d_set(c, 4, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 4, RC_W), RC_W));

L_114D2:
    /* 000114d2   2  bcc 000114d8 */
    c->pc = RC_ADDR(0x000114d2u);
    rc_step(c, m);
    if (rc_cond(c, 4)) goto L_114D8;

L_114D4:
    /* 000114d4   4  ori.w #fca,D3 */
    c->pc = RC_ADDR(0x000114d4u);
    rc_step(c, m);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 | 0x00000fcau;
    rc_d_set(c, 3, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_114D8:
    /* 000114d8   6  move.w D3,(00dff040).l */
    c->pc = RC_ADDR(0x000114d8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_114DE:
    /* 000114de   6  move.l A3,(00dff050).l */
    c->pc = RC_ADDR(0x000114deu);
    rc_step(c, m);
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_114E4:
    /* 000114e4   6  move.l A3,(00dff04c).l */
    c->pc = RC_ADDR(0x000114e4u);
    rc_step(c, m);
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff04cu, t0);
    rc_set_nzvc(c, t0, RC_L);

L_114EA:
    /* 000114ea   2  movea.l (A1)+,A2 */
    c->pc = RC_ADDR(0x000114eau);
    rc_step(c, m);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_114EC:
    /* 000114ec   2  adda.l D1,A2 */
    c->pc = RC_ADDR(0x000114ecu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[2] += t0;

L_114EE:
    /* 000114ee   6  move.l A2,(00dff048).l */
    c->pc = RC_ADDR(0x000114eeu);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff048u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_114F4:
    /* 000114f4   6  move.l A2,(00dff054).l */
    c->pc = RC_ADDR(0x000114f4u);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_114FA:
    /* 000114fa   6  move.w D2,(00dff058).l */
    c->pc = RC_ADDR(0x000114fau);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11500:
    /* 00011500   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x00011500u);
    rc_step(c, m);
    t4 = 0x00000006u;
    t3 = 0x00dff002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_11508:
    /* 00011508   2  bne 00011500 */
    c->pc = RC_ADDR(0x00011508u);
    rc_step(c, m);
    if (rc_cond(c, 6)) { rc_tick(); goto L_11500; }

L_1150A:
    /* 0001150a   4  dbf D0,000114cc */
    c->pc = RC_ADDR(0x0001150au);
    rc_step(c, m);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_114CC; }
    }

L_1150E:
    /* 0001150e   2  unlk A5 */
    c->pc = RC_ADDR(0x0001150eu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_11510:
    /* 00011510   2  rts */
    c->pc = RC_ADDR(0x00011510u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
