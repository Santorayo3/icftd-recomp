/* fn_00002720 - 24 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00002720(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00002720u): goto L_2720;
    case RC_ADDR(0x00002724u): goto L_2724;
    case RC_ADDR(0x00002728u): goto L_2728;
    case RC_ADDR(0x0000272cu): goto L_272C;
    case RC_ADDR(0x0000272eu): goto L_272E;
    case RC_ADDR(0x00002730u): goto L_2730;
    case RC_ADDR(0x00002734u): goto L_2734;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2720:
    /* 00002720   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00002720u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_2724:
    /* 00002724   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002724u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2728:
    /* 00002728   4  move.w (ffff8584,A4),D0 */
    c->pc = RC_ADDR(0x00002728u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7a7cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_272C:
    /* 0000272c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000272cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_272E:
    /* 0000272e   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000272eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_2730:
    /* 00002730   4  lea (ffff8574,A4),A0 */
    c->pc = RC_ADDR(0x00002730u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a8cu);

L_2734:
    /* 00002734   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00002734u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

    /* falls through into 00002738 */
    c->pc = RC_ADDR(0x00002738u);
    return;
}
