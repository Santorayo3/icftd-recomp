/* fn_0001731c - 530 byte(s), 156 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001731c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001731cu): goto L_1731C;
    case RC_ADDR(0x00017320u): goto L_17320;
    case RC_ADDR(0x00017324u): goto L_17324;
    case RC_ADDR(0x00017326u): goto L_17326;
    case RC_ADDR(0x0001732au): goto L_1732A;
    case RC_ADDR(0x0001732eu): goto L_1732E;
    case RC_ADDR(0x00017332u): goto L_17332;
    case RC_ADDR(0x00017334u): goto L_17334;
    case RC_ADDR(0x00017338u): goto L_17338;
    case RC_ADDR(0x0001733cu): goto L_1733C;
    case RC_ADDR(0x00017340u): goto L_17340;
    case RC_ADDR(0x00017344u): goto L_17344;
    case RC_ADDR(0x00017348u): goto L_17348;
    case RC_ADDR(0x0001734au): goto L_1734A;
    case RC_ADDR(0x0001734cu): goto L_1734C;
    case RC_ADDR(0x0001734eu): goto L_1734E;
    case RC_ADDR(0x00017352u): goto L_17352;
    case RC_ADDR(0x00017354u): goto L_17354;
    case RC_ADDR(0x00017358u): goto L_17358;
    case RC_ADDR(0x0001735cu): goto L_1735C;
    case RC_ADDR(0x0001735eu): goto L_1735E;
    case RC_ADDR(0x00017362u): goto L_17362;
    case RC_ADDR(0x00017364u): goto L_17364;
    case RC_ADDR(0x00017368u): goto L_17368;
    case RC_ADDR(0x0001736cu): goto L_1736C;
    case RC_ADDR(0x00017370u): goto L_17370;
    case RC_ADDR(0x00017374u): goto L_17374;
    case RC_ADDR(0x00017376u): goto L_17376;
    case RC_ADDR(0x00017378u): goto L_17378;
    case RC_ADDR(0x0001737cu): goto L_1737C;
    case RC_ADDR(0x00017380u): goto L_17380;
    case RC_ADDR(0x00017382u): goto L_17382;
    case RC_ADDR(0x00017384u): goto L_17384;
    case RC_ADDR(0x00017388u): goto L_17388;
    case RC_ADDR(0x0001738au): goto L_1738A;
    case RC_ADDR(0x0001738eu): goto L_1738E;
    case RC_ADDR(0x00017392u): goto L_17392;
    case RC_ADDR(0x00017396u): goto L_17396;
    case RC_ADDR(0x0001739au): goto L_1739A;
    case RC_ADDR(0x0001739eu): goto L_1739E;
    case RC_ADDR(0x000173a0u): goto L_173A0;
    case RC_ADDR(0x000173a4u): goto L_173A4;
    case RC_ADDR(0x000173a8u): goto L_173A8;
    case RC_ADDR(0x000173aau): goto L_173AA;
    case RC_ADDR(0x000173acu): goto L_173AC;
    case RC_ADDR(0x000173b0u): goto L_173B0;
    case RC_ADDR(0x000173b2u): goto L_173B2;
    case RC_ADDR(0x000173b6u): goto L_173B6;
    case RC_ADDR(0x000173bau): goto L_173BA;
    case RC_ADDR(0x000173beu): goto L_173BE;
    case RC_ADDR(0x000173c2u): goto L_173C2;
    case RC_ADDR(0x000173c6u): goto L_173C6;
    case RC_ADDR(0x000173c8u): goto L_173C8;
    case RC_ADDR(0x000173ccu): goto L_173CC;
    case RC_ADDR(0x000173ceu): goto L_173CE;
    case RC_ADDR(0x000173d4u): goto L_173D4;
    case RC_ADDR(0x000173d6u): goto L_173D6;
    case RC_ADDR(0x000173dau): goto L_173DA;
    case RC_ADDR(0x000173deu): goto L_173DE;
    case RC_ADDR(0x000173e0u): goto L_173E0;
    case RC_ADDR(0x000173e2u): goto L_173E2;
    case RC_ADDR(0x000173e4u): goto L_173E4;
    case RC_ADDR(0x000173e8u): goto L_173E8;
    case RC_ADDR(0x000173ecu): goto L_173EC;
    case RC_ADDR(0x000173eeu): goto L_173EE;
    case RC_ADDR(0x000173f2u): goto L_173F2;
    case RC_ADDR(0x000173f6u): goto L_173F6;
    case RC_ADDR(0x000173fau): goto L_173FA;
    case RC_ADDR(0x000173feu): goto L_173FE;
    case RC_ADDR(0x00017400u): goto L_17400;
    case RC_ADDR(0x00017404u): goto L_17404;
    case RC_ADDR(0x00017408u): goto L_17408;
    case RC_ADDR(0x0001740au): goto L_1740A;
    case RC_ADDR(0x0001740eu): goto L_1740E;
    case RC_ADDR(0x00017412u): goto L_17412;
    case RC_ADDR(0x00017416u): goto L_17416;
    case RC_ADDR(0x0001741au): goto L_1741A;
    case RC_ADDR(0x0001741eu): goto L_1741E;
    case RC_ADDR(0x00017420u): goto L_17420;
    case RC_ADDR(0x00017426u): goto L_17426;
    case RC_ADDR(0x0001742au): goto L_1742A;
    case RC_ADDR(0x0001742eu): goto L_1742E;
    case RC_ADDR(0x00017432u): goto L_17432;
    case RC_ADDR(0x00017434u): goto L_17434;
    case RC_ADDR(0x00017438u): goto L_17438;
    case RC_ADDR(0x0001743cu): goto L_1743C;
    case RC_ADDR(0x00017440u): goto L_17440;
    case RC_ADDR(0x00017444u): goto L_17444;
    case RC_ADDR(0x00017448u): goto L_17448;
    case RC_ADDR(0x0001744cu): goto L_1744C;
    case RC_ADDR(0x0001744eu): goto L_1744E;
    case RC_ADDR(0x00017452u): goto L_17452;
    case RC_ADDR(0x00017456u): goto L_17456;
    case RC_ADDR(0x0001745au): goto L_1745A;
    case RC_ADDR(0x0001745eu): goto L_1745E;
    case RC_ADDR(0x00017460u): goto L_17460;
    case RC_ADDR(0x00017462u): goto L_17462;
    case RC_ADDR(0x00017466u): goto L_17466;
    case RC_ADDR(0x0001746au): goto L_1746A;
    case RC_ADDR(0x0001746eu): goto L_1746E;
    case RC_ADDR(0x00017472u): goto L_17472;
    case RC_ADDR(0x00017474u): goto L_17474;
    case RC_ADDR(0x0001747au): goto L_1747A;
    case RC_ADDR(0x0001747cu): goto L_1747C;
    case RC_ADDR(0x00017480u): goto L_17480;
    case RC_ADDR(0x00017484u): goto L_17484;
    case RC_ADDR(0x00017486u): goto L_17486;
    case RC_ADDR(0x00017488u): goto L_17488;
    case RC_ADDR(0x0001748au): goto L_1748A;
    case RC_ADDR(0x0001748eu): goto L_1748E;
    case RC_ADDR(0x00017492u): goto L_17492;
    case RC_ADDR(0x00017494u): goto L_17494;
    case RC_ADDR(0x00017498u): goto L_17498;
    case RC_ADDR(0x0001749cu): goto L_1749C;
    case RC_ADDR(0x000174a0u): goto L_174A0;
    case RC_ADDR(0x000174a4u): goto L_174A4;
    case RC_ADDR(0x000174a6u): goto L_174A6;
    case RC_ADDR(0x000174aau): goto L_174AA;
    case RC_ADDR(0x000174aeu): goto L_174AE;
    case RC_ADDR(0x000174b0u): goto L_174B0;
    case RC_ADDR(0x000174b4u): goto L_174B4;
    case RC_ADDR(0x000174b8u): goto L_174B8;
    case RC_ADDR(0x000174bau): goto L_174BA;
    case RC_ADDR(0x000174bcu): goto L_174BC;
    case RC_ADDR(0x000174beu): goto L_174BE;
    case RC_ADDR(0x000174c2u): goto L_174C2;
    case RC_ADDR(0x000174c6u): goto L_174C6;
    case RC_ADDR(0x000174c8u): goto L_174C8;
    case RC_ADDR(0x000174ccu): goto L_174CC;
    case RC_ADDR(0x000174d0u): goto L_174D0;
    case RC_ADDR(0x000174d4u): goto L_174D4;
    case RC_ADDR(0x000174d8u): goto L_174D8;
    case RC_ADDR(0x000174dau): goto L_174DA;
    case RC_ADDR(0x000174deu): goto L_174DE;
    case RC_ADDR(0x000174e2u): goto L_174E2;
    case RC_ADDR(0x000174e4u): goto L_174E4;
    case RC_ADDR(0x000174e8u): goto L_174E8;
    case RC_ADDR(0x000174ecu): goto L_174EC;
    case RC_ADDR(0x000174f0u): goto L_174F0;
    case RC_ADDR(0x000174f4u): goto L_174F4;
    case RC_ADDR(0x000174f8u): goto L_174F8;
    case RC_ADDR(0x000174fau): goto L_174FA;
    case RC_ADDR(0x000174feu): goto L_174FE;
    case RC_ADDR(0x00017502u): goto L_17502;
    case RC_ADDR(0x00017504u): goto L_17504;
    case RC_ADDR(0x00017508u): goto L_17508;
    case RC_ADDR(0x0001750au): goto L_1750A;
    case RC_ADDR(0x0001750eu): goto L_1750E;
    case RC_ADDR(0x00017512u): goto L_17512;
    case RC_ADDR(0x00017516u): goto L_17516;
    case RC_ADDR(0x0001751au): goto L_1751A;
    case RC_ADDR(0x0001751eu): goto L_1751E;
    case RC_ADDR(0x00017520u): goto L_17520;
    case RC_ADDR(0x00017524u): goto L_17524;
    case RC_ADDR(0x00017528u): goto L_17528;
    case RC_ADDR(0x0001752au): goto L_1752A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1731C:
    /* 0001731c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001731cu);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_17320:
    /* 00017320   4  tst.w (10c8,A4) */
    c->pc = RC_ADDR(0x00017320u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10c8u));
    rc_set_nzvc(c, t0, RC_W);

L_17324:
    /* 00017324   2  beq 0001732e */
    c->pc = RC_ADDR(0x00017324u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1732E;

L_17326:
    /* 00017326   4  clr.w (10c8,A4) */
    c->pc = RC_ADDR(0x00017326u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x10c8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1732A:
    /* 0001732a   4  addq.w #1,(fffffdae,A4) */
    c->pc = RC_ADDR(0x0001732au);
    rc_step(c, m);
    t3 = (c->a[4] - 0x252u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1732E:
    /* 0001732e   4  tst.w (afc,A4) */
    c->pc = RC_ADDR(0x0001732eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0xafcu));
    rc_set_nzvc(c, t0, RC_W);

L_17332:
    /* 00017332   2  beq 0001734e */
    c->pc = RC_ADDR(0x00017332u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1734E;

L_17334:
    /* 00017334   4  clr.w (aec,A4) */
    c->pc = RC_ADDR(0x00017334u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0xaecu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17338:
    /* 00017338   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00017338u);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1733C:
    /* 0001733c   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x0001733cu);
    rc_step(c, m);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17340:
    /* 00017340   4  pea (0001752e) */
    c->pc = RC_ADDR(0x00017340u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001752eu));

L_17344:
    /* 00017344   4  jsr (00017148) */
    c->pc = RC_ADDR(0x00017344u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00017348u));
    rc_depth++;
    c->pc = RC_ADDR(0x00017148u);
    return;

L_17348:
    /* 00017348   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00017348u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1734A:
    /* 0001734a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001734au);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1734C:
    /* 0001734c   2  rts */
    c->pc = RC_ADDR(0x0001734cu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_1734E:
    /* 0001734e   4  tst.w (10e2,A4) */
    c->pc = RC_ADDR(0x0001734eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10e2u));
    rc_set_nzvc(c, t0, RC_W);

L_17352:
    /* 00017352   2  beq 00017384 */
    c->pc = RC_ADDR(0x00017352u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_17384;

L_17354:
    /* 00017354   4  clr.w (10e2,A4) */
    c->pc = RC_ADDR(0x00017354u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x10e2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17358:
    /* 00017358   4  tst.w (114a,A4) */
    c->pc = RC_ADDR(0x00017358u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x114au));
    rc_set_nzvc(c, t0, RC_W);

L_1735C:
    /* 0001735c   2  beq 00017378 */
    c->pc = RC_ADDR(0x0001735cu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_17378;

L_1735E:
    /* 0001735e   4  tst.w (10c8,A4) */
    c->pc = RC_ADDR(0x0001735eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10c8u));
    rc_set_nzvc(c, t0, RC_W);

L_17362:
    /* 00017362   2  bne 00017378 */
    c->pc = RC_ADDR(0x00017362u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_17378;

L_17364:
    /* 00017364   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00017364u);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17368:
    /* 00017368   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x00017368u);
    rc_step(c, m);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1736C:
    /* 0001736c   4  pea (000175dd) */
    c->pc = RC_ADDR(0x0001736cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000175ddu));

L_17370:
    /* 00017370   4  jsr (00017148) */
    c->pc = RC_ADDR(0x00017370u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00017374u));
    rc_depth++;
    c->pc = RC_ADDR(0x00017148u);
    return;

L_17374:
    /* 00017374   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00017374u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_17376:
    /* 00017376   2  bra 00017382 */
    c->pc = RC_ADDR(0x00017376u);
    rc_step(c, m);
    goto L_17382;

L_17378:
    /* 00017378   4  move.w #fa,-(A7) */
    c->pc = RC_ADDR(0x00017378u);
    rc_step(c, m);
    t0 = 0x000000fau;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1737C:
    /* 0001737c   4  jsr (ffff8044,A4) */
    c->pc = RC_ADDR(0x0001737cu);
    rc_step(c, m);
    /* vector 11 */
    rc_push32(c, m, RC_ADDR(0x00017380u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a9au);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002c92u);
    return;

L_17380:
    /* 00017380   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00017380u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_17382:
    /* 00017382   2  bra 0001734a */
    c->pc = RC_ADDR(0x00017382u);
    rc_step(c, m);
    rc_tick();
    goto L_1734A;

L_17384:
    /* 00017384   4  tst.w (fffffd88,A4) */
    c->pc = RC_ADDR(0x00017384u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x278u));
    rc_set_nzvc(c, t0, RC_W);

L_17388:
    /* 00017388   2  beq 000173ac */
    c->pc = RC_ADDR(0x00017388u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_173AC;

L_1738A:
    /* 0001738a   4  clr.w (fffffd88,A4) */
    c->pc = RC_ADDR(0x0001738au);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x278u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1738E:
    /* 0001738e   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0001738eu);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17392:
    /* 00017392   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x00017392u);
    rc_step(c, m);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17396:
    /* 00017396   4  pea (00017653) */
    c->pc = RC_ADDR(0x00017396u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00017653u));

L_1739A:
    /* 0001739a   4  jsr (00017148) */
    c->pc = RC_ADDR(0x0001739au);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001739eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00017148u);
    return;

L_1739E:
    /* 0001739e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001739eu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_173A0:
    /* 000173a0   4  move.w #fe,-(A7) */
    c->pc = RC_ADDR(0x000173a0u);
    rc_step(c, m);
    t0 = 0x000000feu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_173A4:
    /* 000173a4   4  jsr (ffff8044,A4) */
    c->pc = RC_ADDR(0x000173a4u);
    rc_step(c, m);
    /* vector 11 */
    rc_push32(c, m, RC_ADDR(0x000173a8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a9au);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002c92u);
    return;

L_173A8:
    /* 000173a8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000173a8u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_173AA:
    /* 000173aa   2  bra 0001734a */
    c->pc = RC_ADDR(0x000173aau);
    rc_step(c, m);
    rc_tick();
    goto L_1734A;

L_173AC:
    /* 000173ac   4  tst.w (1146,A4) */
    c->pc = RC_ADDR(0x000173acu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1146u));
    rc_set_nzvc(c, t0, RC_W);

L_173B0:
    /* 000173b0   2  beq 00017404 */
    c->pc = RC_ADDR(0x000173b0u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_17404;

L_173B2:
    /* 000173b2   4  clr.w (1146,A4) */
    c->pc = RC_ADDR(0x000173b2u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x1146u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_173B6:
    /* 000173b6   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000173b6u);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_173BA:
    /* 000173ba   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x000173bau);
    rc_step(c, m);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_173BE:
    /* 000173be   4  pea (000176bd) */
    c->pc = RC_ADDR(0x000173beu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000176bdu));

L_173C2:
    /* 000173c2   4  jsr (00017148) */
    c->pc = RC_ADDR(0x000173c2u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000173c6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00017148u);
    return;

L_173C6:
    /* 000173c6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000173c6u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_173C8:
    /* 000173c8   4  tst.w (fffffd4c,A4) */
    c->pc = RC_ADDR(0x000173c8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2b4u));
    rc_set_nzvc(c, t0, RC_W);

L_173CC:
    /* 000173cc   2  beq 00017400 */
    c->pc = RC_ADDR(0x000173ccu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_17400;

L_173CE:
    /* 000173ce   6  cmpi.w #b,(ffff83c8,A4) */
    c->pc = RC_ADDR(0x000173ceu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_cmp(c, RC_W, t0, 0x0000000bu);

L_173D4:
    /* 000173d4   2  bge 00017400 */
    c->pc = RC_ADDR(0x000173d4u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_17400;

L_173D6:
    /* 000173d6   4  move.w #f1,-(A7) */
    c->pc = RC_ADDR(0x000173d6u);
    rc_step(c, m);
    t0 = 0x000000f1u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_173DA:
    /* 000173da   4  jsr (ffff8086,A4) */
    c->pc = RC_ADDR(0x000173dau);
    rc_step(c, m);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x000173deu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021adcu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000711cu);
    return;

L_173DE:
    /* 000173de   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000173deu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_173E0:
    /* 000173e0   2  tst.w D0 */
    c->pc = RC_ADDR(0x000173e0u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_173E2:
    /* 000173e2   2  beq 00017400 */
    c->pc = RC_ADDR(0x000173e2u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_17400;

L_173E4:
    /* 000173e4   4  move.w #ec,-(A7) */
    c->pc = RC_ADDR(0x000173e4u);
    rc_step(c, m);
    t0 = 0x000000ecu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_173E8:
    /* 000173e8   4  jsr (ffff8080,A4) */
    c->pc = RC_ADDR(0x000173e8u);
    rc_step(c, m);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x000173ecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ad6u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000070cau);
    return;

L_173EC:
    /* 000173ec   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000173ecu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_173EE:
    /* 000173ee   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000173eeu);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_173F2:
    /* 000173f2   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x000173f2u);
    rc_step(c, m);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_173F6:
    /* 000173f6   4  pea (00017705) */
    c->pc = RC_ADDR(0x000173f6u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00017705u));

L_173FA:
    /* 000173fa   4  jsr (00017148) */
    c->pc = RC_ADDR(0x000173fau);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000173feu));
    rc_depth++;
    c->pc = RC_ADDR(0x00017148u);
    return;

L_173FE:
    /* 000173fe   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000173feu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_17400:
    /* 00017400   4  bra 0001734a */
    c->pc = RC_ADDR(0x00017400u);
    rc_step(c, m);
    rc_tick();
    goto L_1734A;

L_17404:
    /* 00017404   4  tst.w (1148,A4) */
    c->pc = RC_ADDR(0x00017404u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1148u));
    rc_set_nzvc(c, t0, RC_W);

L_17408:
    /* 00017408   2  beq 0001742e */
    c->pc = RC_ADDR(0x00017408u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1742E;

L_1740A:
    /* 0001740a   4  clr.w (1148,A4) */
    c->pc = RC_ADDR(0x0001740au);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x1148u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1740E:
    /* 0001740e   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0001740eu);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17412:
    /* 00017412   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x00017412u);
    rc_step(c, m);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17416:
    /* 00017416   4  pea (0001776f) */
    c->pc = RC_ADDR(0x00017416u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001776fu));

L_1741A:
    /* 0001741a   4  jsr (00017148) */
    c->pc = RC_ADDR(0x0001741au);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001741eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00017148u);
    return;

L_1741E:
    /* 0001741e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001741eu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_17420:
    /* 00017420   6  move.w #17,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x00017420u);
    rc_step(c, m);
    t0 = 0x00000017u;
    rc_wr16(c, m, (c->a[4] - 0x101cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17426:
    /* 00017426   4  jsr (000172da) */
    c->pc = RC_ADDR(0x00017426u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001742au));
    rc_depth++;
    c->pc = RC_ADDR(0x000172dau);
    return;

L_1742A:
    /* 0001742a   4  bra 0001734a */
    c->pc = RC_ADDR(0x0001742au);
    rc_step(c, m);
    rc_tick();
    goto L_1734A;

L_1742E:
    /* 0001742e   4  tst.w (fffffd64,A4) */
    c->pc = RC_ADDR(0x0001742eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x29cu));
    rc_set_nzvc(c, t0, RC_W);

L_17432:
    /* 00017432   2  bne 0001743c */
    c->pc = RC_ADDR(0x00017432u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1743C;

L_17434:
    /* 00017434   4  tst.w (fffffd68,A4) */
    c->pc = RC_ADDR(0x00017434u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x298u));
    rc_set_nzvc(c, t0, RC_W);

L_17438:
    /* 00017438   4  beq 000174de */
    c->pc = RC_ADDR(0x00017438u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_174DE;

L_1743C:
    /* 0001743c   4  clr.w (fffffd68,A4) */
    c->pc = RC_ADDR(0x0001743cu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x298u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17440:
    /* 00017440   4  clr.w (fffffd64,A4) */
    c->pc = RC_ADDR(0x00017440u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x29cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17444:
    /* 00017444   4  clr.w (aec,A4) */
    c->pc = RC_ADDR(0x00017444u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0xaecu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17448:
    /* 00017448   4  tst.w (fffffd68,A4) */
    c->pc = RC_ADDR(0x00017448u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x298u));
    rc_set_nzvc(c, t0, RC_W);

L_1744C:
    /* 0001744c   2  beq 00017462 */
    c->pc = RC_ADDR(0x0001744cu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_17462;

L_1744E:
    /* 0001744e   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0001744eu);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17452:
    /* 00017452   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x00017452u);
    rc_step(c, m);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17456:
    /* 00017456   4  pea (00017800) */
    c->pc = RC_ADDR(0x00017456u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00017800u));

L_1745A:
    /* 0001745a   4  jsr (00017148) */
    c->pc = RC_ADDR(0x0001745au);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001745eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00017148u);
    return;

L_1745E:
    /* 0001745e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001745eu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_17460:
    /* 00017460   2  bra 00017474 */
    c->pc = RC_ADDR(0x00017460u);
    rc_step(c, m);
    goto L_17474;

L_17462:
    /* 00017462   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00017462u);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17466:
    /* 00017466   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x00017466u);
    rc_step(c, m);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1746A:
    /* 0001746a   4  pea (00017854) */
    c->pc = RC_ADDR(0x0001746au);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00017854u));

L_1746E:
    /* 0001746e   4  jsr (00017148) */
    c->pc = RC_ADDR(0x0001746eu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00017472u));
    rc_depth++;
    c->pc = RC_ADDR(0x00017148u);
    return;

L_17472:
    /* 00017472   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00017472u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_17474:
    /* 00017474   6  cmpi.w #1,(fffffe3e,A4) */
    c->pc = RC_ADDR(0x00017474u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1c2u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1747A:
    /* 0001747a   2  bne 000174aa */
    c->pc = RC_ADDR(0x0001747au);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_174AA;

L_1747C:
    /* 0001747c   4  move.w #f2,-(A7) */
    c->pc = RC_ADDR(0x0001747cu);
    rc_step(c, m);
    t0 = 0x000000f2u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17480:
    /* 00017480   4  jsr (ffff8086,A4) */
    c->pc = RC_ADDR(0x00017480u);
    rc_step(c, m);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x00017484u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021adcu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000711cu);
    return;

L_17484:
    /* 00017484   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00017484u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_17486:
    /* 00017486   2  tst.w D0 */
    c->pc = RC_ADDR(0x00017486u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_17488:
    /* 00017488   2  beq 000174aa */
    c->pc = RC_ADDR(0x00017488u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_174AA;

L_1748A:
    /* 0001748a   4  move.w #ed,-(A7) */
    c->pc = RC_ADDR(0x0001748au);
    rc_step(c, m);
    t0 = 0x000000edu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1748E:
    /* 0001748e   4  jsr (ffff8080,A4) */
    c->pc = RC_ADDR(0x0001748eu);
    rc_step(c, m);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x00017492u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ad6u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000070cau);
    return;

L_17492:
    /* 00017492   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00017492u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_17494:
    /* 00017494   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00017494u);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17498:
    /* 00017498   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x00017498u);
    rc_step(c, m);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1749C:
    /* 0001749c   4  pea (0001789c) */
    c->pc = RC_ADDR(0x0001749cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001789cu));

L_174A0:
    /* 000174a0   4  jsr (00017148) */
    c->pc = RC_ADDR(0x000174a0u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000174a4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00017148u);
    return;

L_174A4:
    /* 000174a4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000174a4u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_174A6:
    /* 000174a6   4  addq.w #1,(fffffe3e,A4) */
    c->pc = RC_ADDR(0x000174a6u);
    rc_step(c, m);
    t3 = (c->a[4] - 0x1c2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_174AA:
    /* 000174aa   4  tst.w (fffffe3e,A4) */
    c->pc = RC_ADDR(0x000174aau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1c2u));
    rc_set_nzvc(c, t0, RC_W);

L_174AE:
    /* 000174ae   2  bne 000174de */
    c->pc = RC_ADDR(0x000174aeu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_174DE;

L_174B0:
    /* 000174b0   4  move.w #f0,-(A7) */
    c->pc = RC_ADDR(0x000174b0u);
    rc_step(c, m);
    t0 = 0x000000f0u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_174B4:
    /* 000174b4   4  jsr (ffff8086,A4) */
    c->pc = RC_ADDR(0x000174b4u);
    rc_step(c, m);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x000174b8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021adcu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000711cu);
    return;

L_174B8:
    /* 000174b8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000174b8u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_174BA:
    /* 000174ba   2  tst.w D0 */
    c->pc = RC_ADDR(0x000174bau);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_174BC:
    /* 000174bc   2  beq 000174de */
    c->pc = RC_ADDR(0x000174bcu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_174DE;

L_174BE:
    /* 000174be   4  move.w #eb,-(A7) */
    c->pc = RC_ADDR(0x000174beu);
    rc_step(c, m);
    t0 = 0x000000ebu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_174C2:
    /* 000174c2   4  jsr (ffff8080,A4) */
    c->pc = RC_ADDR(0x000174c2u);
    rc_step(c, m);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x000174c6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ad6u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000070cau);
    return;

L_174C6:
    /* 000174c6   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000174c6u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_174C8:
    /* 000174c8   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000174c8u);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_174CC:
    /* 000174cc   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x000174ccu);
    rc_step(c, m);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_174D0:
    /* 000174d0   4  pea (000178f7) */
    c->pc = RC_ADDR(0x000174d0u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000178f7u));

L_174D4:
    /* 000174d4   4  jsr (00017148) */
    c->pc = RC_ADDR(0x000174d4u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000174d8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00017148u);
    return;

L_174D8:
    /* 000174d8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000174d8u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_174DA:
    /* 000174da   4  addq.w #1,(fffffe3e,A4) */
    c->pc = RC_ADDR(0x000174dau);
    rc_step(c, m);
    t3 = (c->a[4] - 0x1c2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_174DE:
    /* 000174de   4  tst.w (1086,A4) */
    c->pc = RC_ADDR(0x000174deu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1086u));
    rc_set_nzvc(c, t0, RC_W);

L_174E2:
    /* 000174e2   2  beq 00017504 */
    c->pc = RC_ADDR(0x000174e2u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_17504;

L_174E4:
    /* 000174e4   4  clr.w (1086,A4) */
    c->pc = RC_ADDR(0x000174e4u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x1086u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_174E8:
    /* 000174e8   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000174e8u);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_174EC:
    /* 000174ec   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x000174ecu);
    rc_step(c, m);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_174F0:
    /* 000174f0   4  pea (0001794e) */
    c->pc = RC_ADDR(0x000174f0u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001794eu));

L_174F4:
    /* 000174f4   4  jsr (00017148) */
    c->pc = RC_ADDR(0x000174f4u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000174f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00017148u);
    return;

L_174F8:
    /* 000174f8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000174f8u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_174FA:
    /* 000174fa   4  move.w #c3,-(A7) */
    c->pc = RC_ADDR(0x000174fau);
    rc_step(c, m);
    t0 = 0x000000c3u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_174FE:
    /* 000174fe   4  jsr (ffff8044,A4) */
    c->pc = RC_ADDR(0x000174feu);
    rc_step(c, m);
    /* vector 11 */
    rc_push32(c, m, RC_ADDR(0x00017502u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a9au);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002c92u);
    return;

L_17502:
    /* 00017502   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00017502u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_17504:
    /* 00017504   4  tst.w (ffffb2a8,A4) */
    c->pc = RC_ADDR(0x00017504u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4d58u));
    rc_set_nzvc(c, t0, RC_W);

L_17508:
    /* 00017508   2  beq 0001752a */
    c->pc = RC_ADDR(0x00017508u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1752A;

L_1750A:
    /* 0001750a   4  clr.w (ffffb2a8,A4) */
    c->pc = RC_ADDR(0x0001750au);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x4d58u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1750E:
    /* 0001750e   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0001750eu);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17512:
    /* 00017512   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x00017512u);
    rc_step(c, m);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17516:
    /* 00017516   4  pea (000179a1) */
    c->pc = RC_ADDR(0x00017516u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000179a1u));

L_1751A:
    /* 0001751a   4  jsr (00017148) */
    c->pc = RC_ADDR(0x0001751au);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001751eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00017148u);
    return;

L_1751E:
    /* 0001751e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001751eu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_17520:
    /* 00017520   4  move.w #c4,-(A7) */
    c->pc = RC_ADDR(0x00017520u);
    rc_step(c, m);
    t0 = 0x000000c4u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17524:
    /* 00017524   4  jsr (ffff8044,A4) */
    c->pc = RC_ADDR(0x00017524u);
    rc_step(c, m);
    /* vector 11 */
    rc_push32(c, m, RC_ADDR(0x00017528u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a9au);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002c92u);
    return;

L_17528:
    /* 00017528   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00017528u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1752A:
    /* 0001752a   4  bra 0001734a */
    c->pc = RC_ADDR(0x0001752au);
    rc_step(c, m);
    rc_tick();
    goto L_1734A;

}
