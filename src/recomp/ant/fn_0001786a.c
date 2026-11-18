/* fn_0001786a - 16 byte(s), 5 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001786a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001786au): goto L_1786A;
    case RC_ADDR(0x0001786cu): goto L_1786C;
    case RC_ADDR(0x00017870u): goto L_17870;
    case RC_ADDR(0x00017874u): goto L_17874;
    case RC_ADDR(0x00017878u): goto L_17878;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1786A:
    /* 0001786a   2  lsr.w #1,D2 */
    c->pc = RC_ADDR(0x0001786au);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W));

L_1786C:
    /* 0001786c   4  movea.l (fffffac0,A4),A2 */
    c->pc = RC_ADDR(0x0001786cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x540u));
    c->a[2] = t0;

L_17870:
    /* 00017870   4  move.b (0,A2,D2.w),D3 */
    c->pc = RC_ADDR(0x00017870u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[2], RC_W);
    t0 = rc_rd8(c, m, (c->a[2] + 0x0u + t4));
    rc_d_set(c, 3, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_17874:
    /* 00017874   4  andi.b #80,D3 */
    c->pc = RC_ADDR(0x00017874u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 3, RC_B);
    t2 = t1 & 0x00000080u;
    rc_d_set(c, 3, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_17878:
    /* 00017878   2  rts */
    c->pc = RC_ADDR(0x00017878u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
