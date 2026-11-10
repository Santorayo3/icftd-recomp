/* fn_00001392 - 264 byte(s), 71 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00001392(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case 0x00001392u: goto L_1392;
    case 0x00001398u: goto L_1398;
    case 0x0000139cu: goto L_139C;
    case 0x000013a0u: goto L_13A0;
    case 0x000013a2u: goto L_13A2;
    case 0x000013a6u: goto L_13A6;
    case 0x000013aau: goto L_13AA;
    case 0x000013aeu: goto L_13AE;
    case 0x000013b2u: goto L_13B2;
    case 0x000013b6u: goto L_13B6;
    case 0x000013b8u: goto L_13B8;
    case 0x000013bcu: goto L_13BC;
    case 0x000013beu: goto L_13BE;
    case 0x000013c2u: goto L_13C2;
    case 0x000013c6u: goto L_13C6;
    case 0x000013c8u: goto L_13C8;
    case 0x000013cau: goto L_13CA;
    case 0x000013ceu: goto L_13CE;
    case 0x000013d0u: goto L_13D0;
    case 0x000013d4u: goto L_13D4;
    case 0x000013d8u: goto L_13D8;
    case 0x000013dcu: goto L_13DC;
    case 0x000013e0u: goto L_13E0;
    case 0x000013e4u: goto L_13E4;
    case 0x000013e8u: goto L_13E8;
    case 0x000013ecu: goto L_13EC;
    case 0x000013f0u: goto L_13F0;
    case 0x000013f4u: goto L_13F4;
    case 0x000013f6u: goto L_13F6;
    case 0x000013fau: goto L_13FA;
    case 0x000013fcu: goto L_13FC;
    case 0x00001400u: goto L_1400;
    case 0x00001404u: goto L_1404;
    case 0x00001408u: goto L_1408;
    case 0x0000140cu: goto L_140C;
    case 0x00001410u: goto L_1410;
    case 0x00001414u: goto L_1414;
    case 0x00001418u: goto L_1418;
    case 0x0000141cu: goto L_141C;
    case 0x00001420u: goto L_1420;
    case 0x00001424u: goto L_1424;
    case 0x00001428u: goto L_1428;
    case 0x0000142cu: goto L_142C;
    case 0x00001430u: goto L_1430;
    case 0x00001434u: goto L_1434;
    case 0x00001438u: goto L_1438;
    case 0x0000143cu: goto L_143C;
    case 0x00001440u: goto L_1440;
    case 0x00001444u: goto L_1444;
    case 0x00001448u: goto L_1448;
    case 0x0000144cu: goto L_144C;
    case 0x0000144eu: goto L_144E;
    case 0x00001452u: goto L_1452;
    case 0x00001456u: goto L_1456;
    case 0x0000145au: goto L_145A;
    case 0x0000145eu: goto L_145E;
    case 0x00001462u: goto L_1462;
    case 0x00001466u: goto L_1466;
    case 0x00001468u: goto L_1468;
    case 0x0000146au: goto L_146A;
    case 0x00001470u: goto L_1470;
    case 0x00001474u: goto L_1474;
    case 0x00001478u: goto L_1478;
    case 0x0000147au: goto L_147A;
    case 0x0000147eu: goto L_147E;
    case 0x00001482u: goto L_1482;
    case 0x00001486u: goto L_1486;
    case 0x00001488u: goto L_1488;
    case 0x0000148cu: goto L_148C;
    case 0x00001492u: goto L_1492;
    case 0x00001498u: goto L_1498;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1392:
    /* 00001392   6  pea (00010001).l */
    c->pc = 0x00001392u;
    rc_push32(c, m, 0x00010001u);

L_1398:
    /* 00001398   4  pea (0000000e).l */
    c->pc = 0x00001398u;
    rc_push32(c, m, 0x0000000eu);

L_139C:
    /* 0000139c   4  jsr (ffff8338,A4) */
    c->pc = 0x0000139cu;
    /* vector 137: exec.library -198 */
    c->pc = 0x000013a0u;
    rc_os_call(c, m, 0, -198);

L_13A0:
    /* 000013a0   2  addq.w #8,A7 */
    c->pc = 0x000013a0u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_13A2:
    /* 000013a2   4  movea.l (fffffff4,A5),A0 */
    c->pc = 0x000013a2u;
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_13A6:
    /* 000013a6   4  move.l D0,(a,A0) */
    c->pc = 0x000013a6u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[0] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_13AA:
    /* 000013aa   4  move.l D0,(fffffff0,A5) */
    c->pc = 0x000013aau;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_13AE:
    /* 000013ae   4  move.l (fffffffc,A5),-(A7) */
    c->pc = 0x000013aeu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13B2:
    /* 000013b2   4  jsr (00000fea) */
    c->pc = 0x000013b2u;
    rc_push32(c, m, 0x000013b6u);
    rc_depth++;
    c->pc = 0x00000feau;
    return;

L_13B6:
    /* 000013b6   2  addq.w #4,A7 */
    c->pc = 0x000013b6u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_13B8:
    /* 000013b8   4  movea.l (fffffff0,A5),A0 */
    c->pc = 0x000013b8u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[0] = t0;

L_13BC:
    /* 000013bc   2  move.l D0,(A0) */
    c->pc = 0x000013bcu;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13BE:
    /* 000013be   4  move.l (fffffffc,A5),-(A7) */
    c->pc = 0x000013beu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13C2:
    /* 000013c2   4  movea.l (fffffff0,A5),A0 */
    c->pc = 0x000013c2u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[0] = t0;

L_13C6:
    /* 000013c6   2  addq.l #4,A0 */
    c->pc = 0x000013c6u;
    c->a[0] += 0x00000004u;

L_13C8:
    /* 000013c8   2  move.l A0,-(A7) */
    c->pc = 0x000013c8u;
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13CA:
    /* 000013ca   4  jsr (00001042) */
    c->pc = 0x000013cau;
    rc_push32(c, m, 0x000013ceu);
    rc_depth++;
    c->pc = 0x00001042u;
    return;

L_13CE:
    /* 000013ce   2  addq.w #8,A7 */
    c->pc = 0x000013ceu;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_13D0:
    /* 000013d0   4  pea (00000001).l */
    c->pc = 0x000013d0u;
    rc_push32(c, m, 0x00000001u);

L_13D4:
    /* 000013d4   4  movea.l (fffffff0,A5),A0 */
    c->pc = 0x000013d4u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[0] = t0;

L_13D8:
    /* 000013d8   4  pea (c,A0) */
    c->pc = 0x000013d8u;
    rc_push32(c, m, (c->a[0] + 0xcu));

L_13DC:
    /* 000013dc   4  move.l (fffffffc,A5),-(A7) */
    c->pc = 0x000013dcu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13E0:
    /* 000013e0   4  jsr (ffff8314,A4) */
    c->pc = 0x000013e0u;
    /* vector 131 */
    rc_push32(c, m, 0x000013e4u);
    rc_depth++;
    c->pc = 0x00021476u;
    return;

L_13E4:
    /* 000013e4   4  lea (c,A7),A7 */
    c->pc = 0x000013e4u;
    c->a[7] = (c->a[7] + 0xcu);

L_13E8:
    /* 000013e8   4  addq.w #1,(ffffffd8,A5) */
    c->pc = 0x000013e8u;
    t3 = (c->a[5] - 0x28u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13EC:
    /* 000013ec   4  movea.l (fffffff4,A5),A0 */
    c->pc = 0x000013ecu;
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_13F0:
    /* 000013f0   4  move.b (9,A0),D0 */
    c->pc = 0x000013f0u;
    t0 = rc_rd8(c, m, (c->a[0] + 0x9u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_13F4:
    /* 000013f4   2  ext.w D0 */
    c->pc = 0x000013f4u;
    rc_ext_w(c, 0);

L_13F6:
    /* 000013f6   4  move.w (ffffffd8,A5),D1 */
    c->pc = 0x000013f6u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x28u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13FA:
    /* 000013fa   2  cmp.w D0,D1 */
    c->pc = 0x000013fau;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13FC:
    /* 000013fc   4  bcs 00001368 */
    c->pc = 0x000013fcu;
    if (rc_cond(c, 5))
    {
        c->pc = 0x00001368u;
        return;
    }

L_1400:
    /* 00001400   4  pea (00000002).l */
    c->pc = 0x00001400u;
    rc_push32(c, m, 0x00000002u);

L_1404:
    /* 00001404   4  movea.l (fffffff4,A5),A0 */
    c->pc = 0x00001404u;
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_1408:
    /* 00001408   4  pea (24,A0) */
    c->pc = 0x00001408u;
    rc_push32(c, m, (c->a[0] + 0x24u));

L_140C:
    /* 0000140c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = 0x0000140cu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1410:
    /* 00001410   4  jsr (ffff8314,A4) */
    c->pc = 0x00001410u;
    /* vector 131 */
    rc_push32(c, m, 0x00001414u);
    rc_depth++;
    c->pc = 0x00021476u;
    return;

L_1414:
    /* 00001414   4  lea (c,A7),A7 */
    c->pc = 0x00001414u;
    c->a[7] = (c->a[7] + 0xcu);

L_1418:
    /* 00001418   4  pea (00000001).l */
    c->pc = 0x00001418u;
    rc_push32(c, m, 0x00000001u);

L_141C:
    /* 0000141c   4  movea.l (fffffff4,A5),A0 */
    c->pc = 0x0000141cu;
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_1420:
    /* 00001420   4  pea (26,A0) */
    c->pc = 0x00001420u;
    rc_push32(c, m, (c->a[0] + 0x26u));

L_1424:
    /* 00001424   4  move.l (fffffffc,A5),-(A7) */
    c->pc = 0x00001424u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1428:
    /* 00001428   4  jsr (ffff8314,A4) */
    c->pc = 0x00001428u;
    /* vector 131 */
    rc_push32(c, m, 0x0000142cu);
    rc_depth++;
    c->pc = 0x00021476u;
    return;

L_142C:
    /* 0000142c   4  lea (c,A7),A7 */
    c->pc = 0x0000142cu;
    c->a[7] = (c->a[7] + 0xcu);

L_1430:
    /* 00001430   4  pea (00000001).l */
    c->pc = 0x00001430u;
    rc_push32(c, m, 0x00000001u);

L_1434:
    /* 00001434   4  movea.l (fffffff4,A5),A0 */
    c->pc = 0x00001434u;
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_1438:
    /* 00001438   4  pea (27,A0) */
    c->pc = 0x00001438u;
    rc_push32(c, m, (c->a[0] + 0x27u));

L_143C:
    /* 0000143c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = 0x0000143cu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1440:
    /* 00001440   4  jsr (ffff8314,A4) */
    c->pc = 0x00001440u;
    /* vector 131 */
    rc_push32(c, m, 0x00001444u);
    rc_depth++;
    c->pc = 0x00021476u;
    return;

L_1444:
    /* 00001444   4  lea (c,A7),A7 */
    c->pc = 0x00001444u;
    c->a[7] = (c->a[7] + 0xcu);

L_1448:
    /* 00001448   4  movea.l (fffffff4,A5),A0 */
    c->pc = 0x00001448u;
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_144C:
    /* 0000144c   2  moveq #0,D0 */
    c->pc = 0x0000144cu;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_144E:
    /* 0000144e   4  move.b (27,A0),D0 */
    c->pc = 0x0000144eu;
    t0 = rc_rd8(c, m, (c->a[0] + 0x27u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1452:
    /* 00001452   4  move.w D0,(ffffffd8,A5) */
    c->pc = 0x00001452u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x28u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1456:
    /* 00001456   4  movea.l (fffffff4,A5),A0 */
    c->pc = 0x00001456u;
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_145A:
    /* 0000145a   4  clr.l (28,A0) */
    c->pc = 0x0000145au;
    rc_wr32(c, m, (c->a[0] + 0x28u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_145E:
    /* 0000145e   4  move.w (ffffffd8,A5),D0 */
    c->pc = 0x0000145eu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x28u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1462:
    /* 00001462   4  subq.w #1,(ffffffd8,A5) */
    c->pc = 0x00001462u;
    t3 = (c->a[5] - 0x28u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1466:
    /* 00001466   2  tst.w D0 */
    c->pc = 0x00001466u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1468:
    /* 00001468   2  beq 000014d2 */
    c->pc = 0x00001468u;
    if (rc_cond(c, 7))
    {
        c->pc = 0x000014d2u;
        return;
    }

L_146A:
    /* 0000146a   6  pea (00010001).l */
    c->pc = 0x0000146au;
    rc_push32(c, m, 0x00010001u);

L_1470:
    /* 00001470   4  pea (0000000a).l */
    c->pc = 0x00001470u;
    rc_push32(c, m, 0x0000000au);

L_1474:
    /* 00001474   4  jsr (ffff8338,A4) */
    c->pc = 0x00001474u;
    /* vector 137: exec.library -198 */
    c->pc = 0x00001478u;
    rc_os_call(c, m, 0, -198);

L_1478:
    /* 00001478   2  addq.w #8,A7 */
    c->pc = 0x00001478u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_147A:
    /* 0000147a   4  move.l D0,(ffffffe0,A5) */
    c->pc = 0x0000147au;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x20u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_147E:
    /* 0000147e   4  movea.l (fffffff4,A5),A0 */
    c->pc = 0x0000147eu;
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_1482:
    /* 00001482   4  tst.l (28,A0) */
    c->pc = 0x00001482u;
    t0 = rc_rd32(c, m, (c->a[0] + 0x28u));
    rc_set_nzvc(c, t0, RC_L);

L_1486:
    /* 00001486   2  beq 0000149a */
    c->pc = 0x00001486u;
    if (rc_cond(c, 7))
    {
        c->pc = 0x0000149au;
        return;
    }

L_1488:
    /* 00001488   4  movea.l (ffffffe4,A5),A0 */
    c->pc = 0x00001488u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x1cu));
    c->a[0] = t0;

L_148C:
    /* 0000148c   6  move.l (ffffffe0,A5),(6,A0) */
    c->pc = 0x0000148cu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x20u));
    rc_wr32(c, m, (c->a[0] + 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1492:
    /* 00001492   6  move.l (ffffffe0,A5),(ffffffe4,A5) */
    c->pc = 0x00001492u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x20u));
    rc_wr32(c, m, (c->a[5] - 0x1cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1498:
    /* 00001498   2  bra 000014aa */
    c->pc = 0x00001498u;
    c->pc = 0x000014aau;
    return;

}
