/* fn_00023a34 - 12 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023a34(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00023a34u): goto L_23A34;
    case RC_ADDR(0x00023a38u): goto L_23A38;
    case RC_ADDR(0x00023a3cu): goto L_23A3C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23A34:
    /* 00023a34   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x00023a34u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_23A38:
    /* 00023a38   4  movea.l (ffff85de,A4),A6 */
    c->pc = RC_ADDR(0x00023a38u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7a22u));
    c->a[6] = t0;

L_23A3C:
    /* 00023a3c   4  jmp (ffffffe2,A6) */
    c->pc = RC_ADDR(0x00023a3cu);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -30);
    return;

}
