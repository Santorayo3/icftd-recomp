/* fn_000217e2 - 18 byte(s), 4 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000217e2(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000217e2u): goto L_217E2;
    case RC_ADDR(0x000217e6u): goto L_217E6;
    case RC_ADDR(0x000217ecu): goto L_217EC;
    case RC_ADDR(0x000217f0u): goto L_217F0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_217E2:
    /* 000217e2   4  movea.l (4,A7),A1 */
    c->pc = RC_ADDR(0x000217e2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_217E6:
    /* 000217e6   6  movem.l (SP)+,{ D0 D1 } */
    c->pc = RC_ADDR(0x000217e6u);
    rc_step(c, m);
    t3 = (c->a[7] + 0x8u);
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;

L_217EC:
    /* 000217ec   4  movea.l (ffffcba0,A4),A6 */
    c->pc = RC_ADDR(0x000217ecu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_217F0:
    /* 000217f0   4  jmp (fffffe86,A6) */
    c->pc = RC_ADDR(0x000217f0u);
    rc_step(c, m);
    rc_os_call_a6(c, m, -378);
    return;

}
