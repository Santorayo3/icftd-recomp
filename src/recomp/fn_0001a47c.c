/* fn_0001a47c - 22 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001a47c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001a47cu): goto L_1A47C;
    case RC_ADDR(0x0001a480u): goto L_1A480;
    case RC_ADDR(0x0001a484u): goto L_1A484;
    case RC_ADDR(0x0001a486u): goto L_1A486;
    case RC_ADDR(0x0001a48au): goto L_1A48A;
    case RC_ADDR(0x0001a48eu): goto L_1A48E;
    case RC_ADDR(0x0001a490u): goto L_1A490;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1A47C:
    /* 0001a47c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001a47cu);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1A480:
    /* 0001a480   4  tst.w (8,A5) */
    c->pc = RC_ADDR(0x0001a480u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_1A484:
    /* 0001a484   2  bge 0001a48a */
    c->pc = RC_ADDR(0x0001a484u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_1A48A;

L_1A486:
    /* 0001a486   4  neg.w (8,A5) */
    c->pc = RC_ADDR(0x0001a486u);
    rc_step(c, m);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A48A:
    /* 0001a48a   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001a48au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A48E:
    /* 0001a48e   2  unlk A5 */
    c->pc = RC_ADDR(0x0001a48eu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1A490:
    /* 0001a490   2  rts */
    c->pc = RC_ADDR(0x0001a490u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
