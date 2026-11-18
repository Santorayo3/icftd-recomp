/* fn_000203c0 - 100 byte(s), 29 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000203c0(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000203c0u): goto L_203C0;
    case RC_ADDR(0x000203c4u): goto L_203C4;
    case RC_ADDR(0x000203c8u): goto L_203C8;
    case RC_ADDR(0x000203cau): goto L_203CA;
    case RC_ADDR(0x000203ceu): goto L_203CE;
    case RC_ADDR(0x000203d4u): goto L_203D4;
    case RC_ADDR(0x000203d8u): goto L_203D8;
    case RC_ADDR(0x000203dcu): goto L_203DC;
    case RC_ADDR(0x000203e0u): goto L_203E0;
    case RC_ADDR(0x000203e4u): goto L_203E4;
    case RC_ADDR(0x000203e8u): goto L_203E8;
    case RC_ADDR(0x000203eau): goto L_203EA;
    case RC_ADDR(0x000203eeu): goto L_203EE;
    case RC_ADDR(0x000203f2u): goto L_203F2;
    case RC_ADDR(0x000203f4u): goto L_203F4;
    case RC_ADDR(0x000203f8u): goto L_203F8;
    case RC_ADDR(0x000203fau): goto L_203FA;
    case RC_ADDR(0x000203feu): goto L_203FE;
    case RC_ADDR(0x00020402u): goto L_20402;
    case RC_ADDR(0x00020404u): goto L_20404;
    case RC_ADDR(0x00020408u): goto L_20408;
    case RC_ADDR(0x0002040au): goto L_2040A;
    case RC_ADDR(0x0002040eu): goto L_2040E;
    case RC_ADDR(0x00020412u): goto L_20412;
    case RC_ADDR(0x00020414u): goto L_20414;
    case RC_ADDR(0x00020418u): goto L_20418;
    case RC_ADDR(0x0002041cu): goto L_2041C;
    case RC_ADDR(0x00020420u): goto L_20420;
    case RC_ADDR(0x00020422u): goto L_20422;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_203C0:
    /* 000203c0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000203c0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_203C4:
    /* 000203c4   4  tst.w (ffffd2c4,A4) */
    c->pc = RC_ADDR(0x000203c4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d3cu));
    rc_set_nzvc(c, t0, RC_W);

L_203C8:
    /* 000203c8   2  beq 000203f4 */
    c->pc = RC_ADDR(0x000203c8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_203F4;

L_203CA:
    /* 000203ca   4  movea.l (ffffd2c6,A4),A0 */
    c->pc = RC_ADDR(0x000203cau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d3au));
    c->a[0] = t0;

L_203CE:
    /* 000203ce   6  move.w #a,(1c,A0) */
    c->pc = RC_ADDR(0x000203ceu);
    rc_step(c, m, 16);
    t0 = 0x0000000au;
    rc_wr16(c, m, (c->a[0] + 0x1cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_203D4:
    /* 000203d4   4  lea (ffffd2ce,A4),A0 */
    c->pc = RC_ADDR(0x000203d4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2d32u);

L_203D8:
    /* 000203d8   4  movea.l (ffffd2c6,A4),A1 */
    c->pc = RC_ADDR(0x000203d8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d3au));
    c->a[1] = t0;

L_203DC:
    /* 000203dc   4  move.l A0,(28,A1) */
    c->pc = RC_ADDR(0x000203dcu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0x28u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_203E0:
    /* 000203e0   4  move.l (ffffd2c6,A4),-(A7) */
    c->pc = RC_ADDR(0x000203e0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d3au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_203E4:
    /* 000203e4   4  jsr (00023740) */
    c->pc = RC_ADDR(0x000203e4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000203e8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023740u);
    return;

L_203E8:
    /* 000203e8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000203e8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_203EA:
    /* 000203ea   4  move.l (ffffd2c6,A4),-(A7) */
    c->pc = RC_ADDR(0x000203eau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d3au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_203EE:
    /* 000203ee   4  jsr (00023580) */
    c->pc = RC_ADDR(0x000203eeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000203f2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023580u);
    return;

L_203F2:
    /* 000203f2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000203f2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_203F4:
    /* 000203f4   4  tst.l (ffffd2c6,A4) */
    c->pc = RC_ADDR(0x000203f4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d3au));
    rc_set_nzvc(c, t0, RC_L);

L_203F8:
    /* 000203f8   2  beq 00020404 */
    c->pc = RC_ADDR(0x000203f8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20404;

L_203FA:
    /* 000203fa   4  move.l (ffffd2c6,A4),-(A7) */
    c->pc = RC_ADDR(0x000203fau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d3au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_203FE:
    /* 000203fe   4  jsr (0002369c) */
    c->pc = RC_ADDR(0x000203feu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020402u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002369cu);
    return;

L_20402:
    /* 00020402   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00020402u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_20404:
    /* 00020404   4  tst.l (ffffd2ca,A4) */
    c->pc = RC_ADDR(0x00020404u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d36u));
    rc_set_nzvc(c, t0, RC_L);

L_20408:
    /* 00020408   2  beq 00020414 */
    c->pc = RC_ADDR(0x00020408u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20414;

L_2040A:
    /* 0002040a   4  move.l (ffffd2ca,A4),-(A7) */
    c->pc = RC_ADDR(0x0002040au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d36u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2040E:
    /* 0002040e   4  jsr (00023628) */
    c->pc = RC_ADDR(0x0002040eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020412u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023628u);
    return;

L_20412:
    /* 00020412   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00020412u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_20414:
    /* 00020414   4  clr.w (ffffd2c4,A4) */
    c->pc = RC_ADDR(0x00020414u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2d3cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20418:
    /* 00020418   4  clr.l (ffffd2ca,A4) */
    c->pc = RC_ADDR(0x00020418u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x2d36u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2041C:
    /* 0002041c   4  clr.l (ffffd2c6,A4) */
    c->pc = RC_ADDR(0x0002041cu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x2d3au), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20420:
    /* 00020420   2  unlk A5 */
    c->pc = RC_ADDR(0x00020420u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_20422:
    /* 00020422   2  rts */
    c->pc = RC_ADDR(0x00020422u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
