/* fn_00014300 - 386 byte(s), 115 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00014300(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00014300u): goto L_14300;
    case RC_ADDR(0x00014304u): goto L_14304;
    case RC_ADDR(0x00014308u): goto L_14308;
    case RC_ADDR(0x0001430au): goto L_1430A;
    case RC_ADDR(0x0001430eu): goto L_1430E;
    case RC_ADDR(0x00014312u): goto L_14312;
    case RC_ADDR(0x00014316u): goto L_14316;
    case RC_ADDR(0x0001431au): goto L_1431A;
    case RC_ADDR(0x0001431eu): goto L_1431E;
    case RC_ADDR(0x00014320u): goto L_14320;
    case RC_ADDR(0x00014324u): goto L_14324;
    case RC_ADDR(0x00014328u): goto L_14328;
    case RC_ADDR(0x0001432cu): goto L_1432C;
    case RC_ADDR(0x00014332u): goto L_14332;
    case RC_ADDR(0x00014334u): goto L_14334;
    case RC_ADDR(0x00014338u): goto L_14338;
    case RC_ADDR(0x0001433cu): goto L_1433C;
    case RC_ADDR(0x00014340u): goto L_14340;
    case RC_ADDR(0x00014344u): goto L_14344;
    case RC_ADDR(0x00014348u): goto L_14348;
    case RC_ADDR(0x0001434cu): goto L_1434C;
    case RC_ADDR(0x00014350u): goto L_14350;
    case RC_ADDR(0x00014354u): goto L_14354;
    case RC_ADDR(0x00014358u): goto L_14358;
    case RC_ADDR(0x0001435au): goto L_1435A;
    case RC_ADDR(0x0001435eu): goto L_1435E;
    case RC_ADDR(0x00014362u): goto L_14362;
    case RC_ADDR(0x00014366u): goto L_14366;
    case RC_ADDR(0x0001436cu): goto L_1436C;
    case RC_ADDR(0x0001436eu): goto L_1436E;
    case RC_ADDR(0x00014372u): goto L_14372;
    case RC_ADDR(0x00014376u): goto L_14376;
    case RC_ADDR(0x0001437au): goto L_1437A;
    case RC_ADDR(0x0001437eu): goto L_1437E;
    case RC_ADDR(0x00014382u): goto L_14382;
    case RC_ADDR(0x00014386u): goto L_14386;
    case RC_ADDR(0x00014388u): goto L_14388;
    case RC_ADDR(0x0001438au): goto L_1438A;
    case RC_ADDR(0x0001438eu): goto L_1438E;
    case RC_ADDR(0x00014392u): goto L_14392;
    case RC_ADDR(0x00014396u): goto L_14396;
    case RC_ADDR(0x00014398u): goto L_14398;
    case RC_ADDR(0x0001439cu): goto L_1439C;
    case RC_ADDR(0x0001439eu): goto L_1439E;
    case RC_ADDR(0x000143a0u): goto L_143A0;
    case RC_ADDR(0x000143a4u): goto L_143A4;
    case RC_ADDR(0x000143a6u): goto L_143A6;
    case RC_ADDR(0x000143a8u): goto L_143A8;
    case RC_ADDR(0x000143acu): goto L_143AC;
    case RC_ADDR(0x000143b2u): goto L_143B2;
    case RC_ADDR(0x000143b6u): goto L_143B6;
    case RC_ADDR(0x000143bcu): goto L_143BC;
    case RC_ADDR(0x000143c0u): goto L_143C0;
    case RC_ADDR(0x000143c4u): goto L_143C4;
    case RC_ADDR(0x000143c8u): goto L_143C8;
    case RC_ADDR(0x000143ccu): goto L_143CC;
    case RC_ADDR(0x000143d0u): goto L_143D0;
    case RC_ADDR(0x000143d2u): goto L_143D2;
    case RC_ADDR(0x000143d4u): goto L_143D4;
    case RC_ADDR(0x000143d8u): goto L_143D8;
    case RC_ADDR(0x000143dau): goto L_143DA;
    case RC_ADDR(0x000143dcu): goto L_143DC;
    case RC_ADDR(0x000143deu): goto L_143DE;
    case RC_ADDR(0x000143e0u): goto L_143E0;
    case RC_ADDR(0x000143e4u): goto L_143E4;
    case RC_ADDR(0x000143e8u): goto L_143E8;
    case RC_ADDR(0x000143eau): goto L_143EA;
    case RC_ADDR(0x000143ecu): goto L_143EC;
    case RC_ADDR(0x000143eeu): goto L_143EE;
    case RC_ADDR(0x000143f2u): goto L_143F2;
    case RC_ADDR(0x000143f4u): goto L_143F4;
    case RC_ADDR(0x000143f6u): goto L_143F6;
    case RC_ADDR(0x000143f8u): goto L_143F8;
    case RC_ADDR(0x000143fcu): goto L_143FC;
    case RC_ADDR(0x00014400u): goto L_14400;
    case RC_ADDR(0x00014404u): goto L_14404;
    case RC_ADDR(0x00014408u): goto L_14408;
    case RC_ADDR(0x0001440cu): goto L_1440C;
    case RC_ADDR(0x00014410u): goto L_14410;
    case RC_ADDR(0x00014412u): goto L_14412;
    case RC_ADDR(0x00014414u): goto L_14414;
    case RC_ADDR(0x00014418u): goto L_14418;
    case RC_ADDR(0x0001441au): goto L_1441A;
    case RC_ADDR(0x0001441cu): goto L_1441C;
    case RC_ADDR(0x0001441eu): goto L_1441E;
    case RC_ADDR(0x00014420u): goto L_14420;
    case RC_ADDR(0x00014424u): goto L_14424;
    case RC_ADDR(0x00014428u): goto L_14428;
    case RC_ADDR(0x0001442au): goto L_1442A;
    case RC_ADDR(0x0001442cu): goto L_1442C;
    case RC_ADDR(0x0001442eu): goto L_1442E;
    case RC_ADDR(0x00014432u): goto L_14432;
    case RC_ADDR(0x00014434u): goto L_14434;
    case RC_ADDR(0x00014436u): goto L_14436;
    case RC_ADDR(0x00014438u): goto L_14438;
    case RC_ADDR(0x0001443cu): goto L_1443C;
    case RC_ADDR(0x00014440u): goto L_14440;
    case RC_ADDR(0x00014442u): goto L_14442;
    case RC_ADDR(0x00014446u): goto L_14446;
    case RC_ADDR(0x00014448u): goto L_14448;
    case RC_ADDR(0x0001444au): goto L_1444A;
    case RC_ADDR(0x0001444eu): goto L_1444E;
    case RC_ADDR(0x00014452u): goto L_14452;
    case RC_ADDR(0x00014456u): goto L_14456;
    case RC_ADDR(0x0001445au): goto L_1445A;
    case RC_ADDR(0x00014460u): goto L_14460;
    case RC_ADDR(0x00014464u): goto L_14464;
    case RC_ADDR(0x00014466u): goto L_14466;
    case RC_ADDR(0x00014468u): goto L_14468;
    case RC_ADDR(0x0001446cu): goto L_1446C;
    case RC_ADDR(0x00014470u): goto L_14470;
    case RC_ADDR(0x00014474u): goto L_14474;
    case RC_ADDR(0x00014478u): goto L_14478;
    case RC_ADDR(0x0001447eu): goto L_1447E;
    case RC_ADDR(0x00014480u): goto L_14480;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_14300:
    /* 00014300   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00014300u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_14304:
    /* 00014304   4  tst.w (6c4,A4) */
    c->pc = RC_ADDR(0x00014304u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6c4u));
    rc_set_nzvc(c, t0, RC_W);

L_14308:
    /* 00014308   2  beq 00014382 */
    c->pc = RC_ADDR(0x00014308u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_14382;

L_1430A:
    /* 0001430a   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001430au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1430E:
    /* 0001430e   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x0001430eu);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_14312:
    /* 00014312   4  lea (fffffb24,A4),A0 */
    c->pc = RC_ADDR(0x00014312u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4dcu);

L_14316:
    /* 00014316   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00014316u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1431A:
    /* 0001431a   4  cmp.w (6ee,A4),D1 */
    c->pc = RC_ADDR(0x0001431au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6eeu));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1431E:
    /* 0001431e   2  bcs 00014334 */
    c->pc = RC_ADDR(0x0001431eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) goto L_14334;

L_14320:
    /* 00014320   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00014320u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14324:
    /* 00014324   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014324u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_14328:
    /* 00014328   4  lea (fffffb2c,A4),A0 */
    c->pc = RC_ADDR(0x00014328u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4d4u);

L_1432C:
    /* 0001432c   6  move.w #4b00,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001432cu);
    rc_step(c, m, 18);
    t0 = 0x00004b00u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14332:
    /* 00014332   2  bra 00014344 */
    c->pc = RC_ADDR(0x00014332u);
    rc_step(c, m, 10);
    goto L_14344;

L_14334:
    /* 00014334   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00014334u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14338:
    /* 00014338   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014338u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_1433C:
    /* 0001433c   4  lea (fffffb2c,A4),A0 */
    c->pc = RC_ADDR(0x0001433cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4d4u);

L_14340:
    /* 00014340   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014340u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14344:
    /* 00014344   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00014344u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14348:
    /* 00014348   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014348u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_1434C:
    /* 0001434c   4  lea (fffffb26,A4),A0 */
    c->pc = RC_ADDR(0x0001434cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4dau);

L_14350:
    /* 00014350   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00014350u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14354:
    /* 00014354   4  cmp.w (6f0,A4),D1 */
    c->pc = RC_ADDR(0x00014354u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6f0u));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14358:
    /* 00014358   2  bcs 0001436e */
    c->pc = RC_ADDR(0x00014358u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) goto L_1436E;

L_1435A:
    /* 0001435a   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001435au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1435E:
    /* 0001435e   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x0001435eu);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_14362:
    /* 00014362   4  lea (fffffb2e,A4),A0 */
    c->pc = RC_ADDR(0x00014362u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4d2u);

L_14366:
    /* 00014366   6  move.w #2ee0,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014366u);
    rc_step(c, m, 18);
    t0 = 0x00002ee0u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1436C:
    /* 0001436c   2  bra 0001437e */
    c->pc = RC_ADDR(0x0001436cu);
    rc_step(c, m, 10);
    goto L_1437E;

L_1436E:
    /* 0001436e   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001436eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14372:
    /* 00014372   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014372u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_14376:
    /* 00014376   4  lea (fffffb2e,A4),A0 */
    c->pc = RC_ADDR(0x00014376u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4d2u);

L_1437A:
    /* 0001437a   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001437au);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1437E:
    /* 0001437e   4  bra 0001447e */
    c->pc = RC_ADDR(0x0001437eu);
    rc_step(c, m, 10);
    goto L_1447E;

L_14382:
    /* 00014382   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x00014382u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14386:
    /* 00014386   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014386u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14388:
    /* 00014388   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00014388u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1438A:
    /* 0001438a   4  lea (ffff84a2,A4),A0 */
    c->pc = RC_ADDR(0x0001438au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7b5eu);

L_1438E:
    /* 0001438e   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001438eu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_14392:
    /* 00014392   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00014392u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14396:
    /* 00014396   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014396u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14398:
    /* 00014398   4  divs.w #a,D0 */
    c->pc = RC_ADDR(0x00014398u);
    rc_step(c, m, 162);
    t0 = 0x0000000au;
    rc_divs(c, m, 0, t0);

L_1439C:
    /* 0001439c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001439cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1439E:
    /* 0001439e   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0001439eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_143A0:
    /* 000143a0   4  move.b (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x000143a0u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_143A4:
    /* 000143a4   2  ext.w D0 */
    c->pc = RC_ADDR(0x000143a4u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_143A6:
    /* 000143a6   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x000143a6u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_143A8:
    /* 000143a8   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000143a8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_143AC:
    /* 000143ac   6  cmpi.w #7,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000143acu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_143B2:
    /* 000143b2   4  ble 00014442 */
    c->pc = RC_ADDR(0x000143b2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_14442;

L_143B6:
    /* 000143b6   6  cmpi.w #b,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000143b6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000000bu);

L_143BC:
    /* 000143bc   4  bge 00014442 */
    c->pc = RC_ADDR(0x000143bcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_14442;

L_143C0:
    /* 000143c0   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000143c0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_143C4:
    /* 000143c4   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x000143c4u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_143C8:
    /* 000143c8   4  lea (fffffb2c,A4),A0 */
    c->pc = RC_ADDR(0x000143c8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4d4u);

L_143CC:
    /* 000143cc   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x000143ccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_143D0:
    /* 000143d0   2  ext.l D1 */
    c->pc = RC_ADDR(0x000143d0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_143D2:
    /* 000143d2   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x000143d2u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_143D4:
    /* 000143d4   4  lea (ffffb5d8,A4),A1 */
    c->pc = RC_ADDR(0x000143d4u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4a28u);

L_143D8:
    /* 000143d8   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000143d8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_143DA:
    /* 000143da   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x000143dau);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_143DC:
    /* 000143dc   2  move.l D1,-(A7) */
    c->pc = RC_ADDR(0x000143dcu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_143DE:
    /* 000143de   2  move.l A1,-(A7) */
    c->pc = RC_ADDR(0x000143deu);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_143E0:
    /* 000143e0   4  move.w #280,-(A7) */
    c->pc = RC_ADDR(0x000143e0u);
    rc_step(c, m, 12);
    t0 = 0x00000280u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_143E4:
    /* 000143e4   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x000143e4u);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x000143e8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_143E8:
    /* 000143e8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000143e8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_143EA:
    /* 000143ea   2  movea.l (A7)+,A0 */
    c->pc = RC_ADDR(0x000143eau);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;

L_143EC:
    /* 000143ec   2  move.l (A7)+,D1 */
    c->pc = RC_ADDR(0x000143ecu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_143EE:
    /* 000143ee   4  move.w (0,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x000143eeu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_143F2:
    /* 000143f2   2  add.w D0,D2 */
    c->pc = RC_ADDR(0x000143f2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_143F4:
    /* 000143f4   2  movea.l (A7)+,A0 */
    c->pc = RC_ADDR(0x000143f4u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;

L_143F6:
    /* 000143f6   2  move.l (A7)+,D0 */
    c->pc = RC_ADDR(0x000143f6u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_143F8:
    /* 000143f8   4  sub.w #140,D2 */
    c->pc = RC_ADDR(0x000143f8u);
    rc_step(c, m, 10);
    t0 = 0x00000140u;
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_143FC:
    /* 000143fc   4  move.w D2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000143fcu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 2, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14400:
    /* 00014400   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00014400u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14404:
    /* 00014404   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014404u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_14408:
    /* 00014408   4  lea (fffffb2e,A4),A0 */
    c->pc = RC_ADDR(0x00014408u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4d2u);

L_1440C:
    /* 0001440c   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001440cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14410:
    /* 00014410   2  ext.l D1 */
    c->pc = RC_ADDR(0x00014410u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_14412:
    /* 00014412   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00014412u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_14414:
    /* 00014414   4  lea (ffffb5da,A4),A1 */
    c->pc = RC_ADDR(0x00014414u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4a26u);

L_14418:
    /* 00014418   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00014418u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1441A:
    /* 0001441a   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x0001441au);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1441C:
    /* 0001441c   2  move.l D1,-(A7) */
    c->pc = RC_ADDR(0x0001441cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1441E:
    /* 0001441e   2  move.l A1,-(A7) */
    c->pc = RC_ADDR(0x0001441eu);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_14420:
    /* 00014420   4  move.w #190,-(A7) */
    c->pc = RC_ADDR(0x00014420u);
    rc_step(c, m, 12);
    t0 = 0x00000190u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14424:
    /* 00014424   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x00014424u);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x00014428u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_14428:
    /* 00014428   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00014428u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1442A:
    /* 0001442a   2  movea.l (A7)+,A0 */
    c->pc = RC_ADDR(0x0001442au);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;

L_1442C:
    /* 0001442c   2  move.l (A7)+,D1 */
    c->pc = RC_ADDR(0x0001442cu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1442E:
    /* 0001442e   4  move.w (0,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x0001442eu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14432:
    /* 00014432   2  add.w D0,D2 */
    c->pc = RC_ADDR(0x00014432u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_14434:
    /* 00014434   2  movea.l (A7)+,A0 */
    c->pc = RC_ADDR(0x00014434u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;

L_14436:
    /* 00014436   2  move.l (A7)+,D0 */
    c->pc = RC_ADDR(0x00014436u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_14438:
    /* 00014438   4  sub.w #c8,D2 */
    c->pc = RC_ADDR(0x00014438u);
    rc_step(c, m, 10);
    t0 = 0x000000c8u;
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_1443C:
    /* 0001443c   4  move.w D2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001443cu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 2, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14440:
    /* 00014440   2  bra 0001447e */
    c->pc = RC_ADDR(0x00014440u);
    rc_step(c, m, 10);
    goto L_1447E;

L_14442:
    /* 00014442   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014442u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14446:
    /* 00014446   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014446u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14448:
    /* 00014448   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00014448u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1444A:
    /* 0001444a   4  lea (ffffb5d8,A4),A0 */
    c->pc = RC_ADDR(0x0001444au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4a28u);

L_1444E:
    /* 0001444e   4  move.w (8,A5),D1 */
    c->pc = RC_ADDR(0x0001444eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14452:
    /* 00014452   4  muls.w #16,D1 */
    c->pc = RC_ADDR(0x00014452u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 1, t0);

L_14456:
    /* 00014456   4  lea (fffffb2c,A4),A1 */
    c->pc = RC_ADDR(0x00014456u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4d4u);

L_1445A:
    /* 0001445a   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001445au);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14460:
    /* 00014460   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014460u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14464:
    /* 00014464   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014464u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14466:
    /* 00014466   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00014466u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_14468:
    /* 00014468   4  lea (ffffb5da,A4),A0 */
    c->pc = RC_ADDR(0x00014468u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4a26u);

L_1446C:
    /* 0001446c   4  move.w (8,A5),D1 */
    c->pc = RC_ADDR(0x0001446cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14470:
    /* 00014470   4  muls.w #16,D1 */
    c->pc = RC_ADDR(0x00014470u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 1, t0);

L_14474:
    /* 00014474   4  lea (fffffb2e,A4),A1 */
    c->pc = RC_ADDR(0x00014474u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4d2u);

L_14478:
    /* 00014478   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00014478u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1447E:
    /* 0001447e   2  unlk A5 */
    c->pc = RC_ADDR(0x0001447eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_14480:
    /* 00014480   2  rts */
    c->pc = RC_ADDR(0x00014480u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
