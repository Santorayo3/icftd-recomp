/* fn_000213f4 - 12 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000213f4(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000213f4u): goto L_213F4;
    case RC_ADDR(0x000213f8u): goto L_213F8;
    case RC_ADDR(0x000213fcu): goto L_213FC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_213F4:
    /* 000213f4   4  movea.l (4,A7),A6 */
    c->pc = RC_ADDR(0x000213f4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[6] = t0;

L_213F8:
    /* 000213f8   4  move.l (8,A7),D0 */
    c->pc = RC_ADDR(0x000213f8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_213FC:
    /* 000213fc   4  jmp (fffffff4,A6) */
    c->pc = RC_ADDR(0x000213fcu);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -12);
    return;

}
