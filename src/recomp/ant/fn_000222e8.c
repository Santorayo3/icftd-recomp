/* fn_000222e8 - 32 byte(s), 9 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000222e8(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x000222e8u): goto L_222E8;
    case RC_ADDR(0x000222ecu): goto L_222EC;
    case RC_ADDR(0x000222f0u): goto L_222F0;
    case RC_ADDR(0x000222f4u): goto L_222F4;
    case RC_ADDR(0x000222f8u): goto L_222F8;
    case RC_ADDR(0x000222fcu): goto L_222FC;
    case RC_ADDR(0x00022300u): goto L_22300;
    case RC_ADDR(0x00022304u): goto L_22304;
    case RC_ADDR(0x00022306u): goto L_22306;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_222E8:
    /* 000222e8   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000222e8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_222EC:
    /* 000222ec   4  clr.w (3508,A4) */
    c->pc = RC_ADDR(0x000222ecu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x3508u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_222F0:
    /* 000222f0   4  clr.l (350a,A4) */
    c->pc = RC_ADDR(0x000222f0u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x350au), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_222F4:
    /* 000222f4   4  clr.l (350e,A4) */
    c->pc = RC_ADDR(0x000222f4u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x350eu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_222F8:
    /* 000222f8   4  clr.w (3548,A4) */
    c->pc = RC_ADDR(0x000222f8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x3548u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_222FC:
    /* 000222fc   4  clr.b (3512,A4) */
    c->pc = RC_ADDR(0x000222fcu);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[4] + 0x3512u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_22300:
    /* 00022300   4  clr.l (14bc,A4) */
    c->pc = RC_ADDR(0x00022300u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x14bcu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_22304:
    /* 00022304   2  unlk A5 */
    c->pc = RC_ADDR(0x00022304u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_22306:
    /* 00022306   2  rts */
    c->pc = RC_ADDR(0x00022306u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
