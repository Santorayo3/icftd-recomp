/* fn_0000b286 - 12 byte(s), 4 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000b286(cpu_t *c, rt_machine *m)
{
    u32 t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x0000b286u): goto L_B286;
    case RC_ADDR(0x0000b288u): goto L_B288;
    case RC_ADDR(0x0000b28cu): goto L_B28C;
    case RC_ADDR(0x0000b290u): goto L_B290;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B286:
    /* 0000b286   2  moveq #73,D1 */
    c->pc = RC_ADDR(0x0000b286u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000073u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_B288:
    /* 0000b288   4  ori.b #55,D0 */
    c->pc = RC_ADDR(0x0000b288u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 | 0x00000055u;
    rc_d_set(c, 0, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_B28C:
    /* 0000b28c   4  ori.b #5d,D0 */
    c->pc = RC_ADDR(0x0000b28cu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 | 0x0000005du;
    rc_d_set(c, 0, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_B290:
    /* 0000b290   2  rts */
    c->pc = RC_ADDR(0x0000b290u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
