/* fn_000218d8 - 18 byte(s), 4 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000218d8(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000218d8u): goto L_218D8;
    case RC_ADDR(0x000218dcu): goto L_218DC;
    case RC_ADDR(0x000218e2u): goto L_218E2;
    case RC_ADDR(0x000218e6u): goto L_218E6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_218D8:
    /* 000218d8   4  movea.l (4,A7),A1 */
    c->pc = RC_ADDR(0x000218d8u);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_218DC:
    /* 000218dc   6  movem.l (SP)+,{ D0 D1 D2 D3 } */
    c->pc = RC_ADDR(0x000218dcu);
    t3 = (c->a[7] + 0x8u);
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;

L_218E2:
    /* 000218e2   4  movea.l (ffffcba0,A4),A6 */
    c->pc = RC_ADDR(0x000218e2u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_218E6:
    /* 000218e6   4  jmp (fffffece,A6) */
    c->pc = RC_ADDR(0x000218e6u);
    rc_os_call_a6(c, m, -306);
    return;

}
