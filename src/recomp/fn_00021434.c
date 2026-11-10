/* fn_00021434 - 14 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021434(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00021434u): goto L_21434;
    case RC_ADDR(0x0002143au): goto L_2143A;
    case RC_ADDR(0x0002143eu): goto L_2143E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21434:
    /* 00021434   6  movem.l (SP)+,{ D1 D2 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021434u);
    t3 = (c->a[7] + 0x4u);
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;

L_2143A:
    /* 0002143a   4  movea.l (3af8,A4),A6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002143au);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af8u));
    c->a[6] = t0;

L_2143E:
    /* 0002143e   4  jmp (ffffff8e,A6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002143eu);
    rc_os_call_a6(c, m, -114);
    return;

}
