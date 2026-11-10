/* fn_000215cc - 12 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000215cc(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000215ccu): goto L_215CC;
    case RC_ADDR(0x000215d0u): goto L_215D0;
    case RC_ADDR(0x000215d4u): goto L_215D4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_215CC:
    /* 000215cc   4  movea.l (4,A7),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000215ccu);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_215D0:
    /* 000215d0   4  movea.l (3af4,A4),A6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000215d0u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af4u));
    c->a[6] = t0;

L_215D4:
    /* 000215d4   4  jmp (fffffe9e,A6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000215d4u);
    rc_os_call_a6(c, m, -354);
    return;

}
