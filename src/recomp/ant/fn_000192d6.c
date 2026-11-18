/* fn_000192d6 - 336 byte(s), 90 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000192d6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000192d6u): goto L_192D6;
    case RC_ADDR(0x000192dau): goto L_192DA;
    case RC_ADDR(0x000192deu): goto L_192DE;
    case RC_ADDR(0x000192e0u): goto L_192E0;
    case RC_ADDR(0x000192e2u): goto L_192E2;
    case RC_ADDR(0x000192e4u): goto L_192E4;
    case RC_ADDR(0x000192e8u): goto L_192E8;
    case RC_ADDR(0x000192ecu): goto L_192EC;
    case RC_ADDR(0x000192f0u): goto L_192F0;
    case RC_ADDR(0x000192f4u): goto L_192F4;
    case RC_ADDR(0x000192f8u): goto L_192F8;
    case RC_ADDR(0x000192fcu): goto L_192FC;
    case RC_ADDR(0x00019302u): goto L_19302;
    case RC_ADDR(0x00019306u): goto L_19306;
    case RC_ADDR(0x0001930cu): goto L_1930C;
    case RC_ADDR(0x00019310u): goto L_19310;
    case RC_ADDR(0x00019316u): goto L_19316;
    case RC_ADDR(0x0001931au): goto L_1931A;
    case RC_ADDR(0x00019320u): goto L_19320;
    case RC_ADDR(0x00019324u): goto L_19324;
    case RC_ADDR(0x00019328u): goto L_19328;
    case RC_ADDR(0x0001932cu): goto L_1932C;
    case RC_ADDR(0x00019330u): goto L_19330;
    case RC_ADDR(0x00019332u): goto L_19332;
    case RC_ADDR(0x00019334u): goto L_19334;
    case RC_ADDR(0x00019338u): goto L_19338;
    case RC_ADDR(0x0001933cu): goto L_1933C;
    case RC_ADDR(0x00019340u): goto L_19340;
    case RC_ADDR(0x00019344u): goto L_19344;
    case RC_ADDR(0x00019346u): goto L_19346;
    case RC_ADDR(0x0001934au): goto L_1934A;
    case RC_ADDR(0x0001934eu): goto L_1934E;
    case RC_ADDR(0x00019350u): goto L_19350;
    case RC_ADDR(0x00019354u): goto L_19354;
    case RC_ADDR(0x00019356u): goto L_19356;
    case RC_ADDR(0x0001935cu): goto L_1935C;
    case RC_ADDR(0x0001935eu): goto L_1935E;
    case RC_ADDR(0x00019362u): goto L_19362;
    case RC_ADDR(0x00019364u): goto L_19364;
    case RC_ADDR(0x00019368u): goto L_19368;
    case RC_ADDR(0x0001936cu): goto L_1936C;
    case RC_ADDR(0x00019370u): goto L_19370;
    case RC_ADDR(0x00019372u): goto L_19372;
    case RC_ADDR(0x00019376u): goto L_19376;
    case RC_ADDR(0x00019378u): goto L_19378;
    case RC_ADDR(0x0001937cu): goto L_1937C;
    case RC_ADDR(0x0001937eu): goto L_1937E;
    case RC_ADDR(0x00019382u): goto L_19382;
    case RC_ADDR(0x00019386u): goto L_19386;
    case RC_ADDR(0x00019388u): goto L_19388;
    case RC_ADDR(0x0001938cu): goto L_1938C;
    case RC_ADDR(0x00019390u): goto L_19390;
    case RC_ADDR(0x00019394u): goto L_19394;
    case RC_ADDR(0x00019396u): goto L_19396;
    case RC_ADDR(0x00019398u): goto L_19398;
    case RC_ADDR(0x0001939cu): goto L_1939C;
    case RC_ADDR(0x000193a0u): goto L_193A0;
    case RC_ADDR(0x000193a2u): goto L_193A2;
    case RC_ADDR(0x000193a6u): goto L_193A6;
    case RC_ADDR(0x000193aau): goto L_193AA;
    case RC_ADDR(0x000193aeu): goto L_193AE;
    case RC_ADDR(0x000193b0u): goto L_193B0;
    case RC_ADDR(0x000193b2u): goto L_193B2;
    case RC_ADDR(0x000193b8u): goto L_193B8;
    case RC_ADDR(0x000193beu): goto L_193BE;
    case RC_ADDR(0x000193c4u): goto L_193C4;
    case RC_ADDR(0x000193c8u): goto L_193C8;
    case RC_ADDR(0x000193cau): goto L_193CA;
    case RC_ADDR(0x000193d0u): goto L_193D0;
    case RC_ADDR(0x000193d6u): goto L_193D6;
    case RC_ADDR(0x000193d8u): goto L_193D8;
    case RC_ADDR(0x000193dcu): goto L_193DC;
    case RC_ADDR(0x000193e2u): goto L_193E2;
    case RC_ADDR(0x000193e4u): goto L_193E4;
    case RC_ADDR(0x000193eau): goto L_193EA;
    case RC_ADDR(0x000193ecu): goto L_193EC;
    case RC_ADDR(0x000193f0u): goto L_193F0;
    case RC_ADDR(0x000193f4u): goto L_193F4;
    case RC_ADDR(0x000193f8u): goto L_193F8;
    case RC_ADDR(0x000193fau): goto L_193FA;
    case RC_ADDR(0x000193feu): goto L_193FE;
    case RC_ADDR(0x00019402u): goto L_19402;
    case RC_ADDR(0x00019408u): goto L_19408;
    case RC_ADDR(0x0001940eu): goto L_1940E;
    case RC_ADDR(0x00019410u): goto L_19410;
    case RC_ADDR(0x00019416u): goto L_19416;
    case RC_ADDR(0x00019418u): goto L_19418;
    case RC_ADDR(0x0001941cu): goto L_1941C;
    case RC_ADDR(0x0001941eu): goto L_1941E;
    case RC_ADDR(0x00019422u): goto L_19422;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_192D6:
    /* 000192d6   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x000192d6u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_192DA:
    /* 000192da   4  tst.w (1dc0,A4) */
    c->pc = RC_ADDR(0x000192dau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1dc0u));
    rc_set_nzvc(c, t0, RC_W);

L_192DE:
    /* 000192de   2  beq 000192e4 */
    c->pc = RC_ADDR(0x000192deu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_192E4;

L_192E0:
    /* 000192e0   2  unlk A5 */
    c->pc = RC_ADDR(0x000192e0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_192E2:
    /* 000192e2   2  rts */
    c->pc = RC_ADDR(0x000192e2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_192E4:
    /* 000192e4   4  move.w (ffffb678,A4),D0 */
    c->pc = RC_ADDR(0x000192e4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4988u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_192E8:
    /* 000192e8   4  sub.w (17f4,A4),D0 */
    c->pc = RC_ADDR(0x000192e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_192EC:
    /* 000192ec   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000192ecu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_192F0:
    /* 000192f0   4  move.w (ffffb67a,A4),D0 */
    c->pc = RC_ADDR(0x000192f0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4986u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_192F4:
    /* 000192f4   4  sub.w (17f6,A4),D0 */
    c->pc = RC_ADDR(0x000192f4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f6u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_192F8:
    /* 000192f8   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000192f8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_192FC:
    /* 000192fc   6  cmpi.w #ffe0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000192fcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000ffe0u);

L_19302:
    /* 00019302   4  ble 00019422 */
    c->pc = RC_ADDR(0x00019302u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_19422;

L_19306:
    /* 00019306   6  cmpi.w #140,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00019306u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000140u);

L_1930C:
    /* 0001930c   4  bge 00019422 */
    c->pc = RC_ADDR(0x0001930cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_19422;

L_19310:
    /* 00019310   6  cmpi.w #ffe0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00019310u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x0000ffe0u);

L_19316:
    /* 00019316   4  ble 00019422 */
    c->pc = RC_ADDR(0x00019316u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_19422;

L_1931A:
    /* 0001931a   6  cmpi.w #c8,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001931au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x000000c8u);

L_19320:
    /* 00019320   4  bge 00019422 */
    c->pc = RC_ADDR(0x00019320u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_19422;

L_19324:
    /* 00019324   4  tst.w (1dba,A4) */
    c->pc = RC_ADDR(0x00019324u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1dbau));
    rc_set_nzvc(c, t0, RC_W);

L_19328:
    /* 00019328   4  bne 0001941e */
    c->pc = RC_ADDR(0x00019328u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1941E;

L_1932C:
    /* 0001932c   4  move.w (1db6,A4),D0 */
    c->pc = RC_ADDR(0x0001932cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1db6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19330:
    /* 00019330   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019330u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19332:
    /* 00019332   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00019332u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_19334:
    /* 00019334   4  lea (1d92,A4),A0 */
    c->pc = RC_ADDR(0x00019334u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d92u);

L_19338:
    /* 00019338   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00019338u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1933C:
    /* 0001933c   4  move.w (ffffb67a,A4),D0 */
    c->pc = RC_ADDR(0x0001933cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4986u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19340:
    /* 00019340   4  sub.w (17f6,A4),D0 */
    c->pc = RC_ADDR(0x00019340u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f6u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_19344:
    /* 00019344   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00019344u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19346:
    /* 00019346   4  move.w (ffffb678,A4),D0 */
    c->pc = RC_ADDR(0x00019346u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4988u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1934A:
    /* 0001934a   4  sub.w (17f4,A4),D0 */
    c->pc = RC_ADDR(0x0001934au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1934E:
    /* 0001934e   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001934eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19350:
    /* 00019350   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x00019350u);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x00019354u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_19354:
    /* 00019354   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00019354u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_19356:
    /* 00019356   6  cmpi.w #4,(1db6,A4) */
    c->pc = RC_ADDR(0x00019356u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1db6u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_1935C:
    /* 0001935c   2  bne 000193c4 */
    c->pc = RC_ADDR(0x0001935cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_193C4;

L_1935E:
    /* 0001935e   4  tst.w (1dbe,A4) */
    c->pc = RC_ADDR(0x0001935eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1dbeu));
    rc_set_nzvc(c, t0, RC_W);

L_19362:
    /* 00019362   2  beq 0001936c */
    c->pc = RC_ADDR(0x00019362u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1936C;

L_19364:
    /* 00019364   4  jsr (00014990) */
    c->pc = RC_ADDR(0x00019364u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00019368u));
    rc_depth++;
    c->pc = RC_ADDR(0x00014990u);
    return;

L_19368:
    /* 00019368   4  clr.w (1dbe,A4) */
    c->pc = RC_ADDR(0x00019368u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1dbeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1936C:
    /* 0001936c   4  tst.w (14f0,A4) */
    c->pc = RC_ADDR(0x0001936cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f0u));
    rc_set_nzvc(c, t0, RC_W);

L_19370:
    /* 00019370   2  bne 000193c4 */
    c->pc = RC_ADDR(0x00019370u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_193C4;

L_19372:
    /* 00019372   4  tst.w (1ab2,A4) */
    c->pc = RC_ADDR(0x00019372u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ab2u));
    rc_set_nzvc(c, t0, RC_W);

L_19376:
    /* 00019376   2  bne 000193c4 */
    c->pc = RC_ADDR(0x00019376u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_193C4;

L_19378:
    /* 00019378   4  tst.w (1dbc,A4) */
    c->pc = RC_ADDR(0x00019378u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1dbcu));
    rc_set_nzvc(c, t0, RC_W);

L_1937C:
    /* 0001937c   2  beq 000193c4 */
    c->pc = RC_ADDR(0x0001937cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_193C4;

L_1937E:
    /* 0001937e   4  move.w (6ee,A4),D0 */
    c->pc = RC_ADDR(0x0001937eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6eeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19382:
    /* 00019382   4  cmp.w (ffffb678,A4),D0 */
    c->pc = RC_ADDR(0x00019382u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4988u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19386:
    /* 00019386   2  ble 000193c4 */
    c->pc = RC_ADDR(0x00019386u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_193C4;

L_19388:
    /* 00019388   4  move.w (ffffb678,A4),D0 */
    c->pc = RC_ADDR(0x00019388u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4988u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1938C:
    /* 0001938c   4  add.w #14,D0 */
    c->pc = RC_ADDR(0x0001938cu);
    rc_step(c, m, 10);
    t0 = 0x00000014u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_19390:
    /* 00019390   4  move.w (6ee,A4),D1 */
    c->pc = RC_ADDR(0x00019390u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6eeu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19394:
    /* 00019394   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00019394u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19396:
    /* 00019396   2  bge 000193c4 */
    c->pc = RC_ADDR(0x00019396u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_193C4;

L_19398:
    /* 00019398   4  move.w (6f0,A4),D0 */
    c->pc = RC_ADDR(0x00019398u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6f0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1939C:
    /* 0001939c   4  cmp.w (ffffb67a,A4),D0 */
    c->pc = RC_ADDR(0x0001939cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4986u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_193A0:
    /* 000193a0   2  ble 000193c4 */
    c->pc = RC_ADDR(0x000193a0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_193C4;

L_193A2:
    /* 000193a2   4  move.w (ffffb67a,A4),D0 */
    c->pc = RC_ADDR(0x000193a2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4986u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_193A6:
    /* 000193a6   4  add.w #14,D0 */
    c->pc = RC_ADDR(0x000193a6u);
    rc_step(c, m, 10);
    t0 = 0x00000014u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_193AA:
    /* 000193aa   4  move.w (6f0,A4),D1 */
    c->pc = RC_ADDR(0x000193aau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6f0u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_193AE:
    /* 000193ae   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x000193aeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_193B0:
    /* 000193b0   2  bge 000193c4 */
    c->pc = RC_ADDR(0x000193b0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_193C4;

L_193B2:
    /* 000193b2   6  move.w #1,(14f6,A4) */
    c->pc = RC_ADDR(0x000193b2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x14f6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_193B8:
    /* 000193b8   6  move.w #1,(14e8,A4) */
    c->pc = RC_ADDR(0x000193b8u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x14e8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_193BE:
    /* 000193be   6  move.w #1,(856,A4) */
    c->pc = RC_ADDR(0x000193beu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x856u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_193C4:
    /* 000193c4   4  tst.w (1db8,A4) */
    c->pc = RC_ADDR(0x000193c4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1db8u));
    rc_set_nzvc(c, t0, RC_W);

L_193C8:
    /* 000193c8   2  bne 00019418 */
    c->pc = RC_ADDR(0x000193c8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_19418;

L_193CA:
    /* 000193ca   6  move.w #2,(1db8,A4) */
    c->pc = RC_ADDR(0x000193cau);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x1db8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_193D0:
    /* 000193d0   6  cmpi.w #7,(1db6,A4) */
    c->pc = RC_ADDR(0x000193d0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1db6u));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_193D6:
    /* 000193d6   2  bge 000193ec */
    c->pc = RC_ADDR(0x000193d6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_193EC;

L_193D8:
    /* 000193d8   4  addq.w #1,(1db6,A4) */
    c->pc = RC_ADDR(0x000193d8u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1db6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_193DC:
    /* 000193dc   6  cmpi.w #4,(1db6,A4) */
    c->pc = RC_ADDR(0x000193dcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1db6u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_193E2:
    /* 000193e2   2  bne 000193ea */
    c->pc = RC_ADDR(0x000193e2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_193EA;

L_193E4:
    /* 000193e4   6  move.w (1dbc,A4),(1db8,A4) */
    c->pc = RC_ADDR(0x000193e4u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1dbcu));
    rc_wr16(c, m, (c->a[4] + 0x1db8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_193EA:
    /* 000193ea   2  bra 00019416 */
    c->pc = RC_ADDR(0x000193eau);
    rc_step(c, m, 10);
    goto L_19416;

L_193EC:
    /* 000193ec   4  clr.w (1db6,A4) */
    c->pc = RC_ADDR(0x000193ecu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1db6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_193F0:
    /* 000193f0   4  move.w #14,-(A7) */
    c->pc = RC_ADDR(0x000193f0u);
    rc_step(c, m, 12);
    t0 = 0x00000014u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_193F4:
    /* 000193f4   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x000193f4u);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x000193f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_193F8:
    /* 000193f8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000193f8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_193FA:
    /* 000193fa   4  add.w (6e6,A4),D0 */
    c->pc = RC_ADDR(0x000193fau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6e6u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_193FE:
    /* 000193fe   4  move.w D0,(1dba,A4) */
    c->pc = RC_ADDR(0x000193feu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1dbau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19402:
    /* 00019402   6  move.w #1,(1dbe,A4) */
    c->pc = RC_ADDR(0x00019402u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1dbeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19408:
    /* 00019408   6  cmpi.w #8,(6e2,A4) */
    c->pc = RC_ADDR(0x00019408u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6e2u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_1940E:
    /* 0001940e   2  ble 00019416 */
    c->pc = RC_ADDR(0x0001940eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_19416;

L_19410:
    /* 00019410   6  move.w #1,(1dc0,A4) */
    c->pc = RC_ADDR(0x00019410u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1dc0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19416:
    /* 00019416   2  bra 0001941c */
    c->pc = RC_ADDR(0x00019416u);
    rc_step(c, m, 10);
    goto L_1941C;

L_19418:
    /* 00019418   4  subq.w #1,(1db8,A4) */
    c->pc = RC_ADDR(0x00019418u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1db8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1941C:
    /* 0001941c   2  bra 00019422 */
    c->pc = RC_ADDR(0x0001941cu);
    rc_step(c, m, 10);
    goto L_19422;

L_1941E:
    /* 0001941e   4  subq.w #1,(1dba,A4) */
    c->pc = RC_ADDR(0x0001941eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1dbau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_19422:
    /* 00019422   4  bra 000192e0 */
    c->pc = RC_ADDR(0x00019422u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_192E0;

}
