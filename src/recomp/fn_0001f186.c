/* fn_0001f186 - 84 byte(s), 26 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f186(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f186u): goto L_1F186;
    case RC_ADDR(0x0001f18au): goto L_1F18A;
    case RC_ADDR(0x0001f18eu): goto L_1F18E;
    case RC_ADDR(0x0001f190u): goto L_1F190;
    case RC_ADDR(0x0001f192u): goto L_1F192;
    case RC_ADDR(0x0001f196u): goto L_1F196;
    case RC_ADDR(0x0001f19au): goto L_1F19A;
    case RC_ADDR(0x0001f1a0u): goto L_1F1A0;
    case RC_ADDR(0x0001f1a4u): goto L_1F1A4;
    case RC_ADDR(0x0001f1a6u): goto L_1F1A6;
    case RC_ADDR(0x0001f1aau): goto L_1F1AA;
    case RC_ADDR(0x0001f1aeu): goto L_1F1AE;
    case RC_ADDR(0x0001f1b2u): goto L_1F1B2;
    case RC_ADDR(0x0001f1b6u): goto L_1F1B6;
    case RC_ADDR(0x0001f1b8u): goto L_1F1B8;
    case RC_ADDR(0x0001f1bau): goto L_1F1BA;
    case RC_ADDR(0x0001f1bcu): goto L_1F1BC;
    case RC_ADDR(0x0001f1c0u): goto L_1F1C0;
    case RC_ADDR(0x0001f1c2u): goto L_1F1C2;
    case RC_ADDR(0x0001f1c4u): goto L_1F1C4;
    case RC_ADDR(0x0001f1c8u): goto L_1F1C8;
    case RC_ADDR(0x0001f1ccu): goto L_1F1CC;
    case RC_ADDR(0x0001f1ceu): goto L_1F1CE;
    case RC_ADDR(0x0001f1d2u): goto L_1F1D2;
    case RC_ADDR(0x0001f1d6u): goto L_1F1D6;
    case RC_ADDR(0x0001f1d8u): goto L_1F1D8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F186:
    /* 0001f186   4  link.w A5,#fffffffc */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f186u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1F18A:
    /* 0001f18a   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f18au);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1F18E:
    /* 0001f18e   2  tst.b (A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f18eu);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_B);

L_1F190:
    /* 0001f190   2  bne 0001f19a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f190u);
    if (rc_cond(c, 6)) goto L_1F19A;

L_1F192:
    /* 0001f192   4  lea (0001f1da),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f192u);
    c->a[0] = RC_ADDR(0x0001f1dau);

L_1F196:
    /* 0001f196   4  move.l A0,(8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f196u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F19A:
    /* 0001f19a   6  move.l (ffffcce6,A4),(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f19au);
    t0 = rc_rd32(c, m, (c->a[4] - 0x331au));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F1A0:
    /* 0001f1a0   4  tst.l (fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f1a0u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_1F1A4:
    /* 0001f1a4   2  beq 0001f1ce */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f1a4u);
    if (rc_cond(c, 7)) goto L_1F1CE;

L_1F1A6:
    /* 0001f1a6   4  movea.l (fffffffc,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f1a6u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1F1AA:
    /* 0001f1aa   4  move.l (4,A0),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f1aau);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F1AE:
    /* 0001f1ae   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f1aeu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F1B2:
    /* 0001f1b2   4  jsr (ffff82ba,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f1b2u);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x0001f1b6u));
    rc_depth++;
    c->pc = RC_ADDR(0x000208e8u);
    return;

L_1F1B6:
    /* 0001f1b6   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f1b6u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F1B8:
    /* 0001f1b8   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f1b8u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1F1BA:
    /* 0001f1ba   2  bne 0001f1c4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f1bau);
    if (rc_cond(c, 6)) goto L_1F1C4;

L_1F1BC:
    /* 0001f1bc   4  move.l (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f1bcu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F1C0:
    /* 0001f1c0   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f1c0u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F1C2:
    /* 0001f1c2   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f1c2u);
    rc_ret(c, m);
    return;

L_1F1C4:
    /* 0001f1c4   4  movea.l (fffffffc,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f1c4u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1F1C8:
    /* 0001f1c8   4  move.l (A0),(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f1c8u);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F1CC:
    /* 0001f1cc   2  bra 0001f1a0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f1ccu);
    rc_tick();
    goto L_1F1A0;

L_1F1CE:
    /* 0001f1ce   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f1ceu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F1D2:
    /* 0001f1d2   4  jsr (0001f0d8) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f1d2u);
    rc_push32(c, m, RC_ADDR(0x0001f1d6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f0d8u);
    return;

L_1F1D6:
    /* 0001f1d6   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f1d6u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F1D8:
    /* 0001f1d8   2  bra 0001f1c0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f1d8u);
    rc_tick();
    goto L_1F1C0;

}
