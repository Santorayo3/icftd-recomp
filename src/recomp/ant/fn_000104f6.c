/* fn_000104f6 - 160 byte(s), 49 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000104f6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000104f6u): goto L_104F6;
    case RC_ADDR(0x000104fau): goto L_104FA;
    case RC_ADDR(0x000104feu): goto L_104FE;
    case RC_ADDR(0x00010500u): goto L_10500;
    case RC_ADDR(0x00010504u): goto L_10504;
    case RC_ADDR(0x00010508u): goto L_10508;
    case RC_ADDR(0x0001050cu): goto L_1050C;
    case RC_ADDR(0x00010510u): goto L_10510;
    case RC_ADDR(0x00010512u): goto L_10512;
    case RC_ADDR(0x00010516u): goto L_10516;
    case RC_ADDR(0x00010518u): goto L_10518;
    case RC_ADDR(0x0001051cu): goto L_1051C;
    case RC_ADDR(0x0001051eu): goto L_1051E;
    case RC_ADDR(0x00010520u): goto L_10520;
    case RC_ADDR(0x00010524u): goto L_10524;
    case RC_ADDR(0x00010528u): goto L_10528;
    case RC_ADDR(0x0001052cu): goto L_1052C;
    case RC_ADDR(0x0001052eu): goto L_1052E;
    case RC_ADDR(0x00010530u): goto L_10530;
    case RC_ADDR(0x00010534u): goto L_10534;
    case RC_ADDR(0x00010538u): goto L_10538;
    case RC_ADDR(0x0001053cu): goto L_1053C;
    case RC_ADDR(0x0001053eu): goto L_1053E;
    case RC_ADDR(0x00010542u): goto L_10542;
    case RC_ADDR(0x00010544u): goto L_10544;
    case RC_ADDR(0x00010546u): goto L_10546;
    case RC_ADDR(0x0001054au): goto L_1054A;
    case RC_ADDR(0x0001054eu): goto L_1054E;
    case RC_ADDR(0x00010552u): goto L_10552;
    case RC_ADDR(0x00010554u): goto L_10554;
    case RC_ADDR(0x00010556u): goto L_10556;
    case RC_ADDR(0x0001055au): goto L_1055A;
    case RC_ADDR(0x0001055eu): goto L_1055E;
    case RC_ADDR(0x00010562u): goto L_10562;
    case RC_ADDR(0x00010564u): goto L_10564;
    case RC_ADDR(0x00010568u): goto L_10568;
    case RC_ADDR(0x0001056cu): goto L_1056C;
    case RC_ADDR(0x00010570u): goto L_10570;
    case RC_ADDR(0x00010572u): goto L_10572;
    case RC_ADDR(0x00010576u): goto L_10576;
    case RC_ADDR(0x0001057au): goto L_1057A;
    case RC_ADDR(0x0001057cu): goto L_1057C;
    case RC_ADDR(0x00010580u): goto L_10580;
    case RC_ADDR(0x00010584u): goto L_10584;
    case RC_ADDR(0x00010588u): goto L_10588;
    case RC_ADDR(0x0001058cu): goto L_1058C;
    case RC_ADDR(0x0001058eu): goto L_1058E;
    case RC_ADDR(0x00010592u): goto L_10592;
    case RC_ADDR(0x00010594u): goto L_10594;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_104F6:
    /* 000104f6   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x000104f6u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_104FA:
    /* 000104fa   4  tst.l (ffffa422,A4) */
    c->pc = RC_ADDR(0x000104fau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bdeu));
    rc_set_nzvc(c, t0, RC_L);

L_104FE:
    /* 000104fe   2  beq 00010576 */
    c->pc = RC_ADDR(0x000104feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10576;

L_10500:
    /* 00010500   4  jsr (000107de) */
    c->pc = RC_ADDR(0x00010500u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00010504u));
    rc_depth++;
    c->pc = RC_ADDR(0x000107deu);
    return;

L_10504:
    /* 00010504   4  move.l (1418,A4),-(A7) */
    c->pc = RC_ADDR(0x00010504u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1418u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10508:
    /* 00010508   4  move.l (ffffa422,A4),-(A7) */
    c->pc = RC_ADDR(0x00010508u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bdeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1050C:
    /* 0001050c   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001050cu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00010510u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_10510:
    /* 00010510   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00010510u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_10512:
    /* 00010512   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00010512u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10516:
    /* 00010516   2  bra 00010568 */
    c->pc = RC_ADDR(0x00010516u);
    rc_step(c, m, 10);
    goto L_10568;

L_10518:
    /* 00010518   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00010518u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1051C:
    /* 0001051c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001051cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1051E:
    /* 0001051e   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001051eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_10520:
    /* 00010520   4  lea (141c,A4),A0 */
    c->pc = RC_ADDR(0x00010520u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x141cu);

L_10524:
    /* 00010524   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00010524u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10528:
    /* 00010528   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00010528u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1052C:
    /* 0001052c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001052cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1052E:
    /* 0001052e   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001052eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_10530:
    /* 00010530   4  lea (1494,A4),A0 */
    c->pc = RC_ADDR(0x00010530u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1494u);

L_10534:
    /* 00010534   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00010534u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10538:
    /* 00010538   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00010538u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001053cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1053C:
    /* 0001053c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001053cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1053E:
    /* 0001053e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001053eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10542:
    /* 00010542   2  ext.l D0 */
    c->pc = RC_ADDR(0x00010542u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_10544:
    /* 00010544   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00010544u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_10546:
    /* 00010546   4  lea (1444,A4),A0 */
    c->pc = RC_ADDR(0x00010546u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1444u);

L_1054A:
    /* 0001054a   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001054au);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1054E:
    /* 0001054e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001054eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10552:
    /* 00010552   2  ext.l D0 */
    c->pc = RC_ADDR(0x00010552u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_10554:
    /* 00010554   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00010554u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_10556:
    /* 00010556   4  lea (146c,A4),A0 */
    c->pc = RC_ADDR(0x00010556u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x146cu);

L_1055A:
    /* 0001055a   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001055au);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1055E:
    /* 0001055e   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001055eu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00010562u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_10562:
    /* 00010562   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00010562u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_10564:
    /* 00010564   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00010564u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_10568:
    /* 00010568   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00010568u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1056C:
    /* 0001056c   4  cmp.w (ffffa426,A4),D0 */
    c->pc = RC_ADDR(0x0001056cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5bdau));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_10570:
    /* 00010570   2  blt 00010518 */
    c->pc = RC_ADDR(0x00010570u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_10518; }

L_10572:
    /* 00010572   4  clr.l (ffffa422,A4) */
    c->pc = RC_ADDR(0x00010572u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x5bdeu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_10576:
    /* 00010576   4  tst.l (ffff957c,A4) */
    c->pc = RC_ADDR(0x00010576u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x6a84u));
    rc_set_nzvc(c, t0, RC_L);

L_1057A:
    /* 0001057a   2  beq 00010592 */
    c->pc = RC_ADDR(0x0001057au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10592;

L_1057C:
    /* 0001057c   4  jsr (ffff80d4,A4) */
    c->pc = RC_ADDR(0x0001057cu);
    rc_step(c, m, 18);
    /* vector 35 */
    rc_push32(c, m, RC_ADDR(0x00010580u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bcau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000afb8u);
    return;

L_10580:
    /* 00010580   4  move.l (cf0,A4),-(A7) */
    c->pc = RC_ADDR(0x00010580u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcf0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10584:
    /* 00010584   4  move.l (ffff957c,A4),-(A7) */
    c->pc = RC_ADDR(0x00010584u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x6a84u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10588:
    /* 00010588   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00010588u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001058cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1058C:
    /* 0001058c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001058cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1058E:
    /* 0001058e   4  clr.l (ffff957c,A4) */
    c->pc = RC_ADDR(0x0001058eu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x6a84u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_10592:
    /* 00010592   2  unlk A5 */
    c->pc = RC_ADDR(0x00010592u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_10594:
    /* 00010594   2  rts */
    c->pc = RC_ADDR(0x00010594u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
