/* fn_000004cc - 332 byte(s), 94 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000004cc(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000004ccu): goto L_4CC;
    case RC_ADDR(0x000004d0u): goto L_4D0;
    case RC_ADDR(0x000004d4u): goto L_4D4;
    case RC_ADDR(0x000004d6u): goto L_4D6;
    case RC_ADDR(0x000004dau): goto L_4DA;
    case RC_ADDR(0x000004e0u): goto L_4E0;
    case RC_ADDR(0x000004e4u): goto L_4E4;
    case RC_ADDR(0x000004e6u): goto L_4E6;
    case RC_ADDR(0x000004eau): goto L_4EA;
    case RC_ADDR(0x000004eeu): goto L_4EE;
    case RC_ADDR(0x000004f2u): goto L_4F2;
    case RC_ADDR(0x000004f6u): goto L_4F6;
    case RC_ADDR(0x000004fau): goto L_4FA;
    case RC_ADDR(0x000004fcu): goto L_4FC;
    case RC_ADDR(0x000004feu): goto L_4FE;
    case RC_ADDR(0x00000500u): goto L_500;
    case RC_ADDR(0x00000504u): goto L_504;
    case RC_ADDR(0x00000508u): goto L_508;
    case RC_ADDR(0x0000050cu): goto L_50C;
    case RC_ADDR(0x00000510u): goto L_510;
    case RC_ADDR(0x00000514u): goto L_514;
    case RC_ADDR(0x00000518u): goto L_518;
    case RC_ADDR(0x0000051au): goto L_51A;
    case RC_ADDR(0x0000051eu): goto L_51E;
    case RC_ADDR(0x00000522u): goto L_522;
    case RC_ADDR(0x00000524u): goto L_524;
    case RC_ADDR(0x00000526u): goto L_526;
    case RC_ADDR(0x0000052au): goto L_52A;
    case RC_ADDR(0x0000052eu): goto L_52E;
    case RC_ADDR(0x00000530u): goto L_530;
    case RC_ADDR(0x00000532u): goto L_532;
    case RC_ADDR(0x00000534u): goto L_534;
    case RC_ADDR(0x00000538u): goto L_538;
    case RC_ADDR(0x0000053cu): goto L_53C;
    case RC_ADDR(0x00000540u): goto L_540;
    case RC_ADDR(0x00000542u): goto L_542;
    case RC_ADDR(0x00000544u): goto L_544;
    case RC_ADDR(0x00000548u): goto L_548;
    case RC_ADDR(0x0000054cu): goto L_54C;
    case RC_ADDR(0x00000550u): goto L_550;
    case RC_ADDR(0x00000554u): goto L_554;
    case RC_ADDR(0x00000556u): goto L_556;
    case RC_ADDR(0x0000055au): goto L_55A;
    case RC_ADDR(0x0000055eu): goto L_55E;
    case RC_ADDR(0x00000562u): goto L_562;
    case RC_ADDR(0x00000566u): goto L_566;
    case RC_ADDR(0x0000056au): goto L_56A;
    case RC_ADDR(0x00000570u): goto L_570;
    case RC_ADDR(0x00000576u): goto L_576;
    case RC_ADDR(0x0000057au): goto L_57A;
    case RC_ADDR(0x0000057eu): goto L_57E;
    case RC_ADDR(0x00000582u): goto L_582;
    case RC_ADDR(0x00000586u): goto L_586;
    case RC_ADDR(0x0000058au): goto L_58A;
    case RC_ADDR(0x0000058eu): goto L_58E;
    case RC_ADDR(0x00000592u): goto L_592;
    case RC_ADDR(0x00000596u): goto L_596;
    case RC_ADDR(0x00000598u): goto L_598;
    case RC_ADDR(0x0000059cu): goto L_59C;
    case RC_ADDR(0x000005a0u): goto L_5A0;
    case RC_ADDR(0x000005a4u): goto L_5A4;
    case RC_ADDR(0x000005a6u): goto L_5A6;
    case RC_ADDR(0x000005aau): goto L_5AA;
    case RC_ADDR(0x000005acu): goto L_5AC;
    case RC_ADDR(0x000005b0u): goto L_5B0;
    case RC_ADDR(0x000005b2u): goto L_5B2;
    case RC_ADDR(0x000005b6u): goto L_5B6;
    case RC_ADDR(0x000005b8u): goto L_5B8;
    case RC_ADDR(0x000005bcu): goto L_5BC;
    case RC_ADDR(0x000005beu): goto L_5BE;
    case RC_ADDR(0x000005c2u): goto L_5C2;
    case RC_ADDR(0x000005c6u): goto L_5C6;
    case RC_ADDR(0x000005cau): goto L_5CA;
    case RC_ADDR(0x000005ceu): goto L_5CE;
    case RC_ADDR(0x000005d2u): goto L_5D2;
    case RC_ADDR(0x000005d6u): goto L_5D6;
    case RC_ADDR(0x000005d8u): goto L_5D8;
    case RC_ADDR(0x000005dcu): goto L_5DC;
    case RC_ADDR(0x000005deu): goto L_5DE;
    case RC_ADDR(0x000005e2u): goto L_5E2;
    case RC_ADDR(0x000005e4u): goto L_5E4;
    case RC_ADDR(0x000005e8u): goto L_5E8;
    case RC_ADDR(0x000005eau): goto L_5EA;
    case RC_ADDR(0x000005eeu): goto L_5EE;
    case RC_ADDR(0x000005f2u): goto L_5F2;
    case RC_ADDR(0x000005f6u): goto L_5F6;
    case RC_ADDR(0x000005f8u): goto L_5F8;
    case RC_ADDR(0x000005fau): goto L_5FA;
    case RC_ADDR(0x000005feu): goto L_5FE;
    case RC_ADDR(0x00000602u): goto L_602;
    case RC_ADDR(0x00000606u): goto L_606;
    case RC_ADDR(0x0000060au): goto L_60A;
    case RC_ADDR(0x00000610u): goto L_610;
    case RC_ADDR(0x00000616u): goto L_616;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_4CC:
    /* 000004cc   4  movea.l (ffffd324,A4),A0 */
    c->pc = RC_ADDR(0x000004ccu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cdcu));
    c->a[0] = t0;

L_4D0:
    /* 000004d0   4  movea.l (22,A0),A1 */
    c->pc = RC_ADDR(0x000004d0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x22u));
    c->a[1] = t0;

L_4D4:
    /* 000004d4   2  movea.l (A1),A0 */
    c->pc = RC_ADDR(0x000004d4u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[1]);
    c->a[0] = t0;

L_4D6:
    /* 000004d6   4  movea.l (24,A0),A1 */
    c->pc = RC_ADDR(0x000004d6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x24u));
    c->a[1] = t0;

L_4DA:
    /* 000004da   6  move.l (4,A1),(ffffffbe,A5) */
    c->pc = RC_ADDR(0x000004dau);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[1] + 0x4u));
    rc_wr32(c, m, (c->a[5] - 0x42u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4E0:
    /* 000004e0   4  movea.l (ffffffbe,A5),A0 */
    c->pc = RC_ADDR(0x000004e0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x42u));
    c->a[0] = t0;

L_4E4:
    /* 000004e4   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000004e4u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_4E6:
    /* 000004e6   4  move.b (5,A0),D0 */
    c->pc = RC_ADDR(0x000004e6u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_4EA:
    /* 000004ea   4  move.w D0,(ffffffbc,A5) */
    c->pc = RC_ADDR(0x000004eau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x44u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4EE:
    /* 000004ee   4  movea.l (ffffffbe,A5),A0 */
    c->pc = RC_ADDR(0x000004eeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x42u));
    c->a[0] = t0;

L_4F2:
    /* 000004f2   4  movea.l (ffffffbe,A5),A1 */
    c->pc = RC_ADDR(0x000004f2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x42u));
    c->a[1] = t0;

L_4F6:
    /* 000004f6   4  move.w (2,A0),D0 */
    c->pc = RC_ADDR(0x000004f6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4FA:
    /* 000004fa   2  mulu.w (A1),D0 */
    c->pc = RC_ADDR(0x000004fau);
    rc_step(c, m, 42);
    t0 = rc_rd16(c, m, c->a[1]);
    rc_mulu(c, 0, t0);

L_4FC:
    /* 000004fc   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x000004fcu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_4FE:
    /* 000004fe   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x000004feu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_500:
    /* 00000500   4  move.l D1,(ffffffb8,A5) */
    c->pc = RC_ADDR(0x00000500u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x48u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_504:
    /* 00000504   4  movea.l (ffffffbe,A5),A0 */
    c->pc = RC_ADDR(0x00000504u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x42u));
    c->a[0] = t0;

L_508:
    /* 00000508   4  clr.b (5,A0) */
    c->pc = RC_ADDR(0x00000508u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[0] + 0x5u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_50C:
    /* 0000050c   4  movea.l (ffffd324,A4),A0 */
    c->pc = RC_ADDR(0x0000050cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cdcu));
    c->a[0] = t0;

L_510:
    /* 00000510   4  move.l (22,A0),-(A7) */
    c->pc = RC_ADDR(0x00000510u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x22u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_514:
    /* 00000514   4  jsr (ffff8398,A4) */
    c->pc = RC_ADDR(0x00000514u);
    rc_step(c, m, 18);
    /* vector 153 */
    rc_push32(c, m, RC_ADDR(0x00000518u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e8eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002393au);
    return;

L_518:
    /* 00000518   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000518u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_51A:
    /* 0000051a   4  move.w (ffffffbc,A5),D0 */
    c->pc = RC_ADDR(0x0000051au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x44u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_51E:
    /* 0000051e   4  subq.w #1,(ffffffbc,A5) */
    c->pc = RC_ADDR(0x0000051eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x44u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_522:
    /* 00000522   2  tst.w D0 */
    c->pc = RC_ADDR(0x00000522u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_524:
    /* 00000524   2  beq 00000544 */
    c->pc = RC_ADDR(0x00000524u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_544;

L_526:
    /* 00000526   4  move.l (ffffffb8,A5),-(A7) */
    c->pc = RC_ADDR(0x00000526u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x48u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_52A:
    /* 0000052a   4  move.w (ffffffbc,A5),D0 */
    c->pc = RC_ADDR(0x0000052au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x44u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_52E:
    /* 0000052e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000052eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_530:
    /* 00000530   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00000530u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_532:
    /* 00000532   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00000532u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_534:
    /* 00000534   4  adda.l (ffffffbe,A5),A0 */
    c->pc = RC_ADDR(0x00000534u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] - 0x42u));
    c->a[0] += t0;

L_538:
    /* 00000538   4  move.l (8,A0),-(A7) */
    c->pc = RC_ADDR(0x00000538u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_53C:
    /* 0000053c   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0000053cu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00000540u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_540:
    /* 00000540   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000540u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_542:
    /* 00000542   2  bra 0000051a */
    c->pc = RC_ADDR(0x00000542u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_51A;

L_544:
    /* 00000544   4  jsr (ffff8206,A4) */
    c->pc = RC_ADDR(0x00000544u);
    rc_step(c, m, 18);
    /* vector 86 */
    rc_push32(c, m, RC_ADDR(0x00000548u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cfcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f090u);
    return;

L_548:
    /* 00000548   4  move.w #7,-(A7) */
    c->pc = RC_ADDR(0x00000548u);
    rc_step(c, m, 12);
    t0 = 0x00000007u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_54C:
    /* 0000054c   4  pea (00000630) */
    c->pc = RC_ADDR(0x0000054cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00000630u));

L_550:
    /* 00000550   4  jsr (000052f0) */
    c->pc = RC_ADDR(0x00000550u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000554u));
    rc_depth++;
    c->pc = RC_ADDR(0x000052f0u);
    return;

L_554:
    /* 00000554   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00000554u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_556:
    /* 00000556   4  jsr (ffff80aa,A4) */
    c->pc = RC_ADDR(0x00000556u);
    rc_step(c, m, 18);
    /* vector 28 */
    rc_push32(c, m, RC_ADDR(0x0000055au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ba0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ac3cu);
    return;

L_55A:
    /* 0000055a   4  jsr (ffff8146,A4) */
    c->pc = RC_ADDR(0x0000055au);
    rc_step(c, m, 18);
    /* vector 54 */
    rc_push32(c, m, RC_ADDR(0x0000055eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c3cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011b0cu);
    return;

L_55E:
    /* 0000055e   4  move.w D0,(ffffffc2,A5) */
    c->pc = RC_ADDR(0x0000055eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x3eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_562:
    /* 00000562   4  clr.w (7ba,A4) */
    c->pc = RC_ADDR(0x00000562u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x7bau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_566:
    /* 00000566   4  clr.w (fffff85e,A4) */
    c->pc = RC_ADDR(0x00000566u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7a2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_56A:
    /* 0000056a   6  move.w #1,(ffffd5b8,A4) */
    c->pc = RC_ADDR(0x0000056au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x2a48u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_570:
    /* 00000570   6  move.w #1,(fffff740,A4) */
    c->pc = RC_ADDR(0x00000570u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x8c0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_576:
    /* 00000576   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00000576u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_57A:
    /* 0000057a   4  pea (00000645) */
    c->pc = RC_ADDR(0x0000057au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00000645u));

L_57E:
    /* 0000057e   4  pea (0000063c) */
    c->pc = RC_ADDR(0x0000057eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000063cu));

L_582:
    /* 00000582   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x00000582u);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x00000586u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000068au);
    return;

L_586:
    /* 00000586   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00000586u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_58A:
    /* 0000058a   4  move.w #41,-(A7) */
    c->pc = RC_ADDR(0x0000058au);
    rc_step(c, m, 12);
    t0 = 0x00000041u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_58E:
    /* 0000058e   4  pea (00000651) */
    c->pc = RC_ADDR(0x0000058eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00000651u));

L_592:
    /* 00000592   4  jsr (00000f0c) */
    c->pc = RC_ADDR(0x00000592u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000596u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000f0cu);
    return;

L_596:
    /* 00000596   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00000596u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_598:
    /* 00000598   4  clr.w (fffff740,A4) */
    c->pc = RC_ADDR(0x00000598u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x8c0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_59C:
    /* 0000059c   4  jsr (00005b5e) */
    c->pc = RC_ADDR(0x0000059cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000005a0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005b5eu);
    return;

L_5A0:
    /* 000005a0   4  tst.w (ffffd5b8,A4) */
    c->pc = RC_ADDR(0x000005a0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a48u));
    rc_set_nzvc(c, t0, RC_W);

L_5A4:
    /* 000005a4   2  beq 000005fa */
    c->pc = RC_ADDR(0x000005a4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_5FA;

L_5A6:
    /* 000005a6   4  tst.w (ffffffc2,A5) */
    c->pc = RC_ADDR(0x000005a6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x3eu));
    rc_set_nzvc(c, t0, RC_W);

L_5AA:
    /* 000005aa   2  bne 000005c2 */
    c->pc = RC_ADDR(0x000005aau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_5C2;

L_5AC:
    /* 000005ac   4  tst.w (ffff9582,A4) */
    c->pc = RC_ADDR(0x000005acu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x6a7eu));
    rc_set_nzvc(c, t0, RC_W);

L_5B0:
    /* 000005b0   2  bne 000005c2 */
    c->pc = RC_ADDR(0x000005b0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_5C2;

L_5B2:
    /* 000005b2   4  tst.w (7b6,A4) */
    c->pc = RC_ADDR(0x000005b2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7b6u));
    rc_set_nzvc(c, t0, RC_W);

L_5B6:
    /* 000005b6   2  bne 000005c2 */
    c->pc = RC_ADDR(0x000005b6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_5C2;

L_5B8:
    /* 000005b8   4  tst.w (ffff85a8,A4) */
    c->pc = RC_ADDR(0x000005b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7a58u));
    rc_set_nzvc(c, t0, RC_W);

L_5BC:
    /* 000005bc   2  bne 000005c2 */
    c->pc = RC_ADDR(0x000005bcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_5C2;

L_5BE:
    /* 000005be   4  jsr (000062ea) */
    c->pc = RC_ADDR(0x000005beu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000005c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x000062eau);
    return;

L_5C2:
    /* 000005c2   4  clr.w (7b6,A4) */
    c->pc = RC_ADDR(0x000005c2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x7b6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5C6:
    /* 000005c6   4  clr.w (ffffffc2,A5) */
    c->pc = RC_ADDR(0x000005c6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x3eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5CA:
    /* 000005ca   4  jsr (ffff8104,A4) */
    c->pc = RC_ADDR(0x000005cau);
    rc_step(c, m, 18);
    /* vector 43 */
    rc_push32(c, m, RC_ADDR(0x000005ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bfau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b9deu);
    return;

L_5CE:
    /* 000005ce   4  move.l (ffffd340,A4),-(A7) */
    c->pc = RC_ADDR(0x000005ceu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5D2:
    /* 000005d2   4  jsr (ffff8050,A4) */
    c->pc = RC_ADDR(0x000005d2u);
    rc_step(c, m, 18);
    /* vector 13 */
    rc_push32(c, m, RC_ADDR(0x000005d6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b46u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000375cu);
    return;

L_5D6:
    /* 000005d6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000005d6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5D8:
    /* 000005d8   4  tst.w (ffffd5b8,A4) */
    c->pc = RC_ADDR(0x000005d8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a48u));
    rc_set_nzvc(c, t0, RC_W);

L_5DC:
    /* 000005dc   2  beq 000005ee */
    c->pc = RC_ADDR(0x000005dcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_5EE;

L_5DE:
    /* 000005de   4  tst.w (ffff83f2,A4) */
    c->pc = RC_ADDR(0x000005deu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c0eu));
    rc_set_nzvc(c, t0, RC_W);

L_5E2:
    /* 000005e2   2  beq 000005ea */
    c->pc = RC_ADDR(0x000005e2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_5EA;

L_5E4:
    /* 000005e4   4  clr.w (ffff83f2,A4) */
    c->pc = RC_ADDR(0x000005e4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c0eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5E8:
    /* 000005e8   2  bra 000005ee */
    c->pc = RC_ADDR(0x000005e8u);
    rc_step(c, m, 10);
    goto L_5EE;

L_5EA:
    /* 000005ea   4  jsr (00004a78) */
    c->pc = RC_ADDR(0x000005eau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000005eeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00004a78u);
    return;

L_5EE:
    /* 000005ee   4  move.l (ffffd340,A4),-(A7) */
    c->pc = RC_ADDR(0x000005eeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5F2:
    /* 000005f2   4  jsr (ffff8050,A4) */
    c->pc = RC_ADDR(0x000005f2u);
    rc_step(c, m, 18);
    /* vector 13 */
    rc_push32(c, m, RC_ADDR(0x000005f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b46u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000375cu);
    return;

L_5F6:
    /* 000005f6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000005f6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5F8:
    /* 000005f8   2  bra 000005a0 */
    c->pc = RC_ADDR(0x000005f8u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_5A0;

L_5FA:
    /* 000005fa   4  jsr (ffff812e,A4) */
    c->pc = RC_ADDR(0x000005fau);
    rc_step(c, m, 18);
    /* vector 50 */
    rc_push32(c, m, RC_ADDR(0x000005feu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c24u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000104f6u);
    return;

L_5FE:
    /* 000005fe   4  jsr (00005bd8) */
    c->pc = RC_ADDR(0x000005feu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000602u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005bd8u);
    return;

L_602:
    /* 00000602   4  jsr (ffff82a8,A4) */
    c->pc = RC_ADDR(0x00000602u);
    rc_step(c, m, 18);
    /* vector 113 */
    rc_push32(c, m, RC_ADDR(0x00000606u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d9eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022308u);
    return;

L_606:
    /* 00000606   4  jsr (ffff814c,A4) */
    c->pc = RC_ADDR(0x00000606u);
    rc_step(c, m, 18);
    /* vector 55 */
    rc_push32(c, m, RC_ADDR(0x0000060au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c42u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011c98u);
    return;

L_60A:
    /* 0000060a   6  move.w #1,(ffffffc2,A5) */
    c->pc = RC_ADDR(0x0000060au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x3eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_610:
    /* 00000610   6  move.w #1,(ffffd5b8,A4) */
    c->pc = RC_ADDR(0x00000610u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x2a48u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_616:
    /* 00000616   2  bra 0000059c */
    c->pc = RC_ADDR(0x00000616u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_59C;

}
