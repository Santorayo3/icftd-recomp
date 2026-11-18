/* fn_00023a14 - 12 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023a14(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00023a14u): goto L_23A14;
    case RC_ADDR(0x00023a18u): goto L_23A18;
    case RC_ADDR(0x00023a1cu): goto L_23A1C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23A14:
    /* 00023a14   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x00023a14u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_23A18:
    /* 00023a18   4  movea.l (4546,A4),A6 */
    c->pc = RC_ADDR(0x00023a18u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4546u));
    c->a[6] = t0;

L_23A1C:
    /* 00023a1c   4  jmp (ffffffa6,A6) */
    c->pc = RC_ADDR(0x00023a1cu);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -90);
    return;

}
