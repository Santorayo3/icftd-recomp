/* fn_000024ac - 256 byte(s), 78 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000024ac(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000024acu): goto L_24AC;
    case RC_ADDR(0x000024b0u): goto L_24B0;
    case RC_ADDR(0x000024b4u): goto L_24B4;
    case RC_ADDR(0x000024b6u): goto L_24B6;
    case RC_ADDR(0x000024bau): goto L_24BA;
    case RC_ADDR(0x000024bcu): goto L_24BC;
    case RC_ADDR(0x000024beu): goto L_24BE;
    case RC_ADDR(0x000024c2u): goto L_24C2;
    case RC_ADDR(0x000024c6u): goto L_24C6;
    case RC_ADDR(0x000024c8u): goto L_24C8;
    case RC_ADDR(0x000024ccu): goto L_24CC;
    case RC_ADDR(0x000024d0u): goto L_24D0;
    case RC_ADDR(0x000024d2u): goto L_24D2;
    case RC_ADDR(0x000024d6u): goto L_24D6;
    case RC_ADDR(0x000024dau): goto L_24DA;
    case RC_ADDR(0x000024dcu): goto L_24DC;
    case RC_ADDR(0x000024e0u): goto L_24E0;
    case RC_ADDR(0x000024e4u): goto L_24E4;
    case RC_ADDR(0x000024e6u): goto L_24E6;
    case RC_ADDR(0x000024eau): goto L_24EA;
    case RC_ADDR(0x000024ecu): goto L_24EC;
    case RC_ADDR(0x000024f0u): goto L_24F0;
    case RC_ADDR(0x000024f4u): goto L_24F4;
    case RC_ADDR(0x000024f6u): goto L_24F6;
    case RC_ADDR(0x000024fau): goto L_24FA;
    case RC_ADDR(0x000024feu): goto L_24FE;
    case RC_ADDR(0x00002500u): goto L_2500;
    case RC_ADDR(0x00002502u): goto L_2502;
    case RC_ADDR(0x00002506u): goto L_2506;
    case RC_ADDR(0x0000250au): goto L_250A;
    case RC_ADDR(0x0000250eu): goto L_250E;
    case RC_ADDR(0x00002512u): goto L_2512;
    case RC_ADDR(0x00002514u): goto L_2514;
    case RC_ADDR(0x00002518u): goto L_2518;
    case RC_ADDR(0x0000251cu): goto L_251C;
    case RC_ADDR(0x00002520u): goto L_2520;
    case RC_ADDR(0x00002524u): goto L_2524;
    case RC_ADDR(0x00002526u): goto L_2526;
    case RC_ADDR(0x0000252au): goto L_252A;
    case RC_ADDR(0x0000252eu): goto L_252E;
    case RC_ADDR(0x00002532u): goto L_2532;
    case RC_ADDR(0x00002534u): goto L_2534;
    case RC_ADDR(0x00002536u): goto L_2536;
    case RC_ADDR(0x0000253au): goto L_253A;
    case RC_ADDR(0x0000253eu): goto L_253E;
    case RC_ADDR(0x00002540u): goto L_2540;
    case RC_ADDR(0x00002542u): goto L_2542;
    case RC_ADDR(0x00002544u): goto L_2544;
    case RC_ADDR(0x0000254au): goto L_254A;
    case RC_ADDR(0x0000254eu): goto L_254E;
    case RC_ADDR(0x00002550u): goto L_2550;
    case RC_ADDR(0x00002554u): goto L_2554;
    case RC_ADDR(0x00002556u): goto L_2556;
    case RC_ADDR(0x0000255cu): goto L_255C;
    case RC_ADDR(0x0000255eu): goto L_255E;
    case RC_ADDR(0x00002560u): goto L_2560;
    case RC_ADDR(0x00002562u): goto L_2562;
    case RC_ADDR(0x00002566u): goto L_2566;
    case RC_ADDR(0x0000256au): goto L_256A;
    case RC_ADDR(0x0000256eu): goto L_256E;
    case RC_ADDR(0x00002572u): goto L_2572;
    case RC_ADDR(0x00002574u): goto L_2574;
    case RC_ADDR(0x00002578u): goto L_2578;
    case RC_ADDR(0x0000257cu): goto L_257C;
    case RC_ADDR(0x0000257eu): goto L_257E;
    case RC_ADDR(0x00002582u): goto L_2582;
    case RC_ADDR(0x00002586u): goto L_2586;
    case RC_ADDR(0x00002588u): goto L_2588;
    case RC_ADDR(0x0000258cu): goto L_258C;
    case RC_ADDR(0x0000258eu): goto L_258E;
    case RC_ADDR(0x00002592u): goto L_2592;
    case RC_ADDR(0x00002596u): goto L_2596;
    case RC_ADDR(0x00002598u): goto L_2598;
    case RC_ADDR(0x0000259cu): goto L_259C;
    case RC_ADDR(0x000025a0u): goto L_25A0;
    case RC_ADDR(0x000025a2u): goto L_25A2;
    case RC_ADDR(0x000025a6u): goto L_25A6;
    case RC_ADDR(0x000025a8u): goto L_25A8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_24AC:
    /* 000024ac   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x000024acu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_24B0:
    /* 000024b0   4  tst.w (ffff83fe,A4) */
    c->pc = RC_ADDR(0x000024b0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c02u));
    rc_set_nzvc(c, t0, RC_W);

L_24B4:
    /* 000024b4   2  beq 000024be */
    c->pc = RC_ADDR(0x000024b4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_24BE;

L_24B6:
    /* 000024b6   4  clr.w (ffff83fe,A4) */
    c->pc = RC_ADDR(0x000024b6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c02u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_24BA:
    /* 000024ba   2  unlk A5 */
    c->pc = RC_ADDR(0x000024bau);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_24BC:
    /* 000024bc   2  rts */
    c->pc = RC_ADDR(0x000024bcu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_24BE:
    /* 000024be   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x000024beu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_24C2:
    /* 000024c2   4  cmpi.b #2a,(A0) */
    c->pc = RC_ADDR(0x000024c2u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000002au);

L_24C6:
    /* 000024c6   2  bne 00002502 */
    c->pc = RC_ADDR(0x000024c6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2502;

L_24C8:
    /* 000024c8   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000024c8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_24CC:
    /* 000024cc   4  jsr (ffff805c,A4) */
    c->pc = RC_ADDR(0x000024ccu);
    rc_step(c, m, 18);
    /* vector 15 */
    rc_push32(c, m, RC_ADDR(0x000024d0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00003994u);
    return;

L_24D0:
    /* 000024d0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000024d0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_24D2:
    /* 000024d2   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x000024d2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_24D6:
    /* 000024d6   4  move.b (1,A0),D0 */
    c->pc = RC_ADDR(0x000024d6u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_24DA:
    /* 000024da   2  ext.w D0 */
    c->pc = RC_ADDR(0x000024dau);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_24DC:
    /* 000024dc   4  sub.w #30,D0 */
    c->pc = RC_ADDR(0x000024dcu);
    rc_step(c, m, 10);
    t0 = 0x00000030u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_24E0:
    /* 000024e0   4  muls.w #3c,D0 */
    c->pc = RC_ADDR(0x000024e0u);
    rc_step(c, m, 42);
    t0 = 0x0000003cu;
    rc_muls(c, 0, t0);

L_24E4:
    /* 000024e4   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000024e4u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_24E6:
    /* 000024e6   4  jsr (ffff8080,A4) */
    c->pc = RC_ADDR(0x000024e6u);
    rc_step(c, m, 18);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x000024eau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b76u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00005db6u);
    return;

L_24EA:
    /* 000024ea   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000024eau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_24EC:
    /* 000024ec   4  pea (0000003c).l */
    c->pc = RC_ADDR(0x000024ecu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000003cu);

L_24F0:
    /* 000024f0   4  jsr (ffff8326,A4) */
    c->pc = RC_ADDR(0x000024f0u);
    rc_step(c, m, 18);
    /* vector 134 */
    rc_push32(c, m, RC_ADDR(0x000024f4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e1cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000234cau);
    return;

L_24F4:
    /* 000024f4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000024f4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_24F6:
    /* 000024f6   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000024f6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_24FA:
    /* 000024fa   4  jsr (00003886) */
    c->pc = RC_ADDR(0x000024fau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000024feu));
    rc_depth++;
    c->pc = RC_ADDR(0x00003886u);
    return;

L_24FE:
    /* 000024fe   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000024feu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2500:
    /* 00002500   2  bra 000024ba */
    c->pc = RC_ADDR(0x00002500u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_24BA;

L_2502:
    /* 00002502   4  clr.w (ffffd6f0,A4) */
    c->pc = RC_ADDR(0x00002502u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2910u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2506:
    /* 00002506   4  move.w #5,-(A7) */
    c->pc = RC_ADDR(0x00002506u);
    rc_step(c, m, 12);
    t0 = 0x00000005u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_250A:
    /* 0000250a   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0000250au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_250E:
    /* 0000250e   4  jsr (00005748) */
    c->pc = RC_ADDR(0x0000250eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002512u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005748u);
    return;

L_2512:
    /* 00002512   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002512u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2514:
    /* 00002514   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00002514u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2518:
    /* 00002518   4  move.w #ffff,-(A7) */
    c->pc = RC_ADDR(0x00002518u);
    rc_step(c, m, 12);
    t0 = 0x0000ffffu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_251C:
    /* 0000251c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000251cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2520:
    /* 00002520   4  jsr (00006500) */
    c->pc = RC_ADDR(0x00002520u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002524u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006500u);
    return;

L_2524:
    /* 00002524   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002524u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2526:
    /* 00002526   4  jsr (0000370e) */
    c->pc = RC_ADDR(0x00002526u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000252au));
    rc_depth++;
    c->pc = RC_ADDR(0x0000370eu);
    return;

L_252A:
    /* 0000252a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000252au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_252E:
    /* 0000252e   4  subq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000252eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_2532:
    /* 00002532   2  tst.w D0 */
    c->pc = RC_ADDR(0x00002532u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_2534:
    /* 00002534   2  beq 000025a8 */
    c->pc = RC_ADDR(0x00002534u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_25A8;

L_2536:
    /* 00002536   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00002536u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_253A:
    /* 0000253a   4  jsr (000022aa) */
    c->pc = RC_ADDR(0x0000253au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000253eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000022aau);
    return;

L_253E:
    /* 0000253e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000253eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2540:
    /* 00002540   2  tst.w D0 */
    c->pc = RC_ADDR(0x00002540u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_2542:
    /* 00002542   2  beq 00002592 */
    c->pc = RC_ADDR(0x00002542u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2592;

L_2544:
    /* 00002544   6  move.w #2,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00002544u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_254A:
    /* 0000254a   4  tst.w (ffffd5c8,A4) */
    c->pc = RC_ADDR(0x0000254au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a38u));
    rc_set_nzvc(c, t0, RC_W);

L_254E:
    /* 0000254e   2  beq 00002556 */
    c->pc = RC_ADDR(0x0000254eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2556;

L_2550:
    /* 00002550   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00002550u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_2554:
    /* 00002554   2  ble 0000258e */
    c->pc = RC_ADDR(0x00002554u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_258E;

L_2556:
    /* 00002556   6  move.w #96,(fffffa1a,A4) */
    c->pc = RC_ADDR(0x00002556u);
    rc_step(c, m, 16);
    t0 = 0x00000096u;
    rc_wr16(c, m, (c->a[4] - 0x5e6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_255C:
    /* 0000255c   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000255cu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_255E:
    /* 0000255e   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000255eu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2560:
    /* 00002560   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00002560u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2562:
    /* 00002562   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00002562u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_2566:
    /* 00002566   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x00002566u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_256A:
    /* 0000256a   4  jsr (ffff829c,A4) */
    c->pc = RC_ADDR(0x0000256au);
    rc_step(c, m, 18);
    /* vector 111 */
    rc_push32(c, m, RC_ADDR(0x0000256eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d92u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021aa4u);
    return;

L_256E:
    /* 0000256e   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000256eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_2572:
    /* 00002572   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00002572u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2574:
    /* 00002574   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00002574u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2578:
    /* 00002578   4  jsr (00005544) */
    c->pc = RC_ADDR(0x00002578u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000257cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00005544u);
    return;

L_257C:
    /* 0000257c   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0000257cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_257E:
    /* 0000257e   4  jsr (ffff820c,A4) */
    c->pc = RC_ADDR(0x0000257eu);
    rc_step(c, m, 18);
    /* vector 87 */
    rc_push32(c, m, RC_ADDR(0x00002582u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f260u);
    return;

L_2582:
    /* 00002582   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00002582u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_2586:
    /* 00002586   2  beq 0000258c */
    c->pc = RC_ADDR(0x00002586u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_258C;

L_2588:
    /* 00002588   4  subq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00002588u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_258C:
    /* 0000258c   2  bra 0000254a */
    c->pc = RC_ADDR(0x0000258cu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_254A;

L_258E:
    /* 0000258e   4  jsr (0000370e) */
    c->pc = RC_ADDR(0x0000258eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002592u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000370eu);
    return;

L_2592:
    /* 00002592   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00002592u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_2596:
    /* 00002596   2  beq 000025a6 */
    c->pc = RC_ADDR(0x00002596u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_25A6;

L_2598:
    /* 00002598   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00002598u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_259C:
    /* 0000259c   4  jsr (000057c8) */
    c->pc = RC_ADDR(0x0000259cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000025a0u));
    rc_depth++;
    c->pc = RC_ADDR(0x000057c8u);
    return;

L_25A0:
    /* 000025a0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000025a0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_25A2:
    /* 000025a2   4  move.l D0,(c,A5) */
    c->pc = RC_ADDR(0x000025a2u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_25A6:
    /* 000025a6   2  bra 0000252a */
    c->pc = RC_ADDR(0x000025a6u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_252A;

L_25A8:
    /* 000025a8   4  bra 000024ba */
    c->pc = RC_ADDR(0x000025a8u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_24BA;

}
