/* fn_000153d4 - 258 byte(s), 72 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000153d4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000153d4u): goto L_153D4;
    case RC_ADDR(0x000153d8u): goto L_153D8;
    case RC_ADDR(0x000153dcu): goto L_153DC;
    case RC_ADDR(0x000153deu): goto L_153DE;
    case RC_ADDR(0x000153e0u): goto L_153E0;
    case RC_ADDR(0x000153e2u): goto L_153E2;
    case RC_ADDR(0x000153e6u): goto L_153E6;
    case RC_ADDR(0x000153eau): goto L_153EA;
    case RC_ADDR(0x000153eeu): goto L_153EE;
    case RC_ADDR(0x000153f2u): goto L_153F2;
    case RC_ADDR(0x000153f6u): goto L_153F6;
    case RC_ADDR(0x000153f8u): goto L_153F8;
    case RC_ADDR(0x000153fcu): goto L_153FC;
    case RC_ADDR(0x00015400u): goto L_15400;
    case RC_ADDR(0x00015404u): goto L_15404;
    case RC_ADDR(0x00015408u): goto L_15408;
    case RC_ADDR(0x0001540cu): goto L_1540C;
    case RC_ADDR(0x00015412u): goto L_15412;
    case RC_ADDR(0x00015416u): goto L_15416;
    case RC_ADDR(0x0001541au): goto L_1541A;
    case RC_ADDR(0x0001541cu): goto L_1541C;
    case RC_ADDR(0x00015420u): goto L_15420;
    case RC_ADDR(0x00015424u): goto L_15424;
    case RC_ADDR(0x00015428u): goto L_15428;
    case RC_ADDR(0x0001542cu): goto L_1542C;
    case RC_ADDR(0x00015430u): goto L_15430;
    case RC_ADDR(0x00015434u): goto L_15434;
    case RC_ADDR(0x0001543au): goto L_1543A;
    case RC_ADDR(0x0001543cu): goto L_1543C;
    case RC_ADDR(0x00015440u): goto L_15440;
    case RC_ADDR(0x00015442u): goto L_15442;
    case RC_ADDR(0x00015446u): goto L_15446;
    case RC_ADDR(0x0001544au): goto L_1544A;
    case RC_ADDR(0x0001544eu): goto L_1544E;
    case RC_ADDR(0x00015452u): goto L_15452;
    case RC_ADDR(0x00015454u): goto L_15454;
    case RC_ADDR(0x00015456u): goto L_15456;
    case RC_ADDR(0x0001545au): goto L_1545A;
    case RC_ADDR(0x0001545eu): goto L_1545E;
    case RC_ADDR(0x00015462u): goto L_15462;
    case RC_ADDR(0x00015466u): goto L_15466;
    case RC_ADDR(0x00015468u): goto L_15468;
    case RC_ADDR(0x0001546au): goto L_1546A;
    case RC_ADDR(0x0001546eu): goto L_1546E;
    case RC_ADDR(0x00015472u): goto L_15472;
    case RC_ADDR(0x00015476u): goto L_15476;
    case RC_ADDR(0x0001547au): goto L_1547A;
    case RC_ADDR(0x0001547cu): goto L_1547C;
    case RC_ADDR(0x0001547eu): goto L_1547E;
    case RC_ADDR(0x00015482u): goto L_15482;
    case RC_ADDR(0x00015486u): goto L_15486;
    case RC_ADDR(0x0001548au): goto L_1548A;
    case RC_ADDR(0x0001548eu): goto L_1548E;
    case RC_ADDR(0x00015490u): goto L_15490;
    case RC_ADDR(0x00015492u): goto L_15492;
    case RC_ADDR(0x00015498u): goto L_15498;
    case RC_ADDR(0x0001549eu): goto L_1549E;
    case RC_ADDR(0x000154a2u): goto L_154A2;
    case RC_ADDR(0x000154a6u): goto L_154A6;
    case RC_ADDR(0x000154a8u): goto L_154A8;
    case RC_ADDR(0x000154aau): goto L_154AA;
    case RC_ADDR(0x000154acu): goto L_154AC;
    case RC_ADDR(0x000154b0u): goto L_154B0;
    case RC_ADDR(0x000154b4u): goto L_154B4;
    case RC_ADDR(0x000154b8u): goto L_154B8;
    case RC_ADDR(0x000154bcu): goto L_154BC;
    case RC_ADDR(0x000154c0u): goto L_154C0;
    case RC_ADDR(0x000154c2u): goto L_154C2;
    case RC_ADDR(0x000154c6u): goto L_154C6;
    case RC_ADDR(0x000154cau): goto L_154CA;
    case RC_ADDR(0x000154ceu): goto L_154CE;
    case RC_ADDR(0x000154d2u): goto L_154D2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_153D4:
    /* 000153d4   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x000153d4u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_153D8:
    /* 000153d8   4  tst.w (6b8,A4) */
    c->pc = RC_ADDR(0x000153d8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6b8u));
    rc_set_nzvc(c, t0, RC_W);

L_153DC:
    /* 000153dc   2  bne 000153e2 */
    c->pc = RC_ADDR(0x000153dcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_153E2;

L_153DE:
    /* 000153de   2  unlk A5 */
    c->pc = RC_ADDR(0x000153deu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_153E0:
    /* 000153e0   2  rts */
    c->pc = RC_ADDR(0x000153e0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_153E2:
    /* 000153e2   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x000153e2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_153E6:
    /* 000153e6   4  bra 000154c6 */
    c->pc = RC_ADDR(0x000153e6u);
    rc_step(c, m, 10);
    goto L_154C6;

L_153EA:
    /* 000153ea   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x000153eau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_153EE:
    /* 000153ee   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x000153eeu);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_153F2:
    /* 000153f2   4  lea (fffffb24,A4),A0 */
    c->pc = RC_ADDR(0x000153f2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4dcu);

L_153F6:
    /* 000153f6   2  add.l A0,D0 */
    c->pc = RC_ADDR(0x000153f6u);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 0, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_153F8:
    /* 000153f8   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000153f8u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_153FC:
    /* 000153fc   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000153fcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_15400:
    /* 00015400   4  tst.b (13,A0) */
    c->pc = RC_ADDR(0x00015400u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x13u));
    rc_set_nzvc(c, t0, RC_B);

L_15404:
    /* 00015404   4  beq 000154c2 */
    c->pc = RC_ADDR(0x00015404u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_154C2;

L_15408:
    /* 00015408   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00015408u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1540C:
    /* 0001540c   6  cmpi.b #ff,(c,A0) */
    c->pc = RC_ADDR(0x0001540cu);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[0] + 0xcu));
    rc_cmp(c, RC_B, t0, 0x000000ffu);

L_15412:
    /* 00015412   4  ble 000154c2 */
    c->pc = RC_ADDR(0x00015412u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_154C2;

L_15416:
    /* 00015416   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00015416u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1541A:
    /* 0001541a   2  move.w (A0),D0 */
    c->pc = RC_ADDR(0x0001541au);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1541C:
    /* 0001541c   4  sub.w (17f4,A4),D0 */
    c->pc = RC_ADDR(0x0001541cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15420:
    /* 00015420   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00015420u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15424:
    /* 00015424   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00015424u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_15428:
    /* 00015428   4  move.w (2,A0),D0 */
    c->pc = RC_ADDR(0x00015428u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1542C:
    /* 0001542c   4  sub.w (17f6,A4),D0 */
    c->pc = RC_ADDR(0x0001542cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f6u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15430:
    /* 00015430   4  move.w D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00015430u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15434:
    /* 00015434   6  cmpi.w #3,(14f2,A4) */
    c->pc = RC_ADDR(0x00015434u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f2u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_1543A:
    /* 0001543a   2  bge 0001549e */
    c->pc = RC_ADDR(0x0001543au);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1549E;

L_1543C:
    /* 0001543c   4  tst.w (1ab2,A4) */
    c->pc = RC_ADDR(0x0001543cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ab2u));
    rc_set_nzvc(c, t0, RC_W);

L_15440:
    /* 00015440   2  bne 0001549e */
    c->pc = RC_ADDR(0x00015440u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1549E;

L_15442:
    /* 00015442   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00015442u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15446:
    /* 00015446   4  add.w #10,D0 */
    c->pc = RC_ADDR(0x00015446u);
    rc_step(c, m, 10);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1544A:
    /* 0001544a   4  move.w (6fc,A4),D1 */
    c->pc = RC_ADDR(0x0001544au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6fcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1544E:
    /* 0001544e   4  sub.w #10,D1 */
    c->pc = RC_ADDR(0x0001544eu);
    rc_step(c, m, 10);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_15452:
    /* 00015452   2  cmp.w D1,D0 */
    c->pc = RC_ADDR(0x00015452u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15454:
    /* 00015454   2  ble 0001549e */
    c->pc = RC_ADDR(0x00015454u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1549E;

L_15456:
    /* 00015456   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00015456u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1545A:
    /* 0001545a   4  add.w #10,D0 */
    c->pc = RC_ADDR(0x0001545au);
    rc_step(c, m, 10);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1545E:
    /* 0001545e   4  move.w (6fc,A4),D1 */
    c->pc = RC_ADDR(0x0001545eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6fcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15462:
    /* 00015462   4  add.w #10,D1 */
    c->pc = RC_ADDR(0x00015462u);
    rc_step(c, m, 10);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_15466:
    /* 00015466   2  cmp.w D1,D0 */
    c->pc = RC_ADDR(0x00015466u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15468:
    /* 00015468   2  bge 0001549e */
    c->pc = RC_ADDR(0x00015468u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1549E;

L_1546A:
    /* 0001546a   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001546au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1546E:
    /* 0001546e   4  add.w #10,D0 */
    c->pc = RC_ADDR(0x0001546eu);
    rc_step(c, m, 10);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15472:
    /* 00015472   4  move.w (6fe,A4),D1 */
    c->pc = RC_ADDR(0x00015472u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6feu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15476:
    /* 00015476   4  sub.w #e,D1 */
    c->pc = RC_ADDR(0x00015476u);
    rc_step(c, m, 10);
    t0 = 0x0000000eu;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1547A:
    /* 0001547a   2  cmp.w D1,D0 */
    c->pc = RC_ADDR(0x0001547au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1547C:
    /* 0001547c   2  ble 0001549e */
    c->pc = RC_ADDR(0x0001547cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1549E;

L_1547E:
    /* 0001547e   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001547eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15482:
    /* 00015482   4  add.w #10,D0 */
    c->pc = RC_ADDR(0x00015482u);
    rc_step(c, m, 10);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15486:
    /* 00015486   4  move.w (6fe,A4),D1 */
    c->pc = RC_ADDR(0x00015486u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6feu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1548A:
    /* 0001548a   4  add.w #e,D1 */
    c->pc = RC_ADDR(0x0001548au);
    rc_step(c, m, 10);
    t0 = 0x0000000eu;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1548E:
    /* 0001548e   2  cmp.w D1,D0 */
    c->pc = RC_ADDR(0x0001548eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15490:
    /* 00015490   2  bge 0001549e */
    c->pc = RC_ADDR(0x00015490u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1549E;

L_15492:
    /* 00015492   6  move.w #1,(14e8,A4) */
    c->pc = RC_ADDR(0x00015492u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x14e8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15498:
    /* 00015498   6  move.w #1,(14e6,A4) */
    c->pc = RC_ADDR(0x00015498u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x14e6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1549E:
    /* 0001549e   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001549eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_154A2:
    /* 000154a2   4  move.b (d,A0),D0 */
    c->pc = RC_ADDR(0x000154a2u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0xdu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_154A6:
    /* 000154a6   2  ext.w D0 */
    c->pc = RC_ADDR(0x000154a6u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_154A8:
    /* 000154a8   2  ext.l D0 */
    c->pc = RC_ADDR(0x000154a8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_154AA:
    /* 000154aa   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000154aau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_154AC:
    /* 000154ac   4  lea (574,A4),A0 */
    c->pc = RC_ADDR(0x000154acu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x574u);

L_154B0:
    /* 000154b0   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000154b0u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_154B4:
    /* 000154b4   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x000154b4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_154B8:
    /* 000154b8   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x000154b8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_154BC:
    /* 000154bc   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x000154bcu);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x000154c0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_154C0:
    /* 000154c0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000154c0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_154C2:
    /* 000154c2   4  addq.w #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x000154c2u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_154C6:
    /* 000154c6   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x000154c6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_154CA:
    /* 000154ca   4  cmp.w (6b8,A4),D0 */
    c->pc = RC_ADDR(0x000154cau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6b8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_154CE:
    /* 000154ce   4  blt 000153ea */
    c->pc = RC_ADDR(0x000154ceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_153EA; }

L_154D2:
    /* 000154d2   4  bra 000153de */
    c->pc = RC_ADDR(0x000154d2u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_153DE;

}
