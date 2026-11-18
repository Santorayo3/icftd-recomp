/* fn_0002393a - 12 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002393a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0002393au): goto L_2393A;
    case RC_ADDR(0x0002393eu): goto L_2393E;
    case RC_ADDR(0x00023942u): goto L_23942;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2393A:
    /* 0002393a   4  movea.l (4,A7),A1 */
    c->pc = RC_ADDR(0x0002393au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_2393E:
    /* 0002393e   4  movea.l (ffffd324,A4),A6 */
    c->pc = RC_ADDR(0x0002393eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cdcu));
    c->a[6] = t0;

L_23942:
    /* 00023942   4  jmp (ffffff22,A6) */
    c->pc = RC_ADDR(0x00023942u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -222);
    return;

}
