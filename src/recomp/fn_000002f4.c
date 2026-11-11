/* fn_000002f4 - 468 byte(s), 131 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000002f4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000002f4u): goto L_2F4;
    case RC_ADDR(0x000002f8u): goto L_2F8;
    case RC_ADDR(0x000002feu): goto L_2FE;
    case RC_ADDR(0x00000302u): goto L_302;
    case RC_ADDR(0x00000304u): goto L_304;
    case RC_ADDR(0x00000308u): goto L_308;
    case RC_ADDR(0x0000030cu): goto L_30C;
    case RC_ADDR(0x00000312u): goto L_312;
    case RC_ADDR(0x00000314u): goto L_314;
    case RC_ADDR(0x00000316u): goto L_316;
    case RC_ADDR(0x0000031au): goto L_31A;
    case RC_ADDR(0x0000031eu): goto L_31E;
    case RC_ADDR(0x00000322u): goto L_322;
    case RC_ADDR(0x00000324u): goto L_324;
    case RC_ADDR(0x00000326u): goto L_326;
    case RC_ADDR(0x0000032au): goto L_32A;
    case RC_ADDR(0x0000032eu): goto L_32E;
    case RC_ADDR(0x00000330u): goto L_330;
    case RC_ADDR(0x00000334u): goto L_334;
    case RC_ADDR(0x00000338u): goto L_338;
    case RC_ADDR(0x0000033eu): goto L_33E;
    case RC_ADDR(0x00000342u): goto L_342;
    case RC_ADDR(0x00000344u): goto L_344;
    case RC_ADDR(0x00000346u): goto L_346;
    case RC_ADDR(0x0000034au): goto L_34A;
    case RC_ADDR(0x0000034eu): goto L_34E;
    case RC_ADDR(0x00000352u): goto L_352;
    case RC_ADDR(0x00000356u): goto L_356;
    case RC_ADDR(0x0000035au): goto L_35A;
    case RC_ADDR(0x0000035eu): goto L_35E;
    case RC_ADDR(0x00000362u): goto L_362;
    case RC_ADDR(0x00000364u): goto L_364;
    case RC_ADDR(0x00000368u): goto L_368;
    case RC_ADDR(0x0000036au): goto L_36A;
    case RC_ADDR(0x0000036eu): goto L_36E;
    case RC_ADDR(0x00000372u): goto L_372;
    case RC_ADDR(0x00000374u): goto L_374;
    case RC_ADDR(0x00000376u): goto L_376;
    case RC_ADDR(0x0000037au): goto L_37A;
    case RC_ADDR(0x0000037cu): goto L_37C;
    case RC_ADDR(0x00000380u): goto L_380;
    case RC_ADDR(0x00000384u): goto L_384;
    case RC_ADDR(0x00000388u): goto L_388;
    case RC_ADDR(0x0000038au): goto L_38A;
    case RC_ADDR(0x0000038eu): goto L_38E;
    case RC_ADDR(0x00000392u): goto L_392;
    case RC_ADDR(0x00000396u): goto L_396;
    case RC_ADDR(0x00000398u): goto L_398;
    case RC_ADDR(0x0000039au): goto L_39A;
    case RC_ADDR(0x000003a2u): goto L_3A2;
    case RC_ADDR(0x000003a6u): goto L_3A6;
    case RC_ADDR(0x000003aau): goto L_3AA;
    case RC_ADDR(0x000003aeu): goto L_3AE;
    case RC_ADDR(0x000003b2u): goto L_3B2;
    case RC_ADDR(0x000003b6u): goto L_3B6;
    case RC_ADDR(0x000003bau): goto L_3BA;
    case RC_ADDR(0x000003c0u): goto L_3C0;
    case RC_ADDR(0x000003c6u): goto L_3C6;
    case RC_ADDR(0x000003c8u): goto L_3C8;
    case RC_ADDR(0x000003ceu): goto L_3CE;
    case RC_ADDR(0x000003d0u): goto L_3D0;
    case RC_ADDR(0x000003d4u): goto L_3D4;
    case RC_ADDR(0x000003d8u): goto L_3D8;
    case RC_ADDR(0x000003dau): goto L_3DA;
    case RC_ADDR(0x000003deu): goto L_3DE;
    case RC_ADDR(0x000003e0u): goto L_3E0;
    case RC_ADDR(0x000003e4u): goto L_3E4;
    case RC_ADDR(0x000003e6u): goto L_3E6;
    case RC_ADDR(0x000003eau): goto L_3EA;
    case RC_ADDR(0x000003ecu): goto L_3EC;
    case RC_ADDR(0x000003f0u): goto L_3F0;
    case RC_ADDR(0x000003f4u): goto L_3F4;
    case RC_ADDR(0x000003f8u): goto L_3F8;
    case RC_ADDR(0x000003fcu): goto L_3FC;
    case RC_ADDR(0x00000400u): goto L_400;
    case RC_ADDR(0x00000404u): goto L_404;
    case RC_ADDR(0x00000408u): goto L_408;
    case RC_ADDR(0x0000040cu): goto L_40C;
    case RC_ADDR(0x00000410u): goto L_410;
    case RC_ADDR(0x00000412u): goto L_412;
    case RC_ADDR(0x00000416u): goto L_416;
    case RC_ADDR(0x0000041au): goto L_41A;
    case RC_ADDR(0x0000041eu): goto L_41E;
    case RC_ADDR(0x00000422u): goto L_422;
    case RC_ADDR(0x00000426u): goto L_426;
    case RC_ADDR(0x0000042au): goto L_42A;
    case RC_ADDR(0x0000042cu): goto L_42C;
    case RC_ADDR(0x00000430u): goto L_430;
    case RC_ADDR(0x00000434u): goto L_434;
    case RC_ADDR(0x00000438u): goto L_438;
    case RC_ADDR(0x0000043cu): goto L_43C;
    case RC_ADDR(0x00000440u): goto L_440;
    case RC_ADDR(0x00000446u): goto L_446;
    case RC_ADDR(0x0000044au): goto L_44A;
    case RC_ADDR(0x0000044cu): goto L_44C;
    case RC_ADDR(0x00000450u): goto L_450;
    case RC_ADDR(0x00000454u): goto L_454;
    case RC_ADDR(0x00000458u): goto L_458;
    case RC_ADDR(0x0000045au): goto L_45A;
    case RC_ADDR(0x0000045eu): goto L_45E;
    case RC_ADDR(0x00000460u): goto L_460;
    case RC_ADDR(0x00000464u): goto L_464;
    case RC_ADDR(0x00000468u): goto L_468;
    case RC_ADDR(0x0000046au): goto L_46A;
    case RC_ADDR(0x0000046cu): goto L_46C;
    case RC_ADDR(0x00000470u): goto L_470;
    case RC_ADDR(0x00000472u): goto L_472;
    case RC_ADDR(0x00000476u): goto L_476;
    case RC_ADDR(0x0000047au): goto L_47A;
    case RC_ADDR(0x0000047eu): goto L_47E;
    case RC_ADDR(0x00000480u): goto L_480;
    case RC_ADDR(0x00000484u): goto L_484;
    case RC_ADDR(0x00000488u): goto L_488;
    case RC_ADDR(0x0000048cu): goto L_48C;
    case RC_ADDR(0x00000490u): goto L_490;
    case RC_ADDR(0x00000494u): goto L_494;
    case RC_ADDR(0x00000498u): goto L_498;
    case RC_ADDR(0x0000049cu): goto L_49C;
    case RC_ADDR(0x0000049eu): goto L_49E;
    case RC_ADDR(0x000004a2u): goto L_4A2;
    case RC_ADDR(0x000004a4u): goto L_4A4;
    case RC_ADDR(0x000004a8u): goto L_4A8;
    case RC_ADDR(0x000004aau): goto L_4AA;
    case RC_ADDR(0x000004aeu): goto L_4AE;
    case RC_ADDR(0x000004b0u): goto L_4B0;
    case RC_ADDR(0x000004b4u): goto L_4B4;
    case RC_ADDR(0x000004b6u): goto L_4B6;
    case RC_ADDR(0x000004bau): goto L_4BA;
    case RC_ADDR(0x000004beu): goto L_4BE;
    case RC_ADDR(0x000004c2u): goto L_4C2;
    case RC_ADDR(0x000004c4u): goto L_4C4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2F4:
    /* 000002f4   4  link.w A5,#fffffff0 */
    c->pc = RC_ADDR(0x000002f4u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x10u;

L_2F8:
    /* 000002f8   6  move.w #1,(ffff83d0,A4) */
    c->pc = RC_ADDR(0x000002f8u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c30u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2FE:
    /* 000002fe   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000002feu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_302:
    /* 00000302   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00000302u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_304:
    /* 00000304   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00000304u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_308:
    /* 00000308   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00000308u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_30C:
    /* 0000030c   6  cmpi.b #3a,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000030cu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_B, t0, 0x0000003au);

L_312:
    /* 00000312   2  beq 00000344 */
    c->pc = RC_ADDR(0x00000312u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_344;

L_314:
    /* 00000314   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00000314u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_316:
    /* 00000316   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00000316u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_31A:
    /* 0000031a   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000031au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_31E:
    /* 0000031e   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000031eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_322:
    /* 00000322   2  beq 00000344 */
    c->pc = RC_ADDR(0x00000322u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_344;

L_324:
    /* 00000324   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00000324u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_326:
    /* 00000326   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00000326u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_32A:
    /* 0000032a   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000032au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_32E:
    /* 0000032e   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0000032eu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_330:
    /* 00000330   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00000330u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_334:
    /* 00000334   4  lea (fffffe50,A4),A1 */
    c->pc = RC_ADDR(0x00000334u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x1b0u);

L_338:
    /* 00000338   6  move.b (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00000338u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr8(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_33E:
    /* 0000033e   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000033eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_342:
    /* 00000342   2  bra 00000302 */
    c->pc = RC_ADDR(0x00000342u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_302;

L_344:
    /* 00000344   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00000344u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_346:
    /* 00000346   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00000346u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_34A:
    /* 0000034a   4  lea (fffffe50,A4),A0 */
    c->pc = RC_ADDR(0x0000034au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x1b0u);

L_34E:
    /* 0000034e   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000034eu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_352:
    /* 00000352   4  clr.l (fffffe4c,A4) */
    c->pc = RC_ADDR(0x00000352u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x1b4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_356:
    /* 00000356   4  pea (fffffffe).l */
    c->pc = RC_ADDR(0x00000356u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xfffffffeu);

L_35A:
    /* 0000035a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000035au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_35E:
    /* 0000035e   4  jsr (ffff830e,A4) */
    c->pc = RC_ADDR(0x0000035eu);
    rc_step(c, m, 18);
    /* vector 130 */
    rc_push32(c, m, RC_ADDR(0x00000362u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d64u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002144au);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002144eu);
    return;

L_362:
    /* 00000362   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000362u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_364:
    /* 00000364   4  move.l D0,(fffffe4c,A4) */
    c->pc = RC_ADDR(0x00000364u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x1b4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_368:
    /* 00000368   2  beq 0000039a */
    c->pc = RC_ADDR(0x00000368u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_39A;

L_36A:
    /* 0000036a   4  move.l (fffffe4c,A4),-(A7) */
    c->pc = RC_ADDR(0x0000036au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1b4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_36E:
    /* 0000036e   4  jsr (ffff82f6,A4) */
    c->pc = RC_ADDR(0x0000036eu);
    rc_step(c, m, 18);
    /* vector 126 */
    rc_push32(c, m, RC_ADDR(0x00000372u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d4cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002140cu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021410u);
    return;

L_372:
    /* 00000372   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000372u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_374:
    /* 00000374   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00000374u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_376:
    /* 00000376   4  jsr (ffff8320,A4) */
    c->pc = RC_ADDR(0x00000376u);
    rc_step(c, m, 18);
    /* vector 133 */
    rc_push32(c, m, RC_ADDR(0x0000037au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d76u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021496u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002149au);
    return;

L_37A:
    /* 0000037a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000037au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_37C:
    /* 0000037c   4  move.w (10,A5),-(A7) */
    c->pc = RC_ADDR(0x0000037cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_380:
    /* 00000380   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00000380u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_384:
    /* 00000384   4  jsr (0000067c) */
    c->pc = RC_ADDR(0x00000384u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000388u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000067cu);
    return;

L_388:
    /* 00000388   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00000388u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_38A:
    /* 0000038a   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000038au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_38E:
    /* 0000038e   4  clr.w (ffff83d0,A4) */
    c->pc = RC_ADDR(0x0000038eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c30u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_392:
    /* 00000392   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00000392u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_396:
    /* 00000396   2  unlk A5 */
    c->pc = RC_ADDR(0x00000396u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_398:
    /* 00000398   2  rts */
    c->pc = RC_ADDR(0x00000398u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_39A:
    /* 0000039a   8  move.l #12d687,(fffffe78,A4) */
    c->pc = RC_ADDR(0x0000039au);
    rc_step(c, m, 24);
    t0 = 0x0012d687u;
    rc_wr32(c, m, (c->a[4] - 0x188u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3A2:
    /* 000003a2   4  jsr (000007f4) */
    c->pc = RC_ADDR(0x000003a2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000003a6u));
    rc_depth++;
    c->pc = RC_ADDR(0x000007f4u);
    return;

L_3A6:
    /* 000003a6   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x000003a6u);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3AA:
    /* 000003aa   4  pea (0000004b).l */
    c->pc = RC_ADDR(0x000003aau);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000004bu);

L_3AE:
    /* 000003ae   4  pea (000004cc) */
    c->pc = RC_ADDR(0x000003aeu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000004ccu));

L_3B2:
    /* 000003b2   4  jsr (0000093a) */
    c->pc = RC_ADDR(0x000003b2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000003b6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000093au);
    return;

L_3B6:
    /* 000003b6   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000003b6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_3BA:
    /* 000003ba   6  move.b (fffffe56,A4),(fffffffb,A5) */
    c->pc = RC_ADDR(0x000003bau);
    rc_step(c, m, 20);
    t0 = rc_rd8(c, m, (c->a[4] - 0x1aau));
    rc_wr8(c, m, (c->a[5] - 0x5u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_3C0:
    /* 000003c0   6  cmpi.b #30,(fffffffb,A5) */
    c->pc = RC_ADDR(0x000003c0u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[5] - 0x5u));
    rc_cmp(c, RC_B, t0, 0x00000030u);

L_3C6:
    /* 000003c6   2  ble 00000412 */
    c->pc = RC_ADDR(0x000003c6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_412;

L_3C8:
    /* 000003c8   6  cmpi.b #34,(fffffffb,A5) */
    c->pc = RC_ADDR(0x000003c8u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[5] - 0x5u));
    rc_cmp(c, RC_B, t0, 0x00000034u);

L_3CE:
    /* 000003ce   2  bge 00000412 */
    c->pc = RC_ADDR(0x000003ceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_412;

L_3D0:
    /* 000003d0   4  pea (fffffe50,A4) */
    c->pc = RC_ADDR(0x000003d0u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x1b0u));

L_3D4:
    /* 000003d4   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x000003d4u);
    rc_step(c, m, 18);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x000003d8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020820u);
    return;

L_3D8:
    /* 000003d8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000003d8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_3DA:
    /* 000003da   4  cmp.w #6,D0 */
    c->pc = RC_ADDR(0x000003dau);
    rc_step(c, m, 8);
    t0 = 0x00000006u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_3DE:
    /* 000003de   2  ble 00000412 */
    c->pc = RC_ADDR(0x000003deu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_412;

L_3E0:
    /* 000003e0   4  move.b (fffffffb,A5),D0 */
    c->pc = RC_ADDR(0x000003e0u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_3E4:
    /* 000003e4   2  ext.w D0 */
    c->pc = RC_ADDR(0x000003e4u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_3E6:
    /* 000003e6   4  sub.w #30,D0 */
    c->pc = RC_ADDR(0x000003e6u);
    rc_step(c, m, 10);
    t0 = 0x00000030u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_3EA:
    /* 000003ea   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000003eau);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3EC:
    /* 000003ec   4  pea (000004e0) */
    c->pc = RC_ADDR(0x000003ecu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000004e0u));

L_3F0:
    /* 000003f0   4  pea (fffffff1,A5) */
    c->pc = RC_ADDR(0x000003f0u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0xfu));

L_3F4:
    /* 000003f4   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x000003f4u);
    rc_step(c, m, 18);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x000003f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d28u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020db6u);
    return;

L_3F8:
    /* 000003f8   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000003f8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_3FC:
    /* 000003fc   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x000003fcu);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_400:
    /* 00000400   4  pea (0000005f).l */
    c->pc = RC_ADDR(0x00000400u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000005fu);

L_404:
    /* 00000404   4  pea (fffffff1,A5) */
    c->pc = RC_ADDR(0x00000404u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0xfu));

L_408:
    /* 00000408   4  jsr (0000093a) */
    c->pc = RC_ADDR(0x00000408u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000040cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000093au);
    return;

L_40C:
    /* 0000040c   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000040cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_410:
    /* 00000410   2  bra 00000426 */
    c->pc = RC_ADDR(0x00000410u);
    rc_step(c, m, 10);
    goto L_426;

L_412:
    /* 00000412   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x00000412u);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_416:
    /* 00000416   4  pea (0000005f).l */
    c->pc = RC_ADDR(0x00000416u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000005fu);

L_41A:
    /* 0000041a   4  pea (fffffe50,A4) */
    c->pc = RC_ADDR(0x0000041au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x1b0u));

L_41E:
    /* 0000041e   4  jsr (0000093a) */
    c->pc = RC_ADDR(0x0000041eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000422u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000093au);
    return;

L_422:
    /* 00000422   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00000422u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_426:
    /* 00000426   4  tst.w (10,A5) */
    c->pc = RC_ADDR(0x00000426u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_set_nzvc(c, t0, RC_W);

L_42A:
    /* 0000042a   2  bne 00000440 */
    c->pc = RC_ADDR(0x0000042au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_440;

L_42C:
    /* 0000042c   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x0000042cu);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_430:
    /* 00000430   4  pea (00000073).l */
    c->pc = RC_ADDR(0x00000430u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000073u);

L_434:
    /* 00000434   4  pea (000004e8) */
    c->pc = RC_ADDR(0x00000434u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000004e8u));

L_438:
    /* 00000438   4  jsr (0000093a) */
    c->pc = RC_ADDR(0x00000438u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000043cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000093au);
    return;

L_43C:
    /* 0000043c   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000043cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_440:
    /* 00000440   6  move.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00000440u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_446:
    /* 00000446   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00000446u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_44A:
    /* 0000044a   2  beq 000004aa */
    c->pc = RC_ADDR(0x0000044au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4AA;

L_44C:
    /* 0000044c   4  pea (fffffffe).l */
    c->pc = RC_ADDR(0x0000044cu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xfffffffeu);

L_450:
    /* 00000450   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00000450u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_454:
    /* 00000454   4  jsr (ffff830e,A4) */
    c->pc = RC_ADDR(0x00000454u);
    rc_step(c, m, 18);
    /* vector 130 */
    rc_push32(c, m, RC_ADDR(0x00000458u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d64u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002144au);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002144eu);
    return;

L_458:
    /* 00000458   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000458u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_45A:
    /* 0000045a   4  move.l D0,(fffffe4c,A4) */
    c->pc = RC_ADDR(0x0000045au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x1b4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_45E:
    /* 0000045e   2  beq 00000494 */
    c->pc = RC_ADDR(0x0000045eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_494;

L_460:
    /* 00000460   4  move.l (fffffe4c,A4),-(A7) */
    c->pc = RC_ADDR(0x00000460u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1b4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_464:
    /* 00000464   4  jsr (ffff82f6,A4) */
    c->pc = RC_ADDR(0x00000464u);
    rc_step(c, m, 18);
    /* vector 126 */
    rc_push32(c, m, RC_ADDR(0x00000468u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d4cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002140cu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021410u);
    return;

L_468:
    /* 00000468   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000468u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_46A:
    /* 0000046a   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000046au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_46C:
    /* 0000046c   4  jsr (ffff8320,A4) */
    c->pc = RC_ADDR(0x0000046cu);
    rc_step(c, m, 18);
    /* vector 133 */
    rc_push32(c, m, RC_ADDR(0x00000470u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d76u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021496u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002149au);
    return;

L_470:
    /* 00000470   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000470u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_472:
    /* 00000472   4  move.w (10,A5),-(A7) */
    c->pc = RC_ADDR(0x00000472u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_476:
    /* 00000476   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00000476u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_47A:
    /* 0000047a   4  jsr (0000067c) */
    c->pc = RC_ADDR(0x0000047au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000047eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000067cu);
    return;

L_47E:
    /* 0000047e   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0000047eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_480:
    /* 00000480   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00000480u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_484:
    /* 00000484   4  jsr (000008d6) */
    c->pc = RC_ADDR(0x00000484u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000488u));
    rc_depth++;
    c->pc = RC_ADDR(0x000008d6u);
    return;

L_488:
    /* 00000488   4  clr.w (ffff83d0,A4) */
    c->pc = RC_ADDR(0x00000488u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c30u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_48C:
    /* 0000048c   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000048cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_490:
    /* 00000490   4  bra 00000396 */
    c->pc = RC_ADDR(0x00000490u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_396;

L_494:
    /* 00000494   4  jsr (ffff816a,A4) */
    c->pc = RC_ADDR(0x00000494u);
    rc_step(c, m, 18);
    /* vector 60 */
    rc_push32(c, m, RC_ADDR(0x00000498u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011bf0u);
    return;

L_498:
    /* 00000498   4  tst.w (ffffb032,A4) */
    c->pc = RC_ADDR(0x00000498u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fceu));
    rc_set_nzvc(c, t0, RC_W);

L_49C:
    /* 0000049c   2  beq 000004a8 */
    c->pc = RC_ADDR(0x0000049cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4A8;

L_49E:
    /* 0000049e   4  tst.w (10,A5) */
    c->pc = RC_ADDR(0x0000049eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_set_nzvc(c, t0, RC_W);

L_4A2:
    /* 000004a2   2  bne 000004a8 */
    c->pc = RC_ADDR(0x000004a2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_4A8;

L_4A4:
    /* 000004a4   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x000004a4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4A8:
    /* 000004a8   2  bra 00000446 */
    c->pc = RC_ADDR(0x000004a8u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_446;

L_4AA:
    /* 000004aa   4  tst.w (ffffb032,A4) */
    c->pc = RC_ADDR(0x000004aau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fceu));
    rc_set_nzvc(c, t0, RC_W);

L_4AE:
    /* 000004ae   2  beq 000004b6 */
    c->pc = RC_ADDR(0x000004aeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4B6;

L_4B0:
    /* 000004b0   4  jsr (ffff816a,A4) */
    c->pc = RC_ADDR(0x000004b0u);
    rc_step(c, m, 18);
    /* vector 60 */
    rc_push32(c, m, RC_ADDR(0x000004b4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011bf0u);
    return;

L_4B4:
    /* 000004b4   2  bra 000004aa */
    c->pc = RC_ADDR(0x000004b4u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_4AA;

L_4B6:
    /* 000004b6   4  jsr (000008d6) */
    c->pc = RC_ADDR(0x000004b6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000004bau));
    rc_depth++;
    c->pc = RC_ADDR(0x000008d6u);
    return;

L_4BA:
    /* 000004ba   4  clr.w (ffff83d0,A4) */
    c->pc = RC_ADDR(0x000004bau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c30u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4BE:
    /* 000004be   4  clr.w (ffff83d2,A4) */
    c->pc = RC_ADDR(0x000004beu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c2eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4C2:
    /* 000004c2   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000004c2u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_4C4:
    /* 000004c4   4  bra 00000396 */
    c->pc = RC_ADDR(0x000004c4u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_396;

}
