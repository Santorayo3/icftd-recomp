/* fn_00014dc0 - 22 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00014dc0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00014dc0u): goto L_14DC0;
    case RC_ADDR(0x00014dc4u): goto L_14DC4;
    case RC_ADDR(0x00014dc8u): goto L_14DC8;
    case RC_ADDR(0x00014dcau): goto L_14DCA;
    case RC_ADDR(0x00014dceu): goto L_14DCE;
    case RC_ADDR(0x00014dd2u): goto L_14DD2;
    case RC_ADDR(0x00014dd4u): goto L_14DD4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_14DC0:
    /* 00014dc0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00014dc0u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_14DC4:
    /* 00014dc4   4  tst.w (8,A5) */
    c->pc = RC_ADDR(0x00014dc4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_14DC8:
    /* 00014dc8   2  bge 00014dce */
    c->pc = RC_ADDR(0x00014dc8u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_14DCE;

L_14DCA:
    /* 00014dca   4  neg.w (8,A5) */
    c->pc = RC_ADDR(0x00014dcau);
    rc_step(c, m);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_wr16(c, m, t3, t2);

L_14DCE:
    /* 00014dce   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00014dceu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14DD2:
    /* 00014dd2   2  unlk A5 */
    c->pc = RC_ADDR(0x00014dd2u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_14DD4:
    /* 00014dd4   2  rts */
    c->pc = RC_ADDR(0x00014dd4u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
