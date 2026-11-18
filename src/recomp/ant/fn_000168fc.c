/* fn_000168fc - 36 byte(s), 12 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000168fc(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000168fcu): goto L_168FC;
    case RC_ADDR(0x00016900u): goto L_16900;
    case RC_ADDR(0x00016904u): goto L_16904;
    case RC_ADDR(0x00016906u): goto L_16906;
    case RC_ADDR(0x00016908u): goto L_16908;
    case RC_ADDR(0x0001690cu): goto L_1690C;
    case RC_ADDR(0x00016910u): goto L_16910;
    case RC_ADDR(0x00016912u): goto L_16912;
    case RC_ADDR(0x00016914u): goto L_16914;
    case RC_ADDR(0x00016918u): goto L_16918;
    case RC_ADDR(0x0001691cu): goto L_1691C;
    case RC_ADDR(0x0001691eu): goto L_1691E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_168FC:
    /* 000168fc   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000168fcu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_16900:
    /* 00016900   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016900u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16904:
    /* 00016904   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016904u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16906:
    /* 00016906   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016906u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16908:
    /* 00016908   4  lea (1bee,A4),A0 */
    c->pc = RC_ADDR(0x00016908u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1beeu);

L_1690C:
    /* 0001690c   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001690cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16910:
    /* 00016910   2  ext.l D1 */
    c->pc = RC_ADDR(0x00016910u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_16912:
    /* 00016912   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00016912u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_16914:
    /* 00016914   4  lea (ffffb4b2,A4),A0 */
    c->pc = RC_ADDR(0x00016914u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4b4eu);

L_16918:
    /* 00016918   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x00016918u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1691C:
    /* 0001691c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001691cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1691E:
    /* 0001691e   2  rts */
    c->pc = RC_ADDR(0x0001691eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
