/* fn_0002197e - 12 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0002197e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0002197eu): goto L_2197E;
    case RC_ADDR(0x00021982u): goto L_21982;
    case RC_ADDR(0x00021986u): goto L_21986;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2197E:
    /* 0002197e   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x0002197eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_21982:
    /* 00021982   4  movea.l (3b16,A4),A6 */
    c->pc = RC_ADDR(0x00021982u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b16u));
    c->a[6] = t0;

L_21986:
    /* 00021986   4  jmp (ffffffb2,A6) */
    c->pc = RC_ADDR(0x00021986u);
    rc_step(c, m);
    rc_os_call_a6(c, m, -78);
    return;

}
