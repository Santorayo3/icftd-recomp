/* fn_000037a8 - 24 byte(s), 9 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000037a8(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000037a8u): goto L_37A8;
    case RC_ADDR(0x000037acu): goto L_37AC;
    case RC_ADDR(0x000037b0u): goto L_37B0;
    case RC_ADDR(0x000037b2u): goto L_37B2;
    case RC_ADDR(0x000037b4u): goto L_37B4;
    case RC_ADDR(0x000037b8u): goto L_37B8;
    case RC_ADDR(0x000037bau): goto L_37BA;
    case RC_ADDR(0x000037bcu): goto L_37BC;
    case RC_ADDR(0x000037beu): goto L_37BE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_37A8:
    /* 000037a8   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000037a8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_37AC:
    /* 000037ac   4  move.l (ffffd340,A4),-(A7) */
    c->pc = RC_ADDR(0x000037acu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_37B0:
    /* 000037b0   2  bsr 0000375c */
    c->pc = RC_ADDR(0x000037b0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000037b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000375cu);
    return;

L_37B2:
    /* 000037b2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000037b2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_37B4:
    /* 000037b4   4  move.l (ffffd33c,A4),-(A7) */
    c->pc = RC_ADDR(0x000037b4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_37B8:
    /* 000037b8   2  bsr 0000375c */
    c->pc = RC_ADDR(0x000037b8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000037bau));
    rc_depth++;
    c->pc = RC_ADDR(0x0000375cu);
    return;

L_37BA:
    /* 000037ba   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000037bau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_37BC:
    /* 000037bc   2  unlk A5 */
    c->pc = RC_ADDR(0x000037bcu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_37BE:
    /* 000037be   2  rts */
    c->pc = RC_ADDR(0x000037beu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
