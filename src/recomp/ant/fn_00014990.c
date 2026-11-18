/* fn_00014990 - 152 byte(s), 43 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00014990(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00014990u): goto L_14990;
    case RC_ADDR(0x00014994u): goto L_14994;
    case RC_ADDR(0x0001499au): goto L_1499A;
    case RC_ADDR(0x0001499eu): goto L_1499E;
    case RC_ADDR(0x000149a2u): goto L_149A2;
    case RC_ADDR(0x000149a4u): goto L_149A4;
    case RC_ADDR(0x000149a6u): goto L_149A6;
    case RC_ADDR(0x000149aau): goto L_149AA;
    case RC_ADDR(0x000149aeu): goto L_149AE;
    case RC_ADDR(0x000149b2u): goto L_149B2;
    case RC_ADDR(0x000149b4u): goto L_149B4;
    case RC_ADDR(0x000149b8u): goto L_149B8;
    case RC_ADDR(0x000149bau): goto L_149BA;
    case RC_ADDR(0x000149bcu): goto L_149BC;
    case RC_ADDR(0x000149c0u): goto L_149C0;
    case RC_ADDR(0x000149c2u): goto L_149C2;
    case RC_ADDR(0x000149c4u): goto L_149C4;
    case RC_ADDR(0x000149c8u): goto L_149C8;
    case RC_ADDR(0x000149ccu): goto L_149CC;
    case RC_ADDR(0x000149d0u): goto L_149D0;
    case RC_ADDR(0x000149d4u): goto L_149D4;
    case RC_ADDR(0x000149d8u): goto L_149D8;
    case RC_ADDR(0x000149dcu): goto L_149DC;
    case RC_ADDR(0x000149e0u): goto L_149E0;
    case RC_ADDR(0x000149e4u): goto L_149E4;
    case RC_ADDR(0x000149e8u): goto L_149E8;
    case RC_ADDR(0x000149eau): goto L_149EA;
    case RC_ADDR(0x000149ecu): goto L_149EC;
    case RC_ADDR(0x000149f0u): goto L_149F0;
    case RC_ADDR(0x000149f4u): goto L_149F4;
    case RC_ADDR(0x000149f8u): goto L_149F8;
    case RC_ADDR(0x000149fcu): goto L_149FC;
    case RC_ADDR(0x00014a02u): goto L_14A02;
    case RC_ADDR(0x00014a06u): goto L_14A06;
    case RC_ADDR(0x00014a08u): goto L_14A08;
    case RC_ADDR(0x00014a0au): goto L_14A0A;
    case RC_ADDR(0x00014a0eu): goto L_14A0E;
    case RC_ADDR(0x00014a12u): goto L_14A12;
    case RC_ADDR(0x00014a16u): goto L_14A16;
    case RC_ADDR(0x00014a1au): goto L_14A1A;
    case RC_ADDR(0x00014a20u): goto L_14A20;
    case RC_ADDR(0x00014a24u): goto L_14A24;
    case RC_ADDR(0x00014a26u): goto L_14A26;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_14990:
    /* 00014990   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00014990u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_14994:
    /* 00014994   6  cmpi.w #a,(6e2,A4) */
    c->pc = RC_ADDR(0x00014994u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6e2u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_1499A:
    /* 0001499a   4  bge 00014a24 */
    c->pc = RC_ADDR(0x0001499au);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_14A24;

L_1499E:
    /* 0001499e   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x0001499eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_149A2:
    /* 000149a2   2  ext.l D0 */
    c->pc = RC_ADDR(0x000149a2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_149A4:
    /* 000149a4   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000149a4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_149A6:
    /* 000149a6   4  lea (ffff84a2,A4),A0 */
    c->pc = RC_ADDR(0x000149a6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7b5eu);

L_149AA:
    /* 000149aa   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000149aau);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_149AE:
    /* 000149ae   4  move.w (6e4,A4),D0 */
    c->pc = RC_ADDR(0x000149aeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6e4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_149B2:
    /* 000149b2   2  ext.l D0 */
    c->pc = RC_ADDR(0x000149b2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_149B4:
    /* 000149b4   4  divs.w #a,D0 */
    c->pc = RC_ADDR(0x000149b4u);
    rc_step(c, m, 162);
    t0 = 0x0000000au;
    rc_divs(c, m, 0, t0);

L_149B8:
    /* 000149b8   2  ext.l D0 */
    c->pc = RC_ADDR(0x000149b8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_149BA:
    /* 000149ba   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x000149bau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_149BC:
    /* 000149bc   4  move.b (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x000149bcu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_149C0:
    /* 000149c0   2  ext.w D0 */
    c->pc = RC_ADDR(0x000149c0u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_149C2:
    /* 000149c2   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x000149c2u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_149C4:
    /* 000149c4   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000149c4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_149C8:
    /* 000149c8   4  move.w (6e4,A4),D0 */
    c->pc = RC_ADDR(0x000149c8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6e4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_149CC:
    /* 000149cc   4  add.w (6e2,A4),D0 */
    c->pc = RC_ADDR(0x000149ccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6e2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_149D0:
    /* 000149d0   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000149d0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_149D4:
    /* 000149d4   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x000149d4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_149D8:
    /* 000149d8   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x000149d8u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_149DC:
    /* 000149dc   4  lea (fffffb30,A4),A0 */
    c->pc = RC_ADDR(0x000149dcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4d0u);

L_149E0:
    /* 000149e0   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000149e0u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_149E4:
    /* 000149e4   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000149e4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_149E8:
    /* 000149e8   2  ext.l D0 */
    c->pc = RC_ADDR(0x000149e8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_149EA:
    /* 000149ea   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000149eau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_149EC:
    /* 000149ec   4  lea (ffffb5d8,A4),A0 */
    c->pc = RC_ADDR(0x000149ecu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4a28u);

L_149F0:
    /* 000149f0   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x000149f0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_149F4:
    /* 000149f4   4  muls.w #16,D1 */
    c->pc = RC_ADDR(0x000149f4u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 1, t0);

L_149F8:
    /* 000149f8   4  lea (fffffb24,A4),A1 */
    c->pc = RC_ADDR(0x000149f8u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4dcu);

L_149FC:
    /* 000149fc   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x000149fcu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14A02:
    /* 00014a02   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014a02u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14A06:
    /* 00014a06   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014a06u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14A08:
    /* 00014a08   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00014a08u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_14A0A:
    /* 00014a0a   4  lea (ffffb5da,A4),A0 */
    c->pc = RC_ADDR(0x00014a0au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4a26u);

L_14A0E:
    /* 00014a0e   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x00014a0eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14A12:
    /* 00014a12   4  muls.w #16,D1 */
    c->pc = RC_ADDR(0x00014a12u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 1, t0);

L_14A16:
    /* 00014a16   4  lea (fffffb26,A4),A1 */
    c->pc = RC_ADDR(0x00014a16u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4dau);

L_14A1A:
    /* 00014a1a   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00014a1au);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14A20:
    /* 00014a20   4  addq.w #1,(6e2,A4) */
    c->pc = RC_ADDR(0x00014a20u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x6e2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_14A24:
    /* 00014a24   2  unlk A5 */
    c->pc = RC_ADDR(0x00014a24u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_14A26:
    /* 00014a26   2  rts */
    c->pc = RC_ADDR(0x00014a26u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
