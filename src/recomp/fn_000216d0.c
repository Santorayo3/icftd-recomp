/* fn_000216d0 - 16 byte(s), 4 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000216d0(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000216d0u): goto L_216D0;
    case RC_ADDR(0x000216d4u): goto L_216D4;
    case RC_ADDR(0x000216d8u): goto L_216D8;
    case RC_ADDR(0x000216dcu): goto L_216DC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_216D0:
    /* 000216d0   4  movea.l (4,A7),A1 */
    c->pc = RC_ADDR(0x000216d0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_216D4:
    /* 000216d4   4  move.l (8,A7),D0 */
    c->pc = RC_ADDR(0x000216d4u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[7] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_216D8:
    /* 000216d8   4  movea.l (3af4,A4),A6 */
    c->pc = RC_ADDR(0x000216d8u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af4u));
    c->a[6] = t0;

L_216DC:
    /* 000216dc   4  jmp (ffffff2e,A6) */
    c->pc = RC_ADDR(0x000216dcu);
    rc_step(c, m);
    rc_os_call_a6(c, m, -210);
    return;

}
