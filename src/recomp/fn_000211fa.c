/* fn_000211fa - 10 byte(s), 5 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000211fa(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000211fau): goto L_211FA;
    case RC_ADDR(0x000211fcu): goto L_211FC;
    case RC_ADDR(0x000211feu): goto L_211FE;
    case RC_ADDR(0x00021200u): goto L_21200;
    case RC_ADDR(0x00021202u): goto L_21202;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_211FA:
    /* 000211fa   2  move.l D1,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000211fau);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_211FC:
    /* 000211fc   2  bsr 00021204 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000211fcu);
    rc_push32(c, m, RC_ADDR(0x000211feu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021204u);
    return;

L_211FE:
    /* 000211fe   2  move.l (A7)+,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000211feu);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21200:
    /* 00021200   2  tst.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021200u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_21202:
    /* 00021202   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021202u);
    rc_ret(c, m);
    return;

}
