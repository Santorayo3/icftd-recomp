/* fn_00014858 - 312 byte(s), 86 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00014858(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00014858u): goto L_14858;
    case RC_ADDR(0x0001485cu): goto L_1485C;
    case RC_ADDR(0x00014860u): goto L_14860;
    case RC_ADDR(0x00014862u): goto L_14862;
    case RC_ADDR(0x00014864u): goto L_14864;
    case RC_ADDR(0x00014868u): goto L_14868;
    case RC_ADDR(0x0001486cu): goto L_1486C;
    case RC_ADDR(0x00014870u): goto L_14870;
    case RC_ADDR(0x00014872u): goto L_14872;
    case RC_ADDR(0x00014876u): goto L_14876;
    case RC_ADDR(0x00014878u): goto L_14878;
    case RC_ADDR(0x0001487au): goto L_1487A;
    case RC_ADDR(0x0001487eu): goto L_1487E;
    case RC_ADDR(0x00014880u): goto L_14880;
    case RC_ADDR(0x00014882u): goto L_14882;
    case RC_ADDR(0x00014886u): goto L_14886;
    case RC_ADDR(0x0001488au): goto L_1488A;
    case RC_ADDR(0x0001488cu): goto L_1488C;
    case RC_ADDR(0x00014890u): goto L_14890;
    case RC_ADDR(0x00014894u): goto L_14894;
    case RC_ADDR(0x00014898u): goto L_14898;
    case RC_ADDR(0x0001489cu): goto L_1489C;
    case RC_ADDR(0x000148a0u): goto L_148A0;
    case RC_ADDR(0x000148a4u): goto L_148A4;
    case RC_ADDR(0x000148a8u): goto L_148A8;
    case RC_ADDR(0x000148acu): goto L_148AC;
    case RC_ADDR(0x000148b0u): goto L_148B0;
    case RC_ADDR(0x000148b4u): goto L_148B4;
    case RC_ADDR(0x000148b8u): goto L_148B8;
    case RC_ADDR(0x000148bcu): goto L_148BC;
    case RC_ADDR(0x000148c0u): goto L_148C0;
    case RC_ADDR(0x000148c4u): goto L_148C4;
    case RC_ADDR(0x000148c8u): goto L_148C8;
    case RC_ADDR(0x000148ccu): goto L_148CC;
    case RC_ADDR(0x000148d0u): goto L_148D0;
    case RC_ADDR(0x000148d4u): goto L_148D4;
    case RC_ADDR(0x000148d8u): goto L_148D8;
    case RC_ADDR(0x000148dcu): goto L_148DC;
    case RC_ADDR(0x000148e0u): goto L_148E0;
    case RC_ADDR(0x000148e4u): goto L_148E4;
    case RC_ADDR(0x000148e8u): goto L_148E8;
    case RC_ADDR(0x000148ecu): goto L_148EC;
    case RC_ADDR(0x000148f0u): goto L_148F0;
    case RC_ADDR(0x000148f4u): goto L_148F4;
    case RC_ADDR(0x000148f8u): goto L_148F8;
    case RC_ADDR(0x000148fcu): goto L_148FC;
    case RC_ADDR(0x00014900u): goto L_14900;
    case RC_ADDR(0x00014904u): goto L_14904;
    case RC_ADDR(0x00014908u): goto L_14908;
    case RC_ADDR(0x0001490cu): goto L_1490C;
    case RC_ADDR(0x00014910u): goto L_14910;
    case RC_ADDR(0x00014914u): goto L_14914;
    case RC_ADDR(0x00014918u): goto L_14918;
    case RC_ADDR(0x0001491cu): goto L_1491C;
    case RC_ADDR(0x00014920u): goto L_14920;
    case RC_ADDR(0x00014926u): goto L_14926;
    case RC_ADDR(0x0001492au): goto L_1492A;
    case RC_ADDR(0x0001492cu): goto L_1492C;
    case RC_ADDR(0x0001492eu): goto L_1492E;
    case RC_ADDR(0x00014932u): goto L_14932;
    case RC_ADDR(0x00014936u): goto L_14936;
    case RC_ADDR(0x0001493au): goto L_1493A;
    case RC_ADDR(0x0001493cu): goto L_1493C;
    case RC_ADDR(0x0001493eu): goto L_1493E;
    case RC_ADDR(0x00014942u): goto L_14942;
    case RC_ADDR(0x00014944u): goto L_14944;
    case RC_ADDR(0x00014948u): goto L_14948;
    case RC_ADDR(0x0001494cu): goto L_1494C;
    case RC_ADDR(0x0001494eu): goto L_1494E;
    case RC_ADDR(0x00014952u): goto L_14952;
    case RC_ADDR(0x00014956u): goto L_14956;
    case RC_ADDR(0x00014958u): goto L_14958;
    case RC_ADDR(0x0001495eu): goto L_1495E;
    case RC_ADDR(0x00014960u): goto L_14960;
    case RC_ADDR(0x00014966u): goto L_14966;
    case RC_ADDR(0x00014968u): goto L_14968;
    case RC_ADDR(0x0001496cu): goto L_1496C;
    case RC_ADDR(0x00014970u): goto L_14970;
    case RC_ADDR(0x00014974u): goto L_14974;
    case RC_ADDR(0x00014978u): goto L_14978;
    case RC_ADDR(0x0001497au): goto L_1497A;
    case RC_ADDR(0x0001497cu): goto L_1497C;
    case RC_ADDR(0x00014980u): goto L_14980;
    case RC_ADDR(0x00014984u): goto L_14984;
    case RC_ADDR(0x00014988u): goto L_14988;
    case RC_ADDR(0x0001498eu): goto L_1498E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_14858:
    /* 00014858   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00014858u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1485C:
    /* 0001485c   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x0001485cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14860:
    /* 00014860   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014860u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14862:
    /* 00014862   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00014862u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_14864:
    /* 00014864   4  lea (ffff84a2,A4),A0 */
    c->pc = RC_ADDR(0x00014864u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7b5eu);

L_14868:
    /* 00014868   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00014868u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1486C:
    /* 0001486c   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001486cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14870:
    /* 00014870   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014870u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14872:
    /* 00014872   4  divs.w #a,D0 */
    c->pc = RC_ADDR(0x00014872u);
    rc_step(c, m, 162);
    t0 = 0x0000000au;
    rc_divs(c, m, 0, t0);

L_14876:
    /* 00014876   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014876u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14878:
    /* 00014878   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00014878u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1487A:
    /* 0001487a   4  move.b (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0001487au);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1487E:
    /* 0001487e   2  ext.w D0 */
    c->pc = RC_ADDR(0x0001487eu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_14880:
    /* 00014880   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00014880u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14882:
    /* 00014882   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00014882u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14886:
    /* 00014886   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00014886u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1488A:
    /* 0001488a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001488au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1488C:
    /* 0001488c   4  divs.w #a,D0 */
    c->pc = RC_ADDR(0x0001488cu);
    rc_step(c, m, 162);
    t0 = 0x0000000au;
    rc_divs(c, m, 0, t0);

L_14890:
    /* 00014890   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00014890u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14894:
    /* 00014894   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00014894u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14898:
    /* 00014898   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014898u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_1489C:
    /* 0001489c   4  lea (fffffb28,A4),A0 */
    c->pc = RC_ADDR(0x0001489cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4d8u);

L_148A0:
    /* 000148a0   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000148a0u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_148A4:
    /* 000148a4   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000148a4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_148A8:
    /* 000148a8   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x000148a8u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_148AC:
    /* 000148ac   4  lea (fffffb24,A4),A0 */
    c->pc = RC_ADDR(0x000148acu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4dcu);

L_148B0:
    /* 000148b0   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000148b0u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_148B4:
    /* 000148b4   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000148b4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_148B8:
    /* 000148b8   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x000148b8u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_148BC:
    /* 000148bc   4  lea (fffffb2a,A4),A0 */
    c->pc = RC_ADDR(0x000148bcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4d6u);

L_148C0:
    /* 000148c0   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000148c0u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_148C4:
    /* 000148c4   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000148c4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_148C8:
    /* 000148c8   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x000148c8u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_148CC:
    /* 000148cc   4  lea (fffffb26,A4),A0 */
    c->pc = RC_ADDR(0x000148ccu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4dau);

L_148D0:
    /* 000148d0   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000148d0u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_148D4:
    /* 000148d4   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000148d4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_148D8:
    /* 000148d8   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x000148d8u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_148DC:
    /* 000148dc   4  lea (fffffb32,A4),A0 */
    c->pc = RC_ADDR(0x000148dcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4ceu);

L_148E0:
    /* 000148e0   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000148e0u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_148E4:
    /* 000148e4   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000148e4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_148E8:
    /* 000148e8   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x000148e8u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_148EC:
    /* 000148ec   4  lea (fffffb31,A4),A0 */
    c->pc = RC_ADDR(0x000148ecu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4cfu);

L_148F0:
    /* 000148f0   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000148f0u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_148F4:
    /* 000148f4   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000148f4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_148F8:
    /* 000148f8   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x000148f8u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_148FC:
    /* 000148fc   4  lea (fffffb36,A4),A0 */
    c->pc = RC_ADDR(0x000148fcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4cau);

L_14900:
    /* 00014900   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014900u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_14904:
    /* 00014904   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00014904u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14908:
    /* 00014908   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014908u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_1490C:
    /* 0001490c   4  lea (fffffb34,A4),A0 */
    c->pc = RC_ADDR(0x0001490cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4ccu);

L_14910:
    /* 00014910   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014910u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_14914:
    /* 00014914   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00014914u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14918:
    /* 00014918   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014918u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_1491C:
    /* 0001491c   4  lea (fffffb35,A4),A0 */
    c->pc = RC_ADDR(0x0001491cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4cbu);

L_14920:
    /* 00014920   6  move.b #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014920u);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_14926:
    /* 00014926   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x00014926u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1492A:
    /* 0001492a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001492au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1492C:
    /* 0001492c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001492cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1492E:
    /* 0001492e   4  lea (ffff84de,A4),A0 */
    c->pc = RC_ADDR(0x0001492eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7b22u);

L_14932:
    /* 00014932   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00014932u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_14936:
    /* 00014936   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014936u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1493A:
    /* 0001493a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001493au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1493C:
    /* 0001493c   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0001493cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1493E:
    /* 0001493e   4  tst.b (0,A0,D1.w) */
    c->pc = RC_ADDR(0x0001493eu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_14942:
    /* 00014942   2  beq 0001497c */
    c->pc = RC_ADDR(0x00014942u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1497C;

L_14944:
    /* 00014944   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00014944u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14948:
    /* 00014948   4  jsr (000144b0) */
    c->pc = RC_ADDR(0x00014948u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001494cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000144b0u);
    return;

L_1494C:
    /* 0001494c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001494cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1494E:
    /* 0001494e   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001494eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14952:
    /* 00014952   4  jsr (00014300) */
    c->pc = RC_ADDR(0x00014952u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00014956u));
    rc_depth++;
    c->pc = RC_ADDR(0x00014300u);
    return;

L_14956:
    /* 00014956   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00014956u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_14958:
    /* 00014958   6  cmpi.w #8,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00014958u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_1495E:
    /* 0001495e   2  blt 00014968 */
    c->pc = RC_ADDR(0x0001495eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_14968;

L_14960:
    /* 00014960   6  cmpi.w #a,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00014960u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_14966:
    /* 00014966   2  ble 0001497c */
    c->pc = RC_ADDR(0x00014966u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1497C;

L_14968:
    /* 00014968   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00014968u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1496C:
    /* 0001496c   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x0001496cu);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_14970:
    /* 00014970   4  lea (fffffb30,A4),A0 */
    c->pc = RC_ADDR(0x00014970u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4d0u);

L_14974:
    /* 00014974   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014974u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_14978:
    /* 00014978   2  unlk A5 */
    c->pc = RC_ADDR(0x00014978u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1497A:
    /* 0001497a   2  rts */
    c->pc = RC_ADDR(0x0001497au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1497C:
    /* 0001497c   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001497cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14980:
    /* 00014980   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014980u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_14984:
    /* 00014984   4  lea (fffffb30,A4),A0 */
    c->pc = RC_ADDR(0x00014984u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4d0u);

L_14988:
    /* 00014988   6  move.b #ff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014988u);
    rc_step(c, m, 18);
    t0 = 0x000000ffu;
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1498E:
    /* 0001498e   2  bra 00014978 */
    c->pc = RC_ADDR(0x0001498eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_14978;

}
