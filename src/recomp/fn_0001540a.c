/* fn_0001540a - 842 byte(s), 254 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001540a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001540au): goto L_1540A;
    case RC_ADDR(0x0001540eu): goto L_1540E;
    case RC_ADDR(0x00015412u): goto L_15412;
    case RC_ADDR(0x00015414u): goto L_15414;
    case RC_ADDR(0x00015416u): goto L_15416;
    case RC_ADDR(0x0001541au): goto L_1541A;
    case RC_ADDR(0x0001541eu): goto L_1541E;
    case RC_ADDR(0x00015422u): goto L_15422;
    case RC_ADDR(0x00015426u): goto L_15426;
    case RC_ADDR(0x00015428u): goto L_15428;
    case RC_ADDR(0x0001542au): goto L_1542A;
    case RC_ADDR(0x0001542eu): goto L_1542E;
    case RC_ADDR(0x00015432u): goto L_15432;
    case RC_ADDR(0x00015436u): goto L_15436;
    case RC_ADDR(0x00015438u): goto L_15438;
    case RC_ADDR(0x0001543au): goto L_1543A;
    case RC_ADDR(0x0001543eu): goto L_1543E;
    case RC_ADDR(0x00015444u): goto L_15444;
    case RC_ADDR(0x00015448u): goto L_15448;
    case RC_ADDR(0x0001544au): goto L_1544A;
    case RC_ADDR(0x0001544cu): goto L_1544C;
    case RC_ADDR(0x00015450u): goto L_15450;
    case RC_ADDR(0x00015454u): goto L_15454;
    case RC_ADDR(0x00015458u): goto L_15458;
    case RC_ADDR(0x0001545au): goto L_1545A;
    case RC_ADDR(0x0001545cu): goto L_1545C;
    case RC_ADDR(0x00015460u): goto L_15460;
    case RC_ADDR(0x00015464u): goto L_15464;
    case RC_ADDR(0x00015468u): goto L_15468;
    case RC_ADDR(0x0001546au): goto L_1546A;
    case RC_ADDR(0x00015470u): goto L_15470;
    case RC_ADDR(0x00015472u): goto L_15472;
    case RC_ADDR(0x00015476u): goto L_15476;
    case RC_ADDR(0x00015478u): goto L_15478;
    case RC_ADDR(0x0001547au): goto L_1547A;
    case RC_ADDR(0x0001547eu): goto L_1547E;
    case RC_ADDR(0x00015484u): goto L_15484;
    case RC_ADDR(0x0001548au): goto L_1548A;
    case RC_ADDR(0x0001548cu): goto L_1548C;
    case RC_ADDR(0x00015490u): goto L_15490;
    case RC_ADDR(0x00015492u): goto L_15492;
    case RC_ADDR(0x00015494u): goto L_15494;
    case RC_ADDR(0x00015498u): goto L_15498;
    case RC_ADDR(0x0001549eu): goto L_1549E;
    case RC_ADDR(0x000154a4u): goto L_154A4;
    case RC_ADDR(0x000154a6u): goto L_154A6;
    case RC_ADDR(0x000154acu): goto L_154AC;
    case RC_ADDR(0x000154aeu): goto L_154AE;
    case RC_ADDR(0x000154b2u): goto L_154B2;
    case RC_ADDR(0x000154b4u): goto L_154B4;
    case RC_ADDR(0x000154b6u): goto L_154B6;
    case RC_ADDR(0x000154bau): goto L_154BA;
    case RC_ADDR(0x000154c0u): goto L_154C0;
    case RC_ADDR(0x000154c6u): goto L_154C6;
    case RC_ADDR(0x000154c8u): goto L_154C8;
    case RC_ADDR(0x000154ceu): goto L_154CE;
    case RC_ADDR(0x000154d0u): goto L_154D0;
    case RC_ADDR(0x000154d4u): goto L_154D4;
    case RC_ADDR(0x000154d6u): goto L_154D6;
    case RC_ADDR(0x000154d8u): goto L_154D8;
    case RC_ADDR(0x000154dcu): goto L_154DC;
    case RC_ADDR(0x000154e2u): goto L_154E2;
    case RC_ADDR(0x000154e6u): goto L_154E6;
    case RC_ADDR(0x000154e8u): goto L_154E8;
    case RC_ADDR(0x000154eau): goto L_154EA;
    case RC_ADDR(0x000154eeu): goto L_154EE;
    case RC_ADDR(0x000154f2u): goto L_154F2;
    case RC_ADDR(0x000154f4u): goto L_154F4;
    case RC_ADDR(0x000154f6u): goto L_154F6;
    case RC_ADDR(0x000154fau): goto L_154FA;
    case RC_ADDR(0x000154feu): goto L_154FE;
    case RC_ADDR(0x00015500u): goto L_15500;
    case RC_ADDR(0x00015502u): goto L_15502;
    case RC_ADDR(0x00015506u): goto L_15506;
    case RC_ADDR(0x0001550au): goto L_1550A;
    case RC_ADDR(0x0001550cu): goto L_1550C;
    case RC_ADDR(0x0001550eu): goto L_1550E;
    case RC_ADDR(0x00015512u): goto L_15512;
    case RC_ADDR(0x00015514u): goto L_15514;
    case RC_ADDR(0x00015518u): goto L_15518;
    case RC_ADDR(0x0001551au): goto L_1551A;
    case RC_ADDR(0x0001551eu): goto L_1551E;
    case RC_ADDR(0x00015520u): goto L_15520;
    case RC_ADDR(0x00015522u): goto L_15522;
    case RC_ADDR(0x00015526u): goto L_15526;
    case RC_ADDR(0x00015528u): goto L_15528;
    case RC_ADDR(0x0001552cu): goto L_1552C;
    case RC_ADDR(0x00015530u): goto L_15530;
    case RC_ADDR(0x00015532u): goto L_15532;
    case RC_ADDR(0x00015534u): goto L_15534;
    case RC_ADDR(0x00015538u): goto L_15538;
    case RC_ADDR(0x0001553cu): goto L_1553C;
    case RC_ADDR(0x0001553eu): goto L_1553E;
    case RC_ADDR(0x00015540u): goto L_15540;
    case RC_ADDR(0x00015544u): goto L_15544;
    case RC_ADDR(0x00015548u): goto L_15548;
    case RC_ADDR(0x0001554au): goto L_1554A;
    case RC_ADDR(0x0001554cu): goto L_1554C;
    case RC_ADDR(0x00015550u): goto L_15550;
    case RC_ADDR(0x00015554u): goto L_15554;
    case RC_ADDR(0x00015558u): goto L_15558;
    case RC_ADDR(0x0001555au): goto L_1555A;
    case RC_ADDR(0x0001555eu): goto L_1555E;
    case RC_ADDR(0x00015560u): goto L_15560;
    case RC_ADDR(0x00015562u): goto L_15562;
    case RC_ADDR(0x00015566u): goto L_15566;
    case RC_ADDR(0x0001556au): goto L_1556A;
    case RC_ADDR(0x0001556eu): goto L_1556E;
    case RC_ADDR(0x00015572u): goto L_15572;
    case RC_ADDR(0x00015574u): goto L_15574;
    case RC_ADDR(0x00015576u): goto L_15576;
    case RC_ADDR(0x0001557au): goto L_1557A;
    case RC_ADDR(0x00015580u): goto L_15580;
    case RC_ADDR(0x00015584u): goto L_15584;
    case RC_ADDR(0x00015586u): goto L_15586;
    case RC_ADDR(0x00015588u): goto L_15588;
    case RC_ADDR(0x0001558cu): goto L_1558C;
    case RC_ADDR(0x00015590u): goto L_15590;
    case RC_ADDR(0x00015594u): goto L_15594;
    case RC_ADDR(0x00015598u): goto L_15598;
    case RC_ADDR(0x0001559au): goto L_1559A;
    case RC_ADDR(0x0001559cu): goto L_1559C;
    case RC_ADDR(0x000155a0u): goto L_155A0;
    case RC_ADDR(0x000155a2u): goto L_155A2;
    case RC_ADDR(0x000155a6u): goto L_155A6;
    case RC_ADDR(0x000155a8u): goto L_155A8;
    case RC_ADDR(0x000155aau): goto L_155AA;
    case RC_ADDR(0x000155aeu): goto L_155AE;
    case RC_ADDR(0x000155b2u): goto L_155B2;
    case RC_ADDR(0x000155b4u): goto L_155B4;
    case RC_ADDR(0x000155b8u): goto L_155B8;
    case RC_ADDR(0x000155bau): goto L_155BA;
    case RC_ADDR(0x000155bcu): goto L_155BC;
    case RC_ADDR(0x000155c0u): goto L_155C0;
    case RC_ADDR(0x000155c2u): goto L_155C2;
    case RC_ADDR(0x000155c6u): goto L_155C6;
    case RC_ADDR(0x000155c8u): goto L_155C8;
    case RC_ADDR(0x000155cau): goto L_155CA;
    case RC_ADDR(0x000155ceu): goto L_155CE;
    case RC_ADDR(0x000155d2u): goto L_155D2;
    case RC_ADDR(0x000155d4u): goto L_155D4;
    case RC_ADDR(0x000155d8u): goto L_155D8;
    case RC_ADDR(0x000155dau): goto L_155DA;
    case RC_ADDR(0x000155dcu): goto L_155DC;
    case RC_ADDR(0x000155e0u): goto L_155E0;
    case RC_ADDR(0x000155e6u): goto L_155E6;
    case RC_ADDR(0x000155eau): goto L_155EA;
    case RC_ADDR(0x000155ecu): goto L_155EC;
    case RC_ADDR(0x000155eeu): goto L_155EE;
    case RC_ADDR(0x000155f2u): goto L_155F2;
    case RC_ADDR(0x000155f8u): goto L_155F8;
    case RC_ADDR(0x000155fcu): goto L_155FC;
    case RC_ADDR(0x00015600u): goto L_15600;
    case RC_ADDR(0x00015604u): goto L_15604;
    case RC_ADDR(0x00015606u): goto L_15606;
    case RC_ADDR(0x0001560au): goto L_1560A;
    case RC_ADDR(0x0001560eu): goto L_1560E;
    case RC_ADDR(0x00015610u): goto L_15610;
    case RC_ADDR(0x00015614u): goto L_15614;
    case RC_ADDR(0x00015616u): goto L_15616;
    case RC_ADDR(0x0001561au): goto L_1561A;
    case RC_ADDR(0x0001561eu): goto L_1561E;
    case RC_ADDR(0x00015622u): goto L_15622;
    case RC_ADDR(0x00015626u): goto L_15626;
    case RC_ADDR(0x0001562au): goto L_1562A;
    case RC_ADDR(0x0001562eu): goto L_1562E;
    case RC_ADDR(0x00015632u): goto L_15632;
    case RC_ADDR(0x00015634u): goto L_15634;
    case RC_ADDR(0x00015636u): goto L_15636;
    case RC_ADDR(0x0001563au): goto L_1563A;
    case RC_ADDR(0x0001563cu): goto L_1563C;
    case RC_ADDR(0x0001563eu): goto L_1563E;
    case RC_ADDR(0x00015642u): goto L_15642;
    case RC_ADDR(0x00015648u): goto L_15648;
    case RC_ADDR(0x0001564cu): goto L_1564C;
    case RC_ADDR(0x0001564eu): goto L_1564E;
    case RC_ADDR(0x00015650u): goto L_15650;
    case RC_ADDR(0x00015654u): goto L_15654;
    case RC_ADDR(0x00015658u): goto L_15658;
    case RC_ADDR(0x0001565cu): goto L_1565C;
    case RC_ADDR(0x0001565eu): goto L_1565E;
    case RC_ADDR(0x00015662u): goto L_15662;
    case RC_ADDR(0x00015666u): goto L_15666;
    case RC_ADDR(0x0001566au): goto L_1566A;
    case RC_ADDR(0x0001566cu): goto L_1566C;
    case RC_ADDR(0x00015670u): goto L_15670;
    case RC_ADDR(0x00015674u): goto L_15674;
    case RC_ADDR(0x00015678u): goto L_15678;
    case RC_ADDR(0x0001567cu): goto L_1567C;
    case RC_ADDR(0x00015680u): goto L_15680;
    case RC_ADDR(0x00015684u): goto L_15684;
    case RC_ADDR(0x00015688u): goto L_15688;
    case RC_ADDR(0x0001568cu): goto L_1568C;
    case RC_ADDR(0x00015690u): goto L_15690;
    case RC_ADDR(0x00015694u): goto L_15694;
    case RC_ADDR(0x00015696u): goto L_15696;
    case RC_ADDR(0x00015698u): goto L_15698;
    case RC_ADDR(0x0001569cu): goto L_1569C;
    case RC_ADDR(0x000156a0u): goto L_156A0;
    case RC_ADDR(0x000156a4u): goto L_156A4;
    case RC_ADDR(0x000156a8u): goto L_156A8;
    case RC_ADDR(0x000156aau): goto L_156AA;
    case RC_ADDR(0x000156acu): goto L_156AC;
    case RC_ADDR(0x000156b0u): goto L_156B0;
    case RC_ADDR(0x000156b4u): goto L_156B4;
    case RC_ADDR(0x000156b8u): goto L_156B8;
    case RC_ADDR(0x000156bcu): goto L_156BC;
    case RC_ADDR(0x000156beu): goto L_156BE;
    case RC_ADDR(0x000156c0u): goto L_156C0;
    case RC_ADDR(0x000156c4u): goto L_156C4;
    case RC_ADDR(0x000156c8u): goto L_156C8;
    case RC_ADDR(0x000156ceu): goto L_156CE;
    case RC_ADDR(0x000156d0u): goto L_156D0;
    case RC_ADDR(0x000156d4u): goto L_156D4;
    case RC_ADDR(0x000156d6u): goto L_156D6;
    case RC_ADDR(0x000156d8u): goto L_156D8;
    case RC_ADDR(0x000156dcu): goto L_156DC;
    case RC_ADDR(0x000156e0u): goto L_156E0;
    case RC_ADDR(0x000156e4u): goto L_156E4;
    case RC_ADDR(0x000156e6u): goto L_156E6;
    case RC_ADDR(0x000156e8u): goto L_156E8;
    case RC_ADDR(0x000156ecu): goto L_156EC;
    case RC_ADDR(0x000156f2u): goto L_156F2;
    case RC_ADDR(0x000156f6u): goto L_156F6;
    case RC_ADDR(0x000156fau): goto L_156FA;
    case RC_ADDR(0x000156feu): goto L_156FE;
    case RC_ADDR(0x00015700u): goto L_15700;
    case RC_ADDR(0x00015702u): goto L_15702;
    case RC_ADDR(0x00015704u): goto L_15704;
    case RC_ADDR(0x00015708u): goto L_15708;
    case RC_ADDR(0x0001570au): goto L_1570A;
    case RC_ADDR(0x0001570cu): goto L_1570C;
    case RC_ADDR(0x00015710u): goto L_15710;
    case RC_ADDR(0x00015716u): goto L_15716;
    case RC_ADDR(0x00015718u): goto L_15718;
    case RC_ADDR(0x0001571cu): goto L_1571C;
    case RC_ADDR(0x0001571eu): goto L_1571E;
    case RC_ADDR(0x00015720u): goto L_15720;
    case RC_ADDR(0x00015724u): goto L_15724;
    case RC_ADDR(0x00015728u): goto L_15728;
    case RC_ADDR(0x0001572cu): goto L_1572C;
    case RC_ADDR(0x0001572eu): goto L_1572E;
    case RC_ADDR(0x00015730u): goto L_15730;
    case RC_ADDR(0x00015734u): goto L_15734;
    case RC_ADDR(0x00015738u): goto L_15738;
    case RC_ADDR(0x0001573au): goto L_1573A;
    case RC_ADDR(0x0001573eu): goto L_1573E;
    case RC_ADDR(0x00015740u): goto L_15740;
    case RC_ADDR(0x00015744u): goto L_15744;
    case RC_ADDR(0x00015746u): goto L_15746;
    case RC_ADDR(0x00015748u): goto L_15748;
    case RC_ADDR(0x0001574cu): goto L_1574C;
    case RC_ADDR(0x00015750u): goto L_15750;
    case RC_ADDR(0x00015752u): goto L_15752;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1540A:
    /* 0001540a   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x0001540au);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_1540E:
    /* 0001540e   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001540eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15412:
    /* 00015412   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015412u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_15414:
    /* 00015414   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015414u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_15416:
    /* 00015416   4  lea (126c,A4),A0 */
    c->pc = RC_ADDR(0x00015416u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x126cu);

L_1541A:
    /* 0001541a   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001541au);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_1541E:
    /* 0001541e   4  beq 00015580 */
    c->pc = RC_ADDR(0x0001541eu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_15580;

L_15422:
    /* 00015422   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00015422u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15426:
    /* 00015426   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015426u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_15428:
    /* 00015428   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015428u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1542A:
    /* 0001542a   4  lea (126c,A4),A0 */
    c->pc = RC_ADDR(0x0001542au);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x126cu);

L_1542E:
    /* 0001542e   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001542eu);
    rc_step(c, m);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15432:
    /* 00015432   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00015432u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15436:
    /* 00015436   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015436u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_15438:
    /* 00015438   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015438u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1543A:
    /* 0001543a   4  lea (123c,A4),A0 */
    c->pc = RC_ADDR(0x0001543au);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x123cu);

L_1543E:
    /* 0001543e   6  move.w (0,A0,D0.w),(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001543eu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15444:
    /* 00015444   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00015444u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15448:
    /* 00015448   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015448u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1544A:
    /* 0001544a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001544au);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1544C:
    /* 0001544c   4  lea (122c,A4),A0 */
    c->pc = RC_ADDR(0x0001544cu);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x122cu);

L_15450:
    /* 00015450   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00015450u);
    rc_step(c, m);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15454:
    /* 00015454   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00015454u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15458:
    /* 00015458   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015458u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1545A:
    /* 0001545a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001545au);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1545C:
    /* 0001545c   4  lea (1224,A4),A0 */
    c->pc = RC_ADDR(0x0001545cu);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x1224u);

L_15460:
    /* 00015460   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00015460u);
    rc_step(c, m);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15464:
    /* 00015464   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00015464u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_15468:
    /* 00015468   2  ble 00015484 */
    c->pc = RC_ADDR(0x00015468u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_15484;

L_1546A:
    /* 0001546a   6  cmpi.w #4,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001546au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_15470:
    /* 00015470   2  bge 00015484 */
    c->pc = RC_ADDR(0x00015470u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_15484;

L_15472:
    /* 00015472   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00015472u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15476:
    /* 00015476   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015476u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_15478:
    /* 00015478   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015478u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1547A:
    /* 0001547a   4  lea (1224,A4),A0 */
    c->pc = RC_ADDR(0x0001547au);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x1224u);

L_1547E:
    /* 0001547e   6  move.w #5,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001547eu);
    rc_step(c, m);
    t0 = 0x00000005u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15484:
    /* 00015484   6  cmpi.w #4,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00015484u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_1548A:
    /* 0001548a   2  ble 0001549e */
    c->pc = RC_ADDR(0x0001548au);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_1549E;

L_1548C:
    /* 0001548c   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001548cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15490:
    /* 00015490   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015490u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_15492:
    /* 00015492   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015492u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_15494:
    /* 00015494   4  lea (1224,A4),A0 */
    c->pc = RC_ADDR(0x00015494u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x1224u);

L_15498:
    /* 00015498   6  move.w #fffb,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00015498u);
    rc_step(c, m);
    t0 = 0x0000fffbu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1549E:
    /* 0001549e   6  cmpi.w #2,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001549eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_154A4:
    /* 000154a4   2  ble 000154c0 */
    c->pc = RC_ADDR(0x000154a4u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_154C0;

L_154A6:
    /* 000154a6   6  cmpi.w #6,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000154a6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000006u);

L_154AC:
    /* 000154ac   2  bge 000154c0 */
    c->pc = RC_ADDR(0x000154acu);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_154C0;

L_154AE:
    /* 000154ae   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000154aeu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_154B2:
    /* 000154b2   2  ext.l D0 */
    c->pc = RC_ADDR(0x000154b2u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_154B4:
    /* 000154b4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000154b4u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_154B6:
    /* 000154b6   4  lea (122c,A4),A0 */
    c->pc = RC_ADDR(0x000154b6u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x122cu);

L_154BA:
    /* 000154ba   6  move.w #4,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000154bau);
    rc_step(c, m);
    t0 = 0x00000004u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_154C0:
    /* 000154c0   6  cmpi.w #6,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000154c0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000006u);

L_154C6:
    /* 000154c6   2  bgt 000154d0 */
    c->pc = RC_ADDR(0x000154c6u);
    rc_step(c, m);
    if (rc_cond(c, 14)) goto L_154D0;

L_154C8:
    /* 000154c8   6  cmpi.w #2,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000154c8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_154CE:
    /* 000154ce   2  bge 000154e2 */
    c->pc = RC_ADDR(0x000154ceu);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_154E2;

L_154D0:
    /* 000154d0   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000154d0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_154D4:
    /* 000154d4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000154d4u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_154D6:
    /* 000154d6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000154d6u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_154D8:
    /* 000154d8   4  lea (122c,A4),A0 */
    c->pc = RC_ADDR(0x000154d8u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x122cu);

L_154DC:
    /* 000154dc   6  move.w #fffc,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000154dcu);
    rc_step(c, m);
    t0 = 0x0000fffcu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_154E2:
    /* 000154e2   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000154e2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_154E6:
    /* 000154e6   2  ext.l D0 */
    c->pc = RC_ADDR(0x000154e6u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_154E8:
    /* 000154e8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000154e8u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_154EA:
    /* 000154ea   4  lea (125a,A4),A0 */
    c->pc = RC_ADDR(0x000154eau);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x125au);

L_154EE:
    /* 000154ee   4  move.w (8,A5),D1 */
    c->pc = RC_ADDR(0x000154eeu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_154F2:
    /* 000154f2   2  ext.l D1 */
    c->pc = RC_ADDR(0x000154f2u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_154F4:
    /* 000154f4   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000154f4u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_154F6:
    /* 000154f6   4  lea (11e4,A4),A1 */
    c->pc = RC_ADDR(0x000154f6u);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x11e4u);

L_154FA:
    /* 000154fa   4  move.w (8,A5),D2 */
    c->pc = RC_ADDR(0x000154fau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_154FE:
    /* 000154fe   2  ext.l D2 */
    c->pc = RC_ADDR(0x000154feu);
    rc_step(c, m);
    rc_ext_l(c, 2);

L_15500:
    /* 00015500   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x00015500u);
    rc_step(c, m);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_15502:
    /* 00015502   4  lea (1204,A4),A6 */
    c->pc = RC_ADDR(0x00015502u);
    rc_step(c, m);
    c->a[6] = (c->a[4] + 0x1204u);

L_15506:
    /* 00015506   4  move.w (0,A6,D2.w),D3 */
    c->pc = RC_ADDR(0x00015506u);
    rc_step(c, m);
    t4 = c->d[2];
    t0 = rc_rd16(c, m, (c->a[6] + 0x0u + t4));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1550A:
    /* 0001550a   2  ext.l D3 */
    c->pc = RC_ADDR(0x0001550au);
    rc_step(c, m);
    rc_ext_l(c, 3);

L_1550C:
    /* 0001550c   2  asl.l #2,D3 */
    c->pc = RC_ADDR(0x0001550cu);
    rc_step(c, m);
    rc_d_set(c, 3, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 3, RC_L), RC_L));

L_1550E:
    /* 0001550e   4  lea (11a0,A4),A6 */
    c->pc = RC_ADDR(0x0001550eu);
    rc_step(c, m);
    c->a[6] = (c->a[4] + 0x11a0u);

L_15512:
    /* 00015512   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x00015512u);
    rc_step(c, m);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_15514:
    /* 00015514   4  movea.l (0,A6,D3.w),A0 */
    c->pc = RC_ADDR(0x00015514u);
    rc_step(c, m);
    t4 = c->d[3];
    t0 = rc_rd32(c, m, (c->a[6] + 0x0u + t4));
    c->a[0] = t0;

L_15518:
    /* 00015518   2  moveq #0,D2 */
    c->pc = RC_ADDR(0x00015518u);
    rc_step(c, m);
    c->d[2] = 0x00000000u;
    rc_set_nzvc(c, c->d[2], RC_L);

L_1551A:
    /* 0001551a   4  move.b (4,A0),D2 */
    c->pc = RC_ADDR(0x0001551au);
    rc_step(c, m);
    t0 = rc_rd8(c, m, (c->a[0] + 0x4u));
    rc_d_set(c, 2, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1551E:
    /* 0001551e   2  lsr.w #1,D2 */
    c->pc = RC_ADDR(0x0001551eu);
    rc_step(c, m);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W));

L_15520:
    /* 00015520   2  movea.l (A7)+,A0 */
    c->pc = RC_ADDR(0x00015520u);
    rc_step(c, m);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;

L_15522:
    /* 00015522   4  move.w (0,A1,D1.w),D3 */
    c->pc = RC_ADDR(0x00015522u);
    rc_step(c, m);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15526:
    /* 00015526   2  add.w D2,D3 */
    c->pc = RC_ADDR(0x00015526u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_15528:
    /* 00015528   4  move.w D3,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00015528u);
    rc_step(c, m);
    t0 = rc_d_get(c, 3, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1552C:
    /* 0001552c   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001552cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15530:
    /* 00015530   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015530u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_15532:
    /* 00015532   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015532u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_15534:
    /* 00015534   4  lea (1262,A4),A0 */
    c->pc = RC_ADDR(0x00015534u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x1262u);

L_15538:
    /* 00015538   4  move.w (8,A5),D1 */
    c->pc = RC_ADDR(0x00015538u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1553C:
    /* 0001553c   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001553cu);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1553E:
    /* 0001553e   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001553eu);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_15540:
    /* 00015540   4  lea (1204,A4),A1 */
    c->pc = RC_ADDR(0x00015540u);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x1204u);

L_15544:
    /* 00015544   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x00015544u);
    rc_step(c, m);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15548:
    /* 00015548   2  ext.l D2 */
    c->pc = RC_ADDR(0x00015548u);
    rc_step(c, m);
    rc_ext_l(c, 2);

L_1554A:
    /* 0001554a   2  asl.l #2,D2 */
    c->pc = RC_ADDR(0x0001554au);
    rc_step(c, m);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 2, RC_L), RC_L));

L_1554C:
    /* 0001554c   4  lea (11a0,A4),A1 */
    c->pc = RC_ADDR(0x0001554cu);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x11a0u);

L_15550:
    /* 00015550   4  movea.l (0,A1,D2.w),A6 */
    c->pc = RC_ADDR(0x00015550u);
    rc_step(c, m);
    t4 = c->d[2];
    t0 = rc_rd32(c, m, (c->a[1] + 0x0u + t4));
    c->a[6] = t0;

L_15554:
    /* 00015554   4  move.w (2,A6),D1 */
    c->pc = RC_ADDR(0x00015554u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[6] + 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15558:
    /* 00015558   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x00015558u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_1555A:
    /* 0001555a   4  move.w (8,A5),D2 */
    c->pc = RC_ADDR(0x0001555au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1555E:
    /* 0001555e   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001555eu);
    rc_step(c, m);
    rc_ext_l(c, 2);

L_15560:
    /* 00015560   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x00015560u);
    rc_step(c, m);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_15562:
    /* 00015562   4  lea (11ec,A4),A1 */
    c->pc = RC_ADDR(0x00015562u);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x11ecu);

L_15566:
    /* 00015566   4  add.w (0,A1,D2.w),D1 */
    c->pc = RC_ADDR(0x00015566u);
    rc_step(c, m);
    t4 = c->d[2];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1556A:
    /* 0001556a   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001556au);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1556E:
    /* 0001556e   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001556eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15572:
    /* 00015572   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015572u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_15574:
    /* 00015574   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015574u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_15576:
    /* 00015576   4  lea (1252,A4),A0 */
    c->pc = RC_ADDR(0x00015576u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x1252u);

L_1557A:
    /* 0001557a   6  move.w #f,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001557au);
    rc_step(c, m);
    t0 = 0x0000000fu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15580:
    /* 00015580   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00015580u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15584:
    /* 00015584   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015584u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_15586:
    /* 00015586   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015586u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_15588:
    /* 00015588   4  lea (1252,A4),A0 */
    c->pc = RC_ADDR(0x00015588u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x1252u);

L_1558C:
    /* 0001558c   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001558cu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_15590:
    /* 00015590   4  ble 00015684 */
    c->pc = RC_ADDR(0x00015590u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_15684;

L_15594:
    /* 00015594   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00015594u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15598:
    /* 00015598   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015598u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1559A:
    /* 0001559a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001559au);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1559C:
    /* 0001559c   4  lea (125a,A4),A0 */
    c->pc = RC_ADDR(0x0001559cu);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x125au);

L_155A0:
    /* 000155a0   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x000155a0u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_155A2:
    /* 000155a2   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000155a2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_155A6:
    /* 000155a6   2  ext.l D0 */
    c->pc = RC_ADDR(0x000155a6u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_155A8:
    /* 000155a8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000155a8u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_155AA:
    /* 000155aa   4  lea (1224,A4),A1 */
    c->pc = RC_ADDR(0x000155aau);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x1224u);

L_155AE:
    /* 000155ae   4  move.w (0,A1,D0.w),D1 */
    c->pc = RC_ADDR(0x000155aeu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_155B2:
    /* 000155b2   2  add.w D1,(A0) */
    c->pc = RC_ADDR(0x000155b2u);
    rc_step(c, m);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_155B4:
    /* 000155b4   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000155b4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_155B8:
    /* 000155b8   2  ext.l D0 */
    c->pc = RC_ADDR(0x000155b8u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_155BA:
    /* 000155ba   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000155bau);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_155BC:
    /* 000155bc   4  lea (1262,A4),A0 */
    c->pc = RC_ADDR(0x000155bcu);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x1262u);

L_155C0:
    /* 000155c0   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x000155c0u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_155C2:
    /* 000155c2   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000155c2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_155C6:
    /* 000155c6   2  ext.l D0 */
    c->pc = RC_ADDR(0x000155c6u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_155C8:
    /* 000155c8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000155c8u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_155CA:
    /* 000155ca   4  lea (122c,A4),A1 */
    c->pc = RC_ADDR(0x000155cau);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x122cu);

L_155CE:
    /* 000155ce   4  move.w (0,A1,D0.w),D1 */
    c->pc = RC_ADDR(0x000155ceu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_155D2:
    /* 000155d2   2  add.w D1,(A0) */
    c->pc = RC_ADDR(0x000155d2u);
    rc_step(c, m);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_155D4:
    /* 000155d4   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000155d4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_155D8:
    /* 000155d8   2  ext.l D0 */
    c->pc = RC_ADDR(0x000155d8u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_155DA:
    /* 000155da   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000155dau);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_155DC:
    /* 000155dc   4  lea (125a,A4),A0 */
    c->pc = RC_ADDR(0x000155dcu);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x125au);

L_155E0:
    /* 000155e0   6  move.w (0,A0,D0.w),(fffffffc,A5) */
    c->pc = RC_ADDR(0x000155e0u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_155E6:
    /* 000155e6   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000155e6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_155EA:
    /* 000155ea   2  ext.l D0 */
    c->pc = RC_ADDR(0x000155eau);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_155EC:
    /* 000155ec   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000155ecu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_155EE:
    /* 000155ee   4  lea (1262,A4),A0 */
    c->pc = RC_ADDR(0x000155eeu);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x1262u);

L_155F2:
    /* 000155f2   6  move.w (0,A0,D0.w),(fffffffa,A5) */
    c->pc = RC_ADDR(0x000155f2u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_155F8:
    /* 000155f8   4  move.l (e4e,A4),-(A7) */
    c->pc = RC_ADDR(0x000155f8u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe4eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_155FC:
    /* 000155fc   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x000155fcu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15600:
    /* 00015600   4  sub.w (dfc,A4),D0 */
    c->pc = RC_ADDR(0x00015600u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15604:
    /* 00015604   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00015604u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15606:
    /* 00015606   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00015606u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1560A:
    /* 0001560a   4  sub.w (dfa,A4),D0 */
    c->pc = RC_ADDR(0x0001560au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1560E:
    /* 0001560e   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001560eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15610:
    /* 00015610   4  jsr (ffff8158,A4) */
    c->pc = RC_ADDR(0x00015610u);
    rc_step(c, m);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x00015614u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021baeu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011208u);
    return;

L_15614:
    /* 00015614   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00015614u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_15616:
    /* 00015616   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00015616u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000001u);

L_1561A:
    /* 0001561a   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x0001561au);
    rc_step(c, m);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1561E:
    /* 0001561e   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x0001561eu);
    rc_step(c, m);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15622:
    /* 00015622   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x00015622u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15626:
    /* 00015626   4  move.w (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00015626u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1562A:
    /* 0001562a   4  jsr (00013dba) */
    c->pc = RC_ADDR(0x0001562au);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001562eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00013dbau);
    return;

L_1562E:
    /* 0001562e   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001562eu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_15632:
    /* 00015632   2  tst.w D0 */
    c->pc = RC_ADDR(0x00015632u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_15634:
    /* 00015634   2  beq 00015648 */
    c->pc = RC_ADDR(0x00015634u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_15648;

L_15636:
    /* 00015636   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00015636u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1563A:
    /* 0001563a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001563au);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1563C:
    /* 0001563c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001563cu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1563E:
    /* 0001563e   4  lea (1252,A4),A0 */
    c->pc = RC_ADDR(0x0001563eu);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x1252u);

L_15642:
    /* 00015642   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00015642u);
    rc_step(c, m);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15648:
    /* 00015648   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00015648u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1564C:
    /* 0001564c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001564cu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1564E:
    /* 0001564e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001564eu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_15650:
    /* 00015650   4  lea (1252,A4),A0 */
    c->pc = RC_ADDR(0x00015650u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x1252u);

L_15654:
    /* 00015654   4  subq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00015654u);
    rc_step(c, m);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15658:
    /* 00015658   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00015658u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_1565C:
    /* 0001565c   2  bne 00015680 */
    c->pc = RC_ADDR(0x0001565cu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_15680;

L_1565E:
    /* 0001565e   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x0001565eu);
    rc_step(c, m);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15662:
    /* 00015662   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x00015662u);
    rc_step(c, m);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15666:
    /* 00015666   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00015666u);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1566A:
    /* 0001566a   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0001566au);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1566C:
    /* 0001566c   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x0001566cu);
    rc_step(c, m);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15670:
    /* 00015670   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x00015670u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15674:
    /* 00015674   4  move.w (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00015674u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15678:
    /* 00015678   4  jsr (000124de) */
    c->pc = RC_ADDR(0x00015678u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001567cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000124deu);
    return;

L_1567C:
    /* 0001567c   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001567cu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xeu);

L_15680:
    /* 00015680   4  bra 00015750 */
    c->pc = RC_ADDR(0x00015680u);
    rc_step(c, m);
    goto L_15750;

L_15684:
    /* 00015684   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00015684u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15688:
    /* 00015688   4  cmp.w (1244,A4),D0 */
    c->pc = RC_ADDR(0x00015688u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1244u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1568C:
    /* 0001568c   4  beq 00015740 */
    c->pc = RC_ADDR(0x0001568cu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_15740;

L_15690:
    /* 00015690   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00015690u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15694:
    /* 00015694   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015694u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_15696:
    /* 00015696   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015696u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_15698:
    /* 00015698   4  lea (128a,A4),A0 */
    c->pc = RC_ADDR(0x00015698u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x128au);

L_1569C:
    /* 0001569c   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001569cu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_156A0:
    /* 000156a0   4  beq 00015740 */
    c->pc = RC_ADDR(0x000156a0u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_15740;

L_156A4:
    /* 000156a4   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000156a4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_156A8:
    /* 000156a8   2  ext.l D0 */
    c->pc = RC_ADDR(0x000156a8u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_156AA:
    /* 000156aa   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000156aau);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_156AC:
    /* 000156ac   4  lea (1214,A4),A0 */
    c->pc = RC_ADDR(0x000156acu);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x1214u);

L_156B0:
    /* 000156b0   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000156b0u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_156B4:
    /* 000156b4   4  bne 00015740 */
    c->pc = RC_ADDR(0x000156b4u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_15740;

L_156B8:
    /* 000156b8   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000156b8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_156BC:
    /* 000156bc   2  ext.l D0 */
    c->pc = RC_ADDR(0x000156bcu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_156BE:
    /* 000156be   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000156beu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_156C0:
    /* 000156c0   4  lea (1252,A4),A0 */
    c->pc = RC_ADDR(0x000156c0u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x1252u);

L_156C4:
    /* 000156c4   4  subq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000156c4u);
    rc_step(c, m);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_156C8:
    /* 000156c8   6  cmpi.w #fff1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000156c8u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000fff1u);

L_156CE:
    /* 000156ce   2  bne 0001573e */
    c->pc = RC_ADDR(0x000156ceu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1573E;

L_156D0:
    /* 000156d0   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000156d0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_156D4:
    /* 000156d4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000156d4u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_156D6:
    /* 000156d6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000156d6u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_156D8:
    /* 000156d8   4  lea (1248,A4),A0 */
    c->pc = RC_ADDR(0x000156d8u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x1248u);

L_156DC:
    /* 000156dc   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000156dcu);
    rc_step(c, m);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_156E0:
    /* 000156e0   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000156e0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_156E4:
    /* 000156e4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000156e4u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_156E6:
    /* 000156e6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000156e6u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_156E8:
    /* 000156e8   4  lea (1282,A4),A0 */
    c->pc = RC_ADDR(0x000156e8u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x1282u);

L_156EC:
    /* 000156ec   6  move.w (0,A0,D0.w),(fffffff8,A5) */
    c->pc = RC_ADDR(0x000156ecu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_156F2:
    /* 000156f2   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x000156f2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_156F6:
    /* 000156f6   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000156f6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_156FA:
    /* 000156fa   4  jsr (00015312) */
    c->pc = RC_ADDR(0x000156fau);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000156feu));
    rc_depth++;
    c->pc = RC_ADDR(0x00015312u);
    return;

L_156FE:
    /* 000156fe   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000156feu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_15700:
    /* 00015700   2  tst.w D0 */
    c->pc = RC_ADDR(0x00015700u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_15702:
    /* 00015702   2  beq 00015718 */
    c->pc = RC_ADDR(0x00015702u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_15718;

L_15704:
    /* 00015704   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00015704u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15708:
    /* 00015708   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015708u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1570A:
    /* 0001570a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001570au);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1570C:
    /* 0001570c   4  lea (126c,A4),A0 */
    c->pc = RC_ADDR(0x0001570cu);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x126cu);

L_15710:
    /* 00015710   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00015710u);
    rc_step(c, m);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15716:
    /* 00015716   2  bra 0001573e */
    c->pc = RC_ADDR(0x00015716u);
    rc_step(c, m);
    goto L_1573E;

L_15718:
    /* 00015718   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00015718u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1571C:
    /* 0001571c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001571cu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1571E:
    /* 0001571e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001571eu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_15720:
    /* 00015720   4  lea (1252,A4),A0 */
    c->pc = RC_ADDR(0x00015720u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x1252u);

L_15724:
    /* 00015724   4  addq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00015724u);
    rc_step(c, m);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15728:
    /* 00015728   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00015728u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1572C:
    /* 0001572c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001572cu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1572E:
    /* 0001572e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001572eu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_15730:
    /* 00015730   4  lea (1282,A4),A0 */
    c->pc = RC_ADDR(0x00015730u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x1282u);

L_15734:
    /* 00015734   4  move.w (fffffff8,A5),D1 */
    c->pc = RC_ADDR(0x00015734u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15738:
    /* 00015738   2  neg.w D1 */
    c->pc = RC_ADDR(0x00015738u);
    rc_step(c, m);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1573A:
    /* 0001573a   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001573au);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1573E:
    /* 0001573e   2  bra 00015750 */
    c->pc = RC_ADDR(0x0001573eu);
    rc_step(c, m);
    goto L_15750;

L_15740:
    /* 00015740   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00015740u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15744:
    /* 00015744   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015744u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_15746:
    /* 00015746   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015746u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_15748:
    /* 00015748   4  lea (1252,A4),A0 */
    c->pc = RC_ADDR(0x00015748u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x1252u);

L_1574C:
    /* 0001574c   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001574cu);
    rc_step(c, m);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15750:
    /* 00015750   2  unlk A5 */
    c->pc = RC_ADDR(0x00015750u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_15752:
    /* 00015752   2  rts */
    c->pc = RC_ADDR(0x00015752u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
