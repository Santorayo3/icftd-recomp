/* fn_000068d0 - 22 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000068d0(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000068d0u): goto L_68D0;
    case RC_ADDR(0x000068d4u): goto L_68D4;
    case RC_ADDR(0x000068d8u): goto L_68D8;
    case RC_ADDR(0x000068dcu): goto L_68DC;
    case RC_ADDR(0x000068e0u): goto L_68E0;
    case RC_ADDR(0x000068e2u): goto L_68E2;
    case RC_ADDR(0x000068e4u): goto L_68E4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_68D0:
    /* 000068d0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000068d0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_68D4:
    /* 000068d4   4  move.l (fffff80e,A4),-(A7) */
    c->pc = RC_ADDR(0x000068d4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7f2u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_68D8:
    /* 000068d8   4  move.l (fffff812,A4),-(A7) */
    c->pc = RC_ADDR(0x000068d8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7eeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_68DC:
    /* 000068dc   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x000068dcu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x000068e0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_68E0:
    /* 000068e0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000068e0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_68E2:
    /* 000068e2   2  unlk A5 */
    c->pc = RC_ADDR(0x000068e2u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_68E4:
    /* 000068e4   2  rts */
    c->pc = RC_ADDR(0x000068e4u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
