/* fn_000239ac - 16 byte(s), 4 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000239ac(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000239acu): goto L_239AC;
    case RC_ADDR(0x000239b0u): goto L_239B0;
    case RC_ADDR(0x000239b4u): goto L_239B4;
    case RC_ADDR(0x000239b8u): goto L_239B8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_239AC:
    /* 000239ac   4  movea.l (4,A7),A1 */
    c->pc = RC_ADDR(0x000239acu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_239B0:
    /* 000239b0   4  movea.l (8,A7),A0 */
    c->pc = RC_ADDR(0x000239b0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x8u));
    c->a[0] = t0;

L_239B4:
    /* 000239b4   4  movea.l (ffffd324,A4),A6 */
    c->pc = RC_ADDR(0x000239b4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cdcu));
    c->a[6] = t0;

L_239B8:
    /* 000239b8   4  jmp (ffffffbe,A6) */
    c->pc = RC_ADDR(0x000239b8u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -66);
    return;

}
