/* fn_000218d0 - 8 byte(s), 2 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000218d0(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000218d0u): goto L_218D0;
    case RC_ADDR(0x000218d4u): goto L_218D4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_218D0:
    /* 000218d0   4  movea.l (ffffcba0,A4),A6 */
    c->pc = RC_ADDR(0x000218d0u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_218D4:
    /* 000218d4   4  jmp (fffffe38,A6) */
    c->pc = RC_ADDR(0x000218d4u);
    rc_os_call_a6(c, m, -456);
    return;

}
