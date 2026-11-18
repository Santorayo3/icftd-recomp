/* fn_00023290 - 12 byte(s), 6 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023290(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00023290u): goto L_23290;
    case RC_ADDR(0x00023292u): goto L_23292;
    case RC_ADDR(0x00023294u): goto L_23294;
    case RC_ADDR(0x00023296u): goto L_23296;
    case RC_ADDR(0x00023298u): goto L_23298;
    case RC_ADDR(0x0002329au): goto L_2329A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23290:
    /* 00023290   2  move.l D1,-(A7) */
    c->pc = RC_ADDR(0x00023290u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23292:
    /* 00023292   2  bsr 000232a6 */
    c->pc = RC_ADDR(0x00023292u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00023294u));
    rc_depth++;
    c->pc = RC_ADDR(0x000232a6u);
    return;

L_23294:
    /* 00023294   2  move.l D1,D0 */
    c->pc = RC_ADDR(0x00023294u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_23296:
    /* 00023296   2  move.l (A7)+,D1 */
    c->pc = RC_ADDR(0x00023296u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_23298:
    /* 00023298   2  tst.l D0 */
    c->pc = RC_ADDR(0x00023298u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_2329A:
    /* 0002329a   2  rts */
    c->pc = RC_ADDR(0x0002329au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
