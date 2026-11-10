/* fn_00016946 - 22 byte(s), 6 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00016946(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00016946u): goto L_16946;
    case RC_ADDR(0x0001694au): goto L_1694A;
    case RC_ADDR(0x0001694eu): goto L_1694E;
    case RC_ADDR(0x00016954u): goto L_16954;
    case RC_ADDR(0x00016958u): goto L_16958;
    case RC_ADDR(0x0001695au): goto L_1695A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16946:
    /* 00016946   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016946u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1694A:
    /* 0001694a   4  movea.l (e04,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001694au);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe04u));
    c->a[0] = t0;

L_1694E:
    /* 0001694e   6  adda.l #d8,A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001694eu);
    t0 = 0x000000d8u;
    c->a[0] += t0;

L_16954:
    /* 00016954   4  move.b #e0,(A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016954u);
    t0 = 0x000000e0u;
    rc_wr8(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_B);

L_16958:
    /* 00016958   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016958u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1695A:
    /* 0001695a   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001695au);
    rc_ret(c, m);
    return;

}
