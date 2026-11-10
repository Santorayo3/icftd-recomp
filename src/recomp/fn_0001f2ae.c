/* fn_0001f2ae - 28 byte(s), 9 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f2ae(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f2aeu): goto L_1F2AE;
    case RC_ADDR(0x0001f2b2u): goto L_1F2B2;
    case RC_ADDR(0x0001f2b6u): goto L_1F2B6;
    case RC_ADDR(0x0001f2bau): goto L_1F2BA;
    case RC_ADDR(0x0001f2bcu): goto L_1F2BC;
    case RC_ADDR(0x0001f2beu): goto L_1F2BE;
    case RC_ADDR(0x0001f2c2u): goto L_1F2C2;
    case RC_ADDR(0x0001f2c6u): goto L_1F2C6;
    case RC_ADDR(0x0001f2c8u): goto L_1F2C8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F2AE:
    /* 0001f2ae   4  link.w A5,#fffffffe */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2aeu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1F2B2:
    /* 0001f2b2   4  movem.l { D4 D5 },-(SP) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2b2u);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    c->a[7] = t3;

L_1F2B6:
    /* 0001f2b6   4  move.b (9,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2b6u);
    t0 = rc_rd8(c, m, (c->a[5] + 0x9u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1F2BA:
    /* 0001f2ba   2  ext.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2bau);
    rc_ext_w(c, 0);

L_1F2BC:
    /* 0001f2bc   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2bcu);
    rc_ext_l(c, 0);

L_1F2BE:
    /* 0001f2be   4  bra 0001f89c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2beu);
    c->pc = RC_ADDR(0x0001f89cu);
    return;

L_1F2C2:
    /* 0001f2c2   4  tst.l (a,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2c2u);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    rc_set_nzvc(c, t0, RC_L);

L_1F2C6:
    /* 0001f2c6   2  bne 0001f2d2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2c6u);
    if (rc_cond(c, 6))
    {
        c->pc = RC_ADDR(0x0001f2d2u);
        return;
    }

L_1F2C8:
    /* 0001f2c8   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2c8u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

    /* falls through into 0001f2ca */
    c->pc = RC_ADDR(0x0001f2cau);
    return;
}
