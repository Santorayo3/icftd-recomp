/* fn_0001737a - 842 byte(s), 256 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001737a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001737au): goto L_1737A;
    case RC_ADDR(0x0001737eu): goto L_1737E;
    case RC_ADDR(0x00017382u): goto L_17382;
    case RC_ADDR(0x00017386u): goto L_17386;
    case RC_ADDR(0x0001738au): goto L_1738A;
    case RC_ADDR(0x0001738eu): goto L_1738E;
    case RC_ADDR(0x00017390u): goto L_17390;
    case RC_ADDR(0x00017394u): goto L_17394;
    case RC_ADDR(0x00017396u): goto L_17396;
    case RC_ADDR(0x00017398u): goto L_17398;
    case RC_ADDR(0x0001739cu): goto L_1739C;
    case RC_ADDR(0x000173a2u): goto L_173A2;
    case RC_ADDR(0x000173a6u): goto L_173A6;
    case RC_ADDR(0x000173a8u): goto L_173A8;
    case RC_ADDR(0x000173aau): goto L_173AA;
    case RC_ADDR(0x000173aeu): goto L_173AE;
    case RC_ADDR(0x000173b4u): goto L_173B4;
    case RC_ADDR(0x000173b8u): goto L_173B8;
    case RC_ADDR(0x000173bau): goto L_173BA;
    case RC_ADDR(0x000173bcu): goto L_173BC;
    case RC_ADDR(0x000173c0u): goto L_173C0;
    case RC_ADDR(0x000173c6u): goto L_173C6;
    case RC_ADDR(0x000173cau): goto L_173CA;
    case RC_ADDR(0x000173ccu): goto L_173CC;
    case RC_ADDR(0x000173ceu): goto L_173CE;
    case RC_ADDR(0x000173d2u): goto L_173D2;
    case RC_ADDR(0x000173d8u): goto L_173D8;
    case RC_ADDR(0x000173deu): goto L_173DE;
    case RC_ADDR(0x000173e2u): goto L_173E2;
    case RC_ADDR(0x000173e4u): goto L_173E4;
    case RC_ADDR(0x000173e6u): goto L_173E6;
    case RC_ADDR(0x000173eau): goto L_173EA;
    case RC_ADDR(0x000173f0u): goto L_173F0;
    case RC_ADDR(0x000173f4u): goto L_173F4;
    case RC_ADDR(0x000173f6u): goto L_173F6;
    case RC_ADDR(0x000173f8u): goto L_173F8;
    case RC_ADDR(0x000173fcu): goto L_173FC;
    case RC_ADDR(0x00017400u): goto L_17400;
    case RC_ADDR(0x00017402u): goto L_17402;
    case RC_ADDR(0x00017404u): goto L_17404;
    case RC_ADDR(0x00017408u): goto L_17408;
    case RC_ADDR(0x0001740cu): goto L_1740C;
    case RC_ADDR(0x00017410u): goto L_17410;
    case RC_ADDR(0x00017414u): goto L_17414;
    case RC_ADDR(0x00017418u): goto L_17418;
    case RC_ADDR(0x0001741cu): goto L_1741C;
    case RC_ADDR(0x0001741eu): goto L_1741E;
    case RC_ADDR(0x00017420u): goto L_17420;
    case RC_ADDR(0x00017424u): goto L_17424;
    case RC_ADDR(0x00017428u): goto L_17428;
    case RC_ADDR(0x0001742au): goto L_1742A;
    case RC_ADDR(0x0001742cu): goto L_1742C;
    case RC_ADDR(0x00017430u): goto L_17430;
    case RC_ADDR(0x00017434u): goto L_17434;
    case RC_ADDR(0x00017438u): goto L_17438;
    case RC_ADDR(0x0001743cu): goto L_1743C;
    case RC_ADDR(0x00017440u): goto L_17440;
    case RC_ADDR(0x00017444u): goto L_17444;
    case RC_ADDR(0x00017446u): goto L_17446;
    case RC_ADDR(0x00017448u): goto L_17448;
    case RC_ADDR(0x0001744cu): goto L_1744C;
    case RC_ADDR(0x00017450u): goto L_17450;
    case RC_ADDR(0x00017452u): goto L_17452;
    case RC_ADDR(0x00017458u): goto L_17458;
    case RC_ADDR(0x0001745cu): goto L_1745C;
    case RC_ADDR(0x0001745eu): goto L_1745E;
    case RC_ADDR(0x00017460u): goto L_17460;
    case RC_ADDR(0x00017464u): goto L_17464;
    case RC_ADDR(0x00017468u): goto L_17468;
    case RC_ADDR(0x0001746au): goto L_1746A;
    case RC_ADDR(0x0001746eu): goto L_1746E;
    case RC_ADDR(0x00017470u): goto L_17470;
    case RC_ADDR(0x00017474u): goto L_17474;
    case RC_ADDR(0x00017476u): goto L_17476;
    case RC_ADDR(0x00017478u): goto L_17478;
    case RC_ADDR(0x0001747cu): goto L_1747C;
    case RC_ADDR(0x00017480u): goto L_17480;
    case RC_ADDR(0x00017482u): goto L_17482;
    case RC_ADDR(0x00017486u): goto L_17486;
    case RC_ADDR(0x00017488u): goto L_17488;
    case RC_ADDR(0x0001748au): goto L_1748A;
    case RC_ADDR(0x0001748eu): goto L_1748E;
    case RC_ADDR(0x00017492u): goto L_17492;
    case RC_ADDR(0x00017496u): goto L_17496;
    case RC_ADDR(0x00017498u): goto L_17498;
    case RC_ADDR(0x0001749au): goto L_1749A;
    case RC_ADDR(0x0001749eu): goto L_1749E;
    case RC_ADDR(0x000174a2u): goto L_174A2;
    case RC_ADDR(0x000174a6u): goto L_174A6;
    case RC_ADDR(0x000174a8u): goto L_174A8;
    case RC_ADDR(0x000174acu): goto L_174AC;
    case RC_ADDR(0x000174aeu): goto L_174AE;
    case RC_ADDR(0x000174b0u): goto L_174B0;
    case RC_ADDR(0x000174b4u): goto L_174B4;
    case RC_ADDR(0x000174b8u): goto L_174B8;
    case RC_ADDR(0x000174bcu): goto L_174BC;
    case RC_ADDR(0x000174beu): goto L_174BE;
    case RC_ADDR(0x000174c0u): goto L_174C0;
    case RC_ADDR(0x000174c4u): goto L_174C4;
    case RC_ADDR(0x000174c8u): goto L_174C8;
    case RC_ADDR(0x000174ccu): goto L_174CC;
    case RC_ADDR(0x000174d0u): goto L_174D0;
    case RC_ADDR(0x000174d2u): goto L_174D2;
    case RC_ADDR(0x000174d6u): goto L_174D6;
    case RC_ADDR(0x000174d8u): goto L_174D8;
    case RC_ADDR(0x000174dcu): goto L_174DC;
    case RC_ADDR(0x000174deu): goto L_174DE;
    case RC_ADDR(0x000174e0u): goto L_174E0;
    case RC_ADDR(0x000174e4u): goto L_174E4;
    case RC_ADDR(0x000174e8u): goto L_174E8;
    case RC_ADDR(0x000174ecu): goto L_174EC;
    case RC_ADDR(0x000174eeu): goto L_174EE;
    case RC_ADDR(0x000174f2u): goto L_174F2;
    case RC_ADDR(0x000174f4u): goto L_174F4;
    case RC_ADDR(0x000174f6u): goto L_174F6;
    case RC_ADDR(0x000174fau): goto L_174FA;
    case RC_ADDR(0x000174feu): goto L_174FE;
    case RC_ADDR(0x00017500u): goto L_17500;
    case RC_ADDR(0x00017502u): goto L_17502;
    case RC_ADDR(0x00017506u): goto L_17506;
    case RC_ADDR(0x0001750cu): goto L_1750C;
    case RC_ADDR(0x00017510u): goto L_17510;
    case RC_ADDR(0x00017514u): goto L_17514;
    case RC_ADDR(0x00017516u): goto L_17516;
    case RC_ADDR(0x00017518u): goto L_17518;
    case RC_ADDR(0x0001751cu): goto L_1751C;
    case RC_ADDR(0x00017520u): goto L_17520;
    case RC_ADDR(0x00017524u): goto L_17524;
    case RC_ADDR(0x00017526u): goto L_17526;
    case RC_ADDR(0x0001752au): goto L_1752A;
    case RC_ADDR(0x0001752cu): goto L_1752C;
    case RC_ADDR(0x0001752eu): goto L_1752E;
    case RC_ADDR(0x00017532u): goto L_17532;
    case RC_ADDR(0x00017536u): goto L_17536;
    case RC_ADDR(0x0001753au): goto L_1753A;
    case RC_ADDR(0x0001753cu): goto L_1753C;
    case RC_ADDR(0x0001753eu): goto L_1753E;
    case RC_ADDR(0x00017542u): goto L_17542;
    case RC_ADDR(0x00017548u): goto L_17548;
    case RC_ADDR(0x0001754cu): goto L_1754C;
    case RC_ADDR(0x0001754eu): goto L_1754E;
    case RC_ADDR(0x00017550u): goto L_17550;
    case RC_ADDR(0x00017554u): goto L_17554;
    case RC_ADDR(0x00017558u): goto L_17558;
    case RC_ADDR(0x0001755cu): goto L_1755C;
    case RC_ADDR(0x00017560u): goto L_17560;
    case RC_ADDR(0x00017562u): goto L_17562;
    case RC_ADDR(0x00017566u): goto L_17566;
    case RC_ADDR(0x0001756au): goto L_1756A;
    case RC_ADDR(0x0001756cu): goto L_1756C;
    case RC_ADDR(0x00017570u): goto L_17570;
    case RC_ADDR(0x00017572u): goto L_17572;
    case RC_ADDR(0x00017576u): goto L_17576;
    case RC_ADDR(0x00017578u): goto L_17578;
    case RC_ADDR(0x0001757au): goto L_1757A;
    case RC_ADDR(0x0001757eu): goto L_1757E;
    case RC_ADDR(0x00017582u): goto L_17582;
    case RC_ADDR(0x00017586u): goto L_17586;
    case RC_ADDR(0x0001758au): goto L_1758A;
    case RC_ADDR(0x0001758cu): goto L_1758C;
    case RC_ADDR(0x00017590u): goto L_17590;
    case RC_ADDR(0x00017594u): goto L_17594;
    case RC_ADDR(0x00017596u): goto L_17596;
    case RC_ADDR(0x0001759au): goto L_1759A;
    case RC_ADDR(0x0001759cu): goto L_1759C;
    case RC_ADDR(0x000175a0u): goto L_175A0;
    case RC_ADDR(0x000175a4u): goto L_175A4;
    case RC_ADDR(0x000175a8u): goto L_175A8;
    case RC_ADDR(0x000175acu): goto L_175AC;
    case RC_ADDR(0x000175b0u): goto L_175B0;
    case RC_ADDR(0x000175b4u): goto L_175B4;
    case RC_ADDR(0x000175b6u): goto L_175B6;
    case RC_ADDR(0x000175b8u): goto L_175B8;
    case RC_ADDR(0x000175bcu): goto L_175BC;
    case RC_ADDR(0x000175c0u): goto L_175C0;
    case RC_ADDR(0x000175c4u): goto L_175C4;
    case RC_ADDR(0x000175c8u): goto L_175C8;
    case RC_ADDR(0x000175cau): goto L_175CA;
    case RC_ADDR(0x000175ceu): goto L_175CE;
    case RC_ADDR(0x000175d0u): goto L_175D0;
    case RC_ADDR(0x000175d2u): goto L_175D2;
    case RC_ADDR(0x000175d6u): goto L_175D6;
    case RC_ADDR(0x000175dau): goto L_175DA;
    case RC_ADDR(0x000175dcu): goto L_175DC;
    case RC_ADDR(0x000175deu): goto L_175DE;
    case RC_ADDR(0x000175e2u): goto L_175E2;
    case RC_ADDR(0x000175e6u): goto L_175E6;
    case RC_ADDR(0x000175eau): goto L_175EA;
    case RC_ADDR(0x000175eeu): goto L_175EE;
    case RC_ADDR(0x000175f0u): goto L_175F0;
    case RC_ADDR(0x000175f2u): goto L_175F2;
    case RC_ADDR(0x000175f6u): goto L_175F6;
    case RC_ADDR(0x000175f8u): goto L_175F8;
    case RC_ADDR(0x000175fau): goto L_175FA;
    case RC_ADDR(0x000175feu): goto L_175FE;
    case RC_ADDR(0x00017602u): goto L_17602;
    case RC_ADDR(0x00017606u): goto L_17606;
    case RC_ADDR(0x0001760au): goto L_1760A;
    case RC_ADDR(0x0001760cu): goto L_1760C;
    case RC_ADDR(0x00017610u): goto L_17610;
    case RC_ADDR(0x00017612u): goto L_17612;
    case RC_ADDR(0x00017614u): goto L_17614;
    case RC_ADDR(0x00017618u): goto L_17618;
    case RC_ADDR(0x0001761cu): goto L_1761C;
    case RC_ADDR(0x0001761eu): goto L_1761E;
    case RC_ADDR(0x00017620u): goto L_17620;
    case RC_ADDR(0x00017624u): goto L_17624;
    case RC_ADDR(0x00017628u): goto L_17628;
    case RC_ADDR(0x0001762cu): goto L_1762C;
    case RC_ADDR(0x00017630u): goto L_17630;
    case RC_ADDR(0x00017632u): goto L_17632;
    case RC_ADDR(0x00017634u): goto L_17634;
    case RC_ADDR(0x00017638u): goto L_17638;
    case RC_ADDR(0x0001763au): goto L_1763A;
    case RC_ADDR(0x0001763eu): goto L_1763E;
    case RC_ADDR(0x00017642u): goto L_17642;
    case RC_ADDR(0x00017646u): goto L_17646;
    case RC_ADDR(0x00017648u): goto L_17648;
    case RC_ADDR(0x0001764cu): goto L_1764C;
    case RC_ADDR(0x00017650u): goto L_17650;
    case RC_ADDR(0x00017654u): goto L_17654;
    case RC_ADDR(0x00017658u): goto L_17658;
    case RC_ADDR(0x0001765cu): goto L_1765C;
    case RC_ADDR(0x0001765eu): goto L_1765E;
    case RC_ADDR(0x00017660u): goto L_17660;
    case RC_ADDR(0x00017664u): goto L_17664;
    case RC_ADDR(0x00017668u): goto L_17668;
    case RC_ADDR(0x0001766au): goto L_1766A;
    case RC_ADDR(0x0001766cu): goto L_1766C;
    case RC_ADDR(0x0001766eu): goto L_1766E;
    case RC_ADDR(0x00017672u): goto L_17672;
    case RC_ADDR(0x00017676u): goto L_17676;
    case RC_ADDR(0x0001767au): goto L_1767A;
    case RC_ADDR(0x0001767cu): goto L_1767C;
    case RC_ADDR(0x0001767eu): goto L_1767E;
    case RC_ADDR(0x00017680u): goto L_17680;
    case RC_ADDR(0x00017684u): goto L_17684;
    case RC_ADDR(0x00017688u): goto L_17688;
    case RC_ADDR(0x0001768cu): goto L_1768C;
    case RC_ADDR(0x00017690u): goto L_17690;
    case RC_ADDR(0x00017692u): goto L_17692;
    case RC_ADDR(0x00017694u): goto L_17694;
    case RC_ADDR(0x00017696u): goto L_17696;
    case RC_ADDR(0x0001769au): goto L_1769A;
    case RC_ADDR(0x0001769eu): goto L_1769E;
    case RC_ADDR(0x000176a2u): goto L_176A2;
    case RC_ADDR(0x000176a4u): goto L_176A4;
    case RC_ADDR(0x000176a6u): goto L_176A6;
    case RC_ADDR(0x000176aau): goto L_176AA;
    case RC_ADDR(0x000176acu): goto L_176AC;
    case RC_ADDR(0x000176b0u): goto L_176B0;
    case RC_ADDR(0x000176b4u): goto L_176B4;
    case RC_ADDR(0x000176b8u): goto L_176B8;
    case RC_ADDR(0x000176bcu): goto L_176BC;
    case RC_ADDR(0x000176c0u): goto L_176C0;
    case RC_ADDR(0x000176c2u): goto L_176C2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1737A:
    /* 0001737a   4  link.w A5,#ffffffee */
    c->pc = RC_ADDR(0x0001737au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x12u;

L_1737E:
    /* 0001737e   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001737eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17382:
    /* 00017382   4  bra 000176b4 */
    c->pc = RC_ADDR(0x00017382u);
    rc_step(c, m, 10);
    goto L_176B4;

L_17386:
    /* 00017386   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x00017386u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1738A:
    /* 0001738a   4  jsr (00016cae) */
    c->pc = RC_ADDR(0x0001738au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001738eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00016caeu);
    return;

L_1738E:
    /* 0001738e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001738eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_17390:
    /* 00017390   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00017390u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17394:
    /* 00017394   2  ext.l D0 */
    c->pc = RC_ADDR(0x00017394u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_17396:
    /* 00017396   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00017396u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_17398:
    /* 00017398   4  lea (1bde,A4),A0 */
    c->pc = RC_ADDR(0x00017398u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1bdeu);

L_1739C:
    /* 0001739c   6  move.w (0,A0,D0.w),(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001739cu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_173A2:
    /* 000173a2   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000173a2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_173A6:
    /* 000173a6   2  ext.l D0 */
    c->pc = RC_ADDR(0x000173a6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_173A8:
    /* 000173a8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000173a8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_173AA:
    /* 000173aa   4  lea (1be6,A4),A0 */
    c->pc = RC_ADDR(0x000173aau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1be6u);

L_173AE:
    /* 000173ae   6  move.w (0,A0,D0.w),(fffffffa,A5) */
    c->pc = RC_ADDR(0x000173aeu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_173B4:
    /* 000173b4   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000173b4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_173B8:
    /* 000173b8   2  ext.l D0 */
    c->pc = RC_ADDR(0x000173b8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_173BA:
    /* 000173ba   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000173bau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_173BC:
    /* 000173bc   4  lea (1bfe,A4),A0 */
    c->pc = RC_ADDR(0x000173bcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1bfeu);

L_173C0:
    /* 000173c0   6  move.w (0,A0,D0.w),(fffffff2,A5) */
    c->pc = RC_ADDR(0x000173c0u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_173C6:
    /* 000173c6   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000173c6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_173CA:
    /* 000173ca   2  ext.l D0 */
    c->pc = RC_ADDR(0x000173cau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_173CC:
    /* 000173cc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000173ccu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_173CE:
    /* 000173ce   4  lea (1c2e,A4),A0 */
    c->pc = RC_ADDR(0x000173ceu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c2eu);

L_173D2:
    /* 000173d2   6  move.w (0,A0,D0.w),(ffffffee,A5) */
    c->pc = RC_ADDR(0x000173d2u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_173D8:
    /* 000173d8   6  move.w (ffffffee,A5),(fffffff0,A5) */
    c->pc = RC_ADDR(0x000173d8u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_173DE:
    /* 000173de   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000173deu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_173E2:
    /* 000173e2   2  ext.l D0 */
    c->pc = RC_ADDR(0x000173e2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_173E4:
    /* 000173e4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000173e4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_173E6:
    /* 000173e6   4  lea (1bee,A4),A0 */
    c->pc = RC_ADDR(0x000173e6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1beeu);

L_173EA:
    /* 000173ea   6  move.w (0,A0,D0.w),(fffffff4,A5) */
    c->pc = RC_ADDR(0x000173eau);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_173F0:
    /* 000173f0   4  move.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x000173f0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_173F4:
    /* 000173f4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000173f4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_173F6:
    /* 000173f6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000173f6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_173F8:
    /* 000173f8   4  lea (ffffb3fa,A4),A0 */
    c->pc = RC_ADDR(0x000173f8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4c06u);

L_173FC:
    /* 000173fc   4  move.w (fffffff2,A5),D1 */
    c->pc = RC_ADDR(0x000173fcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17400:
    /* 00017400   2  ext.l D1 */
    c->pc = RC_ADDR(0x00017400u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_17402:
    /* 00017402   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00017402u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_17404:
    /* 00017404   4  lea (ffffb41a,A4),A1 */
    c->pc = RC_ADDR(0x00017404u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4be6u);

L_17408:
    /* 00017408   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x00017408u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1740C:
    /* 0001740c   4  add.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0001740cu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_17410:
    /* 00017410   4  add.w (fffffffc,A5),D2 */
    c->pc = RC_ADDR(0x00017410u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_17414:
    /* 00017414   4  move.w D2,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00017414u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17418:
    /* 00017418   4  move.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x00017418u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1741C:
    /* 0001741c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001741cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1741E:
    /* 0001741e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001741eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_17420:
    /* 00017420   4  lea (ffffb40a,A4),A0 */
    c->pc = RC_ADDR(0x00017420u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4bf6u);

L_17424:
    /* 00017424   4  move.w (fffffff2,A5),D1 */
    c->pc = RC_ADDR(0x00017424u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17428:
    /* 00017428   2  ext.l D1 */
    c->pc = RC_ADDR(0x00017428u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1742A:
    /* 0001742a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001742au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1742C:
    /* 0001742c   4  lea (ffffb42a,A4),A1 */
    c->pc = RC_ADDR(0x0001742cu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4bd6u);

L_17430:
    /* 00017430   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x00017430u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17434:
    /* 00017434   4  add.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x00017434u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_17438:
    /* 00017438   4  add.w (fffffffa,A5),D2 */
    c->pc = RC_ADDR(0x00017438u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_1743C:
    /* 0001743c   4  move.w D2,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0001743cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17440:
    /* 00017440   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00017440u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17444:
    /* 00017444   2  ext.l D0 */
    c->pc = RC_ADDR(0x00017444u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_17446:
    /* 00017446   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00017446u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_17448:
    /* 00017448   4  lea (1c0e,A4),A0 */
    c->pc = RC_ADDR(0x00017448u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c0eu);

L_1744C:
    /* 0001744c   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001744cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_17450:
    /* 00017450   2  beq 000174c8 */
    c->pc = RC_ADDR(0x00017450u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_174C8;

L_17452:
    /* 00017452   6  move.w #8,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00017452u);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17458:
    /* 00017458   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x00017458u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1745C:
    /* 0001745c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001745cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1745E:
    /* 0001745e   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001745eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_17460:
    /* 00017460   4  lea (1b9a,A4),A0 */
    c->pc = RC_ADDR(0x00017460u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1b9au);

L_17464:
    /* 00017464   4  movea.l (0,A0,D0.w),A1 */
    c->pc = RC_ADDR(0x00017464u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_17468:
    /* 00017468   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00017468u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1746A:
    /* 0001746a   4  move.b (4,A1),D0 */
    c->pc = RC_ADDR(0x0001746au);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[1] + 0x4u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1746E:
    /* 0001746e   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x0001746eu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_17470:
    /* 00017470   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x00017470u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17474:
    /* 00017474   2  ext.l D1 */
    c->pc = RC_ADDR(0x00017474u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_17476:
    /* 00017476   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00017476u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_17478:
    /* 00017478   4  lea (1bba,A4),A0 */
    c->pc = RC_ADDR(0x00017478u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1bbau);

L_1747C:
    /* 0001747c   4  movea.l (0,A0,D1.w),A1 */
    c->pc = RC_ADDR(0x0001747cu);
    rc_step(c, m, 18);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_17480:
    /* 00017480   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00017480u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_17482:
    /* 00017482   4  move.b (4,A1),D1 */
    c->pc = RC_ADDR(0x00017482u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[1] + 0x4u));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_17486:
    /* 00017486   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x00017486u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_17488:
    /* 00017488   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x00017488u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1748A:
    /* 0001748a   4  add.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001748au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1748E:
    /* 0001748e   4  move.w D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001748eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17492:
    /* 00017492   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x00017492u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17496:
    /* 00017496   2  ext.l D0 */
    c->pc = RC_ADDR(0x00017496u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_17498:
    /* 00017498   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00017498u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1749A:
    /* 0001749a   4  lea (1b9a,A4),A0 */
    c->pc = RC_ADDR(0x0001749au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1b9au);

L_1749E:
    /* 0001749e   4  movea.l (0,A0,D0.w),A1 */
    c->pc = RC_ADDR(0x0001749eu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_174A2:
    /* 000174a2   4  move.w (2,A1),D0 */
    c->pc = RC_ADDR(0x000174a2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_174A6:
    /* 000174a6   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x000174a6u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_174A8:
    /* 000174a8   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x000174a8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_174AC:
    /* 000174ac   2  ext.l D1 */
    c->pc = RC_ADDR(0x000174acu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_174AE:
    /* 000174ae   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x000174aeu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_174B0:
    /* 000174b0   4  lea (1bba,A4),A0 */
    c->pc = RC_ADDR(0x000174b0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1bbau);

L_174B4:
    /* 000174b4   4  movea.l (0,A0,D1.w),A1 */
    c->pc = RC_ADDR(0x000174b4u);
    rc_step(c, m, 18);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_174B8:
    /* 000174b8   4  move.w (2,A1),D1 */
    c->pc = RC_ADDR(0x000174b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_174BC:
    /* 000174bc   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x000174bcu);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_174BE:
    /* 000174be   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x000174beu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_174C0:
    /* 000174c0   4  add.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x000174c0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_174C4:
    /* 000174c4   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x000174c4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_174C8:
    /* 000174c8   4  move.w (1c3e,A4),D0 */
    c->pc = RC_ADDR(0x000174c8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c3eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_174CC:
    /* 000174cc   4  cmp.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000174ccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_174D0:
    /* 000174d0   2  bne 00017548 */
    c->pc = RC_ADDR(0x000174d0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_17548;

L_174D2:
    /* 000174d2   4  tst.w (ffffb250,A4) */
    c->pc = RC_ADDR(0x000174d2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db0u));
    rc_set_nzvc(c, t0, RC_W);

L_174D6:
    /* 000174d6   2  beq 00017548 */
    c->pc = RC_ADDR(0x000174d6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17548;

L_174D8:
    /* 000174d8   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000174d8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_174DC:
    /* 000174dc   2  ext.l D0 */
    c->pc = RC_ADDR(0x000174dcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_174DE:
    /* 000174de   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000174deu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_174E0:
    /* 000174e0   4  lea (1c06,A4),A0 */
    c->pc = RC_ADDR(0x000174e0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c06u);

L_174E4:
    /* 000174e4   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000174e4u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_174E8:
    /* 000174e8   4  cmp.w (fffffff4,A5),D1 */
    c->pc = RC_ADDR(0x000174e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_174EC:
    /* 000174ec   2  beq 00017548 */
    c->pc = RC_ADDR(0x000174ecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17548;

L_174EE:
    /* 000174ee   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x000174eeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_174F2:
    /* 000174f2   2  ext.l D0 */
    c->pc = RC_ADDR(0x000174f2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_174F4:
    /* 000174f4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000174f4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_174F6:
    /* 000174f6   4  lea (ffffb44a,A4),A0 */
    c->pc = RC_ADDR(0x000174f6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4bb6u);

L_174FA:
    /* 000174fa   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x000174fau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_174FE:
    /* 000174fe   2  ext.l D1 */
    c->pc = RC_ADDR(0x000174feu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_17500:
    /* 00017500   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00017500u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_17502:
    /* 00017502   4  lea (1bfe,A4),A1 */
    c->pc = RC_ADDR(0x00017502u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1bfeu);

L_17506:
    /* 00017506   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00017506u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1750C:
    /* 0001750c   4  move.w (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x0001750cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17510:
    /* 00017510   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00017510u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17514:
    /* 00017514   2  ext.l D0 */
    c->pc = RC_ADDR(0x00017514u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_17516:
    /* 00017516   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00017516u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_17518:
    /* 00017518   4  lea (1c06,A4),A0 */
    c->pc = RC_ADDR(0x00017518u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c06u);

L_1751C:
    /* 0001751c   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001751cu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17520:
    /* 00017520   4  jsr (00016b4a) */
    c->pc = RC_ADDR(0x00017520u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017524u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016b4au);
    return;

L_17524:
    /* 00017524   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00017524u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_17526:
    /* 00017526   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00017526u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1752A:
    /* 0001752a   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001752au);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1752C:
    /* 0001752c   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001752cu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1752E:
    /* 0001752e   4  lea (1c2e,A4),A0 */
    c->pc = RC_ADDR(0x0001752eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c2eu);

L_17532:
    /* 00017532   4  move.w D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00017532u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17536:
    /* 00017536   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00017536u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1753A:
    /* 0001753a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001753au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1753C:
    /* 0001753c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001753cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1753E:
    /* 0001753e   4  lea (1c06,A4),A0 */
    c->pc = RC_ADDR(0x0001753eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c06u);

L_17542:
    /* 00017542   6  move.w (fffffff4,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00017542u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17548:
    /* 00017548   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x00017548u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1754C:
    /* 0001754c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001754cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1754E:
    /* 0001754e   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001754eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_17550:
    /* 00017550   4  lea (1b9a,A4),A0 */
    c->pc = RC_ADDR(0x00017550u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1b9au);

L_17554:
    /* 00017554   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00017554u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17558:
    /* 00017558   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00017558u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1755C:
    /* 0001755c   4  sub.w (17f6,A4),D0 */
    c->pc = RC_ADDR(0x0001755cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f6u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_17560:
    /* 00017560   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00017560u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17562:
    /* 00017562   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00017562u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17566:
    /* 00017566   4  sub.w (17f4,A4),D0 */
    c->pc = RC_ADDR(0x00017566u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1756A:
    /* 0001756a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001756au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1756C:
    /* 0001756c   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0001756cu);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x00017570u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_17570:
    /* 00017570   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00017570u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_17572:
    /* 00017572   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00017572u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17576:
    /* 00017576   2  ext.l D0 */
    c->pc = RC_ADDR(0x00017576u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_17578:
    /* 00017578   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00017578u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1757A:
    /* 0001757a   4  lea (1bba,A4),A0 */
    c->pc = RC_ADDR(0x0001757au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1bbau);

L_1757E:
    /* 0001757e   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001757eu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17582:
    /* 00017582   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00017582u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17586:
    /* 00017586   4  sub.w (17f6,A4),D0 */
    c->pc = RC_ADDR(0x00017586u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f6u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1758A:
    /* 0001758a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001758au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1758C:
    /* 0001758c   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001758cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17590:
    /* 00017590   4  sub.w (17f4,A4),D0 */
    c->pc = RC_ADDR(0x00017590u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_17594:
    /* 00017594   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00017594u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17596:
    /* 00017596   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x00017596u);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0001759au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_1759A:
    /* 0001759a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001759au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1759C:
    /* 0001759c   4  tst.w (1ab2,A4) */
    c->pc = RC_ADDR(0x0001759cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ab2u));
    rc_set_nzvc(c, t0, RC_W);

L_175A0:
    /* 000175a0   4  beq 000176ac */
    c->pc = RC_ADDR(0x000175a0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_176AC;

L_175A4:
    /* 000175a4   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000175a4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_175A8:
    /* 000175a8   4  cmp.w (1c3e,A4),D0 */
    c->pc = RC_ADDR(0x000175a8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c3eu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_175AC:
    /* 000175ac   4  beq 0001763a */
    c->pc = RC_ADDR(0x000175acu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1763A;

L_175B0:
    /* 000175b0   4  move.w (1c3e,A4),D0 */
    c->pc = RC_ADDR(0x000175b0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c3eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_175B4:
    /* 000175b4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000175b4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_175B6:
    /* 000175b6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000175b6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_175B8:
    /* 000175b8   4  lea (1bde,A4),A0 */
    c->pc = RC_ADDR(0x000175b8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1bdeu);

L_175BC:
    /* 000175bc   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000175bcu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_175C0:
    /* 000175c0   4  add.w (1b96,A4),D1 */
    c->pc = RC_ADDR(0x000175c0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b96u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_175C4:
    /* 000175c4   4  cmp.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x000175c4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_175C8:
    /* 000175c8   2  ble 00017638 */
    c->pc = RC_ADDR(0x000175c8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_17638;

L_175CA:
    /* 000175ca   4  move.w (1c3e,A4),D0 */
    c->pc = RC_ADDR(0x000175cau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c3eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_175CE:
    /* 000175ce   2  ext.l D0 */
    c->pc = RC_ADDR(0x000175ceu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_175D0:
    /* 000175d0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000175d0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_175D2:
    /* 000175d2   4  lea (1bde,A4),A0 */
    c->pc = RC_ADDR(0x000175d2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1bdeu);

L_175D6:
    /* 000175d6   4  move.w (fffffff4,A5),D1 */
    c->pc = RC_ADDR(0x000175d6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_175DA:
    /* 000175da   2  ext.l D1 */
    c->pc = RC_ADDR(0x000175dau);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_175DC:
    /* 000175dc   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000175dcu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_175DE:
    /* 000175de   4  lea (ffffb49c,A4),A1 */
    c->pc = RC_ADDR(0x000175deu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4b64u);

L_175E2:
    /* 000175e2   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x000175e2u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_175E6:
    /* 000175e6   4  add.w (fffffffc,A5),D2 */
    c->pc = RC_ADDR(0x000175e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_175EA:
    /* 000175ea   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000175eau);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_175EE:
    /* 000175ee   2  cmp.w D2,D1 */
    c->pc = RC_ADDR(0x000175eeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_175F0:
    /* 000175f0   2  bge 00017638 */
    c->pc = RC_ADDR(0x000175f0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_17638;

L_175F2:
    /* 000175f2   4  move.w (1c3e,A4),D0 */
    c->pc = RC_ADDR(0x000175f2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c3eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_175F6:
    /* 000175f6   2  ext.l D0 */
    c->pc = RC_ADDR(0x000175f6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_175F8:
    /* 000175f8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000175f8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_175FA:
    /* 000175fa   4  lea (1be6,A4),A0 */
    c->pc = RC_ADDR(0x000175fau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1be6u);

L_175FE:
    /* 000175fe   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000175feu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17602:
    /* 00017602   4  add.w (1b98,A4),D1 */
    c->pc = RC_ADDR(0x00017602u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b98u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_17606:
    /* 00017606   4  cmp.w (fffffffa,A5),D1 */
    c->pc = RC_ADDR(0x00017606u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1760A:
    /* 0001760a   2  ble 00017638 */
    c->pc = RC_ADDR(0x0001760au);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_17638;

L_1760C:
    /* 0001760c   4  move.w (1c3e,A4),D0 */
    c->pc = RC_ADDR(0x0001760cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c3eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17610:
    /* 00017610   2  ext.l D0 */
    c->pc = RC_ADDR(0x00017610u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_17612:
    /* 00017612   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00017612u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_17614:
    /* 00017614   4  lea (1be6,A4),A0 */
    c->pc = RC_ADDR(0x00017614u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1be6u);

L_17618:
    /* 00017618   4  move.w (fffffff4,A5),D1 */
    c->pc = RC_ADDR(0x00017618u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1761C:
    /* 0001761c   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001761cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1761E:
    /* 0001761e   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001761eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_17620:
    /* 00017620   4  lea (ffffb4b2,A4),A1 */
    c->pc = RC_ADDR(0x00017620u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4b4eu);

L_17624:
    /* 00017624   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x00017624u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17628:
    /* 00017628   4  add.w (fffffffa,A5),D2 */
    c->pc = RC_ADDR(0x00017628u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_1762C:
    /* 0001762c   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001762cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17630:
    /* 00017630   2  cmp.w D2,D1 */
    c->pc = RC_ADDR(0x00017630u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_17632:
    /* 00017632   2  bge 00017638 */
    c->pc = RC_ADDR(0x00017632u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_17638;

L_17634:
    /* 00017634   4  jsr (0001732a) */
    c->pc = RC_ADDR(0x00017634u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017638u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001732au);
    return;

L_17638:
    /* 00017638   2  bra 000176aa */
    c->pc = RC_ADDR(0x00017638u);
    rc_step(c, m, 10);
    goto L_176AA;

L_1763A:
    /* 0001763a   4  jsr (00016ff8) */
    c->pc = RC_ADDR(0x0001763au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001763eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00016ff8u);
    return;

L_1763E:
    /* 0001763e   4  lea (1bde,A4),A0 */
    c->pc = RC_ADDR(0x0001763eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1bdeu);

L_17642:
    /* 00017642   4  move.w (1c3e,A4),D0 */
    c->pc = RC_ADDR(0x00017642u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c3eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17646:
    /* 00017646   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x00017646u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_17648:
    /* 00017648   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x00017648u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1764C:
    /* 0001764c   4  lea (1be6,A4),A0 */
    c->pc = RC_ADDR(0x0001764cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1be6u);

L_17650:
    /* 00017650   4  move.w (0,A0,D0.w),D3 */
    c->pc = RC_ADDR(0x00017650u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17654:
    /* 00017654   4  sub.w (17f4,A4),D2 */
    c->pc = RC_ADDR(0x00017654u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f4u));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_17658:
    /* 00017658   4  sub.w (17f6,A4),D3 */
    c->pc = RC_ADDR(0x00017658u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f6u));
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_1765C:
    /* 0001765c   2  move.w D2,D0 */
    c->pc = RC_ADDR(0x0001765cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1765E:
    /* 0001765e   2  move.w D3,D1 */
    c->pc = RC_ADDR(0x0001765eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17660:
    /* 00017660   4  bsr 000176c4 */
    c->pc = RC_ADDR(0x00017660u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017664u));
    rc_depth++;
    c->pc = RC_ADDR(0x000176c4u);
    return;

L_17664:
    /* 00017664   4  andi.b #84,D0 */
    c->pc = RC_ADDR(0x00017664u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 & 0x00000084u;
    rc_d_set(c, 0, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_17668:
    /* 00017668   2  bne 000176a6 */
    c->pc = RC_ADDR(0x00017668u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_176A6;

L_1766A:
    /* 0001766a   2  move.w D2,D0 */
    c->pc = RC_ADDR(0x0001766au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1766C:
    /* 0001766c   2  move.w D3,D1 */
    c->pc = RC_ADDR(0x0001766cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1766E:
    /* 0001766e   4  add.w (1b96,A4),D0 */
    c->pc = RC_ADDR(0x0001766eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b96u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_17672:
    /* 00017672   4  bsr 000176c4 */
    c->pc = RC_ADDR(0x00017672u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017676u));
    rc_depth++;
    c->pc = RC_ADDR(0x000176c4u);
    return;

L_17676:
    /* 00017676   4  andi.b #84,D0 */
    c->pc = RC_ADDR(0x00017676u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 & 0x00000084u;
    rc_d_set(c, 0, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_1767A:
    /* 0001767a   2  bne 000176a6 */
    c->pc = RC_ADDR(0x0001767au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_176A6;

L_1767C:
    /* 0001767c   2  move.w D2,D0 */
    c->pc = RC_ADDR(0x0001767cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1767E:
    /* 0001767e   2  move.w D3,D1 */
    c->pc = RC_ADDR(0x0001767eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17680:
    /* 00017680   4  add.w (1b96,A4),D0 */
    c->pc = RC_ADDR(0x00017680u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b96u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_17684:
    /* 00017684   4  add.w (1b98,A4),D1 */
    c->pc = RC_ADDR(0x00017684u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b98u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_17688:
    /* 00017688   4  bsr 000176c4 */
    c->pc = RC_ADDR(0x00017688u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001768cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000176c4u);
    return;

L_1768C:
    /* 0001768c   4  andi.b #84,D0 */
    c->pc = RC_ADDR(0x0001768cu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 & 0x00000084u;
    rc_d_set(c, 0, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_17690:
    /* 00017690   2  bne 000176a6 */
    c->pc = RC_ADDR(0x00017690u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_176A6;

L_17692:
    /* 00017692   2  move.w D2,D0 */
    c->pc = RC_ADDR(0x00017692u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17694:
    /* 00017694   2  move.w D3,D1 */
    c->pc = RC_ADDR(0x00017694u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17696:
    /* 00017696   4  add.w (1b98,A4),D1 */
    c->pc = RC_ADDR(0x00017696u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b98u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1769A:
    /* 0001769a   4  bsr 000176c4 */
    c->pc = RC_ADDR(0x0001769au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001769eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000176c4u);
    return;

L_1769E:
    /* 0001769e   4  andi.b #84,D0 */
    c->pc = RC_ADDR(0x0001769eu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 & 0x00000084u;
    rc_d_set(c, 0, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_176A2:
    /* 000176a2   2  bne 000176a6 */
    c->pc = RC_ADDR(0x000176a2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_176A6;

L_176A4:
    /* 000176a4   2  bra 000176aa */
    c->pc = RC_ADDR(0x000176a4u);
    rc_step(c, m, 10);
    goto L_176AA;

L_176A6:
    /* 000176a6   4  bsr 0001732a */
    c->pc = RC_ADDR(0x000176a6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000176aau));
    rc_depth++;
    c->pc = RC_ADDR(0x0001732au);
    return;

L_176AA:
    /* 000176aa   2  bra 000176b0 */
    c->pc = RC_ADDR(0x000176aau);
    rc_step(c, m, 10);
    goto L_176B0;

L_176AC:
    /* 000176ac   4  jsr (00016a8a) */
    c->pc = RC_ADDR(0x000176acu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000176b0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016a8au);
    return;

L_176B0:
    /* 000176b0   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000176b0u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_176B4:
    /* 000176b4   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000176b4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_176B8:
    /* 000176b8   4  cmp.w (1ca0,A4),D0 */
    c->pc = RC_ADDR(0x000176b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ca0u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_176BC:
    /* 000176bc   4  blt 00017386 */
    c->pc = RC_ADDR(0x000176bcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_17386; }

L_176C0:
    /* 000176c0   2  unlk A5 */
    c->pc = RC_ADDR(0x000176c0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_176C2:
    /* 000176c2   2  rts */
    c->pc = RC_ADDR(0x000176c2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
