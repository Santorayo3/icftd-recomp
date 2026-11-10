/* fn_000211ee - 12 byte(s), 6 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000211ee(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000211eeu): goto L_211EE;
    case RC_ADDR(0x000211f0u): goto L_211F0;
    case RC_ADDR(0x000211f2u): goto L_211F2;
    case RC_ADDR(0x000211f4u): goto L_211F4;
    case RC_ADDR(0x000211f6u): goto L_211F6;
    case RC_ADDR(0x000211f8u): goto L_211F8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_211EE:
    /* 000211ee   2  move.l D1,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000211eeu);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_211F0:
    /* 000211f0   2  bsr 00021204 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000211f0u);
    rc_push32(c, m, RC_ADDR(0x000211f2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021204u);
    return;

L_211F2:
    /* 000211f2   2  move.l D1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000211f2u);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_211F4:
    /* 000211f4   2  move.l (A7)+,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000211f4u);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_211F6:
    /* 000211f6   2  tst.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000211f6u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_211F8:
    /* 000211f8   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000211f8u);
    rc_ret(c, m);
    return;

}
