/* fn_0001158c - 552 byte(s), 177 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001158c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001158cu): goto L_1158C;
    case RC_ADDR(0x00011590u): goto L_11590;
    case RC_ADDR(0x00011592u): goto L_11592;
    case RC_ADDR(0x00011594u): goto L_11594;
    case RC_ADDR(0x00011596u): goto L_11596;
    case RC_ADDR(0x0001159au): goto L_1159A;
    case RC_ADDR(0x0001159eu): goto L_1159E;
    case RC_ADDR(0x000115a0u): goto L_115A0;
    case RC_ADDR(0x000115a4u): goto L_115A4;
    case RC_ADDR(0x000115a6u): goto L_115A6;
    case RC_ADDR(0x000115aau): goto L_115AA;
    case RC_ADDR(0x000115aeu): goto L_115AE;
    case RC_ADDR(0x000115b2u): goto L_115B2;
    case RC_ADDR(0x000115b6u): goto L_115B6;
    case RC_ADDR(0x000115bau): goto L_115BA;
    case RC_ADDR(0x000115bcu): goto L_115BC;
    case RC_ADDR(0x000115c0u): goto L_115C0;
    case RC_ADDR(0x000115c4u): goto L_115C4;
    case RC_ADDR(0x000115c6u): goto L_115C6;
    case RC_ADDR(0x000115c8u): goto L_115C8;
    case RC_ADDR(0x000115ccu): goto L_115CC;
    case RC_ADDR(0x000115ceu): goto L_115CE;
    case RC_ADDR(0x000115d2u): goto L_115D2;
    case RC_ADDR(0x000115d4u): goto L_115D4;
    case RC_ADDR(0x000115d8u): goto L_115D8;
    case RC_ADDR(0x000115deu): goto L_115DE;
    case RC_ADDR(0x000115e2u): goto L_115E2;
    case RC_ADDR(0x000115e6u): goto L_115E6;
    case RC_ADDR(0x000115eau): goto L_115EA;
    case RC_ADDR(0x000115ecu): goto L_115EC;
    case RC_ADDR(0x000115f2u): goto L_115F2;
    case RC_ADDR(0x000115f4u): goto L_115F4;
    case RC_ADDR(0x000115f8u): goto L_115F8;
    case RC_ADDR(0x000115feu): goto L_115FE;
    case RC_ADDR(0x00011600u): goto L_11600;
    case RC_ADDR(0x00011604u): goto L_11604;
    case RC_ADDR(0x00011606u): goto L_11606;
    case RC_ADDR(0x0001160au): goto L_1160A;
    case RC_ADDR(0x0001160eu): goto L_1160E;
    case RC_ADDR(0x00011612u): goto L_11612;
    case RC_ADDR(0x00011614u): goto L_11614;
    case RC_ADDR(0x00011616u): goto L_11616;
    case RC_ADDR(0x0001161au): goto L_1161A;
    case RC_ADDR(0x0001161cu): goto L_1161C;
    case RC_ADDR(0x0001161eu): goto L_1161E;
    case RC_ADDR(0x00011620u): goto L_11620;
    case RC_ADDR(0x00011622u): goto L_11622;
    case RC_ADDR(0x00011624u): goto L_11624;
    case RC_ADDR(0x00011628u): goto L_11628;
    case RC_ADDR(0x0001162au): goto L_1162A;
    case RC_ADDR(0x0001162cu): goto L_1162C;
    case RC_ADDR(0x00011630u): goto L_11630;
    case RC_ADDR(0x00011634u): goto L_11634;
    case RC_ADDR(0x00011638u): goto L_11638;
    case RC_ADDR(0x0001163cu): goto L_1163C;
    case RC_ADDR(0x0001163eu): goto L_1163E;
    case RC_ADDR(0x00011640u): goto L_11640;
    case RC_ADDR(0x00011644u): goto L_11644;
    case RC_ADDR(0x00011648u): goto L_11648;
    case RC_ADDR(0x0001164cu): goto L_1164C;
    case RC_ADDR(0x0001164eu): goto L_1164E;
    case RC_ADDR(0x00011652u): goto L_11652;
    case RC_ADDR(0x00011656u): goto L_11656;
    case RC_ADDR(0x00011658u): goto L_11658;
    case RC_ADDR(0x0001165au): goto L_1165A;
    case RC_ADDR(0x0001165eu): goto L_1165E;
    case RC_ADDR(0x00011660u): goto L_11660;
    case RC_ADDR(0x00011664u): goto L_11664;
    case RC_ADDR(0x00011668u): goto L_11668;
    case RC_ADDR(0x0001166au): goto L_1166A;
    case RC_ADDR(0x0001166cu): goto L_1166C;
    case RC_ADDR(0x00011670u): goto L_11670;
    case RC_ADDR(0x00011674u): goto L_11674;
    case RC_ADDR(0x00011678u): goto L_11678;
    case RC_ADDR(0x0001167cu): goto L_1167C;
    case RC_ADDR(0x0001167eu): goto L_1167E;
    case RC_ADDR(0x00011680u): goto L_11680;
    case RC_ADDR(0x00011682u): goto L_11682;
    case RC_ADDR(0x00011686u): goto L_11686;
    case RC_ADDR(0x00011688u): goto L_11688;
    case RC_ADDR(0x0001168cu): goto L_1168C;
    case RC_ADDR(0x00011692u): goto L_11692;
    case RC_ADDR(0x00011696u): goto L_11696;
    case RC_ADDR(0x00011698u): goto L_11698;
    case RC_ADDR(0x0001169cu): goto L_1169C;
    case RC_ADDR(0x0001169eu): goto L_1169E;
    case RC_ADDR(0x000116a4u): goto L_116A4;
    case RC_ADDR(0x000116a6u): goto L_116A6;
    case RC_ADDR(0x000116aau): goto L_116AA;
    case RC_ADDR(0x000116acu): goto L_116AC;
    case RC_ADDR(0x000116b0u): goto L_116B0;
    case RC_ADDR(0x000116b4u): goto L_116B4;
    case RC_ADDR(0x000116b8u): goto L_116B8;
    case RC_ADDR(0x000116bau): goto L_116BA;
    case RC_ADDR(0x000116c0u): goto L_116C0;
    case RC_ADDR(0x000116c2u): goto L_116C2;
    case RC_ADDR(0x000116c6u): goto L_116C6;
    case RC_ADDR(0x000116cau): goto L_116CA;
    case RC_ADDR(0x000116ceu): goto L_116CE;
    case RC_ADDR(0x000116d0u): goto L_116D0;
    case RC_ADDR(0x000116d2u): goto L_116D2;
    case RC_ADDR(0x000116d6u): goto L_116D6;
    case RC_ADDR(0x000116d8u): goto L_116D8;
    case RC_ADDR(0x000116dcu): goto L_116DC;
    case RC_ADDR(0x000116e0u): goto L_116E0;
    case RC_ADDR(0x000116e2u): goto L_116E2;
    case RC_ADDR(0x000116e6u): goto L_116E6;
    case RC_ADDR(0x000116eau): goto L_116EA;
    case RC_ADDR(0x000116ecu): goto L_116EC;
    case RC_ADDR(0x000116f0u): goto L_116F0;
    case RC_ADDR(0x000116f4u): goto L_116F4;
    case RC_ADDR(0x000116f6u): goto L_116F6;
    case RC_ADDR(0x000116f8u): goto L_116F8;
    case RC_ADDR(0x000116fcu): goto L_116FC;
    case RC_ADDR(0x00011700u): goto L_11700;
    case RC_ADDR(0x00011704u): goto L_11704;
    case RC_ADDR(0x00011706u): goto L_11706;
    case RC_ADDR(0x0001170au): goto L_1170A;
    case RC_ADDR(0x0001170cu): goto L_1170C;
    case RC_ADDR(0x00011710u): goto L_11710;
    case RC_ADDR(0x00011712u): goto L_11712;
    case RC_ADDR(0x00011716u): goto L_11716;
    case RC_ADDR(0x00011718u): goto L_11718;
    case RC_ADDR(0x0001171au): goto L_1171A;
    case RC_ADDR(0x0001171eu): goto L_1171E;
    case RC_ADDR(0x00011722u): goto L_11722;
    case RC_ADDR(0x00011726u): goto L_11726;
    case RC_ADDR(0x0001172au): goto L_1172A;
    case RC_ADDR(0x0001172cu): goto L_1172C;
    case RC_ADDR(0x0001172eu): goto L_1172E;
    case RC_ADDR(0x00011730u): goto L_11730;
    case RC_ADDR(0x00011732u): goto L_11732;
    case RC_ADDR(0x00011734u): goto L_11734;
    case RC_ADDR(0x00011736u): goto L_11736;
    case RC_ADDR(0x00011738u): goto L_11738;
    case RC_ADDR(0x0001173au): goto L_1173A;
    case RC_ADDR(0x0001173cu): goto L_1173C;
    case RC_ADDR(0x00011742u): goto L_11742;
    case RC_ADDR(0x00011744u): goto L_11744;
    case RC_ADDR(0x0001174au): goto L_1174A;
    case RC_ADDR(0x0001174cu): goto L_1174C;
    case RC_ADDR(0x0001174eu): goto L_1174E;
    case RC_ADDR(0x00011750u): goto L_11750;
    case RC_ADDR(0x00011752u): goto L_11752;
    case RC_ADDR(0x00011754u): goto L_11754;
    case RC_ADDR(0x00011756u): goto L_11756;
    case RC_ADDR(0x0001175au): goto L_1175A;
    case RC_ADDR(0x0001175eu): goto L_1175E;
    case RC_ADDR(0x00011762u): goto L_11762;
    case RC_ADDR(0x00011766u): goto L_11766;
    case RC_ADDR(0x00011768u): goto L_11768;
    case RC_ADDR(0x0001176au): goto L_1176A;
    case RC_ADDR(0x0001176eu): goto L_1176E;
    case RC_ADDR(0x00011772u): goto L_11772;
    case RC_ADDR(0x00011774u): goto L_11774;
    case RC_ADDR(0x00011778u): goto L_11778;
    case RC_ADDR(0x0001177au): goto L_1177A;
    case RC_ADDR(0x0001177cu): goto L_1177C;
    case RC_ADDR(0x0001177eu): goto L_1177E;
    case RC_ADDR(0x00011782u): goto L_11782;
    case RC_ADDR(0x00011786u): goto L_11786;
    case RC_ADDR(0x00011788u): goto L_11788;
    case RC_ADDR(0x0001178cu): goto L_1178C;
    case RC_ADDR(0x0001178eu): goto L_1178E;
    case RC_ADDR(0x00011790u): goto L_11790;
    case RC_ADDR(0x00011794u): goto L_11794;
    case RC_ADDR(0x00011796u): goto L_11796;
    case RC_ADDR(0x0001179au): goto L_1179A;
    case RC_ADDR(0x0001179cu): goto L_1179C;
    case RC_ADDR(0x0001179eu): goto L_1179E;
    case RC_ADDR(0x000117a0u): goto L_117A0;
    case RC_ADDR(0x000117a2u): goto L_117A2;
    case RC_ADDR(0x000117a6u): goto L_117A6;
    case RC_ADDR(0x000117a8u): goto L_117A8;
    case RC_ADDR(0x000117aeu): goto L_117AE;
    case RC_ADDR(0x000117b0u): goto L_117B0;
    case RC_ADDR(0x000117b2u): goto L_117B2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1158C:
    /* 0001158c   4  cmpi.w #4,D7 */
    c->pc = RC_ADDR(0x0001158cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_11590:
    /* 00011590   2  blt 00011596 */
    c->pc = RC_ADDR(0x00011590u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_11596;

L_11592:
    /* 00011592   2  clr.l D0 */
    c->pc = RC_ADDR(0x00011592u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_11594:
    /* 00011594   2  rts */
    c->pc = RC_ADDR(0x00011594u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_11596:
    /* 00011596   4  movea.l (4,A1),A3 */
    c->pc = RC_ADDR(0x00011596u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0x4u));
    c->a[3] = t0;

L_1159A:
    /* 0001159a   4  lea (172,A6),A2 */
    c->pc = RC_ADDR(0x0001159au);
    rc_step(c, m, 8);
    c->a[2] = (c->a[6] + 0x172u);

L_1159E:
    /* 0001159e   2  move.w D7,D0 */
    c->pc = RC_ADDR(0x0001159eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_115A0:
    /* 000115a0   4  mulu.w #14,D0 */
    c->pc = RC_ADDR(0x000115a0u);
    rc_step(c, m, 42);
    t0 = 0x00000014u;
    rc_mulu(c, 0, t0);

L_115A4:
    /* 000115a4   2  adda.w D0,A2 */
    c->pc = RC_ADDR(0x000115a4u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[2] += rc_ext(t0, RC_W);

L_115A6:
    /* 000115a6   4  move.b (0,A1),D0 */
    c->pc = RC_ADDR(0x000115a6u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[1] + 0x0u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_115AA:
    /* 000115aa   4  beq 000116b4 */
    c->pc = RC_ADDR(0x000115aau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_116B4;

L_115AE:
    /* 000115ae   4  cmpi.b #1,D0 */
    c->pc = RC_ADDR(0x000115aeu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000001u);

L_115B2:
    /* 000115b2   4  bne 00011698 */
    c->pc = RC_ADDR(0x000115b2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_11698;

L_115B6:
    /* 000115b6   4  movea.l (4,A3),A5 */
    c->pc = RC_ADDR(0x000115b6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[3] + 0x4u));
    c->a[5] = t0;

L_115BA:
    /* 000115ba   2  clr.l D1 */
    c->pc = RC_ADDR(0x000115bau);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_115BC:
    /* 000115bc   4  move.b (3,A1),D1 */
    c->pc = RC_ADDR(0x000115bcu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[1] + 0x3u));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_115C0:
    /* 000115c0   4  divu.w #c,D1 */
    c->pc = RC_ADDR(0x000115c0u);
    rc_step(c, m, 144);
    t0 = 0x0000000cu;
    rc_divu(c, m, 1, t0);

L_115C4:
    /* 000115c4   2  move.w D1,D2 */
    c->pc = RC_ADDR(0x000115c4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_115C6:
    /* 000115c6   2  swap D1 */
    c->pc = RC_ADDR(0x000115c6u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_115C8:
    /* 000115c8   4  subi.w #a,D2 */
    c->pc = RC_ADDR(0x000115c8u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_115CC:
    /* 000115cc   2  neg.w D2 */
    c->pc = RC_ADDR(0x000115ccu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_115CE:
    /* 000115ce   4  cmp.b (5,A5),D2 */
    c->pc = RC_ADDR(0x000115ceu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0x5u));
    t1 = rc_d_get(c, 2, RC_B);
    rc_cmp(c, RC_B, t1, t0);

L_115D2:
    /* 000115d2   2  ble 000115e6 */
    c->pc = RC_ADDR(0x000115d2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_115E6;

L_115D4:
    /* 000115d4   4  clr.b (0,A1) */
    c->pc = RC_ADDR(0x000115d4u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[1] + 0x0u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_115D8:
    /* 000115d8   6  cmpi.b #0,(1,A1) */
    c->pc = RC_ADDR(0x000115d8u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u));
    rc_cmp(c, RC_B, t0, 0x00000000u);

L_115DE:
    /* 000115de   4  beq 000117a6 */
    c->pc = RC_ADDR(0x000115deu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_117A6;

L_115E2:
    /* 000115e2   4  bra 000116b4 */
    c->pc = RC_ADDR(0x000115e2u);
    rc_step(c, m, 10);
    goto L_116B4;

L_115E6:
    /* 000115e6   4  cmp.b (4,A5),D2 */
    c->pc = RC_ADDR(0x000115e6u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0x4u));
    t1 = rc_d_get(c, 2, RC_B);
    rc_cmp(c, RC_B, t1, t0);

L_115EA:
    /* 000115ea   2  blt 000115d4 */
    c->pc = RC_ADDR(0x000115eau);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_115D4; }

L_115EC:
    /* 000115ec   6  cmpi.b #0,(1,A1) */
    c->pc = RC_ADDR(0x000115ecu);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u));
    rc_cmp(c, RC_B, t0, 0x00000000u);

L_115F2:
    /* 000115f2   2  bne 000115f8 */
    c->pc = RC_ADDR(0x000115f2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_115F8;

L_115F4:
    /* 000115f4   4  clr.l (a,A2) */
    c->pc = RC_ADDR(0x000115f4u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[2] + 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_115F8:
    /* 000115f8   6  cmpi.b #1,(1,A1) */
    c->pc = RC_ADDR(0x000115f8u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u));
    rc_cmp(c, RC_B, t0, 0x00000001u);

L_115FE:
    /* 000115fe   2  beq 00011604 */
    c->pc = RC_ADDR(0x000115feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_11604;

L_11600:
    /* 00011600   4  clr.w (8,A2) */
    c->pc = RC_ADDR(0x00011600u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[2] + 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11604:
    /* 00011604   2  asl.w #1,D1 */
    c->pc = RC_ADDR(0x00011604u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_11606:
    /* 00011606   4  lea (00010f34),A0 */
    c->pc = RC_ADDR(0x00011606u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x00010f34u);

L_1160A:
    /* 0001160a   4  move.w #d5c8,D0 */
    c->pc = RC_ADDR(0x0001160au);
    rc_step(c, m, 8);
    t0 = 0x0000d5c8u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1160E:
    /* 0001160e   4  mulu.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0001160eu);
    rc_step(c, m, 48);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_mulu(c, 0, t0);

L_11612:
    /* 00011612   2  moveq #f,D1 */
    c->pc = RC_ADDR(0x00011612u);
    rc_step(c, m, 4);
    c->d[1] = 0x0000000fu;
    rc_set_nzvc(c, c->d[1], RC_L);

L_11614:
    /* 00011614   2  lsr.l D1,D0 */
    c->pc = RC_ADDR(0x00011614u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_11616:
    /* 00011616   4  move.w D0,(6,A2) */
    c->pc = RC_ADDR(0x00011616u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1161A:
    /* 0001161a   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001161au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1161C:
    /* 0001161c   2  asl.l D2,D0 */
    c->pc = RC_ADDR(0x0001161cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[2] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_1161E:
    /* 0001161e   2  move.l D0,D4 */
    c->pc = RC_ADDR(0x0001161eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11620:
    /* 00011620   2  moveq #1,D1 */
    c->pc = RC_ADDR(0x00011620u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000001u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_11622:
    /* 00011622   2  clr.w D3 */
    c->pc = RC_ADDR(0x00011622u);
    rc_step(c, m, 4);
    rc_d_set(c, 3, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11624:
    /* 00011624   4  move.b (4,A5),D3 */
    c->pc = RC_ADDR(0x00011624u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0x4u));
    rc_d_set(c, 3, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_11628:
    /* 00011628   2  asl.l D3,D1 */
    c->pc = RC_ADDR(0x00011628u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, (c->d[3] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_1162A:
    /* 0001162a   2  sub.l D1,D0 */
    c->pc = RC_ADDR(0x0001162au);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1162C:
    /* 0001162c   4  mulu.w (0,A5),D0 */
    c->pc = RC_ADDR(0x0001162cu);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[5] + 0x0u));
    rc_mulu(c, 0, t0);

L_11630:
    /* 00011630   4  lea (3e,A5,D0.w),A0 */
    c->pc = RC_ADDR(0x00011630u);
    rc_step(c, m, 12);
    t4 = c->d[0];
    c->a[0] = (c->a[5] + 0x3eu + t4);

L_11634:
    /* 00011634   4  move.l A0,(c,A1) */
    c->pc = RC_ADDR(0x00011634u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11638:
    /* 00011638   4  move.w (0,A5),D0 */
    c->pc = RC_ADDR(0x00011638u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1163C:
    /* 0001163c   2  mulu.w D4,D0 */
    c->pc = RC_ADDR(0x0001163cu);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 4, RC_W);
    rc_mulu(c, 0, t0);

L_1163E:
    /* 0001163e   2  lsr.l #1,D0 */
    c->pc = RC_ADDR(0x0001163eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_11640:
    /* 00011640   4  move.w D0,(10,A1) */
    c->pc = RC_ADDR(0x00011640u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[1] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11644:
    /* 00011644   4  movea.l (106,A6),A0 */
    c->pc = RC_ADDR(0x00011644u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[6] + 0x106u));
    c->a[0] = t0;

L_11648:
    /* 00011648   4  adda.w #400,A0 */
    c->pc = RC_ADDR(0x00011648u);
    rc_step(c, m, 14);
    t0 = 0x00000400u;
    c->a[0] += rc_ext(t0, RC_W);

L_1164C:
    /* 0001164c   2  moveq #4,D0 */
    c->pc = RC_ADDR(0x0001164cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000004u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1164E:
    /* 0001164e   4  move.w (2,A5),D1 */
    c->pc = RC_ADDR(0x0001164eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11652:
    /* 00011652   4  cmp.w (0,A5),D1 */
    c->pc = RC_ADDR(0x00011652u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x0u));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_11656:
    /* 00011656   2  beq 0001166c */
    c->pc = RC_ADDR(0x00011656u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1166C;

L_11658:
    /* 00011658   2  mulu.w D4,D1 */
    c->pc = RC_ADDR(0x00011658u);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 4, RC_W);
    rc_mulu(c, 1, t0);

L_1165A:
    /* 0001165a   4  movea.l (c,A1),A0 */
    c->pc = RC_ADDR(0x0001165au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0xcu));
    c->a[0] = t0;

L_1165E:
    /* 0001165e   2  adda.l D1,A0 */
    c->pc = RC_ADDR(0x0001165eu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[0] += t0;

L_11660:
    /* 00011660   4  move.w (0,A5),D0 */
    c->pc = RC_ADDR(0x00011660u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11664:
    /* 00011664   4  sub.w (2,A5),D0 */
    c->pc = RC_ADDR(0x00011664u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_11668:
    /* 00011668   2  mulu.w D4,D0 */
    c->pc = RC_ADDR(0x00011668u);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 4, RC_W);
    rc_mulu(c, 0, t0);

L_1166A:
    /* 0001166a   2  lsr.l #1,D0 */
    c->pc = RC_ADDR(0x0001166au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1166C:
    /* 0001166c   4  move.l A0,(0,A2) */
    c->pc = RC_ADDR(0x0001166cu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[2] + 0x0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11670:
    /* 00011670   4  move.w D0,(4,A2) */
    c->pc = RC_ADDR(0x00011670u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11674:
    /* 00011674   4  clr.w (e,A2) */
    c->pc = RC_ADDR(0x00011674u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[2] + 0xeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11678:
    /* 00011678   4  move.w (1e,A3),D0 */
    c->pc = RC_ADDR(0x00011678u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1167C:
    /* 0001167c   2  swap D0 */
    c->pc = RC_ADDR(0x0001167cu);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_1167E:
    /* 0001167e   2  clr.w D0 */
    c->pc = RC_ADDR(0x0001167eu);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11680:
    /* 00011680   2  lsr.l #1,D0 */
    c->pc = RC_ADDR(0x00011680u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_11682:
    /* 00011682   4  divu.w (22,A6),D0 */
    c->pc = RC_ADDR(0x00011682u);
    rc_step(c, m, 148);
    t0 = rc_rd16(c, m, (c->a[6] + 0x22u));
    rc_divu(c, m, 0, t0);

L_11686:
    /* 00011686   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x00011686u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_11688:
    /* 00011688   4  move.w D0,(10,A2) */
    c->pc = RC_ADDR(0x00011688u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1168C:
    /* 0001168c   6  move.w #2,(a,A1) */
    c->pc = RC_ADDR(0x0001168cu);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[1] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11692:
    /* 00011692   4  bsr 00010d10 */
    c->pc = RC_ADDR(0x00011692u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00011696u));
    rc_depth++;
    c->pc = RC_ADDR(0x00010d10u);
    return;

L_11696:
    /* 00011696   2  bra 000116b4 */
    c->pc = RC_ADDR(0x00011696u);
    rc_step(c, m, 10);
    goto L_116B4;

L_11698:
    /* 00011698   4  cmpi.b #2,D0 */
    c->pc = RC_ADDR(0x00011698u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000002u);

L_1169C:
    /* 0001169c   2  bne 000116a6 */
    c->pc = RC_ADDR(0x0001169cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_116A6;

L_1169E:
    /* 0001169e   6  move.w #6,(8,A2) */
    c->pc = RC_ADDR(0x0001169eu);
    rc_step(c, m, 16);
    t0 = 0x00000006u;
    rc_wr16(c, m, (c->a[2] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_116A4:
    /* 000116a4   2  bra 000116b4 */
    c->pc = RC_ADDR(0x000116a4u);
    rc_step(c, m, 10);
    goto L_116B4;

L_116A6:
    /* 000116a6   4  cmpi.b #3,D0 */
    c->pc = RC_ADDR(0x000116a6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000003u);

L_116AA:
    /* 000116aa   2  bne 000116b4 */
    c->pc = RC_ADDR(0x000116aau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_116B4;

L_116AC:
    /* 000116ac   4  bsr 00010d10 */
    c->pc = RC_ADDR(0x000116acu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000116b0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00010d10u);
    return;

L_116B0:
    /* 000116b0   4  bra 000117a6 */
    c->pc = RC_ADDR(0x000116b0u);
    rc_step(c, m, 10);
    goto L_117A6;

L_116B4:
    /* 000116b4   4  tst.w (10,A2) */
    c->pc = RC_ADDR(0x000116b4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x10u));
    rc_set_nzvc(c, t0, RC_W);

L_116B8:
    /* 000116b8   2  beq 000116c2 */
    c->pc = RC_ADDR(0x000116b8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_116C2;

L_116BA:
    /* 000116ba   6  subi.w #1,(10,A2) */
    c->pc = RC_ADDR(0x000116bau);
    rc_step(c, m, 20);
    t3 = (c->a[2] + 0x10u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_116C0:
    /* 000116c0   2  bra 000116dc */
    c->pc = RC_ADDR(0x000116c0u);
    rc_step(c, m, 10);
    goto L_116DC;

L_116C2:
    /* 000116c2   4  move.w (e,A2),D0 */
    c->pc = RC_ADDR(0x000116c2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_116C6:
    /* 000116c6   4  move.w (1c,A3),D1 */
    c->pc = RC_ADDR(0x000116c6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x1cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_116CA:
    /* 000116ca   4  mulu.w (22,A6),D1 */
    c->pc = RC_ADDR(0x000116cau);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[6] + 0x22u));
    rc_mulu(c, 1, t0);

L_116CE:
    /* 000116ce   2  asl.l #7,D1 */
    c->pc = RC_ADDR(0x000116ceu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000007u, rc_d_get(c, 1, RC_L), RC_L));

L_116D0:
    /* 000116d0   2  swap D1 */
    c->pc = RC_ADDR(0x000116d0u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_116D2:
    /* 000116d2   4  addi.w #40,D1 */
    c->pc = RC_ADDR(0x000116d2u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000040u;
    rc_flags_add(c, RC_W, t1, 0x00000040u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_116D6:
    /* 000116d6   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x000116d6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_116D8:
    /* 000116d8   4  move.w D0,(e,A2) */
    c->pc = RC_ADDR(0x000116d8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_116DC:
    /* 000116dc   4  move.w (e,A2),D0 */
    c->pc = RC_ADDR(0x000116dcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_116E0:
    /* 000116e0   2  lsr.w #7,D0 */
    c->pc = RC_ADDR(0x000116e0u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000007u, rc_d_get(c, 0, RC_W), RC_W));

L_116E2:
    /* 000116e2   4  addi.w #80,D0 */
    c->pc = RC_ADDR(0x000116e2u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000080u;
    rc_flags_add(c, RC_W, t1, 0x00000080u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_116E6:
    /* 000116e6   4  btst #8,D0 */
    c->pc = RC_ADDR(0x000116e6u);
    rc_step(c, m, 10);
    t4 = 0x00000008u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_116EA:
    /* 000116ea   2  beq 000116f0 */
    c->pc = RC_ADDR(0x000116eau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_116F0;

L_116EC:
    /* 000116ec   4  eori.w #ff,D0 */
    c->pc = RC_ADDR(0x000116ecu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 ^ 0x000000ffu;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_116F0:
    /* 000116f0   4  eori.w #80,D0 */
    c->pc = RC_ADDR(0x000116f0u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 ^ 0x00000080u;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_116F4:
    /* 000116f4   2  ext.w D0 */
    c->pc = RC_ADDR(0x000116f4u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_116F6:
    /* 000116f6   2  neg.w D0 */
    c->pc = RC_ADDR(0x000116f6u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_116F8:
    /* 000116f8   4  move.w D0,(12,A2) */
    c->pc = RC_ADDR(0x000116f8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_116FC:
    /* 000116fc   4  move.w (8,A2),D0 */
    c->pc = RC_ADDR(0x000116fcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11700:
    /* 00011700   4  lea (0,A3,D0.w),A0 */
    c->pc = RC_ADDR(0x00011700u);
    rc_step(c, m, 12);
    t4 = rc_ext(c->d[0], RC_W);
    c->a[0] = (c->a[3] + 0x0u + t4);

L_11704:
    /* 00011704   2  clr.l D1 */
    c->pc = RC_ADDR(0x00011704u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_11706:
    /* 00011706   4  move.w (a,A0),D1 */
    c->pc = RC_ADDR(0x00011706u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1170A:
    /* 0001170a   2  swap D1 */
    c->pc = RC_ADDR(0x0001170au);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_1170C:
    /* 0001170c   4  move.l (a,A2),D2 */
    c->pc = RC_ADDR(0x0001170cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0xau));
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11710:
    /* 00011710   2  clr.l D3 */
    c->pc = RC_ADDR(0x00011710u);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_11712:
    /* 00011712   4  move.w (12,A0),D3 */
    c->pc = RC_ADDR(0x00011712u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x12u));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11716:
    /* 00011716   2  move.w D3,D0 */
    c->pc = RC_ADDR(0x00011716u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11718:
    /* 00011718   2  lsr.w #5,D0 */
    c->pc = RC_ADDR(0x00011718u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000005u, rc_d_get(c, 0, RC_W), RC_W));

L_1171A:
    /* 0001171a   4  eori.w #7,D0 */
    c->pc = RC_ADDR(0x0001171au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 ^ 0x00000007u;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1171E:
    /* 0001171e   4  andi.w #1f,D3 */
    c->pc = RC_ADDR(0x0001171eu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 & 0x0000001fu;
    rc_d_set(c, 3, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_11722:
    /* 00011722   4  addi.w #21,D3 */
    c->pc = RC_ADDR(0x00011722u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 + 0x00000021u;
    rc_flags_add(c, RC_W, t1, 0x00000021u, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_11726:
    /* 00011726   4  mulu.w (22,A6),D3 */
    c->pc = RC_ADDR(0x00011726u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[6] + 0x22u));
    rc_mulu(c, 3, t0);

L_1172A:
    /* 0001172a   2  asl.l #3,D3 */
    c->pc = RC_ADDR(0x0001172au);
    rc_step(c, m, 8);
    rc_d_set(c, 3, RC_L, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 3, RC_L), RC_L));

L_1172C:
    /* 0001172c   2  lsr.l D0,D3 */
    c->pc = RC_ADDR(0x0001172cu);
    rc_step(c, m, 8);
    rc_d_set(c, 3, RC_L, rc_shift(c, 1, 0, (c->d[0] & 63u), rc_d_get(c, 3, RC_L), RC_L));

L_1172E:
    /* 0001172e   2  move.l D1,D0 */
    c->pc = RC_ADDR(0x0001172eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11730:
    /* 00011730   2  sub.l D2,D0 */
    c->pc = RC_ADDR(0x00011730u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_11732:
    /* 00011732   2  bpl 00011736 */
    c->pc = RC_ADDR(0x00011732u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_11736;

L_11734:
    /* 00011734   2  neg.l D0 */
    c->pc = RC_ADDR(0x00011734u);
    rc_step(c, m, 6);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_11736:
    /* 00011736   2  cmp.l D3,D0 */
    c->pc = RC_ADDR(0x00011736u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 3, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_11738:
    /* 00011738   2  bgt 0001174c */
    c->pc = RC_ADDR(0x00011738u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1174C;

L_1173A:
    /* 0001173a   2  move.l D1,D2 */
    c->pc = RC_ADDR(0x0001173au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1173C:
    /* 0001173c   6  cmpi.w #4,(8,A2) */
    c->pc = RC_ADDR(0x0001173cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[2] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_11742:
    /* 00011742   2  bge 00011756 */
    c->pc = RC_ADDR(0x00011742u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_11756;

L_11744:
    /* 00011744   6  addi.w #2,(8,A2) */
    c->pc = RC_ADDR(0x00011744u);
    rc_step(c, m, 20);
    t3 = (c->a[2] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1174A:
    /* 0001174a   2  bra 00011756 */
    c->pc = RC_ADDR(0x0001174au);
    rc_step(c, m, 10);
    goto L_11756;

L_1174C:
    /* 0001174c   2  cmp.l D1,D2 */
    c->pc = RC_ADDR(0x0001174cu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 2, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1174E:
    /* 0001174e   2  blt 00011754 */
    c->pc = RC_ADDR(0x0001174eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_11754;

L_11750:
    /* 00011750   2  sub.l D3,D2 */
    c->pc = RC_ADDR(0x00011750u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 3, RC_L);
    t1 = rc_d_get(c, 2, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_L, t2);

L_11752:
    /* 00011752   2  bra 00011756 */
    c->pc = RC_ADDR(0x00011752u);
    rc_step(c, m, 10);
    goto L_11756;

L_11754:
    /* 00011754   2  add.l D3,D2 */
    c->pc = RC_ADDR(0x00011754u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 3, RC_L);
    t1 = rc_d_get(c, 2, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_L, t2);

L_11756:
    /* 00011756   4  move.l D2,(a,A2) */
    c->pc = RC_ADDR(0x00011756u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[2] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1175A:
    /* 0001175a   4  move.w (6,A2),D0 */
    c->pc = RC_ADDR(0x0001175au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1175E:
    /* 0001175e   4  move.w (12,A2),D1 */
    c->pc = RC_ADDR(0x0001175eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11762:
    /* 00011762   4  move.w (1a,A3),D2 */
    c->pc = RC_ADDR(0x00011762u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x1au));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11766:
    /* 00011766   2  muls.w D2,D1 */
    c->pc = RC_ADDR(0x00011766u);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 2, RC_W);
    rc_muls(c, 1, t0);

L_11768:
    /* 00011768   2  asr.w #7,D1 */
    c->pc = RC_ADDR(0x00011768u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 0, 0x00000007u, rc_d_get(c, 1, RC_W), RC_W));

L_1176A:
    /* 0001176a   4  move.w (4,A6),D2 */
    c->pc = RC_ADDR(0x0001176au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0x4u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1176E:
    /* 0001176e   4  subi.w #80,D2 */
    c->pc = RC_ADDR(0x0001176eu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - 0x00000080u;
    rc_flags_sub(c, RC_W, t1, 0x00000080u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_11772:
    /* 00011772   2  sub.w D2,D1 */
    c->pc = RC_ADDR(0x00011772u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_11774:
    /* 00011774   4  addi.w #1000,D1 */
    c->pc = RC_ADDR(0x00011774u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00001000u;
    rc_flags_add(c, RC_W, t1, 0x00001000u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_11778:
    /* 00011778   2  mulu.w D1,D0 */
    c->pc = RC_ADDR(0x00011778u);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 1, RC_W);
    rc_mulu(c, 0, t0);

L_1177A:
    /* 0001177a   2  moveq #13,D1 */
    c->pc = RC_ADDR(0x0001177au);
    rc_step(c, m, 4);
    c->d[1] = 0x00000013u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1177C:
    /* 0001177c   2  lsr.l D1,D0 */
    c->pc = RC_ADDR(0x0001177cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_1177E:
    /* 0001177e   4  move.w D0,(12,A1) */
    c->pc = RC_ADDR(0x0001177eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[1] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11782:
    /* 00011782   4  move.w (0,A6),D0 */
    c->pc = RC_ADDR(0x00011782u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0x0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11786:
    /* 00011786   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00011786u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_11788:
    /* 00011788   4  mulu.w (8,A1),D0 */
    c->pc = RC_ADDR(0x00011788u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[1] + 0x8u));
    rc_mulu(c, 0, t0);

L_1178C:
    /* 0001178c   2  lsr.w #8,D0 */
    c->pc = RC_ADDR(0x0001178cu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000008u, rc_d_get(c, 0, RC_W), RC_W));

L_1178E:
    /* 0001178e   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0001178eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_11790:
    /* 00011790   4  mulu.w (8,A3),D0 */
    c->pc = RC_ADDR(0x00011790u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[3] + 0x8u));
    rc_mulu(c, 0, t0);

L_11794:
    /* 00011794   2  lsr.w #8,D0 */
    c->pc = RC_ADDR(0x00011794u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000008u, rc_d_get(c, 0, RC_W), RC_W));

L_11796:
    /* 00011796   4  move.l (a,A2),D1 */
    c->pc = RC_ADDR(0x00011796u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0xau));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1179A:
    /* 0001179a   2  swap D1 */
    c->pc = RC_ADDR(0x0001179au);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_1179C:
    /* 0001179c   2  mulu.w D1,D0 */
    c->pc = RC_ADDR(0x0001179cu);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 1, RC_W);
    rc_mulu(c, 0, t0);

L_1179E:
    /* 0001179e   2  moveq #a,D1 */
    c->pc = RC_ADDR(0x0001179eu);
    rc_step(c, m, 4);
    c->d[1] = 0x0000000au;
    rc_set_nzvc(c, c->d[1], RC_L);

L_117A0:
    /* 000117a0   2  lsr.w D1,D0 */
    c->pc = RC_ADDR(0x000117a0u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_W), RC_W));

L_117A2:
    /* 000117a2   4  move.w D0,(14,A1) */
    c->pc = RC_ADDR(0x000117a2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[1] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_117A6:
    /* 000117a6   2  clr.l D0 */
    c->pc = RC_ADDR(0x000117a6u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_117A8:
    /* 000117a8   6  cmpi.w #2,(a,A1) */
    c->pc = RC_ADDR(0x000117a8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[1] + 0xau));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_117AE:
    /* 000117ae   2  bne 000117b2 */
    c->pc = RC_ADDR(0x000117aeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_117B2;

L_117B0:
    /* 000117b0   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x000117b0u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_117B2:
    /* 000117b2   2  rts */
    c->pc = RC_ADDR(0x000117b2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
