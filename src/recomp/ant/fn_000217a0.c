/* fn_000217a0 - 14 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000217a0(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000217a0u): goto L_217A0;
    case RC_ADDR(0x000217a4u): goto L_217A4;
    case RC_ADDR(0x000217aau): goto L_217AA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_217A0:
    /* 000217a0   4  jsr (0001fbba) */
    c->pc = RC_ADDR(0x000217a0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000217a4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fbbau);
    return;

L_217A4:
    /* 000217a4   6  move.w #1,(32f2,A4) */
    c->pc = RC_ADDR(0x000217a4u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x32f2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_217AA:
    /* 000217aa   4  bra 00021950 */
    c->pc = RC_ADDR(0x000217aau);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021950u);
    return;

}
