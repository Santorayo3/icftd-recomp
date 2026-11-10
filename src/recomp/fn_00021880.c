/* fn_00021880 - 12 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021880(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00021880u): goto L_21880;
    case RC_ADDR(0x00021884u): goto L_21884;
    case RC_ADDR(0x00021888u): goto L_21888;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21880:
    /* 00021880   4  movea.l (4,A7),A1 */
    c->pc = RC_ADDR(0x00021880u);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_21884:
    /* 00021884   4  movea.l (ffffcba0,A4),A6 */
    c->pc = RC_ADDR(0x00021884u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_21888:
    /* 00021888   4  jmp (fffffe98,A6) */
    c->pc = RC_ADDR(0x00021888u);
    rc_os_call_a6(c, m, -360);
    return;

}
