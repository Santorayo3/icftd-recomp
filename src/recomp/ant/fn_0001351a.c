/* fn_0001351a - 24 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001351a(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x0001351au): goto L_1351A;
    case RC_ADDR(0x0001351eu): goto L_1351E;
    case RC_ADDR(0x00013522u): goto L_13522;
    case RC_ADDR(0x00013526u): goto L_13526;
    case RC_ADDR(0x0001352au): goto L_1352A;
    case RC_ADDR(0x0001352eu): goto L_1352E;
    case RC_ADDR(0x00013530u): goto L_13530;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1351A:
    /* 0001351a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001351au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1351E:
    /* 0001351e   4  clr.w (fffffa32,A4) */
    c->pc = RC_ADDR(0x0001351eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5ceu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13522:
    /* 00013522   4  clr.w (14ee,A4) */
    c->pc = RC_ADDR(0x00013522u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x14eeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13526:
    /* 00013526   4  clr.w (fffffacc,A4) */
    c->pc = RC_ADDR(0x00013526u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x534u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1352A:
    /* 0001352a   4  clr.w (17f8,A4) */
    c->pc = RC_ADDR(0x0001352au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x17f8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1352E:
    /* 0001352e   2  unlk A5 */
    c->pc = RC_ADDR(0x0001352eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_13530:
    /* 00013530   2  rts */
    c->pc = RC_ADDR(0x00013530u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
