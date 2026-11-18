/* fn_00022366 - 282 byte(s), 77 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00022366(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00022366u): goto L_22366;
    case RC_ADDR(0x0002236au): goto L_2236A;
    case RC_ADDR(0x0002236eu): goto L_2236E;
    case RC_ADDR(0x00022372u): goto L_22372;
    case RC_ADDR(0x00022376u): goto L_22376;
    case RC_ADDR(0x0002237cu): goto L_2237C;
    case RC_ADDR(0x0002237eu): goto L_2237E;
    case RC_ADDR(0x00022382u): goto L_22382;
    case RC_ADDR(0x00022386u): goto L_22386;
    case RC_ADDR(0x0002238au): goto L_2238A;
    case RC_ADDR(0x0002238eu): goto L_2238E;
    case RC_ADDR(0x00022394u): goto L_22394;
    case RC_ADDR(0x00022398u): goto L_22398;
    case RC_ADDR(0x0002239au): goto L_2239A;
    case RC_ADDR(0x0002239eu): goto L_2239E;
    case RC_ADDR(0x000223a2u): goto L_223A2;
    case RC_ADDR(0x000223a6u): goto L_223A6;
    case RC_ADDR(0x000223acu): goto L_223AC;
    case RC_ADDR(0x000223b0u): goto L_223B0;
    case RC_ADDR(0x000223b4u): goto L_223B4;
    case RC_ADDR(0x000223b8u): goto L_223B8;
    case RC_ADDR(0x000223bcu): goto L_223BC;
    case RC_ADDR(0x000223beu): goto L_223BE;
    case RC_ADDR(0x000223c2u): goto L_223C2;
    case RC_ADDR(0x000223c4u): goto L_223C4;
    case RC_ADDR(0x000223c8u): goto L_223C8;
    case RC_ADDR(0x000223ccu): goto L_223CC;
    case RC_ADDR(0x000223ceu): goto L_223CE;
    case RC_ADDR(0x000223d2u): goto L_223D2;
    case RC_ADDR(0x000223d6u): goto L_223D6;
    case RC_ADDR(0x000223dau): goto L_223DA;
    case RC_ADDR(0x000223deu): goto L_223DE;
    case RC_ADDR(0x000223e2u): goto L_223E2;
    case RC_ADDR(0x000223e6u): goto L_223E6;
    case RC_ADDR(0x000223eau): goto L_223EA;
    case RC_ADDR(0x000223eeu): goto L_223EE;
    case RC_ADDR(0x000223f0u): goto L_223F0;
    case RC_ADDR(0x000223f2u): goto L_223F2;
    case RC_ADDR(0x000223f6u): goto L_223F6;
    case RC_ADDR(0x000223fau): goto L_223FA;
    case RC_ADDR(0x000223feu): goto L_223FE;
    case RC_ADDR(0x00022402u): goto L_22402;
    case RC_ADDR(0x00022406u): goto L_22406;
    case RC_ADDR(0x00022408u): goto L_22408;
    case RC_ADDR(0x0002240cu): goto L_2240C;
    case RC_ADDR(0x0002240eu): goto L_2240E;
    case RC_ADDR(0x00022412u): goto L_22412;
    case RC_ADDR(0x00022416u): goto L_22416;
    case RC_ADDR(0x0002241au): goto L_2241A;
    case RC_ADDR(0x0002241cu): goto L_2241C;
    case RC_ADDR(0x00022422u): goto L_22422;
    case RC_ADDR(0x00022426u): goto L_22426;
    case RC_ADDR(0x0002242au): goto L_2242A;
    case RC_ADDR(0x0002242eu): goto L_2242E;
    case RC_ADDR(0x00022432u): goto L_22432;
    case RC_ADDR(0x00022436u): goto L_22436;
    case RC_ADDR(0x0002243au): goto L_2243A;
    case RC_ADDR(0x0002243eu): goto L_2243E;
    case RC_ADDR(0x00022442u): goto L_22442;
    case RC_ADDR(0x00022446u): goto L_22446;
    case RC_ADDR(0x0002244au): goto L_2244A;
    case RC_ADDR(0x00022450u): goto L_22450;
    case RC_ADDR(0x00022454u): goto L_22454;
    case RC_ADDR(0x00022458u): goto L_22458;
    case RC_ADDR(0x0002245au): goto L_2245A;
    case RC_ADDR(0x0002245eu): goto L_2245E;
    case RC_ADDR(0x00022462u): goto L_22462;
    case RC_ADDR(0x00022466u): goto L_22466;
    case RC_ADDR(0x0002246au): goto L_2246A;
    case RC_ADDR(0x0002246eu): goto L_2246E;
    case RC_ADDR(0x00022472u): goto L_22472;
    case RC_ADDR(0x00022474u): goto L_22474;
    case RC_ADDR(0x00022476u): goto L_22476;
    case RC_ADDR(0x00022478u): goto L_22478;
    case RC_ADDR(0x0002247au): goto L_2247A;
    case RC_ADDR(0x0002247cu): goto L_2247C;
    case RC_ADDR(0x0002247eu): goto L_2247E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22366:
    /* 00022366   4  link.w A5,#ffffffbc */
    c->pc = RC_ADDR(0x00022366u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x44u;

L_2236A:
    /* 0002236a   4  clr.w (ffffffbc,A5) */
    c->pc = RC_ADDR(0x0002236au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x44u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2236E:
    /* 0002236e   4  move.w (ffffffbc,A5),D0 */
    c->pc = RC_ADDR(0x0002236eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x44u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22372:
    /* 00022372   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00022372u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_22376:
    /* 00022376   6  cmpi.b #3a,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00022376u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_B, t0, 0x0000003au);

L_2237C:
    /* 0002237c   2  beq 0002239a */
    c->pc = RC_ADDR(0x0002237cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2239A;

L_2237E:
    /* 0002237e   4  move.w (ffffffbc,A5),D0 */
    c->pc = RC_ADDR(0x0002237eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x44u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22382:
    /* 00022382   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00022382u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_22386:
    /* 00022386   4  move.w (ffffffbc,A5),D1 */
    c->pc = RC_ADDR(0x00022386u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x44u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2238A:
    /* 0002238a   4  lea (ffffffe7,A5),A1 */
    c->pc = RC_ADDR(0x0002238au);
    rc_step(c, m, 8);
    c->a[1] = (c->a[5] - 0x19u);

L_2238E:
    /* 0002238e   6  move.b (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0002238eu);
    rc_step(c, m, 24);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr8(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_22394:
    /* 00022394   4  addq.w #1,(ffffffbc,A5) */
    c->pc = RC_ADDR(0x00022394u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x44u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_22398:
    /* 00022398   2  bra 0002236e */
    c->pc = RC_ADDR(0x00022398u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2236E;

L_2239A:
    /* 0002239a   4  move.w (ffffffbc,A5),D0 */
    c->pc = RC_ADDR(0x0002239au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x44u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2239E:
    /* 0002239e   4  addq.w #1,(ffffffbc,A5) */
    c->pc = RC_ADDR(0x0002239eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x44u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_223A2:
    /* 000223a2   4  lea (ffffffe7,A5),A0 */
    c->pc = RC_ADDR(0x000223a2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x19u);

L_223A6:
    /* 000223a6   6  move.b #3a,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000223a6u);
    rc_step(c, m, 18);
    t0 = 0x0000003au;
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_223AC:
    /* 000223ac   4  move.w (ffffffbc,A5),D0 */
    c->pc = RC_ADDR(0x000223acu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x44u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_223B0:
    /* 000223b0   4  lea (ffffffe7,A5),A0 */
    c->pc = RC_ADDR(0x000223b0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x19u);

L_223B4:
    /* 000223b4   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000223b4u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_223B8:
    /* 000223b8   4  move.w (ffffffbc,A5),D0 */
    c->pc = RC_ADDR(0x000223b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x44u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_223BC:
    /* 000223bc   2  ext.l D0 */
    c->pc = RC_ADDR(0x000223bcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_223BE:
    /* 000223be   4  add.l (8,A5),D0 */
    c->pc = RC_ADDR(0x000223beu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_223C2:
    /* 000223c2   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000223c2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_223C4:
    /* 000223c4   4  pea (ffffffbf,A5) */
    c->pc = RC_ADDR(0x000223c4u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x41u));

L_223C8:
    /* 000223c8   4  jsr (ffff82cc,A4) */
    c->pc = RC_ADDR(0x000223c8u);
    rc_step(c, m, 18);
    /* vector 119 */
    rc_push32(c, m, RC_ADDR(0x000223ccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228b2u);
    return;

L_223CC:
    /* 000223cc   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000223ccu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_223CE:
    /* 000223ce   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000223ceu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_223D2:
    /* 000223d2   4  pea (ffffffbf,A5) */
    c->pc = RC_ADDR(0x000223d2u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x41u));

L_223D6:
    /* 000223d6   4  pea (ffffffe7,A5) */
    c->pc = RC_ADDR(0x000223d6u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x19u));

L_223DA:
    /* 000223da   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x000223dau);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x000223deu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000068au);
    return;

L_223DE:
    /* 000223de   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000223deu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_223E2:
    /* 000223e2   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000223e2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_223E6:
    /* 000223e6   4  pea (3512,A4) */
    c->pc = RC_ADDR(0x000223e6u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x3512u));

L_223EA:
    /* 000223ea   4  jsr (ffff82de,A4) */
    c->pc = RC_ADDR(0x000223eau);
    rc_step(c, m, 18);
    /* vector 122 */
    rc_push32(c, m, RC_ADDR(0x000223eeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dd4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002298au);
    return;

L_223EE:
    /* 000223ee   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000223eeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_223F0:
    /* 000223f0   2  tst.w D0 */
    c->pc = RC_ADDR(0x000223f0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_223F2:
    /* 000223f2   4  beq 0002247c */
    c->pc = RC_ADDR(0x000223f2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2247C;

L_223F6:
    /* 000223f6   4  jsr (00022308) */
    c->pc = RC_ADDR(0x000223f6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000223fau));
    rc_depth++;
    c->pc = RC_ADDR(0x00022308u);
    return;

L_223FA:
    /* 000223fa   4  pea (000003ed).l */
    c->pc = RC_ADDR(0x000223fau);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000003edu);

L_223FE:
    /* 000223fe   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000223feu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22402:
    /* 00022402   4  jsr (00022518) */
    c->pc = RC_ADDR(0x00022402u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022406u));
    rc_depth++;
    c->pc = RC_ADDR(0x00022518u);
    return;

L_22406:
    /* 00022406   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00022406u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_22408:
    /* 00022408   4  move.l D0,(350a,A4) */
    c->pc = RC_ADDR(0x00022408u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x350au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2240C:
    /* 0002240c   2  beq 00022478 */
    c->pc = RC_ADDR(0x0002240cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22478;

L_2240E:
    /* 0002240e   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0002240eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22412:
    /* 00022412   4  pea (3512,A4) */
    c->pc = RC_ADDR(0x00022412u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x3512u));

L_22416:
    /* 00022416   4  jsr (ffff82cc,A4) */
    c->pc = RC_ADDR(0x00022416u);
    rc_step(c, m, 18);
    /* vector 119 */
    rc_push32(c, m, RC_ADDR(0x0002241au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228b2u);
    return;

L_2241A:
    /* 0002241a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0002241au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2241C:
    /* 0002241c   6  move.w #1,(3508,A4) */
    c->pc = RC_ADDR(0x0002241cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x3508u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_22422:
    /* 00022422   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00022422u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_22426:
    /* 00022426   4  pea (3548,A4) */
    c->pc = RC_ADDR(0x00022426u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x3548u));

L_2242A:
    /* 0002242a   4  move.l (350a,A4),-(A7) */
    c->pc = RC_ADDR(0x0002242au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x350au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2242E:
    /* 0002242e   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0002242eu);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x00022432u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_22432:
    /* 00022432   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00022432u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_22436:
    /* 00022436   4  pea (00000004).l */
    c->pc = RC_ADDR(0x00022436u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000004u);

L_2243A:
    /* 0002243a   4  pea (3544,A4) */
    c->pc = RC_ADDR(0x0002243au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x3544u));

L_2243E:
    /* 0002243e   4  move.l (350a,A4),-(A7) */
    c->pc = RC_ADDR(0x0002243eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x350au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22442:
    /* 00022442   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00022442u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x00022446u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_22446:
    /* 00022446   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00022446u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_2244A:
    /* 0002244a   6  pea (00010001).l */
    c->pc = RC_ADDR(0x0002244au);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_22450:
    /* 00022450   4  move.l (3544,A4),-(A7) */
    c->pc = RC_ADDR(0x00022450u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3544u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22454:
    /* 00022454   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x00022454u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x00022458u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_22458:
    /* 00022458   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00022458u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2245A:
    /* 0002245a   4  move.l D0,(350e,A4) */
    c->pc = RC_ADDR(0x0002245au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x350eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2245E:
    /* 0002245e   4  move.l (3544,A4),-(A7) */
    c->pc = RC_ADDR(0x0002245eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3544u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22462:
    /* 00022462   4  move.l (350e,A4),-(A7) */
    c->pc = RC_ADDR(0x00022462u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x350eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22466:
    /* 00022466   4  move.l (350a,A4),-(A7) */
    c->pc = RC_ADDR(0x00022466u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x350au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2246A:
    /* 0002246a   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0002246au);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0002246eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_2246E:
    /* 0002246e   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0002246eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_22472:
    /* 00022472   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00022472u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_22474:
    /* 00022474   2  unlk A5 */
    c->pc = RC_ADDR(0x00022474u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_22476:
    /* 00022476   2  rts */
    c->pc = RC_ADDR(0x00022476u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_22478:
    /* 00022478   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00022478u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2247A:
    /* 0002247a   2  bra 00022474 */
    c->pc = RC_ADDR(0x0002247au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_22474;

L_2247C:
    /* 0002247c   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0002247cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2247E:
    /* 0002247e   2  bra 00022474 */
    c->pc = RC_ADDR(0x0002247eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_22474;

}
