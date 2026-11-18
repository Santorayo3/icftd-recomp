/* fn_00023496 - 12 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023496(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00023496u): goto L_23496;
    case RC_ADDR(0x0002349au): goto L_2349A;
    case RC_ADDR(0x0002349eu): goto L_2349E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23496:
    /* 00023496   4  movea.l (4,A7),A6 */
    c->pc = RC_ADDR(0x00023496u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[6] = t0;

L_2349A:
    /* 0002349a   4  move.l (8,A7),D0 */
    c->pc = RC_ADDR(0x0002349au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2349E:
    /* 0002349e   4  jmp (fffffff4,A6) */
    c->pc = RC_ADDR(0x0002349eu);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -12);
    return;

}
