/* fn_00009cae - 22 byte(s), 6 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00009cae(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00009caeu): goto L_9CAE;
    case RC_ADDR(0x00009cb2u): goto L_9CB2;
    case RC_ADDR(0x00009cb6u): goto L_9CB6;
    case RC_ADDR(0x00009cbau): goto L_9CBA;
    case RC_ADDR(0x00009cc0u): goto L_9CC0;
    case RC_ADDR(0x00009cc2u): goto L_9CC2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9CAE:
    /* 00009cae   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009caeu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_9CB2:
    /* 00009cb2   4  clr.l (ffffa202,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009cb2u);
    rc_wr32(c, m, (c->a[4] - 0x5dfeu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9CB6:
    /* 00009cb6   4  clr.w (fffff022,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009cb6u);
    rc_wr16(c, m, (c->a[4] - 0xfdeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9CBA:
    /* 00009cba   6  move.w #ff,(fffff024,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009cbau);
    t0 = 0x000000ffu;
    rc_wr16(c, m, (c->a[4] - 0xfdcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9CC0:
    /* 00009cc0   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009cc0u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_9CC2:
    /* 00009cc2   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009cc2u);
    rc_ret(c, m);
    return;

}
