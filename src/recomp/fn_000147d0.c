/* fn_000147d0 - 180 byte(s), 50 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000147d0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000147d0u): goto L_147D0;
    case RC_ADDR(0x000147d4u): goto L_147D4;
    case RC_ADDR(0x000147d8u): goto L_147D8;
    case RC_ADDR(0x000147dcu): goto L_147DC;
    case RC_ADDR(0x000147deu): goto L_147DE;
    case RC_ADDR(0x000147e2u): goto L_147E2;
    case RC_ADDR(0x000147e6u): goto L_147E6;
    case RC_ADDR(0x000147eau): goto L_147EA;
    case RC_ADDR(0x000147eeu): goto L_147EE;
    case RC_ADDR(0x000147f2u): goto L_147F2;
    case RC_ADDR(0x000147f6u): goto L_147F6;
    case RC_ADDR(0x000147fau): goto L_147FA;
    case RC_ADDR(0x000147feu): goto L_147FE;
    case RC_ADDR(0x00014800u): goto L_14800;
    case RC_ADDR(0x00014802u): goto L_14802;
    case RC_ADDR(0x00014806u): goto L_14806;
    case RC_ADDR(0x0001480au): goto L_1480A;
    case RC_ADDR(0x0001480eu): goto L_1480E;
    case RC_ADDR(0x00014812u): goto L_14812;
    case RC_ADDR(0x00014816u): goto L_14816;
    case RC_ADDR(0x00014818u): goto L_14818;
    case RC_ADDR(0x0001481cu): goto L_1481C;
    case RC_ADDR(0x0001481eu): goto L_1481E;
    case RC_ADDR(0x00014822u): goto L_14822;
    case RC_ADDR(0x00014824u): goto L_14824;
    case RC_ADDR(0x00014828u): goto L_14828;
    case RC_ADDR(0x0001482cu): goto L_1482C;
    case RC_ADDR(0x0001482eu): goto L_1482E;
    case RC_ADDR(0x00014832u): goto L_14832;
    case RC_ADDR(0x00014836u): goto L_14836;
    case RC_ADDR(0x0001483au): goto L_1483A;
    case RC_ADDR(0x0001483cu): goto L_1483C;
    case RC_ADDR(0x0001483eu): goto L_1483E;
    case RC_ADDR(0x00014842u): goto L_14842;
    case RC_ADDR(0x00014846u): goto L_14846;
    case RC_ADDR(0x00014848u): goto L_14848;
    case RC_ADDR(0x0001484cu): goto L_1484C;
    case RC_ADDR(0x00014850u): goto L_14850;
    case RC_ADDR(0x00014854u): goto L_14854;
    case RC_ADDR(0x00014856u): goto L_14856;
    case RC_ADDR(0x00014858u): goto L_14858;
    case RC_ADDR(0x0001485eu): goto L_1485E;
    case RC_ADDR(0x00014864u): goto L_14864;
    case RC_ADDR(0x00014868u): goto L_14868;
    case RC_ADDR(0x0001486eu): goto L_1486E;
    case RC_ADDR(0x00014872u): goto L_14872;
    case RC_ADDR(0x00014876u): goto L_14876;
    case RC_ADDR(0x0001487cu): goto L_1487C;
    case RC_ADDR(0x00014880u): goto L_14880;
    case RC_ADDR(0x00014882u): goto L_14882;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_147D0:
    /* 000147d0   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x000147d0u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_147D4:
    /* 000147d4   4  move.w (10d6,A4),D0 */
    c->pc = RC_ADDR(0x000147d4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10d6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_147D8:
    /* 000147d8   4  sub.w (74e,A4),D0 */
    c->pc = RC_ADDR(0x000147d8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x74eu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_147DC:
    /* 000147dc   2  asl.w #4,D0 */
    c->pc = RC_ADDR(0x000147dcu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_147DE:
    /* 000147de   4  add.w (10da,A4),D0 */
    c->pc = RC_ADDR(0x000147deu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10dau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_147E2:
    /* 000147e2   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000147e2u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_147E6:
    /* 000147e6   4  move.w (10d8,A4),D0 */
    c->pc = RC_ADDR(0x000147e6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10d8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_147EA:
    /* 000147ea   4  sub.w (750,A4),D0 */
    c->pc = RC_ADDR(0x000147eau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x750u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_147EE:
    /* 000147ee   4  mulu.w #a,D0 */
    c->pc = RC_ADDR(0x000147eeu);
    rc_step(c, m);
    t0 = 0x0000000au;
    rc_mulu(c, 0, t0);

L_147F2:
    /* 000147f2   4  add.w (10dc,A4),D0 */
    c->pc = RC_ADDR(0x000147f2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10dcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_147F6:
    /* 000147f6   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000147f6u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_147FA:
    /* 000147fa   4  move.w (10ca,A4),D0 */
    c->pc = RC_ADDR(0x000147fau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10cau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_147FE:
    /* 000147fe   2  ext.l D0 */
    c->pc = RC_ADDR(0x000147feu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_14800:
    /* 00014800   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00014800u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_14802:
    /* 00014802   4  lea (10e4,A4),A0 */
    c->pc = RC_ADDR(0x00014802u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x10e4u);

L_14806:
    /* 00014806   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00014806u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1480A:
    /* 0001480a   4  move.w (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001480au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1480E:
    /* 0001480e   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x0001480eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14812:
    /* 00014812   4  jsr (ffff8158,A4) */
    c->pc = RC_ADDR(0x00014812u);
    rc_step(c, m);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x00014816u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021baeu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011208u);
    return;

L_14816:
    /* 00014816   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00014816u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_14818:
    /* 00014818   4  tst.w (fffffd84,A4) */
    c->pc = RC_ADDR(0x00014818u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x27cu));
    rc_set_nzvc(c, t0, RC_W);

L_1481C:
    /* 0001481c   2  beq 00014880 */
    c->pc = RC_ADDR(0x0001481cu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_14880;

L_1481E:
    /* 0001481e   4  tst.w (10e2,A4) */
    c->pc = RC_ADDR(0x0001481eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10e2u));
    rc_set_nzvc(c, t0, RC_W);

L_14822:
    /* 00014822   2  bne 00014880 */
    c->pc = RC_ADDR(0x00014822u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_14880;

L_14824:
    /* 00014824   4  move.w (fffffd98,A4),D0 */
    c->pc = RC_ADDR(0x00014824u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x268u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14828:
    /* 00014828   4  cmp.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014828u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1482C:
    /* 0001482c   2  bls 00014880 */
    c->pc = RC_ADDR(0x0001482cu);
    rc_step(c, m);
    if (rc_cond(c, 3)) goto L_14880;

L_1482E:
    /* 0001482e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001482eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14832:
    /* 00014832   4  add.w #16,D0 */
    c->pc = RC_ADDR(0x00014832u);
    rc_step(c, m);
    t0 = 0x00000016u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14836:
    /* 00014836   4  move.w (fffffd98,A4),D1 */
    c->pc = RC_ADDR(0x00014836u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x268u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1483A:
    /* 0001483a   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x0001483au);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1483C:
    /* 0001483c   2  bcc 00014880 */
    c->pc = RC_ADDR(0x0001483cu);
    rc_step(c, m);
    if (rc_cond(c, 4)) goto L_14880;

L_1483E:
    /* 0001483e   4  move.w (fffffd9a,A4),D0 */
    c->pc = RC_ADDR(0x0001483eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x266u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14842:
    /* 00014842   4  cmp.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00014842u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14846:
    /* 00014846   2  bls 00014880 */
    c->pc = RC_ADDR(0x00014846u);
    rc_step(c, m);
    if (rc_cond(c, 3)) goto L_14880;

L_14848:
    /* 00014848   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00014848u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1484C:
    /* 0001484c   4  add.w #16,D0 */
    c->pc = RC_ADDR(0x0001484cu);
    rc_step(c, m);
    t0 = 0x00000016u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14850:
    /* 00014850   4  move.w (fffffd9a,A4),D1 */
    c->pc = RC_ADDR(0x00014850u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x266u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14854:
    /* 00014854   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00014854u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14856:
    /* 00014856   2  bcc 00014880 */
    c->pc = RC_ADDR(0x00014856u);
    rc_step(c, m);
    if (rc_cond(c, 4)) goto L_14880;

L_14858:
    /* 00014858   6  move.w (fffffffe,A5),(fffffd98,A4) */
    c->pc = RC_ADDR(0x00014858u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_wr16(c, m, (c->a[4] - 0x268u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1485E:
    /* 0001485e   6  move.w (fffffffc,A5),(fffffd9a,A4) */
    c->pc = RC_ADDR(0x0001485eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_wr16(c, m, (c->a[4] - 0x266u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14864:
    /* 00014864   4  clr.w (fffffd84,A4) */
    c->pc = RC_ADDR(0x00014864u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x27cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14868:
    /* 00014868   6  move.w #3e8,(fffff28c,A4) */
    c->pc = RC_ADDR(0x00014868u);
    rc_step(c, m);
    t0 = 0x000003e8u;
    rc_wr16(c, m, (c->a[4] - 0xd74u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1486E:
    /* 0001486e   4  clr.w (fffff288,A4) */
    c->pc = RC_ADDR(0x0001486eu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0xd78u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14872:
    /* 00014872   4  clr.w (fffff286,A4) */
    c->pc = RC_ADDR(0x00014872u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0xd7au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14876:
    /* 00014876   6  move.w #1,(af6,A4) */
    c->pc = RC_ADDR(0x00014876u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xaf6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1487C:
    /* 0001487c   4  jsr (0001695c) */
    c->pc = RC_ADDR(0x0001487cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00014880u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001695cu);
    return;

L_14880:
    /* 00014880   2  unlk A5 */
    c->pc = RC_ADDR(0x00014880u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_14882:
    /* 00014882   2  rts */
    c->pc = RC_ADDR(0x00014882u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
