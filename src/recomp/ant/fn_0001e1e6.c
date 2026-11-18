/* fn_0001e1e6 - 82 byte(s), 23 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001e1e6(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001e1e6u): goto L_1E1E6;
    case RC_ADDR(0x0001e1eau): goto L_1E1EA;
    case RC_ADDR(0x0001e1ecu): goto L_1E1EC;
    case RC_ADDR(0x0001e1f0u): goto L_1E1F0;
    case RC_ADDR(0x0001e1f2u): goto L_1E1F2;
    case RC_ADDR(0x0001e1f6u): goto L_1E1F6;
    case RC_ADDR(0x0001e1fau): goto L_1E1FA;
    case RC_ADDR(0x0001e1fcu): goto L_1E1FC;
    case RC_ADDR(0x0001e200u): goto L_1E200;
    case RC_ADDR(0x0001e204u): goto L_1E204;
    case RC_ADDR(0x0001e208u): goto L_1E208;
    case RC_ADDR(0x0001e20cu): goto L_1E20C;
    case RC_ADDR(0x0001e210u): goto L_1E210;
    case RC_ADDR(0x0001e214u): goto L_1E214;
    case RC_ADDR(0x0001e218u): goto L_1E218;
    case RC_ADDR(0x0001e21cu): goto L_1E21C;
    case RC_ADDR(0x0001e220u): goto L_1E220;
    case RC_ADDR(0x0001e224u): goto L_1E224;
    case RC_ADDR(0x0001e228u): goto L_1E228;
    case RC_ADDR(0x0001e22cu): goto L_1E22C;
    case RC_ADDR(0x0001e230u): goto L_1E230;
    case RC_ADDR(0x0001e234u): goto L_1E234;
    case RC_ADDR(0x0001e236u): goto L_1E236;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E1E6:
    /* 0001e1e6   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001e1e6u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1E1EA:
    /* 0001e1ea   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0001e1eau);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1E1EC:
    /* 0001e1ec   4  jsr (ffff80ce,A4) */
    c->pc = RC_ADDR(0x0001e1ecu);
    rc_step(c, m, 18);
    /* vector 34 */
    rc_push32(c, m, RC_ADDR(0x0001e1f0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bc4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_1E1F0:
    /* 0001e1f0   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001e1f0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1E1F2:
    /* 0001e1f2   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0001e1f2u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E1F6:
    /* 0001e1f6   4  jsr (ffff80ce,A4) */
    c->pc = RC_ADDR(0x0001e1f6u);
    rc_step(c, m, 18);
    /* vector 34 */
    rc_push32(c, m, RC_ADDR(0x0001e1fau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bc4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_1E1FA:
    /* 0001e1fa   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001e1fau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1E1FC:
    /* 0001e1fc   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0001e1fcu);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E200:
    /* 0001e200   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0001e200u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E204:
    /* 0001e204   4  move.l (2ddc,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e204u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2ddcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E208:
    /* 0001e208   4  move.w (2dd2,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e208u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2dd2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E20C:
    /* 0001e20c   4  move.l (2dca,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e20cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2dcau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E210:
    /* 0001e210   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0001e210u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0001e214u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_1E214:
    /* 0001e214   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001e214u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_1E218:
    /* 0001e218   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0001e218u);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E21C:
    /* 0001e21c   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0001e21cu);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E220:
    /* 0001e220   4  move.l (2ddc,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e220u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2ddcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E224:
    /* 0001e224   4  move.w (2dd2,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e224u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2dd2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E228:
    /* 0001e228   4  move.l (2dca,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e228u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2dcau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E22C:
    /* 0001e22c   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0001e22cu);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0001e230u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_1E230:
    /* 0001e230   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001e230u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_1E234:
    /* 0001e234   2  unlk A5 */
    c->pc = RC_ADDR(0x0001e234u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1E236:
    /* 0001e236   2  rts */
    c->pc = RC_ADDR(0x0001e236u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
