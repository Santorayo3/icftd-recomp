/* fn_00023866 - 12 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023866(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00023866u): goto L_23866;
    case RC_ADDR(0x0002386au): goto L_2386A;
    case RC_ADDR(0x0002386eu): goto L_2386E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23866:
    /* 00023866   4  movea.l (4,A7),A1 */
    c->pc = RC_ADDR(0x00023866u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_2386A:
    /* 0002386a   4  movea.l (ffffd324,A4),A6 */
    c->pc = RC_ADDR(0x0002386au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cdcu));
    c->a[6] = t0;

L_2386E:
    /* 0002386e   4  jmp (ffffffb2,A6) */
    c->pc = RC_ADDR(0x0002386eu);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -78);
    return;

}
