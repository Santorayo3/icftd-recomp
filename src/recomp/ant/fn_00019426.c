/* fn_00019426 - 584 byte(s), 168 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00019426(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00019426u): goto L_19426;
    case RC_ADDR(0x00019428u): goto L_19428;
    case RC_ADDR(0x0001942cu): goto L_1942C;
    case RC_ADDR(0x00019430u): goto L_19430;
    case RC_ADDR(0x00019434u): goto L_19434;
    case RC_ADDR(0x00019438u): goto L_19438;
    case RC_ADDR(0x0001943cu): goto L_1943C;
    case RC_ADDR(0x00019440u): goto L_19440;
    case RC_ADDR(0x00019444u): goto L_19444;
    case RC_ADDR(0x0001944au): goto L_1944A;
    case RC_ADDR(0x0001944eu): goto L_1944E;
    case RC_ADDR(0x00019450u): goto L_19450;
    case RC_ADDR(0x00019454u): goto L_19454;
    case RC_ADDR(0x00019456u): goto L_19456;
    case RC_ADDR(0x0001945au): goto L_1945A;
    case RC_ADDR(0x00019460u): goto L_19460;
    case RC_ADDR(0x00019464u): goto L_19464;
    case RC_ADDR(0x00019468u): goto L_19468;
    case RC_ADDR(0x0001946cu): goto L_1946C;
    case RC_ADDR(0x00019470u): goto L_19470;
    case RC_ADDR(0x00019472u): goto L_19472;
    case RC_ADDR(0x00019474u): goto L_19474;
    case RC_ADDR(0x00019476u): goto L_19476;
    case RC_ADDR(0x00019478u): goto L_19478;
    case RC_ADDR(0x0001947au): goto L_1947A;
    case RC_ADDR(0x0001947eu): goto L_1947E;
    case RC_ADDR(0x00019480u): goto L_19480;
    case RC_ADDR(0x00019482u): goto L_19482;
    case RC_ADDR(0x00019484u): goto L_19484;
    case RC_ADDR(0x00019486u): goto L_19486;
    case RC_ADDR(0x0001948au): goto L_1948A;
    case RC_ADDR(0x0001948eu): goto L_1948E;
    case RC_ADDR(0x00019492u): goto L_19492;
    case RC_ADDR(0x00019496u): goto L_19496;
    case RC_ADDR(0x00019498u): goto L_19498;
    case RC_ADDR(0x0001949au): goto L_1949A;
    case RC_ADDR(0x0001949cu): goto L_1949C;
    case RC_ADDR(0x000194a0u): goto L_194A0;
    case RC_ADDR(0x000194a4u): goto L_194A4;
    case RC_ADDR(0x000194a8u): goto L_194A8;
    case RC_ADDR(0x000194acu): goto L_194AC;
    case RC_ADDR(0x000194b0u): goto L_194B0;
    case RC_ADDR(0x000194b4u): goto L_194B4;
    case RC_ADDR(0x000194bau): goto L_194BA;
    case RC_ADDR(0x000194bcu): goto L_194BC;
    case RC_ADDR(0x000194c0u): goto L_194C0;
    case RC_ADDR(0x000194c2u): goto L_194C2;
    case RC_ADDR(0x000194c6u): goto L_194C6;
    case RC_ADDR(0x000194cau): goto L_194CA;
    case RC_ADDR(0x000194ceu): goto L_194CE;
    case RC_ADDR(0x000194d0u): goto L_194D0;
    case RC_ADDR(0x000194d4u): goto L_194D4;
    case RC_ADDR(0x000194d8u): goto L_194D8;
    case RC_ADDR(0x000194dau): goto L_194DA;
    case RC_ADDR(0x000194e0u): goto L_194E0;
    case RC_ADDR(0x000194e6u): goto L_194E6;
    case RC_ADDR(0x000194eau): goto L_194EA;
    case RC_ADDR(0x000194eeu): goto L_194EE;
    case RC_ADDR(0x000194f2u): goto L_194F2;
    case RC_ADDR(0x000194f6u): goto L_194F6;
    case RC_ADDR(0x000194f8u): goto L_194F8;
    case RC_ADDR(0x000194fcu): goto L_194FC;
    case RC_ADDR(0x00019500u): goto L_19500;
    case RC_ADDR(0x00019504u): goto L_19504;
    case RC_ADDR(0x00019506u): goto L_19506;
    case RC_ADDR(0x00019508u): goto L_19508;
    case RC_ADDR(0x0001950cu): goto L_1950C;
    case RC_ADDR(0x00019512u): goto L_19512;
    case RC_ADDR(0x00019514u): goto L_19514;
    case RC_ADDR(0x00019518u): goto L_19518;
    case RC_ADDR(0x0001951eu): goto L_1951E;
    case RC_ADDR(0x00019520u): goto L_19520;
    case RC_ADDR(0x00019524u): goto L_19524;
    case RC_ADDR(0x00019526u): goto L_19526;
    case RC_ADDR(0x0001952au): goto L_1952A;
    case RC_ADDR(0x00019530u): goto L_19530;
    case RC_ADDR(0x00019532u): goto L_19532;
    case RC_ADDR(0x00019538u): goto L_19538;
    case RC_ADDR(0x0001953eu): goto L_1953E;
    case RC_ADDR(0x00019542u): goto L_19542;
    case RC_ADDR(0x00019546u): goto L_19546;
    case RC_ADDR(0x0001954au): goto L_1954A;
    case RC_ADDR(0x0001954cu): goto L_1954C;
    case RC_ADDR(0x00019550u): goto L_19550;
    case RC_ADDR(0x00019552u): goto L_19552;
    case RC_ADDR(0x00019554u): goto L_19554;
    case RC_ADDR(0x00019558u): goto L_19558;
    case RC_ADDR(0x0001955cu): goto L_1955C;
    case RC_ADDR(0x00019560u): goto L_19560;
    case RC_ADDR(0x00019562u): goto L_19562;
    case RC_ADDR(0x00019564u): goto L_19564;
    case RC_ADDR(0x00019568u): goto L_19568;
    case RC_ADDR(0x0001956au): goto L_1956A;
    case RC_ADDR(0x0001956cu): goto L_1956C;
    case RC_ADDR(0x00019570u): goto L_19570;
    case RC_ADDR(0x00019572u): goto L_19572;
    case RC_ADDR(0x00019574u): goto L_19574;
    case RC_ADDR(0x00019576u): goto L_19576;
    case RC_ADDR(0x00019578u): goto L_19578;
    case RC_ADDR(0x0001957eu): goto L_1957E;
    case RC_ADDR(0x00019580u): goto L_19580;
    case RC_ADDR(0x00019584u): goto L_19584;
    case RC_ADDR(0x00019588u): goto L_19588;
    case RC_ADDR(0x0001958cu): goto L_1958C;
    case RC_ADDR(0x0001958eu): goto L_1958E;
    case RC_ADDR(0x00019592u): goto L_19592;
    case RC_ADDR(0x00019596u): goto L_19596;
    case RC_ADDR(0x0001959au): goto L_1959A;
    case RC_ADDR(0x0001959cu): goto L_1959C;
    case RC_ADDR(0x000195a0u): goto L_195A0;
    case RC_ADDR(0x000195a4u): goto L_195A4;
    case RC_ADDR(0x000195a8u): goto L_195A8;
    case RC_ADDR(0x000195acu): goto L_195AC;
    case RC_ADDR(0x000195aeu): goto L_195AE;
    case RC_ADDR(0x000195b2u): goto L_195B2;
    case RC_ADDR(0x000195b6u): goto L_195B6;
    case RC_ADDR(0x000195bau): goto L_195BA;
    case RC_ADDR(0x000195bcu): goto L_195BC;
    case RC_ADDR(0x000195c0u): goto L_195C0;
    case RC_ADDR(0x000195c4u): goto L_195C4;
    case RC_ADDR(0x000195c8u): goto L_195C8;
    case RC_ADDR(0x000195ccu): goto L_195CC;
    case RC_ADDR(0x000195ceu): goto L_195CE;
    case RC_ADDR(0x000195d2u): goto L_195D2;
    case RC_ADDR(0x000195d6u): goto L_195D6;
    case RC_ADDR(0x000195dau): goto L_195DA;
    case RC_ADDR(0x000195dcu): goto L_195DC;
    case RC_ADDR(0x000195e0u): goto L_195E0;
    case RC_ADDR(0x000195e4u): goto L_195E4;
    case RC_ADDR(0x000195eau): goto L_195EA;
    case RC_ADDR(0x000195ecu): goto L_195EC;
    case RC_ADDR(0x000195eeu): goto L_195EE;
    case RC_ADDR(0x000195f2u): goto L_195F2;
    case RC_ADDR(0x000195f6u): goto L_195F6;
    case RC_ADDR(0x000195f8u): goto L_195F8;
    case RC_ADDR(0x000195fcu): goto L_195FC;
    case RC_ADDR(0x000195feu): goto L_195FE;
    case RC_ADDR(0x00019602u): goto L_19602;
    case RC_ADDR(0x00019606u): goto L_19606;
    case RC_ADDR(0x0001960au): goto L_1960A;
    case RC_ADDR(0x0001960cu): goto L_1960C;
    case RC_ADDR(0x00019610u): goto L_19610;
    case RC_ADDR(0x00019614u): goto L_19614;
    case RC_ADDR(0x00019618u): goto L_19618;
    case RC_ADDR(0x0001961cu): goto L_1961C;
    case RC_ADDR(0x0001961eu): goto L_1961E;
    case RC_ADDR(0x00019620u): goto L_19620;
    case RC_ADDR(0x00019624u): goto L_19624;
    case RC_ADDR(0x00019626u): goto L_19626;
    case RC_ADDR(0x0001962au): goto L_1962A;
    case RC_ADDR(0x0001962eu): goto L_1962E;
    case RC_ADDR(0x00019632u): goto L_19632;
    case RC_ADDR(0x00019636u): goto L_19636;
    case RC_ADDR(0x0001963au): goto L_1963A;
    case RC_ADDR(0x0001963eu): goto L_1963E;
    case RC_ADDR(0x00019640u): goto L_19640;
    case RC_ADDR(0x00019644u): goto L_19644;
    case RC_ADDR(0x00019648u): goto L_19648;
    case RC_ADDR(0x0001964cu): goto L_1964C;
    case RC_ADDR(0x00019650u): goto L_19650;
    case RC_ADDR(0x00019654u): goto L_19654;
    case RC_ADDR(0x00019656u): goto L_19656;
    case RC_ADDR(0x0001965au): goto L_1965A;
    case RC_ADDR(0x0001965eu): goto L_1965E;
    case RC_ADDR(0x00019662u): goto L_19662;
    case RC_ADDR(0x00019666u): goto L_19666;
    case RC_ADDR(0x0001966au): goto L_1966A;
    case RC_ADDR(0x0001966cu): goto L_1966C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_19426:
    /* 00019426   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x00019426u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_19428:
    /* 00019428   4  tst.w (fffffa32,A4) */
    c->pc = RC_ADDR(0x00019428u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5ceu));
    rc_set_nzvc(c, t0, RC_W);

L_1942C:
    /* 0001942c   4  beq 00019662 */
    c->pc = RC_ADDR(0x0001942cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19662;

L_19430:
    /* 00019430   4  jsr (000189d2) */
    c->pc = RC_ADDR(0x00019430u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00019434u));
    rc_depth++;
    c->pc = RC_ADDR(0x000189d2u);
    return;

L_19434:
    /* 00019434   4  move.w (1144,A4),D4 */
    c->pc = RC_ADDR(0x00019434u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1144u));
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19438:
    /* 00019438   4  clr.w (1dc2,A4) */
    c->pc = RC_ADDR(0x00019438u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1dc2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1943C:
    /* 0001943c   4  clr.w (1dc4,A4) */
    c->pc = RC_ADDR(0x0001943cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1dc4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19440:
    /* 00019440   4  movea.l (140c,A4),A0 */
    c->pc = RC_ADDR(0x00019440u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x140cu));
    c->a[0] = t0;

L_19444:
    /* 00019444   6  adda.l #1e,A0 */
    c->pc = RC_ADDR(0x00019444u);
    rc_step(c, m, 16);
    t0 = 0x0000001eu;
    c->a[0] += t0;

L_1944A:
    /* 0001944a   4  move.w (fffffa26,A4),D0 */
    c->pc = RC_ADDR(0x0001944au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5dau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1944E:
    /* 0001944e   2  lsl.w #4,D0 */
    c->pc = RC_ADDR(0x0001944eu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_19450:
    /* 00019450   4  or.w (fffffa26,A4),D0 */
    c->pc = RC_ADDR(0x00019450u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5dau));
    t2 = t0 | rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_19454:
    /* 00019454   2  move.w D0,(A0) */
    c->pc = RC_ADDR(0x00019454u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19456:
    /* 00019456   4  movea.l (140c,A4),A0 */
    c->pc = RC_ADDR(0x00019456u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x140cu));
    c->a[0] = t0;

L_1945A:
    /* 0001945a   6  adda.l #2a,A0 */
    c->pc = RC_ADDR(0x0001945au);
    rc_step(c, m, 16);
    t0 = 0x0000002au;
    c->a[0] += t0;

L_19460:
    /* 00019460   4  lea (1816,A4),A1 */
    c->pc = RC_ADDR(0x00019460u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1816u);

L_19464:
    /* 00019464   4  lea (1802,A4),A2 */
    c->pc = RC_ADDR(0x00019464u);
    rc_step(c, m, 8);
    c->a[2] = (c->a[4] + 0x1802u);

L_19468:
    /* 00019468   4  move.w #4,D0 */
    c->pc = RC_ADDR(0x00019468u);
    rc_step(c, m, 8);
    t0 = 0x00000004u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1946C:
    /* 0001946c   4  move.l (fffffa2a,A4),D1 */
    c->pc = RC_ADDR(0x0001946cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5d6u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19470:
    /* 00019470   2  add.l D1,(A2) */
    c->pc = RC_ADDR(0x00019470u);
    rc_step(c, m, 20);
    t3 = c->a[2];
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 1, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_19472:
    /* 00019472   2  add.l D1,(A1) */
    c->pc = RC_ADDR(0x00019472u);
    rc_step(c, m, 20);
    t3 = c->a[1];
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 1, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_19474:
    /* 00019474   2  move.l (A2),D1 */
    c->pc = RC_ADDR(0x00019474u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[2]);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19476:
    /* 00019476   2  move.l (A1),D2 */
    c->pc = RC_ADDR(0x00019476u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[1]);
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19478:
    /* 00019478   2  move.l D1,(A1)+ */
    c->pc = RC_ADDR(0x00019478u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_L);
    t3 = c->a[1];
    c->a[1] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1947A:
    /* 0001947a   4  move.w D1,(4,A0) */
    c->pc = RC_ADDR(0x0001947au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1947E:
    /* 0001947e   2  swap D1 */
    c->pc = RC_ADDR(0x0001947eu);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_19480:
    /* 00019480   2  move.w D1,(A0) */
    c->pc = RC_ADDR(0x00019480u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19482:
    /* 00019482   2  move.l D2,(A2)+ */
    c->pc = RC_ADDR(0x00019482u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 2, RC_L);
    t3 = c->a[2];
    c->a[2] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19484:
    /* 00019484   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x00019484u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_19486:
    /* 00019486   4  dbf D0,0001946c */
    c->pc = RC_ADDR(0x00019486u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1946C; }
    }

L_1948A:
    /* 0001948a   4  lea (fffffae2,A4),A0 */
    c->pc = RC_ADDR(0x0001948au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x51eu);

L_1948E:
    /* 0001948e   4  lea (ffffface,A4),A1 */
    c->pc = RC_ADDR(0x0001948eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x532u);

L_19492:
    /* 00019492   4  move.w #4,D0 */
    c->pc = RC_ADDR(0x00019492u);
    rc_step(c, m, 8);
    t0 = 0x00000004u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19496:
    /* 00019496   2  move.l (A0),D1 */
    c->pc = RC_ADDR(0x00019496u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19498:
    /* 00019498   2  move.l (A1),(A0)+ */
    c->pc = RC_ADDR(0x00019498u);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[1]);
    t3 = c->a[0];
    c->a[0] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1949A:
    /* 0001949a   2  move.l D1,(A1)+ */
    c->pc = RC_ADDR(0x0001949au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_L);
    t3 = c->a[1];
    c->a[1] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1949C:
    /* 0001949c   4  dbf D0,00019496 */
    c->pc = RC_ADDR(0x0001949cu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_19496; }
    }

L_194A0:
    /* 000194a0   4  clr.l (fffffa2a,A4) */
    c->pc = RC_ADDR(0x000194a0u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x5d6u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_194A4:
    /* 000194a4   4  tst.w (700,A4) */
    c->pc = RC_ADDR(0x000194a4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x700u));
    rc_set_nzvc(c, t0, RC_W);

L_194A8:
    /* 000194a8   4  beq 00019662 */
    c->pc = RC_ADDR(0x000194a8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19662;

L_194AC:
    /* 000194ac   4  move.w (fffffa2e,A4),D0 */
    c->pc = RC_ADDR(0x000194acu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5d2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_194B0:
    /* 000194b0   4  move.w (fffffa30,A4),D1 */
    c->pc = RC_ADDR(0x000194b0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5d0u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_194B4:
    /* 000194b4   6  btst #0,(701,A4) */
    c->pc = RC_ADDR(0x000194b4u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x701u);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_194BA:
    /* 000194ba   2  beq 0001950c */
    c->pc = RC_ADDR(0x000194bau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1950C;

L_194BC:
    /* 000194bc   4  sub.w D0,(fffffa26,A4) */
    c->pc = RC_ADDR(0x000194bcu);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x5dau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_194C0:
    /* 000194c0   2  bpl 0001950c */
    c->pc = RC_ADDR(0x000194c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_1950C;

L_194C2:
    /* 000194c2   4  addq.w #1,(1148,A4) */
    c->pc = RC_ADDR(0x000194c2u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1148u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_194C6:
    /* 000194c6   4  move.w (1148,A4),D2 */
    c->pc = RC_ADDR(0x000194c6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1148u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_194CA:
    /* 000194ca   4  cmp.w (fffffa98,A4),D2 */
    c->pc = RC_ADDR(0x000194cau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x568u));
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_194CE:
    /* 000194ce   2  bne 000194da */
    c->pc = RC_ADDR(0x000194ceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_194DA;

L_194D0:
    /* 000194d0   4  subq.w #1,(1148,A4) */
    c->pc = RC_ADDR(0x000194d0u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1148u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_194D4:
    /* 000194d4   4  clr.w (fffffa26,A4) */
    c->pc = RC_ADDR(0x000194d4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5dau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_194D8:
    /* 000194d8   2  bra 0001950c */
    c->pc = RC_ADDR(0x000194d8u);
    rc_step(c, m, 10);
    goto L_1950C;

L_194DA:
    /* 000194da   6  addi.w #10,(fffffa26,A4) */
    c->pc = RC_ADDR(0x000194dau);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x5dau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000010u;
    rc_flags_add(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_194E0:
    /* 000194e0   6  move.w #fff0,(1dc2,A4) */
    c->pc = RC_ADDR(0x000194e0u);
    rc_step(c, m, 16);
    t0 = 0x0000fff0u;
    rc_wr16(c, m, (c->a[4] + 0x1dc2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_194E6:
    /* 000194e6   4  addq.w #2,(fffffa7a,A4) */
    c->pc = RC_ADDR(0x000194e6u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x586u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_194EA:
    /* 000194ea   4  addq.l #2,(fffffa84,A4) */
    c->pc = RC_ADDR(0x000194eau);
    rc_step(c, m, 24);
    t3 = (c->a[4] - 0x57cu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_194EE:
    /* 000194ee   4  move.w (fffffa7a,A4),D2 */
    c->pc = RC_ADDR(0x000194eeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x586u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_194F2:
    /* 000194f2   4  cmp.w (fffffa94,A4),D2 */
    c->pc = RC_ADDR(0x000194f2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x56cu));
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_194F6:
    /* 000194f6   2  bne 0001950c */
    c->pc = RC_ADDR(0x000194f6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1950C;

L_194F8:
    /* 000194f8   4  clr.w (fffffa7a,A4) */
    c->pc = RC_ADDR(0x000194f8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x586u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_194FC:
    /* 000194fc   4  clr.l (fffffa84,A4) */
    c->pc = RC_ADDR(0x000194fcu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x57cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_19500:
    /* 00019500   4  move.w (fffffa9a,A4),D2 */
    c->pc = RC_ADDR(0x00019500u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x566u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19504:
    /* 00019504   2  lsl.w #1,D2 */
    c->pc = RC_ADDR(0x00019504u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W));

L_19506:
    /* 00019506   2  ext.l D2 */
    c->pc = RC_ADDR(0x00019506u);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_19508:
    /* 00019508   4  add.l D2,(fffffa8c,A4) */
    c->pc = RC_ADDR(0x00019508u);
    rc_step(c, m, 24);
    t3 = (c->a[4] - 0x574u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 2, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 2, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1950C:
    /* 0001950c   6  btst #1,(701,A4) */
    c->pc = RC_ADDR(0x0001950cu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x701u);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_19512:
    /* 00019512   2  beq 00019568 */
    c->pc = RC_ADDR(0x00019512u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19568;

L_19514:
    /* 00019514   4  add.w D0,(fffffa26,A4) */
    c->pc = RC_ADDR(0x00019514u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x5dau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_19518:
    /* 00019518   6  cmpi.w #10,(fffffa26,A4) */
    c->pc = RC_ADDR(0x00019518u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5dau));
    rc_cmp(c, RC_W, t0, 0x00000010u);

L_1951E:
    /* 0001951e   2  blt 00019568 */
    c->pc = RC_ADDR(0x0001951eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_19568;

L_19520:
    /* 00019520   4  subq.w #1,(1148,A4) */
    c->pc = RC_ADDR(0x00019520u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1148u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_19524:
    /* 00019524   2  bpl 00019532 */
    c->pc = RC_ADDR(0x00019524u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_19532;

L_19526:
    /* 00019526   4  clr.w (1148,A4) */
    c->pc = RC_ADDR(0x00019526u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1148u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1952A:
    /* 0001952a   6  move.w #f,(fffffa26,A4) */
    c->pc = RC_ADDR(0x0001952au);
    rc_step(c, m, 16);
    t0 = 0x0000000fu;
    rc_wr16(c, m, (c->a[4] - 0x5dau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19530:
    /* 00019530   2  bra 00019568 */
    c->pc = RC_ADDR(0x00019530u);
    rc_step(c, m, 10);
    goto L_19568;

L_19532:
    /* 00019532   6  subi.w #10,(fffffa26,A4) */
    c->pc = RC_ADDR(0x00019532u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x5dau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000010u;
    rc_flags_sub(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_19538:
    /* 00019538   6  move.w #10,(1dc2,A4) */
    c->pc = RC_ADDR(0x00019538u);
    rc_step(c, m, 16);
    t0 = 0x00000010u;
    rc_wr16(c, m, (c->a[4] + 0x1dc2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1953E:
    /* 0001953e   4  subq.w #2,(fffffa7a,A4) */
    c->pc = RC_ADDR(0x0001953eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x586u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_19542:
    /* 00019542   4  subq.l #2,(fffffa84,A4) */
    c->pc = RC_ADDR(0x00019542u);
    rc_step(c, m, 24);
    t3 = (c->a[4] - 0x57cu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_19546:
    /* 00019546   4  tst.w (fffffa7a,A4) */
    c->pc = RC_ADDR(0x00019546u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x586u));
    rc_set_nzvc(c, t0, RC_W);

L_1954A:
    /* 0001954a   2  bpl 00019568 */
    c->pc = RC_ADDR(0x0001954au);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_19568;

L_1954C:
    /* 0001954c   4  move.w (fffffa94,A4),D2 */
    c->pc = RC_ADDR(0x0001954cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x56cu));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19550:
    /* 00019550   2  ext.l D2 */
    c->pc = RC_ADDR(0x00019550u);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_19552:
    /* 00019552   2  subq.w #2,D2 */
    c->pc = RC_ADDR(0x00019552u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_19554:
    /* 00019554   4  move.w D2,(fffffa7a,A4) */
    c->pc = RC_ADDR(0x00019554u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x586u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19558:
    /* 00019558   4  move.l D2,(fffffa84,A4) */
    c->pc = RC_ADDR(0x00019558u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x57cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1955C:
    /* 0001955c   4  move.w (fffffa9a,A4),D2 */
    c->pc = RC_ADDR(0x0001955cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x566u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19560:
    /* 00019560   2  lsl.w #1,D2 */
    c->pc = RC_ADDR(0x00019560u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W));

L_19562:
    /* 00019562   2  ext.l D2 */
    c->pc = RC_ADDR(0x00019562u);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_19564:
    /* 00019564   4  sub.l D2,(fffffa8c,A4) */
    c->pc = RC_ADDR(0x00019564u);
    rc_step(c, m, 24);
    t3 = (c->a[4] - 0x574u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - rc_d_get(c, 2, RC_L);
    rc_flags_sub(c, RC_L, t1, rc_d_get(c, 2, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_19568:
    /* 00019568   2  clr.l D0 */
    c->pc = RC_ADDR(0x00019568u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1956A:
    /* 0001956a   2  move.w D1,D0 */
    c->pc = RC_ADDR(0x0001956au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1956C:
    /* 0001956c   4  move.w (fffffa76,A4),D2 */
    c->pc = RC_ADDR(0x0001956cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x58au));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19570:
    /* 00019570   2  ext.l D2 */
    c->pc = RC_ADDR(0x00019570u);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_19572:
    /* 00019572   2  mulu.w D2,D0 */
    c->pc = RC_ADDR(0x00019572u);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 2, RC_W);
    rc_mulu(c, 0, t0);

L_19574:
    /* 00019574   2  mulu.w D4,D2 */
    c->pc = RC_ADDR(0x00019574u);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 4, RC_W);
    rc_mulu(c, 2, t0);

L_19576:
    /* 00019576   2  sub.w D0,D2 */
    c->pc = RC_ADDR(0x00019576u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_19578:
    /* 00019578   6  btst #2,(701,A4) */
    c->pc = RC_ADDR(0x00019578u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x701u);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1957E:
    /* 0001957e   2  beq 000195e4 */
    c->pc = RC_ADDR(0x0001957eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_195E4;

L_19580:
    /* 00019580   4  move.l D0,(fffffa2a,A4) */
    c->pc = RC_ADDR(0x00019580u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x5d6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_19584:
    /* 00019584   4  add.w D1,(fffffa28,A4) */
    c->pc = RC_ADDR(0x00019584u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x5d8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_19588:
    /* 00019588   4  cmp.w (fffffa28,A4),D4 */
    c->pc = RC_ADDR(0x00019588u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5d8u));
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1958C:
    /* 0001958c   2  bgt 000195e4 */
    c->pc = RC_ADDR(0x0001958cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_195E4;

L_1958E:
    /* 0001958e   4  addq.w #1,(114a,A4) */
    c->pc = RC_ADDR(0x0001958eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x114au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_19592:
    /* 00019592   4  move.w (114a,A4),D3 */
    c->pc = RC_ADDR(0x00019592u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x114au));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19596:
    /* 00019596   4  cmp.w (1dc6,A4),D3 */
    c->pc = RC_ADDR(0x00019596u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1dc6u));
    t1 = rc_d_get(c, 3, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1959A:
    /* 0001959a   2  bne 000195ae */
    c->pc = RC_ADDR(0x0001959au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_195AE;

L_1959C:
    /* 0001959c   4  clr.l (fffffa2a,A4) */
    c->pc = RC_ADDR(0x0001959cu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x5d6u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_195A0:
    /* 000195a0   4  subq.w #1,(114a,A4) */
    c->pc = RC_ADDR(0x000195a0u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x114au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_195A4:
    /* 000195a4   4  move.w D4,(fffffa28,A4) */
    c->pc = RC_ADDR(0x000195a4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x5d8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_195A8:
    /* 000195a8   4  subq.w #1,(fffffa28,A4) */
    c->pc = RC_ADDR(0x000195a8u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x5d8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_195AC:
    /* 000195ac   2  bra 000195e4 */
    c->pc = RC_ADDR(0x000195acu);
    rc_step(c, m, 10);
    goto L_195E4;

L_195AE:
    /* 000195ae   4  sub.w D4,(fffffa28,A4) */
    c->pc = RC_ADDR(0x000195aeu);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x5d8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 4, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 4, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_195B2:
    /* 000195b2   4  move.w D4,(1dc4,A4) */
    c->pc = RC_ADDR(0x000195b2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1dc4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_195B6:
    /* 000195b6   4  neg.w (1dc4,A4) */
    c->pc = RC_ADDR(0x000195b6u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1dc4u);
    t1 = rc_rd16(c, m, t3);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_wr16(c, m, t3, t2);

L_195BA:
    /* 000195ba   2  neg.l D2 */
    c->pc = RC_ADDR(0x000195bau);
    rc_step(c, m, 6);
    t1 = rc_d_get(c, 2, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_L, t2);

L_195BC:
    /* 000195bc   4  move.l D2,(fffffa2a,A4) */
    c->pc = RC_ADDR(0x000195bcu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x5d6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_195C0:
    /* 000195c0   4  add.w D4,(fffffa7e,A4) */
    c->pc = RC_ADDR(0x000195c0u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x582u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 4, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 4, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_195C4:
    /* 000195c4   4  move.w (fffffa7e,A4),D2 */
    c->pc = RC_ADDR(0x000195c4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x582u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_195C8:
    /* 000195c8   4  cmp.w (fffffa96,A4),D2 */
    c->pc = RC_ADDR(0x000195c8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x56au));
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_195CC:
    /* 000195cc   2  bne 000195dc */
    c->pc = RC_ADDR(0x000195ccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_195DC;

L_195CE:
    /* 000195ce   4  clr.l (fffffa88,A4) */
    c->pc = RC_ADDR(0x000195ceu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x578u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_195D2:
    /* 000195d2   4  clr.w (fffffa7e,A4) */
    c->pc = RC_ADDR(0x000195d2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x582u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_195D6:
    /* 000195d6   4  addq.l #2,(fffffa8c,A4) */
    c->pc = RC_ADDR(0x000195d6u);
    rc_step(c, m, 24);
    t3 = (c->a[4] - 0x574u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_195DA:
    /* 000195da   2  bra 000195e4 */
    c->pc = RC_ADDR(0x000195dau);
    rc_step(c, m, 10);
    goto L_195E4;

L_195DC:
    /* 000195dc   4  mulu.w (fffffa9c,A4),D2 */
    c->pc = RC_ADDR(0x000195dcu);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x564u));
    rc_mulu(c, 2, t0);

L_195E0:
    /* 000195e0   4  move.l D2,(fffffa88,A4) */
    c->pc = RC_ADDR(0x000195e0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x578u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_195E4:
    /* 000195e4   6  btst #3,(701,A4) */
    c->pc = RC_ADDR(0x000195e4u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x701u);
    t4 = 0x00000003u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_195EA:
    /* 000195ea   2  beq 00019636 */
    c->pc = RC_ADDR(0x000195eau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19636;

L_195EC:
    /* 000195ec   2  neg.l D0 */
    c->pc = RC_ADDR(0x000195ecu);
    rc_step(c, m, 6);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_195EE:
    /* 000195ee   4  move.l D0,(fffffa2a,A4) */
    c->pc = RC_ADDR(0x000195eeu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x5d6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_195F2:
    /* 000195f2   4  sub.w D1,(fffffa28,A4) */
    c->pc = RC_ADDR(0x000195f2u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x5d8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 1, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_195F6:
    /* 000195f6   2  bpl 00019636 */
    c->pc = RC_ADDR(0x000195f6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_19636;

L_195F8:
    /* 000195f8   4  subq.w #1,(114a,A4) */
    c->pc = RC_ADDR(0x000195f8u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x114au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_195FC:
    /* 000195fc   2  bpl 0001960c */
    c->pc = RC_ADDR(0x000195fcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_1960C;

L_195FE:
    /* 000195fe   4  clr.w (fffffa28,A4) */
    c->pc = RC_ADDR(0x000195feu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5d8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19602:
    /* 00019602   4  clr.w (114a,A4) */
    c->pc = RC_ADDR(0x00019602u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x114au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19606:
    /* 00019606   4  clr.l (fffffa2a,A4) */
    c->pc = RC_ADDR(0x00019606u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x5d6u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1960A:
    /* 0001960a   2  bra 00019636 */
    c->pc = RC_ADDR(0x0001960au);
    rc_step(c, m, 10);
    goto L_19636;

L_1960C:
    /* 0001960c   4  add.w D4,(fffffa28,A4) */
    c->pc = RC_ADDR(0x0001960cu);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x5d8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 4, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 4, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_19610:
    /* 00019610   4  move.w D4,(1dc4,A4) */
    c->pc = RC_ADDR(0x00019610u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1dc4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19614:
    /* 00019614   4  move.l D2,(fffffa2a,A4) */
    c->pc = RC_ADDR(0x00019614u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x5d6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_19618:
    /* 00019618   4  move.w (fffffa7e,A4),D2 */
    c->pc = RC_ADDR(0x00019618u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x582u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1961C:
    /* 0001961c   2  sub.w D4,D2 */
    c->pc = RC_ADDR(0x0001961cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_1961E:
    /* 0001961e   2  bpl 0001962a */
    c->pc = RC_ADDR(0x0001961eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_1962A;

L_19620:
    /* 00019620   4  move.w (fffffa96,A4),D2 */
    c->pc = RC_ADDR(0x00019620u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x56au));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19624:
    /* 00019624   2  sub.w D4,D2 */
    c->pc = RC_ADDR(0x00019624u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_19626:
    /* 00019626   4  subq.l #2,(fffffa8c,A4) */
    c->pc = RC_ADDR(0x00019626u);
    rc_step(c, m, 24);
    t3 = (c->a[4] - 0x574u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1962A:
    /* 0001962a   4  move.w D2,(fffffa7e,A4) */
    c->pc = RC_ADDR(0x0001962au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x582u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1962E:
    /* 0001962e   4  mulu.w (fffffa9c,A4),D2 */
    c->pc = RC_ADDR(0x0001962eu);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x564u));
    rc_mulu(c, 2, t0);

L_19632:
    /* 00019632   4  move.l D2,(fffffa88,A4) */
    c->pc = RC_ADDR(0x00019632u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x578u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_19636:
    /* 00019636   4  clr.w (fffffa7c,A4) */
    c->pc = RC_ADDR(0x00019636u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x584u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1963A:
    /* 0001963a   4  tst.w (fffffa7a,A4) */
    c->pc = RC_ADDR(0x0001963au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x586u));
    rc_set_nzvc(c, t0, RC_W);

L_1963E:
    /* 0001963e   2  beq 0001964c */
    c->pc = RC_ADDR(0x0001963eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1964C;

L_19640:
    /* 00019640   4  move.w (fffffa94,A4),D0 */
    c->pc = RC_ADDR(0x00019640u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x56cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19644:
    /* 00019644   4  sub.w (fffffa7a,A4),D0 */
    c->pc = RC_ADDR(0x00019644u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x586u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_19648:
    /* 00019648   4  move.w D0,(fffffa7c,A4) */
    c->pc = RC_ADDR(0x00019648u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x584u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1964C:
    /* 0001964c   4  clr.w (fffffa80,A4) */
    c->pc = RC_ADDR(0x0001964cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x580u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19650:
    /* 00019650   4  tst.w (fffffa7e,A4) */
    c->pc = RC_ADDR(0x00019650u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x582u));
    rc_set_nzvc(c, t0, RC_W);

L_19654:
    /* 00019654   2  beq 00019662 */
    c->pc = RC_ADDR(0x00019654u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19662;

L_19656:
    /* 00019656   4  move.w (fffffa96,A4),D0 */
    c->pc = RC_ADDR(0x00019656u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x56au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1965A:
    /* 0001965a   4  sub.w (fffffa7e,A4),D0 */
    c->pc = RC_ADDR(0x0001965au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x582u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1965E:
    /* 0001965e   4  move.w D0,(fffffa80,A4) */
    c->pc = RC_ADDR(0x0001965eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x580u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19662:
    /* 00019662   4  clr.w (fffffa32,A4) */
    c->pc = RC_ADDR(0x00019662u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5ceu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19666:
    /* 00019666   4  clr.w (14ee,A4) */
    c->pc = RC_ADDR(0x00019666u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x14eeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1966A:
    /* 0001966a   2  move.l (A7)+,D4 */
    c->pc = RC_ADDR(0x0001966au);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1966C:
    /* 0001966c   2  rts */
    c->pc = RC_ADDR(0x0001966cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
