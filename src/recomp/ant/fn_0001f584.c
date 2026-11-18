/* fn_0001f584 - 94 byte(s), 28 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001f584(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f584u): goto L_1F584;
    case RC_ADDR(0x0001f588u): goto L_1F588;
    case RC_ADDR(0x0001f58cu): goto L_1F58C;
    case RC_ADDR(0x0001f590u): goto L_1F590;
    case RC_ADDR(0x0001f592u): goto L_1F592;
    case RC_ADDR(0x0001f594u): goto L_1F594;
    case RC_ADDR(0x0001f598u): goto L_1F598;
    case RC_ADDR(0x0001f59cu): goto L_1F59C;
    case RC_ADDR(0x0001f5a2u): goto L_1F5A2;
    case RC_ADDR(0x0001f5a6u): goto L_1F5A6;
    case RC_ADDR(0x0001f5a8u): goto L_1F5A8;
    case RC_ADDR(0x0001f5acu): goto L_1F5AC;
    case RC_ADDR(0x0001f5b0u): goto L_1F5B0;
    case RC_ADDR(0x0001f5b4u): goto L_1F5B4;
    case RC_ADDR(0x0001f5b8u): goto L_1F5B8;
    case RC_ADDR(0x0001f5bau): goto L_1F5BA;
    case RC_ADDR(0x0001f5bcu): goto L_1F5BC;
    case RC_ADDR(0x0001f5beu): goto L_1F5BE;
    case RC_ADDR(0x0001f5c2u): goto L_1F5C2;
    case RC_ADDR(0x0001f5c4u): goto L_1F5C4;
    case RC_ADDR(0x0001f5c6u): goto L_1F5C6;
    case RC_ADDR(0x0001f5cau): goto L_1F5CA;
    case RC_ADDR(0x0001f5ceu): goto L_1F5CE;
    case RC_ADDR(0x0001f5d0u): goto L_1F5D0;
    case RC_ADDR(0x0001f5d6u): goto L_1F5D6;
    case RC_ADDR(0x0001f5dau): goto L_1F5DA;
    case RC_ADDR(0x0001f5deu): goto L_1F5DE;
    case RC_ADDR(0x0001f5e0u): goto L_1F5E0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F584:
    /* 0001f584   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0001f584u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1F588:
    /* 0001f588   4  clr.w (ffffd2a0,A4) */
    c->pc = RC_ADDR(0x0001f588u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2d60u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F58C:
    /* 0001f58c   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001f58cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1F590:
    /* 0001f590   2  tst.b (A0) */
    c->pc = RC_ADDR(0x0001f590u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_B);

L_1F592:
    /* 0001f592   2  bne 0001f59c */
    c->pc = RC_ADDR(0x0001f592u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F59C;

L_1F594:
    /* 0001f594   4  lea (0001f5e2),A0 */
    c->pc = RC_ADDR(0x0001f594u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x0001f5e2u);

L_1F598:
    /* 0001f598   4  move.l A0,(8,A5) */
    c->pc = RC_ADDR(0x0001f598u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F59C:
    /* 0001f59c   6  move.l (ffffd29c,A4),(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001f59cu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d64u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F5A2:
    /* 0001f5a2   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001f5a2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_1F5A6:
    /* 0001f5a6   2  beq 0001f5d0 */
    c->pc = RC_ADDR(0x0001f5a6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F5D0;

L_1F5A8:
    /* 0001f5a8   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001f5a8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1F5AC:
    /* 0001f5ac   4  move.l (4,A0),-(A7) */
    c->pc = RC_ADDR(0x0001f5acu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F5B0:
    /* 0001f5b0   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f5b0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F5B4:
    /* 0001f5b4   4  jsr (ffff82de,A4) */
    c->pc = RC_ADDR(0x0001f5b4u);
    rc_step(c, m, 18);
    /* vector 122 */
    rc_push32(c, m, RC_ADDR(0x0001f5b8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dd4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002298au);
    return;

L_1F5B8:
    /* 0001f5b8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f5b8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F5BA:
    /* 0001f5ba   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001f5bau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1F5BC:
    /* 0001f5bc   2  bne 0001f5c6 */
    c->pc = RC_ADDR(0x0001f5bcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F5C6;

L_1F5BE:
    /* 0001f5be   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001f5beu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F5C2:
    /* 0001f5c2   2  unlk A5 */
    c->pc = RC_ADDR(0x0001f5c2u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F5C4:
    /* 0001f5c4   2  rts */
    c->pc = RC_ADDR(0x0001f5c4u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1F5C6:
    /* 0001f5c6   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001f5c6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1F5CA:
    /* 0001f5ca   4  move.l (A0),(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001f5cau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F5CE:
    /* 0001f5ce   2  bra 0001f5a2 */
    c->pc = RC_ADDR(0x0001f5ceu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F5A2;

L_1F5D0:
    /* 0001f5d0   6  move.w #1,(ffffd2a0,A4) */
    c->pc = RC_ADDR(0x0001f5d0u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x2d60u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F5D6:
    /* 0001f5d6   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f5d6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F5DA:
    /* 0001f5da   4  jsr (0001f4fc) */
    c->pc = RC_ADDR(0x0001f5dau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f5deu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f4fcu);
    return;

L_1F5DE:
    /* 0001f5de   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f5deu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F5E0:
    /* 0001f5e0   2  bra 0001f5c2 */
    c->pc = RC_ADDR(0x0001f5e0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F5C2;

}
