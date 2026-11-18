/* fn_000022d0 - 476 byte(s), 136 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000022d0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000022d0u): goto L_22D0;
    case RC_ADDR(0x000022d4u): goto L_22D4;
    case RC_ADDR(0x000022d8u): goto L_22D8;
    case RC_ADDR(0x000022deu): goto L_22DE;
    case RC_ADDR(0x000022e4u): goto L_22E4;
    case RC_ADDR(0x000022e8u): goto L_22E8;
    case RC_ADDR(0x000022ecu): goto L_22EC;
    case RC_ADDR(0x000022f0u): goto L_22F0;
    case RC_ADDR(0x000022f4u): goto L_22F4;
    case RC_ADDR(0x000022f6u): goto L_22F6;
    case RC_ADDR(0x000022fau): goto L_22FA;
    case RC_ADDR(0x000022feu): goto L_22FE;
    case RC_ADDR(0x00002300u): goto L_2300;
    case RC_ADDR(0x00002302u): goto L_2302;
    case RC_ADDR(0x00002304u): goto L_2304;
    case RC_ADDR(0x00002308u): goto L_2308;
    case RC_ADDR(0x0000230cu): goto L_230C;
    case RC_ADDR(0x0000230eu): goto L_230E;
    case RC_ADDR(0x00002312u): goto L_2312;
    case RC_ADDR(0x00002316u): goto L_2316;
    case RC_ADDR(0x00002318u): goto L_2318;
    case RC_ADDR(0x0000231cu): goto L_231C;
    case RC_ADDR(0x00002322u): goto L_2322;
    case RC_ADDR(0x00002324u): goto L_2324;
    case RC_ADDR(0x00002328u): goto L_2328;
    case RC_ADDR(0x0000232cu): goto L_232C;
    case RC_ADDR(0x00002330u): goto L_2330;
    case RC_ADDR(0x00002332u): goto L_2332;
    case RC_ADDR(0x00002336u): goto L_2336;
    case RC_ADDR(0x0000233au): goto L_233A;
    case RC_ADDR(0x0000233eu): goto L_233E;
    case RC_ADDR(0x00002342u): goto L_2342;
    case RC_ADDR(0x00002344u): goto L_2344;
    case RC_ADDR(0x00002346u): goto L_2346;
    case RC_ADDR(0x0000234au): goto L_234A;
    case RC_ADDR(0x0000234cu): goto L_234C;
    case RC_ADDR(0x00002350u): goto L_2350;
    case RC_ADDR(0x00002354u): goto L_2354;
    case RC_ADDR(0x00002356u): goto L_2356;
    case RC_ADDR(0x0000235au): goto L_235A;
    case RC_ADDR(0x00002360u): goto L_2360;
    case RC_ADDR(0x00002362u): goto L_2362;
    case RC_ADDR(0x00002366u): goto L_2366;
    case RC_ADDR(0x0000236au): goto L_236A;
    case RC_ADDR(0x0000236eu): goto L_236E;
    case RC_ADDR(0x00002370u): goto L_2370;
    case RC_ADDR(0x00002374u): goto L_2374;
    case RC_ADDR(0x00002378u): goto L_2378;
    case RC_ADDR(0x0000237au): goto L_237A;
    case RC_ADDR(0x0000237cu): goto L_237C;
    case RC_ADDR(0x00002380u): goto L_2380;
    case RC_ADDR(0x00002384u): goto L_2384;
    case RC_ADDR(0x00002388u): goto L_2388;
    case RC_ADDR(0x0000238cu): goto L_238C;
    case RC_ADDR(0x00002390u): goto L_2390;
    case RC_ADDR(0x00002394u): goto L_2394;
    case RC_ADDR(0x00002396u): goto L_2396;
    case RC_ADDR(0x0000239au): goto L_239A;
    case RC_ADDR(0x0000239eu): goto L_239E;
    case RC_ADDR(0x000023a0u): goto L_23A0;
    case RC_ADDR(0x000023a4u): goto L_23A4;
    case RC_ADDR(0x000023a6u): goto L_23A6;
    case RC_ADDR(0x000023aau): goto L_23AA;
    case RC_ADDR(0x000023acu): goto L_23AC;
    case RC_ADDR(0x000023b0u): goto L_23B0;
    case RC_ADDR(0x000023b4u): goto L_23B4;
    case RC_ADDR(0x000023b8u): goto L_23B8;
    case RC_ADDR(0x000023bau): goto L_23BA;
    case RC_ADDR(0x000023beu): goto L_23BE;
    case RC_ADDR(0x000023c2u): goto L_23C2;
    case RC_ADDR(0x000023c6u): goto L_23C6;
    case RC_ADDR(0x000023c8u): goto L_23C8;
    case RC_ADDR(0x000023ccu): goto L_23CC;
    case RC_ADDR(0x000023d0u): goto L_23D0;
    case RC_ADDR(0x000023d4u): goto L_23D4;
    case RC_ADDR(0x000023d6u): goto L_23D6;
    case RC_ADDR(0x000023dau): goto L_23DA;
    case RC_ADDR(0x000023e0u): goto L_23E0;
    case RC_ADDR(0x000023e4u): goto L_23E4;
    case RC_ADDR(0x000023e8u): goto L_23E8;
    case RC_ADDR(0x000023eau): goto L_23EA;
    case RC_ADDR(0x000023eeu): goto L_23EE;
    case RC_ADDR(0x000023f2u): goto L_23F2;
    case RC_ADDR(0x000023f6u): goto L_23F6;
    case RC_ADDR(0x000023f8u): goto L_23F8;
    case RC_ADDR(0x000023fau): goto L_23FA;
    case RC_ADDR(0x000023feu): goto L_23FE;
    case RC_ADDR(0x00002402u): goto L_2402;
    case RC_ADDR(0x00002406u): goto L_2406;
    case RC_ADDR(0x00002408u): goto L_2408;
    case RC_ADDR(0x0000240cu): goto L_240C;
    case RC_ADDR(0x0000240eu): goto L_240E;
    case RC_ADDR(0x00002412u): goto L_2412;
    case RC_ADDR(0x00002416u): goto L_2416;
    case RC_ADDR(0x0000241au): goto L_241A;
    case RC_ADDR(0x0000241eu): goto L_241E;
    case RC_ADDR(0x00002420u): goto L_2420;
    case RC_ADDR(0x00002424u): goto L_2424;
    case RC_ADDR(0x00002428u): goto L_2428;
    case RC_ADDR(0x0000242au): goto L_242A;
    case RC_ADDR(0x0000242eu): goto L_242E;
    case RC_ADDR(0x00002432u): goto L_2432;
    case RC_ADDR(0x00002436u): goto L_2436;
    case RC_ADDR(0x00002438u): goto L_2438;
    case RC_ADDR(0x0000243cu): goto L_243C;
    case RC_ADDR(0x00002440u): goto L_2440;
    case RC_ADDR(0x00002444u): goto L_2444;
    case RC_ADDR(0x00002446u): goto L_2446;
    case RC_ADDR(0x0000244au): goto L_244A;
    case RC_ADDR(0x0000244cu): goto L_244C;
    case RC_ADDR(0x00002450u): goto L_2450;
    case RC_ADDR(0x00002454u): goto L_2454;
    case RC_ADDR(0x00002458u): goto L_2458;
    case RC_ADDR(0x0000245au): goto L_245A;
    case RC_ADDR(0x0000245eu): goto L_245E;
    case RC_ADDR(0x00002460u): goto L_2460;
    case RC_ADDR(0x00002464u): goto L_2464;
    case RC_ADDR(0x00002466u): goto L_2466;
    case RC_ADDR(0x0000246au): goto L_246A;
    case RC_ADDR(0x0000246eu): goto L_246E;
    case RC_ADDR(0x00002470u): goto L_2470;
    case RC_ADDR(0x00002474u): goto L_2474;
    case RC_ADDR(0x00002478u): goto L_2478;
    case RC_ADDR(0x0000247au): goto L_247A;
    case RC_ADDR(0x00002480u): goto L_2480;
    case RC_ADDR(0x00002484u): goto L_2484;
    case RC_ADDR(0x00002486u): goto L_2486;
    case RC_ADDR(0x0000248au): goto L_248A;
    case RC_ADDR(0x0000248eu): goto L_248E;
    case RC_ADDR(0x00002490u): goto L_2490;
    case RC_ADDR(0x00002494u): goto L_2494;
    case RC_ADDR(0x00002498u): goto L_2498;
    case RC_ADDR(0x0000249eu): goto L_249E;
    case RC_ADDR(0x000024a4u): goto L_24A4;
    case RC_ADDR(0x000024a8u): goto L_24A8;
    case RC_ADDR(0x000024aau): goto L_24AA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22D0:
    /* 000022d0   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x000022d0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_22D4:
    /* 000022d4   4  jsr (0000370e) */
    c->pc = RC_ADDR(0x000022d4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000022d8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000370eu);
    return;

L_22D8:
    /* 000022d8   6  move.w #4,(850,A4) */
    c->pc = RC_ADDR(0x000022d8u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x850u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_22DE:
    /* 000022de   6  move.w #139,(852,A4) */
    c->pc = RC_ADDR(0x000022deu);
    rc_step(c, m, 16);
    t0 = 0x00000139u;
    rc_wr16(c, m, (c->a[4] + 0x852u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_22E4:
    /* 000022e4   4  clr.w (ffffd6f0,A4) */
    c->pc = RC_ADDR(0x000022e4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2910u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_22E8:
    /* 000022e8   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000022e8u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_22EC:
    /* 000022ec   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000022ecu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22F0:
    /* 000022f0   4  jsr (00006500) */
    c->pc = RC_ADDR(0x000022f0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000022f4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006500u);
    return;

L_22F4:
    /* 000022f4   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000022f4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_22F6:
    /* 000022f6   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x000022f6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22FA:
    /* 000022fa   4  jsr (ffff80f8,A4) */
    c->pc = RC_ADDR(0x000022fau);
    rc_step(c, m, 18);
    /* vector 41 */
    rc_push32(c, m, RC_ADDR(0x000022feu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023beeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b292u);
    return;

L_22FE:
    /* 000022fe   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000022feu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2300:
    /* 00002300   2  tst.w D0 */
    c->pc = RC_ADDR(0x00002300u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_2302:
    /* 00002302   2  beq 0000230e */
    c->pc = RC_ADDR(0x00002302u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_230E;

L_2304:
    /* 00002304   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002304u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2308:
    /* 00002308   4  jsr (00007a4e) */
    c->pc = RC_ADDR(0x00002308u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000230cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00007a4eu);
    return;

L_230C:
    /* 0000230c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000230cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_230E:
    /* 0000230e   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x0000230eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_2312:
    /* 00002312   4  cmpi.b #48,(A0) */
    c->pc = RC_ADDR(0x00002312u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000048u);

L_2316:
    /* 00002316   2  bne 00002362 */
    c->pc = RC_ADDR(0x00002316u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2362;

L_2318:
    /* 00002318   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00002318u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_231C:
    /* 0000231c   6  cmpi.b #43,(1,A0) */
    c->pc = RC_ADDR(0x0000231cu);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[0] + 0x1u));
    rc_cmp(c, RC_B, t0, 0x00000043u);

L_2322:
    /* 00002322   2  bne 00002362 */
    c->pc = RC_ADDR(0x00002322u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2362;

L_2324:
    /* 00002324   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002324u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2328:
    /* 00002328   4  pea (83c,A4) */
    c->pc = RC_ADDR(0x00002328u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x83cu));

L_232C:
    /* 0000232c   4  jsr (0000791a) */
    c->pc = RC_ADDR(0x0000232cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002330u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000791au);
    return;

L_2330:
    /* 00002330   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00002330u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2332:
    /* 00002332   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00002332u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2336:
    /* 00002336   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00002336u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_233A:
    /* 0000233a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000233au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_233E:
    /* 0000233e   4  jsr (00007fa6) */
    c->pc = RC_ADDR(0x0000233eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002342u));
    rc_depth++;
    c->pc = RC_ADDR(0x00007fa6u);
    return;

L_2342:
    /* 00002342   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00002342u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2344:
    /* 00002344   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00002344u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2346:
    /* 00002346   4  jsr (000039da) */
    c->pc = RC_ADDR(0x00002346u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000234au));
    rc_depth++;
    c->pc = RC_ADDR(0x000039dau);
    return;

L_234A:
    /* 0000234a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000234au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_234C:
    /* 0000234c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000234cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2350:
    /* 00002350   4  jsr (ffff8110,A4) */
    c->pc = RC_ADDR(0x00002350u);
    rc_step(c, m, 18);
    /* vector 45 */
    rc_push32(c, m, RC_ADDR(0x00002354u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c06u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000d38eu);
    return;

L_2354:
    /* 00002354   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00002354u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2356:
    /* 00002356   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x00002356u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_235A:
    /* 0000235a   6  move.w #1,(ffff8464,A4) */
    c->pc = RC_ADDR(0x0000235au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7b9cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2360:
    /* 00002360   2  bra 00002374 */
    c->pc = RC_ADDR(0x00002360u);
    rc_step(c, m, 10);
    goto L_2374;

L_2362:
    /* 00002362   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002362u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2366:
    /* 00002366   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00002366u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_236A:
    /* 0000236a   4  jsr (0000791a) */
    c->pc = RC_ADDR(0x0000236au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000236eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000791au);
    return;

L_236E:
    /* 0000236e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000236eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2370:
    /* 00002370   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00002370u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2374:
    /* 00002374   4  tst.l (14,A5) */
    c->pc = RC_ADDR(0x00002374u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_set_nzvc(c, t0, RC_L);

L_2378:
    /* 00002378   2  beq 00002390 */
    c->pc = RC_ADDR(0x00002378u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2390;

L_237A:
    /* 0000237a   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000237au);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_237C:
    /* 0000237c   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0000237cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2380:
    /* 00002380   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002380u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2384:
    /* 00002384   4  move.l (14,A5),-(A7) */
    c->pc = RC_ADDR(0x00002384u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2388:
    /* 00002388   4  jsr (00007b30) */
    c->pc = RC_ADDR(0x00002388u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000238cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00007b30u);
    return;

L_238C:
    /* 0000238c   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000238cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_2390:
    /* 00002390   4  tst.w (fffff860,A4) */
    c->pc = RC_ADDR(0x00002390u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7a0u));
    rc_set_nzvc(c, t0, RC_W);

L_2394:
    /* 00002394   2  beq 000023a6 */
    c->pc = RC_ADDR(0x00002394u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_23A6;

L_2396:
    /* 00002396   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002396u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_239A:
    /* 0000239a   4  jsr (00006612) */
    c->pc = RC_ADDR(0x0000239au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000239eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00006612u);
    return;

L_239E:
    /* 0000239e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000239eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_23A0:
    /* 000023a0   4  subq.w #1,(fffff860,A4) */
    c->pc = RC_ADDR(0x000023a0u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x7a0u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_23A4:
    /* 000023a4   2  bra 00002390 */
    c->pc = RC_ADDR(0x000023a4u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2390;

L_23A6:
    /* 000023a6   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x000023a6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_23AA:
    /* 000023aa   2  beq 000023ba */
    c->pc = RC_ADDR(0x000023aau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_23BA;

L_23AC:
    /* 000023ac   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000023acu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23B0:
    /* 000023b0   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000023b0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23B4:
    /* 000023b4   4  jsr (00007fa6) */
    c->pc = RC_ADDR(0x000023b4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000023b8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00007fa6u);
    return;

L_23B8:
    /* 000023b8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000023b8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_23BA:
    /* 000023ba   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x000023bau);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_23BE:
    /* 000023be   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x000023beu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23C2:
    /* 000023c2   4  jsr (00005748) */
    c->pc = RC_ADDR(0x000023c2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000023c6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005748u);
    return;

L_23C6:
    /* 000023c6   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000023c6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_23C8:
    /* 000023c8   4  move.w D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000023c8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_23CC:
    /* 000023cc   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x000023ccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_23D0:
    /* 000023d0   4  subq.w #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000023d0u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_23D4:
    /* 000023d4   2  tst.w D0 */
    c->pc = RC_ADDR(0x000023d4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_23D6:
    /* 000023d6   4  beq 00002498 */
    c->pc = RC_ADDR(0x000023d6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2498;

L_23DA:
    /* 000023da   6  move.w #1,(836,A4) */
    c->pc = RC_ADDR(0x000023dau);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x836u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_23E0:
    /* 000023e0   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x000023e0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23E4:
    /* 000023e4   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x000023e4u);
    rc_step(c, m, 18);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x000023e8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228c2u);
    return;

L_23E8:
    /* 000023e8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000023e8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_23EA:
    /* 000023ea   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000023eau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_23EE:
    /* 000023ee   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x000023eeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23F2:
    /* 000023f2   4  jsr (000022aa) */
    c->pc = RC_ADDR(0x000023f2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000023f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x000022aau);
    return;

L_23F6:
    /* 000023f6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000023f6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_23F8:
    /* 000023f8   2  tst.w D0 */
    c->pc = RC_ADDR(0x000023f8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_23FA:
    /* 000023fa   4  beq 00002480 */
    c->pc = RC_ADDR(0x000023fau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2480;

L_23FE:
    /* 000023fe   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x000023feu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2402:
    /* 00002402   4  jsr (00005596) */
    c->pc = RC_ADDR(0x00002402u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002406u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005596u);
    return;

L_2406:
    /* 00002406   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00002406u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2408:
    /* 00002408   4  move.w #c5,D1 */
    c->pc = RC_ADDR(0x00002408u);
    rc_step(c, m, 8);
    t0 = 0x000000c5u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_240C:
    /* 0000240c   2  sub.w D0,D1 */
    c->pc = RC_ADDR(0x0000240cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_240E:
    /* 0000240e   4  move.w D1,(ffffd346,A4) */
    c->pc = RC_ADDR(0x0000240eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x2cbau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2412:
    /* 00002412   4  move.w #8,-(A7) */
    c->pc = RC_ADDR(0x00002412u);
    rc_step(c, m, 12);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2416:
    /* 00002416   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x00002416u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_241A:
    /* 0000241a   4  jsr (ffff8074,A4) */
    c->pc = RC_ADDR(0x0000241au);
    rc_step(c, m, 18);
    /* vector 19 */
    rc_push32(c, m, RC_ADDR(0x0000241eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b6au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000564cu);
    return;

L_241E:
    /* 0000241e   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0000241eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2420:
    /* 00002420   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002420u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2424:
    /* 00002424   4  jsr (00006612) */
    c->pc = RC_ADDR(0x00002424u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002428u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006612u);
    return;

L_2428:
    /* 00002428   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00002428u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_242A:
    /* 0000242a   4  move.w #8,-(A7) */
    c->pc = RC_ADDR(0x0000242au);
    rc_step(c, m, 12);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_242E:
    /* 0000242e   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x0000242eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2432:
    /* 00002432   4  jsr (ffff8074,A4) */
    c->pc = RC_ADDR(0x00002432u);
    rc_step(c, m, 18);
    /* vector 19 */
    rc_push32(c, m, RC_ADDR(0x00002436u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b6au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000564cu);
    return;

L_2436:
    /* 00002436   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002436u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2438:
    /* 00002438   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00002438u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_243C:
    /* 0000243c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000243cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2440:
    /* 00002440   4  jsr (00007876) */
    c->pc = RC_ADDR(0x00002440u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002444u));
    rc_depth++;
    c->pc = RC_ADDR(0x00007876u);
    return;

L_2444:
    /* 00002444   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00002444u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2446:
    /* 00002446   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00002446u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_244A:
    /* 0000244a   2  beq 00002466 */
    c->pc = RC_ADDR(0x0000244au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2466;

L_244C:
    /* 0000244c   4  subq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000244cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_2450:
    /* 00002450   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002450u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2454:
    /* 00002454   4  jsr (00006612) */
    c->pc = RC_ADDR(0x00002454u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002458u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006612u);
    return;

L_2458:
    /* 00002458   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00002458u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_245A:
    /* 0000245a   4  tst.w (ffffd5c8,A4) */
    c->pc = RC_ADDR(0x0000245au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a38u));
    rc_set_nzvc(c, t0, RC_W);

L_245E:
    /* 0000245e   2  beq 00002464 */
    c->pc = RC_ADDR(0x0000245eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2464;

L_2460:
    /* 00002460   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00002460u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2464:
    /* 00002464   2  bra 00002446 */
    c->pc = RC_ADDR(0x00002464u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2446;

L_2466:
    /* 00002466   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002466u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_246A:
    /* 0000246a   4  jsr (000078f2) */
    c->pc = RC_ADDR(0x0000246au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000246eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000078f2u);
    return;

L_246E:
    /* 0000246e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000246eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2470:
    /* 00002470   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002470u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2474:
    /* 00002474   4  jsr (0000371e) */
    c->pc = RC_ADDR(0x00002474u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002478u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000371eu);
    return;

L_2478:
    /* 00002478   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00002478u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_247A:
    /* 0000247a   6  move.w #c8,(ffffd346,A4) */
    c->pc = RC_ADDR(0x0000247au);
    rc_step(c, m, 16);
    t0 = 0x000000c8u;
    rc_wr16(c, m, (c->a[4] - 0x2cbau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2480:
    /* 00002480   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00002480u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_2484:
    /* 00002484   2  beq 00002494 */
    c->pc = RC_ADDR(0x00002484u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2494;

L_2486:
    /* 00002486   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x00002486u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_248A:
    /* 0000248a   4  jsr (000057c8) */
    c->pc = RC_ADDR(0x0000248au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000248eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000057c8u);
    return;

L_248E:
    /* 0000248e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000248eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2490:
    /* 00002490   4  move.l D0,(10,A5) */
    c->pc = RC_ADDR(0x00002490u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2494:
    /* 00002494   4  bra 000023cc */
    c->pc = RC_ADDR(0x00002494u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_23CC;

L_2498:
    /* 00002498   6  move.w #13,(850,A4) */
    c->pc = RC_ADDR(0x00002498u);
    rc_step(c, m, 16);
    t0 = 0x00000013u;
    rc_wr16(c, m, (c->a[4] + 0x850u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_249E:
    /* 0000249e   6  move.w #12c,(852,A4) */
    c->pc = RC_ADDR(0x0000249eu);
    rc_step(c, m, 16);
    t0 = 0x0000012cu;
    rc_wr16(c, m, (c->a[4] + 0x852u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_24A4:
    /* 000024a4   4  jsr (ffff80fe,A4) */
    c->pc = RC_ADDR(0x000024a4u);
    rc_step(c, m, 18);
    /* vector 42 */
    rc_push32(c, m, RC_ADDR(0x000024a8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bf4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b450u);
    return;

L_24A8:
    /* 000024a8   2  unlk A5 */
    c->pc = RC_ADDR(0x000024a8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_24AA:
    /* 000024aa   2  rts */
    c->pc = RC_ADDR(0x000024aau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
