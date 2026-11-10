/* fn_000216c4 - 8 byte(s), 2 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000216c4(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000216c4u): goto L_216C4;
    case RC_ADDR(0x000216c8u): goto L_216C8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_216C4:
    /* 000216c4   4  movea.l (3af4,A4),A6 */
    c->pc = RC_ADDR(0x000216c4u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af4u));
    c->a[6] = t0;

L_216C8:
    /* 000216c8   4  jmp (ffffff7c,A6) */
    c->pc = RC_ADDR(0x000216c8u);
    rc_step(c, m);
    rc_os_call_a6(c, m, -132);
    return;

}
