/* fn_0000151a - 384 byte(s), 100 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000151a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case 0x0000151au: goto L_151A;
    case 0x0000151eu: goto L_151E;
    case 0x00001522u: goto L_1522;
    case 0x00001526u: goto L_1526;
    case 0x0000152cu: goto L_152C;
    case 0x00001532u: goto L_1532;
    case 0x00001536u: goto L_1536;
    case 0x0000153au: goto L_153A;
    case 0x0000153eu: goto L_153E;
    case 0x00001542u: goto L_1542;
    case 0x00001548u: goto L_1548;
    case 0x0000154cu: goto L_154C;
    case 0x00001550u: goto L_1550;
    case 0x00001552u: goto L_1552;
    case 0x00001556u: goto L_1556;
    case 0x0000155au: goto L_155A;
    case 0x0000155eu: goto L_155E;
    case 0x00001560u: goto L_1560;
    case 0x00001564u: goto L_1564;
    case 0x00001568u: goto L_1568;
    case 0x0000156cu: goto L_156C;
    case 0x00001570u: goto L_1570;
    case 0x00001574u: goto L_1574;
    case 0x0000157au: goto L_157A;
    case 0x0000157cu: goto L_157C;
    case 0x00001580u: goto L_1580;
    case 0x00001584u: goto L_1584;
    case 0x00001588u: goto L_1588;
    case 0x0000158eu: goto L_158E;
    case 0x00001592u: goto L_1592;
    case 0x00001598u: goto L_1598;
    case 0x0000159cu: goto L_159C;
    case 0x000015a0u: goto L_15A0;
    case 0x000015a4u: goto L_15A4;
    case 0x000015a6u: goto L_15A6;
    case 0x000015aau: goto L_15AA;
    case 0x000015acu: goto L_15AC;
    case 0x000015b0u: goto L_15B0;
    case 0x000015b2u: goto L_15B2;
    case 0x000015b6u: goto L_15B6;
    case 0x000015bau: goto L_15BA;
    case 0x000015beu: goto L_15BE;
    case 0x000015c0u: goto L_15C0;
    case 0x000015c2u: goto L_15C2;
    case 0x000015c6u: goto L_15C6;
    case 0x000015cau: goto L_15CA;
    case 0x000015ceu: goto L_15CE;
    case 0x000015d4u: goto L_15D4;
    case 0x000015d8u: goto L_15D8;
    case 0x000015deu: goto L_15DE;
    case 0x000015e2u: goto L_15E2;
    case 0x000015e4u: goto L_15E4;
    case 0x000015e8u: goto L_15E8;
    case 0x000015eau: goto L_15EA;
    case 0x000015eeu: goto L_15EE;
    case 0x000015f2u: goto L_15F2;
    case 0x000015f6u: goto L_15F6;
    case 0x000015f8u: goto L_15F8;
    case 0x000015fcu: goto L_15FC;
    case 0x00001600u: goto L_1600;
    case 0x00001604u: goto L_1604;
    case 0x00001608u: goto L_1608;
    case 0x0000160cu: goto L_160C;
    case 0x0000160eu: goto L_160E;
    case 0x00001612u: goto L_1612;
    case 0x00001616u: goto L_1616;
    case 0x0000161cu: goto L_161C;
    case 0x00001620u: goto L_1620;
    case 0x00001622u: goto L_1622;
    case 0x00001626u: goto L_1626;
    case 0x0000162cu: goto L_162C;
    case 0x00001630u: goto L_1630;
    case 0x00001632u: goto L_1632;
    case 0x00001636u: goto L_1636;
    case 0x00001638u: goto L_1638;
    case 0x0000163cu: goto L_163C;
    case 0x00001640u: goto L_1640;
    case 0x00001644u: goto L_1644;
    case 0x00001646u: goto L_1646;
    case 0x0000164cu: goto L_164C;
    case 0x0000164eu: goto L_164E;
    case 0x00001652u: goto L_1652;
    case 0x00001658u: goto L_1658;
    case 0x0000165cu: goto L_165C;
    case 0x0000165eu: goto L_165E;
    case 0x00001662u: goto L_1662;
    case 0x00001668u: goto L_1668;
    case 0x0000166cu: goto L_166C;
    case 0x00001670u: goto L_1670;
    case 0x00001674u: goto L_1674;
    case 0x00001676u: goto L_1676;
    case 0x0000167cu: goto L_167C;
    case 0x0000167eu: goto L_167E;
    case 0x00001682u: goto L_1682;
    case 0x00001686u: goto L_1686;
    case 0x0000168au: goto L_168A;
    case 0x0000168cu: goto L_168C;
    case 0x00001692u: goto L_1692;
    case 0x00001696u: goto L_1696;
    case 0x00001698u: goto L_1698;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_151A:
    /* 0000151a   4  link.w A5,#ffffffd0 */
    c->pc = 0x0000151au;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x30u;

L_151E:
    /* 0000151e   4  tst.l (ffffefa4,A4) */
    c->pc = 0x0000151eu;
    t0 = rc_rd32(c, m, (c->a[4] - 0x105cu));
    rc_set_nzvc(c, t0, RC_L);

L_1522:
    /* 00001522   4  beq 00001696 */
    c->pc = 0x00001522u;
    if (rc_cond(c, 7)) goto L_1696;

L_1526:
    /* 00001526   6  move.w (ffffef9a,A4),(ffffffd4,A5) */
    c->pc = 0x00001526u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x1066u));
    rc_wr16(c, m, (c->a[5] - 0x2cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_152C:
    /* 0000152c   6  move.l (ffffef9c,A4),(fffffff2,A5) */
    c->pc = 0x0000152cu;
    t0 = rc_rd32(c, m, (c->a[4] - 0x1064u));
    rc_wr32(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1532:
    /* 00001532   4  tst.w (ffffffd4,A5) */
    c->pc = 0x00001532u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2cu));
    rc_set_nzvc(c, t0, RC_W);

L_1536:
    /* 00001536   4  beq 00001696 */
    c->pc = 0x00001536u;
    if (rc_cond(c, 7)) goto L_1696;

L_153A:
    /* 0000153a   4  subq.w #1,(ffffffd4,A5) */
    c->pc = 0x0000153au;
    t3 = (c->a[5] - 0x2cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_153E:
    /* 0000153e   4  movea.l (fffffff2,A5),A0 */
    c->pc = 0x0000153eu;
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_1542:
    /* 00001542   6  move.l (e,A0),(ffffffee,A5) */
    c->pc = 0x00001542u;
    t0 = rc_rd32(c, m, (c->a[0] + 0xeu));
    rc_wr32(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1548:
    /* 00001548   4  movea.l (fffffff2,A5),A0 */
    c->pc = 0x00001548u;
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_154C:
    /* 0000154c   4  move.b (1,A0),D0 */
    c->pc = 0x0000154cu;
    t0 = rc_rd8(c, m, (c->a[0] + 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1550:
    /* 00001550   2  ext.w D0 */
    c->pc = 0x00001550u;
    rc_ext_w(c, 0);

L_1552:
    /* 00001552   4  move.w D0,(ffffffd2,A5) */
    c->pc = 0x00001552u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1556:
    /* 00001556   4  beq 00001604 */
    c->pc = 0x00001556u;
    if (rc_cond(c, 7)) goto L_1604;

L_155A:
    /* 0000155a   4  movea.l (fffffff2,A5),A0 */
    c->pc = 0x0000155au;
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_155E:
    /* 0000155e   2  addq.l #2,A0 */
    c->pc = 0x0000155eu;
    c->a[0] += 0x00000002u;

L_1560:
    /* 00001560   4  move.l A0,(fffffffc,A5) */
    c->pc = 0x00001560u;
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1564:
    /* 00001564   4  tst.w (ffffffd2,A5) */
    c->pc = 0x00001564u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2eu));
    rc_set_nzvc(c, t0, RC_W);

L_1568:
    /* 00001568   4  beq 00001604 */
    c->pc = 0x00001568u;
    if (rc_cond(c, 7)) goto L_1604;

L_156C:
    /* 0000156c   4  subq.w #1,(ffffffd2,A5) */
    c->pc = 0x0000156cu;
    t3 = (c->a[5] - 0x2eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1570:
    /* 00001570   4  movea.l (fffffffc,A5),A0 */
    c->pc = 0x00001570u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1574:
    /* 00001574   6  cmpi.b #64,(4,A0) */
    c->pc = 0x00001574u;
    t0 = rc_rd8(c, m, (c->a[0] + 0x4u));
    rc_cmp(c, RC_B, t0, 0x00000064u);

L_157A:
    /* 0000157a   2  bne 000015c2 */
    c->pc = 0x0000157au;
    if (rc_cond(c, 6)) goto L_15C2;

L_157C:
    /* 0000157c   4  movea.l (fffffffc,A5),A0 */
    c->pc = 0x0000157cu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1580:
    /* 00001580   4  move.l (A0),(ffffffe2,A5) */
    c->pc = 0x00001580u;
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1584:
    /* 00001584   4  movea.l (ffffffe2,A5),A0 */
    c->pc = 0x00001584u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_1588:
    /* 00001588   6  move.b (14,A0),(fffffffa,A5) */
    c->pc = 0x00001588u;
    t0 = rc_rd8(c, m, (c->a[0] + 0x14u));
    rc_wr8(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_158E:
    /* 0000158e   4  movea.l (ffffffe2,A5),A0 */
    c->pc = 0x0000158eu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_1592:
    /* 00001592   6  move.l (10,A0),(fffffff6,A5) */
    c->pc = 0x00001592u;
    t0 = rc_rd32(c, m, (c->a[0] + 0x10u));
    rc_wr32(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1598:
    /* 00001598   4  movea.l (ffffffe2,A5),A0 */
    c->pc = 0x00001598u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_159C:
    /* 0000159c   4  move.l (c,A0),-(A7) */
    c->pc = 0x0000159cu;
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_15A0:
    /* 000015a0   4  jsr (000014f2) */
    c->pc = 0x000015a0u;
    rc_push32(c, m, 0x000015a4u);
    rc_depth++;
    c->pc = 0x000014f2u;
    return;

L_15A4:
    /* 000015a4   2  addq.w #4,A7 */
    c->pc = 0x000015a4u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_15A6:
    /* 000015a6   4  movea.l (ffffffe2,A5),A0 */
    c->pc = 0x000015a6u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_15AA:
    /* 000015aa   2  move.l (A0),-(A7) */
    c->pc = 0x000015aau;
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_15AC:
    /* 000015ac   4  jsr (000014f2) */
    c->pc = 0x000015acu;
    rc_push32(c, m, 0x000015b0u);
    rc_depth++;
    c->pc = 0x000014f2u;
    return;

L_15B0:
    /* 000015b0   2  addq.w #4,A7 */
    c->pc = 0x000015b0u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_15B2:
    /* 000015b2   4  pea (00000016).l */
    c->pc = 0x000015b2u;
    rc_push32(c, m, 0x00000016u);

L_15B6:
    /* 000015b6   4  move.l (ffffffe2,A5),-(A7) */
    c->pc = 0x000015b6u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_15BA:
    /* 000015ba   4  jsr (ffff8344,A4) */
    c->pc = 0x000015bau;
    /* vector 139: exec.library -210 */
    c->pc = 0x000015beu;
    rc_os_call(c, m, 0, -210);

L_15BE:
    /* 000015be   2  addq.w #8,A7 */
    c->pc = 0x000015beu;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_15C0:
    /* 000015c0   2  bra 000015f8 */
    c->pc = 0x000015c0u;
    goto L_15F8;

L_15C2:
    /* 000015c2   4  movea.l (fffffffc,A5),A0 */
    c->pc = 0x000015c2u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_15C6:
    /* 000015c6   4  move.l (A0),(ffffffde,A5) */
    c->pc = 0x000015c6u;
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x22u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_15CA:
    /* 000015ca   4  movea.l (ffffffde,A5),A0 */
    c->pc = 0x000015cau;
    t0 = rc_rd32(c, m, (c->a[5] - 0x22u));
    c->a[0] = t0;

L_15CE:
    /* 000015ce   6  move.b (8,A0),(fffffffa,A5) */
    c->pc = 0x000015ceu;
    t0 = rc_rd8(c, m, (c->a[0] + 0x8u));
    rc_wr8(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_15D4:
    /* 000015d4   4  movea.l (ffffffde,A5),A0 */
    c->pc = 0x000015d4u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x22u));
    c->a[0] = t0;

L_15D8:
    /* 000015d8   6  move.l (4,A0),(fffffff6,A5) */
    c->pc = 0x000015d8u;
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    rc_wr32(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_15DE:
    /* 000015de   4  movea.l (ffffffde,A5),A0 */
    c->pc = 0x000015deu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x22u));
    c->a[0] = t0;

L_15E2:
    /* 000015e2   2  move.l (A0),-(A7) */
    c->pc = 0x000015e2u;
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_15E4:
    /* 000015e4   4  jsr (000014f2) */
    c->pc = 0x000015e4u;
    rc_push32(c, m, 0x000015e8u);
    rc_depth++;
    c->pc = 0x000014f2u;
    return;

L_15E8:
    /* 000015e8   2  addq.w #4,A7 */
    c->pc = 0x000015e8u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_15EA:
    /* 000015ea   4  pea (0000000a).l */
    c->pc = 0x000015eau;
    rc_push32(c, m, 0x0000000au);

L_15EE:
    /* 000015ee   4  move.l (ffffffde,A5),-(A7) */
    c->pc = 0x000015eeu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x22u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_15F2:
    /* 000015f2   4  jsr (ffff8344,A4) */
    c->pc = 0x000015f2u;
    /* vector 139: exec.library -210 */
    c->pc = 0x000015f6u;
    rc_os_call(c, m, 0, -210);

L_15F6:
    /* 000015f6   2  addq.w #8,A7 */
    c->pc = 0x000015f6u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_15F8:
    /* 000015f8   4  lea (fffffff6,A5),A0 */
    c->pc = 0x000015f8u;
    c->a[0] = (c->a[5] - 0xau);

L_15FC:
    /* 000015fc   4  move.l A0,(fffffffc,A5) */
    c->pc = 0x000015fcu;
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1600:
    /* 00001600   4  bra 00001564 */
    c->pc = 0x00001600u;
    rc_tick();
    goto L_1564;

L_1604:
    /* 00001604   4  movea.l (fffffff2,A5),A0 */
    c->pc = 0x00001604u;
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_1608:
    /* 00001608   4  move.b (9,A0),D0 */
    c->pc = 0x00001608u;
    t0 = rc_rd8(c, m, (c->a[0] + 0x9u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_160C:
    /* 0000160c   2  ext.w D0 */
    c->pc = 0x0000160cu;
    rc_ext_w(c, 0);

L_160E:
    /* 0000160e   4  move.w D0,(ffffffd0,A5) */
    c->pc = 0x0000160eu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x30u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1612:
    /* 00001612   4  movea.l (fffffff2,A5),A0 */
    c->pc = 0x00001612u;
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_1616:
    /* 00001616   6  move.l (a,A0),(ffffffea,A5) */
    c->pc = 0x00001616u;
    t0 = rc_rd32(c, m, (c->a[0] + 0xau));
    rc_wr32(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_161C:
    /* 0000161c   4  tst.l (ffffffea,A5) */
    c->pc = 0x0000161cu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    rc_set_nzvc(c, t0, RC_L);

L_1620:
    /* 00001620   2  beq 0000164e */
    c->pc = 0x00001620u;
    if (rc_cond(c, 7)) goto L_164E;

L_1622:
    /* 00001622   4  movea.l (ffffffea,A5),A0 */
    c->pc = 0x00001622u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_1626:
    /* 00001626   6  move.l (8,A0),(ffffffe6,A5) */
    c->pc = 0x00001626u;
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x1au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_162C:
    /* 0000162c   4  movea.l (ffffffea,A5),A0 */
    c->pc = 0x0000162cu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_1630:
    /* 00001630   2  move.l (A0),-(A7) */
    c->pc = 0x00001630u;
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1632:
    /* 00001632   4  jsr (000014f2) */
    c->pc = 0x00001632u;
    rc_push32(c, m, 0x00001636u);
    rc_depth++;
    c->pc = 0x000014f2u;
    return;

L_1636:
    /* 00001636   2  addq.w #4,A7 */
    c->pc = 0x00001636u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1638:
    /* 00001638   4  pea (0000000e).l */
    c->pc = 0x00001638u;
    rc_push32(c, m, 0x0000000eu);

L_163C:
    /* 0000163c   4  move.l (ffffffea,A5),-(A7) */
    c->pc = 0x0000163cu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1640:
    /* 00001640   4  jsr (ffff8344,A4) */
    c->pc = 0x00001640u;
    /* vector 139: exec.library -210 */
    c->pc = 0x00001644u;
    rc_os_call(c, m, 0, -210);

L_1644:
    /* 00001644   2  addq.w #8,A7 */
    c->pc = 0x00001644u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1646:
    /* 00001646   6  move.l (ffffffe6,A5),(ffffffea,A5) */
    c->pc = 0x00001646u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x1au));
    rc_wr32(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_164C:
    /* 0000164c   2  bra 0000161c */
    c->pc = 0x0000164cu;
    rc_tick();
    goto L_161C;

L_164E:
    /* 0000164e   4  movea.l (fffffff2,A5),A0 */
    c->pc = 0x0000164eu;
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_1652:
    /* 00001652   6  move.l (28,A0),(ffffffda,A5) */
    c->pc = 0x00001652u;
    t0 = rc_rd32(c, m, (c->a[0] + 0x28u));
    rc_wr32(c, m, (c->a[5] - 0x26u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1658:
    /* 00001658   4  tst.l (ffffffda,A5) */
    c->pc = 0x00001658u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x26u));
    rc_set_nzvc(c, t0, RC_L);

L_165C:
    /* 0000165c   2  beq 0000167e */
    c->pc = 0x0000165cu;
    if (rc_cond(c, 7)) goto L_167E;

L_165E:
    /* 0000165e   4  movea.l (ffffffda,A5),A0 */
    c->pc = 0x0000165eu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x26u));
    c->a[0] = t0;

L_1662:
    /* 00001662   6  move.l (6,A0),(ffffffd6,A5) */
    c->pc = 0x00001662u;
    t0 = rc_rd32(c, m, (c->a[0] + 0x6u));
    rc_wr32(c, m, (c->a[5] - 0x2au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1668:
    /* 00001668   4  pea (0000000a).l */
    c->pc = 0x00001668u;
    rc_push32(c, m, 0x0000000au);

L_166C:
    /* 0000166c   4  move.l (ffffffda,A5),-(A7) */
    c->pc = 0x0000166cu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x26u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1670:
    /* 00001670   4  jsr (ffff8344,A4) */
    c->pc = 0x00001670u;
    /* vector 139: exec.library -210 */
    c->pc = 0x00001674u;
    rc_os_call(c, m, 0, -210);

L_1674:
    /* 00001674   2  addq.w #8,A7 */
    c->pc = 0x00001674u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1676:
    /* 00001676   6  move.l (ffffffd6,A5),(ffffffda,A5) */
    c->pc = 0x00001676u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x2au));
    rc_wr32(c, m, (c->a[5] - 0x26u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_167C:
    /* 0000167c   2  bra 00001658 */
    c->pc = 0x0000167cu;
    rc_tick();
    goto L_1658;

L_167E:
    /* 0000167e   4  pea (0000002c).l */
    c->pc = 0x0000167eu;
    rc_push32(c, m, 0x0000002cu);

L_1682:
    /* 00001682   4  move.l (fffffff2,A5),-(A7) */
    c->pc = 0x00001682u;
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1686:
    /* 00001686   4  jsr (ffff8344,A4) */
    c->pc = 0x00001686u;
    /* vector 139: exec.library -210 */
    c->pc = 0x0000168au;
    rc_os_call(c, m, 0, -210);

L_168A:
    /* 0000168a   2  addq.w #8,A7 */
    c->pc = 0x0000168au;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_168C:
    /* 0000168c   6  move.l (ffffffee,A5),(fffffff2,A5) */
    c->pc = 0x0000168cu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x12u));
    rc_wr32(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1692:
    /* 00001692   4  bra 00001532 */
    c->pc = 0x00001692u;
    rc_tick();
    goto L_1532;

L_1696:
    /* 00001696   2  unlk A5 */
    c->pc = 0x00001696u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1698:
    /* 00001698   2  rts */
    c->pc = 0x00001698u;
    rc_ret(c, m);
    return;

}
