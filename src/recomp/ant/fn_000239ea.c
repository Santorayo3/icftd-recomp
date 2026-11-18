/* fn_000239ea - 8 byte(s), 2 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000239ea(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000239eau): goto L_239EA;
    case RC_ADDR(0x000239eeu): goto L_239EE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_239EA:
    /* 000239ea   4  movea.l (ffffd324,A4),A6 */
    c->pc = RC_ADDR(0x000239eau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cdcu));
    c->a[6] = t0;

L_239EE:
    /* 000239ee   4  jmp (ffffff1c,A6) */
    c->pc = RC_ADDR(0x000239eeu);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -228);
    return;

}
