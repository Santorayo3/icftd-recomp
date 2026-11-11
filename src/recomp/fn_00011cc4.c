/* fn_00011cc4 - 24 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00011cc4(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x00011cc4u): goto L_11CC4;
    case RC_ADDR(0x00011cc8u): goto L_11CC8;
    case RC_ADDR(0x00011cccu): goto L_11CCC;
    case RC_ADDR(0x00011cd0u): goto L_11CD0;
    case RC_ADDR(0x00011cd4u): goto L_11CD4;
    case RC_ADDR(0x00011cd8u): goto L_11CD8;
    case RC_ADDR(0x00011cdau): goto L_11CDA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11CC4:
    /* 00011cc4   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00011cc4u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_11CC8:
    /* 00011cc8   4  clr.w (fffff28a,A4) */
    c->pc = RC_ADDR(0x00011cc8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0xd76u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11CCC:
    /* 00011ccc   4  clr.w (af4,A4) */
    c->pc = RC_ADDR(0x00011cccu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xaf4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11CD0:
    /* 00011cd0   4  clr.w (fffff324,A4) */
    c->pc = RC_ADDR(0x00011cd0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0xcdcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11CD4:
    /* 00011cd4   4  clr.w (dfe,A4) */
    c->pc = RC_ADDR(0x00011cd4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xdfeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11CD8:
    /* 00011cd8   2  unlk A5 */
    c->pc = RC_ADDR(0x00011cd8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_11CDA:
    /* 00011cda   2  rts */
    c->pc = RC_ADDR(0x00011cdau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
