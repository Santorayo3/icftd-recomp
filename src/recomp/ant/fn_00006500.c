/* fn_00006500 - 274 byte(s), 77 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00006500(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00006500u): goto L_6500;
    case RC_ADDR(0x00006504u): goto L_6504;
    case RC_ADDR(0x0000650au): goto L_650A;
    case RC_ADDR(0x0000650cu): goto L_650C;
    case RC_ADDR(0x00006510u): goto L_6510;
    case RC_ADDR(0x00006512u): goto L_6512;
    case RC_ADDR(0x00006514u): goto L_6514;
    case RC_ADDR(0x00006516u): goto L_6516;
    case RC_ADDR(0x0000651cu): goto L_651C;
    case RC_ADDR(0x0000651eu): goto L_651E;
    case RC_ADDR(0x00006520u): goto L_6520;
    case RC_ADDR(0x00006522u): goto L_6522;
    case RC_ADDR(0x00006524u): goto L_6524;
    case RC_ADDR(0x00006526u): goto L_6526;
    case RC_ADDR(0x0000652au): goto L_652A;
    case RC_ADDR(0x0000652cu): goto L_652C;
    case RC_ADDR(0x00006530u): goto L_6530;
    case RC_ADDR(0x00006534u): goto L_6534;
    case RC_ADDR(0x00006536u): goto L_6536;
    case RC_ADDR(0x00006538u): goto L_6538;
    case RC_ADDR(0x00006540u): goto L_6540;
    case RC_ADDR(0x00006542u): goto L_6542;
    case RC_ADDR(0x0000654au): goto L_654A;
    case RC_ADDR(0x00006550u): goto L_6550;
    case RC_ADDR(0x00006558u): goto L_6558;
    case RC_ADDR(0x0000655au): goto L_655A;
    case RC_ADDR(0x00006562u): goto L_6562;
    case RC_ADDR(0x00006564u): goto L_6564;
    case RC_ADDR(0x0000656au): goto L_656A;
    case RC_ADDR(0x00006570u): goto L_6570;
    case RC_ADDR(0x00006574u): goto L_6574;
    case RC_ADDR(0x00006576u): goto L_6576;
    case RC_ADDR(0x00006578u): goto L_6578;
    case RC_ADDR(0x0000657au): goto L_657A;
    case RC_ADDR(0x00006580u): goto L_6580;
    case RC_ADDR(0x00006582u): goto L_6582;
    case RC_ADDR(0x00006586u): goto L_6586;
    case RC_ADDR(0x0000658au): goto L_658A;
    case RC_ADDR(0x0000658eu): goto L_658E;
    case RC_ADDR(0x00006592u): goto L_6592;
    case RC_ADDR(0x00006596u): goto L_6596;
    case RC_ADDR(0x00006598u): goto L_6598;
    case RC_ADDR(0x0000659au): goto L_659A;
    case RC_ADDR(0x0000659eu): goto L_659E;
    case RC_ADDR(0x000065a2u): goto L_65A2;
    case RC_ADDR(0x000065a4u): goto L_65A4;
    case RC_ADDR(0x000065a8u): goto L_65A8;
    case RC_ADDR(0x000065acu): goto L_65AC;
    case RC_ADDR(0x000065aeu): goto L_65AE;
    case RC_ADDR(0x000065b4u): goto L_65B4;
    case RC_ADDR(0x000065b6u): goto L_65B6;
    case RC_ADDR(0x000065bau): goto L_65BA;
    case RC_ADDR(0x000065beu): goto L_65BE;
    case RC_ADDR(0x000065c0u): goto L_65C0;
    case RC_ADDR(0x000065c4u): goto L_65C4;
    case RC_ADDR(0x000065c8u): goto L_65C8;
    case RC_ADDR(0x000065ccu): goto L_65CC;
    case RC_ADDR(0x000065ceu): goto L_65CE;
    case RC_ADDR(0x000065d4u): goto L_65D4;
    case RC_ADDR(0x000065d6u): goto L_65D6;
    case RC_ADDR(0x000065dcu): goto L_65DC;
    case RC_ADDR(0x000065deu): goto L_65DE;
    case RC_ADDR(0x000065e2u): goto L_65E2;
    case RC_ADDR(0x000065e6u): goto L_65E6;
    case RC_ADDR(0x000065eau): goto L_65EA;
    case RC_ADDR(0x000065ecu): goto L_65EC;
    case RC_ADDR(0x000065f0u): goto L_65F0;
    case RC_ADDR(0x000065f2u): goto L_65F2;
    case RC_ADDR(0x000065f4u): goto L_65F4;
    case RC_ADDR(0x000065f6u): goto L_65F6;
    case RC_ADDR(0x000065f8u): goto L_65F8;
    case RC_ADDR(0x000065fau): goto L_65FA;
    case RC_ADDR(0x000065feu): goto L_65FE;
    case RC_ADDR(0x00006602u): goto L_6602;
    case RC_ADDR(0x00006606u): goto L_6606;
    case RC_ADDR(0x0000660au): goto L_660A;
    case RC_ADDR(0x0000660eu): goto L_660E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_6500:
    /* 00006500   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x00006500u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_6504:
    /* 00006504   6  cmpi.w #1,(c,A5) */
    c->pc = RC_ADDR(0x00006504u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_650A:
    /* 0000650a   2  bne 00006516 */
    c->pc = RC_ADDR(0x0000650au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6516;

L_650C:
    /* 0000650c   4  tst.w (ffff849a,A4) */
    c->pc = RC_ADDR(0x0000650cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7b66u));
    rc_set_nzvc(c, t0, RC_W);

L_6510:
    /* 00006510   2  bne 00006516 */
    c->pc = RC_ADDR(0x00006510u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6516;

L_6512:
    /* 00006512   2  unlk A5 */
    c->pc = RC_ADDR(0x00006512u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_6514:
    /* 00006514   2  rts */
    c->pc = RC_ADDR(0x00006514u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_6516:
    /* 00006516   6  cmpi.w #ffff,(c,A5) */
    c->pc = RC_ADDR(0x00006516u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_651C:
    /* 0000651c   2  bne 00006542 */
    c->pc = RC_ADDR(0x0000651cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6542;

L_651E:
    /* 0000651e   2  bsr 000064c0 */
    c->pc = RC_ADDR(0x0000651eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006520u));
    rc_depth++;
    c->pc = RC_ADDR(0x000064c0u);
    return;

L_6520:
    /* 00006520   2  tst.w D0 */
    c->pc = RC_ADDR(0x00006520u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_6522:
    /* 00006522   2  bne 00006526 */
    c->pc = RC_ADDR(0x00006522u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6526;

L_6524:
    /* 00006524   2  bra 00006512 */
    c->pc = RC_ADDR(0x00006524u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_6512;

L_6526:
    /* 00006526   4  tst.w (ffff849a,A4) */
    c->pc = RC_ADDR(0x00006526u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7b66u));
    rc_set_nzvc(c, t0, RC_W);

L_652A:
    /* 0000652a   2  beq 00006538 */
    c->pc = RC_ADDR(0x0000652au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6538;

L_652C:
    /* 0000652c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000652cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6530:
    /* 00006530   4  jsr (00006478) */
    c->pc = RC_ADDR(0x00006530u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006534u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006478u);
    return;

L_6534:
    /* 00006534   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006534u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6536:
    /* 00006536   2  bra 00006512 */
    c->pc = RC_ADDR(0x00006536u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_6512;

L_6538:
    /* 00006538   8  move.l #f5,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00006538u);
    rc_step(c, m, 24);
    t0 = 0x000000f5u;
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6540:
    /* 00006540   2  bra 0000654a */
    c->pc = RC_ADDR(0x00006540u);
    rc_step(c, m, 10);
    goto L_654A;

L_6542:
    /* 00006542   8  move.l #9b,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00006542u);
    rc_step(c, m, 24);
    t0 = 0x0000009bu;
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_654A:
    /* 0000654a   6  move.w #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000654au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6550:
    /* 00006550   8  cmpi.l #9a,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00006550u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x0000009au);

L_6558:
    /* 00006558   2  ble 000065ae */
    c->pc = RC_ADDR(0x00006558u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_65AE;

L_655A:
    /* 0000655a   8  cmpi.l #113,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000655au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000113u);

L_6562:
    /* 00006562   2  bge 000065ae */
    c->pc = RC_ADDR(0x00006562u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_65AE;

L_6564:
    /* 00006564   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x00006564u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_656A:
    /* 0000656a   6  pea (00090000).l */
    c->pc = RC_ADDR(0x0000656au);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00090000u);

L_6570:
    /* 00006570   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00006570u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_6574:
    /* 00006574   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00006574u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_6576:
    /* 00006576   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x00006576u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_6578:
    /* 00006578   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00006578u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_657A:
    /* 0000657a   6  pea (00a00000).l */
    c->pc = RC_ADDR(0x0000657au);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00a00000u);

L_6580:
    /* 00006580   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00006580u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6582:
    /* 00006582   4  move.l (ffff8496,A4),-(A7) */
    c->pc = RC_ADDR(0x00006582u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7b6au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6586:
    /* 00006586   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00006586u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_658A:
    /* 0000658a   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000658au);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000658eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_658E:
    /* 0000658e   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x0000658eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_6592:
    /* 00006592   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00006592u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6596:
    /* 00006596   2  bsr 00006612 */
    c->pc = RC_ADDR(0x00006596u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006598u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006612u);
    return;

L_6598:
    /* 00006598   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006598u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_659A:
    /* 0000659a   4  move.w (c,A5),D0 */
    c->pc = RC_ADDR(0x0000659au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_659E:
    /* 0000659e   4  muls.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000659eu);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_muls(c, 0, t0);

L_65A2:
    /* 000065a2   2  ext.l D0 */
    c->pc = RC_ADDR(0x000065a2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_65A4:
    /* 000065a4   4  add.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000065a4u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_65A8:
    /* 000065a8   4  addq.w #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000065a8u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_65AC:
    /* 000065ac   2  bra 00006550 */
    c->pc = RC_ADDR(0x000065acu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_6550;

L_65AE:
    /* 000065ae   6  cmpi.w #ffff,(c,A5) */
    c->pc = RC_ADDR(0x000065aeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_65B4:
    /* 000065b4   2  bne 000065d6 */
    c->pc = RC_ADDR(0x000065b4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_65D6;

L_65B6:
    /* 000065b6   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000065b6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_65BA:
    /* 000065ba   4  jsr (00006478) */
    c->pc = RC_ADDR(0x000065bau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000065beu));
    rc_depth++;
    c->pc = RC_ADDR(0x00006478u);
    return;

L_65BE:
    /* 000065be   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000065beu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_65C0:
    /* 000065c0   4  jsr (ffff820c,A4) */
    c->pc = RC_ADDR(0x000065c0u);
    rc_step(c, m, 18);
    /* vector 87 */
    rc_push32(c, m, RC_ADDR(0x000065c4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f260u);
    return;

L_65C4:
    /* 000065c4   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000065c4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_65C8:
    /* 000065c8   4  jsr (00006478) */
    c->pc = RC_ADDR(0x000065c8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000065ccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00006478u);
    return;

L_65CC:
    /* 000065cc   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000065ccu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_65CE:
    /* 000065ce   6  move.w #1,(ffff849a,A4) */
    c->pc = RC_ADDR(0x000065ceu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7b66u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_65D4:
    /* 000065d4   2  bra 0000660e */
    c->pc = RC_ADDR(0x000065d4u);
    rc_step(c, m, 10);
    goto L_660E;

L_65D6:
    /* 000065d6   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x000065d6u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_65DC:
    /* 000065dc   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000065dcu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_65DE:
    /* 000065de   4  move.l (ffff8496,A4),-(A7) */
    c->pc = RC_ADDR(0x000065deu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7b6au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_65E2:
    /* 000065e2   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x000065e2u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_65E6:
    /* 000065e6   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x000065e6u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x000065eau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_65EA:
    /* 000065ea   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000065eau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_65EC:
    /* 000065ec   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000065ecu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_65F0:
    /* 000065f0   2  bsr 00006612 */
    c->pc = RC_ADDR(0x000065f0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000065f2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006612u);
    return;

L_65F2:
    /* 000065f2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000065f2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_65F4:
    /* 000065f4   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000065f4u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_65F6:
    /* 000065f6   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000065f6u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_65F8:
    /* 000065f8   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000065f8u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_65FA:
    /* 000065fa   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000065fau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_65FE:
    /* 000065fe   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x000065feu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6602:
    /* 00006602   4  jsr (ffff829c,A4) */
    c->pc = RC_ADDR(0x00006602u);
    rc_step(c, m, 18);
    /* vector 111 */
    rc_push32(c, m, RC_ADDR(0x00006606u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d92u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021aa4u);
    return;

L_6606:
    /* 00006606   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00006606u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_660A:
    /* 0000660a   4  clr.w (ffff849a,A4) */
    c->pc = RC_ADDR(0x0000660au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7b66u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_660E:
    /* 0000660e   4  bra 00006512 */
    c->pc = RC_ADDR(0x0000660eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_6512;

}
