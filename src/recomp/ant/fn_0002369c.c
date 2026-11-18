/* fn_0002369c - 18 byte(s), 6 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002369c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0002369cu): goto L_2369C;
    case RC_ADDR(0x000236a0u): goto L_236A0;
    case RC_ADDR(0x000236a4u): goto L_236A4;
    case RC_ADDR(0x000236a8u): goto L_236A8;
    case RC_ADDR(0x000236aau): goto L_236AA;
    case RC_ADDR(0x000236acu): goto L_236AC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2369C:
    /* 0002369c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0002369cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_236A0:
    /* 000236a0   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000236a0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_236A4:
    /* 000236a4   4  jsr (000236f2) */
    c->pc = RC_ADDR(0x000236a4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000236a8u));
    rc_depth++;
    c->pc = RC_ADDR(0x000236f2u);
    return;

L_236A8:
    /* 000236a8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000236a8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_236AA:
    /* 000236aa   2  unlk A5 */
    c->pc = RC_ADDR(0x000236aau);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_236AC:
    /* 000236ac   2  rts */
    c->pc = RC_ADDR(0x000236acu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
