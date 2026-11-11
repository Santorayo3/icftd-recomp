/* fn_00020810 - 16 byte(s), 6 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020810(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00020810u): goto L_20810;
    case RC_ADDR(0x00020814u): goto L_20814;
    case RC_ADDR(0x00020816u): goto L_20816;
    case RC_ADDR(0x0002081au): goto L_2081A;
    case RC_ADDR(0x0002081cu): goto L_2081C;
    case RC_ADDR(0x0002081eu): goto L_2081E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20810:
    /* 00020810   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x00020810u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_20814:
    /* 00020814   2  move.l A0,D0 */
    c->pc = RC_ADDR(0x00020814u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20816:
    /* 00020816   4  movea.l (8,A7),A1 */
    c->pc = RC_ADDR(0x00020816u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x8u));
    c->a[1] = t0;

L_2081A:
    /* 0002081a   2  move.b (A1)+,(A0)+ */
    c->pc = RC_ADDR(0x0002081au);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 1u;
    t0 = rc_rd8(c, m, t3);
    t3 = c->a[0];
    c->a[0] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2081C:
    /* 0002081c   2  bne 0002081a */
    c->pc = RC_ADDR(0x0002081cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_2081A; }

L_2081E:
    /* 0002081e   2  rts */
    c->pc = RC_ADDR(0x0002081eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
