/* fn_00021752 - 12 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021752(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00021752u): goto L_21752;
    case RC_ADDR(0x00021756u): goto L_21756;
    case RC_ADDR(0x0002175au): goto L_2175A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21752:
    /* 00021752   4  movea.l (4,A7),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021752u);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_21756:
    /* 00021756   4  movea.l (3af4,A4),A6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021756u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af4u));
    c->a[6] = t0;

L_2175A:
    /* 0002175a   4  jmp (fffffe98,A6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002175au);
    rc_os_call_a6(c, m, -360);
    return;

}
