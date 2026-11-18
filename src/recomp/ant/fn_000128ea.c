/* fn_000128ea - 156 byte(s), 47 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000128ea(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000128eau): goto L_128EA;
    case RC_ADDR(0x000128eeu): goto L_128EE;
    case RC_ADDR(0x000128f4u): goto L_128F4;
    case RC_ADDR(0x000128fau): goto L_128FA;
    case RC_ADDR(0x000128fcu): goto L_128FC;
    case RC_ADDR(0x00012900u): goto L_12900;
    case RC_ADDR(0x00012902u): goto L_12902;
    case RC_ADDR(0x00012906u): goto L_12906;
    case RC_ADDR(0x0001290au): goto L_1290A;
    case RC_ADDR(0x0001290cu): goto L_1290C;
    case RC_ADDR(0x00012910u): goto L_12910;
    case RC_ADDR(0x00012912u): goto L_12912;
    case RC_ADDR(0x00012916u): goto L_12916;
    case RC_ADDR(0x0001291au): goto L_1291A;
    case RC_ADDR(0x0001291cu): goto L_1291C;
    case RC_ADDR(0x00012920u): goto L_12920;
    case RC_ADDR(0x00012922u): goto L_12922;
    case RC_ADDR(0x00012926u): goto L_12926;
    case RC_ADDR(0x0001292au): goto L_1292A;
    case RC_ADDR(0x00012932u): goto L_12932;
    case RC_ADDR(0x00012936u): goto L_12936;
    case RC_ADDR(0x00012938u): goto L_12938;
    case RC_ADDR(0x0001293cu): goto L_1293C;
    case RC_ADDR(0x0001293eu): goto L_1293E;
    case RC_ADDR(0x00012940u): goto L_12940;
    case RC_ADDR(0x00012944u): goto L_12944;
    case RC_ADDR(0x00012948u): goto L_12948;
    case RC_ADDR(0x0001294au): goto L_1294A;
    case RC_ADDR(0x0001294eu): goto L_1294E;
    case RC_ADDR(0x00012950u): goto L_12950;
    case RC_ADDR(0x00012954u): goto L_12954;
    case RC_ADDR(0x00012958u): goto L_12958;
    case RC_ADDR(0x0001295au): goto L_1295A;
    case RC_ADDR(0x0001295cu): goto L_1295C;
    case RC_ADDR(0x0001295eu): goto L_1295E;
    case RC_ADDR(0x00012960u): goto L_12960;
    case RC_ADDR(0x00012964u): goto L_12964;
    case RC_ADDR(0x00012968u): goto L_12968;
    case RC_ADDR(0x0001296au): goto L_1296A;
    case RC_ADDR(0x0001296eu): goto L_1296E;
    case RC_ADDR(0x00012970u): goto L_12970;
    case RC_ADDR(0x00012974u): goto L_12974;
    case RC_ADDR(0x00012978u): goto L_12978;
    case RC_ADDR(0x0001297au): goto L_1297A;
    case RC_ADDR(0x0001297eu): goto L_1297E;
    case RC_ADDR(0x00012982u): goto L_12982;
    case RC_ADDR(0x00012984u): goto L_12984;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_128EA:
    /* 000128ea   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000128eau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_128EE:
    /* 000128ee   6  move.w (1148,A4),(1410,A4) */
    c->pc = RC_ADDR(0x000128eeu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1148u));
    rc_wr16(c, m, (c->a[4] + 0x1410u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_128F4:
    /* 000128f4   6  move.w (114a,A4),(1412,A4) */
    c->pc = RC_ADDR(0x000128f4u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x114au));
    rc_wr16(c, m, (c->a[4] + 0x1412u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_128FA:
    /* 000128fa   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000128fau);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_128FC:
    /* 000128fc   4  move.w D0,(fffffa7c,A4) */
    c->pc = RC_ADDR(0x000128fcu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x584u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12900:
    /* 00012900   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012900u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_12902:
    /* 00012902   4  move.l D0,(fffffa84,A4) */
    c->pc = RC_ADDR(0x00012902u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x57cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_12906:
    /* 00012906   4  move.w D0,(fffffa7a,A4) */
    c->pc = RC_ADDR(0x00012906u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x586u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1290A:
    /* 0001290a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001290au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1290C:
    /* 0001290c   4  move.w D0,(fffffa7e,A4) */
    c->pc = RC_ADDR(0x0001290cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x582u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12910:
    /* 00012910   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012910u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_12912:
    /* 00012912   4  move.l D0,(fffffa88,A4) */
    c->pc = RC_ADDR(0x00012912u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x578u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_12916:
    /* 00012916   4  move.w D0,(fffffa80,A4) */
    c->pc = RC_ADDR(0x00012916u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x580u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1291A:
    /* 0001291a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001291au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1291C:
    /* 0001291c   4  move.l D0,(fffffa8c,A4) */
    c->pc = RC_ADDR(0x0001291cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x574u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_12920:
    /* 00012920   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00012920u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_12922:
    /* 00012922   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00012922u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12926:
    /* 00012926   4  move.l D0,(fffffa90,A4) */
    c->pc = RC_ADDR(0x00012926u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x570u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1292A:
    /* 0001292a   8  move.w #8400,(00dff096).l */
    c->pc = RC_ADDR(0x0001292au);
    rc_step(c, m, 20);
    t0 = 0x00008400u;
    rc_wr16(c, m, 0x00dff096u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12932:
    /* 00012932   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x00012932u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12936:
    /* 00012936   2  lsl.w #6,D1 */
    c->pc = RC_ADDR(0x00012936u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 1, 0x00000006u, rc_d_get(c, 1, RC_W), RC_W));

L_12938:
    /* 00012938   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00012938u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1293C:
    /* 0001293c   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x0001293cu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_1293E:
    /* 0001293e   2  or.w D0,D1 */
    c->pc = RC_ADDR(0x0001293eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t2 = t0 | rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 1, RC_W, t2);

L_12940:
    /* 00012940   4  move.w D1,(17e2,A4) */
    c->pc = RC_ADDR(0x00012940u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x17e2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12944:
    /* 00012944   4  move.w (fffffa78,A4),D0 */
    c->pc = RC_ADDR(0x00012944u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x588u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12948:
    /* 00012948   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012948u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1294A:
    /* 0001294a   4  divu.w (a,A5),D0 */
    c->pc = RC_ADDR(0x0001294au);
    rc_step(c, m, 148);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_divu(c, m, 0, t0);

L_1294E:
    /* 0001294e   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x0001294eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12950:
    /* 00012950   4  move.w D0,(17e4,A4) */
    c->pc = RC_ADDR(0x00012950u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x17e4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12954:
    /* 00012954   4  move.w (fffffa9a,A4),D1 */
    c->pc = RC_ADDR(0x00012954u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x566u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12958:
    /* 00012958   2  sub.w D0,D1 */
    c->pc = RC_ADDR(0x00012958u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1295A:
    /* 0001295a   2  subq.w #1,D1 */
    c->pc = RC_ADDR(0x0001295au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1295C:
    /* 0001295c   2  lsl.w #1,D1 */
    c->pc = RC_ADDR(0x0001295cu);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_1295E:
    /* 0001295e   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001295eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_12960:
    /* 00012960   4  move.l D1,(17e8,A4) */
    c->pc = RC_ADDR(0x00012960u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x17e8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_12964:
    /* 00012964   4  move.w (fffffa76,A4),D0 */
    c->pc = RC_ADDR(0x00012964u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x58au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12968:
    /* 00012968   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012968u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1296A:
    /* 0001296a   4  divu.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001296au);
    rc_step(c, m, 148);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_divu(c, m, 0, t0);

L_1296E:
    /* 0001296e   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x0001296eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12970:
    /* 00012970   4  move.w D0,(17e6,A4) */
    c->pc = RC_ADDR(0x00012970u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x17e6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12974:
    /* 00012974   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00012974u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12978:
    /* 00012978   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x00012978u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_1297A:
    /* 0001297a   4  mulu.w (17e6,A4),D0 */
    c->pc = RC_ADDR(0x0001297au);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17e6u));
    rc_mulu(c, 0, t0);

L_1297E:
    /* 0001297e   4  sub.w D0,(fffffa98,A4) */
    c->pc = RC_ADDR(0x0001297eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x568u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_12982:
    /* 00012982   2  unlk A5 */
    c->pc = RC_ADDR(0x00012982u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_12984:
    /* 00012984   2  rts */
    c->pc = RC_ADDR(0x00012984u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
