/* fn_000218a4 - 14 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000218a4(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000218a4u): goto L_218A4;
    case RC_ADDR(0x000218aau): goto L_218AA;
    case RC_ADDR(0x000218aeu): goto L_218AE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_218A4:
    /* 000218a4   6  movem.l (SP)+,{ A0 A1 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000218a4u);
    t3 = (c->a[7] + 0x4u);
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;

L_218AA:
    /* 000218aa   4  movea.l (ffffcba0,A4),A6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000218aau);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_218AE:
    /* 000218ae   4  jmp (ffffff28,A6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000218aeu);
    rc_os_call_a6(c, m, -216);
    return;

}
