/* fn_00021950 - 12 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021950(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00021950u): goto L_21950;
    case RC_ADDR(0x00021954u): goto L_21954;
    case RC_ADDR(0x00021958u): goto L_21958;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21950:
    /* 00021950   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x00021950u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_21954:
    /* 00021954   4  movea.l (ffffcba0,A4),A6 */
    c->pc = RC_ADDR(0x00021954u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_21958:
    /* 00021958   4  jmp (fffffe6e,A6) */
    c->pc = RC_ADDR(0x00021958u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -402);
    return;

}
