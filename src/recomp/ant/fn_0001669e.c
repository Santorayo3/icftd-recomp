/* fn_0001669e - 516 byte(s), 170 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001669e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001669eu): goto L_1669E;
    case RC_ADDR(0x000166a2u): goto L_166A2;
    case RC_ADDR(0x000166a4u): goto L_166A4;
    case RC_ADDR(0x000166a8u): goto L_166A8;
    case RC_ADDR(0x000166aau): goto L_166AA;
    case RC_ADDR(0x000166b0u): goto L_166B0;
    case RC_ADDR(0x000166b6u): goto L_166B6;
    case RC_ADDR(0x000166bcu): goto L_166BC;
    case RC_ADDR(0x000166beu): goto L_166BE;
    case RC_ADDR(0x000166c4u): goto L_166C4;
    case RC_ADDR(0x000166cau): goto L_166CA;
    case RC_ADDR(0x000166ceu): goto L_166CE;
    case RC_ADDR(0x000166d2u): goto L_166D2;
    case RC_ADDR(0x000166d6u): goto L_166D6;
    case RC_ADDR(0x000166dau): goto L_166DA;
    case RC_ADDR(0x000166deu): goto L_166DE;
    case RC_ADDR(0x000166e2u): goto L_166E2;
    case RC_ADDR(0x000166e6u): goto L_166E6;
    case RC_ADDR(0x000166eau): goto L_166EA;
    case RC_ADDR(0x000166eeu): goto L_166EE;
    case RC_ADDR(0x000166f2u): goto L_166F2;
    case RC_ADDR(0x000166f4u): goto L_166F4;
    case RC_ADDR(0x000166f8u): goto L_166F8;
    case RC_ADDR(0x000166fau): goto L_166FA;
    case RC_ADDR(0x000166fcu): goto L_166FC;
    case RC_ADDR(0x000166feu): goto L_166FE;
    case RC_ADDR(0x00016702u): goto L_16702;
    case RC_ADDR(0x00016706u): goto L_16706;
    case RC_ADDR(0x00016708u): goto L_16708;
    case RC_ADDR(0x0001670au): goto L_1670A;
    case RC_ADDR(0x0001670cu): goto L_1670C;
    case RC_ADDR(0x0001670eu): goto L_1670E;
    case RC_ADDR(0x00016710u): goto L_16710;
    case RC_ADDR(0x00016712u): goto L_16712;
    case RC_ADDR(0x00016716u): goto L_16716;
    case RC_ADDR(0x0001671au): goto L_1671A;
    case RC_ADDR(0x0001671cu): goto L_1671C;
    case RC_ADDR(0x00016720u): goto L_16720;
    case RC_ADDR(0x00016722u): goto L_16722;
    case RC_ADDR(0x00016726u): goto L_16726;
    case RC_ADDR(0x00016728u): goto L_16728;
    case RC_ADDR(0x0001672au): goto L_1672A;
    case RC_ADDR(0x0001672cu): goto L_1672C;
    case RC_ADDR(0x00016730u): goto L_16730;
    case RC_ADDR(0x00016734u): goto L_16734;
    case RC_ADDR(0x00016736u): goto L_16736;
    case RC_ADDR(0x00016738u): goto L_16738;
    case RC_ADDR(0x0001673au): goto L_1673A;
    case RC_ADDR(0x0001673cu): goto L_1673C;
    case RC_ADDR(0x0001673eu): goto L_1673E;
    case RC_ADDR(0x00016740u): goto L_16740;
    case RC_ADDR(0x00016744u): goto L_16744;
    case RC_ADDR(0x00016748u): goto L_16748;
    case RC_ADDR(0x0001674cu): goto L_1674C;
    case RC_ADDR(0x00016750u): goto L_16750;
    case RC_ADDR(0x00016752u): goto L_16752;
    case RC_ADDR(0x00016756u): goto L_16756;
    case RC_ADDR(0x0001675au): goto L_1675A;
    case RC_ADDR(0x0001675cu): goto L_1675C;
    case RC_ADDR(0x0001675eu): goto L_1675E;
    case RC_ADDR(0x00016760u): goto L_16760;
    case RC_ADDR(0x00016762u): goto L_16762;
    case RC_ADDR(0x00016764u): goto L_16764;
    case RC_ADDR(0x00016766u): goto L_16766;
    case RC_ADDR(0x0001676au): goto L_1676A;
    case RC_ADDR(0x0001676cu): goto L_1676C;
    case RC_ADDR(0x0001676eu): goto L_1676E;
    case RC_ADDR(0x00016770u): goto L_16770;
    case RC_ADDR(0x00016774u): goto L_16774;
    case RC_ADDR(0x0001677au): goto L_1677A;
    case RC_ADDR(0x0001677cu): goto L_1677C;
    case RC_ADDR(0x0001677eu): goto L_1677E;
    case RC_ADDR(0x00016780u): goto L_16780;
    case RC_ADDR(0x00016784u): goto L_16784;
    case RC_ADDR(0x0001678au): goto L_1678A;
    case RC_ADDR(0x0001678cu): goto L_1678C;
    case RC_ADDR(0x0001678eu): goto L_1678E;
    case RC_ADDR(0x00016790u): goto L_16790;
    case RC_ADDR(0x00016794u): goto L_16794;
    case RC_ADDR(0x00016798u): goto L_16798;
    case RC_ADDR(0x0001679au): goto L_1679A;
    case RC_ADDR(0x0001679cu): goto L_1679C;
    case RC_ADDR(0x0001679eu): goto L_1679E;
    case RC_ADDR(0x000167a2u): goto L_167A2;
    case RC_ADDR(0x000167a6u): goto L_167A6;
    case RC_ADDR(0x000167a8u): goto L_167A8;
    case RC_ADDR(0x000167aau): goto L_167AA;
    case RC_ADDR(0x000167aeu): goto L_167AE;
    case RC_ADDR(0x000167b0u): goto L_167B0;
    case RC_ADDR(0x000167b2u): goto L_167B2;
    case RC_ADDR(0x000167b4u): goto L_167B4;
    case RC_ADDR(0x000167b8u): goto L_167B8;
    case RC_ADDR(0x000167beu): goto L_167BE;
    case RC_ADDR(0x000167c0u): goto L_167C0;
    case RC_ADDR(0x000167c2u): goto L_167C2;
    case RC_ADDR(0x000167c4u): goto L_167C4;
    case RC_ADDR(0x000167c8u): goto L_167C8;
    case RC_ADDR(0x000167cau): goto L_167CA;
    case RC_ADDR(0x000167ccu): goto L_167CC;
    case RC_ADDR(0x000167ceu): goto L_167CE;
    case RC_ADDR(0x000167d2u): goto L_167D2;
    case RC_ADDR(0x000167d8u): goto L_167D8;
    case RC_ADDR(0x000167dau): goto L_167DA;
    case RC_ADDR(0x000167dcu): goto L_167DC;
    case RC_ADDR(0x000167deu): goto L_167DE;
    case RC_ADDR(0x000167e2u): goto L_167E2;
    case RC_ADDR(0x000167e6u): goto L_167E6;
    case RC_ADDR(0x000167e8u): goto L_167E8;
    case RC_ADDR(0x000167eau): goto L_167EA;
    case RC_ADDR(0x000167ecu): goto L_167EC;
    case RC_ADDR(0x000167f0u): goto L_167F0;
    case RC_ADDR(0x000167f4u): goto L_167F4;
    case RC_ADDR(0x000167f6u): goto L_167F6;
    case RC_ADDR(0x000167f8u): goto L_167F8;
    case RC_ADDR(0x000167fcu): goto L_167FC;
    case RC_ADDR(0x000167feu): goto L_167FE;
    case RC_ADDR(0x00016800u): goto L_16800;
    case RC_ADDR(0x00016802u): goto L_16802;
    case RC_ADDR(0x00016806u): goto L_16806;
    case RC_ADDR(0x0001680cu): goto L_1680C;
    case RC_ADDR(0x0001680eu): goto L_1680E;
    case RC_ADDR(0x00016810u): goto L_16810;
    case RC_ADDR(0x00016812u): goto L_16812;
    case RC_ADDR(0x00016816u): goto L_16816;
    case RC_ADDR(0x00016818u): goto L_16818;
    case RC_ADDR(0x0001681au): goto L_1681A;
    case RC_ADDR(0x0001681cu): goto L_1681C;
    case RC_ADDR(0x00016820u): goto L_16820;
    case RC_ADDR(0x00016826u): goto L_16826;
    case RC_ADDR(0x00016828u): goto L_16828;
    case RC_ADDR(0x0001682au): goto L_1682A;
    case RC_ADDR(0x0001682cu): goto L_1682C;
    case RC_ADDR(0x00016830u): goto L_16830;
    case RC_ADDR(0x00016834u): goto L_16834;
    case RC_ADDR(0x00016836u): goto L_16836;
    case RC_ADDR(0x00016838u): goto L_16838;
    case RC_ADDR(0x0001683au): goto L_1683A;
    case RC_ADDR(0x0001683eu): goto L_1683E;
    case RC_ADDR(0x00016844u): goto L_16844;
    case RC_ADDR(0x00016846u): goto L_16846;
    case RC_ADDR(0x00016848u): goto L_16848;
    case RC_ADDR(0x0001684au): goto L_1684A;
    case RC_ADDR(0x0001684eu): goto L_1684E;
    case RC_ADDR(0x00016852u): goto L_16852;
    case RC_ADDR(0x00016854u): goto L_16854;
    case RC_ADDR(0x00016856u): goto L_16856;
    case RC_ADDR(0x00016858u): goto L_16858;
    case RC_ADDR(0x0001685cu): goto L_1685C;
    case RC_ADDR(0x00016860u): goto L_16860;
    case RC_ADDR(0x00016864u): goto L_16864;
    case RC_ADDR(0x00016868u): goto L_16868;
    case RC_ADDR(0x0001686au): goto L_1686A;
    case RC_ADDR(0x0001686eu): goto L_1686E;
    case RC_ADDR(0x00016870u): goto L_16870;
    case RC_ADDR(0x00016872u): goto L_16872;
    case RC_ADDR(0x00016874u): goto L_16874;
    case RC_ADDR(0x00016876u): goto L_16876;
    case RC_ADDR(0x0001687au): goto L_1687A;
    case RC_ADDR(0x00016880u): goto L_16880;
    case RC_ADDR(0x00016882u): goto L_16882;
    case RC_ADDR(0x00016884u): goto L_16884;
    case RC_ADDR(0x00016886u): goto L_16886;
    case RC_ADDR(0x00016888u): goto L_16888;
    case RC_ADDR(0x0001688cu): goto L_1688C;
    case RC_ADDR(0x00016892u): goto L_16892;
    case RC_ADDR(0x00016894u): goto L_16894;
    case RC_ADDR(0x00016898u): goto L_16898;
    case RC_ADDR(0x0001689cu): goto L_1689C;
    case RC_ADDR(0x0001689eu): goto L_1689E;
    case RC_ADDR(0x000168a0u): goto L_168A0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1669E:
    /* 0001669e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001669eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_166A2:
    /* 000166a2   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x000166a2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_166A4:
    /* 000166a4   4  tst.w (1aba,A4) */
    c->pc = RC_ADDR(0x000166a4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1abau));
    rc_set_nzvc(c, t0, RC_W);

L_166A8:
    /* 000166a8   2  bge 000166b0 */
    c->pc = RC_ADDR(0x000166a8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_166B0;

L_166AA:
    /* 000166aa   6  move.w #3,(1aba,A4) */
    c->pc = RC_ADDR(0x000166aau);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0x1abau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_166B0:
    /* 000166b0   6  move.w (8,A5),(1ca0,A4) */
    c->pc = RC_ADDR(0x000166b0u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_wr16(c, m, (c->a[4] + 0x1ca0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_166B6:
    /* 000166b6   6  cmpi.w #4,(1ca0,A4) */
    c->pc = RC_ADDR(0x000166b6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ca0u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_166BC:
    /* 000166bc   2  ble 000166c4 */
    c->pc = RC_ADDR(0x000166bcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_166C4;

L_166BE:
    /* 000166be   6  move.w #4,(1ca0,A4) */
    c->pc = RC_ADDR(0x000166beu);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x1ca0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_166C4:
    /* 000166c4   6  move.w (1ca0,A4),(1ca2,A4) */
    c->pc = RC_ADDR(0x000166c4u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ca0u));
    rc_wr16(c, m, (c->a[4] + 0x1ca2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_166CA:
    /* 000166ca   4  pea (1b9a,A4) */
    c->pc = RC_ADDR(0x000166cau);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1b9au));

L_166CE:
    /* 000166ce   4  move.w #8,-(A7) */
    c->pc = RC_ADDR(0x000166ceu);
    rc_step(c, m, 12);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_166D2:
    /* 000166d2   4  pea (000168a2) */
    c->pc = RC_ADDR(0x000166d2u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000168a2u));

L_166D6:
    /* 000166d6   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x000166d6u);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x000166dau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001850eu);
    return;

L_166DA:
    /* 000166da   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000166dau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_166DE:
    /* 000166de   4  pea (1bba,A4) */
    c->pc = RC_ADDR(0x000166deu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1bbau));

L_166E2:
    /* 000166e2   4  move.w #9,-(A7) */
    c->pc = RC_ADDR(0x000166e2u);
    rc_step(c, m, 12);
    t0 = 0x00000009u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_166E6:
    /* 000166e6   4  pea (000168a7) */
    c->pc = RC_ADDR(0x000166e6u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000168a7u));

L_166EA:
    /* 000166ea   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x000166eau);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x000166eeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001850eu);
    return;

L_166EE:
    /* 000166ee   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000166eeu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_166F2:
    /* 000166f2   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x000166f2u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_166F4:
    /* 000166f4   4  bra 00016894 */
    c->pc = RC_ADDR(0x000166f4u);
    rc_step(c, m, 10);
    goto L_16894;

L_166F8:
    /* 000166f8   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x000166f8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_166FA:
    /* 000166fa   2  ext.l D0 */
    c->pc = RC_ADDR(0x000166fau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_166FC:
    /* 000166fc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000166fcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_166FE:
    /* 000166fe   4  lea (1bde,A4),A0 */
    c->pc = RC_ADDR(0x000166feu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1bdeu);

L_16702:
    /* 00016702   4  move.w (1aba,A4),D1 */
    c->pc = RC_ADDR(0x00016702u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1abau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16706:
    /* 00016706   2  ext.l D1 */
    c->pc = RC_ADDR(0x00016706u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_16708:
    /* 00016708   2  asl.l #3,D1 */
    c->pc = RC_ADDR(0x00016708u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 1, RC_L), RC_L));

L_1670A:
    /* 0001670a   2  move.w D4,D2 */
    c->pc = RC_ADDR(0x0001670au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1670C:
    /* 0001670c   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001670cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_1670E:
    /* 0001670e   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001670eu);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_16710:
    /* 00016710   2  add.l D2,D1 */
    c->pc = RC_ADDR(0x00016710u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_16712:
    /* 00016712   4  lea (ffffb4ca,A4),A1 */
    c->pc = RC_ADDR(0x00016712u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4b36u);

L_16716:
    /* 00016716   4  move.w (fffffaa6,A4),D2 */
    c->pc = RC_ADDR(0x00016716u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x55au));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1671A:
    /* 0001671a   2  asl.w #4,D2 */
    c->pc = RC_ADDR(0x0001671au);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 0, 1, 0x00000004u, rc_d_get(c, 2, RC_W), RC_W));

L_1671C:
    /* 0001671c   4  move.w (0,A1,D1.w),D3 */
    c->pc = RC_ADDR(0x0001671cu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16720:
    /* 00016720   2  add.w D2,D3 */
    c->pc = RC_ADDR(0x00016720u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_16722:
    /* 00016722   4  move.w D3,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016722u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 3, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16726:
    /* 00016726   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00016726u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16728:
    /* 00016728   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016728u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1672A:
    /* 0001672a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001672au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1672C:
    /* 0001672c   4  lea (1be6,A4),A0 */
    c->pc = RC_ADDR(0x0001672cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1be6u);

L_16730:
    /* 00016730   4  move.w (1aba,A4),D1 */
    c->pc = RC_ADDR(0x00016730u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1abau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16734:
    /* 00016734   2  ext.l D1 */
    c->pc = RC_ADDR(0x00016734u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_16736:
    /* 00016736   2  asl.l #3,D1 */
    c->pc = RC_ADDR(0x00016736u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 1, RC_L), RC_L));

L_16738:
    /* 00016738   2  move.w D4,D2 */
    c->pc = RC_ADDR(0x00016738u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1673A:
    /* 0001673a   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001673au);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_1673C:
    /* 0001673c   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001673cu);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_1673E:
    /* 0001673e   2  add.l D2,D1 */
    c->pc = RC_ADDR(0x0001673eu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_16740:
    /* 00016740   4  lea (ffffb4ea,A4),A1 */
    c->pc = RC_ADDR(0x00016740u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4b16u);

L_16744:
    /* 00016744   4  move.w (fffffaa4,A4),D2 */
    c->pc = RC_ADDR(0x00016744u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x55cu));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16748:
    /* 00016748   4  muls.w #a,D2 */
    c->pc = RC_ADDR(0x00016748u);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 2, t0);

L_1674C:
    /* 0001674c   4  move.w (0,A1,D1.w),D3 */
    c->pc = RC_ADDR(0x0001674cu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16750:
    /* 00016750   2  add.w D2,D3 */
    c->pc = RC_ADDR(0x00016750u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_16752:
    /* 00016752   4  move.w D3,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016752u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 3, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16756:
    /* 00016756   4  move.w (1aba,A4),D0 */
    c->pc = RC_ADDR(0x00016756u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1abau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1675A:
    /* 0001675a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001675au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1675C:
    /* 0001675c   2  asl.l #3,D0 */
    c->pc = RC_ADDR(0x0001675cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_L), RC_L));

L_1675E:
    /* 0001675e   2  move.w D4,D1 */
    c->pc = RC_ADDR(0x0001675eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16760:
    /* 00016760   2  ext.l D1 */
    c->pc = RC_ADDR(0x00016760u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_16762:
    /* 00016762   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00016762u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_16764:
    /* 00016764   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00016764u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_16766:
    /* 00016766   4  lea (ffffb50a,A4),A0 */
    c->pc = RC_ADDR(0x00016766u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4af6u);

L_1676A:
    /* 0001676a   2  move.w D4,D1 */
    c->pc = RC_ADDR(0x0001676au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1676C:
    /* 0001676c   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001676cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1676E:
    /* 0001676e   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001676eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_16770:
    /* 00016770   4  lea (1c06,A4),A1 */
    c->pc = RC_ADDR(0x00016770u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1c06u);

L_16774:
    /* 00016774   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00016774u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1677A:
    /* 0001677a   2  move.w D4,D1 */
    c->pc = RC_ADDR(0x0001677au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1677C:
    /* 0001677c   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001677cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1677E:
    /* 0001677e   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001677eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_16780:
    /* 00016780   4  lea (1bee,A4),A1 */
    c->pc = RC_ADDR(0x00016780u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1beeu);

L_16784:
    /* 00016784   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00016784u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1678A:
    /* 0001678a   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x0001678au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1678C:
    /* 0001678c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001678cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1678E:
    /* 0001678e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001678eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16790:
    /* 00016790   4  lea (1c0e,A4),A0 */
    c->pc = RC_ADDR(0x00016790u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c0eu);

L_16794:
    /* 00016794   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016794u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16798:
    /* 00016798   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00016798u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1679A:
    /* 0001679a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001679au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1679C:
    /* 0001679c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001679cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1679E:
    /* 0001679e   4  lea (1bee,A4),A0 */
    c->pc = RC_ADDR(0x0001679eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1beeu);

L_167A2:
    /* 000167a2   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000167a2u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_167A6:
    /* 000167a6   2  ext.l D1 */
    c->pc = RC_ADDR(0x000167a6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_167A8:
    /* 000167a8   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000167a8u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_167AA:
    /* 000167aa   4  lea (ffffb44a,A4),A0 */
    c->pc = RC_ADDR(0x000167aau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4bb6u);

L_167AE:
    /* 000167ae   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x000167aeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_167B0:
    /* 000167b0   2  ext.l D0 */
    c->pc = RC_ADDR(0x000167b0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_167B2:
    /* 000167b2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000167b2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_167B4:
    /* 000167b4   4  lea (1bfe,A4),A1 */
    c->pc = RC_ADDR(0x000167b4u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1bfeu);

L_167B8:
    /* 000167b8   6  move.w (0,A0,D1.w),(0,A1,D0.w) */
    c->pc = RC_ADDR(0x000167b8u);
    rc_step(c, m, 24);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_167BE:
    /* 000167be   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x000167beu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_167C0:
    /* 000167c0   2  ext.l D0 */
    c->pc = RC_ADDR(0x000167c0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_167C2:
    /* 000167c2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000167c2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_167C4:
    /* 000167c4   4  lea (1bfe,A4),A0 */
    c->pc = RC_ADDR(0x000167c4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1bfeu);

L_167C8:
    /* 000167c8   2  move.w D4,D1 */
    c->pc = RC_ADDR(0x000167c8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_167CA:
    /* 000167ca   2  ext.l D1 */
    c->pc = RC_ADDR(0x000167cau);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_167CC:
    /* 000167cc   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000167ccu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_167CE:
    /* 000167ce   4  lea (1c2e,A4),A1 */
    c->pc = RC_ADDR(0x000167ceu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1c2eu);

L_167D2:
    /* 000167d2   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x000167d2u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_167D8:
    /* 000167d8   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x000167d8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_167DA:
    /* 000167da   2  ext.l D0 */
    c->pc = RC_ADDR(0x000167dau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_167DC:
    /* 000167dc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000167dcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_167DE:
    /* 000167de   4  lea (1c16,A4),A0 */
    c->pc = RC_ADDR(0x000167deu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c16u);

L_167E2:
    /* 000167e2   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000167e2u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_167E6:
    /* 000167e6   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x000167e6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_167E8:
    /* 000167e8   2  ext.l D0 */
    c->pc = RC_ADDR(0x000167e8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_167EA:
    /* 000167ea   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000167eau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_167EC:
    /* 000167ec   4  lea (1bee,A4),A0 */
    c->pc = RC_ADDR(0x000167ecu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1beeu);

L_167F0:
    /* 000167f0   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000167f0u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_167F4:
    /* 000167f4   2  ext.l D1 */
    c->pc = RC_ADDR(0x000167f4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_167F6:
    /* 000167f6   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000167f6u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_167F8:
    /* 000167f8   4  lea (ffffb460,A4),A0 */
    c->pc = RC_ADDR(0x000167f8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4ba0u);

L_167FC:
    /* 000167fc   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x000167fcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_167FE:
    /* 000167fe   2  ext.l D0 */
    c->pc = RC_ADDR(0x000167feu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16800:
    /* 00016800   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016800u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16802:
    /* 00016802   4  lea (1bf6,A4),A1 */
    c->pc = RC_ADDR(0x00016802u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1bf6u);

L_16806:
    /* 00016806   6  move.w (0,A0,D1.w),(0,A1,D0.w) */
    c->pc = RC_ADDR(0x00016806u);
    rc_step(c, m, 24);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1680C:
    /* 0001680c   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x0001680cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1680E:
    /* 0001680e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001680eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16810:
    /* 00016810   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016810u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16812:
    /* 00016812   4  lea (1bf6,A4),A0 */
    c->pc = RC_ADDR(0x00016812u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1bf6u);

L_16816:
    /* 00016816   2  move.w D4,D1 */
    c->pc = RC_ADDR(0x00016816u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16818:
    /* 00016818   2  ext.l D1 */
    c->pc = RC_ADDR(0x00016818u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1681A:
    /* 0001681a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001681au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1681C:
    /* 0001681c   4  lea (1c36,A4),A1 */
    c->pc = RC_ADDR(0x0001681cu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1c36u);

L_16820:
    /* 00016820   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00016820u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16826:
    /* 00016826   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00016826u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16828:
    /* 00016828   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016828u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1682A:
    /* 0001682a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001682au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1682C:
    /* 0001682c   4  lea (1c66,A4),A0 */
    c->pc = RC_ADDR(0x0001682cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c66u);

L_16830:
    /* 00016830   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016830u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16834:
    /* 00016834   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00016834u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16836:
    /* 00016836   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016836u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16838:
    /* 00016838   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016838u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1683A:
    /* 0001683a   4  lea (1c4c,A4),A0 */
    c->pc = RC_ADDR(0x0001683au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c4cu);

L_1683E:
    /* 0001683e   6  move.w #fff2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001683eu);
    rc_step(c, m, 18);
    t0 = 0x0000fff2u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16844:
    /* 00016844   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00016844u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16846:
    /* 00016846   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016846u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16848:
    /* 00016848   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016848u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1684A:
    /* 0001684a   4  lea (1c42,A4),A0 */
    c->pc = RC_ADDR(0x0001684au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c42u);

L_1684E:
    /* 0001684e   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001684eu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16852:
    /* 00016852   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00016852u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16854:
    /* 00016854   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016854u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16856:
    /* 00016856   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016856u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16858:
    /* 00016858   4  lea (1c74,A4),A0 */
    c->pc = RC_ADDR(0x00016858u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c74u);

L_1685C:
    /* 0001685c   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001685cu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16860:
    /* 00016860   4  move.w #3e8,-(A7) */
    c->pc = RC_ADDR(0x00016860u);
    rc_step(c, m, 12);
    t0 = 0x000003e8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16864:
    /* 00016864   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x00016864u);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x00016868u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_16868:
    /* 00016868   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00016868u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1686A:
    /* 0001686a   4  cmp.w #1f4,D0 */
    c->pc = RC_ADDR(0x0001686au);
    rc_step(c, m, 8);
    t0 = 0x000001f4u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1686E:
    /* 0001686e   2  bge 00016882 */
    c->pc = RC_ADDR(0x0001686eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_16882;

L_16870:
    /* 00016870   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00016870u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16872:
    /* 00016872   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016872u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16874:
    /* 00016874   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016874u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16876:
    /* 00016876   4  lea (1c7c,A4),A0 */
    c->pc = RC_ADDR(0x00016876u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c7cu);

L_1687A:
    /* 0001687a   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001687au);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16880:
    /* 00016880   2  bra 00016892 */
    c->pc = RC_ADDR(0x00016880u);
    rc_step(c, m, 10);
    goto L_16892;

L_16882:
    /* 00016882   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00016882u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16884:
    /* 00016884   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016884u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16886:
    /* 00016886   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016886u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16888:
    /* 00016888   4  lea (1c7c,A4),A0 */
    c->pc = RC_ADDR(0x00016888u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c7cu);

L_1688C:
    /* 0001688c   6  move.w #ffff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001688cu);
    rc_step(c, m, 18);
    t0 = 0x0000ffffu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16892:
    /* 00016892   2  addq.w #1,D4 */
    c->pc = RC_ADDR(0x00016892u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_16894:
    /* 00016894   4  cmp.w (1ca0,A4),D4 */
    c->pc = RC_ADDR(0x00016894u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ca0u));
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_16898:
    /* 00016898   4  blt 000166f8 */
    c->pc = RC_ADDR(0x00016898u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_166F8; }

L_1689C:
    /* 0001689c   2  move.l (A7)+,D4 */
    c->pc = RC_ADDR(0x0001689cu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1689E:
    /* 0001689e   2  unlk A5 */
    c->pc = RC_ADDR(0x0001689eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_168A0:
    /* 000168a0   2  rts */
    c->pc = RC_ADDR(0x000168a0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
