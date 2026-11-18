/* fn_0002367a - 12 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002367a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0002367au): goto L_2367A;
    case RC_ADDR(0x0002367eu): goto L_2367E;
    case RC_ADDR(0x00023682u): goto L_23682;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2367A:
    /* 0002367a   4  move.l (4,A7),D0 */
    c->pc = RC_ADDR(0x0002367au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2367E:
    /* 0002367e   4  movea.l (4524,A4),A6 */
    c->pc = RC_ADDR(0x0002367eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4524u));
    c->a[6] = t0;

L_23682:
    /* 00023682   4  jmp (fffffeb6,A6) */
    c->pc = RC_ADDR(0x00023682u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -330);
    return;

}
