/* fn_000238d4 - 12 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000238d4(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000238d4u): goto L_238D4;
    case RC_ADDR(0x000238d8u): goto L_238D8;
    case RC_ADDR(0x000238dcu): goto L_238DC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_238D4:
    /* 000238d4   4  move.l (4,A7),D0 */
    c->pc = RC_ADDR(0x000238d4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_238D8:
    /* 000238d8   4  movea.l (ffffd324,A4),A6 */
    c->pc = RC_ADDR(0x000238d8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cdcu));
    c->a[6] = t0;

L_238DC:
    /* 000238dc   4  jmp (fffffdc6,A6) */
    c->pc = RC_ADDR(0x000238dcu);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -570);
    return;

}
