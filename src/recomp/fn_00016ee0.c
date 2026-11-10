/* fn_00016ee0 - 22 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00016ee0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x00016ee0u): goto L_16EE0;
    case RC_ADDR(0x00016ee4u): goto L_16EE4;
    case RC_ADDR(0x00016ee6u): goto L_16EE6;
    case RC_ADDR(0x00016eecu): goto L_16EEC;
    case RC_ADDR(0x00016ef0u): goto L_16EF0;
    case RC_ADDR(0x00016ef2u): goto L_16EF2;
    case RC_ADDR(0x00016ef4u): goto L_16EF4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16EE0:
    /* 00016ee0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00016ee0u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_16EE4:
    /* 00016ee4   2  bsr 00016e8e */
    c->pc = RC_ADDR(0x00016ee4u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00016ee6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016e8eu);
    return;

L_16EE6:
    /* 00016ee6   6  andi.l #ffff,D0 */
    c->pc = RC_ADDR(0x00016ee6u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 & 0x0000ffffu;
    rc_d_set(c, 0, RC_L, t2);
    rc_set_nzvc(c, t2, RC_L);

L_16EEC:
    /* 00016eec   4  divu.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016eecu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_divu(c, m, 0, t0);

L_16EF0:
    /* 00016ef0   2  swap D0 */
    c->pc = RC_ADDR(0x00016ef0u);
    rc_step(c, m);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_16EF2:
    /* 00016ef2   2  unlk A5 */
    c->pc = RC_ADDR(0x00016ef2u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16EF4:
    /* 00016ef4   2  rts */
    c->pc = RC_ADDR(0x00016ef4u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
