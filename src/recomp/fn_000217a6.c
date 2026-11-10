/* fn_000217a6 - 18 byte(s), 4 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000217a6(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000217a6u): goto L_217A6;
    case RC_ADDR(0x000217aau): goto L_217AA;
    case RC_ADDR(0x000217b0u): goto L_217B0;
    case RC_ADDR(0x000217b4u): goto L_217B4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_217A6:
    /* 000217a6   4  movea.l (4,A7),A1 */
    c->pc = RC_ADDR(0x000217a6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_217AA:
    /* 000217aa   6  movem.l (SP)+,{ D0 D1 } */
    c->pc = RC_ADDR(0x000217aau);
    rc_step(c, m);
    t3 = (c->a[7] + 0x8u);
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;

L_217B0:
    /* 000217b0   4  movea.l (ffffcba0,A4),A6 */
    c->pc = RC_ADDR(0x000217b0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_217B4:
    /* 000217b4   4  jmp (fffffed4,A6) */
    c->pc = RC_ADDR(0x000217b4u);
    rc_step(c, m);
    rc_os_call_a6(c, m, -300);
    return;

}
