/* fn_00022308 - 68 byte(s), 20 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00022308(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00022308u): goto L_22308;
    case RC_ADDR(0x0002230cu): goto L_2230C;
    case RC_ADDR(0x00022310u): goto L_22310;
    case RC_ADDR(0x00022314u): goto L_22314;
    case RC_ADDR(0x00022316u): goto L_22316;
    case RC_ADDR(0x0002231au): goto L_2231A;
    case RC_ADDR(0x0002231eu): goto L_2231E;
    case RC_ADDR(0x00022320u): goto L_22320;
    case RC_ADDR(0x00022324u): goto L_22324;
    case RC_ADDR(0x00022328u): goto L_22328;
    case RC_ADDR(0x0002232au): goto L_2232A;
    case RC_ADDR(0x0002232eu): goto L_2232E;
    case RC_ADDR(0x00022332u): goto L_22332;
    case RC_ADDR(0x00022336u): goto L_22336;
    case RC_ADDR(0x00022338u): goto L_22338;
    case RC_ADDR(0x0002233cu): goto L_2233C;
    case RC_ADDR(0x00022340u): goto L_22340;
    case RC_ADDR(0x00022344u): goto L_22344;
    case RC_ADDR(0x00022348u): goto L_22348;
    case RC_ADDR(0x0002234au): goto L_2234A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22308:
    /* 00022308   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00022308u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_2230C:
    /* 0002230c   4  clr.w (3508,A4) */
    c->pc = RC_ADDR(0x0002230cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x3508u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_22310:
    /* 00022310   4  tst.l (350a,A4) */
    c->pc = RC_ADDR(0x00022310u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x350au));
    rc_set_nzvc(c, t0, RC_L);

L_22314:
    /* 00022314   2  beq 00022324 */
    c->pc = RC_ADDR(0x00022314u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22324;

L_22316:
    /* 00022316   4  move.l (350a,A4),-(A7) */
    c->pc = RC_ADDR(0x00022316u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x350au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2231A:
    /* 0002231a   4  jsr (00022532) */
    c->pc = RC_ADDR(0x0002231au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0002231eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00022532u);
    return;

L_2231E:
    /* 0002231e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0002231eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_22320:
    /* 00022320   4  clr.l (350a,A4) */
    c->pc = RC_ADDR(0x00022320u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x350au), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_22324:
    /* 00022324   4  tst.l (350e,A4) */
    c->pc = RC_ADDR(0x00022324u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x350eu));
    rc_set_nzvc(c, t0, RC_L);

L_22328:
    /* 00022328   2  beq 0002233c */
    c->pc = RC_ADDR(0x00022328u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2233C;

L_2232A:
    /* 0002232a   4  move.l (3544,A4),-(A7) */
    c->pc = RC_ADDR(0x0002232au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3544u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2232E:
    /* 0002232e   4  move.l (350e,A4),-(A7) */
    c->pc = RC_ADDR(0x0002232eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x350eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22332:
    /* 00022332   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00022332u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00022336u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_22336:
    /* 00022336   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00022336u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_22338:
    /* 00022338   4  clr.l (350e,A4) */
    c->pc = RC_ADDR(0x00022338u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x350eu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2233C:
    /* 0002233c   4  clr.b (3512,A4) */
    c->pc = RC_ADDR(0x0002233cu);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[4] + 0x3512u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_22340:
    /* 00022340   4  clr.l (14bc,A4) */
    c->pc = RC_ADDR(0x00022340u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x14bcu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_22344:
    /* 00022344   4  clr.w (3548,A4) */
    c->pc = RC_ADDR(0x00022344u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x3548u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_22348:
    /* 00022348   2  unlk A5 */
    c->pc = RC_ADDR(0x00022348u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2234A:
    /* 0002234a   2  rts */
    c->pc = RC_ADDR(0x0002234au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
