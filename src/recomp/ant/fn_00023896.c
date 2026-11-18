/* fn_00023896 - 8 byte(s), 2 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023896(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00023896u): goto L_23896;
    case RC_ADDR(0x0002389au): goto L_2389A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23896:
    /* 00023896   4  movea.l (ffffd324,A4),A6 */
    c->pc = RC_ADDR(0x00023896u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cdcu));
    c->a[6] = t0;

L_2389A:
    /* 0002389a   4  jmp (fffffe32,A6) */
    c->pc = RC_ADDR(0x0002389au);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -462);
    return;

}
