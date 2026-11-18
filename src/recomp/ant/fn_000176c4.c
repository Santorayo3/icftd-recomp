/* fn_000176c4 - 40 byte(s), 12 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000176c4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000176c4u): goto L_176C4;
    case RC_ADDR(0x000176c6u): goto L_176C6;
    case RC_ADDR(0x000176cau): goto L_176CA;
    case RC_ADDR(0x000176d0u): goto L_176D0;
    case RC_ADDR(0x000176d4u): goto L_176D4;
    case RC_ADDR(0x000176d6u): goto L_176D6;
    case RC_ADDR(0x000176d8u): goto L_176D8;
    case RC_ADDR(0x000176dcu): goto L_176DC;
    case RC_ADDR(0x000176e0u): goto L_176E0;
    case RC_ADDR(0x000176e2u): goto L_176E2;
    case RC_ADDR(0x000176e6u): goto L_176E6;
    case RC_ADDR(0x000176eau): goto L_176EA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_176C4:
    /* 000176c4   2  lsr.w #4,D0 */
    c->pc = RC_ADDR(0x000176c4u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_176C6:
    /* 000176c6   4  mulu.w #14,D0 */
    c->pc = RC_ADDR(0x000176c6u);
    rc_step(c, m, 42);
    t0 = 0x00000014u;
    rc_mulu(c, 0, t0);

L_176CA:
    /* 000176ca   6  andi.l #ffff,D1 */
    c->pc = RC_ADDR(0x000176cau);
    rc_step(c, m, 14);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 & 0x0000ffffu;
    rc_d_set(c, 1, RC_L, t2);
    rc_set_nzvc(c, t2, RC_L);

L_176D0:
    /* 000176d0   4  divu.w #a,D1 */
    c->pc = RC_ADDR(0x000176d0u);
    rc_step(c, m, 144);
    t0 = 0x0000000au;
    rc_divu(c, m, 1, t0);

L_176D4:
    /* 000176d4   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x000176d4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_176D6:
    /* 000176d6   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x000176d6u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_176D8:
    /* 000176d8   4  movea.l (fffffaa0,A4),A0 */
    c->pc = RC_ADDR(0x000176d8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x560u));
    c->a[0] = t0;

L_176DC:
    /* 000176dc   4  move.w (0,A0,D0.w),D0 */
    c->pc = RC_ADDR(0x000176dcu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_176E0:
    /* 000176e0   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x000176e0u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_176E2:
    /* 000176e2   4  movea.l (fffffac0,A4),A0 */
    c->pc = RC_ADDR(0x000176e2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x540u));
    c->a[0] = t0;

L_176E6:
    /* 000176e6   4  move.b (0,A0,D0.w),D0 */
    c->pc = RC_ADDR(0x000176e6u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_176EA:
    /* 000176ea   2  rts */
    c->pc = RC_ADDR(0x000176eau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
