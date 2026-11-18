/* fn_0001d1a6 - 96 byte(s), 28 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001d1a6(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d1a6u): goto L_1D1A6;
    case RC_ADDR(0x0001d1aau): goto L_1D1AA;
    case RC_ADDR(0x0001d1aeu): goto L_1D1AE;
    case RC_ADDR(0x0001d1b2u): goto L_1D1B2;
    case RC_ADDR(0x0001d1b6u): goto L_1D1B6;
    case RC_ADDR(0x0001d1bau): goto L_1D1BA;
    case RC_ADDR(0x0001d1bcu): goto L_1D1BC;
    case RC_ADDR(0x0001d1c0u): goto L_1D1C0;
    case RC_ADDR(0x0001d1c4u): goto L_1D1C4;
    case RC_ADDR(0x0001d1c8u): goto L_1D1C8;
    case RC_ADDR(0x0001d1cau): goto L_1D1CA;
    case RC_ADDR(0x0001d1ceu): goto L_1D1CE;
    case RC_ADDR(0x0001d1d2u): goto L_1D1D2;
    case RC_ADDR(0x0001d1d6u): goto L_1D1D6;
    case RC_ADDR(0x0001d1d8u): goto L_1D1D8;
    case RC_ADDR(0x0001d1dcu): goto L_1D1DC;
    case RC_ADDR(0x0001d1e0u): goto L_1D1E0;
    case RC_ADDR(0x0001d1e4u): goto L_1D1E4;
    case RC_ADDR(0x0001d1e6u): goto L_1D1E6;
    case RC_ADDR(0x0001d1eau): goto L_1D1EA;
    case RC_ADDR(0x0001d1eeu): goto L_1D1EE;
    case RC_ADDR(0x0001d1f2u): goto L_1D1F2;
    case RC_ADDR(0x0001d1f4u): goto L_1D1F4;
    case RC_ADDR(0x0001d1f8u): goto L_1D1F8;
    case RC_ADDR(0x0001d1fcu): goto L_1D1FC;
    case RC_ADDR(0x0001d200u): goto L_1D200;
    case RC_ADDR(0x0001d202u): goto L_1D202;
    case RC_ADDR(0x0001d204u): goto L_1D204;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D1A6:
    /* 0001d1a6   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001d1a6u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1D1AA:
    /* 0001d1aa   4  jsr (ffff80d4,A4) */
    c->pc = RC_ADDR(0x0001d1aau);
    rc_step(c, m, 18);
    /* vector 35 */
    rc_push32(c, m, RC_ADDR(0x0001d1aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bcau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000afb8u);
    return;

L_1D1AE:
    /* 0001d1ae   4  move.l (2c86,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d1aeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c86u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D1B2:
    /* 0001d1b2   4  move.l (2c62,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d1b2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c62u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D1B6:
    /* 0001d1b6   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001d1b6u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001d1bau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1D1BA:
    /* 0001d1ba   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d1bau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D1BC:
    /* 0001d1bc   4  move.l (2c8a,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d1bcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c8au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D1C0:
    /* 0001d1c0   4  move.l (2c66,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d1c0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c66u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D1C4:
    /* 0001d1c4   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001d1c4u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001d1c8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1D1C8:
    /* 0001d1c8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d1c8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D1CA:
    /* 0001d1ca   4  move.l (2c8e,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d1cau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c8eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D1CE:
    /* 0001d1ce   4  move.l (2c6a,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d1ceu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c6au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D1D2:
    /* 0001d1d2   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001d1d2u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001d1d6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1D1D6:
    /* 0001d1d6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d1d6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D1D8:
    /* 0001d1d8   4  move.l (2c92,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d1d8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c92u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D1DC:
    /* 0001d1dc   4  move.l (2c6e,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d1dcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c6eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D1E0:
    /* 0001d1e0   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001d1e0u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001d1e4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1D1E4:
    /* 0001d1e4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d1e4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D1E6:
    /* 0001d1e6   4  move.l (2c96,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d1e6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c96u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D1EA:
    /* 0001d1ea   4  move.l (2c72,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d1eau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c72u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D1EE:
    /* 0001d1ee   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001d1eeu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001d1f2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1D1F2:
    /* 0001d1f2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d1f2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D1F4:
    /* 0001d1f4   4  move.l (2c9a,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d1f4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c9au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D1F8:
    /* 0001d1f8   4  move.l (2c76,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d1f8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c76u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D1FC:
    /* 0001d1fc   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001d1fcu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001d200u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1D200:
    /* 0001d200   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d200u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D202:
    /* 0001d202   2  unlk A5 */
    c->pc = RC_ADDR(0x0001d202u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D204:
    /* 0001d204   2  rts */
    c->pc = RC_ADDR(0x0001d204u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
