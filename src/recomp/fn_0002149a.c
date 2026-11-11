/* fn_0002149a - 12 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0002149a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0002149au): goto L_2149A;
    case RC_ADDR(0x0002149eu): goto L_2149E;
    case RC_ADDR(0x000214a2u): goto L_214A2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2149A:
    /* 0002149a   4  move.l (4,A7),D1 */
    c->pc = RC_ADDR(0x0002149au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2149E:
    /* 0002149e   4  movea.l (3af8,A4),A6 */
    c->pc = RC_ADDR(0x0002149eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af8u));
    c->a[6] = t0;

L_214A2:
    /* 000214a2   4  jmp (ffffffa6,A6) */
    c->pc = RC_ADDR(0x000214a2u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -90);
    return;

}
