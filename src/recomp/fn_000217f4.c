/* fn_000217f4 - 8 byte(s), 2 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000217f4(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000217f4u): goto L_217F4;
    case RC_ADDR(0x000217f8u): goto L_217F8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_217F4:
    /* 000217f4   4  movea.l (ffffcba0,A4),A6 */
    c->pc = RC_ADDR(0x000217f4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_217F8:
    /* 000217f8   4  jmp (fffffe32,A6) */
    c->pc = RC_ADDR(0x000217f8u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -462);
    return;

}
