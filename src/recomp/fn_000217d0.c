/* fn_000217d0 - 18 byte(s), 4 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000217d0(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000217d0u): goto L_217D0;
    case RC_ADDR(0x000217d4u): goto L_217D4;
    case RC_ADDR(0x000217dau): goto L_217DA;
    case RC_ADDR(0x000217deu): goto L_217DE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_217D0:
    /* 000217d0   4  movea.l (4,A7),A1 */
    c->pc = RC_ADDR(0x000217d0u);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_217D4:
    /* 000217d4   6  movem.l (SP)+,{ D0 D1 } */
    c->pc = RC_ADDR(0x000217d4u);
    t3 = (c->a[7] + 0x8u);
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;

L_217DA:
    /* 000217da   4  movea.l (ffffcba0,A4),A6 */
    c->pc = RC_ADDR(0x000217dau);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_217DE:
    /* 000217de   4  jmp (fffffe8c,A6) */
    c->pc = RC_ADDR(0x000217deu);
    rc_os_call_a6(c, m, -372);
    return;

}
