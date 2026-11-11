/* fn_0002198a - 8 byte(s), 2 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0002198a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0002198au): goto L_2198A;
    case RC_ADDR(0x0002198eu): goto L_2198E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2198A:
    /* 0002198a   4  movea.l (ffffcba8,A4),A6 */
    c->pc = RC_ADDR(0x0002198au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3458u));
    c->a[6] = t0;

L_2198E:
    /* 0002198e   4  jmp (fffffe7a,A6) */
    c->pc = RC_ADDR(0x0002198eu);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -390);
    return;

}
