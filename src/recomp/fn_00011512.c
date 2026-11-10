/* fn_00011512 - 276 byte(s), 75 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00011512(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00011512u): goto L_11512;
    case RC_ADDR(0x00011516u): goto L_11516;
    case RC_ADDR(0x0001151au): goto L_1151A;
    case RC_ADDR(0x00011522u): goto L_11522;
    case RC_ADDR(0x00011528u): goto L_11528;
    case RC_ADDR(0x00011530u): goto L_11530;
    case RC_ADDR(0x00011538u): goto L_11538;
    case RC_ADDR(0x0001153cu): goto L_1153C;
    case RC_ADDR(0x00011540u): goto L_11540;
    case RC_ADDR(0x00011546u): goto L_11546;
    case RC_ADDR(0x0001154au): goto L_1154A;
    case RC_ADDR(0x0001154eu): goto L_1154E;
    case RC_ADDR(0x00011552u): goto L_11552;
    case RC_ADDR(0x00011554u): goto L_11554;
    case RC_ADDR(0x00011556u): goto L_11556;
    case RC_ADDR(0x0001155au): goto L_1155A;
    case RC_ADDR(0x0001155eu): goto L_1155E;
    case RC_ADDR(0x00011562u): goto L_11562;
    case RC_ADDR(0x00011566u): goto L_11566;
    case RC_ADDR(0x00011568u): goto L_11568;
    case RC_ADDR(0x0001156au): goto L_1156A;
    case RC_ADDR(0x0001156cu): goto L_1156C;
    case RC_ADDR(0x00011570u): goto L_11570;
    case RC_ADDR(0x00011574u): goto L_11574;
    case RC_ADDR(0x00011578u): goto L_11578;
    case RC_ADDR(0x0001157cu): goto L_1157C;
    case RC_ADDR(0x0001157eu): goto L_1157E;
    case RC_ADDR(0x00011580u): goto L_11580;
    case RC_ADDR(0x00011582u): goto L_11582;
    case RC_ADDR(0x00011588u): goto L_11588;
    case RC_ADDR(0x0001158cu): goto L_1158C;
    case RC_ADDR(0x0001158eu): goto L_1158E;
    case RC_ADDR(0x00011590u): goto L_11590;
    case RC_ADDR(0x00011594u): goto L_11594;
    case RC_ADDR(0x00011596u): goto L_11596;
    case RC_ADDR(0x0001159au): goto L_1159A;
    case RC_ADDR(0x0001159eu): goto L_1159E;
    case RC_ADDR(0x000115a2u): goto L_115A2;
    case RC_ADDR(0x000115a4u): goto L_115A4;
    case RC_ADDR(0x000115a8u): goto L_115A8;
    case RC_ADDR(0x000115acu): goto L_115AC;
    case RC_ADDR(0x000115b0u): goto L_115B0;
    case RC_ADDR(0x000115b2u): goto L_115B2;
    case RC_ADDR(0x000115b6u): goto L_115B6;
    case RC_ADDR(0x000115bau): goto L_115BA;
    case RC_ADDR(0x000115beu): goto L_115BE;
    case RC_ADDR(0x000115c0u): goto L_115C0;
    case RC_ADDR(0x000115c2u): goto L_115C2;
    case RC_ADDR(0x000115c6u): goto L_115C6;
    case RC_ADDR(0x000115c8u): goto L_115C8;
    case RC_ADDR(0x000115cau): goto L_115CA;
    case RC_ADDR(0x000115ceu): goto L_115CE;
    case RC_ADDR(0x000115d4u): goto L_115D4;
    case RC_ADDR(0x000115d8u): goto L_115D8;
    case RC_ADDR(0x000115dau): goto L_115DA;
    case RC_ADDR(0x000115e0u): goto L_115E0;
    case RC_ADDR(0x000115e4u): goto L_115E4;
    case RC_ADDR(0x000115e6u): goto L_115E6;
    case RC_ADDR(0x000115ecu): goto L_115EC;
    case RC_ADDR(0x000115eeu): goto L_115EE;
    case RC_ADDR(0x000115f0u): goto L_115F0;
    case RC_ADDR(0x000115f2u): goto L_115F2;
    case RC_ADDR(0x000115f8u): goto L_115F8;
    case RC_ADDR(0x00011600u): goto L_11600;
    case RC_ADDR(0x00011602u): goto L_11602;
    case RC_ADDR(0x00011606u): goto L_11606;
    case RC_ADDR(0x0001160au): goto L_1160A;
    case RC_ADDR(0x0001160cu): goto L_1160C;
    case RC_ADDR(0x00011610u): goto L_11610;
    case RC_ADDR(0x00011612u): goto L_11612;
    case RC_ADDR(0x00011616u): goto L_11616;
    case RC_ADDR(0x0001161au): goto L_1161A;
    case RC_ADDR(0x0001161eu): goto L_1161E;
    case RC_ADDR(0x00011622u): goto L_11622;
    case RC_ADDR(0x00011624u): goto L_11624;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11512:
    /* 00011512   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00011512u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_11516:
    /* 00011516   4  movem.l { D1 D2 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x00011516u);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_1151A:
    /* 0001151a   8  move.w #9f0,(00dff040).l */
    c->pc = RC_ADDR(0x0001151au);
    t0 = 0x000009f0u;
    rc_wr16(c, m, RC_ADDR(0x00dff040u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11522:
    /* 00011522   6  clr.w (00dff042).l */
    c->pc = RC_ADDR(0x00011522u);
    rc_wr16(c, m, RC_ADDR(0x00dff042u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11528:
    /* 00011528   8  move.w #ffff,(00dff044).l */
    c->pc = RC_ADDR(0x00011528u);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, RC_ADDR(0x00dff044u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11530:
    /* 00011530   8  move.w #ffff,(00dff046).l */
    c->pc = RC_ADDR(0x00011530u);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, RC_ADDR(0x00dff046u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11538:
    /* 00011538   4  lea (fffff300,A4),A3 */
    c->pc = RC_ADDR(0x00011538u);
    c->a[3] = (c->a[4] - 0xd00u);

L_1153C:
    /* 0001153c   4  lea (fffff326,A4),A6 */
    c->pc = RC_ADDR(0x0001153cu);
    c->a[6] = (c->a[4] - 0xcdau);

L_11540:
    /* 00011540   6  move.w #4,(fffff2da,A4) */
    c->pc = RC_ADDR(0x00011540u);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] - 0xd26u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11546:
    /* 00011546   4  movea.l (fffff314,A4),A5 */
    c->pc = RC_ADDR(0x00011546u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xcecu));
    c->a[5] = t0;

L_1154A:
    /* 0001154a   4  move.l (fffff2e8,A4),D5 */
    c->pc = RC_ADDR(0x0001154au);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd18u));
    rc_d_set(c, 5, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1154E:
    /* 0001154e   4  sub.w (fffff2d2,A4),D5 */
    c->pc = RC_ADDR(0x0001154eu);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd2eu));
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_11552:
    /* 00011552   2  movea.l (A3)+,A1 */
    c->pc = RC_ADDR(0x00011552u);
    t3 = c->a[3];
    c->a[3] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;

L_11554:
    /* 00011554   2  movea.l (A6)+,A2 */
    c->pc = RC_ADDR(0x00011554u);
    t3 = c->a[6];
    c->a[6] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_11556:
    /* 00011556   4  movea.l (fffff2f8,A4),A0 */
    c->pc = RC_ADDR(0x00011556u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd08u));
    c->a[0] = t0;

L_1155A:
    /* 0001155a   4  adda.l (fffff2e4,A4),A0 */
    c->pc = RC_ADDR(0x0001155au);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd1cu));
    c->a[0] += t0;

L_1155E:
    /* 0001155e   4  move.w (dec,A4),D7 */
    c->pc = RC_ADDR(0x0001155eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdecu));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11562:
    /* 00011562   4  tst.w (fffff2d2,A4) */
    c->pc = RC_ADDR(0x00011562u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd2eu));
    rc_set_nzvc(c, t0, RC_W);

L_11566:
    /* 00011566   2  beq 0001156a */
    c->pc = RC_ADDR(0x00011566u);
    if (rc_cond(c, 7)) goto L_1156A;

L_11568:
    /* 00011568   2  addq.w #1,D7 */
    c->pc = RC_ADDR(0x00011568u);
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_1156A:
    /* 0001156a   2  clr.l D4 */
    c->pc = RC_ADDR(0x0001156au);
    rc_d_set(c, 4, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1156C:
    /* 0001156c   4  bset #1,D4 */
    c->pc = RC_ADDR(0x0001156cu);
    t4 = 0x00000001u;
    t0 = rc_d_get(c, 4, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 4, RC_B, t2);

L_11570:
    /* 00011570   4  move.l (dee,A4),D2 */
    c->pc = RC_ADDR(0x00011570u);
    t0 = rc_rd32(c, m, (c->a[4] + 0xdeeu));
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11574:
    /* 00011574   4  move.w (dea,A4),D6 */
    c->pc = RC_ADDR(0x00011574u);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdeau));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11578:
    /* 00011578   4  tst.w (fffff2d6,A4) */
    c->pc = RC_ADDR(0x00011578u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd2au));
    rc_set_nzvc(c, t0, RC_W);

L_1157C:
    /* 0001157c   2  beq 00011582 */
    c->pc = RC_ADDR(0x0001157cu);
    if (rc_cond(c, 7)) goto L_11582;

L_1157E:
    /* 0001157e   2  addq.w #1,D6 */
    c->pc = RC_ADDR(0x0001157eu);
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_11580:
    /* 00011580   2  subq.l #2,D2 */
    c->pc = RC_ADDR(0x00011580u);
    t1 = rc_d_get(c, 2, RC_L);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 2, RC_L, t2);

L_11582:
    /* 00011582   6  move.l A2,(00dff054).l */
    c->pc = RC_ADDR(0x00011582u);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, RC_ADDR(0x00dff054u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11588:
    /* 00011588   4  bset #2,D4 */
    c->pc = RC_ADDR(0x00011588u);
    t4 = 0x00000002u;
    t0 = rc_d_get(c, 4, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 4, RC_B, t2);

L_1158C:
    /* 0001158c   2  clr.l D0 */
    c->pc = RC_ADDR(0x0001158cu);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1158E:
    /* 0001158e   2  move.w (A0)+,D0 */
    c->pc = RC_ADDR(0x0001158eu);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11590:
    /* 00011590   4  move.w (0,A5,D0.w),D0 */
    c->pc = RC_ADDR(0x00011590u);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[5] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11594:
    /* 00011594   2  add.l A1,D0 */
    c->pc = RC_ADDR(0x00011594u);
    t0 = rc_a_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_11596:
    /* 00011596   4  move.w (fffff2ec,A4),D1 */
    c->pc = RC_ADDR(0x00011596u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd14u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1159A:
    /* 0001159a   4  move.w (fffff2ee,A4),D3 */
    c->pc = RC_ADDR(0x0001159au);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd12u));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1159E:
    /* 0001159e   4  btst #1,D4 */
    c->pc = RC_ADDR(0x0001159eu);
    t4 = 0x00000001u;
    t0 = rc_d_get(c, 4, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_115A2:
    /* 000115a2   2  beq 000115ac */
    c->pc = RC_ADDR(0x000115a2u);
    if (rc_cond(c, 7)) goto L_115AC;

L_115A4:
    /* 000115a4   4  sub.w (fffff2d2,A4),D1 */
    c->pc = RC_ADDR(0x000115a4u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd2eu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_115A8:
    /* 000115a8   4  add.l (fffff2dc,A4),D0 */
    c->pc = RC_ADDR(0x000115a8u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd24u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_115AC:
    /* 000115ac   4  btst #2,D4 */
    c->pc = RC_ADDR(0x000115acu);
    t4 = 0x00000002u;
    t0 = rc_d_get(c, 4, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_115B0:
    /* 000115b0   2  beq 000115be */
    c->pc = RC_ADDR(0x000115b0u);
    if (rc_cond(c, 7)) goto L_115BE;

L_115B2:
    /* 000115b2   4  bclr #2,D4 */
    c->pc = RC_ADDR(0x000115b2u);
    t4 = 0x00000002u;
    t0 = rc_d_get(c, 4, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 & ~(1u << t4);
    rc_d_set(c, 4, RC_B, t2);

L_115B6:
    /* 000115b6   4  sub.w (fffff2d6,A4),D3 */
    c->pc = RC_ADDR(0x000115b6u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd2au));
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_115BA:
    /* 000115ba   4  add.l (fffff2e0,A4),D0 */
    c->pc = RC_ADDR(0x000115bau);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd20u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_115BE:
    /* 000115be   2  tst.w D6 */
    c->pc = RC_ADDR(0x000115beu);
    t0 = rc_d_get(c, 6, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_115C0:
    /* 000115c0   2  bne 000115c6 */
    c->pc = RC_ADDR(0x000115c0u);
    if (rc_cond(c, 6)) goto L_115C6;

L_115C2:
    /* 000115c2   4  sub.w (fffff2d8,A4),D3 */
    c->pc = RC_ADDR(0x000115c2u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd28u));
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_115C6:
    /* 000115c6   2  tst.w D7 */
    c->pc = RC_ADDR(0x000115c6u);
    t0 = rc_d_get(c, 7, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_115C8:
    /* 000115c8   2  bne 000115ce */
    c->pc = RC_ADDR(0x000115c8u);
    if (rc_cond(c, 6)) goto L_115CE;

L_115CA:
    /* 000115ca   4  sub.w (fffff2d4,A4),D1 */
    c->pc = RC_ADDR(0x000115cau);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd2cu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_115CE:
    /* 000115ce   6  move.l D0,(00dff050).l */
    c->pc = RC_ADDR(0x000115ceu);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, RC_ADDR(0x00dff050u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_115D4:
    /* 000115d4   4  move.w (fffff2ce,A4),D0 */
    c->pc = RC_ADDR(0x000115d4u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd32u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_115D8:
    /* 000115d8   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x000115d8u);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_115DA:
    /* 000115da   6  move.w D0,(00dff066).l */
    c->pc = RC_ADDR(0x000115dau);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, RC_ADDR(0x00dff066u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_115E0:
    /* 000115e0   4  move.w (fffff2f4,A4),D0 */
    c->pc = RC_ADDR(0x000115e0u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_115E4:
    /* 000115e4   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x000115e4u);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_115E6:
    /* 000115e6   6  move.w D0,(00dff064).l */
    c->pc = RC_ADDR(0x000115e6u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, RC_ADDR(0x00dff064u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_115EC:
    /* 000115ec   2  lsl.w #6,D3 */
    c->pc = RC_ADDR(0x000115ecu);
    c->d[3] = rc_shift(c, 1, 1, 0x00000006u, rc_d_get(c, 3, RC_W), RC_W);

L_115EE:
    /* 000115ee   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x000115eeu);
    c->d[1] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W);

L_115F0:
    /* 000115f0   2  or.w D1,D3 */
    c->pc = RC_ADDR(0x000115f0u);
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 | rc_d_get(c, 3, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 3, RC_W, t2);

L_115F2:
    /* 000115f2   6  move.w D3,(00dff058).l */
    c->pc = RC_ADDR(0x000115f2u);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, RC_ADDR(0x00dff058u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_115F8:
    /* 000115f8   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x000115f8u);
    t4 = 0x00000006u;
    t3 = RC_ADDR(0x00dff002u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_11600:
    /* 00011600   2  bne 000115f8 */
    c->pc = RC_ADDR(0x00011600u);
    if (rc_cond(c, 6)) { rc_tick(); goto L_115F8; }

L_11602:
    /* 00011602   4  dbf D6,0001158c */
    c->pc = RC_ADDR(0x00011602u);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 6, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 6, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1158C; }
    }

L_11606:
    /* 00011606   4  bclr #1,D4 */
    c->pc = RC_ADDR(0x00011606u);
    t4 = 0x00000001u;
    t0 = rc_d_get(c, 4, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 & ~(1u << t4);
    rc_d_set(c, 4, RC_B, t2);

L_1160A:
    /* 0001160a   2  adda.l D5,A2 */
    c->pc = RC_ADDR(0x0001160au);
    t0 = rc_d_get(c, 5, RC_L);
    c->a[2] += t0;

L_1160C:
    /* 0001160c   4  move.l (fffff2e8,A4),D5 */
    c->pc = RC_ADDR(0x0001160cu);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd18u));
    rc_d_set(c, 5, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11610:
    /* 00011610   2  adda.l D2,A0 */
    c->pc = RC_ADDR(0x00011610u);
    t0 = rc_d_get(c, 2, RC_L);
    c->a[0] += t0;

L_11612:
    /* 00011612   4  dbf D7,00011570 */
    c->pc = RC_ADDR(0x00011612u);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 7, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 7, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_11570; }
    }

L_11616:
    /* 00011616   4  subq.w #1,(fffff2da,A4) */
    c->pc = RC_ADDR(0x00011616u);
    t3 = (c->a[4] - 0xd26u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1161A:
    /* 0001161a   4  bpl 0001154a */
    c->pc = RC_ADDR(0x0001161au);
    if (rc_cond(c, 10)) { rc_tick(); goto L_1154A; }

L_1161E:
    /* 0001161e   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A5 A6 } */
    c->pc = RC_ADDR(0x0001161eu);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_11622:
    /* 00011622   2  unlk A5 */
    c->pc = RC_ADDR(0x00011622u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_11624:
    /* 00011624   2  rts */
    c->pc = RC_ADDR(0x00011624u);
    rc_ret(c, m);
    return;

}
