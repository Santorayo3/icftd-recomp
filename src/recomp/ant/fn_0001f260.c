/* fn_0001f260 - 88 byte(s), 26 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001f260(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f260u): goto L_1F260;
    case RC_ADDR(0x0001f264u): goto L_1F264;
    case RC_ADDR(0x0001f266u): goto L_1F266;
    case RC_ADDR(0x0001f26au): goto L_1F26A;
    case RC_ADDR(0x0001f26eu): goto L_1F26E;
    case RC_ADDR(0x0001f274u): goto L_1F274;
    case RC_ADDR(0x0001f278u): goto L_1F278;
    case RC_ADDR(0x0001f27cu): goto L_1F27C;
    case RC_ADDR(0x0001f282u): goto L_1F282;
    case RC_ADDR(0x0001f286u): goto L_1F286;
    case RC_ADDR(0x0001f28au): goto L_1F28A;
    case RC_ADDR(0x0001f28cu): goto L_1F28C;
    case RC_ADDR(0x0001f290u): goto L_1F290;
    case RC_ADDR(0x0001f292u): goto L_1F292;
    case RC_ADDR(0x0001f296u): goto L_1F296;
    case RC_ADDR(0x0001f29au): goto L_1F29A;
    case RC_ADDR(0x0001f29cu): goto L_1F29C;
    case RC_ADDR(0x0001f2a0u): goto L_1F2A0;
    case RC_ADDR(0x0001f2a2u): goto L_1F2A2;
    case RC_ADDR(0x0001f2a6u): goto L_1F2A6;
    case RC_ADDR(0x0001f2a8u): goto L_1F2A8;
    case RC_ADDR(0x0001f2acu): goto L_1F2AC;
    case RC_ADDR(0x0001f2aeu): goto L_1F2AE;
    case RC_ADDR(0x0001f2b2u): goto L_1F2B2;
    case RC_ADDR(0x0001f2b4u): goto L_1F2B4;
    case RC_ADDR(0x0001f2b6u): goto L_1F2B6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F260:
    /* 0001f260   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001f260u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1F264:
    /* 0001f264   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001f264u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F266:
    /* 0001f266   4  jsr (ffff8242,A4) */
    c->pc = RC_ADDR(0x0001f266u);
    rc_step(c, m, 18);
    /* vector 96 */
    rc_push32(c, m, RC_ADDR(0x0001f26au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d38u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f860u);
    return;

L_1F26A:
    /* 0001f26a   4  movea.l (ffffd340,A4),A2 */
    c->pc = RC_ADDR(0x0001f26au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    c->a[2] = t0;

L_1F26E:
    /* 0001f26e   6  move.l (ffffd33c,A4),(ffffd340,A4) */
    c->pc = RC_ADDR(0x0001f26eu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc4u));
    rc_wr32(c, m, (c->a[4] - 0x2cc0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F274:
    /* 0001f274   4  move.l A2,(ffffd33c,A4) */
    c->pc = RC_ADDR(0x0001f274u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2cc4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F278:
    /* 0001f278   4  movea.l (ffffd294,A4),A2 */
    c->pc = RC_ADDR(0x0001f278u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d6cu));
    c->a[2] = t0;

L_1F27C:
    /* 0001f27c   6  move.l (ffffd290,A4),(ffffd294,A4) */
    c->pc = RC_ADDR(0x0001f27cu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d70u));
    rc_wr32(c, m, (c->a[4] - 0x2d6cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F282:
    /* 0001f282   4  move.l A2,(ffffd290,A4) */
    c->pc = RC_ADDR(0x0001f282u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2d70u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F286:
    /* 0001f286   4  tst.w (ffffd2b0,A4) */
    c->pc = RC_ADDR(0x0001f286u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d50u));
    rc_set_nzvc(c, t0, RC_W);

L_1F28A:
    /* 0001f28a   2  beq 0001f292 */
    c->pc = RC_ADDR(0x0001f28au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F292;

L_1F28C:
    /* 0001f28c   4  jsr (000239fe) */
    c->pc = RC_ADDR(0x0001f28cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f290u));
    rc_depth++;
    c->pc = RC_ADDR(0x000239feu);
    return;

L_1F290:
    /* 0001f290   2  bra 0001f286 */
    c->pc = RC_ADDR(0x0001f290u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F286;

L_1F292:
    /* 0001f292   4  move.l (ffffd290,A4),-(A7) */
    c->pc = RC_ADDR(0x0001f292u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d70u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F296:
    /* 0001f296   4  jsr (ffff8398,A4) */
    c->pc = RC_ADDR(0x0001f296u);
    rc_step(c, m, 18);
    /* vector 153 */
    rc_push32(c, m, RC_ADDR(0x0001f29au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e8eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002393au);
    return;

L_1F29A:
    /* 0001f29a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f29au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F29C:
    /* 0001f29c   4  movea.l (ffffd294,A4),A0 */
    c->pc = RC_ADDR(0x0001f29cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d6cu));
    c->a[0] = t0;

L_1F2A0:
    /* 0001f2a0   2  move.l (A0),-(A7) */
    c->pc = RC_ADDR(0x0001f2a0u);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F2A2:
    /* 0001f2a2   4  jsr (000239f2) */
    c->pc = RC_ADDR(0x0001f2a2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f2a6u));
    rc_depth++;
    c->pc = RC_ADDR(0x000239f2u);
    return;

L_1F2A6:
    /* 0001f2a6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f2a6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F2A8:
    /* 0001f2a8   4  tst.w (ffff83ec,A4) */
    c->pc = RC_ADDR(0x0001f2a8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c14u));
    rc_set_nzvc(c, t0, RC_W);

L_1F2AC:
    /* 0001f2ac   2  beq 0001f2b2 */
    c->pc = RC_ADDR(0x0001f2acu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F2B2;

L_1F2AE:
    /* 0001f2ae   4  jsr (ffff807a,A4) */
    c->pc = RC_ADDR(0x0001f2aeu);
    rc_step(c, m, 18);
    /* vector 20 */
    rc_push32(c, m, RC_ADDR(0x0001f2b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b70u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00005ce4u);
    return;

L_1F2B2:
    /* 0001f2b2   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x0001f2b2u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_1F2B4:
    /* 0001f2b4   2  unlk A5 */
    c->pc = RC_ADDR(0x0001f2b4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F2B6:
    /* 0001f2b6   2  rts */
    c->pc = RC_ADDR(0x0001f2b6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
