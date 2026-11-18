/* fn_000189ec - 22 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000189ec(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000189ecu): goto L_189EC;
    case RC_ADDR(0x000189f0u): goto L_189F0;
    case RC_ADDR(0x000189f6u): goto L_189F6;
    case RC_ADDR(0x000189fau): goto L_189FA;
    case RC_ADDR(0x000189fcu): goto L_189FC;
    case RC_ADDR(0x000189feu): goto L_189FE;
    case RC_ADDR(0x00018a00u): goto L_18A00;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_189EC:
    /* 000189ec   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000189ecu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_189F0:
    /* 000189f0   6  move.w #1,(fffffa32,A4) */
    c->pc = RC_ADDR(0x000189f0u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x5ceu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_189F6:
    /* 000189f6   4  tst.w (fffffa32,A4) */
    /* a flag wait: rc_wait runs it natively and returns 1 when its exit branch is taken;
     * 0 means the three instructions below run instead (the reference path). */
    if (rc_wait(c, m, RC_ADDR(0x000189f6u), 12,
                RC_ADDR(0x000189fau), 10, 7,
                RC_ADDR(0x000189fcu), 10,
                (c->a[4] - 0x5ceu), RC_W))
        goto L_189FE;
    c->pc = RC_ADDR(0x000189f6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5ceu));
    rc_set_nzvc(c, t0, RC_W);

L_189FA:
    /* 000189fa   2  beq 000189fe */
    c->pc = RC_ADDR(0x000189fau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_189FE;

L_189FC:
    /* 000189fc   2  bra 000189f6 */
    c->pc = RC_ADDR(0x000189fcu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_189F6;

L_189FE:
    /* 000189fe   2  unlk A5 */
    c->pc = RC_ADDR(0x000189feu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_18A00:
    /* 00018a00   2  rts */
    c->pc = RC_ADDR(0x00018a00u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
