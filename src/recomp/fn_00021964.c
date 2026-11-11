/* fn_00021964 - 14 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021964(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00021964u): goto L_21964;
    case RC_ADDR(0x0002196au): goto L_2196A;
    case RC_ADDR(0x0002196eu): goto L_2196E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21964:
    /* 00021964   6  movem.l (SP)+,{ A0 A1 } */
    c->pc = RC_ADDR(0x00021964u);
    rc_step(c, m, 16);
    t3 = (c->a[7] + 0x4u);
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;

L_2196A:
    /* 0002196a   4  movea.l (3b16,A4),A6 */
    c->pc = RC_ADDR(0x0002196au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b16u));
    c->a[6] = t0;

L_2196E:
    /* 0002196e   4  jmp (ffffffa0,A6) */
    c->pc = RC_ADDR(0x0002196eu);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -96);
    return;

}
