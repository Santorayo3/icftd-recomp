/* fn_00021794 - 18 byte(s), 4 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021794(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00021794u): goto L_21794;
    case RC_ADDR(0x00021798u): goto L_21798;
    case RC_ADDR(0x0002179eu): goto L_2179E;
    case RC_ADDR(0x000217a2u): goto L_217A2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21794:
    /* 00021794   4  movea.l (4,A7),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021794u);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_21798:
    /* 00021798   6  movem.l (SP)+,{ D0 D1 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021798u);
    t3 = (c->a[7] + 0x8u);
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;

L_2179E:
    /* 0002179e   4  movea.l (ffffcba0,A4),A6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002179eu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_217A2:
    /* 000217a2   4  jmp (ffffff04,A6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000217a2u);
    rc_os_call_a6(c, m, -252);
    return;

}
