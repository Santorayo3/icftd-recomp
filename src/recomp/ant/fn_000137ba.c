/* fn_000137ba - 168 byte(s), 46 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000137ba(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000137bau): goto L_137BA;
    case RC_ADDR(0x000137beu): goto L_137BE;
    case RC_ADDR(0x000137c2u): goto L_137C2;
    case RC_ADDR(0x000137c6u): goto L_137C6;
    case RC_ADDR(0x000137ccu): goto L_137CC;
    case RC_ADDR(0x000137d0u): goto L_137D0;
    case RC_ADDR(0x000137d4u): goto L_137D4;
    case RC_ADDR(0x000137d6u): goto L_137D6;
    case RC_ADDR(0x000137dau): goto L_137DA;
    case RC_ADDR(0x000137deu): goto L_137DE;
    case RC_ADDR(0x000137e0u): goto L_137E0;
    case RC_ADDR(0x000137e2u): goto L_137E2;
    case RC_ADDR(0x000137e6u): goto L_137E6;
    case RC_ADDR(0x000137ecu): goto L_137EC;
    case RC_ADDR(0x000137eeu): goto L_137EE;
    case RC_ADDR(0x000137f2u): goto L_137F2;
    case RC_ADDR(0x000137f4u): goto L_137F4;
    case RC_ADDR(0x000137f6u): goto L_137F6;
    case RC_ADDR(0x000137fau): goto L_137FA;
    case RC_ADDR(0x000137feu): goto L_137FE;
    case RC_ADDR(0x00013800u): goto L_13800;
    case RC_ADDR(0x00013802u): goto L_13802;
    case RC_ADDR(0x00013806u): goto L_13806;
    case RC_ADDR(0x0001380cu): goto L_1380C;
    case RC_ADDR(0x00013810u): goto L_13810;
    case RC_ADDR(0x00013812u): goto L_13812;
    case RC_ADDR(0x00013816u): goto L_13816;
    case RC_ADDR(0x0001381cu): goto L_1381C;
    case RC_ADDR(0x00013820u): goto L_13820;
    case RC_ADDR(0x00013822u): goto L_13822;
    case RC_ADDR(0x00013826u): goto L_13826;
    case RC_ADDR(0x0001382cu): goto L_1382C;
    case RC_ADDR(0x00013830u): goto L_13830;
    case RC_ADDR(0x00013836u): goto L_13836;
    case RC_ADDR(0x0001383au): goto L_1383A;
    case RC_ADDR(0x00013840u): goto L_13840;
    case RC_ADDR(0x00013844u): goto L_13844;
    case RC_ADDR(0x00013848u): goto L_13848;
    case RC_ADDR(0x0001384au): goto L_1384A;
    case RC_ADDR(0x0001384eu): goto L_1384E;
    case RC_ADDR(0x00013852u): goto L_13852;
    case RC_ADDR(0x00013854u): goto L_13854;
    case RC_ADDR(0x00013858u): goto L_13858;
    case RC_ADDR(0x0001385cu): goto L_1385C;
    case RC_ADDR(0x0001385eu): goto L_1385E;
    case RC_ADDR(0x00013860u): goto L_13860;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_137BA:
    /* 000137ba   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x000137bau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_137BE:
    /* 000137be   4  clr.w (182a,A4) */
    c->pc = RC_ADDR(0x000137beu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x182au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_137C2:
    /* 000137c2   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000137c2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_137C6:
    /* 000137c6   6  pea (00010002).l */
    c->pc = RC_ADDR(0x000137c6u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010002u);

L_137CC:
    /* 000137cc   4  pea (00000190).l */
    c->pc = RC_ADDR(0x000137ccu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000190u);

L_137D0:
    /* 000137d0   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x000137d0u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x000137d4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_137D4:
    /* 000137d4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000137d4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_137D6:
    /* 000137d6   4  move.l D0,(17fe,A4) */
    c->pc = RC_ADDR(0x000137d6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x17feu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_137DA:
    /* 000137da   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000137dau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_137DE:
    /* 000137de   2  ext.l D0 */
    c->pc = RC_ADDR(0x000137deu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_137E0:
    /* 000137e0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000137e0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_137E2:
    /* 000137e2   4  lea (ffffb25a,A4),A0 */
    c->pc = RC_ADDR(0x000137e2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4da6u);

L_137E6:
    /* 000137e6   6  cmpi.w #face,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000137e6u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000faceu);

L_137EC:
    /* 000137ec   2  beq 00013812 */
    c->pc = RC_ADDR(0x000137ecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_13812;

L_137EE:
    /* 000137ee   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000137eeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_137F2:
    /* 000137f2   2  ext.l D0 */
    c->pc = RC_ADDR(0x000137f2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_137F4:
    /* 000137f4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000137f4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_137F6:
    /* 000137f6   4  lea (ffffb25a,A4),A0 */
    c->pc = RC_ADDR(0x000137f6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4da6u);

L_137FA:
    /* 000137fa   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x000137fau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_137FE:
    /* 000137fe   2  ext.l D1 */
    c->pc = RC_ADDR(0x000137feu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_13800:
    /* 00013800   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00013800u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_13802:
    /* 00013802   4  movea.l (17fe,A4),A1 */
    c->pc = RC_ADDR(0x00013802u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x17feu));
    c->a[1] = t0;

L_13806:
    /* 00013806   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00013806u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1380C:
    /* 0001380c   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001380cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13810:
    /* 00013810   2  bra 000137da */
    c->pc = RC_ADDR(0x00013810u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_137DA;

L_13812:
    /* 00013812   4  movea.l (ffffd290,A4),A0 */
    c->pc = RC_ADDR(0x00013812u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d70u));
    c->a[0] = t0;

L_13816:
    /* 00013816   6  move.l (4,A0),(fffffffa,A5) */
    c->pc = RC_ADDR(0x00013816u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    rc_wr32(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1381C:
    /* 0001381c   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x0001381cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_13820:
    /* 00013820   2  clr.l (A0) */
    c->pc = RC_ADDR(0x00013820u);
    rc_step(c, m, 20);
    rc_wr32(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_13822:
    /* 00013822   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x00013822u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_13826:
    /* 00013826   6  move.l (4,A0),(182c,A4) */
    c->pc = RC_ADDR(0x00013826u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    rc_wr32(c, m, (c->a[4] + 0x182cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1382C:
    /* 0001382c   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x0001382cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_13830:
    /* 00013830   6  move.w (8,A0),(1830,A4) */
    c->pc = RC_ADDR(0x00013830u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0x8u));
    rc_wr16(c, m, (c->a[4] + 0x1830u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13836:
    /* 00013836   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x00013836u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_1383A:
    /* 0001383a   6  move.l (17fe,A4),(4,A0) */
    c->pc = RC_ADDR(0x0001383au);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x17feu));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_13840:
    /* 00013840   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x00013840u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_13844:
    /* 00013844   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00013844u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13848:
    /* 00013848   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013848u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1384A:
    /* 0001384a   4  divs.w #2,D0 */
    c->pc = RC_ADDR(0x0001384au);
    rc_step(c, m, 162);
    t0 = 0x00000002u;
    rc_divs(c, m, 0, t0);

L_1384E:
    /* 0001384e   4  move.w D0,(8,A0) */
    c->pc = RC_ADDR(0x0001384eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13852:
    /* 00013852   2  bsr 00013862 */
    c->pc = RC_ADDR(0x00013852u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00013854u));
    rc_depth++;
    c->pc = RC_ADDR(0x00013862u);
    return;

L_13854:
    /* 00013854   4  move.l (ffffd290,A4),-(A7) */
    c->pc = RC_ADDR(0x00013854u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d70u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13858:
    /* 00013858   4  jsr (ffff8398,A4) */
    c->pc = RC_ADDR(0x00013858u);
    rc_step(c, m, 18);
    /* vector 153 */
    rc_push32(c, m, RC_ADDR(0x0001385cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e8eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002393au);
    return;

L_1385C:
    /* 0001385c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001385cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1385E:
    /* 0001385e   2  unlk A5 */
    c->pc = RC_ADDR(0x0001385eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_13860:
    /* 00013860   2  rts */
    c->pc = RC_ADDR(0x00013860u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
