/* fn_00011208 - 408 byte(s), 122 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00011208(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00011208u): goto L_11208;
    case RC_ADDR(0x0001120cu): goto L_1120C;
    case RC_ADDR(0x0001120eu): goto L_1120E;
    case RC_ADDR(0x00011210u): goto L_11210;
    case RC_ADDR(0x00011212u): goto L_11212;
    case RC_ADDR(0x00011216u): goto L_11216;
    case RC_ADDR(0x00011218u): goto L_11218;
    case RC_ADDR(0x0001121cu): goto L_1121C;
    case RC_ADDR(0x00011220u): goto L_11220;
    case RC_ADDR(0x00011224u): goto L_11224;
    case RC_ADDR(0x00011228u): goto L_11228;
    case RC_ADDR(0x0001122cu): goto L_1122C;
    case RC_ADDR(0x00011230u): goto L_11230;
    case RC_ADDR(0x00011234u): goto L_11234;
    case RC_ADDR(0x00011236u): goto L_11236;
    case RC_ADDR(0x0001123au): goto L_1123A;
    case RC_ADDR(0x0001123cu): goto L_1123C;
    case RC_ADDR(0x0001123eu): goto L_1123E;
    case RC_ADDR(0x00011242u): goto L_11242;
    case RC_ADDR(0x00011244u): goto L_11244;
    case RC_ADDR(0x00011246u): goto L_11246;
    case RC_ADDR(0x00011248u): goto L_11248;
    case RC_ADDR(0x0001124au): goto L_1124A;
    case RC_ADDR(0x0001124cu): goto L_1124C;
    case RC_ADDR(0x00011250u): goto L_11250;
    case RC_ADDR(0x00011254u): goto L_11254;
    case RC_ADDR(0x00011256u): goto L_11256;
    case RC_ADDR(0x00011258u): goto L_11258;
    case RC_ADDR(0x0001125au): goto L_1125A;
    case RC_ADDR(0x0001125cu): goto L_1125C;
    case RC_ADDR(0x0001125eu): goto L_1125E;
    case RC_ADDR(0x00011260u): goto L_11260;
    case RC_ADDR(0x00011264u): goto L_11264;
    case RC_ADDR(0x00011266u): goto L_11266;
    case RC_ADDR(0x00011268u): goto L_11268;
    case RC_ADDR(0x0001126au): goto L_1126A;
    case RC_ADDR(0x00011270u): goto L_11270;
    case RC_ADDR(0x00011276u): goto L_11276;
    case RC_ADDR(0x0001127au): goto L_1127A;
    case RC_ADDR(0x0001127cu): goto L_1127C;
    case RC_ADDR(0x00011280u): goto L_11280;
    case RC_ADDR(0x00011282u): goto L_11282;
    case RC_ADDR(0x00011284u): goto L_11284;
    case RC_ADDR(0x0001128au): goto L_1128A;
    case RC_ADDR(0x0001128eu): goto L_1128E;
    case RC_ADDR(0x00011290u): goto L_11290;
    case RC_ADDR(0x00011294u): goto L_11294;
    case RC_ADDR(0x00011298u): goto L_11298;
    case RC_ADDR(0x0001129au): goto L_1129A;
    case RC_ADDR(0x0001129cu): goto L_1129C;
    case RC_ADDR(0x0001129eu): goto L_1129E;
    case RC_ADDR(0x000112a2u): goto L_112A2;
    case RC_ADDR(0x000112a4u): goto L_112A4;
    case RC_ADDR(0x000112a6u): goto L_112A6;
    case RC_ADDR(0x000112aau): goto L_112AA;
    case RC_ADDR(0x000112acu): goto L_112AC;
    case RC_ADDR(0x000112aeu): goto L_112AE;
    case RC_ADDR(0x000112b4u): goto L_112B4;
    case RC_ADDR(0x000112bau): goto L_112BA;
    case RC_ADDR(0x000112bcu): goto L_112BC;
    case RC_ADDR(0x000112beu): goto L_112BE;
    case RC_ADDR(0x000112c6u): goto L_112C6;
    case RC_ADDR(0x000112ceu): goto L_112CE;
    case RC_ADDR(0x000112d0u): goto L_112D0;
    case RC_ADDR(0x000112d4u): goto L_112D4;
    case RC_ADDR(0x000112d6u): goto L_112D6;
    case RC_ADDR(0x000112dcu): goto L_112DC;
    case RC_ADDR(0x000112e2u): goto L_112E2;
    case RC_ADDR(0x000112e6u): goto L_112E6;
    case RC_ADDR(0x000112e8u): goto L_112E8;
    case RC_ADDR(0x000112eau): goto L_112EA;
    case RC_ADDR(0x000112ecu): goto L_112EC;
    case RC_ADDR(0x000112eeu): goto L_112EE;
    case RC_ADDR(0x000112f2u): goto L_112F2;
    case RC_ADDR(0x000112f4u): goto L_112F4;
    case RC_ADDR(0x000112f8u): goto L_112F8;
    case RC_ADDR(0x000112fau): goto L_112FA;
    case RC_ADDR(0x000112feu): goto L_112FE;
    case RC_ADDR(0x00011300u): goto L_11300;
    case RC_ADDR(0x00011302u): goto L_11302;
    case RC_ADDR(0x00011304u): goto L_11304;
    case RC_ADDR(0x00011308u): goto L_11308;
    case RC_ADDR(0x0001130cu): goto L_1130C;
    case RC_ADDR(0x0001130eu): goto L_1130E;
    case RC_ADDR(0x00011310u): goto L_11310;
    case RC_ADDR(0x00011318u): goto L_11318;
    case RC_ADDR(0x00011320u): goto L_11320;
    case RC_ADDR(0x00011322u): goto L_11322;
    case RC_ADDR(0x00011324u): goto L_11324;
    case RC_ADDR(0x0001132au): goto L_1132A;
    case RC_ADDR(0x0001132eu): goto L_1132E;
    case RC_ADDR(0x00011330u): goto L_11330;
    case RC_ADDR(0x00011334u): goto L_11334;
    case RC_ADDR(0x00011336u): goto L_11336;
    case RC_ADDR(0x00011338u): goto L_11338;
    case RC_ADDR(0x0001133cu): goto L_1133C;
    case RC_ADDR(0x00011340u): goto L_11340;
    case RC_ADDR(0x00011342u): goto L_11342;
    case RC_ADDR(0x00011344u): goto L_11344;
    case RC_ADDR(0x00011348u): goto L_11348;
    case RC_ADDR(0x0001134cu): goto L_1134C;
    case RC_ADDR(0x0001134eu): goto L_1134E;
    case RC_ADDR(0x00011352u): goto L_11352;
    case RC_ADDR(0x00011354u): goto L_11354;
    case RC_ADDR(0x00011358u): goto L_11358;
    case RC_ADDR(0x0001135eu): goto L_1135E;
    case RC_ADDR(0x00011364u): goto L_11364;
    case RC_ADDR(0x00011366u): goto L_11366;
    case RC_ADDR(0x00011368u): goto L_11368;
    case RC_ADDR(0x0001136eu): goto L_1136E;
    case RC_ADDR(0x00011370u): goto L_11370;
    case RC_ADDR(0x00011372u): goto L_11372;
    case RC_ADDR(0x00011378u): goto L_11378;
    case RC_ADDR(0x0001137au): goto L_1137A;
    case RC_ADDR(0x0001137cu): goto L_1137C;
    case RC_ADDR(0x00011382u): goto L_11382;
    case RC_ADDR(0x00011388u): goto L_11388;
    case RC_ADDR(0x0001138eu): goto L_1138E;
    case RC_ADDR(0x00011396u): goto L_11396;
    case RC_ADDR(0x00011398u): goto L_11398;
    case RC_ADDR(0x0001139cu): goto L_1139C;
    case RC_ADDR(0x0001139eu): goto L_1139E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11208:
    /* 00011208   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00011208u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1120C:
    /* 0001120c   2  clr.l D4 */
    c->pc = RC_ADDR(0x0001120cu);
    rc_step(c, m, 6);
    rc_d_set(c, 4, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1120E:
    /* 0001120e   2  clr.l D5 */
    c->pc = RC_ADDR(0x0001120eu);
    rc_step(c, m, 6);
    rc_d_set(c, 5, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_11210:
    /* 00011210   2  clr.l D6 */
    c->pc = RC_ADDR(0x00011210u);
    rc_step(c, m, 6);
    rc_d_set(c, 6, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_11212:
    /* 00011212   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00011212u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_11216:
    /* 00011216   2  move.w (A0),D1 */
    c->pc = RC_ADDR(0x00011216u);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11218:
    /* 00011218   4  move.w (a,A5),D0 */
    c->pc = RC_ADDR(0x00011218u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1121C:
    /* 0001121c   4  cmpi.w #c7,D0 */
    c->pc = RC_ADDR(0x0001121cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t0, 0x000000c7u);

L_11220:
    /* 00011220   4  bgt 0001139c */
    c->pc = RC_ADDR(0x00011220u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1139C;

L_11224:
    /* 00011224   4  add.w (2,A0),D0 */
    c->pc = RC_ADDR(0x00011224u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_11228:
    /* 00011228   4  beq 0001139c */
    c->pc = RC_ADDR(0x00011228u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1139C;

L_1122C:
    /* 0001122c   4  bmi 0001139c */
    c->pc = RC_ADDR(0x0001122cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_1139C;

L_11230:
    /* 00011230   4  cmp.w (fffff2d0,A4),D0 */
    c->pc = RC_ADDR(0x00011230u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd30u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_11234:
    /* 00011234   2  blt 0001123e */
    c->pc = RC_ADDR(0x00011234u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1123E;

L_11236:
    /* 00011236   4  sub.w (fffff2d0,A4),D0 */
    c->pc = RC_ADDR(0x00011236u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd30u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1123A:
    /* 0001123a   2  move.w D0,D6 */
    c->pc = RC_ADDR(0x0001123au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1123C:
    /* 0001123c   2  bra 00011250 */
    c->pc = RC_ADDR(0x0001123cu);
    rc_step(c, m, 10);
    goto L_11250;

L_1123E:
    /* 0001123e   4  move.w (a,A5),D0 */
    c->pc = RC_ADDR(0x0001123eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11242:
    /* 00011242   2  bpl 00011250 */
    c->pc = RC_ADDR(0x00011242u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_11250;

L_11244:
    /* 00011244   2  neg.w D0 */
    c->pc = RC_ADDR(0x00011244u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_11246:
    /* 00011246   2  move.w D0,D6 */
    c->pc = RC_ADDR(0x00011246u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11248:
    /* 00011248   2  mulu.w D1,D0 */
    c->pc = RC_ADDR(0x00011248u);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 1, RC_W);
    rc_mulu(c, 0, t0);

L_1124A:
    /* 0001124a   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x0001124au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1124C:
    /* 0001124c   4  clr.w (a,A5) */
    c->pc = RC_ADDR(0x0001124cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] + 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11250:
    /* 00011250   4  move.w (8,A5),D2 */
    c->pc = RC_ADDR(0x00011250u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11254:
    /* 00011254   2  bpl 00011290 */
    c->pc = RC_ADDR(0x00011254u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_11290;

L_11256:
    /* 00011256   2  neg.w D2 */
    c->pc = RC_ADDR(0x00011256u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_11258:
    /* 00011258   2  move.w D2,D0 */
    c->pc = RC_ADDR(0x00011258u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1125A:
    /* 0001125a   2  lsr.w #4,D2 */
    c->pc = RC_ADDR(0x0001125au);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 2, RC_W), RC_W));

L_1125C:
    /* 0001125c   2  lsl.w #1,D2 */
    c->pc = RC_ADDR(0x0001125cu);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W));

L_1125E:
    /* 0001125e   2  cmp.w D1,D2 */
    c->pc = RC_ADDR(0x0001125eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_11260:
    /* 00011260   4  bge 0001139c */
    c->pc = RC_ADDR(0x00011260u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1139C;

L_11264:
    /* 00011264   2  sub.w D2,D1 */
    c->pc = RC_ADDR(0x00011264u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_11266:
    /* 00011266   2  add.w D2,D4 */
    c->pc = RC_ADDR(0x00011266u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_11268:
    /* 00011268   2  subq.w #2,D2 */
    c->pc = RC_ADDR(0x00011268u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_1126A:
    /* 0001126a   6  move.w D2,(00dff062).l */
    c->pc = RC_ADDR(0x0001126au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, 0x00dff062u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11270:
    /* 00011270   6  move.w D2,(00dff064).l */
    c->pc = RC_ADDR(0x00011270u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11276:
    /* 00011276   4  andi.w #f,D0 */
    c->pc = RC_ADDR(0x00011276u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 & 0x0000000fu;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1127A:
    /* 0001127a   2  bne 00011282 */
    c->pc = RC_ADDR(0x0001127au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_11282;

L_1127C:
    /* 0001127c   4  clr.w (8,A5) */
    c->pc = RC_ADDR(0x0001127cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] + 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11280:
    /* 00011280   2  bra 000112ce */
    c->pc = RC_ADDR(0x00011280u);
    rc_step(c, m, 10);
    goto L_112CE;

L_11282:
    /* 00011282   2  moveq #fffffffe,D5 */
    c->pc = RC_ADDR(0x00011282u);
    rc_step(c, m, 4);
    c->d[5] = 0xfffffffeu;
    rc_set_nzvc(c, c->d[5], RC_L);

L_11284:
    /* 00011284   6  move.w #10,(8,A5) */
    c->pc = RC_ADDR(0x00011284u);
    rc_step(c, m, 16);
    t0 = 0x00000010u;
    rc_wr16(c, m, (c->a[5] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1128A:
    /* 0001128a   4  sub.w D0,(8,A5) */
    c->pc = RC_ADDR(0x0001128au);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1128E:
    /* 0001128e   2  bra 000112ce */
    c->pc = RC_ADDR(0x0001128eu);
    rc_step(c, m, 10);
    goto L_112CE;

L_11290:
    /* 00011290   4  cmpi.w #13f,D2 */
    c->pc = RC_ADDR(0x00011290u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x0000013fu);

L_11294:
    /* 00011294   4  bgt 0001139c */
    c->pc = RC_ADDR(0x00011294u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1139C;

L_11298:
    /* 00011298   2  lsr.w #4,D2 */
    c->pc = RC_ADDR(0x00011298u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 2, RC_W), RC_W));

L_1129A:
    /* 0001129a   2  lsl.w #1,D2 */
    c->pc = RC_ADDR(0x0001129au);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W));

L_1129C:
    /* 0001129c   2  add.w D1,D2 */
    c->pc = RC_ADDR(0x0001129cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_1129E:
    /* 0001129e   4  cmpi.w #26,D2 */
    c->pc = RC_ADDR(0x0001129eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000026u);

L_112A2:
    /* 000112a2   2  ble 000112be */
    c->pc = RC_ADDR(0x000112a2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_112BE;

L_112A4:
    /* 000112a4   2  sub.w D1,D2 */
    c->pc = RC_ADDR(0x000112a4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_112A6:
    /* 000112a6   4  sub.w (fffff2ce,A4),D2 */
    c->pc = RC_ADDR(0x000112a6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd32u));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_112AA:
    /* 000112aa   2  neg.w D2 */
    c->pc = RC_ADDR(0x000112aau);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_112AC:
    /* 000112ac   2  sub.w D2,D1 */
    c->pc = RC_ADDR(0x000112acu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_112AE:
    /* 000112ae   6  move.w D1,(00dff062).l */
    c->pc = RC_ADDR(0x000112aeu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, 0x00dff062u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_112B4:
    /* 000112b4   6  move.w D1,(00dff064).l */
    c->pc = RC_ADDR(0x000112b4u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_112BA:
    /* 000112ba   2  move.w D2,D1 */
    c->pc = RC_ADDR(0x000112bau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_112BC:
    /* 000112bc   2  bra 000112d0 */
    c->pc = RC_ADDR(0x000112bcu);
    rc_step(c, m, 10);
    goto L_112D0;

L_112BE:
    /* 000112be   8  move.w #ffff,(00dff062).l */
    c->pc = RC_ADDR(0x000112beu);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff062u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_112C6:
    /* 000112c6   8  move.w #ffff,(00dff064).l */
    c->pc = RC_ADDR(0x000112c6u);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_112CE:
    /* 000112ce   2  addq.w #2,D1 */
    c->pc = RC_ADDR(0x000112ceu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_112D0:
    /* 000112d0   4  move.w (fffff2ce,A4),D0 */
    c->pc = RC_ADDR(0x000112d0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd32u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_112D4:
    /* 000112d4   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x000112d4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_112D6:
    /* 000112d6   6  move.w D0,(00dff066).l */
    c->pc = RC_ADDR(0x000112d6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff066u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_112DC:
    /* 000112dc   6  move.w D0,(00dff060).l */
    c->pc = RC_ADDR(0x000112dcu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff060u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_112E2:
    /* 000112e2   4  move.w (2,A0),D2 */
    c->pc = RC_ADDR(0x000112e2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_112E6:
    /* 000112e6   2  sub.w D6,D2 */
    c->pc = RC_ADDR(0x000112e6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_112E8:
    /* 000112e8   2  lsl.w #6,D2 */
    c->pc = RC_ADDR(0x000112e8u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000006u, rc_d_get(c, 2, RC_W), RC_W));

L_112EA:
    /* 000112ea   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x000112eau);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_112EC:
    /* 000112ec   2  or.w D1,D2 */
    c->pc = RC_ADDR(0x000112ecu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 | rc_d_get(c, 2, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 2, RC_W, t2);

L_112EE:
    /* 000112ee   4  movea.l (24,A0),A3 */
    c->pc = RC_ADDR(0x000112eeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x24u));
    c->a[3] = t0;

L_112F2:
    /* 000112f2   2  adda.l D4,A3 */
    c->pc = RC_ADDR(0x000112f2u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[3] += t0;

L_112F4:
    /* 000112f4   4  lea (fffff326,A4),A1 */
    c->pc = RC_ADDR(0x000112f4u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0xcdau);

L_112F8:
    /* 000112f8   2  clr.l D1 */
    c->pc = RC_ADDR(0x000112f8u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_112FA:
    /* 000112fa   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000112fau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_112FE:
    /* 000112fe   2  move.w D0,D3 */
    c->pc = RC_ADDR(0x000112feu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11300:
    /* 00011300   2  lsr.w #4,D0 */
    c->pc = RC_ADDR(0x00011300u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_11302:
    /* 00011302   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x00011302u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_11304:
    /* 00011304   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x00011304u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11308:
    /* 00011308   4  mulu.w (fffff2ce,A4),D1 */
    c->pc = RC_ADDR(0x00011308u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd32u));
    rc_mulu(c, 1, t0);

L_1130C:
    /* 0001130c   2  add.w D0,D1 */
    c->pc = RC_ADDR(0x0001130cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1130E:
    /* 0001130e   2  add.l D5,D1 */
    c->pc = RC_ADDR(0x0001130eu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 5, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_11310:
    /* 00011310   8  move.w #ffff,(00dff044).l */
    c->pc = RC_ADDR(0x00011310u);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff044u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11318:
    /* 00011318   8  move.w #0,(00dff046).l */
    c->pc = RC_ADDR(0x00011318u);
    rc_step(c, m, 20);
    t0 = 0x00000000u;
    rc_wr16(c, m, 0x00dff046u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11320:
    /* 00011320   2  asl.w #6,D3 */
    c->pc = RC_ADDR(0x00011320u);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_W, rc_shift(c, 0, 1, 0x00000006u, rc_d_get(c, 3, RC_W), RC_W));

L_11322:
    /* 00011322   2  asl.w #6,D3 */
    c->pc = RC_ADDR(0x00011322u);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_W, rc_shift(c, 0, 1, 0x00000006u, rc_d_get(c, 3, RC_W), RC_W));

L_11324:
    /* 00011324   6  move.w D3,(00dff042).l */
    c->pc = RC_ADDR(0x00011324u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff042u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1132A:
    /* 0001132a   4  ori.w #b0a,D3 */
    c->pc = RC_ADDR(0x0001132au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 | 0x00000b0au;
    rc_d_set(c, 3, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1132E:
    /* 0001132e   2  clr.l D0 */
    c->pc = RC_ADDR(0x0001132eu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_11330:
    /* 00011330   4  move.b (5,A0),D0 */
    c->pc = RC_ADDR(0x00011330u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_11334:
    /* 00011334   2  subq.b #1,D0 */
    c->pc = RC_ADDR(0x00011334u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_B, t2);

L_11336:
    /* 00011336   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x00011336u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_11338:
    /* 00011338   4  move.l (18,A0),D6 */
    c->pc = RC_ADDR(0x00011338u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x18u));
    rc_d_set(c, 6, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1133C:
    /* 0001133c   4  and.w #fb0a,D3 */
    c->pc = RC_ADDR(0x0001133cu);
    rc_step(c, m, 10);
    t0 = 0x0000fb0au;
    t2 = t0 & rc_d_get(c, 3, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 3, RC_W, t2);

L_11340:
    /* 00011340   2  move.b D6,D5 */
    c->pc = RC_ADDR(0x00011340u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_B);
    rc_d_set(c, 5, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_11342:
    /* 00011342   2  lsr.l #4,D6 */
    c->pc = RC_ADDR(0x00011342u);
    rc_step(c, m, 8);
    rc_d_set(c, 6, RC_L, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 6, RC_L), RC_L));

L_11344:
    /* 00011344   4  andi.b #f,D5 */
    c->pc = RC_ADDR(0x00011344u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 5, RC_B);
    t2 = t1 & 0x0000000fu;
    rc_d_set(c, 5, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_11348:
    /* 00011348   4  cmpi.b #8,D5 */
    c->pc = RC_ADDR(0x00011348u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 5, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000008u);

L_1134C:
    /* 0001134c   2  blt 00011354 */
    c->pc = RC_ADDR(0x0001134cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_11354;

L_1134E:
    /* 0001134e   4  btst #0,D5 */
    c->pc = RC_ADDR(0x0001134eu);
    rc_step(c, m, 10);
    t4 = 0x00000000u;
    t0 = rc_d_get(c, 5, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_11352:
    /* 00011352   2  beq 00011358 */
    c->pc = RC_ADDR(0x00011352u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_11358;

L_11354:
    /* 00011354   4  ori.w #fca,D3 */
    c->pc = RC_ADDR(0x00011354u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 | 0x00000fcau;
    rc_d_set(c, 3, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_11358:
    /* 00011358   6  move.w D3,(00dff040).l */
    c->pc = RC_ADDR(0x00011358u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1135E:
    /* 0001135e   6  move.l A3,(00dff050).l */
    c->pc = RC_ADDR(0x0001135eu);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11364:
    /* 00011364   2  move.l (A0)+,D5 */
    c->pc = RC_ADDR(0x00011364u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 5, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11366:
    /* 00011366   2  bpl 00011370 */
    c->pc = RC_ADDR(0x00011366u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_11370;

L_11368:
    /* 00011368   6  move.l A3,(00dff04c).l */
    c->pc = RC_ADDR(0x00011368u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff04cu, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1136E:
    /* 0001136e   2  bra 00011378 */
    c->pc = RC_ADDR(0x0001136eu);
    rc_step(c, m, 10);
    goto L_11378;

L_11370:
    /* 00011370   2  add.l D4,D5 */
    c->pc = RC_ADDR(0x00011370u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 4, RC_L);
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_11372:
    /* 00011372   6  move.l D5,(00dff04c).l */
    c->pc = RC_ADDR(0x00011372u);
    rc_step(c, m, 20);
    t0 = rc_d_get(c, 5, RC_L);
    rc_wr32(c, m, 0x00dff04cu, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11378:
    /* 00011378   2  movea.l (A1)+,A2 */
    c->pc = RC_ADDR(0x00011378u);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_1137A:
    /* 0001137a   2  adda.l D1,A2 */
    c->pc = RC_ADDR(0x0001137au);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[2] += t0;

L_1137C:
    /* 0001137c   6  move.l A2,(00dff048).l */
    c->pc = RC_ADDR(0x0001137cu);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff048u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11382:
    /* 00011382   6  move.l A2,(00dff054).l */
    c->pc = RC_ADDR(0x00011382u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11388:
    /* 00011388   6  move.w D2,(00dff058).l */
    c->pc = RC_ADDR(0x00011388u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1138E:
    /* 0001138e   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x0001138eu);
    rc_step(c, m, 20);
    t3 = 0x00dff002u;
    t4 = 0x00000006u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_11396:
    /* 00011396   2  bne 0001138e */
    c->pc = RC_ADDR(0x00011396u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_1138E; }

L_11398:
    /* 00011398   4  dbf D0,0001133c */
    c->pc = RC_ADDR(0x00011398u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1133C; }
    }

L_1139C:
    /* 0001139c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001139cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1139E:
    /* 0001139e   2  rts */
    c->pc = RC_ADDR(0x0001139eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
