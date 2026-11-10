/* fn_00021442 - 8 byte(s), 2 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021442(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00021442u): goto L_21442;
    case RC_ADDR(0x00021446u): goto L_21446;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21442:
    /* 00021442   4  movea.l (3af8,A4),A6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021442u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af8u));
    c->a[6] = t0;

L_21446:
    /* 00021446   4  jmp (ffffffca,A6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021446u);
    rc_os_call_a6(c, m, -54);
    return;

}
