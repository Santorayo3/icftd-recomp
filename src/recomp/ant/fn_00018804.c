/* fn_00018804 - 124 byte(s), 34 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00018804(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00018804u): goto L_18804;
    case RC_ADDR(0x00018808u): goto L_18808;
    case RC_ADDR(0x0001880cu): goto L_1880C;
    case RC_ADDR(0x00018810u): goto L_18810;
    case RC_ADDR(0x00018812u): goto L_18812;
    case RC_ADDR(0x00018816u): goto L_18816;
    case RC_ADDR(0x0001881au): goto L_1881A;
    case RC_ADDR(0x0001881cu): goto L_1881C;
    case RC_ADDR(0x0001881eu): goto L_1881E;
    case RC_ADDR(0x00018822u): goto L_18822;
    case RC_ADDR(0x00018826u): goto L_18826;
    case RC_ADDR(0x00018828u): goto L_18828;
    case RC_ADDR(0x0001882au): goto L_1882A;
    case RC_ADDR(0x0001882eu): goto L_1882E;
    case RC_ADDR(0x00018834u): goto L_18834;
    case RC_ADDR(0x00018838u): goto L_18838;
    case RC_ADDR(0x0001883eu): goto L_1883E;
    case RC_ADDR(0x00018840u): goto L_18840;
    case RC_ADDR(0x00018846u): goto L_18846;
    case RC_ADDR(0x0001884au): goto L_1884A;
    case RC_ADDR(0x00018850u): goto L_18850;
    case RC_ADDR(0x00018854u): goto L_18854;
    case RC_ADDR(0x0001885au): goto L_1885A;
    case RC_ADDR(0x0001885eu): goto L_1885E;
    case RC_ADDR(0x00018862u): goto L_18862;
    case RC_ADDR(0x00018866u): goto L_18866;
    case RC_ADDR(0x0001886au): goto L_1886A;
    case RC_ADDR(0x0001886eu): goto L_1886E;
    case RC_ADDR(0x00018870u): goto L_18870;
    case RC_ADDR(0x00018872u): goto L_18872;
    case RC_ADDR(0x00018876u): goto L_18876;
    case RC_ADDR(0x0001887au): goto L_1887A;
    case RC_ADDR(0x0001887cu): goto L_1887C;
    case RC_ADDR(0x0001887eu): goto L_1887E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_18804:
    /* 00018804   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00018804u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_18808:
    /* 00018808   4  pea (1cda,A4) */
    c->pc = RC_ADDR(0x00018808u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1cdau));

L_1880C:
    /* 0001880c   4  jsr (ffff8392,A4) */
    c->pc = RC_ADDR(0x0001880cu);
    rc_step(c, m, 18);
    /* vector 152 */
    rc_push32(c, m, RC_ADDR(0x00018810u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e88u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023904u);
    return;

L_18810:
    /* 00018810   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00018810u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_18812:
    /* 00018812   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00018812u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18816:
    /* 00018816   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00018816u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1881A:
    /* 0001881a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001881au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1881C:
    /* 0001881c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001881cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1881E:
    /* 0001881e   4  lea (1832,A4),A0 */
    c->pc = RC_ADDR(0x0001881eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1832u);

L_18822:
    /* 00018822   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00018822u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18826:
    /* 00018826   2  ext.l D1 */
    c->pc = RC_ADDR(0x00018826u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_18828:
    /* 00018828   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00018828u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_1882A:
    /* 0001882a   4  lea (1d66,A4),A1 */
    c->pc = RC_ADDR(0x0001882au);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1d66u);

L_1882E:
    /* 0001882e   6  move.l (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001882eu);
    rc_step(c, m, 32);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18834:
    /* 00018834   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00018834u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_18838:
    /* 00018838   6  cmpi.w #5,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00018838u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_1883E:
    /* 0001883e   2  blt 00018816 */
    c->pc = RC_ADDR(0x0001883eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_18816; }

L_18840:
    /* 00018840   6  move.w #28,(1d5e,A4) */
    c->pc = RC_ADDR(0x00018840u);
    rc_step(c, m, 16);
    t0 = 0x00000028u;
    rc_wr16(c, m, (c->a[4] + 0x1d5eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18846:
    /* 00018846   4  movea.l (1cc0,A4),A0 */
    c->pc = RC_ADDR(0x00018846u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1cc0u));
    c->a[0] = t0;

L_1884A:
    /* 0001884a   6  move.w (2,A0),(1d60,A4) */
    c->pc = RC_ADDR(0x0001884au);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_wr16(c, m, (c->a[4] + 0x1d60u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18850:
    /* 00018850   4  movea.l (1cc0,A4),A0 */
    c->pc = RC_ADDR(0x00018850u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1cc0u));
    c->a[0] = t0;

L_18854:
    /* 00018854   6  move.b (5,A0),(1d63,A4) */
    c->pc = RC_ADDR(0x00018854u);
    rc_step(c, m, 20);
    t0 = rc_rd8(c, m, (c->a[0] + 0x5u));
    rc_wr8(c, m, (c->a[4] + 0x1d63u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1885A:
    /* 0001885a   4  lea (1d5e,A4),A0 */
    c->pc = RC_ADDR(0x0001885au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d5eu);

L_1885E:
    /* 0001885e   4  move.l A0,(1cde,A4) */
    c->pc = RC_ADDR(0x0001885eu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x1cdeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18862:
    /* 00018862   4  move.l (ffff85e2,A4),-(A7) */
    c->pc = RC_ADDR(0x00018862u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7a1eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18866:
    /* 00018866   4  pea (1cda,A4) */
    c->pc = RC_ADDR(0x00018866u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1cdau));

L_1886A:
    /* 0001886a   4  jsr (ffff83bc,A4) */
    c->pc = RC_ADDR(0x0001886au);
    rc_step(c, m, 18);
    /* vector 159 */
    rc_push32(c, m, RC_ADDR(0x0001886eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023eb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000239acu);
    return;

L_1886E:
    /* 0001886e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001886eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_18870:
    /* 00018870   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00018870u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_18872:
    /* 00018872   4  pea (1cda,A4) */
    c->pc = RC_ADDR(0x00018872u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1cdau));

L_18876:
    /* 00018876   4  jsr (ffff83b6,A4) */
    c->pc = RC_ADDR(0x00018876u);
    rc_step(c, m, 18);
    /* vector 158 */
    rc_push32(c, m, RC_ADDR(0x0001887au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023eacu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002399cu);
    return;

L_1887A:
    /* 0001887a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001887au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1887C:
    /* 0001887c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001887cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1887E:
    /* 0001887e   2  rts */
    c->pc = RC_ADDR(0x0001887eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
