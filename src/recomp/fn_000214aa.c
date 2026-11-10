/* fn_000214aa - 14 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000214aa(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000214aau): goto L_214AA;
    case RC_ADDR(0x000214b0u): goto L_214B0;
    case RC_ADDR(0x000214b4u): goto L_214B4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_214AA:
    /* 000214aa   6  movem.l (SP)+,{ D1 D2 D3 } */
    c->pc = RC_ADDR(0x000214aau);
    t3 = (c->a[7] + 0x4u);
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;

L_214B0:
    /* 000214b0   4  movea.l (3af8,A4),A6 */
    c->pc = RC_ADDR(0x000214b0u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af8u));
    c->a[6] = t0;

L_214B4:
    /* 000214b4   4  jmp (ffffffd0,A6) */
    c->pc = RC_ADDR(0x000214b4u);
    rc_os_call_a6(c, m, -48);
    return;

}
