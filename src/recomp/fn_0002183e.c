/* fn_0002183e - 18 byte(s), 4 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0002183e(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0002183eu): goto L_2183E;
    case RC_ADDR(0x00021844u): goto L_21844;
    case RC_ADDR(0x00021848u): goto L_21848;
    case RC_ADDR(0x0002184cu): goto L_2184C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2183E:
    /* 0002183e   6  movem.l (SP)+,{ A0 A1 } */
    c->pc = RC_ADDR(0x0002183eu);
    t3 = (c->a[7] + 0x4u);
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;

L_21844:
    /* 00021844   4  move.l (c,A7),D0 */
    c->pc = RC_ADDR(0x00021844u);
    t0 = rc_rd32(c, m, (c->a[7] + 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21848:
    /* 00021848   4  movea.l (ffffcba0,A4),A6 */
    c->pc = RC_ADDR(0x00021848u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_2184C:
    /* 0002184c   4  jmp (fffffee6,A6) */
    c->pc = RC_ADDR(0x0002184cu);
    rc_os_call_a6(c, m, -282);
    return;

}
