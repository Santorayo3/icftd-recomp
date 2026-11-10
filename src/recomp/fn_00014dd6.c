/* fn_00014dd6 - 36 byte(s), 9 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00014dd6(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00014dd6u): goto L_14DD6;
    case RC_ADDR(0x00014ddau): goto L_14DDA;
    case RC_ADDR(0x00014ddeu): goto L_14DDE;
    case RC_ADDR(0x00014de2u): goto L_14DE2;
    case RC_ADDR(0x00014de6u): goto L_14DE6;
    case RC_ADDR(0x00014deau): goto L_14DEA;
    case RC_ADDR(0x00014df0u): goto L_14DF0;
    case RC_ADDR(0x00014df6u): goto L_14DF6;
    case RC_ADDR(0x00014df8u): goto L_14DF8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_14DD6:
    /* 00014dd6   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00014dd6u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_14DDA:
    /* 00014dda   4  clr.w (1278,A4) */
    c->pc = RC_ADDR(0x00014ddau);
    rc_wr16(c, m, (c->a[4] + 0x1278u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14DDE:
    /* 00014dde   4  clr.w (10b8,A4) */
    c->pc = RC_ADDR(0x00014ddeu);
    rc_wr16(c, m, (c->a[4] + 0x10b8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14DE2:
    /* 00014de2   4  clr.w (1250,A4) */
    c->pc = RC_ADDR(0x00014de2u);
    rc_wr16(c, m, (c->a[4] + 0x1250u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14DE6:
    /* 00014de6   4  clr.w (1246,A4) */
    c->pc = RC_ADDR(0x00014de6u);
    rc_wr16(c, m, (c->a[4] + 0x1246u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14DEA:
    /* 00014dea   6  move.w #ffff,(1244,A4) */
    c->pc = RC_ADDR(0x00014deau);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x1244u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14DF0:
    /* 00014df0   6  move.w #1,(126a,A4) */
    c->pc = RC_ADDR(0x00014df0u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x126au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14DF6:
    /* 00014df6   2  unlk A5 */
    c->pc = RC_ADDR(0x00014df6u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_14DF8:
    /* 00014df8   2  rts */
    c->pc = RC_ADDR(0x00014df8u);
    rc_ret(c, m);
    return;

}
