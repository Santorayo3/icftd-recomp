/* fn_00013436 - 16 byte(s), 4 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00013436(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00013436u): goto L_13436;
    case RC_ADDR(0x0001343au): goto L_1343A;
    case RC_ADDR(0x00013442u): goto L_13442;
    case RC_ADDR(0x00013444u): goto L_13444;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13436:
    /* 00013436   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00013436u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1343A:
    /* 0001343a   8  move.w #400,(00dff096).l */
    c->pc = RC_ADDR(0x0001343au);
    rc_step(c, m, 20);
    t0 = 0x00000400u;
    rc_wr16(c, m, 0x00dff096u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13442:
    /* 00013442   2  unlk A5 */
    c->pc = RC_ADDR(0x00013442u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_13444:
    /* 00013444   2  rts */
    c->pc = RC_ADDR(0x00013444u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
