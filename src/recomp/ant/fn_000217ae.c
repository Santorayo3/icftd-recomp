/* fn_000217ae - 8 byte(s), 2 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000217ae(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x000217aeu): goto L_217AE;
    case RC_ADDR(0x000217b2u): goto L_217B2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_217AE:
    /* 000217ae   4  clr.w (32f2,A4) */
    c->pc = RC_ADDR(0x000217aeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x32f2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_217B2:
    /* 000217b2   4  bra 00021950 */
    c->pc = RC_ADDR(0x000217b2u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021950u);
    return;

}
