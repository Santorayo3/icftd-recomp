/* fn_00007108 - 20 byte(s), 6 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00007108(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00007108u): goto L_7108;
    case RC_ADDR(0x0000710cu): goto L_710C;
    case RC_ADDR(0x00007110u): goto L_7110;
    case RC_ADDR(0x00007114u): goto L_7114;
    case RC_ADDR(0x00007118u): goto L_7118;
    case RC_ADDR(0x0000711au): goto L_711A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_7108:
    /* 00007108   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00007108u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_710C:
    /* 0000710c   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000710cu);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7110:
    /* 00007110   4  lea (ffffce44,A4),A0 */
    c->pc = RC_ADDR(0x00007110u);
    c->a[0] = (c->a[4] - 0x31bcu);

L_7114:
    /* 00007114   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00007114u);
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_7118:
    /* 00007118   2  unlk A5 */
    c->pc = RC_ADDR(0x00007118u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_711A:
    /* 0000711a   2  rts */
    c->pc = RC_ADDR(0x0000711au);
    rc_ret(c, m);
    return;

}
