/* fn_000131ac - 542 byte(s), 149 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000131ac(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000131acu): goto L_131AC;
    case RC_ADDR(0x000131b0u): goto L_131B0;
    case RC_ADDR(0x000131b6u): goto L_131B6;
    case RC_ADDR(0x000131bcu): goto L_131BC;
    case RC_ADDR(0x000131c2u): goto L_131C2;
    case RC_ADDR(0x000131c6u): goto L_131C6;
    case RC_ADDR(0x000131cau): goto L_131CA;
    case RC_ADDR(0x000131ceu): goto L_131CE;
    case RC_ADDR(0x000131d2u): goto L_131D2;
    case RC_ADDR(0x000131d6u): goto L_131D6;
    case RC_ADDR(0x000131dau): goto L_131DA;
    case RC_ADDR(0x000131deu): goto L_131DE;
    case RC_ADDR(0x000131e2u): goto L_131E2;
    case RC_ADDR(0x000131e6u): goto L_131E6;
    case RC_ADDR(0x000131eau): goto L_131EA;
    case RC_ADDR(0x000131eeu): goto L_131EE;
    case RC_ADDR(0x000131f0u): goto L_131F0;
    case RC_ADDR(0x000131f2u): goto L_131F2;
    case RC_ADDR(0x000131f6u): goto L_131F6;
    case RC_ADDR(0x000131fau): goto L_131FA;
    case RC_ADDR(0x000131feu): goto L_131FE;
    case RC_ADDR(0x00013200u): goto L_13200;
    case RC_ADDR(0x00013204u): goto L_13204;
    case RC_ADDR(0x00013208u): goto L_13208;
    case RC_ADDR(0x0001320cu): goto L_1320C;
    case RC_ADDR(0x00013210u): goto L_13210;
    case RC_ADDR(0x00013214u): goto L_13214;
    case RC_ADDR(0x00013218u): goto L_13218;
    case RC_ADDR(0x0001321cu): goto L_1321C;
    case RC_ADDR(0x00013220u): goto L_13220;
    case RC_ADDR(0x00013224u): goto L_13224;
    case RC_ADDR(0x00013228u): goto L_13228;
    case RC_ADDR(0x0001322cu): goto L_1322C;
    case RC_ADDR(0x0001322eu): goto L_1322E;
    case RC_ADDR(0x00013230u): goto L_13230;
    case RC_ADDR(0x00013232u): goto L_13232;
    case RC_ADDR(0x00013236u): goto L_13236;
    case RC_ADDR(0x0001323au): goto L_1323A;
    case RC_ADDR(0x0001323eu): goto L_1323E;
    case RC_ADDR(0x00013244u): goto L_13244;
    case RC_ADDR(0x00013248u): goto L_13248;
    case RC_ADDR(0x0001324eu): goto L_1324E;
    case RC_ADDR(0x00013252u): goto L_13252;
    case RC_ADDR(0x00013256u): goto L_13256;
    case RC_ADDR(0x0001325au): goto L_1325A;
    case RC_ADDR(0x0001325eu): goto L_1325E;
    case RC_ADDR(0x00013260u): goto L_13260;
    case RC_ADDR(0x00013262u): goto L_13262;
    case RC_ADDR(0x00013266u): goto L_13266;
    case RC_ADDR(0x0001326au): goto L_1326A;
    case RC_ADDR(0x0001326cu): goto L_1326C;
    case RC_ADDR(0x00013270u): goto L_13270;
    case RC_ADDR(0x00013272u): goto L_13272;
    case RC_ADDR(0x00013276u): goto L_13276;
    case RC_ADDR(0x00013278u): goto L_13278;
    case RC_ADDR(0x0001327cu): goto L_1327C;
    case RC_ADDR(0x00013280u): goto L_13280;
    case RC_ADDR(0x00013282u): goto L_13282;
    case RC_ADDR(0x00013288u): goto L_13288;
    case RC_ADDR(0x0001328au): goto L_1328A;
    case RC_ADDR(0x0001328eu): goto L_1328E;
    case RC_ADDR(0x00013290u): goto L_13290;
    case RC_ADDR(0x00013294u): goto L_13294;
    case RC_ADDR(0x00013296u): goto L_13296;
    case RC_ADDR(0x0001329cu): goto L_1329C;
    case RC_ADDR(0x0001329eu): goto L_1329E;
    case RC_ADDR(0x000132a2u): goto L_132A2;
    case RC_ADDR(0x000132a4u): goto L_132A4;
    case RC_ADDR(0x000132a6u): goto L_132A6;
    case RC_ADDR(0x000132a8u): goto L_132A8;
    case RC_ADDR(0x000132acu): goto L_132AC;
    case RC_ADDR(0x000132b0u): goto L_132B0;
    case RC_ADDR(0x000132b2u): goto L_132B2;
    case RC_ADDR(0x000132b6u): goto L_132B6;
    case RC_ADDR(0x000132bau): goto L_132BA;
    case RC_ADDR(0x000132bcu): goto L_132BC;
    case RC_ADDR(0x000132c0u): goto L_132C0;
    case RC_ADDR(0x000132c6u): goto L_132C6;
    case RC_ADDR(0x000132c8u): goto L_132C8;
    case RC_ADDR(0x000132ccu): goto L_132CC;
    case RC_ADDR(0x000132d0u): goto L_132D0;
    case RC_ADDR(0x000132d2u): goto L_132D2;
    case RC_ADDR(0x000132d4u): goto L_132D4;
    case RC_ADDR(0x000132d8u): goto L_132D8;
    case RC_ADDR(0x000132dcu): goto L_132DC;
    case RC_ADDR(0x000132deu): goto L_132DE;
    case RC_ADDR(0x000132e2u): goto L_132E2;
    case RC_ADDR(0x000132e4u): goto L_132E4;
    case RC_ADDR(0x000132e8u): goto L_132E8;
    case RC_ADDR(0x000132eau): goto L_132EA;
    case RC_ADDR(0x000132ecu): goto L_132EC;
    case RC_ADDR(0x000132f0u): goto L_132F0;
    case RC_ADDR(0x000132f2u): goto L_132F2;
    case RC_ADDR(0x000132f8u): goto L_132F8;
    case RC_ADDR(0x000132fau): goto L_132FA;
    case RC_ADDR(0x00013300u): goto L_13300;
    case RC_ADDR(0x00013302u): goto L_13302;
    case RC_ADDR(0x00013308u): goto L_13308;
    case RC_ADDR(0x0001330cu): goto L_1330C;
    case RC_ADDR(0x0001330eu): goto L_1330E;
    case RC_ADDR(0x00013310u): goto L_13310;
    case RC_ADDR(0x00013314u): goto L_13314;
    case RC_ADDR(0x00013318u): goto L_13318;
    case RC_ADDR(0x0001331au): goto L_1331A;
    case RC_ADDR(0x0001331eu): goto L_1331E;
    case RC_ADDR(0x00013320u): goto L_13320;
    case RC_ADDR(0x00013326u): goto L_13326;
    case RC_ADDR(0x0001332cu): goto L_1332C;
    case RC_ADDR(0x00013330u): goto L_13330;
    case RC_ADDR(0x00013334u): goto L_13334;
    case RC_ADDR(0x00013338u): goto L_13338;
    case RC_ADDR(0x0001333eu): goto L_1333E;
    case RC_ADDR(0x00013342u): goto L_13342;
    case RC_ADDR(0x00013346u): goto L_13346;
    case RC_ADDR(0x0001334au): goto L_1334A;
    case RC_ADDR(0x0001334eu): goto L_1334E;
    case RC_ADDR(0x00013352u): goto L_13352;
    case RC_ADDR(0x00013356u): goto L_13356;
    case RC_ADDR(0x00013358u): goto L_13358;
    case RC_ADDR(0x0001335cu): goto L_1335C;
    case RC_ADDR(0x00013360u): goto L_13360;
    case RC_ADDR(0x00013362u): goto L_13362;
    case RC_ADDR(0x00013366u): goto L_13366;
    case RC_ADDR(0x0001336au): goto L_1336A;
    case RC_ADDR(0x0001336eu): goto L_1336E;
    case RC_ADDR(0x00013370u): goto L_13370;
    case RC_ADDR(0x00013374u): goto L_13374;
    case RC_ADDR(0x0001337au): goto L_1337A;
    case RC_ADDR(0x0001337eu): goto L_1337E;
    case RC_ADDR(0x00013380u): goto L_13380;
    case RC_ADDR(0x00013384u): goto L_13384;
    case RC_ADDR(0x00013388u): goto L_13388;
    case RC_ADDR(0x0001338eu): goto L_1338E;
    case RC_ADDR(0x00013392u): goto L_13392;
    case RC_ADDR(0x00013398u): goto L_13398;
    case RC_ADDR(0x0001339au): goto L_1339A;
    case RC_ADDR(0x0001339eu): goto L_1339E;
    case RC_ADDR(0x000133a0u): goto L_133A0;
    case RC_ADDR(0x000133a6u): goto L_133A6;
    case RC_ADDR(0x000133aau): goto L_133AA;
    case RC_ADDR(0x000133acu): goto L_133AC;
    case RC_ADDR(0x000133b0u): goto L_133B0;
    case RC_ADDR(0x000133b2u): goto L_133B2;
    case RC_ADDR(0x000133b6u): goto L_133B6;
    case RC_ADDR(0x000133bau): goto L_133BA;
    case RC_ADDR(0x000133bcu): goto L_133BC;
    case RC_ADDR(0x000133c0u): goto L_133C0;
    case RC_ADDR(0x000133c2u): goto L_133C2;
    case RC_ADDR(0x000133c6u): goto L_133C6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_131AC:
    /* 000131ac   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x000131acu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_131B0:
    /* 000131b0   6  move.w (a,A5),(10be,A4) */
    c->pc = RC_ADDR(0x000131b0u);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_wr16(c, m, (c->a[4] + 0x10beu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_131B6:
    /* 000131b6   6  move.w #ffff,(10c0,A4) */
    c->pc = RC_ADDR(0x000131b6u);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x10c0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_131BC:
    /* 000131bc   6  move.w (8,A5),(10bc,A4) */
    c->pc = RC_ADDR(0x000131bcu);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_wr16(c, m, (c->a[4] + 0x10bcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_131C2:
    /* 000131c2   4  pea (fffffc14,A4) */
    c->pc = RC_ADDR(0x000131c2u);
    rc_push32(c, m, (c->a[4] - 0x3ecu));

L_131C6:
    /* 000131c6   4  move.w #20,-(A7) */
    c->pc = RC_ADDR(0x000131c6u);
    t0 = 0x00000020u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_131CA:
    /* 000131ca   4  pea (000133ca) */
    c->pc = RC_ADDR(0x000131cau);
    rc_push32(c, m, RC_ADDR(0x000133cau));

L_131CE:
    /* 000131ce   4  jsr (ffff817c,A4) */
    c->pc = RC_ADDR(0x000131ceu);
    /* vector 63 */
    rc_push32(c, m, RC_ADDR(0x000131d2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016c00u);
    return;

L_131D2:
    /* 000131d2   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000131d2u);
    c->a[7] = (c->a[7] + 0xau);

L_131D6:
    /* 000131d6   4  pea (fffffc94,A4) */
    c->pc = RC_ADDR(0x000131d6u);
    rc_push32(c, m, (c->a[4] - 0x36cu));

L_131DA:
    /* 000131da   4  move.w #8,-(A7) */
    c->pc = RC_ADDR(0x000131dau);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_131DE:
    /* 000131de   4  pea (000133cf) */
    c->pc = RC_ADDR(0x000131deu);
    rc_push32(c, m, RC_ADDR(0x000133cfu));

L_131E2:
    /* 000131e2   4  jsr (ffff817c,A4) */
    c->pc = RC_ADDR(0x000131e2u);
    /* vector 63 */
    rc_push32(c, m, RC_ADDR(0x000131e6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016c00u);
    return;

L_131E6:
    /* 000131e6   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000131e6u);
    c->a[7] = (c->a[7] + 0xau);

L_131EA:
    /* 000131ea   4  move.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x000131eau);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_131EE:
    /* 000131ee   2  ext.l D0 */
    c->pc = RC_ADDR(0x000131eeu);
    rc_ext_l(c, 0);

L_131F0:
    /* 000131f0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000131f0u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_131F2:
    /* 000131f2   4  lea (ffff8440,A4),A0 */
    c->pc = RC_ADDR(0x000131f2u);
    c->a[0] = (c->a[4] - 0x7bc0u);

L_131F6:
    /* 000131f6   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000131f6u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_131FA:
    /* 000131fa   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x000131fau);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x000131feu));
    rc_depth++;
    c->pc = RC_ADDR(0x00020820u);
    return;

L_131FE:
    /* 000131fe   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000131feu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_13200:
    /* 00013200   4  move.w D0,(fffffd5a,A4) */
    c->pc = RC_ADDR(0x00013200u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x2a6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13204:
    /* 00013204   4  move.w (fffffd5a,A4),D0 */
    c->pc = RC_ADDR(0x00013204u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13208:
    /* 00013208   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x00013208u);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_1320C:
    /* 0001320c   4  move.w D0,(fffffd58,A4) */
    c->pc = RC_ADDR(0x0001320cu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x2a8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13210:
    /* 00013210   4  clr.w (fffffd4c,A4) */
    c->pc = RC_ADDR(0x00013210u);
    rc_wr16(c, m, (c->a[4] - 0x2b4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13214:
    /* 00013214   4  clr.w (fffffd66,A4) */
    c->pc = RC_ADDR(0x00013214u);
    rc_wr16(c, m, (c->a[4] - 0x29au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13218:
    /* 00013218   4  clr.w (fffffd4a,A4) */
    c->pc = RC_ADDR(0x00013218u);
    rc_wr16(c, m, (c->a[4] - 0x2b6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1321C:
    /* 0001321c   4  clr.w (fffffec8,A4) */
    c->pc = RC_ADDR(0x0001321cu);
    rc_wr16(c, m, (c->a[4] - 0x138u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13220:
    /* 00013220   4  clr.w (fffffd68,A4) */
    c->pc = RC_ADDR(0x00013220u);
    rc_wr16(c, m, (c->a[4] - 0x298u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13224:
    /* 00013224   4  clr.w (fffffd64,A4) */
    c->pc = RC_ADDR(0x00013224u);
    rc_wr16(c, m, (c->a[4] - 0x29cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13228:
    /* 00013228   4  tst.w (fffffd58,A4) */
    c->pc = RC_ADDR(0x00013228u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a8u));
    rc_set_nzvc(c, t0, RC_W);

L_1322C:
    /* 0001322c   2  bne 00013232 */
    c->pc = RC_ADDR(0x0001322cu);
    if (rc_cond(c, 6)) goto L_13232;

L_1322E:
    /* 0001322e   2  unlk A5 */
    c->pc = RC_ADDR(0x0001322eu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_13230:
    /* 00013230   2  rts */
    c->pc = RC_ADDR(0x00013230u);
    rc_ret(c, m);
    return;

L_13232:
    /* 00013232   4  move.w (fffffd58,A4),D0 */
    c->pc = RC_ADDR(0x00013232u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13236:
    /* 00013236   4  sub.w #a,D0 */
    c->pc = RC_ADDR(0x00013236u);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1323A:
    /* 0001323a   4  move.w D0,(fffffd80,A4) */
    c->pc = RC_ADDR(0x0001323au);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x280u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1323E:
    /* 0001323e   6  move.w #1,(10c6,A4) */
    c->pc = RC_ADDR(0x0001323eu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x10c6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13244:
    /* 00013244   4  clr.w (fffffd7e,A4) */
    c->pc = RC_ADDR(0x00013244u);
    rc_wr16(c, m, (c->a[4] - 0x282u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13248:
    /* 00013248   6  move.w #ffff,(10c2,A4) */
    c->pc = RC_ADDR(0x00013248u);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x10c2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1324E:
    /* 0001324e   4  clr.w (fffffd6a,A4) */
    c->pc = RC_ADDR(0x0001324eu);
    rc_wr16(c, m, (c->a[4] - 0x296u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13252:
    /* 00013252   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00013252u);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13256:
    /* 00013256   4  bra 00013342 */
    c->pc = RC_ADDR(0x00013256u);
    goto L_13342;

L_1325A:
    /* 0001325a   4  move.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x0001325au);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1325E:
    /* 0001325e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001325eu);
    rc_ext_l(c, 0);

L_13260:
    /* 00013260   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00013260u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_13262:
    /* 00013262   4  lea (ffff847c,A4),A0 */
    c->pc = RC_ADDR(0x00013262u);
    c->a[0] = (c->a[4] - 0x7b84u);

L_13266:
    /* 00013266   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00013266u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1326A:
    /* 0001326a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001326au);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1326C:
    /* 0001326c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001326cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13270:
    /* 00013270   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00013270u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_13272:
    /* 00013272   4  move.b (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x00013272u);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_13276:
    /* 00013276   2  ext.w D0 */
    c->pc = RC_ADDR(0x00013276u);
    rc_ext_w(c, 0);

L_13278:
    /* 00013278   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00013278u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1327C:
    /* 0001327c   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001327cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_13280:
    /* 00013280   2  beq 000132c8 */
    c->pc = RC_ADDR(0x00013280u);
    if (rc_cond(c, 7)) goto L_132C8;

L_13282:
    /* 00013282   6  cmpi.w #9,(ffff83c8,A4) */
    c->pc = RC_ADDR(0x00013282u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_cmp(c, RC_W, t0, 0x00000009u);

L_13288:
    /* 00013288   2  ble 00013296 */
    c->pc = RC_ADDR(0x00013288u);
    if (rc_cond(c, 15)) goto L_13296;

L_1328A:
    /* 0001328a   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001328au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1328E:
    /* 0001328e   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x0001328eu);
    c->d[0] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_13290:
    /* 00013290   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00013290u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13294:
    /* 00013294   2  bra 000132b6 */
    c->pc = RC_ADDR(0x00013294u);
    goto L_132B6;

L_13296:
    /* 00013296   6  cmpi.w #4,(ffff83c8,A4) */
    c->pc = RC_ADDR(0x00013296u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_1329C:
    /* 0001329c   2  ble 000132b2 */
    c->pc = RC_ADDR(0x0001329cu);
    if (rc_cond(c, 15)) goto L_132B2;

L_1329E:
    /* 0001329e   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001329eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_132A2:
    /* 000132a2   2  swap D0 */
    c->pc = RC_ADDR(0x000132a2u);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_132A4:
    /* 000132a4   2  clr.w D0 */
    c->pc = RC_ADDR(0x000132a4u);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_132A6:
    /* 000132a6   2  swap D0 */
    c->pc = RC_ADDR(0x000132a6u);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_132A8:
    /* 000132a8   4  divu.w #3,D0 */
    c->pc = RC_ADDR(0x000132a8u);
    t0 = 0x00000003u;
    rc_divu(c, m, 0, t0);

L_132AC:
    /* 000132ac   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000132acu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_132B0:
    /* 000132b0   2  bra 000132b6 */
    c->pc = RC_ADDR(0x000132b0u);
    goto L_132B6;

L_132B2:
    /* 000132b2   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x000132b2u);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_132B6:
    /* 000132b6   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x000132b6u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_132BA:
    /* 000132ba   2  bcc 000132c0 */
    c->pc = RC_ADDR(0x000132bau);
    if (rc_cond(c, 4)) goto L_132C0;

L_132BC:
    /* 000132bc   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x000132bcu);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_132C0:
    /* 000132c0   6  move.w (fffffffa,A5),(fffffff8,A5) */
    c->pc = RC_ADDR(0x000132c0u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_132C6:
    /* 000132c6   2  bra 000132cc */
    c->pc = RC_ADDR(0x000132c6u);
    goto L_132CC;

L_132C8:
    /* 000132c8   4  clr.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x000132c8u);
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_132CC:
    /* 000132cc   4  move.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x000132ccu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_132D0:
    /* 000132d0   2  ext.l D0 */
    c->pc = RC_ADDR(0x000132d0u);
    rc_ext_l(c, 0);

L_132D2:
    /* 000132d2   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000132d2u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_132D4:
    /* 000132d4   4  lea (ffff8440,A4),A0 */
    c->pc = RC_ADDR(0x000132d4u);
    c->a[0] = (c->a[4] - 0x7bc0u);

L_132D8:
    /* 000132d8   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000132d8u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_132DC:
    /* 000132dc   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000132dcu);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_132DE:
    /* 000132de   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000132deu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_132E2:
    /* 000132e2   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x000132e2u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_132E4:
    /* 000132e4   4  move.b (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x000132e4u);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_132E8:
    /* 000132e8   2  ext.w D0 */
    c->pc = RC_ADDR(0x000132e8u);
    rc_ext_w(c, 0);

L_132EA:
    /* 000132ea   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x000132eau);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_132EC:
    /* 000132ec   4  cmp.w (a,A5),D0 */
    c->pc = RC_ADDR(0x000132ecu);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_132F0:
    /* 000132f0   2  bne 0001333e */
    c->pc = RC_ADDR(0x000132f0u);
    if (rc_cond(c, 6)) goto L_1333E;

L_132F2:
    /* 000132f2   6  cmpi.w #6,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000132f2u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000006u);

L_132F8:
    /* 000132f8   2  bcc 00013326 */
    c->pc = RC_ADDR(0x000132f8u);
    if (rc_cond(c, 4)) goto L_13326;

L_132FA:
    /* 000132fa   6  cmpi.w #14,(a,A5) */
    c->pc = RC_ADDR(0x000132fau);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_cmp(c, RC_W, t0, 0x00000014u);

L_13300:
    /* 00013300   2  beq 00013326 */
    c->pc = RC_ADDR(0x00013300u);
    if (rc_cond(c, 7)) goto L_13326;

L_13302:
    /* 00013302   6  move.w #5,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00013302u);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13308:
    /* 00013308   4  move.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x00013308u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1330C:
    /* 0001330c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001330cu);
    rc_ext_l(c, 0);

L_1330E:
    /* 0001330e   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001330eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_13310:
    /* 00013310   4  lea (ffff847c,A4),A0 */
    c->pc = RC_ADDR(0x00013310u);
    c->a[0] = (c->a[4] - 0x7b84u);

L_13314:
    /* 00013314   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00013314u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_13318:
    /* 00013318   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00013318u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1331A:
    /* 0001331a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001331au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1331E:
    /* 0001331e   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0001331eu);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_13320:
    /* 00013320   6  move.b #5,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00013320u);
    t0 = 0x00000005u;
    t4 = c->d[1];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_13326:
    /* 00013326   6  move.w (fffffff8,A5),(fffffd6a,A4) */
    c->pc = RC_ADDR(0x00013326u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_wr16(c, m, (c->a[4] - 0x296u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1332C:
    /* 0001332c   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001332cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13330:
    /* 00013330   4  sub.w (fffffd6a,A4),D0 */
    c->pc = RC_ADDR(0x00013330u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x296u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13334:
    /* 00013334   4  move.w D0,(10c2,A4) */
    c->pc = RC_ADDR(0x00013334u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x10c2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13338:
    /* 00013338   6  move.w (fffffffe,A5),(10c4,A4) */
    c->pc = RC_ADDR(0x00013338u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_wr16(c, m, (c->a[4] + 0x10c4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1333E:
    /* 0001333e   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001333eu);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13342:
    /* 00013342   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00013342u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13346:
    /* 00013346   4  cmp.w (fffffd5a,A4),D0 */
    c->pc = RC_ADDR(0x00013346u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a6u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1334A:
    /* 0001334a   4  bcs 0001325a */
    c->pc = RC_ADDR(0x0001334au);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1325A; }

L_1334E:
    /* 0001334e   4  clr.w (10ba,A4) */
    c->pc = RC_ADDR(0x0001334eu);
    rc_wr16(c, m, (c->a[4] + 0x10bau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13352:
    /* 00013352   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00013352u);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13356:
    /* 00013356   2  bra 00013366 */
    c->pc = RC_ADDR(0x00013356u);
    goto L_13366;

L_13358:
    /* 00013358   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x00013358u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1335C:
    /* 0001335c   4  jsr (00012fdc) */
    c->pc = RC_ADDR(0x0001335cu);
    rc_push32(c, m, RC_ADDR(0x00013360u));
    rc_depth++;
    c->pc = RC_ADDR(0x00012fdcu);
    return;

L_13360:
    /* 00013360   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00013360u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_13362:
    /* 00013362   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00013362u);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13366:
    /* 00013366   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00013366u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1336A:
    /* 0001336a   4  cmp.w (fffffd58,A4),D0 */
    c->pc = RC_ADDR(0x0001336au);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1336E:
    /* 0001336e   2  bcs 00013358 */
    c->pc = RC_ADDR(0x0001336eu);
    if (rc_cond(c, 5)) { rc_tick(); goto L_13358; }

L_13370:
    /* 00013370   4  clr.w (10bc,A4) */
    c->pc = RC_ADDR(0x00013370u);
    rc_wr16(c, m, (c->a[4] + 0x10bcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13374:
    /* 00013374   6  move.w #1,(10ba,A4) */
    c->pc = RC_ADDR(0x00013374u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x10bau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1337A:
    /* 0001337a   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001337au);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1337E:
    /* 0001337e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001337eu);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_13380:
    /* 00013380   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00013380u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13384:
    /* 00013384   4  lea (fffffd2c,A4),A0 */
    c->pc = RC_ADDR(0x00013384u);
    c->a[0] = (c->a[4] - 0x2d4u);

L_13388:
    /* 00013388   6  move.b #ff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013388u);
    t0 = 0x000000ffu;
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1338E:
    /* 0001338e   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001338eu);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13392:
    /* 00013392   6  cmpi.w #1e,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00013392u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000001eu);

L_13398:
    /* 00013398   2  bcs 0001337e */
    c->pc = RC_ADDR(0x00013398u);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1337E; }

L_1339A:
    /* 0001339a   4  tst.w (10c2,A4) */
    c->pc = RC_ADDR(0x0001339au);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10c2u));
    rc_set_nzvc(c, t0, RC_W);

L_1339E:
    /* 0001339e   2  bge 000133a6 */
    c->pc = RC_ADDR(0x0001339eu);
    if (rc_cond(c, 12)) goto L_133A6;

L_133A0:
    /* 000133a0   6  move.w #19,(10c2,A4) */
    c->pc = RC_ADDR(0x000133a0u);
    t0 = 0x00000019u;
    rc_wr16(c, m, (c->a[4] + 0x10c2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_133A6:
    /* 000133a6   4  move.w (10c2,A4),D0 */
    c->pc = RC_ADDR(0x000133a6u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10c2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_133AA:
    /* 000133aa   2  ext.l D0 */
    c->pc = RC_ADDR(0x000133aau);
    rc_ext_l(c, 0);

L_133AC:
    /* 000133ac   4  divs.w #2,D0 */
    c->pc = RC_ADDR(0x000133acu);
    t0 = 0x00000002u;
    rc_divs(c, m, 0, t0);

L_133B0:
    /* 000133b0   2  addq.w #3,D0 */
    c->pc = RC_ADDR(0x000133b0u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000003u;
    rc_flags_add(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_133B2:
    /* 000133b2   4  move.w D0,(fffffdb4,A4) */
    c->pc = RC_ADDR(0x000133b2u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x24cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_133B6:
    /* 000133b6   4  move.w (10c2,A4),D0 */
    c->pc = RC_ADDR(0x000133b6u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10c2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_133BA:
    /* 000133ba   2  ext.l D0 */
    c->pc = RC_ADDR(0x000133bau);
    rc_ext_l(c, 0);

L_133BC:
    /* 000133bc   4  divs.w #2,D0 */
    c->pc = RC_ADDR(0x000133bcu);
    t0 = 0x00000002u;
    rc_divs(c, m, 0, t0);

L_133C0:
    /* 000133c0   2  addq.w #4,D0 */
    c->pc = RC_ADDR(0x000133c0u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000004u;
    rc_flags_add(c, RC_W, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_133C2:
    /* 000133c2   4  move.w D0,(fffffdb2,A4) */
    c->pc = RC_ADDR(0x000133c2u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x24eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_133C6:
    /* 000133c6   4  bra 0001322e */
    c->pc = RC_ADDR(0x000133c6u);
    rc_tick();
    goto L_1322E;

}
