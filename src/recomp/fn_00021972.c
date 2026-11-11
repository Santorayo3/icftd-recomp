/* fn_00021972 - 12 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021972(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00021972u): goto L_21972;
    case RC_ADDR(0x00021976u): goto L_21976;
    case RC_ADDR(0x0002197au): goto L_2197A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21972:
    /* 00021972   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x00021972u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_21976:
    /* 00021976   4  movea.l (3b16,A4),A6 */
    c->pc = RC_ADDR(0x00021976u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b16u));
    c->a[6] = t0;

L_2197A:
    /* 0002197a   4  jmp (ffffffa6,A6) */
    c->pc = RC_ADDR(0x0002197au);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -90);
    return;

}
