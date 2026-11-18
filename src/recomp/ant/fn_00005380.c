/* fn_00005380 - 48 byte(s), 15 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00005380(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00005380u): goto L_5380;
    case RC_ADDR(0x00005384u): goto L_5384;
    case RC_ADDR(0x00005388u): goto L_5388;
    case RC_ADDR(0x0000538au): goto L_538A;
    case RC_ADDR(0x0000538eu): goto L_538E;
    case RC_ADDR(0x00005392u): goto L_5392;
    case RC_ADDR(0x00005394u): goto L_5394;
    case RC_ADDR(0x00005398u): goto L_5398;
    case RC_ADDR(0x0000539cu): goto L_539C;
    case RC_ADDR(0x0000539eu): goto L_539E;
    case RC_ADDR(0x000053a2u): goto L_53A2;
    case RC_ADDR(0x000053a6u): goto L_53A6;
    case RC_ADDR(0x000053a8u): goto L_53A8;
    case RC_ADDR(0x000053acu): goto L_53AC;
    case RC_ADDR(0x000053aeu): goto L_53AE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5380:
    /* 00005380   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00005380u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_5384:
    /* 00005384   4  tst.l (ffff85de,A4) */
    c->pc = RC_ADDR(0x00005384u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7a22u));
    rc_set_nzvc(c, t0, RC_L);

L_5388:
    /* 00005388   2  beq 00005398 */
    c->pc = RC_ADDR(0x00005388u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_5398;

L_538A:
    /* 0000538a   4  move.l (ffff85de,A4),-(A7) */
    c->pc = RC_ADDR(0x0000538au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7a22u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_538E:
    /* 0000538e   4  jsr (ffff8356,A4) */
    c->pc = RC_ADDR(0x0000538eu);
    rc_step(c, m, 18);
    /* vector 142 */
    rc_push32(c, m, RC_ADDR(0x00005392u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e4cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002358cu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023590u);
    return;

L_5392:
    /* 00005392   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00005392u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5394:
    /* 00005394   4  clr.l (ffff85de,A4) */
    c->pc = RC_ADDR(0x00005394u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x7a22u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5398:
    /* 00005398   4  tst.l (ffff85e2,A4) */
    c->pc = RC_ADDR(0x00005398u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7a1eu));
    rc_set_nzvc(c, t0, RC_L);

L_539C:
    /* 0000539c   2  beq 000053ac */
    c->pc = RC_ADDR(0x0000539cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_53AC;

L_539E:
    /* 0000539e   4  move.l (ffff85e2,A4),-(A7) */
    c->pc = RC_ADDR(0x0000539eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7a1eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_53A2:
    /* 000053a2   4  jsr (ffff8380,A4) */
    c->pc = RC_ADDR(0x000053a2u);
    rc_step(c, m, 18);
    /* vector 149 */
    rc_push32(c, m, RC_ADDR(0x000053a6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e76u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023866u);
    return;

L_53A6:
    /* 000053a6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000053a6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_53A8:
    /* 000053a8   4  clr.l (ffff85e2,A4) */
    c->pc = RC_ADDR(0x000053a8u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x7a1eu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_53AC:
    /* 000053ac   2  unlk A5 */
    c->pc = RC_ADDR(0x000053acu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_53AE:
    /* 000053ae   2  rts */
    c->pc = RC_ADDR(0x000053aeu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
