/* fn_00001468 - 1088 byte(s), 294 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00001468(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00001468u): goto L_1468;
    case RC_ADDR(0x0000146cu): goto L_146C;
    case RC_ADDR(0x00001472u): goto L_1472;
    case RC_ADDR(0x00001476u): goto L_1476;
    case RC_ADDR(0x0000147au): goto L_147A;
    case RC_ADDR(0x0000147eu): goto L_147E;
    case RC_ADDR(0x00001482u): goto L_1482;
    case RC_ADDR(0x00001486u): goto L_1486;
    case RC_ADDR(0x00001488u): goto L_1488;
    case RC_ADDR(0x0000148cu): goto L_148C;
    case RC_ADDR(0x00001490u): goto L_1490;
    case RC_ADDR(0x00001496u): goto L_1496;
    case RC_ADDR(0x0000149au): goto L_149A;
    case RC_ADDR(0x0000149eu): goto L_149E;
    case RC_ADDR(0x000014a2u): goto L_14A2;
    case RC_ADDR(0x000014a6u): goto L_14A6;
    case RC_ADDR(0x000014aau): goto L_14AA;
    case RC_ADDR(0x000014aeu): goto L_14AE;
    case RC_ADDR(0x000014b2u): goto L_14B2;
    case RC_ADDR(0x000014b6u): goto L_14B6;
    case RC_ADDR(0x000014bau): goto L_14BA;
    case RC_ADDR(0x000014beu): goto L_14BE;
    case RC_ADDR(0x000014c2u): goto L_14C2;
    case RC_ADDR(0x000014c8u): goto L_14C8;
    case RC_ADDR(0x000014ccu): goto L_14CC;
    case RC_ADDR(0x000014d0u): goto L_14D0;
    case RC_ADDR(0x000014d4u): goto L_14D4;
    case RC_ADDR(0x000014d6u): goto L_14D6;
    case RC_ADDR(0x000014dcu): goto L_14DC;
    case RC_ADDR(0x000014e0u): goto L_14E0;
    case RC_ADDR(0x000014e4u): goto L_14E4;
    case RC_ADDR(0x000014e6u): goto L_14E6;
    case RC_ADDR(0x000014eau): goto L_14EA;
    case RC_ADDR(0x000014eeu): goto L_14EE;
    case RC_ADDR(0x000014f0u): goto L_14F0;
    case RC_ADDR(0x000014f6u): goto L_14F6;
    case RC_ADDR(0x000014fau): goto L_14FA;
    case RC_ADDR(0x000014feu): goto L_14FE;
    case RC_ADDR(0x00001500u): goto L_1500;
    case RC_ADDR(0x00001504u): goto L_1504;
    case RC_ADDR(0x00001508u): goto L_1508;
    case RC_ADDR(0x0000150cu): goto L_150C;
    case RC_ADDR(0x00001512u): goto L_1512;
    case RC_ADDR(0x00001516u): goto L_1516;
    case RC_ADDR(0x0000151au): goto L_151A;
    case RC_ADDR(0x0000151eu): goto L_151E;
    case RC_ADDR(0x00001522u): goto L_1522;
    case RC_ADDR(0x00001526u): goto L_1526;
    case RC_ADDR(0x0000152au): goto L_152A;
    case RC_ADDR(0x0000152eu): goto L_152E;
    case RC_ADDR(0x00001530u): goto L_1530;
    case RC_ADDR(0x00001532u): goto L_1532;
    case RC_ADDR(0x00001536u): goto L_1536;
    case RC_ADDR(0x0000153au): goto L_153A;
    case RC_ADDR(0x0000153eu): goto L_153E;
    case RC_ADDR(0x00001542u): goto L_1542;
    case RC_ADDR(0x00001546u): goto L_1546;
    case RC_ADDR(0x0000154au): goto L_154A;
    case RC_ADDR(0x00001550u): goto L_1550;
    case RC_ADDR(0x00001552u): goto L_1552;
    case RC_ADDR(0x00001558u): goto L_1558;
    case RC_ADDR(0x0000155cu): goto L_155C;
    case RC_ADDR(0x0000155eu): goto L_155E;
    case RC_ADDR(0x00001560u): goto L_1560;
    case RC_ADDR(0x00001564u): goto L_1564;
    case RC_ADDR(0x00001566u): goto L_1566;
    case RC_ADDR(0x00001568u): goto L_1568;
    case RC_ADDR(0x0000156cu): goto L_156C;
    case RC_ADDR(0x00001570u): goto L_1570;
    case RC_ADDR(0x00001574u): goto L_1574;
    case RC_ADDR(0x00001578u): goto L_1578;
    case RC_ADDR(0x0000157au): goto L_157A;
    case RC_ADDR(0x0000157eu): goto L_157E;
    case RC_ADDR(0x00001582u): goto L_1582;
    case RC_ADDR(0x00001584u): goto L_1584;
    case RC_ADDR(0x00001588u): goto L_1588;
    case RC_ADDR(0x0000158au): goto L_158A;
    case RC_ADDR(0x0000158cu): goto L_158C;
    case RC_ADDR(0x00001590u): goto L_1590;
    case RC_ADDR(0x00001594u): goto L_1594;
    case RC_ADDR(0x00001598u): goto L_1598;
    case RC_ADDR(0x0000159cu): goto L_159C;
    case RC_ADDR(0x000015a0u): goto L_15A0;
    case RC_ADDR(0x000015a4u): goto L_15A4;
    case RC_ADDR(0x000015a8u): goto L_15A8;
    case RC_ADDR(0x000015aau): goto L_15AA;
    case RC_ADDR(0x000015acu): goto L_15AC;
    case RC_ADDR(0x000015b0u): goto L_15B0;
    case RC_ADDR(0x000015b4u): goto L_15B4;
    case RC_ADDR(0x000015b8u): goto L_15B8;
    case RC_ADDR(0x000015bcu): goto L_15BC;
    case RC_ADDR(0x000015c0u): goto L_15C0;
    case RC_ADDR(0x000015c2u): goto L_15C2;
    case RC_ADDR(0x000015c4u): goto L_15C4;
    case RC_ADDR(0x000015c8u): goto L_15C8;
    case RC_ADDR(0x000015ccu): goto L_15CC;
    case RC_ADDR(0x000015d0u): goto L_15D0;
    case RC_ADDR(0x000015d4u): goto L_15D4;
    case RC_ADDR(0x000015d8u): goto L_15D8;
    case RC_ADDR(0x000015dau): goto L_15DA;
    case RC_ADDR(0x000015deu): goto L_15DE;
    case RC_ADDR(0x000015e2u): goto L_15E2;
    case RC_ADDR(0x000015e4u): goto L_15E4;
    case RC_ADDR(0x000015e8u): goto L_15E8;
    case RC_ADDR(0x000015ecu): goto L_15EC;
    case RC_ADDR(0x000015f0u): goto L_15F0;
    case RC_ADDR(0x000015f4u): goto L_15F4;
    case RC_ADDR(0x000015fau): goto L_15FA;
    case RC_ADDR(0x000015fcu): goto L_15FC;
    case RC_ADDR(0x00001602u): goto L_1602;
    case RC_ADDR(0x00001606u): goto L_1606;
    case RC_ADDR(0x0000160au): goto L_160A;
    case RC_ADDR(0x0000160cu): goto L_160C;
    case RC_ADDR(0x00001610u): goto L_1610;
    case RC_ADDR(0x00001612u): goto L_1612;
    case RC_ADDR(0x00001616u): goto L_1616;
    case RC_ADDR(0x0000161au): goto L_161A;
    case RC_ADDR(0x0000161eu): goto L_161E;
    case RC_ADDR(0x00001622u): goto L_1622;
    case RC_ADDR(0x00001624u): goto L_1624;
    case RC_ADDR(0x00001628u): goto L_1628;
    case RC_ADDR(0x0000162au): goto L_162A;
    case RC_ADDR(0x0000162eu): goto L_162E;
    case RC_ADDR(0x00001630u): goto L_1630;
    case RC_ADDR(0x00001632u): goto L_1632;
    case RC_ADDR(0x00001636u): goto L_1636;
    case RC_ADDR(0x0000163au): goto L_163A;
    case RC_ADDR(0x0000163cu): goto L_163C;
    case RC_ADDR(0x00001640u): goto L_1640;
    case RC_ADDR(0x00001644u): goto L_1644;
    case RC_ADDR(0x00001646u): goto L_1646;
    case RC_ADDR(0x0000164au): goto L_164A;
    case RC_ADDR(0x0000164eu): goto L_164E;
    case RC_ADDR(0x00001652u): goto L_1652;
    case RC_ADDR(0x00001658u): goto L_1658;
    case RC_ADDR(0x0000165cu): goto L_165C;
    case RC_ADDR(0x0000165eu): goto L_165E;
    case RC_ADDR(0x00001664u): goto L_1664;
    case RC_ADDR(0x00001668u): goto L_1668;
    case RC_ADDR(0x0000166cu): goto L_166C;
    case RC_ADDR(0x0000166eu): goto L_166E;
    case RC_ADDR(0x00001672u): goto L_1672;
    case RC_ADDR(0x00001674u): goto L_1674;
    case RC_ADDR(0x00001678u): goto L_1678;
    case RC_ADDR(0x0000167cu): goto L_167C;
    case RC_ADDR(0x00001680u): goto L_1680;
    case RC_ADDR(0x00001684u): goto L_1684;
    case RC_ADDR(0x00001686u): goto L_1686;
    case RC_ADDR(0x0000168au): goto L_168A;
    case RC_ADDR(0x0000168cu): goto L_168C;
    case RC_ADDR(0x00001690u): goto L_1690;
    case RC_ADDR(0x00001692u): goto L_1692;
    case RC_ADDR(0x00001696u): goto L_1696;
    case RC_ADDR(0x0000169au): goto L_169A;
    case RC_ADDR(0x0000169eu): goto L_169E;
    case RC_ADDR(0x000016a0u): goto L_16A0;
    case RC_ADDR(0x000016a2u): goto L_16A2;
    case RC_ADDR(0x000016a6u): goto L_16A6;
    case RC_ADDR(0x000016aau): goto L_16AA;
    case RC_ADDR(0x000016aeu): goto L_16AE;
    case RC_ADDR(0x000016b2u): goto L_16B2;
    case RC_ADDR(0x000016b6u): goto L_16B6;
    case RC_ADDR(0x000016bau): goto L_16BA;
    case RC_ADDR(0x000016beu): goto L_16BE;
    case RC_ADDR(0x000016c2u): goto L_16C2;
    case RC_ADDR(0x000016c6u): goto L_16C6;
    case RC_ADDR(0x000016cau): goto L_16CA;
    case RC_ADDR(0x000016d0u): goto L_16D0;
    case RC_ADDR(0x000016d2u): goto L_16D2;
    case RC_ADDR(0x000016d6u): goto L_16D6;
    case RC_ADDR(0x000016dau): goto L_16DA;
    case RC_ADDR(0x000016deu): goto L_16DE;
    case RC_ADDR(0x000016e2u): goto L_16E2;
    case RC_ADDR(0x000016e6u): goto L_16E6;
    case RC_ADDR(0x000016eau): goto L_16EA;
    case RC_ADDR(0x000016eeu): goto L_16EE;
    case RC_ADDR(0x000016f2u): goto L_16F2;
    case RC_ADDR(0x000016f6u): goto L_16F6;
    case RC_ADDR(0x000016fau): goto L_16FA;
    case RC_ADDR(0x000016feu): goto L_16FE;
    case RC_ADDR(0x00001702u): goto L_1702;
    case RC_ADDR(0x00001706u): goto L_1706;
    case RC_ADDR(0x0000170au): goto L_170A;
    case RC_ADDR(0x0000170eu): goto L_170E;
    case RC_ADDR(0x00001712u): goto L_1712;
    case RC_ADDR(0x00001716u): goto L_1716;
    case RC_ADDR(0x0000171au): goto L_171A;
    case RC_ADDR(0x0000171eu): goto L_171E;
    case RC_ADDR(0x00001722u): goto L_1722;
    case RC_ADDR(0x00001724u): goto L_1724;
    case RC_ADDR(0x0000172au): goto L_172A;
    case RC_ADDR(0x0000172eu): goto L_172E;
    case RC_ADDR(0x00001732u): goto L_1732;
    case RC_ADDR(0x00001734u): goto L_1734;
    case RC_ADDR(0x00001738u): goto L_1738;
    case RC_ADDR(0x0000173cu): goto L_173C;
    case RC_ADDR(0x00001740u): goto L_1740;
    case RC_ADDR(0x00001746u): goto L_1746;
    case RC_ADDR(0x00001748u): goto L_1748;
    case RC_ADDR(0x0000174eu): goto L_174E;
    case RC_ADDR(0x00001752u): goto L_1752;
    case RC_ADDR(0x00001756u): goto L_1756;
    case RC_ADDR(0x00001758u): goto L_1758;
    case RC_ADDR(0x0000175cu): goto L_175C;
    case RC_ADDR(0x00001760u): goto L_1760;
    case RC_ADDR(0x00001764u): goto L_1764;
    case RC_ADDR(0x00001768u): goto L_1768;
    case RC_ADDR(0x0000176cu): goto L_176C;
    case RC_ADDR(0x0000176eu): goto L_176E;
    case RC_ADDR(0x00001772u): goto L_1772;
    case RC_ADDR(0x00001774u): goto L_1774;
    case RC_ADDR(0x00001778u): goto L_1778;
    case RC_ADDR(0x0000177cu): goto L_177C;
    case RC_ADDR(0x0000177eu): goto L_177E;
    case RC_ADDR(0x00001780u): goto L_1780;
    case RC_ADDR(0x00001784u): goto L_1784;
    case RC_ADDR(0x00001786u): goto L_1786;
    case RC_ADDR(0x0000178au): goto L_178A;
    case RC_ADDR(0x0000178eu): goto L_178E;
    case RC_ADDR(0x00001792u): goto L_1792;
    case RC_ADDR(0x00001796u): goto L_1796;
    case RC_ADDR(0x0000179au): goto L_179A;
    case RC_ADDR(0x0000179eu): goto L_179E;
    case RC_ADDR(0x000017a2u): goto L_17A2;
    case RC_ADDR(0x000017a6u): goto L_17A6;
    case RC_ADDR(0x000017aau): goto L_17AA;
    case RC_ADDR(0x000017acu): goto L_17AC;
    case RC_ADDR(0x000017b0u): goto L_17B0;
    case RC_ADDR(0x000017b2u): goto L_17B2;
    case RC_ADDR(0x000017b6u): goto L_17B6;
    case RC_ADDR(0x000017bau): goto L_17BA;
    case RC_ADDR(0x000017beu): goto L_17BE;
    case RC_ADDR(0x000017c2u): goto L_17C2;
    case RC_ADDR(0x000017c6u): goto L_17C6;
    case RC_ADDR(0x000017cau): goto L_17CA;
    case RC_ADDR(0x000017ceu): goto L_17CE;
    case RC_ADDR(0x000017d2u): goto L_17D2;
    case RC_ADDR(0x000017d6u): goto L_17D6;
    case RC_ADDR(0x000017dau): goto L_17DA;
    case RC_ADDR(0x000017deu): goto L_17DE;
    case RC_ADDR(0x000017e2u): goto L_17E2;
    case RC_ADDR(0x000017e6u): goto L_17E6;
    case RC_ADDR(0x000017eau): goto L_17EA;
    case RC_ADDR(0x000017eeu): goto L_17EE;
    case RC_ADDR(0x000017f2u): goto L_17F2;
    case RC_ADDR(0x000017f6u): goto L_17F6;
    case RC_ADDR(0x000017fau): goto L_17FA;
    case RC_ADDR(0x000017feu): goto L_17FE;
    case RC_ADDR(0x00001802u): goto L_1802;
    case RC_ADDR(0x00001804u): goto L_1804;
    case RC_ADDR(0x00001808u): goto L_1808;
    case RC_ADDR(0x0000180cu): goto L_180C;
    case RC_ADDR(0x00001810u): goto L_1810;
    case RC_ADDR(0x00001814u): goto L_1814;
    case RC_ADDR(0x00001818u): goto L_1818;
    case RC_ADDR(0x0000181cu): goto L_181C;
    case RC_ADDR(0x0000181eu): goto L_181E;
    case RC_ADDR(0x00001820u): goto L_1820;
    case RC_ADDR(0x00001826u): goto L_1826;
    case RC_ADDR(0x0000182au): goto L_182A;
    case RC_ADDR(0x0000182eu): goto L_182E;
    case RC_ADDR(0x00001830u): goto L_1830;
    case RC_ADDR(0x00001834u): goto L_1834;
    case RC_ADDR(0x00001838u): goto L_1838;
    case RC_ADDR(0x0000183cu): goto L_183C;
    case RC_ADDR(0x0000183eu): goto L_183E;
    case RC_ADDR(0x00001842u): goto L_1842;
    case RC_ADDR(0x00001848u): goto L_1848;
    case RC_ADDR(0x0000184eu): goto L_184E;
    case RC_ADDR(0x00001850u): goto L_1850;
    case RC_ADDR(0x00001856u): goto L_1856;
    case RC_ADDR(0x0000185au): goto L_185A;
    case RC_ADDR(0x00001860u): goto L_1860;
    case RC_ADDR(0x00001864u): goto L_1864;
    case RC_ADDR(0x00001868u): goto L_1868;
    case RC_ADDR(0x0000186cu): goto L_186C;
    case RC_ADDR(0x00001870u): goto L_1870;
    case RC_ADDR(0x00001874u): goto L_1874;
    case RC_ADDR(0x00001878u): goto L_1878;
    case RC_ADDR(0x0000187cu): goto L_187C;
    case RC_ADDR(0x0000187eu): goto L_187E;
    case RC_ADDR(0x00001880u): goto L_1880;
    case RC_ADDR(0x00001884u): goto L_1884;
    case RC_ADDR(0x00001886u): goto L_1886;
    case RC_ADDR(0x00001888u): goto L_1888;
    case RC_ADDR(0x0000188cu): goto L_188C;
    case RC_ADDR(0x00001890u): goto L_1890;
    case RC_ADDR(0x00001894u): goto L_1894;
    case RC_ADDR(0x00001898u): goto L_1898;
    case RC_ADDR(0x0000189au): goto L_189A;
    case RC_ADDR(0x0000189eu): goto L_189E;
    case RC_ADDR(0x000018a2u): goto L_18A2;
    case RC_ADDR(0x000018a4u): goto L_18A4;
    case RC_ADDR(0x000018a6u): goto L_18A6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1468:
    /* 00001468   4  link.w A5,#ffffff68 */
    c->pc = RC_ADDR(0x00001468u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x98u;

L_146C:
    /* 0000146c   6  move.l (c,A5),(fffff74c,A4) */
    c->pc = RC_ADDR(0x0000146cu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_wr32(c, m, (c->a[4] - 0x8b4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1472:
    /* 00001472   4  tst.l (fffff74c,A4) */
    c->pc = RC_ADDR(0x00001472u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x8b4u));
    rc_set_nzvc(c, t0, RC_L);

L_1476:
    /* 00001476   4  beq 000018a4 */
    c->pc = RC_ADDR(0x00001476u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18A4;

L_147A:
    /* 0000147a   4  pea (000003ed).l */
    c->pc = RC_ADDR(0x0000147au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000003edu);

L_147E:
    /* 0000147e   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000147eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1482:
    /* 00001482   4  jsr (ffff82b4,A4) */
    c->pc = RC_ADDR(0x00001482u);
    rc_step(c, m, 18);
    /* vector 115 */
    rc_push32(c, m, RC_ADDR(0x00001486u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023daau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022518u);
    return;

L_1486:
    /* 00001486   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00001486u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1488:
    /* 00001488   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00001488u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_148C:
    /* 0000148c   4  beq 000018a4 */
    c->pc = RC_ADDR(0x0000148cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18A4;

L_1490:
    /* 00001490   6  move.l (c,A5),(ffffffdc,A5) */
    c->pc = RC_ADDR(0x00001490u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_wr32(c, m, (c->a[5] - 0x24u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1496:
    /* 00001496   4  pea (ffffffff).l */
    c->pc = RC_ADDR(0x00001496u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xffffffffu);

L_149A:
    /* 0000149a   4  move.l (ffffffdc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000149au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x24u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_149E:
    /* 0000149e   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000149eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_14A2:
    /* 000014a2   4  jsr (ffff833e,A4) */
    c->pc = RC_ADDR(0x000014a2u);
    rc_step(c, m, 18);
    /* vector 138 */
    rc_push32(c, m, RC_ADDR(0x000014a6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e34u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023526u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002352au);
    return;

L_14A6:
    /* 000014a6   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000014a6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_14AA:
    /* 000014aa   4  pea (00000002).l */
    c->pc = RC_ADDR(0x000014aau);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_14AE:
    /* 000014ae   4  pea (ffffffda,A5) */
    c->pc = RC_ADDR(0x000014aeu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x26u));

L_14B2:
    /* 000014b2   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000014b2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_14B6:
    /* 000014b6   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x000014b6u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x000014bau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_14BA:
    /* 000014ba   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000014bau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_14BE:
    /* 000014be   4  clr.l (fffff744,A4) */
    c->pc = RC_ADDR(0x000014beu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x8bcu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_14C2:
    /* 000014c2   6  move.w (ffffffda,A5),(fffff742,A4) */
    c->pc = RC_ADDR(0x000014c2u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x26u));
    rc_wr16(c, m, (c->a[4] - 0x8beu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14C8:
    /* 000014c8   4  tst.w (ffffffda,A5) */
    c->pc = RC_ADDR(0x000014c8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x26u));
    rc_set_nzvc(c, t0, RC_W);

L_14CC:
    /* 000014cc   4  beq 0000188c */
    c->pc = RC_ADDR(0x000014ccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_188C;

L_14D0:
    /* 000014d0   4  tst.l (fffff744,A4) */
    c->pc = RC_ADDR(0x000014d0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x8bcu));
    rc_set_nzvc(c, t0, RC_L);

L_14D4:
    /* 000014d4   2  bne 000014f0 */
    c->pc = RC_ADDR(0x000014d4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_14F0;

L_14D6:
    /* 000014d6   6  pea (00010001).l */
    c->pc = RC_ADDR(0x000014d6u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_14DC:
    /* 000014dc   4  pea (0000002c).l */
    c->pc = RC_ADDR(0x000014dcu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000002cu);

L_14E0:
    /* 000014e0   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x000014e0u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x000014e4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_14E4:
    /* 000014e4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000014e4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_14E6:
    /* 000014e6   4  move.l D0,(fffff744,A4) */
    c->pc = RC_ADDR(0x000014e6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x8bcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_14EA:
    /* 000014ea   4  move.l D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x000014eau);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_14EE:
    /* 000014ee   2  bra 00001512 */
    c->pc = RC_ADDR(0x000014eeu);
    rc_step(c, m, 10);
    goto L_1512;

L_14F0:
    /* 000014f0   6  pea (00010001).l */
    c->pc = RC_ADDR(0x000014f0u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_14F6:
    /* 000014f6   4  pea (0000002c).l */
    c->pc = RC_ADDR(0x000014f6u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000002cu);

L_14FA:
    /* 000014fa   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x000014fau);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x000014feu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_14FE:
    /* 000014fe   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000014feu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1500:
    /* 00001500   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x00001500u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_1504:
    /* 00001504   4  move.l D0,(e,A0) */
    c->pc = RC_ADDR(0x00001504u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[0] + 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1508:
    /* 00001508   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x00001508u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_150C:
    /* 0000150c   6  move.l (e,A0),(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000150cu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0xeu));
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1512:
    /* 00001512   4  subq.w #1,(ffffffda,A5) */
    c->pc = RC_ADDR(0x00001512u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x26u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1516:
    /* 00001516   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00001516u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_151A:
    /* 0000151a   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x0000151au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_151E:
    /* 0000151e   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000151eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1522:
    /* 00001522   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00001522u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x00001526u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_1526:
    /* 00001526   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00001526u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_152A:
    /* 0000152a   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x0000152au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_152E:
    /* 0000152e   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x0000152eu);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1530:
    /* 00001530   2  ext.w D0 */
    c->pc = RC_ADDR(0x00001530u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_1532:
    /* 00001532   4  move.w D0,(ffffffd4,A5) */
    c->pc = RC_ADDR(0x00001532u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1536:
    /* 00001536   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00001536u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_153A:
    /* 0000153a   4  pea (ffffffcd,A5) */
    c->pc = RC_ADDR(0x0000153au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x33u));

L_153E:
    /* 0000153e   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000153eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1542:
    /* 00001542   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00001542u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x00001546u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_1546:
    /* 00001546   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00001546u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_154A:
    /* 0000154a   6  cmpi.b #64,(ffffffcd,A5) */
    c->pc = RC_ADDR(0x0000154au);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[5] - 0x33u));
    rc_cmp(c, RC_B, t0, 0x00000064u);

L_1550:
    /* 00001550   2  ble 000015a0 */
    c->pc = RC_ADDR(0x00001550u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_15A0;

L_1552:
    /* 00001552   6  subi.b #64,(ffffffcd,A5) */
    c->pc = RC_ADDR(0x00001552u);
    rc_step(c, m, 20);
    t3 = (c->a[5] - 0x33u);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 - 0x00000064u;
    rc_flags_sub(c, RC_B, t1, 0x00000064u, t2, 0);
    rc_wr8(c, m, t3, t2);

L_1558:
    /* 00001558   4  clr.w (ffffffd8,A5) */
    c->pc = RC_ADDR(0x00001558u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x28u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_155C:
    /* 0000155c   2  bra 0000157e */
    c->pc = RC_ADDR(0x0000155cu);
    rc_step(c, m, 10);
    goto L_157E;

L_155E:
    /* 0000155e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000155eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1560:
    /* 00001560   4  move.w (ffffffd8,A5),D0 */
    c->pc = RC_ADDR(0x00001560u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x28u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1564:
    /* 00001564   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00001564u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1566:
    /* 00001566   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00001566u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1568:
    /* 00001568   4  adda.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x00001568u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] += t0;

L_156C:
    /* 0000156c   4  pea (12,A0) */
    c->pc = RC_ADDR(0x0000156cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[0] + 0x12u));

L_1570:
    /* 00001570   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00001570u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1574:
    /* 00001574   4  jsr (0000134c) */
    c->pc = RC_ADDR(0x00001574u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001578u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000134cu);
    return;

L_1578:
    /* 00001578   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00001578u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_157A:
    /* 0000157a   4  addq.w #1,(ffffffd8,A5) */
    c->pc = RC_ADDR(0x0000157au);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x28u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_157E:
    /* 0000157e   4  move.b (ffffffcd,A5),D0 */
    c->pc = RC_ADDR(0x0000157eu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x33u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1582:
    /* 00001582   2  ext.w D0 */
    c->pc = RC_ADDR(0x00001582u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_1584:
    /* 00001584   4  move.w (ffffffd8,A5),D1 */
    c->pc = RC_ADDR(0x00001584u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x28u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1588:
    /* 00001588   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00001588u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_158A:
    /* 0000158a   2  bcs 0000155e */
    c->pc = RC_ADDR(0x0000158au);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_155E; }

L_158C:
    /* 0000158c   4  pea (00000001).l */
    c->pc = RC_ADDR(0x0000158cu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_1590:
    /* 00001590   4  pea (ffffffcd,A5) */
    c->pc = RC_ADDR(0x00001590u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x33u));

L_1594:
    /* 00001594   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00001594u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1598:
    /* 00001598   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00001598u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0000159cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_159C:
    /* 0000159c   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000159cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_15A0:
    /* 000015a0   4  pea (00000001).l */
    c->pc = RC_ADDR(0x000015a0u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_15A4:
    /* 000015a4   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x000015a4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_15A8:
    /* 000015a8   2  addq.l #1,A0 */
    c->pc = RC_ADDR(0x000015a8u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000001u;

L_15AA:
    /* 000015aa   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x000015aau);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_15AC:
    /* 000015ac   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000015acu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_15B0:
    /* 000015b0   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x000015b0u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x000015b4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_15B4:
    /* 000015b4   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000015b4u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_15B8:
    /* 000015b8   4  pea (00000001).l */
    c->pc = RC_ADDR(0x000015b8u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_15BC:
    /* 000015bc   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x000015bcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_15C0:
    /* 000015c0   2  addq.l #6,A0 */
    c->pc = RC_ADDR(0x000015c0u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000006u;

L_15C2:
    /* 000015c2   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x000015c2u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_15C4:
    /* 000015c4   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000015c4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_15C8:
    /* 000015c8   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x000015c8u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x000015ccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_15CC:
    /* 000015cc   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000015ccu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_15D0:
    /* 000015d0   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x000015d0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_15D4:
    /* 000015d4   4  move.b (1,A0),D0 */
    c->pc = RC_ADDR(0x000015d4u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_15D8:
    /* 000015d8   2  ext.w D0 */
    c->pc = RC_ADDR(0x000015d8u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_15DA:
    /* 000015da   4  move.w D0,(ffffffd6,A5) */
    c->pc = RC_ADDR(0x000015dau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15DE:
    /* 000015de   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x000015deu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_15E2:
    /* 000015e2   2  addq.l #2,A0 */
    c->pc = RC_ADDR(0x000015e2u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000002u;

L_15E4:
    /* 000015e4   4  move.l A0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000015e4u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_15E8:
    /* 000015e8   4  tst.w (ffffffd6,A5) */
    c->pc = RC_ADDR(0x000015e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2au));
    rc_set_nzvc(c, t0, RC_W);

L_15EC:
    /* 000015ec   4  beq 000016b6 */
    c->pc = RC_ADDR(0x000015ecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_16B6;

L_15F0:
    /* 000015f0   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x000015f0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_15F4:
    /* 000015f4   6  cmpi.b #64,(4,A0) */
    c->pc = RC_ADDR(0x000015f4u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[0] + 0x4u));
    rc_cmp(c, RC_B, t0, 0x00000064u);

L_15FA:
    /* 000015fa   2  bne 0000165e */
    c->pc = RC_ADDR(0x000015fau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_165E;

L_15FC:
    /* 000015fc   6  pea (00010001).l */
    c->pc = RC_ADDR(0x000015fcu);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_1602:
    /* 00001602   4  pea (00000016).l */
    c->pc = RC_ADDR(0x00001602u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000016u);

L_1606:
    /* 00001606   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x00001606u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x0000160au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_160A:
    /* 0000160a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000160au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_160C:
    /* 0000160c   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x0000160cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_1610:
    /* 00001610   2  move.l D0,(A0) */
    c->pc = RC_ADDR(0x00001610u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1612:
    /* 00001612   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00001612u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_1616:
    /* 00001616   4  move.l (A0),(ffffffec,A5) */
    c->pc = RC_ADDR(0x00001616u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_161A:
    /* 0000161a   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000161au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_161E:
    /* 0000161e   4  jsr (00001394) */
    c->pc = RC_ADDR(0x0000161eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001622u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001394u);
    return;

L_1622:
    /* 00001622   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00001622u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1624:
    /* 00001624   4  movea.l (ffffffec,A5),A0 */
    c->pc = RC_ADDR(0x00001624u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x14u));
    c->a[0] = t0;

L_1628:
    /* 00001628   2  move.l D0,(A0) */
    c->pc = RC_ADDR(0x00001628u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_162A:
    /* 0000162a   4  movea.l (ffffffec,A5),A0 */
    c->pc = RC_ADDR(0x0000162au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x14u));
    c->a[0] = t0;

L_162E:
    /* 0000162e   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x0000162eu);
    rc_step(c, m, 8);
    c->a[0] += 0x00000004u;

L_1630:
    /* 00001630   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x00001630u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1632:
    /* 00001632   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00001632u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1636:
    /* 00001636   4  jsr (0000134c) */
    c->pc = RC_ADDR(0x00001636u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000163au));
    rc_depth++;
    c->pc = RC_ADDR(0x0000134cu);
    return;

L_163A:
    /* 0000163a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000163au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_163C:
    /* 0000163c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000163cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1640:
    /* 00001640   4  jsr (00001394) */
    c->pc = RC_ADDR(0x00001640u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001644u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001394u);
    return;

L_1644:
    /* 00001644   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00001644u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1646:
    /* 00001646   4  movea.l (ffffffec,A5),A0 */
    c->pc = RC_ADDR(0x00001646u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x14u));
    c->a[0] = t0;

L_164A:
    /* 0000164a   4  move.l D0,(c,A0) */
    c->pc = RC_ADDR(0x0000164au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[0] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_164E:
    /* 0000164e   4  movea.l (ffffffec,A5),A0 */
    c->pc = RC_ADDR(0x0000164eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x14u));
    c->a[0] = t0;

L_1652:
    /* 00001652   6  adda.l #10,A0 */
    c->pc = RC_ADDR(0x00001652u);
    rc_step(c, m, 16);
    t0 = 0x00000010u;
    c->a[0] += t0;

L_1658:
    /* 00001658   4  move.l A0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00001658u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_165C:
    /* 0000165c   2  bra 00001696 */
    c->pc = RC_ADDR(0x0000165cu);
    rc_step(c, m, 10);
    goto L_1696;

L_165E:
    /* 0000165e   6  pea (00010001).l */
    c->pc = RC_ADDR(0x0000165eu);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_1664:
    /* 00001664   4  pea (0000000a).l */
    c->pc = RC_ADDR(0x00001664u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000au);

L_1668:
    /* 00001668   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x00001668u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x0000166cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_166C:
    /* 0000166c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000166cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_166E:
    /* 0000166e   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x0000166eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_1672:
    /* 00001672   2  move.l D0,(A0) */
    c->pc = RC_ADDR(0x00001672u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1674:
    /* 00001674   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00001674u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_1678:
    /* 00001678   4  move.l (A0),(ffffffe8,A5) */
    c->pc = RC_ADDR(0x00001678u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x18u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_167C:
    /* 0000167c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000167cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1680:
    /* 00001680   4  jsr (00001394) */
    c->pc = RC_ADDR(0x00001680u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001684u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001394u);
    return;

L_1684:
    /* 00001684   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00001684u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1686:
    /* 00001686   4  movea.l (ffffffe8,A5),A0 */
    c->pc = RC_ADDR(0x00001686u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    c->a[0] = t0;

L_168A:
    /* 0000168a   2  move.l D0,(A0) */
    c->pc = RC_ADDR(0x0000168au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_168C:
    /* 0000168c   4  movea.l (ffffffe8,A5),A0 */
    c->pc = RC_ADDR(0x0000168cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    c->a[0] = t0;

L_1690:
    /* 00001690   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x00001690u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000004u;

L_1692:
    /* 00001692   4  move.l A0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00001692u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1696:
    /* 00001696   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00001696u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_169A:
    /* 0000169a   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x0000169au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_169E:
    /* 0000169e   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x0000169eu);
    rc_step(c, m, 8);
    c->a[0] += 0x00000004u;

L_16A0:
    /* 000016a0   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x000016a0u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16A2:
    /* 000016a2   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000016a2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16A6:
    /* 000016a6   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x000016a6u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x000016aau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_16AA:
    /* 000016aa   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000016aau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_16AE:
    /* 000016ae   4  subq.w #1,(ffffffd6,A5) */
    c->pc = RC_ADDR(0x000016aeu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16B2:
    /* 000016b2   4  bra 000015e8 */
    c->pc = RC_ADDR(0x000016b2u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_15E8;

L_16B6:
    /* 000016b6   4  pea (00000001).l */
    c->pc = RC_ADDR(0x000016b6u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_16BA:
    /* 000016ba   4  pea (ffffffcc,A5) */
    c->pc = RC_ADDR(0x000016bau);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x34u));

L_16BE:
    /* 000016be   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000016beu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16C2:
    /* 000016c2   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x000016c2u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x000016c6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_16C6:
    /* 000016c6   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000016c6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_16CA:
    /* 000016ca   6  cmpi.b #fc,(ffffffcc,A5) */
    c->pc = RC_ADDR(0x000016cau);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[5] - 0x34u));
    rc_cmp(c, RC_B, t0, 0x000000fcu);

L_16D0:
    /* 000016d0   2  bne 000016fe */
    c->pc = RC_ADDR(0x000016d0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_16FE;

L_16D2:
    /* 000016d2   4  pea (00000001).l */
    c->pc = RC_ADDR(0x000016d2u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_16D6:
    /* 000016d6   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x000016d6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_16DA:
    /* 000016da   4  pea (22,A0) */
    c->pc = RC_ADDR(0x000016dau);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[0] + 0x22u));

L_16DE:
    /* 000016de   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000016deu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16E2:
    /* 000016e2   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x000016e2u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x000016e6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_16E6:
    /* 000016e6   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000016e6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_16EA:
    /* 000016ea   4  pea (00000001).l */
    c->pc = RC_ADDR(0x000016eau);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_16EE:
    /* 000016ee   4  pea (ffffffcc,A5) */
    c->pc = RC_ADDR(0x000016eeu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x34u));

L_16F2:
    /* 000016f2   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000016f2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16F6:
    /* 000016f6   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x000016f6u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x000016fau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_16FA:
    /* 000016fa   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000016fau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_16FE:
    /* 000016fe   4  pea (00000001).l */
    c->pc = RC_ADDR(0x000016feu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_1702:
    /* 00001702   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x00001702u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_1706:
    /* 00001706   4  pea (9,A0) */
    c->pc = RC_ADDR(0x00001706u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[0] + 0x9u));

L_170A:
    /* 0000170a   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000170au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_170E:
    /* 0000170e   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0000170eu);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x00001712u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_1712:
    /* 00001712   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00001712u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1716:
    /* 00001716   4  clr.w (ffffffd8,A5) */
    c->pc = RC_ADDR(0x00001716u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x28u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_171A:
    /* 0000171a   4  bra 000017a2 */
    c->pc = RC_ADDR(0x0000171au);
    rc_step(c, m, 10);
    goto L_17A2;

L_171E:
    /* 0000171e   4  tst.w (ffffffd8,A5) */
    c->pc = RC_ADDR(0x0000171eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x28u));
    rc_set_nzvc(c, t0, RC_W);

L_1722:
    /* 00001722   2  beq 00001748 */
    c->pc = RC_ADDR(0x00001722u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1748;

L_1724:
    /* 00001724   6  pea (00010001).l */
    c->pc = RC_ADDR(0x00001724u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_172A:
    /* 0000172a   4  pea (0000000e).l */
    c->pc = RC_ADDR(0x0000172au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000eu);

L_172E:
    /* 0000172e   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x0000172eu);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x00001732u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_1732:
    /* 00001732   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00001732u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1734:
    /* 00001734   4  movea.l (fffffff0,A5),A0 */
    c->pc = RC_ADDR(0x00001734u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[0] = t0;

L_1738:
    /* 00001738   4  move.l D0,(8,A0) */
    c->pc = RC_ADDR(0x00001738u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_173C:
    /* 0000173c   4  movea.l (fffffff0,A5),A0 */
    c->pc = RC_ADDR(0x0000173cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[0] = t0;

L_1740:
    /* 00001740   6  move.l (8,A0),(fffffff0,A5) */
    c->pc = RC_ADDR(0x00001740u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1746:
    /* 00001746   2  bra 00001764 */
    c->pc = RC_ADDR(0x00001746u);
    rc_step(c, m, 10);
    goto L_1764;

L_1748:
    /* 00001748   6  pea (00010001).l */
    c->pc = RC_ADDR(0x00001748u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_174E:
    /* 0000174e   4  pea (0000000e).l */
    c->pc = RC_ADDR(0x0000174eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000eu);

L_1752:
    /* 00001752   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x00001752u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x00001756u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_1756:
    /* 00001756   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00001756u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1758:
    /* 00001758   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x00001758u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_175C:
    /* 0000175c   4  move.l D0,(a,A0) */
    c->pc = RC_ADDR(0x0000175cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[0] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1760:
    /* 00001760   4  move.l D0,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00001760u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1764:
    /* 00001764   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00001764u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1768:
    /* 00001768   4  jsr (00001394) */
    c->pc = RC_ADDR(0x00001768u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000176cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00001394u);
    return;

L_176C:
    /* 0000176c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000176cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_176E:
    /* 0000176e   4  movea.l (fffffff0,A5),A0 */
    c->pc = RC_ADDR(0x0000176eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[0] = t0;

L_1772:
    /* 00001772   2  move.l D0,(A0) */
    c->pc = RC_ADDR(0x00001772u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1774:
    /* 00001774   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00001774u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1778:
    /* 00001778   4  movea.l (fffffff0,A5),A0 */
    c->pc = RC_ADDR(0x00001778u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[0] = t0;

L_177C:
    /* 0000177c   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x0000177cu);
    rc_step(c, m, 8);
    c->a[0] += 0x00000004u;

L_177E:
    /* 0000177e   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x0000177eu);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1780:
    /* 00001780   4  jsr (000013ec) */
    c->pc = RC_ADDR(0x00001780u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001784u));
    rc_depth++;
    c->pc = RC_ADDR(0x000013ecu);
    return;

L_1784:
    /* 00001784   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00001784u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1786:
    /* 00001786   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00001786u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_178A:
    /* 0000178a   4  movea.l (fffffff0,A5),A0 */
    c->pc = RC_ADDR(0x0000178au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[0] = t0;

L_178E:
    /* 0000178e   4  pea (c,A0) */
    c->pc = RC_ADDR(0x0000178eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[0] + 0xcu));

L_1792:
    /* 00001792   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00001792u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1796:
    /* 00001796   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00001796u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0000179au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_179A:
    /* 0000179a   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000179au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_179E:
    /* 0000179e   4  addq.w #1,(ffffffd8,A5) */
    c->pc = RC_ADDR(0x0000179eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x28u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17A2:
    /* 000017a2   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x000017a2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_17A6:
    /* 000017a6   4  move.b (9,A0),D0 */
    c->pc = RC_ADDR(0x000017a6u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x9u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_17AA:
    /* 000017aa   2  ext.w D0 */
    c->pc = RC_ADDR(0x000017aau);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_17AC:
    /* 000017ac   4  move.w (ffffffd8,A5),D1 */
    c->pc = RC_ADDR(0x000017acu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x28u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B0:
    /* 000017b0   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x000017b0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_17B2:
    /* 000017b2   4  bcs 0000171e */
    c->pc = RC_ADDR(0x000017b2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_171E; }

L_17B6:
    /* 000017b6   4  pea (00000002).l */
    c->pc = RC_ADDR(0x000017b6u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_17BA:
    /* 000017ba   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x000017bau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_17BE:
    /* 000017be   4  pea (24,A0) */
    c->pc = RC_ADDR(0x000017beu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[0] + 0x24u));

L_17C2:
    /* 000017c2   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000017c2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17C6:
    /* 000017c6   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x000017c6u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x000017cau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_17CA:
    /* 000017ca   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000017cau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_17CE:
    /* 000017ce   4  pea (00000001).l */
    c->pc = RC_ADDR(0x000017ceu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_17D2:
    /* 000017d2   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x000017d2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_17D6:
    /* 000017d6   4  pea (26,A0) */
    c->pc = RC_ADDR(0x000017d6u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[0] + 0x26u));

L_17DA:
    /* 000017da   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000017dau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17DE:
    /* 000017de   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x000017deu);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x000017e2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_17E2:
    /* 000017e2   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000017e2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_17E6:
    /* 000017e6   4  pea (00000001).l */
    c->pc = RC_ADDR(0x000017e6u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_17EA:
    /* 000017ea   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x000017eau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_17EE:
    /* 000017ee   4  pea (27,A0) */
    c->pc = RC_ADDR(0x000017eeu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[0] + 0x27u));

L_17F2:
    /* 000017f2   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000017f2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17F6:
    /* 000017f6   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x000017f6u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x000017fau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_17FA:
    /* 000017fa   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000017fau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_17FE:
    /* 000017fe   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x000017feu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_1802:
    /* 00001802   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00001802u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1804:
    /* 00001804   4  move.b (27,A0),D0 */
    c->pc = RC_ADDR(0x00001804u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x27u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1808:
    /* 00001808   4  move.w D0,(ffffffd8,A5) */
    c->pc = RC_ADDR(0x00001808u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x28u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_180C:
    /* 0000180c   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x0000180cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_1810:
    /* 00001810   4  clr.l (28,A0) */
    c->pc = RC_ADDR(0x00001810u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[0] + 0x28u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1814:
    /* 00001814   4  move.w (ffffffd8,A5),D0 */
    c->pc = RC_ADDR(0x00001814u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x28u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1818:
    /* 00001818   4  subq.w #1,(ffffffd8,A5) */
    c->pc = RC_ADDR(0x00001818u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x28u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_181C:
    /* 0000181c   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000181cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_181E:
    /* 0000181e   2  beq 00001888 */
    c->pc = RC_ADDR(0x0000181eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1888;

L_1820:
    /* 00001820   6  pea (00010001).l */
    c->pc = RC_ADDR(0x00001820u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_1826:
    /* 00001826   4  pea (0000000a).l */
    c->pc = RC_ADDR(0x00001826u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000au);

L_182A:
    /* 0000182a   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x0000182au);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x0000182eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_182E:
    /* 0000182e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000182eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1830:
    /* 00001830   4  move.l D0,(ffffffe0,A5) */
    c->pc = RC_ADDR(0x00001830u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x20u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1834:
    /* 00001834   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x00001834u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_1838:
    /* 00001838   4  tst.l (28,A0) */
    c->pc = RC_ADDR(0x00001838u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x28u));
    rc_set_nzvc(c, t0, RC_L);

L_183C:
    /* 0000183c   2  beq 00001850 */
    c->pc = RC_ADDR(0x0000183cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1850;

L_183E:
    /* 0000183e   4  movea.l (ffffffe4,A5),A0 */
    c->pc = RC_ADDR(0x0000183eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1cu));
    c->a[0] = t0;

L_1842:
    /* 00001842   6  move.l (ffffffe0,A5),(6,A0) */
    c->pc = RC_ADDR(0x00001842u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] - 0x20u));
    rc_wr32(c, m, (c->a[0] + 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1848:
    /* 00001848   6  move.l (ffffffe0,A5),(ffffffe4,A5) */
    c->pc = RC_ADDR(0x00001848u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] - 0x20u));
    rc_wr32(c, m, (c->a[5] - 0x1cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_184E:
    /* 0000184e   2  bra 00001860 */
    c->pc = RC_ADDR(0x0000184eu);
    rc_step(c, m, 10);
    goto L_1860;

L_1850:
    /* 00001850   6  move.l (ffffffe0,A5),(ffffffe4,A5) */
    c->pc = RC_ADDR(0x00001850u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] - 0x20u));
    rc_wr32(c, m, (c->a[5] - 0x1cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1856:
    /* 00001856   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x00001856u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_185A:
    /* 0000185a   6  move.l (ffffffe0,A5),(28,A0) */
    c->pc = RC_ADDR(0x0000185au);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] - 0x20u));
    rc_wr32(c, m, (c->a[0] + 0x28u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1860:
    /* 00001860   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00001860u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_1864:
    /* 00001864   4  move.l (ffffffe4,A5),-(A7) */
    c->pc = RC_ADDR(0x00001864u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1868:
    /* 00001868   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00001868u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_186C:
    /* 0000186c   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0000186cu);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x00001870u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_1870:
    /* 00001870   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00001870u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1874:
    /* 00001874   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00001874u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1878:
    /* 00001878   4  movea.l (ffffffe4,A5),A0 */
    c->pc = RC_ADDR(0x00001878u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1cu));
    c->a[0] = t0;

L_187C:
    /* 0000187c   2  addq.l #2,A0 */
    c->pc = RC_ADDR(0x0000187cu);
    rc_step(c, m, 8);
    c->a[0] += 0x00000002u;

L_187E:
    /* 0000187e   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x0000187eu);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1880:
    /* 00001880   4  jsr (000013ec) */
    c->pc = RC_ADDR(0x00001880u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001884u));
    rc_depth++;
    c->pc = RC_ADDR(0x000013ecu);
    return;

L_1884:
    /* 00001884   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00001884u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1886:
    /* 00001886   2  bra 00001814 */
    c->pc = RC_ADDR(0x00001886u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1814;

L_1888:
    /* 00001888   4  bra 000014c8 */
    c->pc = RC_ADDR(0x00001888u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_14C8;

L_188C:
    /* 0000188c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000188cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1890:
    /* 00001890   4  pea (fffff748,A4) */
    c->pc = RC_ADDR(0x00001890u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x8b8u));

L_1894:
    /* 00001894   4  jsr (000013ec) */
    c->pc = RC_ADDR(0x00001894u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001898u));
    rc_depth++;
    c->pc = RC_ADDR(0x000013ecu);
    return;

L_1898:
    /* 00001898   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00001898u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_189A:
    /* 0000189a   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000189au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_189E:
    /* 0000189e   4  jsr (ffff82ba,A4) */
    c->pc = RC_ADDR(0x0000189eu);
    rc_step(c, m, 18);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x000018a2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023db0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022532u);
    return;

L_18A2:
    /* 000018a2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000018a2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_18A4:
    /* 000018a4   2  unlk A5 */
    c->pc = RC_ADDR(0x000018a4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_18A6:
    /* 000018a6   2  rts */
    c->pc = RC_ADDR(0x000018a6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
