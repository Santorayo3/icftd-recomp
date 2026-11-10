/* fn_00021832 - 12 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021832(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00021832u): goto L_21832;
    case RC_ADDR(0x00021836u): goto L_21836;
    case RC_ADDR(0x0002183au): goto L_2183A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21832:
    /* 00021832   4  move.l (4,A7),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021832u);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21836:
    /* 00021836   4  movea.l (ffffcba0,A4),A6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021836u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_2183A:
    /* 0002183a   4  jmp (fffffdc6,A6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002183au);
    rc_os_call_a6(c, m, -570);
    return;

}
