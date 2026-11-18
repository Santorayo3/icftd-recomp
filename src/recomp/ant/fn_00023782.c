/* fn_00023782 - 12 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023782(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00023782u): goto L_23782;
    case RC_ADDR(0x00023786u): goto L_23786;
    case RC_ADDR(0x0002378au): goto L_2378A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23782:
    /* 00023782   4  move.l (4,A7),D0 */
    c->pc = RC_ADDR(0x00023782u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_23786:
    /* 00023786   4  movea.l (4524,A4),A6 */
    c->pc = RC_ADDR(0x00023786u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4524u));
    c->a[6] = t0;

L_2378A:
    /* 0002378a   4  jmp (fffffeb0,A6) */
    c->pc = RC_ADDR(0x0002378au);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -336);
    return;

}
