/* fn_0001507c - 362 byte(s), 120 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001507c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001507cu): goto L_1507C;
    case RC_ADDR(0x00015080u): goto L_15080;
    case RC_ADDR(0x00015084u): goto L_15084;
    case RC_ADDR(0x0001508au): goto L_1508A;
    case RC_ADDR(0x0001508eu): goto L_1508E;
    case RC_ADDR(0x00015090u): goto L_15090;
    case RC_ADDR(0x00015094u): goto L_15094;
    case RC_ADDR(0x00015096u): goto L_15096;
    case RC_ADDR(0x00015098u): goto L_15098;
    case RC_ADDR(0x0001509au): goto L_1509A;
    case RC_ADDR(0x0001509eu): goto L_1509E;
    case RC_ADDR(0x000150a2u): goto L_150A2;
    case RC_ADDR(0x000150a6u): goto L_150A6;
    case RC_ADDR(0x000150a8u): goto L_150A8;
    case RC_ADDR(0x000150aau): goto L_150AA;
    case RC_ADDR(0x000150acu): goto L_150AC;
    case RC_ADDR(0x000150b0u): goto L_150B0;
    case RC_ADDR(0x000150b4u): goto L_150B4;
    case RC_ADDR(0x000150b6u): goto L_150B6;
    case RC_ADDR(0x000150b8u): goto L_150B8;
    case RC_ADDR(0x000150bau): goto L_150BA;
    case RC_ADDR(0x000150beu): goto L_150BE;
    case RC_ADDR(0x000150c2u): goto L_150C2;
    case RC_ADDR(0x000150c4u): goto L_150C4;
    case RC_ADDR(0x000150c8u): goto L_150C8;
    case RC_ADDR(0x000150ccu): goto L_150CC;
    case RC_ADDR(0x000150ceu): goto L_150CE;
    case RC_ADDR(0x000150d2u): goto L_150D2;
    case RC_ADDR(0x000150d4u): goto L_150D4;
    case RC_ADDR(0x000150d8u): goto L_150D8;
    case RC_ADDR(0x000150dcu): goto L_150DC;
    case RC_ADDR(0x000150deu): goto L_150DE;
    case RC_ADDR(0x000150e2u): goto L_150E2;
    case RC_ADDR(0x000150e4u): goto L_150E4;
    case RC_ADDR(0x000150e8u): goto L_150E8;
    case RC_ADDR(0x000150ecu): goto L_150EC;
    case RC_ADDR(0x000150eeu): goto L_150EE;
    case RC_ADDR(0x000150f2u): goto L_150F2;
    case RC_ADDR(0x000150f4u): goto L_150F4;
    case RC_ADDR(0x000150f8u): goto L_150F8;
    case RC_ADDR(0x000150fcu): goto L_150FC;
    case RC_ADDR(0x000150feu): goto L_150FE;
    case RC_ADDR(0x00015102u): goto L_15102;
    case RC_ADDR(0x00015104u): goto L_15104;
    case RC_ADDR(0x00015106u): goto L_15106;
    case RC_ADDR(0x00015108u): goto L_15108;
    case RC_ADDR(0x0001510cu): goto L_1510C;
    case RC_ADDR(0x00015112u): goto L_15112;
    case RC_ADDR(0x00015114u): goto L_15114;
    case RC_ADDR(0x00015116u): goto L_15116;
    case RC_ADDR(0x00015118u): goto L_15118;
    case RC_ADDR(0x0001511cu): goto L_1511C;
    case RC_ADDR(0x00015120u): goto L_15120;
    case RC_ADDR(0x00015122u): goto L_15122;
    case RC_ADDR(0x00015124u): goto L_15124;
    case RC_ADDR(0x00015128u): goto L_15128;
    case RC_ADDR(0x0001512cu): goto L_1512C;
    case RC_ADDR(0x0001512eu): goto L_1512E;
    case RC_ADDR(0x00015132u): goto L_15132;
    case RC_ADDR(0x00015134u): goto L_15134;
    case RC_ADDR(0x00015136u): goto L_15136;
    case RC_ADDR(0x00015138u): goto L_15138;
    case RC_ADDR(0x0001513au): goto L_1513A;
    case RC_ADDR(0x0001513eu): goto L_1513E;
    case RC_ADDR(0x00015142u): goto L_15142;
    case RC_ADDR(0x00015144u): goto L_15144;
    case RC_ADDR(0x00015146u): goto L_15146;
    case RC_ADDR(0x0001514au): goto L_1514A;
    case RC_ADDR(0x0001514eu): goto L_1514E;
    case RC_ADDR(0x00015152u): goto L_15152;
    case RC_ADDR(0x00015154u): goto L_15154;
    case RC_ADDR(0x00015158u): goto L_15158;
    case RC_ADDR(0x0001515cu): goto L_1515C;
    case RC_ADDR(0x0001515eu): goto L_1515E;
    case RC_ADDR(0x00015160u): goto L_15160;
    case RC_ADDR(0x00015162u): goto L_15162;
    case RC_ADDR(0x00015164u): goto L_15164;
    case RC_ADDR(0x00015166u): goto L_15166;
    case RC_ADDR(0x0001516au): goto L_1516A;
    case RC_ADDR(0x0001516cu): goto L_1516C;
    case RC_ADDR(0x0001516eu): goto L_1516E;
    case RC_ADDR(0x00015170u): goto L_15170;
    case RC_ADDR(0x00015174u): goto L_15174;
    case RC_ADDR(0x00015178u): goto L_15178;
    case RC_ADDR(0x0001517au): goto L_1517A;
    case RC_ADDR(0x0001517cu): goto L_1517C;
    case RC_ADDR(0x0001517eu): goto L_1517E;
    case RC_ADDR(0x00015180u): goto L_15180;
    case RC_ADDR(0x00015182u): goto L_15182;
    case RC_ADDR(0x00015186u): goto L_15186;
    case RC_ADDR(0x00015188u): goto L_15188;
    case RC_ADDR(0x0001518au): goto L_1518A;
    case RC_ADDR(0x0001518cu): goto L_1518C;
    case RC_ADDR(0x0001518eu): goto L_1518E;
    case RC_ADDR(0x00015190u): goto L_15190;
    case RC_ADDR(0x00015194u): goto L_15194;
    case RC_ADDR(0x00015198u): goto L_15198;
    case RC_ADDR(0x0001519eu): goto L_1519E;
    case RC_ADDR(0x000151a0u): goto L_151A0;
    case RC_ADDR(0x000151a2u): goto L_151A2;
    case RC_ADDR(0x000151a4u): goto L_151A4;
    case RC_ADDR(0x000151a6u): goto L_151A6;
    case RC_ADDR(0x000151aau): goto L_151AA;
    case RC_ADDR(0x000151b0u): goto L_151B0;
    case RC_ADDR(0x000151b4u): goto L_151B4;
    case RC_ADDR(0x000151b6u): goto L_151B6;
    case RC_ADDR(0x000151b8u): goto L_151B8;
    case RC_ADDR(0x000151bcu): goto L_151BC;
    case RC_ADDR(0x000151beu): goto L_151BE;
    case RC_ADDR(0x000151c4u): goto L_151C4;
    case RC_ADDR(0x000151cau): goto L_151CA;
    case RC_ADDR(0x000151ceu): goto L_151CE;
    case RC_ADDR(0x000151d0u): goto L_151D0;
    case RC_ADDR(0x000151d4u): goto L_151D4;
    case RC_ADDR(0x000151d6u): goto L_151D6;
    case RC_ADDR(0x000151d8u): goto L_151D8;
    case RC_ADDR(0x000151dau): goto L_151DA;
    case RC_ADDR(0x000151deu): goto L_151DE;
    case RC_ADDR(0x000151e2u): goto L_151E2;
    case RC_ADDR(0x000151e4u): goto L_151E4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1507C:
    /* 0001507c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001507cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_15080:
    /* 00015080   4  movem.l { D5 A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x00015080u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_15084:
    /* 00015084   6  btst #3,(aeb,A4) */
    c->pc = RC_ADDR(0x00015084u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xaebu);
    t4 = 0x00000003u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1508A:
    /* 0001508a   4  beq 000151e2 */
    c->pc = RC_ADDR(0x0001508au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_151E2;

L_1508E:
    /* 0001508e   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0001508eu);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_15090:
    /* 00015090   4  bra 000151da */
    c->pc = RC_ADDR(0x00015090u);
    rc_step(c, m, 10);
    goto L_151DA;

L_15094:
    /* 00015094   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00015094u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15096:
    /* 00015096   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015096u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_15098:
    /* 00015098   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015098u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1509A:
    /* 0001509a   4  lea (1214,A4),A0 */
    c->pc = RC_ADDR(0x0001509au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1214u);

L_1509E:
    /* 0001509e   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001509eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_150A2:
    /* 000150a2   4  bne 000151d8 */
    c->pc = RC_ADDR(0x000150a2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_151D8;

L_150A6:
    /* 000150a6   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x000150a6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_150A8:
    /* 000150a8   2  ext.l D0 */
    c->pc = RC_ADDR(0x000150a8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_150AA:
    /* 000150aa   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000150aau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_150AC:
    /* 000150ac   4  lea (11e4,A4),A0 */
    c->pc = RC_ADDR(0x000150acu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x11e4u);

L_150B0:
    /* 000150b0   4  move.w (0,A0,D0.w),D5 */
    c->pc = RC_ADDR(0x000150b0u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_150B4:
    /* 000150b4   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x000150b4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_150B6:
    /* 000150b6   2  ext.l D0 */
    c->pc = RC_ADDR(0x000150b6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_150B8:
    /* 000150b8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000150b8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_150BA:
    /* 000150ba   4  lea (11ec,A4),A0 */
    c->pc = RC_ADDR(0x000150bau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x11ecu);

L_150BE:
    /* 000150be   4  move.w (0,A0,D0.w),D6 */
    c->pc = RC_ADDR(0x000150beu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_150C2:
    /* 000150c2   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x000150c2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_150C4:
    /* 000150c4   4  sub.w #96,D0 */
    c->pc = RC_ADDR(0x000150c4u);
    rc_step(c, m, 10);
    t0 = 0x00000096u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_150C8:
    /* 000150c8   4  move.w (8,A5),D1 */
    c->pc = RC_ADDR(0x000150c8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_150CC:
    /* 000150cc   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x000150ccu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_150CE:
    /* 000150ce   4  ble 000151d8 */
    c->pc = RC_ADDR(0x000150ceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_151D8;

L_150D2:
    /* 000150d2   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x000150d2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_150D4:
    /* 000150d4   4  add.w #a0,D0 */
    c->pc = RC_ADDR(0x000150d4u);
    rc_step(c, m, 10);
    t0 = 0x000000a0u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_150D8:
    /* 000150d8   4  move.w (8,A5),D1 */
    c->pc = RC_ADDR(0x000150d8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_150DC:
    /* 000150dc   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x000150dcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_150DE:
    /* 000150de   4  bge 000151d8 */
    c->pc = RC_ADDR(0x000150deu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_151D8;

L_150E2:
    /* 000150e2   2  move.w D6,D0 */
    c->pc = RC_ADDR(0x000150e2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_150E4:
    /* 000150e4   4  sub.w #4b,D0 */
    c->pc = RC_ADDR(0x000150e4u);
    rc_step(c, m, 10);
    t0 = 0x0000004bu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_150E8:
    /* 000150e8   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x000150e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_150EC:
    /* 000150ec   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x000150ecu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_150EE:
    /* 000150ee   4  ble 000151d8 */
    c->pc = RC_ADDR(0x000150eeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_151D8;

L_150F2:
    /* 000150f2   2  move.w D6,D0 */
    c->pc = RC_ADDR(0x000150f2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_150F4:
    /* 000150f4   4  add.w #64,D0 */
    c->pc = RC_ADDR(0x000150f4u);
    rc_step(c, m, 10);
    t0 = 0x00000064u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_150F8:
    /* 000150f8   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x000150f8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_150FC:
    /* 000150fc   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x000150fcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_150FE:
    /* 000150fe   4  bge 000151d8 */
    c->pc = RC_ADDR(0x000150feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_151D8;

L_15102:
    /* 00015102   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00015102u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15104:
    /* 00015104   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015104u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_15106:
    /* 00015106   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015106u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_15108:
    /* 00015108   4  lea (128a,A4),A0 */
    c->pc = RC_ADDR(0x00015108u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x128au);

L_1510C:
    /* 0001510c   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001510cu);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15112:
    /* 00015112   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00015112u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15114:
    /* 00015114   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015114u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_15116:
    /* 00015116   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015116u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_15118:
    /* 00015118   4  lea (1204,A4),A0 */
    c->pc = RC_ADDR(0x00015118u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1204u);

L_1511C:
    /* 0001511c   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001511cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15120:
    /* 00015120   2  ext.l D1 */
    c->pc = RC_ADDR(0x00015120u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_15122:
    /* 00015122   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00015122u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_15124:
    /* 00015124   4  lea (11a0,A4),A0 */
    c->pc = RC_ADDR(0x00015124u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x11a0u);

L_15128:
    /* 00015128   4  movea.l (0,A0,D1.w),A1 */
    c->pc = RC_ADDR(0x00015128u);
    rc_step(c, m, 18);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_1512C:
    /* 0001512c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001512cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1512E:
    /* 0001512e   4  move.b (4,A1),D0 */
    c->pc = RC_ADDR(0x0001512eu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[1] + 0x4u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_15132:
    /* 00015132   2  move.w D0,D7 */
    c->pc = RC_ADDR(0x00015132u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15134:
    /* 00015134   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00015134u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15136:
    /* 00015136   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015136u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_15138:
    /* 00015138   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015138u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1513A:
    /* 0001513a   4  lea (1204,A4),A0 */
    c->pc = RC_ADDR(0x0001513au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1204u);

L_1513E:
    /* 0001513e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001513eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15142:
    /* 00015142   2  ext.l D1 */
    c->pc = RC_ADDR(0x00015142u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_15144:
    /* 00015144   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00015144u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_15146:
    /* 00015146   4  lea (11a0,A4),A0 */
    c->pc = RC_ADDR(0x00015146u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x11a0u);

L_1514A:
    /* 0001514a   4  movea.l (0,A0,D1.w),A1 */
    c->pc = RC_ADDR(0x0001514au);
    rc_step(c, m, 18);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_1514E:
    /* 0001514e   4  movea.w (2,A1),A2 */
    c->pc = RC_ADDR(0x0001514eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x2u));
    c->a[2] = rc_ext(t0, RC_W);

L_15152:
    /* 00015152   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x00015152u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15154:
    /* 00015154   4  sub.w #10,D0 */
    c->pc = RC_ADDR(0x00015154u);
    rc_step(c, m, 10);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15158:
    /* 00015158   4  move.w (8,A5),D1 */
    c->pc = RC_ADDR(0x00015158u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1515C:
    /* 0001515c   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x0001515cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1515E:
    /* 0001515e   2  ble 000151d8 */
    c->pc = RC_ADDR(0x0001515eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_151D8;

L_15160:
    /* 00015160   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x00015160u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15162:
    /* 00015162   2  add.w D7,D0 */
    c->pc = RC_ADDR(0x00015162u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15164:
    /* 00015164   2  addq.w #4,D0 */
    c->pc = RC_ADDR(0x00015164u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000004u;
    rc_flags_add(c, RC_W, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15166:
    /* 00015166   4  move.w (8,A5),D1 */
    c->pc = RC_ADDR(0x00015166u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1516A:
    /* 0001516a   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x0001516au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1516C:
    /* 0001516c   2  bge 000151d8 */
    c->pc = RC_ADDR(0x0001516cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_151D8;

L_1516E:
    /* 0001516e   2  move.w D6,D0 */
    c->pc = RC_ADDR(0x0001516eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15170:
    /* 00015170   4  sub.w #a,D0 */
    c->pc = RC_ADDR(0x00015170u);
    rc_step(c, m, 10);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15174:
    /* 00015174   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x00015174u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15178:
    /* 00015178   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00015178u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1517A:
    /* 0001517a   2  ble 000151d8 */
    c->pc = RC_ADDR(0x0001517au);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_151D8;

L_1517C:
    /* 0001517c   2  move.w D6,D0 */
    c->pc = RC_ADDR(0x0001517cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1517E:
    /* 0001517e   2  add.w A2,D0 */
    c->pc = RC_ADDR(0x0001517eu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15180:
    /* 00015180   2  addq.w #4,D0 */
    c->pc = RC_ADDR(0x00015180u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000004u;
    rc_flags_add(c, RC_W, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15182:
    /* 00015182   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x00015182u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15186:
    /* 00015186   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00015186u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15188:
    /* 00015188   2  bge 000151d8 */
    c->pc = RC_ADDR(0x00015188u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_151D8;

L_1518A:
    /* 0001518a   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x0001518au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1518C:
    /* 0001518c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001518cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1518E:
    /* 0001518e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001518eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_15190:
    /* 00015190   4  lea (121c,A4),A0 */
    c->pc = RC_ADDR(0x00015190u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x121cu);

L_15194:
    /* 00015194   4  addq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00015194u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15198:
    /* 00015198   6  cmpi.w #19,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00015198u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000019u);

L_1519E:
    /* 0001519e   2  bne 000151ce */
    c->pc = RC_ADDR(0x0001519eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_151CE;

L_151A0:
    /* 000151a0   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x000151a0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_151A2:
    /* 000151a2   2  ext.l D0 */
    c->pc = RC_ADDR(0x000151a2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_151A4:
    /* 000151a4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000151a4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_151A6:
    /* 000151a6   4  lea (1214,A4),A0 */
    c->pc = RC_ADDR(0x000151a6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1214u);

L_151AA:
    /* 000151aa   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000151aau);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_151B0:
    /* 000151b0   4  move.w (1244,A4),D0 */
    c->pc = RC_ADDR(0x000151b0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1244u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_151B4:
    /* 000151b4   2  cmp.w D4,D0 */
    c->pc = RC_ADDR(0x000151b4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_151B6:
    /* 000151b6   2  bne 000151ca */
    c->pc = RC_ADDR(0x000151b6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_151CA;

L_151B8:
    /* 000151b8   4  tst.w (10b8,A4) */
    c->pc = RC_ADDR(0x000151b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10b8u));
    rc_set_nzvc(c, t0, RC_W);

L_151BC:
    /* 000151bc   2  beq 000151ca */
    c->pc = RC_ADDR(0x000151bcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_151CA;

L_151BE:
    /* 000151be   6  move.w #1,(aee,A4) */
    c->pc = RC_ADDR(0x000151beu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xaeeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_151C4:
    /* 000151c4   6  move.w #1,(ffffb2a8,A4) */
    c->pc = RC_ADDR(0x000151c4u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x4d58u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_151CA:
    /* 000151ca   4  subq.w #1,(12a8,A4) */
    c->pc = RC_ADDR(0x000151cau);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x12a8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_151CE:
    /* 000151ce   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x000151ceu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_151D0:
    /* 000151d0   4  movem.l (SP)+,{ D4 D5 D6 D7 A2 } */
    c->pc = RC_ADDR(0x000151d0u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
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
    c->a[2] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_151D4:
    /* 000151d4   2  unlk A5 */
    c->pc = RC_ADDR(0x000151d4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_151D6:
    /* 000151d6   2  rts */
    c->pc = RC_ADDR(0x000151d6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_151D8:
    /* 000151d8   2  addq.w #1,D4 */
    c->pc = RC_ADDR(0x000151d8u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_151DA:
    /* 000151da   4  cmp.w (12a6,A4),D4 */
    c->pc = RC_ADDR(0x000151dau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12a6u));
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_151DE:
    /* 000151de   4  blt 00015094 */
    c->pc = RC_ADDR(0x000151deu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_15094; }

L_151E2:
    /* 000151e2   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000151e2u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_151E4:
    /* 000151e4   2  bra 000151d0 */
    c->pc = RC_ADDR(0x000151e4u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_151D0;

}
