/* fn_00013532 - 438 byte(s), 111 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00013532(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00013532u): goto L_13532;
    case RC_ADDR(0x00013536u): goto L_13536;
    case RC_ADDR(0x0001353au): goto L_1353A;
    case RC_ADDR(0x0001353eu): goto L_1353E;
    case RC_ADDR(0x00013542u): goto L_13542;
    case RC_ADDR(0x00013548u): goto L_13548;
    case RC_ADDR(0x0001354cu): goto L_1354C;
    case RC_ADDR(0x0001354eu): goto L_1354E;
    case RC_ADDR(0x00013552u): goto L_13552;
    case RC_ADDR(0x00013554u): goto L_13554;
    case RC_ADDR(0x00013558u): goto L_13558;
    case RC_ADDR(0x0001355eu): goto L_1355E;
    case RC_ADDR(0x00013562u): goto L_13562;
    case RC_ADDR(0x00013566u): goto L_13566;
    case RC_ADDR(0x0001356au): goto L_1356A;
    case RC_ADDR(0x0001356eu): goto L_1356E;
    case RC_ADDR(0x00013570u): goto L_13570;
    case RC_ADDR(0x00013572u): goto L_13572;
    case RC_ADDR(0x00013574u): goto L_13574;
    case RC_ADDR(0x00013576u): goto L_13576;
    case RC_ADDR(0x00013578u): goto L_13578;
    case RC_ADDR(0x0001357cu): goto L_1357C;
    case RC_ADDR(0x0001357eu): goto L_1357E;
    case RC_ADDR(0x00013580u): goto L_13580;
    case RC_ADDR(0x00013582u): goto L_13582;
    case RC_ADDR(0x00013584u): goto L_13584;
    case RC_ADDR(0x00013588u): goto L_13588;
    case RC_ADDR(0x0001358cu): goto L_1358C;
    case RC_ADDR(0x00013590u): goto L_13590;
    case RC_ADDR(0x00013594u): goto L_13594;
    case RC_ADDR(0x00013596u): goto L_13596;
    case RC_ADDR(0x00013598u): goto L_13598;
    case RC_ADDR(0x0001359au): goto L_1359A;
    case RC_ADDR(0x0001359eu): goto L_1359E;
    case RC_ADDR(0x000135a2u): goto L_135A2;
    case RC_ADDR(0x000135a6u): goto L_135A6;
    case RC_ADDR(0x000135aau): goto L_135AA;
    case RC_ADDR(0x000135aeu): goto L_135AE;
    case RC_ADDR(0x000135b2u): goto L_135B2;
    case RC_ADDR(0x000135b8u): goto L_135B8;
    case RC_ADDR(0x000135bau): goto L_135BA;
    case RC_ADDR(0x000135beu): goto L_135BE;
    case RC_ADDR(0x000135c0u): goto L_135C0;
    case RC_ADDR(0x000135c6u): goto L_135C6;
    case RC_ADDR(0x000135ccu): goto L_135CC;
    case RC_ADDR(0x000135d0u): goto L_135D0;
    case RC_ADDR(0x000135d6u): goto L_135D6;
    case RC_ADDR(0x000135dcu): goto L_135DC;
    case RC_ADDR(0x000135deu): goto L_135DE;
    case RC_ADDR(0x000135e4u): goto L_135E4;
    case RC_ADDR(0x000135eau): goto L_135EA;
    case RC_ADDR(0x000135ecu): goto L_135EC;
    case RC_ADDR(0x000135f0u): goto L_135F0;
    case RC_ADDR(0x000135f6u): goto L_135F6;
    case RC_ADDR(0x000135f8u): goto L_135F8;
    case RC_ADDR(0x000135feu): goto L_135FE;
    case RC_ADDR(0x00013604u): goto L_13604;
    case RC_ADDR(0x00013608u): goto L_13608;
    case RC_ADDR(0x0001360eu): goto L_1360E;
    case RC_ADDR(0x00013614u): goto L_13614;
    case RC_ADDR(0x00013616u): goto L_13616;
    case RC_ADDR(0x0001361cu): goto L_1361C;
    case RC_ADDR(0x0001361eu): goto L_1361E;
    case RC_ADDR(0x00013620u): goto L_13620;
    case RC_ADDR(0x00013624u): goto L_13624;
    case RC_ADDR(0x0001362au): goto L_1362A;
    case RC_ADDR(0x0001362cu): goto L_1362C;
    case RC_ADDR(0x00013632u): goto L_13632;
    case RC_ADDR(0x00013634u): goto L_13634;
    case RC_ADDR(0x00013638u): goto L_13638;
    case RC_ADDR(0x0001363cu): goto L_1363C;
    case RC_ADDR(0x00013642u): goto L_13642;
    case RC_ADDR(0x00013644u): goto L_13644;
    case RC_ADDR(0x0001364au): goto L_1364A;
    case RC_ADDR(0x00013650u): goto L_13650;
    case RC_ADDR(0x00013654u): goto L_13654;
    case RC_ADDR(0x0001365au): goto L_1365A;
    case RC_ADDR(0x0001365cu): goto L_1365C;
    case RC_ADDR(0x00013660u): goto L_13660;
    case RC_ADDR(0x00013666u): goto L_13666;
    case RC_ADDR(0x00013668u): goto L_13668;
    case RC_ADDR(0x0001366eu): goto L_1366E;
    case RC_ADDR(0x00013674u): goto L_13674;
    case RC_ADDR(0x00013676u): goto L_13676;
    case RC_ADDR(0x00013678u): goto L_13678;
    case RC_ADDR(0x0001367cu): goto L_1367C;
    case RC_ADDR(0x00013680u): goto L_13680;
    case RC_ADDR(0x00013682u): goto L_13682;
    case RC_ADDR(0x00013688u): goto L_13688;
    case RC_ADDR(0x0001368eu): goto L_1368E;
    case RC_ADDR(0x00013692u): goto L_13692;
    case RC_ADDR(0x00013698u): goto L_13698;
    case RC_ADDR(0x0001369cu): goto L_1369C;
    case RC_ADDR(0x000136a2u): goto L_136A2;
    case RC_ADDR(0x000136a4u): goto L_136A4;
    case RC_ADDR(0x000136aau): goto L_136AA;
    case RC_ADDR(0x000136aeu): goto L_136AE;
    case RC_ADDR(0x000136b0u): goto L_136B0;
    case RC_ADDR(0x000136b4u): goto L_136B4;
    case RC_ADDR(0x000136b8u): goto L_136B8;
    case RC_ADDR(0x000136bcu): goto L_136BC;
    case RC_ADDR(0x000136c0u): goto L_136C0;
    case RC_ADDR(0x000136c4u): goto L_136C4;
    case RC_ADDR(0x000136c8u): goto L_136C8;
    case RC_ADDR(0x000136ccu): goto L_136CC;
    case RC_ADDR(0x000136d0u): goto L_136D0;
    case RC_ADDR(0x000136d4u): goto L_136D4;
    case RC_ADDR(0x000136d8u): goto L_136D8;
    case RC_ADDR(0x000136deu): goto L_136DE;
    case RC_ADDR(0x000136e2u): goto L_136E2;
    case RC_ADDR(0x000136e6u): goto L_136E6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13532:
    /* 00013532   4  tst.w (fffffa32,A4) */
    c->pc = RC_ADDR(0x00013532u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5ceu));
    rc_set_nzvc(c, t0, RC_W);

L_13536:
    /* 00013536   4  beq 000136de */
    c->pc = RC_ADDR(0x00013536u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_136DE;

L_1353A:
    /* 0001353a   4  jsr (000189d2) */
    c->pc = RC_ADDR(0x0001353au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001353eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000189d2u);
    return;

L_1353E:
    /* 0001353e   4  movea.l (17fe,A4),A0 */
    c->pc = RC_ADDR(0x0001353eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x17feu));
    c->a[0] = t0;

L_13542:
    /* 00013542   6  adda.l #1e,A0 */
    c->pc = RC_ADDR(0x00013542u);
    rc_step(c, m, 16);
    t0 = 0x0000001eu;
    c->a[0] += t0;

L_13548:
    /* 00013548   4  move.w (fffffa26,A4),D0 */
    c->pc = RC_ADDR(0x00013548u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5dau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1354C:
    /* 0001354c   2  lsl.w #4,D0 */
    c->pc = RC_ADDR(0x0001354cu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_1354E:
    /* 0001354e   4  or.w (fffffa26,A4),D0 */
    c->pc = RC_ADDR(0x0001354eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5dau));
    t2 = t0 | rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_13552:
    /* 00013552   2  move.w D0,(A0) */
    c->pc = RC_ADDR(0x00013552u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13554:
    /* 00013554   4  movea.l (17fe,A4),A0 */
    c->pc = RC_ADDR(0x00013554u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x17feu));
    c->a[0] = t0;

L_13558:
    /* 00013558   6  adda.l #2a,A0 */
    c->pc = RC_ADDR(0x00013558u);
    rc_step(c, m, 16);
    t0 = 0x0000002au;
    c->a[0] += t0;

L_1355E:
    /* 0001355e   4  lea (1816,A4),A1 */
    c->pc = RC_ADDR(0x0001355eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1816u);

L_13562:
    /* 00013562   4  lea (1802,A4),A2 */
    c->pc = RC_ADDR(0x00013562u);
    rc_step(c, m, 8);
    c->a[2] = (c->a[4] + 0x1802u);

L_13566:
    /* 00013566   4  move.w #4,D0 */
    c->pc = RC_ADDR(0x00013566u);
    rc_step(c, m, 8);
    t0 = 0x00000004u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1356A:
    /* 0001356a   4  move.l (fffffa2a,A4),D1 */
    c->pc = RC_ADDR(0x0001356au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5d6u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1356E:
    /* 0001356e   2  add.l D1,(A2) */
    c->pc = RC_ADDR(0x0001356eu);
    rc_step(c, m, 20);
    t3 = c->a[2];
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 1, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_13570:
    /* 00013570   2  add.l D1,(A1) */
    c->pc = RC_ADDR(0x00013570u);
    rc_step(c, m, 20);
    t3 = c->a[1];
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 1, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_13572:
    /* 00013572   2  move.l (A2),D1 */
    c->pc = RC_ADDR(0x00013572u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[2]);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_13574:
    /* 00013574   2  move.l (A1),D2 */
    c->pc = RC_ADDR(0x00013574u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[1]);
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_13576:
    /* 00013576   2  move.l D1,(A1)+ */
    c->pc = RC_ADDR(0x00013576u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_L);
    t3 = c->a[1];
    c->a[1] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_13578:
    /* 00013578   4  move.w D1,(4,A0) */
    c->pc = RC_ADDR(0x00013578u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1357C:
    /* 0001357c   2  swap D1 */
    c->pc = RC_ADDR(0x0001357cu);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_1357E:
    /* 0001357e   2  move.w D1,(A0) */
    c->pc = RC_ADDR(0x0001357eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13580:
    /* 00013580   2  move.l D2,(A2)+ */
    c->pc = RC_ADDR(0x00013580u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 2, RC_L);
    t3 = c->a[2];
    c->a[2] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_13582:
    /* 00013582   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x00013582u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_13584:
    /* 00013584   4  dbf D0,0001356a */
    c->pc = RC_ADDR(0x00013584u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1356A; }
    }

L_13588:
    /* 00013588   4  lea (fffffae2,A4),A0 */
    c->pc = RC_ADDR(0x00013588u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x51eu);

L_1358C:
    /* 0001358c   4  lea (ffffface,A4),A1 */
    c->pc = RC_ADDR(0x0001358cu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x532u);

L_13590:
    /* 00013590   4  move.w #4,D0 */
    c->pc = RC_ADDR(0x00013590u);
    rc_step(c, m, 8);
    t0 = 0x00000004u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13594:
    /* 00013594   2  move.l (A0),D1 */
    c->pc = RC_ADDR(0x00013594u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_13596:
    /* 00013596   2  move.l (A1),(A0)+ */
    c->pc = RC_ADDR(0x00013596u);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[1]);
    t3 = c->a[0];
    c->a[0] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_13598:
    /* 00013598   2  move.l D1,(A1)+ */
    c->pc = RC_ADDR(0x00013598u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_L);
    t3 = c->a[1];
    c->a[1] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1359A:
    /* 0001359a   4  dbf D0,00013594 */
    c->pc = RC_ADDR(0x0001359au);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_13594; }
    }

L_1359E:
    /* 0001359e   4  clr.l (fffffa2a,A4) */
    c->pc = RC_ADDR(0x0001359eu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x5d6u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_135A2:
    /* 000135a2   4  tst.w (700,A4) */
    c->pc = RC_ADDR(0x000135a2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x700u));
    rc_set_nzvc(c, t0, RC_W);

L_135A6:
    /* 000135a6   4  beq 000136aa */
    c->pc = RC_ADDR(0x000135a6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_136AA;

L_135AA:
    /* 000135aa   4  move.w (fffffa2e,A4),D0 */
    c->pc = RC_ADDR(0x000135aau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5d2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_135AE:
    /* 000135ae   4  move.w (fffffa30,A4),D1 */
    c->pc = RC_ADDR(0x000135aeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5d0u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_135B2:
    /* 000135b2   6  btst #0,(701,A4) */
    c->pc = RC_ADDR(0x000135b2u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x701u);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_135B8:
    /* 000135b8   2  beq 000135e4 */
    c->pc = RC_ADDR(0x000135b8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_135E4;

L_135BA:
    /* 000135ba   4  sub.w D0,(fffffa26,A4) */
    c->pc = RC_ADDR(0x000135bau);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x5dau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_135BE:
    /* 000135be   2  bpl 000135e4 */
    c->pc = RC_ADDR(0x000135beu);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_135E4;

L_135C0:
    /* 000135c0   6  subi.w #10,(6fc,A4) */
    c->pc = RC_ADDR(0x000135c0u);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x6fcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000010u;
    rc_flags_sub(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_135C6:
    /* 000135c6   6  addi.w #10,(fffffa26,A4) */
    c->pc = RC_ADDR(0x000135c6u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x5dau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000010u;
    rc_flags_add(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_135CC:
    /* 000135cc   4  addq.w #1,(1148,A4) */
    c->pc = RC_ADDR(0x000135ccu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1148u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_135D0:
    /* 000135d0   6  move.w #1,(fffffacc,A4) */
    c->pc = RC_ADDR(0x000135d0u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x534u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_135D6:
    /* 000135d6   6  cmpi.w #488,(1148,A4) */
    c->pc = RC_ADDR(0x000135d6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1148u));
    rc_cmp(c, RC_W, t0, 0x00000488u);

L_135DC:
    /* 000135dc   2  blt 000135e4 */
    c->pc = RC_ADDR(0x000135dcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_135E4;

L_135DE:
    /* 000135de   6  subi.w #14,(1148,A4) */
    c->pc = RC_ADDR(0x000135deu);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x1148u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000014u;
    rc_flags_sub(c, RC_W, t1, 0x00000014u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_135E4:
    /* 000135e4   6  btst #1,(701,A4) */
    c->pc = RC_ADDR(0x000135e4u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x701u);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_135EA:
    /* 000135ea   2  beq 0001361c */
    c->pc = RC_ADDR(0x000135eau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1361C;

L_135EC:
    /* 000135ec   4  add.w D0,(fffffa26,A4) */
    c->pc = RC_ADDR(0x000135ecu);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x5dau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_135F0:
    /* 000135f0   6  cmpi.w #10,(fffffa26,A4) */
    c->pc = RC_ADDR(0x000135f0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5dau));
    rc_cmp(c, RC_W, t0, 0x00000010u);

L_135F6:
    /* 000135f6   2  blt 0001361c */
    c->pc = RC_ADDR(0x000135f6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1361C;

L_135F8:
    /* 000135f8   6  addi.w #10,(6fc,A4) */
    c->pc = RC_ADDR(0x000135f8u);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x6fcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000010u;
    rc_flags_add(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_135FE:
    /* 000135fe   6  subi.w #10,(fffffa26,A4) */
    c->pc = RC_ADDR(0x000135feu);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x5dau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000010u;
    rc_flags_sub(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13604:
    /* 00013604   4  subq.w #1,(1148,A4) */
    c->pc = RC_ADDR(0x00013604u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1148u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13608:
    /* 00013608   6  move.w #1,(fffffacc,A4) */
    c->pc = RC_ADDR(0x00013608u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x534u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1360E:
    /* 0001360e   6  cmpi.w #28,(1148,A4) */
    c->pc = RC_ADDR(0x0001360eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1148u));
    rc_cmp(c, RC_W, t0, 0x00000028u);

L_13614:
    /* 00013614   2  bgt 0001361c */
    c->pc = RC_ADDR(0x00013614u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1361C;

L_13616:
    /* 00013616   6  addi.w #14,(1148,A4) */
    c->pc = RC_ADDR(0x00013616u);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x1148u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000014u;
    rc_flags_add(c, RC_W, t1, 0x00000014u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1361C:
    /* 0001361c   2  clr.l D0 */
    c->pc = RC_ADDR(0x0001361cu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1361E:
    /* 0001361e   2  move.w D1,D0 */
    c->pc = RC_ADDR(0x0001361eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13620:
    /* 00013620   4  mulu.w #28,D0 */
    c->pc = RC_ADDR(0x00013620u);
    rc_step(c, m, 42);
    t0 = 0x00000028u;
    rc_mulu(c, 0, t0);

L_13624:
    /* 00013624   6  move.l #190,D2 */
    c->pc = RC_ADDR(0x00013624u);
    rc_step(c, m, 12);
    t0 = 0x00000190u;
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1362A:
    /* 0001362a   2  sub.w D0,D2 */
    c->pc = RC_ADDR(0x0001362au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_1362C:
    /* 0001362c   6  btst #2,(701,A4) */
    c->pc = RC_ADDR(0x0001362cu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x701u);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_13632:
    /* 00013632   2  beq 0001366e */
    c->pc = RC_ADDR(0x00013632u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1366E;

L_13634:
    /* 00013634   4  move.l D0,(fffffa2a,A4) */
    c->pc = RC_ADDR(0x00013634u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x5d6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_13638:
    /* 00013638   4  add.w D1,(fffffa28,A4) */
    c->pc = RC_ADDR(0x00013638u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x5d8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1363C:
    /* 0001363c   6  cmpi.w #a,(fffffa28,A4) */
    c->pc = RC_ADDR(0x0001363cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5d8u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_13642:
    /* 00013642   2  blt 0001366e */
    c->pc = RC_ADDR(0x00013642u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1366E;

L_13644:
    /* 00013644   6  subi.w #a,(6fe,A4) */
    c->pc = RC_ADDR(0x00013644u);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x6feu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1364A:
    /* 0001364a   6  subi.w #a,(fffffa28,A4) */
    c->pc = RC_ADDR(0x0001364au);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x5d8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13650:
    /* 00013650   4  addq.w #1,(114a,A4) */
    c->pc = RC_ADDR(0x00013650u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x114au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13654:
    /* 00013654   6  move.w #1,(fffffacc,A4) */
    c->pc = RC_ADDR(0x00013654u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x534u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1365A:
    /* 0001365a   2  neg.l D2 */
    c->pc = RC_ADDR(0x0001365au);
    rc_step(c, m, 6);
    t1 = rc_d_get(c, 2, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_L, t2);

L_1365C:
    /* 0001365c   4  move.l D2,(fffffa2a,A4) */
    c->pc = RC_ADDR(0x0001365cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x5d6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_13660:
    /* 00013660   6  cmpi.w #488,(114a,A4) */
    c->pc = RC_ADDR(0x00013660u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x114au));
    rc_cmp(c, RC_W, t0, 0x00000488u);

L_13666:
    /* 00013666   2  blt 0001366e */
    c->pc = RC_ADDR(0x00013666u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1366E;

L_13668:
    /* 00013668   6  subi.w #14,(114a,A4) */
    c->pc = RC_ADDR(0x00013668u);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x114au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000014u;
    rc_flags_sub(c, RC_W, t1, 0x00000014u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1366E:
    /* 0001366e   6  btst #3,(701,A4) */
    c->pc = RC_ADDR(0x0001366eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x701u);
    t4 = 0x00000003u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_13674:
    /* 00013674   2  beq 000136aa */
    c->pc = RC_ADDR(0x00013674u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_136AA;

L_13676:
    /* 00013676   2  neg.l D0 */
    c->pc = RC_ADDR(0x00013676u);
    rc_step(c, m, 6);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_13678:
    /* 00013678   4  move.l D0,(fffffa2a,A4) */
    c->pc = RC_ADDR(0x00013678u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x5d6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1367C:
    /* 0001367c   4  sub.w D1,(fffffa28,A4) */
    c->pc = RC_ADDR(0x0001367cu);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x5d8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 1, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_13680:
    /* 00013680   2  bpl 000136aa */
    c->pc = RC_ADDR(0x00013680u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_136AA;

L_13682:
    /* 00013682   6  addi.w #a,(6fe,A4) */
    c->pc = RC_ADDR(0x00013682u);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x6feu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13688:
    /* 00013688   6  addi.w #a,(fffffa28,A4) */
    c->pc = RC_ADDR(0x00013688u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x5d8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1368E:
    /* 0001368e   4  subq.w #1,(114a,A4) */
    c->pc = RC_ADDR(0x0001368eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x114au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13692:
    /* 00013692   6  move.w #1,(fffffacc,A4) */
    c->pc = RC_ADDR(0x00013692u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x534u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13698:
    /* 00013698   4  move.l D2,(fffffa2a,A4) */
    c->pc = RC_ADDR(0x00013698u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x5d6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1369C:
    /* 0001369c   6  cmpi.w #28,(114a,A4) */
    c->pc = RC_ADDR(0x0001369cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x114au));
    rc_cmp(c, RC_W, t0, 0x00000028u);

L_136A2:
    /* 000136a2   2  bgt 000136aa */
    c->pc = RC_ADDR(0x000136a2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_136AA;

L_136A4:
    /* 000136a4   6  addi.w #14,(114a,A4) */
    c->pc = RC_ADDR(0x000136a4u);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x114au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000014u;
    rc_flags_add(c, RC_W, t1, 0x00000014u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_136AA:
    /* 000136aa   4  move.w (1148,A4),D0 */
    c->pc = RC_ADDR(0x000136aau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1148u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_136AE:
    /* 000136ae   2  lsl.w #4,D0 */
    c->pc = RC_ADDR(0x000136aeu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_136B0:
    /* 000136b0   4  move.w D0,(17f4,A4) */
    c->pc = RC_ADDR(0x000136b0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x17f4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_136B4:
    /* 000136b4   4  move.w (114a,A4),D0 */
    c->pc = RC_ADDR(0x000136b4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x114au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_136B8:
    /* 000136b8   4  mulu.w #a,D0 */
    c->pc = RC_ADDR(0x000136b8u);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_mulu(c, 0, t0);

L_136BC:
    /* 000136bc   4  move.w D0,(17f6,A4) */
    c->pc = RC_ADDR(0x000136bcu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x17f6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_136C0:
    /* 000136c0   4  move.w (6fc,A4),D0 */
    c->pc = RC_ADDR(0x000136c0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6fcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_136C4:
    /* 000136c4   4  move.w (6fe,A4),D1 */
    c->pc = RC_ADDR(0x000136c4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6feu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_136C8:
    /* 000136c8   4  add.w (17f4,A4),D0 */
    c->pc = RC_ADDR(0x000136c8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_136CC:
    /* 000136cc   4  move.w D0,(6ee,A4) */
    c->pc = RC_ADDR(0x000136ccu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x6eeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_136D0:
    /* 000136d0   4  add.w (17f6,A4),D1 */
    c->pc = RC_ADDR(0x000136d0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f6u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_136D4:
    /* 000136d4   4  move.w D1,(6f0,A4) */
    c->pc = RC_ADDR(0x000136d4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x6f0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_136D8:
    /* 000136d8   6  eori.w #1,(17f8,A4) */
    c->pc = RC_ADDR(0x000136d8u);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x17f8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 ^ 0x00000001u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_136DE:
    /* 000136de   4  clr.w (14ee,A4) */
    c->pc = RC_ADDR(0x000136deu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x14eeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_136E2:
    /* 000136e2   4  clr.w (fffffa32,A4) */
    c->pc = RC_ADDR(0x000136e2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5ceu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_136E6:
    /* 000136e6   2  rts */
    c->pc = RC_ADDR(0x000136e6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
