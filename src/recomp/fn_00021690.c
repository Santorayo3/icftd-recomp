/* fn_00021690 - 14 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021690(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00021690u): goto L_21690;
    case RC_ADDR(0x00021696u): goto L_21696;
    case RC_ADDR(0x0002169au): goto L_2169A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21690:
    /* 00021690   6  movem.l (SP)+,{ D0 D1 } */
    c->pc = RC_ADDR(0x00021690u);
    t3 = (c->a[7] + 0x4u);
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;

L_21696:
    /* 00021696   4  movea.l (3af4,A4),A6 */
    c->pc = RC_ADDR(0x00021696u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af4u));
    c->a[6] = t0;

L_2169A:
    /* 0002169a   4  jmp (ffffff3a,A6) */
    c->pc = RC_ADDR(0x0002169au);
    rc_os_call_a6(c, m, -198);
    return;

}
