/* fn_000239fe - 8 byte(s), 2 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000239fe(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000239feu): goto L_239FE;
    case RC_ADDR(0x00023a02u): goto L_23A02;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_239FE:
    /* 000239fe   4  movea.l (ffffd324,A4),A6 */
    c->pc = RC_ADDR(0x000239feu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cdcu));
    c->a[6] = t0;

L_23A02:
    /* 00023a02   4  jmp (fffffef2,A6) */
    c->pc = RC_ADDR(0x00023a02u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -270);
    return;

}
