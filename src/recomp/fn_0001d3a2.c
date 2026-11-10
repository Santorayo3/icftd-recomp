/* fn_0001d3a2 - 22 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001d3a2(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d3a2u): goto L_1D3A2;
    case RC_ADDR(0x0001d3a6u): goto L_1D3A6;
    case RC_ADDR(0x0001d3aau): goto L_1D3AA;
    case RC_ADDR(0x0001d3aeu): goto L_1D3AE;
    case RC_ADDR(0x0001d3b2u): goto L_1D3B2;
    case RC_ADDR(0x0001d3b4u): goto L_1D3B4;
    case RC_ADDR(0x0001d3b6u): goto L_1D3B6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D3A2:
    /* 0001d3a2   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d3a2u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1D3A6:
    /* 0001d3a6   4  pea (ffff8278,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d3a6u);
    rc_push32(c, m, (c->a[4] - 0x7d88u));

L_1D3AA:
    /* 0001d3aa   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d3aau);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D3AE:
    /* 0001d3ae   4  jsr (0001d2c6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d3aeu);
    rc_push32(c, m, RC_ADDR(0x0001d3b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d2c6u);
    return;

L_1D3B2:
    /* 0001d3b2   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d3b2u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D3B4:
    /* 0001d3b4   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d3b4u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D3B6:
    /* 0001d3b6   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d3b6u);
    rc_ret(c, m);
    return;

}
