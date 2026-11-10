/* fn_000215d8 - 12 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000215d8(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000215d8u): goto L_215D8;
    case RC_ADDR(0x000215dcu): goto L_215DC;
    case RC_ADDR(0x000215e0u): goto L_215E0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_215D8:
    /* 000215d8   4  move.l (4,A7),D0 */
    c->pc = RC_ADDR(0x000215d8u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_215DC:
    /* 000215dc   4  movea.l (3af4,A4),A6 */
    c->pc = RC_ADDR(0x000215dcu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af4u));
    c->a[6] = t0;

L_215E0:
    /* 000215e0   4  jmp (fffffeb6,A6) */
    c->pc = RC_ADDR(0x000215e0u);
    rc_step(c, m);
    rc_os_call_a6(c, m, -330);
    return;

}
