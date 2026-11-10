/* fn_000002f4 - 468 byte(s), 131 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000002f4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x000002f4u: goto L_2F4;
    case 0x000002f8u: goto L_2F8;
    case 0x000002feu: goto L_2FE;
    case 0x00000302u: goto L_302;
    case 0x00000304u: goto L_304;
    case 0x00000308u: goto L_308;
    case 0x0000030cu: goto L_30C;
    case 0x00000312u: goto L_312;
    case 0x00000314u: goto L_314;
    case 0x00000316u: goto L_316;
    case 0x0000031au: goto L_31A;
    case 0x0000031eu: goto L_31E;
    case 0x00000322u: goto L_322;
    case 0x00000324u: goto L_324;
    case 0x00000326u: goto L_326;
    case 0x0000032au: goto L_32A;
    case 0x0000032eu: goto L_32E;
    case 0x00000330u: goto L_330;
    case 0x00000334u: goto L_334;
    case 0x00000338u: goto L_338;
    case 0x0000033eu: goto L_33E;
    case 0x00000342u: goto L_342;
    case 0x00000344u: goto L_344;
    case 0x00000346u: goto L_346;
    case 0x0000034au: goto L_34A;
    case 0x0000034eu: goto L_34E;
    case 0x00000352u: goto L_352;
    case 0x00000356u: goto L_356;
    case 0x0000035au: goto L_35A;
    case 0x0000035eu: goto L_35E;
    case 0x00000362u: goto L_362;
    case 0x00000364u: goto L_364;
    case 0x00000368u: goto L_368;
    case 0x0000036au: goto L_36A;
    case 0x0000036eu: goto L_36E;
    case 0x00000372u: goto L_372;
    case 0x00000374u: goto L_374;
    case 0x00000376u: goto L_376;
    case 0x0000037au: goto L_37A;
    case 0x0000037cu: goto L_37C;
    case 0x00000380u: goto L_380;
    case 0x00000384u: goto L_384;
    case 0x00000388u: goto L_388;
    case 0x0000038au: goto L_38A;
    case 0x0000038eu: goto L_38E;
    case 0x00000392u: goto L_392;
    case 0x00000396u: goto L_396;
    case 0x00000398u: goto L_398;
    case 0x0000039au: goto L_39A;
    case 0x000003a2u: goto L_3A2;
    case 0x000003a6u: goto L_3A6;
    case 0x000003aau: goto L_3AA;
    case 0x000003aeu: goto L_3AE;
    case 0x000003b2u: goto L_3B2;
    case 0x000003b6u: goto L_3B6;
    case 0x000003bau: goto L_3BA;
    case 0x000003c0u: goto L_3C0;
    case 0x000003c6u: goto L_3C6;
    case 0x000003c8u: goto L_3C8;
    case 0x000003ceu: goto L_3CE;
    case 0x000003d0u: goto L_3D0;
    case 0x000003d4u: goto L_3D4;
    case 0x000003d8u: goto L_3D8;
    case 0x000003dau: goto L_3DA;
    case 0x000003deu: goto L_3DE;
    case 0x000003e0u: goto L_3E0;
    case 0x000003e4u: goto L_3E4;
    case 0x000003e6u: goto L_3E6;
    case 0x000003eau: goto L_3EA;
    case 0x000003ecu: goto L_3EC;
    case 0x000003f0u: goto L_3F0;
    case 0x000003f4u: goto L_3F4;
    case 0x000003f8u: goto L_3F8;
    case 0x000003fcu: goto L_3FC;
    case 0x00000400u: goto L_400;
    case 0x00000404u: goto L_404;
    case 0x00000408u: goto L_408;
    case 0x0000040cu: goto L_40C;
    case 0x00000410u: goto L_410;
    case 0x00000412u: goto L_412;
    case 0x00000416u: goto L_416;
    case 0x0000041au: goto L_41A;
    case 0x0000041eu: goto L_41E;
    case 0x00000422u: goto L_422;
    case 0x00000426u: goto L_426;
    case 0x0000042au: goto L_42A;
    case 0x0000042cu: goto L_42C;
    case 0x00000430u: goto L_430;
    case 0x00000434u: goto L_434;
    case 0x00000438u: goto L_438;
    case 0x0000043cu: goto L_43C;
    case 0x00000440u: goto L_440;
    case 0x00000446u: goto L_446;
    case 0x0000044au: goto L_44A;
    case 0x0000044cu: goto L_44C;
    case 0x00000450u: goto L_450;
    case 0x00000454u: goto L_454;
    case 0x00000458u: goto L_458;
    case 0x0000045au: goto L_45A;
    case 0x0000045eu: goto L_45E;
    case 0x00000460u: goto L_460;
    case 0x00000464u: goto L_464;
    case 0x00000468u: goto L_468;
    case 0x0000046au: goto L_46A;
    case 0x0000046cu: goto L_46C;
    case 0x00000470u: goto L_470;
    case 0x00000472u: goto L_472;
    case 0x00000476u: goto L_476;
    case 0x0000047au: goto L_47A;
    case 0x0000047eu: goto L_47E;
    case 0x00000480u: goto L_480;
    case 0x00000484u: goto L_484;
    case 0x00000488u: goto L_488;
    case 0x0000048cu: goto L_48C;
    case 0x00000490u: goto L_490;
    case 0x00000494u: goto L_494;
    case 0x00000498u: goto L_498;
    case 0x0000049cu: goto L_49C;
    case 0x0000049eu: goto L_49E;
    case 0x000004a2u: goto L_4A2;
    case 0x000004a4u: goto L_4A4;
    case 0x000004a8u: goto L_4A8;
    case 0x000004aau: goto L_4AA;
    case 0x000004aeu: goto L_4AE;
    case 0x000004b0u: goto L_4B0;
    case 0x000004b4u: goto L_4B4;
    case 0x000004b6u: goto L_4B6;
    case 0x000004bau: goto L_4BA;
    case 0x000004beu: goto L_4BE;
    case 0x000004c2u: goto L_4C2;
    case 0x000004c4u: goto L_4C4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2F4:
    /* 000002f4   4  link.w A5,#fffffff0 */
    c->pc = 0x000002f4u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x10u;

L_2F8:
    /* 000002f8   6  move.w #1,(ffff83d0,A4) */
    c->pc = 0x000002f8u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c30u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2FE:
    /* 000002fe   4  clr.w (fffffffe,A5) */
    c->pc = 0x000002feu;
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_302:
    /* 00000302   2  moveq #0,D0 */
    c->pc = 0x00000302u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_304:
    /* 00000304   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x00000304u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_308:
    /* 00000308   4  movea.l (8,A5),A0 */
    c->pc = 0x00000308u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_30C:
    /* 0000030c   6  cmpi.b #3a,(0,A0,D0.w) */
    c->pc = 0x0000030cu;
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_B, t0, 0x0000003au);

L_312:
    /* 00000312   2  beq 00000344 */
    c->pc = 0x00000312u;
    if (rc_cond(c, 7)) goto L_344;

L_314:
    /* 00000314   2  moveq #0,D0 */
    c->pc = 0x00000314u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_316:
    /* 00000316   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x00000316u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_31A:
    /* 0000031a   4  movea.l (8,A5),A0 */
    c->pc = 0x0000031au;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_31E:
    /* 0000031e   4  tst.b (0,A0,D0.w) */
    c->pc = 0x0000031eu;
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_322:
    /* 00000322   2  beq 00000344 */
    c->pc = 0x00000322u;
    if (rc_cond(c, 7)) goto L_344;

L_324:
    /* 00000324   2  moveq #0,D0 */
    c->pc = 0x00000324u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_326:
    /* 00000326   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x00000326u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_32A:
    /* 0000032a   4  movea.l (8,A5),A0 */
    c->pc = 0x0000032au;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_32E:
    /* 0000032e   2  moveq #0,D1 */
    c->pc = 0x0000032eu;
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_330:
    /* 00000330   4  move.w (fffffffe,A5),D1 */
    c->pc = 0x00000330u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_334:
    /* 00000334   4  lea (fffffe50,A4),A1 */
    c->pc = 0x00000334u;
    c->a[1] = (c->a[4] - 0x1b0u);

L_338:
    /* 00000338   6  move.b (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = 0x00000338u;
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr8(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_33E:
    /* 0000033e   4  addq.w #1,(fffffffe,A5) */
    c->pc = 0x0000033eu;
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_342:
    /* 00000342   2  bra 00000302 */
    c->pc = 0x00000342u;
    rc_tick();
    goto L_302;

L_344:
    /* 00000344   2  moveq #0,D0 */
    c->pc = 0x00000344u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_346:
    /* 00000346   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x00000346u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_34A:
    /* 0000034a   4  lea (fffffe50,A4),A0 */
    c->pc = 0x0000034au;
    c->a[0] = (c->a[4] - 0x1b0u);

L_34E:
    /* 0000034e   4  clr.b (0,A0,D0.w) */
    c->pc = 0x0000034eu;
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_352:
    /* 00000352   4  clr.l (fffffe4c,A4) */
    c->pc = 0x00000352u;
    rc_wr32(c, m, (c->a[4] - 0x1b4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_356:
    /* 00000356   4  pea (fffffffe).l */
    c->pc = 0x00000356u;
    rc_push32(c, m, 0xfffffffeu);

L_35A:
    /* 0000035a   4  move.l (8,A5),-(A7) */
    c->pc = 0x0000035au;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_35E:
    /* 0000035e   4  jsr (ffff830e,A4) */
    c->pc = 0x0000035eu;
    /* vector 130 */
    rc_push32(c, m, 0x00000362u);
    rc_depth++;
    c->pc = 0x0002144eu;
    return;

L_362:
    /* 00000362   2  addq.w #8,A7 */
    c->pc = 0x00000362u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_364:
    /* 00000364   4  move.l D0,(fffffe4c,A4) */
    c->pc = 0x00000364u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x1b4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_368:
    /* 00000368   2  beq 0000039a */
    c->pc = 0x00000368u;
    if (rc_cond(c, 7)) goto L_39A;

L_36A:
    /* 0000036a   4  move.l (fffffe4c,A4),-(A7) */
    c->pc = 0x0000036au;
    t0 = rc_rd32(c, m, (c->a[4] - 0x1b4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_36E:
    /* 0000036e   4  jsr (ffff82f6,A4) */
    c->pc = 0x0000036eu;
    /* vector 126 */
    rc_push32(c, m, 0x00000372u);
    rc_depth++;
    c->pc = 0x00021410u;
    return;

L_372:
    /* 00000372   2  addq.w #4,A7 */
    c->pc = 0x00000372u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_374:
    /* 00000374   2  move.l D0,-(A7) */
    c->pc = 0x00000374u;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_376:
    /* 00000376   4  jsr (ffff8320,A4) */
    c->pc = 0x00000376u;
    /* vector 133 */
    rc_push32(c, m, 0x0000037au);
    rc_depth++;
    c->pc = 0x0002149au;
    return;

L_37A:
    /* 0000037a   2  addq.w #4,A7 */
    c->pc = 0x0000037au;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_37C:
    /* 0000037c   4  move.w (10,A5),-(A7) */
    c->pc = 0x0000037cu;
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_380:
    /* 00000380   4  move.l (c,A5),-(A7) */
    c->pc = 0x00000380u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_384:
    /* 00000384   4  jsr (0000067c) */
    c->pc = 0x00000384u;
    rc_push32(c, m, 0x00000388u);
    rc_depth++;
    c->pc = 0x0000067cu;
    return;

L_388:
    /* 00000388   2  addq.w #6,A7 */
    c->pc = 0x00000388u;
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_38A:
    /* 0000038a   4  move.w D0,(fffffffc,A5) */
    c->pc = 0x0000038au;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_38E:
    /* 0000038e   4  clr.w (ffff83d0,A4) */
    c->pc = 0x0000038eu;
    rc_wr16(c, m, (c->a[4] - 0x7c30u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_392:
    /* 00000392   4  move.w (fffffffc,A5),D0 */
    c->pc = 0x00000392u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_396:
    /* 00000396   2  unlk A5 */
    c->pc = 0x00000396u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_398:
    /* 00000398   2  rts */
    c->pc = 0x00000398u;
    rc_ret(c, m);
    return;

L_39A:
    /* 0000039a   8  move.l #12d687,(fffffe78,A4) */
    c->pc = 0x0000039au;
    t0 = 0x0012d687u;
    rc_wr32(c, m, (c->a[4] - 0x188u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3A2:
    /* 000003a2   4  jsr (000007f4) */
    c->pc = 0x000003a2u;
    rc_push32(c, m, 0x000003a6u);
    rc_depth++;
    c->pc = 0x000007f4u;
    return;

L_3A6:
    /* 000003a6   4  move.w #4,-(A7) */
    c->pc = 0x000003a6u;
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3AA:
    /* 000003aa   4  pea (0000004b).l */
    c->pc = 0x000003aau;
    rc_push32(c, m, 0x0000004bu);

L_3AE:
    /* 000003ae   4  pea (000004cc) */
    c->pc = 0x000003aeu;
    rc_push32(c, m, 0x000004ccu);

L_3B2:
    /* 000003b2   4  jsr (0000093a) */
    c->pc = 0x000003b2u;
    rc_push32(c, m, 0x000003b6u);
    rc_depth++;
    c->pc = 0x0000093au;
    return;

L_3B6:
    /* 000003b6   4  lea (a,A7),A7 */
    c->pc = 0x000003b6u;
    c->a[7] = (c->a[7] + 0xau);

L_3BA:
    /* 000003ba   6  move.b (fffffe56,A4),(fffffffb,A5) */
    c->pc = 0x000003bau;
    t0 = rc_rd8(c, m, (c->a[4] - 0x1aau));
    rc_wr8(c, m, (c->a[5] - 0x5u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_3C0:
    /* 000003c0   6  cmpi.b #30,(fffffffb,A5) */
    c->pc = 0x000003c0u;
    t0 = rc_rd8(c, m, (c->a[5] - 0x5u));
    rc_cmp(c, RC_B, t0, 0x00000030u);

L_3C6:
    /* 000003c6   2  ble 00000412 */
    c->pc = 0x000003c6u;
    if (rc_cond(c, 15)) goto L_412;

L_3C8:
    /* 000003c8   6  cmpi.b #34,(fffffffb,A5) */
    c->pc = 0x000003c8u;
    t0 = rc_rd8(c, m, (c->a[5] - 0x5u));
    rc_cmp(c, RC_B, t0, 0x00000034u);

L_3CE:
    /* 000003ce   2  bge 00000412 */
    c->pc = 0x000003ceu;
    if (rc_cond(c, 12)) goto L_412;

L_3D0:
    /* 000003d0   4  pea (fffffe50,A4) */
    c->pc = 0x000003d0u;
    rc_push32(c, m, (c->a[4] - 0x1b0u));

L_3D4:
    /* 000003d4   4  jsr (ffff82ae,A4) */
    c->pc = 0x000003d4u;
    /* vector 114 */
    rc_push32(c, m, 0x000003d8u);
    rc_depth++;
    c->pc = 0x00020820u;
    return;

L_3D8:
    /* 000003d8   2  addq.w #4,A7 */
    c->pc = 0x000003d8u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_3DA:
    /* 000003da   4  cmp.w #6,D0 */
    c->pc = 0x000003dau;
    t0 = 0x00000006u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_3DE:
    /* 000003de   2  ble 00000412 */
    c->pc = 0x000003deu;
    if (rc_cond(c, 15)) goto L_412;

L_3E0:
    /* 000003e0   4  move.b (fffffffb,A5),D0 */
    c->pc = 0x000003e0u;
    t0 = rc_rd8(c, m, (c->a[5] - 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_3E4:
    /* 000003e4   2  ext.w D0 */
    c->pc = 0x000003e4u;
    rc_ext_w(c, 0);

L_3E6:
    /* 000003e6   4  sub.w #30,D0 */
    c->pc = 0x000003e6u;
    t0 = 0x00000030u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_3EA:
    /* 000003ea   2  move.w D0,-(A7) */
    c->pc = 0x000003eau;
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3EC:
    /* 000003ec   4  pea (000004e0) */
    c->pc = 0x000003ecu;
    rc_push32(c, m, 0x000004e0u);

L_3F0:
    /* 000003f0   4  pea (fffffff1,A5) */
    c->pc = 0x000003f0u;
    rc_push32(c, m, (c->a[5] - 0xfu));

L_3F4:
    /* 000003f4   4  jsr (ffff82d2,A4) */
    c->pc = 0x000003f4u;
    /* vector 120 */
    rc_push32(c, m, 0x000003f8u);
    rc_depth++;
    c->pc = 0x00020db6u;
    return;

L_3F8:
    /* 000003f8   4  lea (a,A7),A7 */
    c->pc = 0x000003f8u;
    c->a[7] = (c->a[7] + 0xau);

L_3FC:
    /* 000003fc   4  move.w #4,-(A7) */
    c->pc = 0x000003fcu;
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_400:
    /* 00000400   4  pea (0000005f).l */
    c->pc = 0x00000400u;
    rc_push32(c, m, 0x0000005fu);

L_404:
    /* 00000404   4  pea (fffffff1,A5) */
    c->pc = 0x00000404u;
    rc_push32(c, m, (c->a[5] - 0xfu));

L_408:
    /* 00000408   4  jsr (0000093a) */
    c->pc = 0x00000408u;
    rc_push32(c, m, 0x0000040cu);
    rc_depth++;
    c->pc = 0x0000093au;
    return;

L_40C:
    /* 0000040c   4  lea (a,A7),A7 */
    c->pc = 0x0000040cu;
    c->a[7] = (c->a[7] + 0xau);

L_410:
    /* 00000410   2  bra 00000426 */
    c->pc = 0x00000410u;
    goto L_426;

L_412:
    /* 00000412   4  move.w #4,-(A7) */
    c->pc = 0x00000412u;
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_416:
    /* 00000416   4  pea (0000005f).l */
    c->pc = 0x00000416u;
    rc_push32(c, m, 0x0000005fu);

L_41A:
    /* 0000041a   4  pea (fffffe50,A4) */
    c->pc = 0x0000041au;
    rc_push32(c, m, (c->a[4] - 0x1b0u));

L_41E:
    /* 0000041e   4  jsr (0000093a) */
    c->pc = 0x0000041eu;
    rc_push32(c, m, 0x00000422u);
    rc_depth++;
    c->pc = 0x0000093au;
    return;

L_422:
    /* 00000422   4  lea (a,A7),A7 */
    c->pc = 0x00000422u;
    c->a[7] = (c->a[7] + 0xau);

L_426:
    /* 00000426   4  tst.w (10,A5) */
    c->pc = 0x00000426u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_set_nzvc(c, t0, RC_W);

L_42A:
    /* 0000042a   2  bne 00000440 */
    c->pc = 0x0000042au;
    if (rc_cond(c, 6)) goto L_440;

L_42C:
    /* 0000042c   4  move.w #4,-(A7) */
    c->pc = 0x0000042cu;
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_430:
    /* 00000430   4  pea (00000073).l */
    c->pc = 0x00000430u;
    rc_push32(c, m, 0x00000073u);

L_434:
    /* 00000434   4  pea (000004e8) */
    c->pc = 0x00000434u;
    rc_push32(c, m, 0x000004e8u);

L_438:
    /* 00000438   4  jsr (0000093a) */
    c->pc = 0x00000438u;
    rc_push32(c, m, 0x0000043cu);
    rc_depth++;
    c->pc = 0x0000093au;
    return;

L_43C:
    /* 0000043c   4  lea (a,A7),A7 */
    c->pc = 0x0000043cu;
    c->a[7] = (c->a[7] + 0xau);

L_440:
    /* 00000440   6  move.w #1,(fffffffc,A5) */
    c->pc = 0x00000440u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_446:
    /* 00000446   4  tst.w (fffffffc,A5) */
    c->pc = 0x00000446u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_44A:
    /* 0000044a   2  beq 000004aa */
    c->pc = 0x0000044au;
    if (rc_cond(c, 7)) goto L_4AA;

L_44C:
    /* 0000044c   4  pea (fffffffe).l */
    c->pc = 0x0000044cu;
    rc_push32(c, m, 0xfffffffeu);

L_450:
    /* 00000450   4  move.l (8,A5),-(A7) */
    c->pc = 0x00000450u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_454:
    /* 00000454   4  jsr (ffff830e,A4) */
    c->pc = 0x00000454u;
    /* vector 130 */
    rc_push32(c, m, 0x00000458u);
    rc_depth++;
    c->pc = 0x0002144eu;
    return;

L_458:
    /* 00000458   2  addq.w #8,A7 */
    c->pc = 0x00000458u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_45A:
    /* 0000045a   4  move.l D0,(fffffe4c,A4) */
    c->pc = 0x0000045au;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x1b4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_45E:
    /* 0000045e   2  beq 00000494 */
    c->pc = 0x0000045eu;
    if (rc_cond(c, 7)) goto L_494;

L_460:
    /* 00000460   4  move.l (fffffe4c,A4),-(A7) */
    c->pc = 0x00000460u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x1b4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_464:
    /* 00000464   4  jsr (ffff82f6,A4) */
    c->pc = 0x00000464u;
    /* vector 126 */
    rc_push32(c, m, 0x00000468u);
    rc_depth++;
    c->pc = 0x00021410u;
    return;

L_468:
    /* 00000468   2  addq.w #4,A7 */
    c->pc = 0x00000468u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_46A:
    /* 0000046a   2  move.l D0,-(A7) */
    c->pc = 0x0000046au;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_46C:
    /* 0000046c   4  jsr (ffff8320,A4) */
    c->pc = 0x0000046cu;
    /* vector 133 */
    rc_push32(c, m, 0x00000470u);
    rc_depth++;
    c->pc = 0x0002149au;
    return;

L_470:
    /* 00000470   2  addq.w #4,A7 */
    c->pc = 0x00000470u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_472:
    /* 00000472   4  move.w (10,A5),-(A7) */
    c->pc = 0x00000472u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_476:
    /* 00000476   4  move.l (c,A5),-(A7) */
    c->pc = 0x00000476u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_47A:
    /* 0000047a   4  jsr (0000067c) */
    c->pc = 0x0000047au;
    rc_push32(c, m, 0x0000047eu);
    rc_depth++;
    c->pc = 0x0000067cu;
    return;

L_47E:
    /* 0000047e   2  addq.w #6,A7 */
    c->pc = 0x0000047eu;
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_480:
    /* 00000480   4  move.w D0,(fffffffc,A5) */
    c->pc = 0x00000480u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_484:
    /* 00000484   4  jsr (000008d6) */
    c->pc = 0x00000484u;
    rc_push32(c, m, 0x00000488u);
    rc_depth++;
    c->pc = 0x000008d6u;
    return;

L_488:
    /* 00000488   4  clr.w (ffff83d0,A4) */
    c->pc = 0x00000488u;
    rc_wr16(c, m, (c->a[4] - 0x7c30u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_48C:
    /* 0000048c   4  move.w (fffffffc,A5),D0 */
    c->pc = 0x0000048cu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_490:
    /* 00000490   4  bra 00000396 */
    c->pc = 0x00000490u;
    rc_tick();
    goto L_396;

L_494:
    /* 00000494   4  jsr (ffff816a,A4) */
    c->pc = 0x00000494u;
    /* vector 60 */
    rc_push32(c, m, 0x00000498u);
    rc_depth++;
    c->pc = 0x00011bf0u;
    return;

L_498:
    /* 00000498   4  tst.w (ffffb032,A4) */
    c->pc = 0x00000498u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fceu));
    rc_set_nzvc(c, t0, RC_W);

L_49C:
    /* 0000049c   2  beq 000004a8 */
    c->pc = 0x0000049cu;
    if (rc_cond(c, 7)) goto L_4A8;

L_49E:
    /* 0000049e   4  tst.w (10,A5) */
    c->pc = 0x0000049eu;
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_set_nzvc(c, t0, RC_W);

L_4A2:
    /* 000004a2   2  bne 000004a8 */
    c->pc = 0x000004a2u;
    if (rc_cond(c, 6)) goto L_4A8;

L_4A4:
    /* 000004a4   4  clr.w (fffffffc,A5) */
    c->pc = 0x000004a4u;
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4A8:
    /* 000004a8   2  bra 00000446 */
    c->pc = 0x000004a8u;
    rc_tick();
    goto L_446;

L_4AA:
    /* 000004aa   4  tst.w (ffffb032,A4) */
    c->pc = 0x000004aau;
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fceu));
    rc_set_nzvc(c, t0, RC_W);

L_4AE:
    /* 000004ae   2  beq 000004b6 */
    c->pc = 0x000004aeu;
    if (rc_cond(c, 7)) goto L_4B6;

L_4B0:
    /* 000004b0   4  jsr (ffff816a,A4) */
    c->pc = 0x000004b0u;
    /* vector 60 */
    rc_push32(c, m, 0x000004b4u);
    rc_depth++;
    c->pc = 0x00011bf0u;
    return;

L_4B4:
    /* 000004b4   2  bra 000004aa */
    c->pc = 0x000004b4u;
    rc_tick();
    goto L_4AA;

L_4B6:
    /* 000004b6   4  jsr (000008d6) */
    c->pc = 0x000004b6u;
    rc_push32(c, m, 0x000004bau);
    rc_depth++;
    c->pc = 0x000008d6u;
    return;

L_4BA:
    /* 000004ba   4  clr.w (ffff83d0,A4) */
    c->pc = 0x000004bau;
    rc_wr16(c, m, (c->a[4] - 0x7c30u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4BE:
    /* 000004be   4  clr.w (ffff83d2,A4) */
    c->pc = 0x000004beu;
    rc_wr16(c, m, (c->a[4] - 0x7c2eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4C2:
    /* 000004c2   2  moveq #0,D0 */
    c->pc = 0x000004c2u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_4C4:
    /* 000004c4   4  bra 00000396 */
    c->pc = 0x000004c4u;
    rc_tick();
    goto L_396;

}
