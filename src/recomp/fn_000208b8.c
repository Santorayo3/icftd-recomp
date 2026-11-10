/* fn_000208b8 - 24 byte(s), 8 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000208b8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x000208b8u): goto L_208B8;
    case RC_ADDR(0x000208bau): goto L_208BA;
    case RC_ADDR(0x000208beu): goto L_208BE;
    case RC_ADDR(0x000208c2u): goto L_208C2;
    case RC_ADDR(0x000208c4u): goto L_208C4;
    case RC_ADDR(0x000208c8u): goto L_208C8;
    case RC_ADDR(0x000208cau): goto L_208CA;
    case RC_ADDR(0x000208ceu): goto L_208CE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_208B8:
    /* 000208b8   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000208b8u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_208BA:
    /* 000208ba   4  move.b (5,A7),D0 */
    c->pc = RC_ADDR(0x000208bau);
    t0 = rc_rd8(c, m, (c->a[7] + 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_208BE:
    /* 000208be   4  cmp.b #60,D0 */
    c->pc = RC_ADDR(0x000208beu);
    t0 = 0x00000060u;
    t1 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t1, t0);

L_208C2:
    /* 000208c2   2  bls 000208ce */
    c->pc = RC_ADDR(0x000208c2u);
    if (rc_cond(c, 3)) goto L_208CE;

L_208C4:
    /* 000208c4   4  cmp.b #7a,D0 */
    c->pc = RC_ADDR(0x000208c4u);
    t0 = 0x0000007au;
    t1 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t1, t0);

L_208C8:
    /* 000208c8   2  bhi 000208ce */
    c->pc = RC_ADDR(0x000208c8u);
    if (rc_cond(c, 2)) goto L_208CE;

L_208CA:
    /* 000208ca   4  sub.b #20,D0 */
    c->pc = RC_ADDR(0x000208cau);
    t0 = 0x00000020u;
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_B, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_B, t2);

L_208CE:
    /* 000208ce   2  rts */
    c->pc = RC_ADDR(0x000208ceu);
    rc_ret(c, m);
    return;

}
