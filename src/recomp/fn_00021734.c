/* fn_00021734 - 16 byte(s), 4 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021734(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00021734u): goto L_21734;
    case RC_ADDR(0x00021738u): goto L_21738;
    case RC_ADDR(0x0002173cu): goto L_2173C;
    case RC_ADDR(0x00021740u): goto L_21740;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21734:
    /* 00021734   4  movea.l (4,A7),A1 */
    c->pc = RC_ADDR(0x00021734u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_21738:
    /* 00021738   4  move.l (8,A7),D0 */
    c->pc = RC_ADDR(0x00021738u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[7] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2173C:
    /* 0002173c   4  movea.l (3af4,A4),A6 */
    c->pc = RC_ADDR(0x0002173cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af4u));
    c->a[6] = t0;

L_21740:
    /* 00021740   4  jmp (fffffe0e,A6) */
    c->pc = RC_ADDR(0x00021740u);
    rc_step(c, m);
    rc_os_call_a6(c, m, -498);
    return;

}
