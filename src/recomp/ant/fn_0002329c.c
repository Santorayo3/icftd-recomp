/* fn_0002329c - 10 byte(s), 5 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002329c(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0002329cu): goto L_2329C;
    case RC_ADDR(0x0002329eu): goto L_2329E;
    case RC_ADDR(0x000232a0u): goto L_232A0;
    case RC_ADDR(0x000232a2u): goto L_232A2;
    case RC_ADDR(0x000232a4u): goto L_232A4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2329C:
    /* 0002329c   2  move.l D1,-(A7) */
    c->pc = RC_ADDR(0x0002329cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2329E:
    /* 0002329e   2  bsr 000232a6 */
    c->pc = RC_ADDR(0x0002329eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000232a0u));
    rc_depth++;
    c->pc = RC_ADDR(0x000232a6u);
    return;

L_232A0:
    /* 000232a0   2  move.l (A7)+,D1 */
    c->pc = RC_ADDR(0x000232a0u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_232A2:
    /* 000232a2   2  tst.l D0 */
    c->pc = RC_ADDR(0x000232a2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_232A4:
    /* 000232a4   2  rts */
    c->pc = RC_ADDR(0x000232a4u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
