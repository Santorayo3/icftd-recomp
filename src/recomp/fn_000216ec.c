/* fn_000216ec - 12 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000216ec(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000216ecu): goto L_216EC;
    case RC_ADDR(0x000216f0u): goto L_216F0;
    case RC_ADDR(0x000216f4u): goto L_216F4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_216EC:
    /* 000216ec   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x000216ecu);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_216F0:
    /* 000216f0   4  movea.l (3af4,A4),A6 */
    c->pc = RC_ADDR(0x000216f0u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af4u));
    c->a[6] = t0;

L_216F4:
    /* 000216f4   4  jmp (fffffe8c,A6) */
    c->pc = RC_ADDR(0x000216f4u);
    rc_os_call_a6(c, m, -372);
    return;

}
