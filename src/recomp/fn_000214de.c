/* fn_000214de - 12 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000214de(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000214deu): goto L_214DE;
    case RC_ADDR(0x000214e2u): goto L_214E2;
    case RC_ADDR(0x000214e6u): goto L_214E6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_214DE:
    /* 000214de   4  movea.l (4,A7),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000214deu);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_214E2:
    /* 000214e2   4  movea.l (3af4,A4),A6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000214e2u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af4u));
    c->a[6] = t0;

L_214E6:
    /* 000214e6   4  jmp (fffffe3e,A6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000214e6u);
    rc_os_call_a6(c, m, -450);
    return;

}
