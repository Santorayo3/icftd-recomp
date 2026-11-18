/* fn_0002347c - 12 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002347c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0002347cu): goto L_2347C;
    case RC_ADDR(0x00023480u): goto L_23480;
    case RC_ADDR(0x00023484u): goto L_23484;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2347C:
    /* 0002347c   4  movea.l (4,A7),A6 */
    c->pc = RC_ADDR(0x0002347cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[6] = t0;

L_23480:
    /* 00023480   4  move.l (8,A7),D0 */
    c->pc = RC_ADDR(0x00023480u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_23484:
    /* 00023484   4  jmp (ffffffee,A6) */
    c->pc = RC_ADDR(0x00023484u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -18);
    return;

}
