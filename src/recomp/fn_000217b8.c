/* fn_000217b8 - 12 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000217b8(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000217b8u): goto L_217B8;
    case RC_ADDR(0x000217bcu): goto L_217BC;
    case RC_ADDR(0x000217c0u): goto L_217C0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_217B8:
    /* 000217b8   4  movea.l (4,A7),A1 */
    c->pc = RC_ADDR(0x000217b8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_217BC:
    /* 000217bc   4  movea.l (ffffcba0,A4),A6 */
    c->pc = RC_ADDR(0x000217bcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_217C0:
    /* 000217c0   4  jmp (fffffe92,A6) */
    c->pc = RC_ADDR(0x000217c0u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -366);
    return;

}
