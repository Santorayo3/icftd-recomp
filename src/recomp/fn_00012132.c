/* fn_00012132 - 22 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00012132(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00012132u): goto L_12132;
    case RC_ADDR(0x00012136u): goto L_12136;
    case RC_ADDR(0x0001213au): goto L_1213A;
    case RC_ADDR(0x0001213cu): goto L_1213C;
    case RC_ADDR(0x00012140u): goto L_12140;
    case RC_ADDR(0x00012144u): goto L_12144;
    case RC_ADDR(0x00012146u): goto L_12146;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_12132:
    /* 00012132   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00012132u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_12136:
    /* 00012136   4  tst.w (8,A5) */
    c->pc = RC_ADDR(0x00012136u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_1213A:
    /* 0001213a   2  bge 00012140 */
    c->pc = RC_ADDR(0x0001213au);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_12140;

L_1213C:
    /* 0001213c   4  neg.w (8,A5) */
    c->pc = RC_ADDR(0x0001213cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_wr16(c, m, t3, t2);

L_12140:
    /* 00012140   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00012140u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12144:
    /* 00012144   2  unlk A5 */
    c->pc = RC_ADDR(0x00012144u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_12146:
    /* 00012146   2  rts */
    c->pc = RC_ADDR(0x00012146u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
