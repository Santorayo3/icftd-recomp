/* fn_00016664 - 22 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00016664(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00016664u): goto L_16664;
    case RC_ADDR(0x00016668u): goto L_16668;
    case RC_ADDR(0x0001666cu): goto L_1666C;
    case RC_ADDR(0x0001666eu): goto L_1666E;
    case RC_ADDR(0x00016672u): goto L_16672;
    case RC_ADDR(0x00016676u): goto L_16676;
    case RC_ADDR(0x00016678u): goto L_16678;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16664:
    /* 00016664   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00016664u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_16668:
    /* 00016668   4  tst.w (8,A5) */
    c->pc = RC_ADDR(0x00016668u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_1666C:
    /* 0001666c   2  bge 00016672 */
    c->pc = RC_ADDR(0x0001666cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_16672;

L_1666E:
    /* 0001666e   4  neg.w (8,A5) */
    c->pc = RC_ADDR(0x0001666eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16672:
    /* 00016672   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016672u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16676:
    /* 00016676   2  unlk A5 */
    c->pc = RC_ADDR(0x00016676u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16678:
    /* 00016678   2  rts */
    c->pc = RC_ADDR(0x00016678u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
