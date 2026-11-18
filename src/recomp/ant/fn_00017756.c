/* fn_00017756 - 108 byte(s), 31 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00017756(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00017756u): goto L_17756;
    case RC_ADDR(0x0001775au): goto L_1775A;
    case RC_ADDR(0x0001775eu): goto L_1775E;
    case RC_ADDR(0x00017764u): goto L_17764;
    case RC_ADDR(0x0001776au): goto L_1776A;
    case RC_ADDR(0x0001776eu): goto L_1776E;
    case RC_ADDR(0x00017770u): goto L_17770;
    case RC_ADDR(0x00017774u): goto L_17774;
    case RC_ADDR(0x00017778u): goto L_17778;
    case RC_ADDR(0x0001777au): goto L_1777A;
    case RC_ADDR(0x0001777eu): goto L_1777E;
    case RC_ADDR(0x00017780u): goto L_17780;
    case RC_ADDR(0x00017784u): goto L_17784;
    case RC_ADDR(0x00017786u): goto L_17786;
    case RC_ADDR(0x0001778au): goto L_1778A;
    case RC_ADDR(0x0001778eu): goto L_1778E;
    case RC_ADDR(0x00017790u): goto L_17790;
    case RC_ADDR(0x00017794u): goto L_17794;
    case RC_ADDR(0x00017796u): goto L_17796;
    case RC_ADDR(0x00017798u): goto L_17798;
    case RC_ADDR(0x0001779cu): goto L_1779C;
    case RC_ADDR(0x000177a2u): goto L_177A2;
    case RC_ADDR(0x000177a6u): goto L_177A6;
    case RC_ADDR(0x000177a8u): goto L_177A8;
    case RC_ADDR(0x000177aau): goto L_177AA;
    case RC_ADDR(0x000177aeu): goto L_177AE;
    case RC_ADDR(0x000177b0u): goto L_177B0;
    case RC_ADDR(0x000177b4u): goto L_177B4;
    case RC_ADDR(0x000177b8u): goto L_177B8;
    case RC_ADDR(0x000177bcu): goto L_177BC;
    case RC_ADDR(0x000177c0u): goto L_177C0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_17756:
    /* 00017756   4  move.w (4,A7),D0 */
    c->pc = RC_ADDR(0x00017756u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[7] + 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1775A:
    /* 0001775a   4  move.w (6,A7),D1 */
    c->pc = RC_ADDR(0x0001775au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[7] + 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1775E:
    /* 0001775e   6  andi.l #ffff,D0 */
    c->pc = RC_ADDR(0x0001775eu);
    rc_step(c, m, 14);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 & 0x0000ffffu;
    rc_d_set(c, 0, RC_L, t2);
    rc_set_nzvc(c, t2, RC_L);

L_17764:
    /* 00017764   6  andi.l #ffff,D1 */
    c->pc = RC_ADDR(0x00017764u);
    rc_step(c, m, 14);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 & 0x0000ffffu;
    rc_d_set(c, 1, RC_L, t2);
    rc_set_nzvc(c, t2, RC_L);

L_1776A:
    /* 0001776a   4  divu.w #140,D0 */
    c->pc = RC_ADDR(0x0001776au);
    rc_step(c, m, 144);
    t0 = 0x00000140u;
    rc_divu(c, m, 0, t0);

L_1776E:
    /* 0001776e   2  move.l D1,D3 */
    c->pc = RC_ADDR(0x0001776eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 3, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_17770:
    /* 00017770   4  divu.w #c8,D3 */
    c->pc = RC_ADDR(0x00017770u);
    rc_step(c, m, 144);
    t0 = 0x000000c8u;
    rc_divu(c, m, 3, t0);

L_17774:
    /* 00017774   4  mulu.w #3c,D3 */
    c->pc = RC_ADDR(0x00017774u);
    rc_step(c, m, 42);
    t0 = 0x0000003cu;
    rc_mulu(c, 3, t0);

L_17778:
    /* 00017778   2  add.w D0,D3 */
    c->pc = RC_ADDR(0x00017778u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_1777A:
    /* 0001777a   4  lea (ffffa43a,A4),A0 */
    c->pc = RC_ADDR(0x0001777au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x5bc6u);

L_1777E:
    /* 0001777e   2  clr.l D2 */
    c->pc = RC_ADDR(0x0001777eu);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_17780:
    /* 00017780   4  move.b (0,A0,D3.w),D2 */
    c->pc = RC_ADDR(0x00017780u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_17784:
    /* 00017784   2  lsl.w #2,D2 */
    c->pc = RC_ADDR(0x00017784u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000002u, rc_d_get(c, 2, RC_W), RC_W));

L_17786:
    /* 00017786   4  lea (1502,A4),A0 */
    c->pc = RC_ADDR(0x00017786u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1502u);

L_1778A:
    /* 0001778a   4  movea.l (0,A0,D2.w),A0 */
    c->pc = RC_ADDR(0x0001778au);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[2], RC_W);
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[0] = t0;

L_1778E:
    /* 0001778e   2  swap D0 */
    c->pc = RC_ADDR(0x0001778eu);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_17790:
    /* 00017790   4  divu.w #c8,D1 */
    c->pc = RC_ADDR(0x00017790u);
    rc_step(c, m, 144);
    t0 = 0x000000c8u;
    rc_divu(c, m, 1, t0);

L_17794:
    /* 00017794   2  swap D1 */
    c->pc = RC_ADDR(0x00017794u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_17796:
    /* 00017796   2  lsr.w #4,D0 */
    c->pc = RC_ADDR(0x00017796u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_17798:
    /* 00017798   4  mulu.w #14,D0 */
    c->pc = RC_ADDR(0x00017798u);
    rc_step(c, m, 42);
    t0 = 0x00000014u;
    rc_mulu(c, 0, t0);

L_1779C:
    /* 0001779c   6  andi.l #ffff,D1 */
    c->pc = RC_ADDR(0x0001779cu);
    rc_step(c, m, 14);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 & 0x0000ffffu;
    rc_d_set(c, 1, RC_L, t2);
    rc_set_nzvc(c, t2, RC_L);

L_177A2:
    /* 000177a2   4  divu.w #a,D1 */
    c->pc = RC_ADDR(0x000177a2u);
    rc_step(c, m, 144);
    t0 = 0x0000000au;
    rc_divu(c, m, 1, t0);

L_177A6:
    /* 000177a6   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x000177a6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_177A8:
    /* 000177a8   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x000177a8u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_177AA:
    /* 000177aa   4  move.w (0,A0,D0.w),D0 */
    c->pc = RC_ADDR(0x000177aau);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_177AE:
    /* 000177ae   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x000177aeu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_177B0:
    /* 000177b0   4  move.w D0,(1ca6,A4) */
    c->pc = RC_ADDR(0x000177b0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1ca6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_177B4:
    /* 000177b4   4  movea.l (fffffac0,A4),A0 */
    c->pc = RC_ADDR(0x000177b4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x540u));
    c->a[0] = t0;

L_177B8:
    /* 000177b8   4  move.b (0,A0,D0.w),D0 */
    c->pc = RC_ADDR(0x000177b8u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_177BC:
    /* 000177bc   4  andi.w #ff,D0 */
    c->pc = RC_ADDR(0x000177bcu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 & 0x000000ffu;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_177C0:
    /* 000177c0   2  rts */
    c->pc = RC_ADDR(0x000177c0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
