/* fn_00008e3a - 28 byte(s), 8 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00008e3a(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x00008e3au): goto L_8E3A;
    case RC_ADDR(0x00008e3eu): goto L_8E3E;
    case RC_ADDR(0x00008e42u): goto L_8E42;
    case RC_ADDR(0x00008e46u): goto L_8E46;
    case RC_ADDR(0x00008e4au): goto L_8E4A;
    case RC_ADDR(0x00008e4eu): goto L_8E4E;
    case RC_ADDR(0x00008e52u): goto L_8E52;
    case RC_ADDR(0x00008e54u): goto L_8E54;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_8E3A:
    /* 00008e3a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00008e3au);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_8E3E:
    /* 00008e3e   4  clr.w (fffff0fa,A4) */
    c->pc = RC_ADDR(0x00008e3eu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0xf06u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8E42:
    /* 00008e42   4  clr.w (fffff0f8,A4) */
    c->pc = RC_ADDR(0x00008e42u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0xf08u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8E46:
    /* 00008e46   4  clr.w (fffff0fe,A4) */
    c->pc = RC_ADDR(0x00008e46u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0xf02u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8E4A:
    /* 00008e4a   4  clr.w (fffff0fc,A4) */
    c->pc = RC_ADDR(0x00008e4au);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0xf04u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8E4E:
    /* 00008e4e   4  clr.w (fffff100,A4) */
    c->pc = RC_ADDR(0x00008e4eu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0xf00u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8E52:
    /* 00008e52   2  unlk A5 */
    c->pc = RC_ADDR(0x00008e52u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_8E54:
    /* 00008e54   2  rts */
    c->pc = RC_ADDR(0x00008e54u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
