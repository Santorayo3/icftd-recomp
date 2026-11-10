/* fn_000151e6 - 192 byte(s), 68 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000151e6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x000151e6u: goto L_151E6;
    case 0x000151eau: goto L_151EA;
    case 0x000151ecu: goto L_151EC;
    case 0x000151f0u: goto L_151F0;
    case 0x000151f2u: goto L_151F2;
    case 0x000151f6u: goto L_151F6;
    case 0x000151f8u: goto L_151F8;
    case 0x000151fau: goto L_151FA;
    case 0x000151fcu: goto L_151FC;
    case 0x00015200u: goto L_15200;
    case 0x00015204u: goto L_15204;
    case 0x00015208u: goto L_15208;
    case 0x0001520au: goto L_1520A;
    case 0x0001520cu: goto L_1520C;
    case 0x0001520eu: goto L_1520E;
    case 0x00015212u: goto L_15212;
    case 0x00015216u: goto L_15216;
    case 0x0001521au: goto L_1521A;
    case 0x0001521cu: goto L_1521C;
    case 0x0001521eu: goto L_1521E;
    case 0x00015220u: goto L_15220;
    case 0x00015222u: goto L_15222;
    case 0x00015226u: goto L_15226;
    case 0x00015228u: goto L_15228;
    case 0x0001522au: goto L_1522A;
    case 0x0001522cu: goto L_1522C;
    case 0x00015230u: goto L_15230;
    case 0x00015232u: goto L_15232;
    case 0x00015234u: goto L_15234;
    case 0x00015236u: goto L_15236;
    case 0x0001523au: goto L_1523A;
    case 0x0001523cu: goto L_1523C;
    case 0x00015240u: goto L_15240;
    case 0x00015242u: goto L_15242;
    case 0x00015244u: goto L_15244;
    case 0x00015246u: goto L_15246;
    case 0x00015248u: goto L_15248;
    case 0x0001524au: goto L_1524A;
    case 0x0001524eu: goto L_1524E;
    case 0x00015252u: goto L_15252;
    case 0x00015256u: goto L_15256;
    case 0x00015258u: goto L_15258;
    case 0x0001525au: goto L_1525A;
    case 0x0001525cu: goto L_1525C;
    case 0x0001525eu: goto L_1525E;
    case 0x00015262u: goto L_15262;
    case 0x00015264u: goto L_15264;
    case 0x00015266u: goto L_15266;
    case 0x00015268u: goto L_15268;
    case 0x0001526cu: goto L_1526C;
    case 0x0001526eu: goto L_1526E;
    case 0x00015270u: goto L_15270;
    case 0x00015272u: goto L_15272;
    case 0x00015276u: goto L_15276;
    case 0x00015278u: goto L_15278;
    case 0x0001527cu: goto L_1527C;
    case 0x0001527eu: goto L_1527E;
    case 0x00015280u: goto L_15280;
    case 0x00015284u: goto L_15284;
    case 0x0001528au: goto L_1528A;
    case 0x0001528eu: goto L_1528E;
    case 0x00015292u: goto L_15292;
    case 0x00015296u: goto L_15296;
    case 0x00015298u: goto L_15298;
    case 0x0001529cu: goto L_1529C;
    case 0x000152a0u: goto L_152A0;
    case 0x000152a2u: goto L_152A2;
    case 0x000152a4u: goto L_152A4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_151E6:
    /* 000151e6   4  link.w A5,#0 */
    c->pc = 0x000151e6u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_151EA:
    /* 000151ea   2  move.l D4,-(A7) */
    c->pc = 0x000151eau;
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_151EC:
    /* 000151ec   4  clr.w (10b8,A4) */
    c->pc = 0x000151ecu;
    rc_wr16(c, m, (c->a[4] + 0x10b8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_151F0:
    /* 000151f0   2  moveq #0,D4 */
    c->pc = 0x000151f0u;
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_151F2:
    /* 000151f2   4  bra 00015298 */
    c->pc = 0x000151f2u;
    goto L_15298;

L_151F6:
    /* 000151f6   2  move.w D4,D0 */
    c->pc = 0x000151f6u;
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_151F8:
    /* 000151f8   2  ext.l D0 */
    c->pc = 0x000151f8u;
    rc_ext_l(c, 0);

L_151FA:
    /* 000151fa   2  asl.l #1,D0 */
    c->pc = 0x000151fau;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_151FC:
    /* 000151fc   4  lea (1214,A4),A0 */
    c->pc = 0x000151fcu;
    c->a[0] = (c->a[4] + 0x1214u);

L_15200:
    /* 00015200   4  tst.w (0,A0,D0.w) */
    c->pc = 0x00015200u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_15204:
    /* 00015204   4  bne 00015296 */
    c->pc = 0x00015204u;
    if (rc_cond(c, 6)) goto L_15296;

L_15208:
    /* 00015208   2  move.w D4,D0 */
    c->pc = 0x00015208u;
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1520A:
    /* 0001520a   2  ext.l D0 */
    c->pc = 0x0001520au;
    rc_ext_l(c, 0);

L_1520C:
    /* 0001520c   2  asl.l #1,D0 */
    c->pc = 0x0001520cu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1520E:
    /* 0001520e   4  lea (11e4,A4),A0 */
    c->pc = 0x0001520eu;
    c->a[0] = (c->a[4] + 0x11e4u);

L_15212:
    /* 00015212   4  move.w (fffffd8a,A4),D1 */
    c->pc = 0x00015212u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x276u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15216:
    /* 00015216   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = 0x00015216u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1521A:
    /* 0001521a   2  ble 00015296 */
    c->pc = 0x0001521au;
    if (rc_cond(c, 15)) goto L_15296;

L_1521C:
    /* 0001521c   2  move.w D4,D0 */
    c->pc = 0x0001521cu;
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1521E:
    /* 0001521e   2  ext.l D0 */
    c->pc = 0x0001521eu;
    rc_ext_l(c, 0);

L_15220:
    /* 00015220   2  asl.l #1,D0 */
    c->pc = 0x00015220u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_15222:
    /* 00015222   4  lea (11e4,A4),A0 */
    c->pc = 0x00015222u;
    c->a[0] = (c->a[4] + 0x11e4u);

L_15226:
    /* 00015226   2  move.l D0,-(A7) */
    c->pc = 0x00015226u;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_15228:
    /* 00015228   2  move.l A0,-(A7) */
    c->pc = 0x00015228u;
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1522A:
    /* 0001522a   2  move.w D4,-(A7) */
    c->pc = 0x0001522au;
    t0 = rc_d_get(c, 4, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1522C:
    /* 0001522c   4  jsr (00015034) */
    c->pc = 0x0001522cu;
    rc_push32(c, m, 0x00015230u);
    rc_depth++;
    c->pc = 0x00015034u;
    return;

L_15230:
    /* 00015230   2  addq.w #2,A7 */
    c->pc = 0x00015230u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_15232:
    /* 00015232   2  movea.l (A7)+,A0 */
    c->pc = 0x00015232u;
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;

L_15234:
    /* 00015234   2  move.l (A7)+,D1 */
    c->pc = 0x00015234u;
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_15236:
    /* 00015236   4  move.w (0,A0,D1.w),D2 */
    c->pc = 0x00015236u;
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1523A:
    /* 0001523a   2  add.w D0,D2 */
    c->pc = 0x0001523au;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_1523C:
    /* 0001523c   4  move.w (fffffd8a,A4),D0 */
    c->pc = 0x0001523cu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x276u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15240:
    /* 00015240   2  cmp.w D2,D0 */
    c->pc = 0x00015240u;
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15242:
    /* 00015242   2  bge 00015296 */
    c->pc = 0x00015242u;
    if (rc_cond(c, 12)) goto L_15296;

L_15244:
    /* 00015244   2  move.w D4,D0 */
    c->pc = 0x00015244u;
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15246:
    /* 00015246   2  ext.l D0 */
    c->pc = 0x00015246u;
    rc_ext_l(c, 0);

L_15248:
    /* 00015248   2  asl.l #1,D0 */
    c->pc = 0x00015248u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1524A:
    /* 0001524a   4  lea (11ec,A4),A0 */
    c->pc = 0x0001524au;
    c->a[0] = (c->a[4] + 0x11ecu);

L_1524E:
    /* 0001524e   4  move.w (fffffd8c,A4),D1 */
    c->pc = 0x0001524eu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x274u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15252:
    /* 00015252   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = 0x00015252u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15256:
    /* 00015256   2  ble 00015296 */
    c->pc = 0x00015256u;
    if (rc_cond(c, 15)) goto L_15296;

L_15258:
    /* 00015258   2  move.w D4,D0 */
    c->pc = 0x00015258u;
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1525A:
    /* 0001525a   2  ext.l D0 */
    c->pc = 0x0001525au;
    rc_ext_l(c, 0);

L_1525C:
    /* 0001525c   2  asl.l #1,D0 */
    c->pc = 0x0001525cu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1525E:
    /* 0001525e   4  lea (11ec,A4),A0 */
    c->pc = 0x0001525eu;
    c->a[0] = (c->a[4] + 0x11ecu);

L_15262:
    /* 00015262   2  move.l D0,-(A7) */
    c->pc = 0x00015262u;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_15264:
    /* 00015264   2  move.l A0,-(A7) */
    c->pc = 0x00015264u;
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_15266:
    /* 00015266   2  move.w D4,-(A7) */
    c->pc = 0x00015266u;
    t0 = rc_d_get(c, 4, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15268:
    /* 00015268   4  jsr (00015058) */
    c->pc = 0x00015268u;
    rc_push32(c, m, 0x0001526cu);
    rc_depth++;
    c->pc = 0x00015058u;
    return;

L_1526C:
    /* 0001526c   2  addq.w #2,A7 */
    c->pc = 0x0001526cu;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1526E:
    /* 0001526e   2  movea.l (A7)+,A0 */
    c->pc = 0x0001526eu;
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;

L_15270:
    /* 00015270   2  move.l (A7)+,D1 */
    c->pc = 0x00015270u;
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_15272:
    /* 00015272   4  move.w (0,A0,D1.w),D2 */
    c->pc = 0x00015272u;
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15276:
    /* 00015276   2  add.w D0,D2 */
    c->pc = 0x00015276u;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_15278:
    /* 00015278   4  move.w (fffffd8c,A4),D0 */
    c->pc = 0x00015278u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x274u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1527C:
    /* 0001527c   2  cmp.w D2,D0 */
    c->pc = 0x0001527cu;
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1527E:
    /* 0001527e   2  bge 00015296 */
    c->pc = 0x0001527eu;
    if (rc_cond(c, 12)) goto L_15296;

L_15280:
    /* 00015280   4  move.w D4,(1244,A4) */
    c->pc = 0x00015280u;
    t0 = rc_d_get(c, 4, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1244u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15284:
    /* 00015284   6  move.w #1,(10b8,A4) */
    c->pc = 0x00015284u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x10b8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1528A:
    /* 0001528a   4  clr.w (fffffd84,A4) */
    c->pc = 0x0001528au;
    rc_wr16(c, m, (c->a[4] - 0x27cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1528E:
    /* 0001528e   4  clr.w (fffff288,A4) */
    c->pc = 0x0001528eu;
    rc_wr16(c, m, (c->a[4] - 0xd78u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15292:
    /* 00015292   4  clr.w (fffff286,A4) */
    c->pc = 0x00015292u;
    rc_wr16(c, m, (c->a[4] - 0xd7au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15296:
    /* 00015296   2  addq.w #1,D4 */
    c->pc = 0x00015296u;
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_15298:
    /* 00015298   4  cmp.w (12a6,A4),D4 */
    c->pc = 0x00015298u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x12a6u));
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1529C:
    /* 0001529c   4  blt 000151f6 */
    c->pc = 0x0001529cu;
    if (rc_cond(c, 13)) { rc_tick(); goto L_151F6; }

L_152A0:
    /* 000152a0   2  move.l (A7)+,D4 */
    c->pc = 0x000152a0u;
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_152A2:
    /* 000152a2   2  unlk A5 */
    c->pc = 0x000152a2u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_152A4:
    /* 000152a4   2  rts */
    c->pc = 0x000152a4u;
    rc_ret(c, m);
    return;

}
