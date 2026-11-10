/* fn_0001d7a0 - 36 byte(s), 10 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001d7a0(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x0001d7a0u): goto L_1D7A0;
    case RC_ADDR(0x0001d7a4u): goto L_1D7A4;
    case RC_ADDR(0x0001d7a8u): goto L_1D7A8;
    case RC_ADDR(0x0001d7acu): goto L_1D7AC;
    case RC_ADDR(0x0001d7b0u): goto L_1D7B0;
    case RC_ADDR(0x0001d7b4u): goto L_1D7B4;
    case RC_ADDR(0x0001d7b8u): goto L_1D7B8;
    case RC_ADDR(0x0001d7bcu): goto L_1D7BC;
    case RC_ADDR(0x0001d7c0u): goto L_1D7C0;
    case RC_ADDR(0x0001d7c2u): goto L_1D7C2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D7A0:
    /* 0001d7a0   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7a0u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1D7A4:
    /* 0001d7a4   4  clr.w (fffffecc,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7a4u);
    rc_wr16(c, m, (c->a[4] - 0x134u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D7A8:
    /* 0001d7a8   4  clr.w (ffffff4e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7a8u);
    rc_wr16(c, m, (c->a[4] - 0xb2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D7AC:
    /* 0001d7ac   4  clr.w (28c2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7acu);
    rc_wr16(c, m, (c->a[4] + 0x28c2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D7B0:
    /* 0001d7b0   4  clr.w (28c0,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7b0u);
    rc_wr16(c, m, (c->a[4] + 0x28c0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D7B4:
    /* 0001d7b4   4  clr.w (ffffff50,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7b4u);
    rc_wr16(c, m, (c->a[4] - 0xb0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D7B8:
    /* 0001d7b8   4  clr.w (26ba,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7b8u);
    rc_wr16(c, m, (c->a[4] + 0x26bau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D7BC:
    /* 0001d7bc   4  jsr (0001db1e) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7bcu);
    rc_push32(c, m, RC_ADDR(0x0001d7c0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001db1eu);
    return;

L_1D7C0:
    /* 0001d7c0   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7c0u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D7C2:
    /* 0001d7c2   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7c2u);
    rc_ret(c, m);
    return;

}
