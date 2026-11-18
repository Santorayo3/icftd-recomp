/* fn_0001cdea - 82 byte(s), 23 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001cdea(cpu_t *c, rt_machine *m)
{
    u32 t0, t1;

    switch (c->pc)
    {
    case RC_ADDR(0x0001cdeau): goto L_1CDEA;
    case RC_ADDR(0x0001cdeeu): goto L_1CDEE;
    case RC_ADDR(0x0001cdf2u): goto L_1CDF2;
    case RC_ADDR(0x0001cdf6u): goto L_1CDF6;
    case RC_ADDR(0x0001cdf8u): goto L_1CDF8;
    case RC_ADDR(0x0001cdfcu): goto L_1CDFC;
    case RC_ADDR(0x0001cdfeu): goto L_1CDFE;
    case RC_ADDR(0x0001ce02u): goto L_1CE02;
    case RC_ADDR(0x0001ce06u): goto L_1CE06;
    case RC_ADDR(0x0001ce0au): goto L_1CE0A;
    case RC_ADDR(0x0001ce0eu): goto L_1CE0E;
    case RC_ADDR(0x0001ce12u): goto L_1CE12;
    case RC_ADDR(0x0001ce16u): goto L_1CE16;
    case RC_ADDR(0x0001ce1au): goto L_1CE1A;
    case RC_ADDR(0x0001ce1cu): goto L_1CE1C;
    case RC_ADDR(0x0001ce20u): goto L_1CE20;
    case RC_ADDR(0x0001ce24u): goto L_1CE24;
    case RC_ADDR(0x0001ce28u): goto L_1CE28;
    case RC_ADDR(0x0001ce2cu): goto L_1CE2C;
    case RC_ADDR(0x0001ce30u): goto L_1CE30;
    case RC_ADDR(0x0001ce34u): goto L_1CE34;
    case RC_ADDR(0x0001ce38u): goto L_1CE38;
    case RC_ADDR(0x0001ce3au): goto L_1CE3A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1CDEA:
    /* 0001cdea   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001cdeau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1CDEE:
    /* 0001cdee   4  move.w #3e8,-(A7) */
    c->pc = RC_ADDR(0x0001cdeeu);
    rc_step(c, m, 12);
    t0 = 0x000003e8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CDF2:
    /* 0001cdf2   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x0001cdf2u);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x0001cdf6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_1CDF6:
    /* 0001cdf6   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001cdf6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1CDF8:
    /* 0001cdf8   4  cmp.w #1f4,D0 */
    c->pc = RC_ADDR(0x0001cdf8u);
    rc_step(c, m, 8);
    t0 = 0x000001f4u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1CDFC:
    /* 0001cdfc   2  bge 0001ce1c */
    c->pc = RC_ADDR(0x0001cdfcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1CE1C;

L_1CDFE:
    /* 0001cdfe   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0001cdfeu);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CE02:
    /* 0001ce02   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0001ce02u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CE06:
    /* 0001ce06   4  move.l (2c86,A4),-(A7) */
    c->pc = RC_ADDR(0x0001ce06u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c86u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CE0A:
    /* 0001ce0a   4  move.w (2c7a,A4),-(A7) */
    c->pc = RC_ADDR(0x0001ce0au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2c7au));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CE0E:
    /* 0001ce0e   4  move.l (2c62,A4),-(A7) */
    c->pc = RC_ADDR(0x0001ce0eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c62u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CE12:
    /* 0001ce12   4  jsr (ffff80e0,A4) */
    c->pc = RC_ADDR(0x0001ce12u);
    rc_step(c, m, 18);
    /* vector 37 */
    rc_push32(c, m, RC_ADDR(0x0001ce16u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bd6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b008u);
    return;

L_1CE16:
    /* 0001ce16   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001ce16u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_1CE1A:
    /* 0001ce1a   2  bra 0001ce38 */
    c->pc = RC_ADDR(0x0001ce1au);
    rc_step(c, m, 10);
    goto L_1CE38;

L_1CE1C:
    /* 0001ce1c   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0001ce1cu);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CE20:
    /* 0001ce20   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0001ce20u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CE24:
    /* 0001ce24   4  move.l (2c8a,A4),-(A7) */
    c->pc = RC_ADDR(0x0001ce24u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c8au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CE28:
    /* 0001ce28   4  move.w (2c7c,A4),-(A7) */
    c->pc = RC_ADDR(0x0001ce28u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2c7cu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CE2C:
    /* 0001ce2c   4  move.l (2c66,A4),-(A7) */
    c->pc = RC_ADDR(0x0001ce2cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c66u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CE30:
    /* 0001ce30   4  jsr (ffff80e0,A4) */
    c->pc = RC_ADDR(0x0001ce30u);
    rc_step(c, m, 18);
    /* vector 37 */
    rc_push32(c, m, RC_ADDR(0x0001ce34u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bd6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b008u);
    return;

L_1CE34:
    /* 0001ce34   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001ce34u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_1CE38:
    /* 0001ce38   2  unlk A5 */
    c->pc = RC_ADDR(0x0001ce38u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1CE3A:
    /* 0001ce3a   2  rts */
    c->pc = RC_ADDR(0x0001ce3au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
