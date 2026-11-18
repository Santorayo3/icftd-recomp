/* fn_0001e2a2 - 54 byte(s), 16 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001e2a2(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001e2a2u): goto L_1E2A2;
    case RC_ADDR(0x0001e2a6u): goto L_1E2A6;
    case RC_ADDR(0x0001e2aau): goto L_1E2AA;
    case RC_ADDR(0x0001e2aeu): goto L_1E2AE;
    case RC_ADDR(0x0001e2b2u): goto L_1E2B2;
    case RC_ADDR(0x0001e2b6u): goto L_1E2B6;
    case RC_ADDR(0x0001e2b8u): goto L_1E2B8;
    case RC_ADDR(0x0001e2bcu): goto L_1E2BC;
    case RC_ADDR(0x0001e2c0u): goto L_1E2C0;
    case RC_ADDR(0x0001e2c4u): goto L_1E2C4;
    case RC_ADDR(0x0001e2c6u): goto L_1E2C6;
    case RC_ADDR(0x0001e2cau): goto L_1E2CA;
    case RC_ADDR(0x0001e2ceu): goto L_1E2CE;
    case RC_ADDR(0x0001e2d2u): goto L_1E2D2;
    case RC_ADDR(0x0001e2d4u): goto L_1E2D4;
    case RC_ADDR(0x0001e2d6u): goto L_1E2D6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E2A2:
    /* 0001e2a2   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001e2a2u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1E2A6:
    /* 0001e2a6   4  jsr (ffff80d4,A4) */
    c->pc = RC_ADDR(0x0001e2a6u);
    rc_step(c, m, 18);
    /* vector 35 */
    rc_push32(c, m, RC_ADDR(0x0001e2aau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bcau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000afb8u);
    return;

L_1E2AA:
    /* 0001e2aa   4  move.l (2dd4,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e2aau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2dd4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E2AE:
    /* 0001e2ae   4  move.l (2dc2,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e2aeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2dc2u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E2B2:
    /* 0001e2b2   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001e2b2u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001e2b6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1E2B6:
    /* 0001e2b6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001e2b6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E2B8:
    /* 0001e2b8   4  move.l (2dd8,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e2b8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2dd8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E2BC:
    /* 0001e2bc   4  move.l (2dc6,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e2bcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2dc6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E2C0:
    /* 0001e2c0   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001e2c0u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001e2c4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1E2C4:
    /* 0001e2c4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001e2c4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E2C6:
    /* 0001e2c6   4  move.l (2ddc,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e2c6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2ddcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E2CA:
    /* 0001e2ca   4  move.l (2dca,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e2cau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2dcau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E2CE:
    /* 0001e2ce   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001e2ceu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001e2d2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1E2D2:
    /* 0001e2d2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001e2d2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E2D4:
    /* 0001e2d4   2  unlk A5 */
    c->pc = RC_ADDR(0x0001e2d4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1E2D6:
    /* 0001e2d6   2  rts */
    c->pc = RC_ADDR(0x0001e2d6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
