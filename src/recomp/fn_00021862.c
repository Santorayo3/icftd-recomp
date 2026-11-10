/* fn_00021862 - 12 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021862(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00021862u): goto L_21862;
    case RC_ADDR(0x00021866u): goto L_21866;
    case RC_ADDR(0x0002186au): goto L_2186A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21862:
    /* 00021862   4  movea.l (4,A7),A1 */
    c->pc = RC_ADDR(0x00021862u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_21866:
    /* 00021866   4  movea.l (ffffcba0,A4),A6 */
    c->pc = RC_ADDR(0x00021866u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_2186A:
    /* 0002186a   4  jmp (ffffff3a,A6) */
    c->pc = RC_ADDR(0x0002186au);
    rc_step(c, m);
    rc_os_call_a6(c, m, -198);
    return;

}
