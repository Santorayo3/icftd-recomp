/* fn_00015fec - 1142 byte(s), 311 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00015fec(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00015fecu): goto L_15FEC;
    case RC_ADDR(0x00015ff0u): goto L_15FF0;
    case RC_ADDR(0x00015ff4u): goto L_15FF4;
    case RC_ADDR(0x00015ff8u): goto L_15FF8;
    case RC_ADDR(0x00015ffcu): goto L_15FFC;
    case RC_ADDR(0x00016000u): goto L_16000;
    case RC_ADDR(0x00016004u): goto L_16004;
    case RC_ADDR(0x00016008u): goto L_16008;
    case RC_ADDR(0x0001600cu): goto L_1600C;
    case RC_ADDR(0x00016010u): goto L_16010;
    case RC_ADDR(0x00016014u): goto L_16014;
    case RC_ADDR(0x00016018u): goto L_16018;
    case RC_ADDR(0x0001601cu): goto L_1601C;
    case RC_ADDR(0x00016022u): goto L_16022;
    case RC_ADDR(0x00016028u): goto L_16028;
    case RC_ADDR(0x0001602cu): goto L_1602C;
    case RC_ADDR(0x00016030u): goto L_16030;
    case RC_ADDR(0x00016034u): goto L_16034;
    case RC_ADDR(0x00016038u): goto L_16038;
    case RC_ADDR(0x0001603cu): goto L_1603C;
    case RC_ADDR(0x00016040u): goto L_16040;
    case RC_ADDR(0x00016044u): goto L_16044;
    case RC_ADDR(0x00016046u): goto L_16046;
    case RC_ADDR(0x0001604au): goto L_1604A;
    case RC_ADDR(0x0001604eu): goto L_1604E;
    case RC_ADDR(0x00016050u): goto L_16050;
    case RC_ADDR(0x00016054u): goto L_16054;
    case RC_ADDR(0x00016056u): goto L_16056;
    case RC_ADDR(0x0001605au): goto L_1605A;
    case RC_ADDR(0x0001605cu): goto L_1605C;
    case RC_ADDR(0x00016060u): goto L_16060;
    case RC_ADDR(0x00016064u): goto L_16064;
    case RC_ADDR(0x00016066u): goto L_16066;
    case RC_ADDR(0x0001606au): goto L_1606A;
    case RC_ADDR(0x0001606cu): goto L_1606C;
    case RC_ADDR(0x0001606eu): goto L_1606E;
    case RC_ADDR(0x00016072u): goto L_16072;
    case RC_ADDR(0x00016078u): goto L_16078;
    case RC_ADDR(0x0001607cu): goto L_1607C;
    case RC_ADDR(0x0001607eu): goto L_1607E;
    case RC_ADDR(0x00016080u): goto L_16080;
    case RC_ADDR(0x00016082u): goto L_16082;
    case RC_ADDR(0x00016086u): goto L_16086;
    case RC_ADDR(0x00016088u): goto L_16088;
    case RC_ADDR(0x0001608eu): goto L_1608E;
    case RC_ADDR(0x00016090u): goto L_16090;
    case RC_ADDR(0x00016094u): goto L_16094;
    case RC_ADDR(0x0001609au): goto L_1609A;
    case RC_ADDR(0x0001609eu): goto L_1609E;
    case RC_ADDR(0x000160a2u): goto L_160A2;
    case RC_ADDR(0x000160a6u): goto L_160A6;
    case RC_ADDR(0x000160aau): goto L_160AA;
    case RC_ADDR(0x000160aeu): goto L_160AE;
    case RC_ADDR(0x000160b2u): goto L_160B2;
    case RC_ADDR(0x000160b6u): goto L_160B6;
    case RC_ADDR(0x000160bau): goto L_160BA;
    case RC_ADDR(0x000160beu): goto L_160BE;
    case RC_ADDR(0x000160c2u): goto L_160C2;
    case RC_ADDR(0x000160c6u): goto L_160C6;
    case RC_ADDR(0x000160cau): goto L_160CA;
    case RC_ADDR(0x000160ceu): goto L_160CE;
    case RC_ADDR(0x000160d0u): goto L_160D0;
    case RC_ADDR(0x000160d6u): goto L_160D6;
    case RC_ADDR(0x000160d8u): goto L_160D8;
    case RC_ADDR(0x000160dcu): goto L_160DC;
    case RC_ADDR(0x000160e2u): goto L_160E2;
    case RC_ADDR(0x000160e6u): goto L_160E6;
    case RC_ADDR(0x000160eau): goto L_160EA;
    case RC_ADDR(0x000160eeu): goto L_160EE;
    case RC_ADDR(0x000160f2u): goto L_160F2;
    case RC_ADDR(0x000160f6u): goto L_160F6;
    case RC_ADDR(0x000160fau): goto L_160FA;
    case RC_ADDR(0x000160feu): goto L_160FE;
    case RC_ADDR(0x00016102u): goto L_16102;
    case RC_ADDR(0x00016106u): goto L_16106;
    case RC_ADDR(0x0001610au): goto L_1610A;
    case RC_ADDR(0x0001610eu): goto L_1610E;
    case RC_ADDR(0x00016112u): goto L_16112;
    case RC_ADDR(0x00016116u): goto L_16116;
    case RC_ADDR(0x00016118u): goto L_16118;
    case RC_ADDR(0x0001611eu): goto L_1611E;
    case RC_ADDR(0x00016120u): goto L_16120;
    case RC_ADDR(0x00016122u): goto L_16122;
    case RC_ADDR(0x00016128u): goto L_16128;
    case RC_ADDR(0x0001612cu): goto L_1612C;
    case RC_ADDR(0x00016130u): goto L_16130;
    case RC_ADDR(0x00016134u): goto L_16134;
    case RC_ADDR(0x00016138u): goto L_16138;
    case RC_ADDR(0x0001613cu): goto L_1613C;
    case RC_ADDR(0x00016140u): goto L_16140;
    case RC_ADDR(0x00016144u): goto L_16144;
    case RC_ADDR(0x00016148u): goto L_16148;
    case RC_ADDR(0x0001614cu): goto L_1614C;
    case RC_ADDR(0x00016150u): goto L_16150;
    case RC_ADDR(0x00016154u): goto L_16154;
    case RC_ADDR(0x00016158u): goto L_16158;
    case RC_ADDR(0x0001615cu): goto L_1615C;
    case RC_ADDR(0x0001615eu): goto L_1615E;
    case RC_ADDR(0x00016164u): goto L_16164;
    case RC_ADDR(0x00016166u): goto L_16166;
    case RC_ADDR(0x00016168u): goto L_16168;
    case RC_ADDR(0x0001616eu): goto L_1616E;
    case RC_ADDR(0x00016172u): goto L_16172;
    case RC_ADDR(0x00016176u): goto L_16176;
    case RC_ADDR(0x0001617au): goto L_1617A;
    case RC_ADDR(0x0001617eu): goto L_1617E;
    case RC_ADDR(0x00016182u): goto L_16182;
    case RC_ADDR(0x00016186u): goto L_16186;
    case RC_ADDR(0x0001618au): goto L_1618A;
    case RC_ADDR(0x0001618eu): goto L_1618E;
    case RC_ADDR(0x00016192u): goto L_16192;
    case RC_ADDR(0x00016196u): goto L_16196;
    case RC_ADDR(0x0001619au): goto L_1619A;
    case RC_ADDR(0x0001619eu): goto L_1619E;
    case RC_ADDR(0x000161a2u): goto L_161A2;
    case RC_ADDR(0x000161a4u): goto L_161A4;
    case RC_ADDR(0x000161aau): goto L_161AA;
    case RC_ADDR(0x000161acu): goto L_161AC;
    case RC_ADDR(0x000161b0u): goto L_161B0;
    case RC_ADDR(0x000161b6u): goto L_161B6;
    case RC_ADDR(0x000161bcu): goto L_161BC;
    case RC_ADDR(0x000161c0u): goto L_161C0;
    case RC_ADDR(0x000161c4u): goto L_161C4;
    case RC_ADDR(0x000161c8u): goto L_161C8;
    case RC_ADDR(0x000161ccu): goto L_161CC;
    case RC_ADDR(0x000161d0u): goto L_161D0;
    case RC_ADDR(0x000161d4u): goto L_161D4;
    case RC_ADDR(0x000161d8u): goto L_161D8;
    case RC_ADDR(0x000161dcu): goto L_161DC;
    case RC_ADDR(0x000161e0u): goto L_161E0;
    case RC_ADDR(0x000161e4u): goto L_161E4;
    case RC_ADDR(0x000161e8u): goto L_161E8;
    case RC_ADDR(0x000161ecu): goto L_161EC;
    case RC_ADDR(0x000161f0u): goto L_161F0;
    case RC_ADDR(0x000161f4u): goto L_161F4;
    case RC_ADDR(0x000161f6u): goto L_161F6;
    case RC_ADDR(0x000161fcu): goto L_161FC;
    case RC_ADDR(0x000161feu): goto L_161FE;
    case RC_ADDR(0x00016202u): goto L_16202;
    case RC_ADDR(0x00016208u): goto L_16208;
    case RC_ADDR(0x0001620eu): goto L_1620E;
    case RC_ADDR(0x00016212u): goto L_16212;
    case RC_ADDR(0x00016216u): goto L_16216;
    case RC_ADDR(0x0001621au): goto L_1621A;
    case RC_ADDR(0x0001621eu): goto L_1621E;
    case RC_ADDR(0x00016222u): goto L_16222;
    case RC_ADDR(0x00016226u): goto L_16226;
    case RC_ADDR(0x0001622au): goto L_1622A;
    case RC_ADDR(0x0001622eu): goto L_1622E;
    case RC_ADDR(0x00016232u): goto L_16232;
    case RC_ADDR(0x00016236u): goto L_16236;
    case RC_ADDR(0x0001623au): goto L_1623A;
    case RC_ADDR(0x0001623eu): goto L_1623E;
    case RC_ADDR(0x00016242u): goto L_16242;
    case RC_ADDR(0x00016246u): goto L_16246;
    case RC_ADDR(0x00016248u): goto L_16248;
    case RC_ADDR(0x0001624eu): goto L_1624E;
    case RC_ADDR(0x00016250u): goto L_16250;
    case RC_ADDR(0x00016254u): goto L_16254;
    case RC_ADDR(0x0001625au): goto L_1625A;
    case RC_ADDR(0x00016260u): goto L_16260;
    case RC_ADDR(0x00016264u): goto L_16264;
    case RC_ADDR(0x00016268u): goto L_16268;
    case RC_ADDR(0x0001626cu): goto L_1626C;
    case RC_ADDR(0x00016270u): goto L_16270;
    case RC_ADDR(0x00016274u): goto L_16274;
    case RC_ADDR(0x00016278u): goto L_16278;
    case RC_ADDR(0x0001627cu): goto L_1627C;
    case RC_ADDR(0x00016280u): goto L_16280;
    case RC_ADDR(0x00016284u): goto L_16284;
    case RC_ADDR(0x00016288u): goto L_16288;
    case RC_ADDR(0x0001628cu): goto L_1628C;
    case RC_ADDR(0x00016290u): goto L_16290;
    case RC_ADDR(0x00016292u): goto L_16292;
    case RC_ADDR(0x00016298u): goto L_16298;
    case RC_ADDR(0x0001629au): goto L_1629A;
    case RC_ADDR(0x0001629eu): goto L_1629E;
    case RC_ADDR(0x000162a4u): goto L_162A4;
    case RC_ADDR(0x000162aau): goto L_162AA;
    case RC_ADDR(0x000162aeu): goto L_162AE;
    case RC_ADDR(0x000162b2u): goto L_162B2;
    case RC_ADDR(0x000162b6u): goto L_162B6;
    case RC_ADDR(0x000162bau): goto L_162BA;
    case RC_ADDR(0x000162beu): goto L_162BE;
    case RC_ADDR(0x000162c2u): goto L_162C2;
    case RC_ADDR(0x000162c6u): goto L_162C6;
    case RC_ADDR(0x000162cau): goto L_162CA;
    case RC_ADDR(0x000162ceu): goto L_162CE;
    case RC_ADDR(0x000162d2u): goto L_162D2;
    case RC_ADDR(0x000162d6u): goto L_162D6;
    case RC_ADDR(0x000162dau): goto L_162DA;
    case RC_ADDR(0x000162deu): goto L_162DE;
    case RC_ADDR(0x000162e0u): goto L_162E0;
    case RC_ADDR(0x000162e4u): goto L_162E4;
    case RC_ADDR(0x000162e8u): goto L_162E8;
    case RC_ADDR(0x000162eau): goto L_162EA;
    case RC_ADDR(0x000162ecu): goto L_162EC;
    case RC_ADDR(0x000162f0u): goto L_162F0;
    case RC_ADDR(0x000162f4u): goto L_162F4;
    case RC_ADDR(0x000162f8u): goto L_162F8;
    case RC_ADDR(0x000162fau): goto L_162FA;
    case RC_ADDR(0x000162fcu): goto L_162FC;
    case RC_ADDR(0x00016300u): goto L_16300;
    case RC_ADDR(0x00016304u): goto L_16304;
    case RC_ADDR(0x00016306u): goto L_16306;
    case RC_ADDR(0x0001630au): goto L_1630A;
    case RC_ADDR(0x0001630eu): goto L_1630E;
    case RC_ADDR(0x00016310u): goto L_16310;
    case RC_ADDR(0x00016312u): goto L_16312;
    case RC_ADDR(0x00016316u): goto L_16316;
    case RC_ADDR(0x0001631au): goto L_1631A;
    case RC_ADDR(0x0001631eu): goto L_1631E;
    case RC_ADDR(0x00016322u): goto L_16322;
    case RC_ADDR(0x00016324u): goto L_16324;
    case RC_ADDR(0x00016326u): goto L_16326;
    case RC_ADDR(0x0001632au): goto L_1632A;
    case RC_ADDR(0x0001632eu): goto L_1632E;
    case RC_ADDR(0x00016330u): goto L_16330;
    case RC_ADDR(0x00016334u): goto L_16334;
    case RC_ADDR(0x00016338u): goto L_16338;
    case RC_ADDR(0x0001633au): goto L_1633A;
    case RC_ADDR(0x0001633cu): goto L_1633C;
    case RC_ADDR(0x00016340u): goto L_16340;
    case RC_ADDR(0x00016344u): goto L_16344;
    case RC_ADDR(0x00016348u): goto L_16348;
    case RC_ADDR(0x0001634cu): goto L_1634C;
    case RC_ADDR(0x0001634eu): goto L_1634E;
    case RC_ADDR(0x00016350u): goto L_16350;
    case RC_ADDR(0x00016354u): goto L_16354;
    case RC_ADDR(0x00016358u): goto L_16358;
    case RC_ADDR(0x0001635au): goto L_1635A;
    case RC_ADDR(0x0001635eu): goto L_1635E;
    case RC_ADDR(0x00016362u): goto L_16362;
    case RC_ADDR(0x00016364u): goto L_16364;
    case RC_ADDR(0x00016366u): goto L_16366;
    case RC_ADDR(0x0001636au): goto L_1636A;
    case RC_ADDR(0x0001636eu): goto L_1636E;
    case RC_ADDR(0x00016372u): goto L_16372;
    case RC_ADDR(0x00016376u): goto L_16376;
    case RC_ADDR(0x00016378u): goto L_16378;
    case RC_ADDR(0x0001637au): goto L_1637A;
    case RC_ADDR(0x0001637eu): goto L_1637E;
    case RC_ADDR(0x00016382u): goto L_16382;
    case RC_ADDR(0x00016384u): goto L_16384;
    case RC_ADDR(0x00016388u): goto L_16388;
    case RC_ADDR(0x0001638cu): goto L_1638C;
    case RC_ADDR(0x0001638eu): goto L_1638E;
    case RC_ADDR(0x00016390u): goto L_16390;
    case RC_ADDR(0x00016394u): goto L_16394;
    case RC_ADDR(0x00016398u): goto L_16398;
    case RC_ADDR(0x0001639cu): goto L_1639C;
    case RC_ADDR(0x000163a0u): goto L_163A0;
    case RC_ADDR(0x000163a2u): goto L_163A2;
    case RC_ADDR(0x000163a4u): goto L_163A4;
    case RC_ADDR(0x000163a8u): goto L_163A8;
    case RC_ADDR(0x000163acu): goto L_163AC;
    case RC_ADDR(0x000163aeu): goto L_163AE;
    case RC_ADDR(0x000163b2u): goto L_163B2;
    case RC_ADDR(0x000163b6u): goto L_163B6;
    case RC_ADDR(0x000163b8u): goto L_163B8;
    case RC_ADDR(0x000163bau): goto L_163BA;
    case RC_ADDR(0x000163beu): goto L_163BE;
    case RC_ADDR(0x000163c2u): goto L_163C2;
    case RC_ADDR(0x000163c6u): goto L_163C6;
    case RC_ADDR(0x000163cau): goto L_163CA;
    case RC_ADDR(0x000163ceu): goto L_163CE;
    case RC_ADDR(0x000163d0u): goto L_163D0;
    case RC_ADDR(0x000163d2u): goto L_163D2;
    case RC_ADDR(0x000163d6u): goto L_163D6;
    case RC_ADDR(0x000163dau): goto L_163DA;
    case RC_ADDR(0x000163dcu): goto L_163DC;
    case RC_ADDR(0x000163e0u): goto L_163E0;
    case RC_ADDR(0x000163e4u): goto L_163E4;
    case RC_ADDR(0x000163e6u): goto L_163E6;
    case RC_ADDR(0x000163e8u): goto L_163E8;
    case RC_ADDR(0x000163ecu): goto L_163EC;
    case RC_ADDR(0x000163f0u): goto L_163F0;
    case RC_ADDR(0x000163f4u): goto L_163F4;
    case RC_ADDR(0x000163f8u): goto L_163F8;
    case RC_ADDR(0x000163fcu): goto L_163FC;
    case RC_ADDR(0x000163feu): goto L_163FE;
    case RC_ADDR(0x00016400u): goto L_16400;
    case RC_ADDR(0x00016404u): goto L_16404;
    case RC_ADDR(0x00016408u): goto L_16408;
    case RC_ADDR(0x0001640au): goto L_1640A;
    case RC_ADDR(0x0001640eu): goto L_1640E;
    case RC_ADDR(0x00016412u): goto L_16412;
    case RC_ADDR(0x00016414u): goto L_16414;
    case RC_ADDR(0x00016416u): goto L_16416;
    case RC_ADDR(0x0001641au): goto L_1641A;
    case RC_ADDR(0x0001641eu): goto L_1641E;
    case RC_ADDR(0x00016422u): goto L_16422;
    case RC_ADDR(0x00016426u): goto L_16426;
    case RC_ADDR(0x0001642au): goto L_1642A;
    case RC_ADDR(0x0001642cu): goto L_1642C;
    case RC_ADDR(0x0001642eu): goto L_1642E;
    case RC_ADDR(0x00016432u): goto L_16432;
    case RC_ADDR(0x00016436u): goto L_16436;
    case RC_ADDR(0x00016438u): goto L_16438;
    case RC_ADDR(0x0001643cu): goto L_1643C;
    case RC_ADDR(0x00016440u): goto L_16440;
    case RC_ADDR(0x00016442u): goto L_16442;
    case RC_ADDR(0x00016444u): goto L_16444;
    case RC_ADDR(0x00016448u): goto L_16448;
    case RC_ADDR(0x0001644cu): goto L_1644C;
    case RC_ADDR(0x00016450u): goto L_16450;
    case RC_ADDR(0x00016454u): goto L_16454;
    case RC_ADDR(0x00016458u): goto L_16458;
    case RC_ADDR(0x0001645au): goto L_1645A;
    case RC_ADDR(0x0001645cu): goto L_1645C;
    case RC_ADDR(0x00016460u): goto L_16460;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_15FEC:
    /* 00015fec   4  move.w (4,A7),D0 */
    c->pc = RC_ADDR(0x00015fecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[7] + 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15FF0:
    /* 00015ff0   4  move.w (6,A7),D1 */
    c->pc = RC_ADDR(0x00015ff0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[7] + 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15FF4:
    /* 00015ff4   4  move.w (8,A7),D4 */
    c->pc = RC_ADDR(0x00015ff4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[7] + 0x8u));
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15FF8:
    /* 00015ff8   4  clr.w (12ae,A4) */
    c->pc = RC_ADDR(0x00015ff8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x12aeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15FFC:
    /* 00015ffc   4  clr.w (12b0,A4) */
    c->pc = RC_ADDR(0x00015ffcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x12b0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16000:
    /* 00016000   4  clr.w (12b2,A4) */
    c->pc = RC_ADDR(0x00016000u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x12b2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16004:
    /* 00016004   4  clr.w (12b4,A4) */
    c->pc = RC_ADDR(0x00016004u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x12b4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16008:
    /* 00016008   4  clr.w (12b8,A4) */
    c->pc = RC_ADDR(0x00016008u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x12b8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1600C:
    /* 0001600c   4  clr.w (12ba,A4) */
    c->pc = RC_ADDR(0x0001600cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x12bau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16010:
    /* 00016010   4  clr.w (12bc,A4) */
    c->pc = RC_ADDR(0x00016010u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x12bcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16014:
    /* 00016014   4  clr.w (12be,A4) */
    c->pc = RC_ADDR(0x00016014u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x12beu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16018:
    /* 00016018   4  clr.w (12c0,A4) */
    c->pc = RC_ADDR(0x00016018u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x12c0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1601C:
    /* 0001601c   6  andi.l #ffff,D0 */
    c->pc = RC_ADDR(0x0001601cu);
    rc_step(c, m, 14);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 & 0x0000ffffu;
    rc_d_set(c, 0, RC_L, t2);
    rc_set_nzvc(c, t2, RC_L);

L_16022:
    /* 00016022   6  andi.l #ffff,D1 */
    c->pc = RC_ADDR(0x00016022u);
    rc_step(c, m, 14);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 & 0x0000ffffu;
    rc_d_set(c, 1, RC_L, t2);
    rc_set_nzvc(c, t2, RC_L);

L_16028:
    /* 00016028   4  sub.w (dfa,A4),D0 */
    c->pc = RC_ADDR(0x00016028u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1602C:
    /* 0001602c   4  move.w D0,(ffffb370,A4) */
    c->pc = RC_ADDR(0x0001602cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x4c90u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16030:
    /* 00016030   4  add.w (dfa,A4),D0 */
    c->pc = RC_ADDR(0x00016030u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_16034:
    /* 00016034   4  sub.w (dfc,A4),D1 */
    c->pc = RC_ADDR(0x00016034u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_16038:
    /* 00016038   4  move.w D1,(ffffb372,A4) */
    c->pc = RC_ADDR(0x00016038u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x4c8eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1603C:
    /* 0001603c   4  add.w (dfc,A4),D1 */
    c->pc = RC_ADDR(0x0001603cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_16040:
    /* 00016040   4  divu.w #140,D0 */
    c->pc = RC_ADDR(0x00016040u);
    rc_step(c, m, 144);
    t0 = 0x00000140u;
    rc_divu(c, m, 0, t0);

L_16044:
    /* 00016044   2  move.l D1,D3 */
    c->pc = RC_ADDR(0x00016044u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 3, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_16046:
    /* 00016046   4  divu.w #c8,D3 */
    c->pc = RC_ADDR(0x00016046u);
    rc_step(c, m, 144);
    t0 = 0x000000c8u;
    rc_divu(c, m, 3, t0);

L_1604A:
    /* 0001604a   4  mulu.w #3c,D3 */
    c->pc = RC_ADDR(0x0001604au);
    rc_step(c, m, 42);
    t0 = 0x0000003cu;
    rc_mulu(c, 3, t0);

L_1604E:
    /* 0001604e   2  add.w D0,D3 */
    c->pc = RC_ADDR(0x0001604eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_16050:
    /* 00016050   4  lea (ffffa21a,A4),A0 */
    c->pc = RC_ADDR(0x00016050u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x5de6u);

L_16054:
    /* 00016054   2  clr.l D2 */
    c->pc = RC_ADDR(0x00016054u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_16056:
    /* 00016056   4  move.b (0,A0,D3.w),D2 */
    c->pc = RC_ADDR(0x00016056u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1605A:
    /* 0001605a   2  lsl.w #2,D2 */
    c->pc = RC_ADDR(0x0001605au);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000002u, rc_d_get(c, 2, RC_W), RC_W));

L_1605C:
    /* 0001605c   4  lea (b08,A4),A0 */
    c->pc = RC_ADDR(0x0001605cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb08u);

L_16060:
    /* 00016060   4  movea.l (0,A0,D2.w),A0 */
    c->pc = RC_ADDR(0x00016060u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[2], RC_W);
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[0] = t0;

L_16064:
    /* 00016064   2  swap D0 */
    c->pc = RC_ADDR(0x00016064u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_16066:
    /* 00016066   4  divu.w #c8,D1 */
    c->pc = RC_ADDR(0x00016066u);
    rc_step(c, m, 144);
    t0 = 0x000000c8u;
    rc_divu(c, m, 1, t0);

L_1606A:
    /* 0001606a   2  swap D1 */
    c->pc = RC_ADDR(0x0001606au);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_1606C:
    /* 0001606c   2  lsr.w #4,D0 */
    c->pc = RC_ADDR(0x0001606cu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_1606E:
    /* 0001606e   4  mulu.w #14,D0 */
    c->pc = RC_ADDR(0x0001606eu);
    rc_step(c, m, 42);
    t0 = 0x00000014u;
    rc_mulu(c, 0, t0);

L_16072:
    /* 00016072   6  andi.l #ffff,D1 */
    c->pc = RC_ADDR(0x00016072u);
    rc_step(c, m, 14);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 & 0x0000ffffu;
    rc_d_set(c, 1, RC_L, t2);
    rc_set_nzvc(c, t2, RC_L);

L_16078:
    /* 00016078   4  divu.w #a,D1 */
    c->pc = RC_ADDR(0x00016078u);
    rc_step(c, m, 144);
    t0 = 0x0000000au;
    rc_divu(c, m, 1, t0);

L_1607C:
    /* 0001607c   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x0001607cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1607E:
    /* 0001607e   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x0001607eu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_16080:
    /* 00016080   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x00016080u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_16082:
    /* 00016082   4  cmpi.w #1,D4 */
    c->pc = RC_ADDR(0x00016082u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_16086:
    /* 00016086   2  bne 000160ca */
    c->pc = RC_ADDR(0x00016086u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_160CA;

L_16088:
    /* 00016088   6  cmpi.w #be,(12ac,A4) */
    c->pc = RC_ADDR(0x00016088u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12acu));
    rc_cmp(c, RC_W, t0, 0x000000beu);

L_1608E:
    /* 0001608e   2  blt 0001609a */
    c->pc = RC_ADDR(0x0001608eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1609A;

L_16090:
    /* 00016090   4  addi.w #28,D1 */
    c->pc = RC_ADDR(0x00016090u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000028u;
    rc_flags_add(c, RC_W, t1, 0x00000028u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_16094:
    /* 00016094   6  addi.w #10,(ffffb370,A4) */
    c->pc = RC_ADDR(0x00016094u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4c90u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000010u;
    rc_flags_add(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1609A:
    /* 0001609a   4  bsr 00015f3e */
    c->pc = RC_ADDR(0x0001609au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001609eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f3eu);
    return;

L_1609E:
    /* 0001609e   4  bsr 00015f1e */
    c->pc = RC_ADDR(0x0001609eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000160a2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f1eu);
    return;

L_160A2:
    /* 000160a2   4  move.w D0,(12b2,A4) */
    c->pc = RC_ADDR(0x000160a2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12b2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_160A6:
    /* 000160a6   4  bsr 00015f1e */
    c->pc = RC_ADDR(0x000160a6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000160aau));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f1eu);
    return;

L_160AA:
    /* 000160aa   4  move.w D0,(12be,A4) */
    c->pc = RC_ADDR(0x000160aau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12beu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_160AE:
    /* 000160ae   4  lea (ffffb35e,A4),A1 */
    c->pc = RC_ADDR(0x000160aeu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4ca2u);

L_160B2:
    /* 000160b2   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x000160b2u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_160B6:
    /* 000160b6   4  move.w D0,(12ae,A4) */
    c->pc = RC_ADDR(0x000160b6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12aeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_160BA:
    /* 000160ba   4  lea (ffffb328,A4),A1 */
    c->pc = RC_ADDR(0x000160bau);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4cd8u);

L_160BE:
    /* 000160be   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x000160beu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_160C2:
    /* 000160c2   4  move.w D0,(12b4,A4) */
    c->pc = RC_ADDR(0x000160c2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12b4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_160C6:
    /* 000160c6   4  bra 000162da */
    c->pc = RC_ADDR(0x000160c6u);
    rc_step(c, m, 10);
    goto L_162DA;

L_160CA:
    /* 000160ca   4  cmpi.w #2,D4 */
    c->pc = RC_ADDR(0x000160cau);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_160CE:
    /* 000160ce   2  bne 00016112 */
    c->pc = RC_ADDR(0x000160ceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_16112;

L_160D0:
    /* 000160d0   6  cmpi.w #be,(12ac,A4) */
    c->pc = RC_ADDR(0x000160d0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12acu));
    rc_cmp(c, RC_W, t0, 0x000000beu);

L_160D6:
    /* 000160d6   2  blt 000160e2 */
    c->pc = RC_ADDR(0x000160d6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_160E2;

L_160D8:
    /* 000160d8   4  subi.w #28,D1 */
    c->pc = RC_ADDR(0x000160d8u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000028u;
    rc_flags_sub(c, RC_W, t1, 0x00000028u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_160DC:
    /* 000160dc   6  subi.w #10,(ffffb370,A4) */
    c->pc = RC_ADDR(0x000160dcu);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4c90u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000010u;
    rc_flags_sub(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_160E2:
    /* 000160e2   4  bsr 00015f3e */
    c->pc = RC_ADDR(0x000160e2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000160e6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f3eu);
    return;

L_160E6:
    /* 000160e6   4  bsr 00015f1e */
    c->pc = RC_ADDR(0x000160e6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000160eau));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f1eu);
    return;

L_160EA:
    /* 000160ea   4  move.w D0,(12b0,A4) */
    c->pc = RC_ADDR(0x000160eau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12b0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_160EE:
    /* 000160ee   4  bsr 00015f1e */
    c->pc = RC_ADDR(0x000160eeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000160f2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f1eu);
    return;

L_160F2:
    /* 000160f2   4  move.w D0,(12ba,A4) */
    c->pc = RC_ADDR(0x000160f2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12bau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_160F6:
    /* 000160f6   4  lea (ffffb34c,A4),A1 */
    c->pc = RC_ADDR(0x000160f6u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4cb4u);

L_160FA:
    /* 000160fa   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x000160fau);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_160FE:
    /* 000160fe   4  move.w D0,(12ae,A4) */
    c->pc = RC_ADDR(0x000160feu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12aeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16102:
    /* 00016102   4  lea (ffffb33a,A4),A1 */
    c->pc = RC_ADDR(0x00016102u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4cc6u);

L_16106:
    /* 00016106   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x00016106u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1610A:
    /* 0001610a   4  move.w D0,(12b4,A4) */
    c->pc = RC_ADDR(0x0001610au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12b4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1610E:
    /* 0001610e   4  bra 000162da */
    c->pc = RC_ADDR(0x0001610eu);
    rc_step(c, m, 10);
    goto L_162DA;

L_16112:
    /* 00016112   4  cmpi.w #4,D4 */
    c->pc = RC_ADDR(0x00016112u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_16116:
    /* 00016116   2  bne 00016158 */
    c->pc = RC_ADDR(0x00016116u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_16158;

L_16118:
    /* 00016118   6  cmpi.w #be,(12ac,A4) */
    c->pc = RC_ADDR(0x00016118u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12acu));
    rc_cmp(c, RC_W, t0, 0x000000beu);

L_1611E:
    /* 0001611e   2  blt 00016128 */
    c->pc = RC_ADDR(0x0001611eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_16128;

L_16120:
    /* 00016120   2  addq.w #2,D1 */
    c->pc = RC_ADDR(0x00016120u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_16122:
    /* 00016122   6  addi.w #a,(ffffb372,A4) */
    c->pc = RC_ADDR(0x00016122u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4c8eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16128:
    /* 00016128   4  bsr 00015f3e */
    c->pc = RC_ADDR(0x00016128u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001612cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f3eu);
    return;

L_1612C:
    /* 0001612c   4  bsr 00015f1e */
    c->pc = RC_ADDR(0x0001612cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00016130u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f1eu);
    return;

L_16130:
    /* 00016130   4  move.w D0,(12b8,A4) */
    c->pc = RC_ADDR(0x00016130u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12b8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16134:
    /* 00016134   4  bsr 00015f1e */
    c->pc = RC_ADDR(0x00016134u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00016138u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f1eu);
    return;

L_16138:
    /* 00016138   4  move.w D0,(12bc,A4) */
    c->pc = RC_ADDR(0x00016138u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12bcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1613C:
    /* 0001613c   4  lea (ffffb33a,A4),A1 */
    c->pc = RC_ADDR(0x0001613cu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4cc6u);

L_16140:
    /* 00016140   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x00016140u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16144:
    /* 00016144   4  move.w D0,(12ae,A4) */
    c->pc = RC_ADDR(0x00016144u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12aeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16148:
    /* 00016148   4  lea (ffffb328,A4),A1 */
    c->pc = RC_ADDR(0x00016148u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4cd8u);

L_1614C:
    /* 0001614c   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x0001614cu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16150:
    /* 00016150   4  move.w D0,(12b0,A4) */
    c->pc = RC_ADDR(0x00016150u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12b0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16154:
    /* 00016154   4  bra 000162da */
    c->pc = RC_ADDR(0x00016154u);
    rc_step(c, m, 10);
    goto L_162DA;

L_16158:
    /* 00016158   4  cmpi.w #8,D4 */
    c->pc = RC_ADDR(0x00016158u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_1615C:
    /* 0001615c   2  bne 0001619e */
    c->pc = RC_ADDR(0x0001615cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1619E;

L_1615E:
    /* 0001615e   6  cmpi.w #be,(12ac,A4) */
    c->pc = RC_ADDR(0x0001615eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12acu));
    rc_cmp(c, RC_W, t0, 0x000000beu);

L_16164:
    /* 00016164   2  blt 0001616e */
    c->pc = RC_ADDR(0x00016164u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1616E;

L_16166:
    /* 00016166   2  subq.w #2,D1 */
    c->pc = RC_ADDR(0x00016166u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_16168:
    /* 00016168   6  subi.w #a,(ffffb372,A4) */
    c->pc = RC_ADDR(0x00016168u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4c8eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1616E:
    /* 0001616e   4  bsr 00015f3e */
    c->pc = RC_ADDR(0x0001616eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00016172u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f3eu);
    return;

L_16172:
    /* 00016172   4  bsr 00015f1e */
    c->pc = RC_ADDR(0x00016172u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00016176u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f1eu);
    return;

L_16176:
    /* 00016176   4  move.w D0,(12b4,A4) */
    c->pc = RC_ADDR(0x00016176u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12b4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1617A:
    /* 0001617a   4  bsr 00015f1e */
    c->pc = RC_ADDR(0x0001617au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001617eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f1eu);
    return;

L_1617E:
    /* 0001617e   4  move.w D0,(12ba,A4) */
    c->pc = RC_ADDR(0x0001617eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12bau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16182:
    /* 00016182   4  lea (ffffb34c,A4),A1 */
    c->pc = RC_ADDR(0x00016182u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4cb4u);

L_16186:
    /* 00016186   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x00016186u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1618A:
    /* 0001618a   4  move.w D0,(12ae,A4) */
    c->pc = RC_ADDR(0x0001618au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12aeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1618E:
    /* 0001618e   4  lea (ffffb35e,A4),A1 */
    c->pc = RC_ADDR(0x0001618eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4ca2u);

L_16192:
    /* 00016192   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x00016192u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16196:
    /* 00016196   4  move.w D0,(12b0,A4) */
    c->pc = RC_ADDR(0x00016196u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12b0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1619A:
    /* 0001619a   4  bra 000162da */
    c->pc = RC_ADDR(0x0001619au);
    rc_step(c, m, 10);
    goto L_162DA;

L_1619E:
    /* 0001619e   4  cmpi.w #5,D4 */
    c->pc = RC_ADDR(0x0001619eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_161A2:
    /* 000161a2   2  bne 000161f0 */
    c->pc = RC_ADDR(0x000161a2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_161F0;

L_161A4:
    /* 000161a4   6  cmpi.w #be,(12ac,A4) */
    c->pc = RC_ADDR(0x000161a4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12acu));
    rc_cmp(c, RC_W, t0, 0x000000beu);

L_161AA:
    /* 000161aa   2  blt 000161bc */
    c->pc = RC_ADDR(0x000161aau);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_161BC;

L_161AC:
    /* 000161ac   4  addi.w #2a,D1 */
    c->pc = RC_ADDR(0x000161acu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x0000002au;
    rc_flags_add(c, RC_W, t1, 0x0000002au, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_161B0:
    /* 000161b0   6  addi.w #10,(ffffb370,A4) */
    c->pc = RC_ADDR(0x000161b0u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4c90u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000010u;
    rc_flags_add(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_161B6:
    /* 000161b6   6  addi.w #a,(ffffb372,A4) */
    c->pc = RC_ADDR(0x000161b6u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4c8eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_161BC:
    /* 000161bc   4  bsr 00015f3e */
    c->pc = RC_ADDR(0x000161bcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000161c0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f3eu);
    return;

L_161C0:
    /* 000161c0   4  bsr 00015f1e */
    c->pc = RC_ADDR(0x000161c0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000161c4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f1eu);
    return;

L_161C4:
    /* 000161c4   4  move.w D0,(12c0,A4) */
    c->pc = RC_ADDR(0x000161c4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12c0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_161C8:
    /* 000161c8   4  lea (ffffb328,A4),A1 */
    c->pc = RC_ADDR(0x000161c8u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4cd8u);

L_161CC:
    /* 000161cc   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x000161ccu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_161D0:
    /* 000161d0   4  move.w D0,(12ae,A4) */
    c->pc = RC_ADDR(0x000161d0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12aeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_161D4:
    /* 000161d4   4  lea (ffffb35e,A4),A1 */
    c->pc = RC_ADDR(0x000161d4u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4ca2u);

L_161D8:
    /* 000161d8   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x000161d8u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_161DC:
    /* 000161dc   4  move.w D0,(12b8,A4) */
    c->pc = RC_ADDR(0x000161dcu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12b8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_161E0:
    /* 000161e0   4  lea (ffffb33a,A4),A1 */
    c->pc = RC_ADDR(0x000161e0u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4cc6u);

L_161E4:
    /* 000161e4   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x000161e4u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_161E8:
    /* 000161e8   4  move.w D0,(12b2,A4) */
    c->pc = RC_ADDR(0x000161e8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12b2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_161EC:
    /* 000161ec   4  bra 000162da */
    c->pc = RC_ADDR(0x000161ecu);
    rc_step(c, m, 10);
    goto L_162DA;

L_161F0:
    /* 000161f0   4  cmpi.w #9,D4 */
    c->pc = RC_ADDR(0x000161f0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000009u);

L_161F4:
    /* 000161f4   2  bne 00016242 */
    c->pc = RC_ADDR(0x000161f4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_16242;

L_161F6:
    /* 000161f6   6  cmpi.w #be,(12ac,A4) */
    c->pc = RC_ADDR(0x000161f6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12acu));
    rc_cmp(c, RC_W, t0, 0x000000beu);

L_161FC:
    /* 000161fc   2  blt 0001620e */
    c->pc = RC_ADDR(0x000161fcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1620E;

L_161FE:
    /* 000161fe   4  addi.w #26,D1 */
    c->pc = RC_ADDR(0x000161feu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000026u;
    rc_flags_add(c, RC_W, t1, 0x00000026u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_16202:
    /* 00016202   6  addi.w #10,(ffffb370,A4) */
    c->pc = RC_ADDR(0x00016202u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4c90u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000010u;
    rc_flags_add(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16208:
    /* 00016208   6  subi.w #a,(ffffb372,A4) */
    c->pc = RC_ADDR(0x00016208u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4c8eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1620E:
    /* 0001620e   4  bsr 00015f3e */
    c->pc = RC_ADDR(0x0001620eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00016212u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f3eu);
    return;

L_16212:
    /* 00016212   4  bsr 00015f1e */
    c->pc = RC_ADDR(0x00016212u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00016216u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f1eu);
    return;

L_16216:
    /* 00016216   4  move.w D0,(12be,A4) */
    c->pc = RC_ADDR(0x00016216u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12beu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1621A:
    /* 0001621a   4  lea (ffffb35e,A4),A1 */
    c->pc = RC_ADDR(0x0001621au);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4ca2u);

L_1621E:
    /* 0001621e   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x0001621eu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16222:
    /* 00016222   4  move.w D0,(12ae,A4) */
    c->pc = RC_ADDR(0x00016222u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12aeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16226:
    /* 00016226   4  lea (ffffb34c,A4),A1 */
    c->pc = RC_ADDR(0x00016226u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4cb4u);

L_1622A:
    /* 0001622a   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x0001622au);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1622E:
    /* 0001622e   4  move.w D0,(12b2,A4) */
    c->pc = RC_ADDR(0x0001622eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12b2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16232:
    /* 00016232   4  lea (ffffb328,A4),A1 */
    c->pc = RC_ADDR(0x00016232u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4cd8u);

L_16236:
    /* 00016236   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x00016236u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1623A:
    /* 0001623a   4  move.w D0,(12b4,A4) */
    c->pc = RC_ADDR(0x0001623au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12b4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1623E:
    /* 0001623e   4  bra 000162da */
    c->pc = RC_ADDR(0x0001623eu);
    rc_step(c, m, 10);
    goto L_162DA;

L_16242:
    /* 00016242   4  cmpi.w #6,D4 */
    c->pc = RC_ADDR(0x00016242u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000006u);

L_16246:
    /* 00016246   2  bne 00016292 */
    c->pc = RC_ADDR(0x00016246u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_16292;

L_16248:
    /* 00016248   6  cmpi.w #be,(12ac,A4) */
    c->pc = RC_ADDR(0x00016248u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12acu));
    rc_cmp(c, RC_W, t0, 0x000000beu);

L_1624E:
    /* 0001624e   2  blt 00016260 */
    c->pc = RC_ADDR(0x0001624eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_16260;

L_16250:
    /* 00016250   4  subi.w #26,D1 */
    c->pc = RC_ADDR(0x00016250u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000026u;
    rc_flags_sub(c, RC_W, t1, 0x00000026u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_16254:
    /* 00016254   6  subi.w #10,(ffffb370,A4) */
    c->pc = RC_ADDR(0x00016254u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4c90u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000010u;
    rc_flags_sub(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1625A:
    /* 0001625a   6  addi.w #a,(ffffb372,A4) */
    c->pc = RC_ADDR(0x0001625au);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4c8eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16260:
    /* 00016260   4  bsr 00015f3e */
    c->pc = RC_ADDR(0x00016260u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00016264u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f3eu);
    return;

L_16264:
    /* 00016264   4  bsr 00015f1e */
    c->pc = RC_ADDR(0x00016264u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00016268u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f1eu);
    return;

L_16268:
    /* 00016268   4  move.w D0,(12bc,A4) */
    c->pc = RC_ADDR(0x00016268u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12bcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1626C:
    /* 0001626c   4  lea (ffffb33a,A4),A1 */
    c->pc = RC_ADDR(0x0001626cu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4cc6u);

L_16270:
    /* 00016270   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x00016270u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16274:
    /* 00016274   4  move.w D0,(12ae,A4) */
    c->pc = RC_ADDR(0x00016274u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12aeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16278:
    /* 00016278   4  lea (ffffb328,A4),A1 */
    c->pc = RC_ADDR(0x00016278u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4cd8u);

L_1627C:
    /* 0001627c   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x0001627cu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16280:
    /* 00016280   4  move.w D0,(12b0,A4) */
    c->pc = RC_ADDR(0x00016280u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12b0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16284:
    /* 00016284   4  lea (ffffb34c,A4),A1 */
    c->pc = RC_ADDR(0x00016284u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4cb4u);

L_16288:
    /* 00016288   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x00016288u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1628C:
    /* 0001628c   4  move.w D0,(12b8,A4) */
    c->pc = RC_ADDR(0x0001628cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12b8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16290:
    /* 00016290   2  bra 000162da */
    c->pc = RC_ADDR(0x00016290u);
    rc_step(c, m, 10);
    goto L_162DA;

L_16292:
    /* 00016292   6  cmpi.w #be,(12ac,A4) */
    c->pc = RC_ADDR(0x00016292u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12acu));
    rc_cmp(c, RC_W, t0, 0x000000beu);

L_16298:
    /* 00016298   2  blt 000162aa */
    c->pc = RC_ADDR(0x00016298u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_162AA;

L_1629A:
    /* 0001629a   4  subi.w #2a,D1 */
    c->pc = RC_ADDR(0x0001629au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x0000002au;
    rc_flags_sub(c, RC_W, t1, 0x0000002au, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1629E:
    /* 0001629e   6  subi.w #10,(ffffb370,A4) */
    c->pc = RC_ADDR(0x0001629eu);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4c90u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000010u;
    rc_flags_sub(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_162A4:
    /* 000162a4   6  subi.w #a,(ffffb372,A4) */
    c->pc = RC_ADDR(0x000162a4u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4c8eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_162AA:
    /* 000162aa   4  bsr 00015f3e */
    c->pc = RC_ADDR(0x000162aau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000162aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f3eu);
    return;

L_162AE:
    /* 000162ae   4  bsr 00015f1e */
    c->pc = RC_ADDR(0x000162aeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000162b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f1eu);
    return;

L_162B2:
    /* 000162b2   4  move.w D0,(12ba,A4) */
    c->pc = RC_ADDR(0x000162b2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12bau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_162B6:
    /* 000162b6   4  lea (ffffb34c,A4),A1 */
    c->pc = RC_ADDR(0x000162b6u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4cb4u);

L_162BA:
    /* 000162ba   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x000162bau);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_162BE:
    /* 000162be   4  move.w D0,(12ae,A4) */
    c->pc = RC_ADDR(0x000162beu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12aeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_162C2:
    /* 000162c2   4  lea (ffffb35e,A4),A1 */
    c->pc = RC_ADDR(0x000162c2u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4ca2u);

L_162C6:
    /* 000162c6   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x000162c6u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_162CA:
    /* 000162ca   4  move.w D0,(12b0,A4) */
    c->pc = RC_ADDR(0x000162cau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12b0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_162CE:
    /* 000162ce   4  lea (ffffb33a,A4),A1 */
    c->pc = RC_ADDR(0x000162ceu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4cc6u);

L_162D2:
    /* 000162d2   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x000162d2u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_162D6:
    /* 000162d6   4  move.w D0,(12b4,A4) */
    c->pc = RC_ADDR(0x000162d6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12b4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_162DA:
    /* 000162da   4  move.w (12ae,A4),D0 */
    c->pc = RC_ADDR(0x000162dau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12aeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_162DE:
    /* 000162de   2  beq 00016300 */
    c->pc = RC_ADDR(0x000162deu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_16300;

L_162E0:
    /* 000162e0   4  move.w (0,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x000162e0u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_162E4:
    /* 000162e4   4  bsr 00015fc6 */
    c->pc = RC_ADDR(0x000162e4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000162e8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015fc6u);
    return;

L_162E8:
    /* 000162e8   2  beq 00016300 */
    c->pc = RC_ADDR(0x000162e8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_16300;

L_162EA:
    /* 000162ea   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000162eau);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_162EC:
    /* 000162ec   4  move.w (ffffb372,A4),-(A7) */
    c->pc = RC_ADDR(0x000162ecu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4c8eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_162F0:
    /* 000162f0   4  move.w (ffffb370,A4),-(A7) */
    c->pc = RC_ADDR(0x000162f0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4c90u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_162F4:
    /* 000162f4   4  jsr (00015f60) */
    c->pc = RC_ADDR(0x000162f4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000162f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f60u);
    return;

L_162F8:
    /* 000162f8   2  addq.l #6,A7 */
    c->pc = RC_ADDR(0x000162f8u);
    rc_step(c, m, 8);
    c->a[7] += 0x00000006u;

L_162FA:
    /* 000162fa   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x000162fau);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_162FC:
    /* 000162fc   4  move.w D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x000162fcu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16300:
    /* 00016300   4  move.w (12b0,A4),D0 */
    c->pc = RC_ADDR(0x00016300u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12b0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16304:
    /* 00016304   2  beq 0001632a */
    c->pc = RC_ADDR(0x00016304u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1632A;

L_16306:
    /* 00016306   4  move.w (28,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x00016306u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x28u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1630A:
    /* 0001630a   4  bsr 00015fc6 */
    c->pc = RC_ADDR(0x0001630au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001630eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00015fc6u);
    return;

L_1630E:
    /* 0001630e   2  beq 0001632a */
    c->pc = RC_ADDR(0x0001630eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1632A;

L_16310:
    /* 00016310   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00016310u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16312:
    /* 00016312   4  move.w (ffffb372,A4),-(A7) */
    c->pc = RC_ADDR(0x00016312u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4c8eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16316:
    /* 00016316   4  move.w (ffffb370,A4),-(A7) */
    c->pc = RC_ADDR(0x00016316u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4c90u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1631A:
    /* 0001631a   4  addi.w #10,(A7) */
    c->pc = RC_ADDR(0x0001631au);
    rc_step(c, m, 16);
    t3 = c->a[7];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000010u;
    rc_flags_add(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1631E:
    /* 0001631e   4  jsr (00015f60) */
    c->pc = RC_ADDR(0x0001631eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00016322u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f60u);
    return;

L_16322:
    /* 00016322   2  addq.l #6,A7 */
    c->pc = RC_ADDR(0x00016322u);
    rc_step(c, m, 8);
    c->a[7] += 0x00000006u;

L_16324:
    /* 00016324   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x00016324u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_16326:
    /* 00016326   4  move.w D0,(28,A0,D1.w) */
    c->pc = RC_ADDR(0x00016326u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x28u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1632A:
    /* 0001632a   4  move.w (12b2,A4),D0 */
    c->pc = RC_ADDR(0x0001632au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12b2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1632E:
    /* 0001632e   2  beq 00016354 */
    c->pc = RC_ADDR(0x0001632eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_16354;

L_16330:
    /* 00016330   4  move.w (ffffffd8,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x00016330u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] - 0x28u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16334:
    /* 00016334   4  bsr 00015fc6 */
    c->pc = RC_ADDR(0x00016334u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00016338u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015fc6u);
    return;

L_16338:
    /* 00016338   2  beq 00016354 */
    c->pc = RC_ADDR(0x00016338u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_16354;

L_1633A:
    /* 0001633a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001633au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1633C:
    /* 0001633c   4  move.w (ffffb372,A4),-(A7) */
    c->pc = RC_ADDR(0x0001633cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4c8eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16340:
    /* 00016340   4  move.w (ffffb370,A4),-(A7) */
    c->pc = RC_ADDR(0x00016340u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4c90u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16344:
    /* 00016344   4  subi.w #10,(A7) */
    c->pc = RC_ADDR(0x00016344u);
    rc_step(c, m, 16);
    t3 = c->a[7];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000010u;
    rc_flags_sub(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16348:
    /* 00016348   4  jsr (00015f60) */
    c->pc = RC_ADDR(0x00016348u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001634cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f60u);
    return;

L_1634C:
    /* 0001634c   2  addq.l #6,A7 */
    c->pc = RC_ADDR(0x0001634cu);
    rc_step(c, m, 8);
    c->a[7] += 0x00000006u;

L_1634E:
    /* 0001634e   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x0001634eu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_16350:
    /* 00016350   4  move.w D0,(ffffffd8,A0,D1.w) */
    c->pc = RC_ADDR(0x00016350u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr16(c, m, (c->a[0] - 0x28u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16354:
    /* 00016354   4  move.w (12b4,A4),D0 */
    c->pc = RC_ADDR(0x00016354u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12b4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16358:
    /* 00016358   2  beq 0001637e */
    c->pc = RC_ADDR(0x00016358u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1637E;

L_1635A:
    /* 0001635a   4  move.w (2,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x0001635au);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1635E:
    /* 0001635e   4  bsr 00015fc6 */
    c->pc = RC_ADDR(0x0001635eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00016362u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015fc6u);
    return;

L_16362:
    /* 00016362   2  beq 0001637e */
    c->pc = RC_ADDR(0x00016362u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1637E;

L_16364:
    /* 00016364   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00016364u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16366:
    /* 00016366   4  move.w (ffffb372,A4),-(A7) */
    c->pc = RC_ADDR(0x00016366u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4c8eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1636A:
    /* 0001636a   4  addi.w #a,(A7) */
    c->pc = RC_ADDR(0x0001636au);
    rc_step(c, m, 16);
    t3 = c->a[7];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1636E:
    /* 0001636e   4  move.w (ffffb370,A4),-(A7) */
    c->pc = RC_ADDR(0x0001636eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4c90u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16372:
    /* 00016372   4  jsr (00015f60) */
    c->pc = RC_ADDR(0x00016372u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00016376u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f60u);
    return;

L_16376:
    /* 00016376   2  addq.l #6,A7 */
    c->pc = RC_ADDR(0x00016376u);
    rc_step(c, m, 8);
    c->a[7] += 0x00000006u;

L_16378:
    /* 00016378   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x00016378u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_1637A:
    /* 0001637a   4  move.w D0,(2,A0,D1.w) */
    c->pc = RC_ADDR(0x0001637au);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x2u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1637E:
    /* 0001637e   4  move.w (12b8,A4),D0 */
    c->pc = RC_ADDR(0x0001637eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12b8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16382:
    /* 00016382   2  beq 000163a8 */
    c->pc = RC_ADDR(0x00016382u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_163A8;

L_16384:
    /* 00016384   4  move.w (fffffffe,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x00016384u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] - 0x2u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16388:
    /* 00016388   4  bsr 00015fc6 */
    c->pc = RC_ADDR(0x00016388u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001638cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00015fc6u);
    return;

L_1638C:
    /* 0001638c   2  beq 000163a8 */
    c->pc = RC_ADDR(0x0001638cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_163A8;

L_1638E:
    /* 0001638e   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001638eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16390:
    /* 00016390   4  move.w (ffffb372,A4),-(A7) */
    c->pc = RC_ADDR(0x00016390u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4c8eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16394:
    /* 00016394   4  subi.w #a,(A7) */
    c->pc = RC_ADDR(0x00016394u);
    rc_step(c, m, 16);
    t3 = c->a[7];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16398:
    /* 00016398   4  move.w (ffffb370,A4),-(A7) */
    c->pc = RC_ADDR(0x00016398u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4c90u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1639C:
    /* 0001639c   4  jsr (00015f60) */
    c->pc = RC_ADDR(0x0001639cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000163a0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f60u);
    return;

L_163A0:
    /* 000163a0   2  addq.l #6,A7 */
    c->pc = RC_ADDR(0x000163a0u);
    rc_step(c, m, 8);
    c->a[7] += 0x00000006u;

L_163A2:
    /* 000163a2   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x000163a2u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_163A4:
    /* 000163a4   4  move.w D0,(fffffffe,A0,D1.w) */
    c->pc = RC_ADDR(0x000163a4u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr16(c, m, (c->a[0] - 0x2u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_163A8:
    /* 000163a8   4  move.w (12ba,A4),D0 */
    c->pc = RC_ADDR(0x000163a8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12bau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_163AC:
    /* 000163ac   2  beq 000163d6 */
    c->pc = RC_ADDR(0x000163acu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_163D6;

L_163AE:
    /* 000163ae   4  move.w (2a,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x000163aeu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2au + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_163B2:
    /* 000163b2   4  bsr 00015fc6 */
    c->pc = RC_ADDR(0x000163b2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000163b6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015fc6u);
    return;

L_163B6:
    /* 000163b6   2  beq 000163d6 */
    c->pc = RC_ADDR(0x000163b6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_163D6;

L_163B8:
    /* 000163b8   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000163b8u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_163BA:
    /* 000163ba   4  move.w (ffffb372,A4),-(A7) */
    c->pc = RC_ADDR(0x000163bau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4c8eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_163BE:
    /* 000163be   4  addi.w #a,(A7) */
    c->pc = RC_ADDR(0x000163beu);
    rc_step(c, m, 16);
    t3 = c->a[7];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_163C2:
    /* 000163c2   4  move.w (ffffb370,A4),-(A7) */
    c->pc = RC_ADDR(0x000163c2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4c90u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_163C6:
    /* 000163c6   4  addi.w #10,(A7) */
    c->pc = RC_ADDR(0x000163c6u);
    rc_step(c, m, 16);
    t3 = c->a[7];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000010u;
    rc_flags_add(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_163CA:
    /* 000163ca   4  jsr (00015f60) */
    c->pc = RC_ADDR(0x000163cau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000163ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f60u);
    return;

L_163CE:
    /* 000163ce   2  addq.l #6,A7 */
    c->pc = RC_ADDR(0x000163ceu);
    rc_step(c, m, 8);
    c->a[7] += 0x00000006u;

L_163D0:
    /* 000163d0   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x000163d0u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_163D2:
    /* 000163d2   4  move.w D0,(2a,A0,D1.w) */
    c->pc = RC_ADDR(0x000163d2u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x2au + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_163D6:
    /* 000163d6   4  move.w (12bc,A4),D0 */
    c->pc = RC_ADDR(0x000163d6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12bcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_163DA:
    /* 000163da   2  beq 00016404 */
    c->pc = RC_ADDR(0x000163dau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_16404;

L_163DC:
    /* 000163dc   4  move.w (26,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x000163dcu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x26u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_163E0:
    /* 000163e0   4  bsr 00015fc6 */
    c->pc = RC_ADDR(0x000163e0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000163e4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015fc6u);
    return;

L_163E4:
    /* 000163e4   2  beq 00016404 */
    c->pc = RC_ADDR(0x000163e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_16404;

L_163E6:
    /* 000163e6   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000163e6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_163E8:
    /* 000163e8   4  move.w (ffffb372,A4),-(A7) */
    c->pc = RC_ADDR(0x000163e8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4c8eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_163EC:
    /* 000163ec   4  subi.w #a,(A7) */
    c->pc = RC_ADDR(0x000163ecu);
    rc_step(c, m, 16);
    t3 = c->a[7];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_163F0:
    /* 000163f0   4  move.w (ffffb370,A4),-(A7) */
    c->pc = RC_ADDR(0x000163f0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4c90u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_163F4:
    /* 000163f4   4  addi.w #10,(A7) */
    c->pc = RC_ADDR(0x000163f4u);
    rc_step(c, m, 16);
    t3 = c->a[7];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000010u;
    rc_flags_add(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_163F8:
    /* 000163f8   4  jsr (00015f60) */
    c->pc = RC_ADDR(0x000163f8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000163fcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f60u);
    return;

L_163FC:
    /* 000163fc   2  addq.l #6,A7 */
    c->pc = RC_ADDR(0x000163fcu);
    rc_step(c, m, 8);
    c->a[7] += 0x00000006u;

L_163FE:
    /* 000163fe   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x000163feu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_16400:
    /* 00016400   4  move.w D0,(26,A0,D1.w) */
    c->pc = RC_ADDR(0x00016400u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x26u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16404:
    /* 00016404   4  move.w (12be,A4),D0 */
    c->pc = RC_ADDR(0x00016404u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12beu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16408:
    /* 00016408   2  beq 00016432 */
    c->pc = RC_ADDR(0x00016408u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_16432;

L_1640A:
    /* 0001640a   4  move.w (ffffffda,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x0001640au);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] - 0x26u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1640E:
    /* 0001640e   4  bsr 00015fc6 */
    c->pc = RC_ADDR(0x0001640eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00016412u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015fc6u);
    return;

L_16412:
    /* 00016412   2  beq 00016432 */
    c->pc = RC_ADDR(0x00016412u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_16432;

L_16414:
    /* 00016414   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00016414u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16416:
    /* 00016416   4  move.w (ffffb372,A4),-(A7) */
    c->pc = RC_ADDR(0x00016416u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4c8eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1641A:
    /* 0001641a   4  addi.w #a,(A7) */
    c->pc = RC_ADDR(0x0001641au);
    rc_step(c, m, 16);
    t3 = c->a[7];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1641E:
    /* 0001641e   4  move.w (ffffb370,A4),-(A7) */
    c->pc = RC_ADDR(0x0001641eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4c90u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16422:
    /* 00016422   4  subi.w #10,(A7) */
    c->pc = RC_ADDR(0x00016422u);
    rc_step(c, m, 16);
    t3 = c->a[7];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000010u;
    rc_flags_sub(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16426:
    /* 00016426   4  jsr (00015f60) */
    c->pc = RC_ADDR(0x00016426u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001642au));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f60u);
    return;

L_1642A:
    /* 0001642a   2  addq.l #6,A7 */
    c->pc = RC_ADDR(0x0001642au);
    rc_step(c, m, 8);
    c->a[7] += 0x00000006u;

L_1642C:
    /* 0001642c   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x0001642cu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_1642E:
    /* 0001642e   4  move.w D0,(ffffffda,A0,D1.w) */
    c->pc = RC_ADDR(0x0001642eu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr16(c, m, (c->a[0] - 0x26u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16432:
    /* 00016432   4  move.w (12c0,A4),D0 */
    c->pc = RC_ADDR(0x00016432u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12c0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16436:
    /* 00016436   2  beq 00016460 */
    c->pc = RC_ADDR(0x00016436u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_16460;

L_16438:
    /* 00016438   4  move.w (ffffffd6,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x00016438u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] - 0x2au + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1643C:
    /* 0001643c   4  bsr 00015fc6 */
    c->pc = RC_ADDR(0x0001643cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00016440u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015fc6u);
    return;

L_16440:
    /* 00016440   2  beq 00016460 */
    c->pc = RC_ADDR(0x00016440u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_16460;

L_16442:
    /* 00016442   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00016442u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16444:
    /* 00016444   4  move.w (ffffb372,A4),-(A7) */
    c->pc = RC_ADDR(0x00016444u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4c8eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16448:
    /* 00016448   4  subi.w #a,(A7) */
    c->pc = RC_ADDR(0x00016448u);
    rc_step(c, m, 16);
    t3 = c->a[7];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1644C:
    /* 0001644c   4  move.w (ffffb370,A4),-(A7) */
    c->pc = RC_ADDR(0x0001644cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4c90u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16450:
    /* 00016450   4  subi.w #10,(A7) */
    c->pc = RC_ADDR(0x00016450u);
    rc_step(c, m, 16);
    t3 = c->a[7];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000010u;
    rc_flags_sub(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16454:
    /* 00016454   4  jsr (00015f60) */
    c->pc = RC_ADDR(0x00016454u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00016458u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f60u);
    return;

L_16458:
    /* 00016458   2  addq.l #6,A7 */
    c->pc = RC_ADDR(0x00016458u);
    rc_step(c, m, 8);
    c->a[7] += 0x00000006u;

L_1645A:
    /* 0001645a   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x0001645au);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_1645C:
    /* 0001645c   4  move.w D0,(ffffffd6,A0,D1.w) */
    c->pc = RC_ADDR(0x0001645cu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr16(c, m, (c->a[0] - 0x2au + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16460:
    /* 00016460   2  rts */
    c->pc = RC_ADDR(0x00016460u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
