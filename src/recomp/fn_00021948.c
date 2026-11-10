/* fn_00021948 - 8 byte(s), 2 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021948(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00021948u): goto L_21948;
    case RC_ADDR(0x0002194cu): goto L_2194C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21948:
    /* 00021948   4  movea.l (ffffcba0,A4),A6 */
    c->pc = RC_ADDR(0x00021948u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_2194C:
    /* 0002194c   4  jmp (ffffff1c,A6) */
    c->pc = RC_ADDR(0x0002194cu);
    rc_step(c, m);
    rc_os_call_a6(c, m, -228);
    return;

}
