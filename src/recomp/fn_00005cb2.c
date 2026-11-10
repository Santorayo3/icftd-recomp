/* fn_00005cb2 - 28 byte(s), 8 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00005cb2(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x00005cb2u): goto L_5CB2;
    case RC_ADDR(0x00005cb6u): goto L_5CB6;
    case RC_ADDR(0x00005cbau): goto L_5CBA;
    case RC_ADDR(0x00005cbeu): goto L_5CBE;
    case RC_ADDR(0x00005cc2u): goto L_5CC2;
    case RC_ADDR(0x00005cc6u): goto L_5CC6;
    case RC_ADDR(0x00005ccau): goto L_5CCA;
    case RC_ADDR(0x00005cccu): goto L_5CCC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5CB2:
    /* 00005cb2   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00005cb2u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_5CB6:
    /* 00005cb6   4  clr.l (fffff0d8,A4) */
    c->pc = RC_ADDR(0x00005cb6u);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] - 0xf28u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5CBA:
    /* 00005cba   4  clr.l (fffff0d4,A4) */
    c->pc = RC_ADDR(0x00005cbau);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] - 0xf2cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5CBE:
    /* 00005cbe   4  clr.l (fffff0d0,A4) */
    c->pc = RC_ADDR(0x00005cbeu);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] - 0xf30u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5CC2:
    /* 00005cc2   4  clr.l (fffff0c8,A4) */
    c->pc = RC_ADDR(0x00005cc2u);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] - 0xf38u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5CC6:
    /* 00005cc6   4  clr.l (fffff0c4,A4) */
    c->pc = RC_ADDR(0x00005cc6u);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] - 0xf3cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5CCA:
    /* 00005cca   2  unlk A5 */
    c->pc = RC_ADDR(0x00005ccau);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_5CCC:
    /* 00005ccc   2  rts */
    c->pc = RC_ADDR(0x00005cccu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
