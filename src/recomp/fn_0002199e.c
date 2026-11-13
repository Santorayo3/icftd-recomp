/* fn_0002199e - 10 byte(s), 2 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0002199e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0002199eu): goto L_2199E;
    case RC_ADDR(0x000219a4u): goto L_219A4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2199E:
    /* 0002199e   6  move.l #ffffffe2,-(A7) */
    c->pc = RC_ADDR(0x0002199eu);
    rc_step(c, m, 20);
    t0 = 0xffffffe2u;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_219A4:
    /* 000219a4   4  jmp (000219bc) */
    c->pc = RC_ADDR(0x000219a4u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000219bcu);
    return;

}
