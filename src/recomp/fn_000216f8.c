/* fn_000216f8 - 18 byte(s), 6 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000216f8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000216f8u): goto L_216F8;
    case RC_ADDR(0x000216fcu): goto L_216FC;
    case RC_ADDR(0x000216feu): goto L_216FE;
    case RC_ADDR(0x00021700u): goto L_21700;
    case RC_ADDR(0x00021704u): goto L_21704;
    case RC_ADDR(0x00021708u): goto L_21708;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_216F8:
    /* 000216f8   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x000216f8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_216FC:
    /* 000216fc   2  move.l A0,(A0) */
    c->pc = RC_ADDR(0x000216fcu);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_216FE:
    /* 000216fe   2  addq.l #4,(A0) */
    c->pc = RC_ADDR(0x000216feu);
    rc_step(c, m, 20);
    t3 = c->a[0];
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000004u;
    rc_flags_add(c, RC_L, t1, 0x00000004u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_21700:
    /* 00021700   4  clr.l (4,A0) */
    c->pc = RC_ADDR(0x00021700u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[0] + 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_21704:
    /* 00021704   4  move.l A0,(8,A0) */
    c->pc = RC_ADDR(0x00021704u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21708:
    /* 00021708   2  rts */
    c->pc = RC_ADDR(0x00021708u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
