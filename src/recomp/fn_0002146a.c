/* fn_0002146a - 8 byte(s), 2 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0002146a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0002146au): goto L_2146A;
    case RC_ADDR(0x0002146eu): goto L_2146E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2146A:
    /* 0002146a   4  movea.l (3af8,A4),A6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002146au);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af8u));
    c->a[6] = t0;

L_2146E:
    /* 0002146e   4  jmp (ffffffc4,A6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002146eu);
    rc_os_call_a6(c, m, -60);
    return;

}
