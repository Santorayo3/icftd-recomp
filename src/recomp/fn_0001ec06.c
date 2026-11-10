/* fn_0001ec06 - 16 byte(s), 5 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001ec06(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x0001ec06u): goto L_1EC06;
    case RC_ADDR(0x0001ec08u): goto L_1EC08;
    case RC_ADDR(0x0001ec0eu): goto L_1EC0E;
    case RC_ADDR(0x0001ec12u): goto L_1EC12;
    case RC_ADDR(0x0001ec14u): goto L_1EC14;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1EC06:
    /* 0001ec06   2  bsr 0001ec16 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001ec06u);
    rc_push32(c, m, RC_ADDR(0x0001ec08u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001ec16u);
    return;

L_1EC08:
    /* 0001ec08   6  andi.l #ffff,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001ec08u);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 & 0x0000ffffu;
    rc_d_set(c, 0, RC_L, t2);
    rc_set_nzvc(c, t2, RC_L);

L_1EC0E:
    /* 0001ec0e   4  divu.w (4,A7),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001ec0eu);
    t0 = rc_rd16(c, m, (c->a[7] + 0x4u));
    rc_divu(c, m, 0, t0);

L_1EC12:
    /* 0001ec12   2  swap D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001ec12u);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_1EC14:
    /* 0001ec14   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001ec14u);
    rc_ret(c, m);
    return;

}
