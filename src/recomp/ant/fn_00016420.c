/* fn_00016420 - 558 byte(s), 164 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00016420(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00016420u): goto L_16420;
    case RC_ADDR(0x00016424u): goto L_16424;
    case RC_ADDR(0x00016428u): goto L_16428;
    case RC_ADDR(0x0001642au): goto L_1642A;
    case RC_ADDR(0x0001642eu): goto L_1642E;
    case RC_ADDR(0x00016432u): goto L_16432;
    case RC_ADDR(0x00016436u): goto L_16436;
    case RC_ADDR(0x00016438u): goto L_16438;
    case RC_ADDR(0x0001643cu): goto L_1643C;
    case RC_ADDR(0x00016440u): goto L_16440;
    case RC_ADDR(0x00016444u): goto L_16444;
    case RC_ADDR(0x00016446u): goto L_16446;
    case RC_ADDR(0x0001644au): goto L_1644A;
    case RC_ADDR(0x0001644cu): goto L_1644C;
    case RC_ADDR(0x00016450u): goto L_16450;
    case RC_ADDR(0x00016452u): goto L_16452;
    case RC_ADDR(0x00016458u): goto L_16458;
    case RC_ADDR(0x0001645cu): goto L_1645C;
    case RC_ADDR(0x0001645eu): goto L_1645E;
    case RC_ADDR(0x00016462u): goto L_16462;
    case RC_ADDR(0x00016466u): goto L_16466;
    case RC_ADDR(0x0001646au): goto L_1646A;
    case RC_ADDR(0x0001646cu): goto L_1646C;
    case RC_ADDR(0x00016470u): goto L_16470;
    case RC_ADDR(0x00016472u): goto L_16472;
    case RC_ADDR(0x00016474u): goto L_16474;
    case RC_ADDR(0x0001647au): goto L_1647A;
    case RC_ADDR(0x0001647cu): goto L_1647C;
    case RC_ADDR(0x00016482u): goto L_16482;
    case RC_ADDR(0x00016484u): goto L_16484;
    case RC_ADDR(0x0001648au): goto L_1648A;
    case RC_ADDR(0x0001648cu): goto L_1648C;
    case RC_ADDR(0x00016490u): goto L_16490;
    case RC_ADDR(0x00016492u): goto L_16492;
    case RC_ADDR(0x00016498u): goto L_16498;
    case RC_ADDR(0x0001649au): goto L_1649A;
    case RC_ADDR(0x000164a0u): goto L_164A0;
    case RC_ADDR(0x000164a2u): goto L_164A2;
    case RC_ADDR(0x000164a8u): goto L_164A8;
    case RC_ADDR(0x000164aau): goto L_164AA;
    case RC_ADDR(0x000164b0u): goto L_164B0;
    case RC_ADDR(0x000164b2u): goto L_164B2;
    case RC_ADDR(0x000164cau): goto L_164CA;
    case RC_ADDR(0x000164d0u): goto L_164D0;
    case RC_ADDR(0x000164d2u): goto L_164D2;
    case RC_ADDR(0x000164d4u): goto L_164D4;
    case RC_ADDR(0x000164d8u): goto L_164D8;
    case RC_ADDR(0x000164dcu): goto L_164DC;
    case RC_ADDR(0x000164e0u): goto L_164E0;
    case RC_ADDR(0x000164e4u): goto L_164E4;
    case RC_ADDR(0x000164e8u): goto L_164E8;
    case RC_ADDR(0x000164ecu): goto L_164EC;
    case RC_ADDR(0x000164eeu): goto L_164EE;
    case RC_ADDR(0x000164f0u): goto L_164F0;
    case RC_ADDR(0x000164f4u): goto L_164F4;
    case RC_ADDR(0x000164f6u): goto L_164F6;
    case RC_ADDR(0x000164fau): goto L_164FA;
    case RC_ADDR(0x000164fcu): goto L_164FC;
    case RC_ADDR(0x00016500u): goto L_16500;
    case RC_ADDR(0x00016502u): goto L_16502;
    case RC_ADDR(0x00016504u): goto L_16504;
    case RC_ADDR(0x00016508u): goto L_16508;
    case RC_ADDR(0x0001650au): goto L_1650A;
    case RC_ADDR(0x0001650eu): goto L_1650E;
    case RC_ADDR(0x00016510u): goto L_16510;
    case RC_ADDR(0x00016514u): goto L_16514;
    case RC_ADDR(0x00016516u): goto L_16516;
    case RC_ADDR(0x00016518u): goto L_16518;
    case RC_ADDR(0x0001651cu): goto L_1651C;
    case RC_ADDR(0x00016520u): goto L_16520;
    case RC_ADDR(0x00016522u): goto L_16522;
    case RC_ADDR(0x00016524u): goto L_16524;
    case RC_ADDR(0x00016528u): goto L_16528;
    case RC_ADDR(0x0001652cu): goto L_1652C;
    case RC_ADDR(0x00016530u): goto L_16530;
    case RC_ADDR(0x00016534u): goto L_16534;
    case RC_ADDR(0x00016538u): goto L_16538;
    case RC_ADDR(0x0001653au): goto L_1653A;
    case RC_ADDR(0x0001653cu): goto L_1653C;
    case RC_ADDR(0x00016540u): goto L_16540;
    case RC_ADDR(0x00016544u): goto L_16544;
    case RC_ADDR(0x00016546u): goto L_16546;
    case RC_ADDR(0x00016548u): goto L_16548;
    case RC_ADDR(0x0001654cu): goto L_1654C;
    case RC_ADDR(0x00016550u): goto L_16550;
    case RC_ADDR(0x00016554u): goto L_16554;
    case RC_ADDR(0x00016558u): goto L_16558;
    case RC_ADDR(0x0001655cu): goto L_1655C;
    case RC_ADDR(0x00016560u): goto L_16560;
    case RC_ADDR(0x00016562u): goto L_16562;
    case RC_ADDR(0x00016564u): goto L_16564;
    case RC_ADDR(0x00016568u): goto L_16568;
    case RC_ADDR(0x0001656cu): goto L_1656C;
    case RC_ADDR(0x00016570u): goto L_16570;
    case RC_ADDR(0x00016572u): goto L_16572;
    case RC_ADDR(0x00016574u): goto L_16574;
    case RC_ADDR(0x00016578u): goto L_16578;
    case RC_ADDR(0x0001657cu): goto L_1657C;
    case RC_ADDR(0x00016580u): goto L_16580;
    case RC_ADDR(0x00016582u): goto L_16582;
    case RC_ADDR(0x00016586u): goto L_16586;
    case RC_ADDR(0x00016588u): goto L_16588;
    case RC_ADDR(0x0001658au): goto L_1658A;
    case RC_ADDR(0x0001658eu): goto L_1658E;
    case RC_ADDR(0x00016592u): goto L_16592;
    case RC_ADDR(0x00016596u): goto L_16596;
    case RC_ADDR(0x00016598u): goto L_16598;
    case RC_ADDR(0x0001659cu): goto L_1659C;
    case RC_ADDR(0x000165a0u): goto L_165A0;
    case RC_ADDR(0x000165a4u): goto L_165A4;
    case RC_ADDR(0x000165a8u): goto L_165A8;
    case RC_ADDR(0x000165acu): goto L_165AC;
    case RC_ADDR(0x000165b0u): goto L_165B0;
    case RC_ADDR(0x000165b4u): goto L_165B4;
    case RC_ADDR(0x000165b8u): goto L_165B8;
    case RC_ADDR(0x000165bcu): goto L_165BC;
    case RC_ADDR(0x000165beu): goto L_165BE;
    case RC_ADDR(0x000165c0u): goto L_165C0;
    case RC_ADDR(0x000165c4u): goto L_165C4;
    case RC_ADDR(0x000165c8u): goto L_165C8;
    case RC_ADDR(0x000165ccu): goto L_165CC;
    case RC_ADDR(0x000165ceu): goto L_165CE;
    case RC_ADDR(0x000165d0u): goto L_165D0;
    case RC_ADDR(0x000165d4u): goto L_165D4;
    case RC_ADDR(0x000165d8u): goto L_165D8;
    case RC_ADDR(0x000165dcu): goto L_165DC;
    case RC_ADDR(0x000165deu): goto L_165DE;
    case RC_ADDR(0x000165e0u): goto L_165E0;
    case RC_ADDR(0x000165e4u): goto L_165E4;
    case RC_ADDR(0x000165e8u): goto L_165E8;
    case RC_ADDR(0x000165ecu): goto L_165EC;
    case RC_ADDR(0x000165eeu): goto L_165EE;
    case RC_ADDR(0x000165f2u): goto L_165F2;
    case RC_ADDR(0x000165f4u): goto L_165F4;
    case RC_ADDR(0x000165f6u): goto L_165F6;
    case RC_ADDR(0x000165fau): goto L_165FA;
    case RC_ADDR(0x00016600u): goto L_16600;
    case RC_ADDR(0x00016602u): goto L_16602;
    case RC_ADDR(0x00016606u): goto L_16606;
    case RC_ADDR(0x00016608u): goto L_16608;
    case RC_ADDR(0x0001660au): goto L_1660A;
    case RC_ADDR(0x0001660eu): goto L_1660E;
    case RC_ADDR(0x00016614u): goto L_16614;
    case RC_ADDR(0x00016616u): goto L_16616;
    case RC_ADDR(0x0001661au): goto L_1661A;
    case RC_ADDR(0x0001661cu): goto L_1661C;
    case RC_ADDR(0x0001661eu): goto L_1661E;
    case RC_ADDR(0x00016622u): goto L_16622;
    case RC_ADDR(0x00016628u): goto L_16628;
    case RC_ADDR(0x0001662au): goto L_1662A;
    case RC_ADDR(0x0001662eu): goto L_1662E;
    case RC_ADDR(0x00016630u): goto L_16630;
    case RC_ADDR(0x00016632u): goto L_16632;
    case RC_ADDR(0x00016636u): goto L_16636;
    case RC_ADDR(0x0001663cu): goto L_1663C;
    case RC_ADDR(0x0001663eu): goto L_1663E;
    case RC_ADDR(0x00016644u): goto L_16644;
    case RC_ADDR(0x00016648u): goto L_16648;
    case RC_ADDR(0x0001664cu): goto L_1664C;
    case RC_ADDR(0x00016650u): goto L_16650;
    case RC_ADDR(0x00016654u): goto L_16654;
    case RC_ADDR(0x0001665au): goto L_1665A;
    case RC_ADDR(0x00016660u): goto L_16660;
    case RC_ADDR(0x00016662u): goto L_16662;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16420:
    /* 00016420   4  link.w A5,#fffffff2 */
    c->pc = RC_ADDR(0x00016420u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xeu;

L_16424:
    /* 00016424   4  tst.w (1b8c,A4) */
    c->pc = RC_ADDR(0x00016424u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b8cu));
    rc_set_nzvc(c, t0, RC_W);

L_16428:
    /* 00016428   2  bne 00016432 */
    c->pc = RC_ADDR(0x00016428u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_16432;

L_1642A:
    /* 0001642a   4  jsr (00016280) */
    c->pc = RC_ADDR(0x0001642au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001642eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00016280u);
    return;

L_1642E:
    /* 0001642e   4  bra 00016660 */
    c->pc = RC_ADDR(0x0001642eu);
    rc_step(c, m, 10);
    goto L_16660;

L_16432:
    /* 00016432   4  tst.w (1b8e,A4) */
    c->pc = RC_ADDR(0x00016432u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b8eu));
    rc_set_nzvc(c, t0, RC_W);

L_16436:
    /* 00016436   2  beq 00016446 */
    c->pc = RC_ADDR(0x00016436u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_16446;

L_16438:
    /* 00016438   4  clr.w (1b8e,A4) */
    c->pc = RC_ADDR(0x00016438u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1b8eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1643C:
    /* 0001643c   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0001643cu);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16440:
    /* 00016440   4  jsr (ffff80ce,A4) */
    c->pc = RC_ADDR(0x00016440u);
    rc_step(c, m, 18);
    /* vector 34 */
    rc_push32(c, m, RC_ADDR(0x00016444u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bc4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_16444:
    /* 00016444   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00016444u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_16446:
    /* 00016446   4  tst.w (17f2,A4) */
    c->pc = RC_ADDR(0x00016446u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f2u));
    rc_set_nzvc(c, t0, RC_W);

L_1644A:
    /* 0001644a   2  beq 00016462 */
    c->pc = RC_ADDR(0x0001644au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_16462;

L_1644C:
    /* 0001644c   4  tst.w (ffffb3f8,A4) */
    c->pc = RC_ADDR(0x0001644cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4c08u));
    rc_set_nzvc(c, t0, RC_W);

L_16450:
    /* 00016450   2  bne 0001645e */
    c->pc = RC_ADDR(0x00016450u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1645E;

L_16452:
    /* 00016452   6  move.w #1,(ffffb3f8,A4) */
    c->pc = RC_ADDR(0x00016452u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x4c08u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16458:
    /* 00016458   4  jsr (000163c8) */
    c->pc = RC_ADDR(0x00016458u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001645cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000163c8u);
    return;

L_1645C:
    /* 0001645c   2  bra 00016462 */
    c->pc = RC_ADDR(0x0001645cu);
    rc_step(c, m, 10);
    goto L_16462;

L_1645E:
    /* 0001645e   4  clr.w (ffffb3f8,A4) */
    c->pc = RC_ADDR(0x0001645eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4c08u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16462:
    /* 00016462   4  move.w (1b4e,A4),D0 */
    c->pc = RC_ADDR(0x00016462u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b4eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16466:
    /* 00016466   4  cmp.w (1b50,A4),D0 */
    c->pc = RC_ADDR(0x00016466u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b50u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1646A:
    /* 0001646a   2  beq 000164dc */
    c->pc = RC_ADDR(0x0001646au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_164DC;

L_1646C:
    /* 0001646c   4  move.w (1b4e,A4),D0 */
    c->pc = RC_ADDR(0x0001646cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b4eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16470:
    /* 00016470   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016470u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16472:
    /* 00016472   2  bra 000164ca */
    c->pc = RC_ADDR(0x00016472u);
    rc_step(c, m, 10);
    goto L_164CA;

L_16474:
    /* 00016474   6  move.w #2,(1b48,A4) */
    c->pc = RC_ADDR(0x00016474u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x1b48u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1647A:
    /* 0001647a   2  bra 000164dc */
    c->pc = RC_ADDR(0x0001647au);
    rc_step(c, m, 10);
    goto L_164DC;

L_1647C:
    /* 0001647c   6  move.w #3,(1b48,A4) */
    c->pc = RC_ADDR(0x0001647cu);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0x1b48u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16482:
    /* 00016482   2  bra 000164dc */
    c->pc = RC_ADDR(0x00016482u);
    rc_step(c, m, 10);
    goto L_164DC;

L_16484:
    /* 00016484   6  move.w #1,(1b48,A4) */
    c->pc = RC_ADDR(0x00016484u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1b48u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1648A:
    /* 0001648a   2  bra 000164dc */
    c->pc = RC_ADDR(0x0001648au);
    rc_step(c, m, 10);
    goto L_164DC;

L_1648C:
    /* 0001648c   4  clr.w (1b48,A4) */
    c->pc = RC_ADDR(0x0001648cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1b48u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16490:
    /* 00016490   2  bra 000164dc */
    c->pc = RC_ADDR(0x00016490u);
    rc_step(c, m, 10);
    goto L_164DC;

L_16492:
    /* 00016492   6  move.w #6,(1b48,A4) */
    c->pc = RC_ADDR(0x00016492u);
    rc_step(c, m, 16);
    t0 = 0x00000006u;
    rc_wr16(c, m, (c->a[4] + 0x1b48u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16498:
    /* 00016498   2  bra 000164dc */
    c->pc = RC_ADDR(0x00016498u);
    rc_step(c, m, 10);
    goto L_164DC;

L_1649A:
    /* 0001649a   6  move.w #4,(1b48,A4) */
    c->pc = RC_ADDR(0x0001649au);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x1b48u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_164A0:
    /* 000164a0   2  bra 000164dc */
    c->pc = RC_ADDR(0x000164a0u);
    rc_step(c, m, 10);
    goto L_164DC;

L_164A2:
    /* 000164a2   6  move.w #7,(1b48,A4) */
    c->pc = RC_ADDR(0x000164a2u);
    rc_step(c, m, 16);
    t0 = 0x00000007u;
    rc_wr16(c, m, (c->a[4] + 0x1b48u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_164A8:
    /* 000164a8   2  bra 000164dc */
    c->pc = RC_ADDR(0x000164a8u);
    rc_step(c, m, 10);
    goto L_164DC;

L_164AA:
    /* 000164aa   6  move.w #5,(1b48,A4) */
    c->pc = RC_ADDR(0x000164aau);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[4] + 0x1b48u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_164B0:
    /* 000164b0   2  bra 000164dc */
    c->pc = RC_ADDR(0x000164b0u);
    rc_step(c, m, 10);
    goto L_164DC;

L_164B2:
    /* 000164b2   2  bra 000164dc */
    c->pc = RC_ADDR(0x000164b2u);
    rc_step(c, m, 10);
    goto L_164DC;

L_164CA:
    /* 000164ca   6  cmp.l #b,D0 */
    c->pc = RC_ADDR(0x000164cau);
    rc_step(c, m, 14);
    t0 = 0x0000000bu;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_164D0:
    /* 000164d0   2  bcc 000164dc */
    c->pc = RC_ADDR(0x000164d0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_164DC;

L_164D2:
    /* 000164d2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000164d2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_164D4:
    /* 000164d4   4  move.w (000164b4),D0 */
    c->pc = RC_ADDR(0x000164d4u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x000164b4u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_164D8:
    /* 000164d8   4  jmp (000164da) */
    c->pc = RC_ADDR(0x000164d8u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x000164dau) + t4);
    c->pc = t3;
    return;

L_164DC:
    /* 000164dc   4  clr.w (14f4,A4) */
    c->pc = RC_ADDR(0x000164dcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x14f4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_164E0:
    /* 000164e0   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000164e0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_164E4:
    /* 000164e4   4  bra 000165a4 */
    c->pc = RC_ADDR(0x000164e4u);
    rc_step(c, m, 10);
    goto L_165A4;

L_164E8:
    /* 000164e8   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000164e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_164EC:
    /* 000164ec   2  ext.l D0 */
    c->pc = RC_ADDR(0x000164ecu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_164EE:
    /* 000164ee   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000164eeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_164F0:
    /* 000164f0   4  lea (1b52,A4),A0 */
    c->pc = RC_ADDR(0x000164f0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1b52u);

L_164F4:
    /* 000164f4   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x000164f4u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_164F6:
    /* 000164f6   4  move.w (1b4a,A4),D0 */
    c->pc = RC_ADDR(0x000164f6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b4au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_164FA:
    /* 000164fa   2  add.w D0,(A0) */
    c->pc = RC_ADDR(0x000164fau);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_164FC:
    /* 000164fc   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000164fcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16500:
    /* 00016500   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016500u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16502:
    /* 00016502   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016502u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16504:
    /* 00016504   4  lea (1b58,A4),A0 */
    c->pc = RC_ADDR(0x00016504u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1b58u);

L_16508:
    /* 00016508   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x00016508u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_1650A:
    /* 0001650a   4  move.w (1b4c,A4),D0 */
    c->pc = RC_ADDR(0x0001650au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b4cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1650E:
    /* 0001650e   2  add.w D0,(A0) */
    c->pc = RC_ADDR(0x0001650eu);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_16510:
    /* 00016510   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00016510u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16514:
    /* 00016514   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016514u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16516:
    /* 00016516   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016516u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16518:
    /* 00016518   4  lea (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00016518u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x8u);

L_1651C:
    /* 0001651c   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001651cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16520:
    /* 00016520   2  ext.l D1 */
    c->pc = RC_ADDR(0x00016520u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_16522:
    /* 00016522   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00016522u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_16524:
    /* 00016524   4  lea (1b52,A4),A1 */
    c->pc = RC_ADDR(0x00016524u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1b52u);

L_16528:
    /* 00016528   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x00016528u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1652C:
    /* 0001652c   4  sub.w (17f4,A4),D2 */
    c->pc = RC_ADDR(0x0001652cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f4u));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_16530:
    /* 00016530   4  move.w D2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016530u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 2, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16534:
    /* 00016534   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00016534u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16538:
    /* 00016538   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016538u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1653A:
    /* 0001653a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001653au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1653C:
    /* 0001653c   4  lea (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x0001653cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0xeu);

L_16540:
    /* 00016540   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00016540u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16544:
    /* 00016544   2  ext.l D1 */
    c->pc = RC_ADDR(0x00016544u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_16546:
    /* 00016546   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00016546u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_16548:
    /* 00016548   4  lea (1b58,A4),A1 */
    c->pc = RC_ADDR(0x00016548u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1b58u);

L_1654C:
    /* 0001654c   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0001654cu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16550:
    /* 00016550   4  sub.w (17f6,A4),D2 */
    c->pc = RC_ADDR(0x00016550u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f6u));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_16554:
    /* 00016554   4  move.w D2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016554u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 2, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16558:
    /* 00016558   4  move.w #17,-(A7) */
    c->pc = RC_ADDR(0x00016558u);
    rc_step(c, m, 12);
    t0 = 0x00000017u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1655C:
    /* 0001655c   4  move.w (1b48,A4),D0 */
    c->pc = RC_ADDR(0x0001655cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b48u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16560:
    /* 00016560   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016560u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16562:
    /* 00016562   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00016562u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_16564:
    /* 00016564   4  lea (1b68,A4),A0 */
    c->pc = RC_ADDR(0x00016564u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1b68u);

L_16568:
    /* 00016568   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00016568u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1656C:
    /* 0001656c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001656cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16570:
    /* 00016570   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016570u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16572:
    /* 00016572   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016572u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16574:
    /* 00016574   4  lea (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x00016574u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0xeu);

L_16578:
    /* 00016578   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00016578u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1657C:
    /* 0001657c   4  add.w #23,D1 */
    c->pc = RC_ADDR(0x0001657cu);
    rc_step(c, m, 10);
    t0 = 0x00000023u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_16580:
    /* 00016580   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x00016580u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16582:
    /* 00016582   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00016582u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16586:
    /* 00016586   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016586u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16588:
    /* 00016588   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016588u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1658A:
    /* 0001658a   4  lea (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x0001658au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x8u);

L_1658E:
    /* 0001658e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001658eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16592:
    /* 00016592   4  add.w #3c,D1 */
    c->pc = RC_ADDR(0x00016592u);
    rc_step(c, m, 10);
    t0 = 0x0000003cu;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_16596:
    /* 00016596   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x00016596u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16598:
    /* 00016598   4  jsr (00012bf6) */
    c->pc = RC_ADDR(0x00016598u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001659cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00012bf6u);
    return;

L_1659C:
    /* 0001659c   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001659cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_165A0:
    /* 000165a0   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000165a0u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_165A4:
    /* 000165a4   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000165a4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_165A8:
    /* 000165a8   4  cmp.w (1b5e,A4),D0 */
    c->pc = RC_ADDR(0x000165a8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b5eu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_165AC:
    /* 000165ac   4  blt 000164e8 */
    c->pc = RC_ADDR(0x000165acu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_164E8; }

L_165B0:
    /* 000165b0   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000165b0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_165B4:
    /* 000165b4   4  bra 00016648 */
    c->pc = RC_ADDR(0x000165b4u);
    rc_step(c, m, 10);
    goto L_16648;

L_165B8:
    /* 000165b8   4  move.w (1b48,A4),D0 */
    c->pc = RC_ADDR(0x000165b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b48u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_165BC:
    /* 000165bc   2  ext.l D0 */
    c->pc = RC_ADDR(0x000165bcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_165BE:
    /* 000165be   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000165beu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_165C0:
    /* 000165c0   4  lea (1b68,A4),A0 */
    c->pc = RC_ADDR(0x000165c0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1b68u);

L_165C4:
    /* 000165c4   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000165c4u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_165C8:
    /* 000165c8   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000165c8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_165CC:
    /* 000165cc   2  ext.l D0 */
    c->pc = RC_ADDR(0x000165ccu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_165CE:
    /* 000165ce   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000165ceu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_165D0:
    /* 000165d0   4  lea (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x000165d0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0xeu);

L_165D4:
    /* 000165d4   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000165d4u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_165D8:
    /* 000165d8   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000165d8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_165DC:
    /* 000165dc   2  ext.l D0 */
    c->pc = RC_ADDR(0x000165dcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_165DE:
    /* 000165de   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000165deu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_165E0:
    /* 000165e0   4  lea (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x000165e0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x8u);

L_165E4:
    /* 000165e4   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000165e4u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_165E8:
    /* 000165e8   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x000165e8u);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x000165ecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_165EC:
    /* 000165ec   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000165ecu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_165EE:
    /* 000165ee   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000165eeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_165F2:
    /* 000165f2   2  ext.l D0 */
    c->pc = RC_ADDR(0x000165f2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_165F4:
    /* 000165f4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000165f4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_165F6:
    /* 000165f6   4  lea (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x000165f6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x8u);

L_165FA:
    /* 000165fa   6  cmpi.w #ff9c,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000165fau);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000ff9cu);

L_16600:
    /* 00016600   2  ble 00016644 */
    c->pc = RC_ADDR(0x00016600u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_16644;

L_16602:
    /* 00016602   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00016602u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16606:
    /* 00016606   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016606u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16608:
    /* 00016608   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016608u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1660A:
    /* 0001660a   4  lea (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x0001660au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x8u);

L_1660E:
    /* 0001660e   6  cmpi.w #190,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001660eu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000190u);

L_16614:
    /* 00016614   2  bge 00016644 */
    c->pc = RC_ADDR(0x00016614u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_16644;

L_16616:
    /* 00016616   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00016616u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1661A:
    /* 0001661a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001661au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1661C:
    /* 0001661c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001661cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1661E:
    /* 0001661e   4  lea (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x0001661eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0xeu);

L_16622:
    /* 00016622   6  cmpi.w #ff9c,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016622u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000ff9cu);

L_16628:
    /* 00016628   2  ble 00016644 */
    c->pc = RC_ADDR(0x00016628u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_16644;

L_1662A:
    /* 0001662a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001662au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1662E:
    /* 0001662e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001662eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16630:
    /* 00016630   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016630u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16632:
    /* 00016632   4  lea (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x00016632u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0xeu);

L_16636:
    /* 00016636   6  cmpi.w #12c,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016636u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000012cu);

L_1663C:
    /* 0001663c   2  bge 00016644 */
    c->pc = RC_ADDR(0x0001663cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_16644;

L_1663E:
    /* 0001663e   6  move.w #1,(14f4,A4) */
    c->pc = RC_ADDR(0x0001663eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x14f4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16644:
    /* 00016644   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00016644u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16648:
    /* 00016648   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00016648u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1664C:
    /* 0001664c   4  cmp.w (1b5e,A4),D0 */
    c->pc = RC_ADDR(0x0001664cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b5eu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_16650:
    /* 00016650   4  blt 000165b8 */
    c->pc = RC_ADDR(0x00016650u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_165B8; }

L_16654:
    /* 00016654   6  move.w (1b4e,A4),(1b50,A4) */
    c->pc = RC_ADDR(0x00016654u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b4eu));
    rc_wr16(c, m, (c->a[4] + 0x1b50u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1665A:
    /* 0001665a   6  move.w (14f4,A4),(ffffb254,A4) */
    c->pc = RC_ADDR(0x0001665au);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f4u));
    rc_wr16(c, m, (c->a[4] - 0x4dacu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16660:
    /* 00016660   2  unlk A5 */
    c->pc = RC_ADDR(0x00016660u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16662:
    /* 00016662   2  rts */
    c->pc = RC_ADDR(0x00016662u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
