/* fn_0001f2d2 - 140 byte(s), 40 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f2d2(cpu_t *c, rt_machine *m)
{
    u32 t0, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f2d2u): goto L_1F2D2;
    case RC_ADDR(0x0001f2d4u): goto L_1F2D4;
    case RC_ADDR(0x0001f2d8u): goto L_1F2D8;
    case RC_ADDR(0x0001f2dau): goto L_1F2DA;
    case RC_ADDR(0x0001f2deu): goto L_1F2DE;
    case RC_ADDR(0x0001f2e2u): goto L_1F2E2;
    case RC_ADDR(0x0001f2e6u): goto L_1F2E6;
    case RC_ADDR(0x0001f2eau): goto L_1F2EA;
    case RC_ADDR(0x0001f2eeu): goto L_1F2EE;
    case RC_ADDR(0x0001f2f0u): goto L_1F2F0;
    case RC_ADDR(0x0001f2f2u): goto L_1F2F2;
    case RC_ADDR(0x0001f2f4u): goto L_1F2F4;
    case RC_ADDR(0x0001f2f8u): goto L_1F2F8;
    case RC_ADDR(0x0001f2fau): goto L_1F2FA;
    case RC_ADDR(0x0001f2fcu): goto L_1F2FC;
    case RC_ADDR(0x0001f2feu): goto L_1F2FE;
    case RC_ADDR(0x0001f300u): goto L_1F300;
    case RC_ADDR(0x0001f304u): goto L_1F304;
    case RC_ADDR(0x0001f306u): goto L_1F306;
    case RC_ADDR(0x0001f30au): goto L_1F30A;
    case RC_ADDR(0x0001f30eu): goto L_1F30E;
    case RC_ADDR(0x0001f312u): goto L_1F312;
    case RC_ADDR(0x0001f316u): goto L_1F316;
    case RC_ADDR(0x0001f31au): goto L_1F31A;
    case RC_ADDR(0x0001f31cu): goto L_1F31C;
    case RC_ADDR(0x0001f320u): goto L_1F320;
    case RC_ADDR(0x0001f326u): goto L_1F326;
    case RC_ADDR(0x0001f328u): goto L_1F328;
    case RC_ADDR(0x0001f32cu): goto L_1F32C;
    case RC_ADDR(0x0001f330u): goto L_1F330;
    case RC_ADDR(0x0001f334u): goto L_1F334;
    case RC_ADDR(0x0001f338u): goto L_1F338;
    case RC_ADDR(0x0001f33au): goto L_1F33A;
    case RC_ADDR(0x0001f33eu): goto L_1F33E;
    case RC_ADDR(0x0001f344u): goto L_1F344;
    case RC_ADDR(0x0001f34au): goto L_1F34A;
    case RC_ADDR(0x0001f34eu): goto L_1F34E;
    case RC_ADDR(0x0001f352u): goto L_1F352;
    case RC_ADDR(0x0001f356u): goto L_1F356;
    case RC_ADDR(0x0001f35au): goto L_1F35A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F2D2:
    /* 0001f2d2   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2d2u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F2D4:
    /* 0001f2d4   4  move.b (f,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2d4u);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1F2D8:
    /* 0001f2d8   2  move.w D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2d8u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F2DA:
    /* 0001f2da   4  move.l (a,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2dau);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F2DE:
    /* 0001f2de   4  movea.l (fffffebe,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2deu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x142u));
    c->a[0] = t0;

L_1F2E2:
    /* 0001f2e2   4  move.l (2c,A0),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2e2u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F2E6:
    /* 0001f2e6   4  jsr (ffff822a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2e6u);
    /* vector 92 */
    rc_push32(c, m, RC_ADDR(0x0001f2eau));
    rc_depth++;
    c->pc = RC_ADDR(0x0001dd6eu);
    return;

L_1F2EA:
    /* 0001f2ea   4  lea (a,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2eau);
    c->a[7] = (c->a[7] + 0xau);

L_1F2EE:
    /* 0001f2ee   2  movea.l D0,A2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2eeu);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_1F2F0:
    /* 0001f2f0   2  move.l A2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2f0u);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F2F2:
    /* 0001f2f2   2  bne 0001f33e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2f2u);
    if (rc_cond(c, 6)) goto L_1F33E;

L_1F2F4:
    /* 0001f2f4   4  move.l (18,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2f4u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x18u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F2F8:
    /* 0001f2f8   2  moveq #10,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2f8u);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F2FA:
    /* 0001f2fa   2  asr.l D1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2fau);
    c->d[0] = rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L);

L_1F2FC:
    /* 0001f2fc   2  move.w D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2fcu);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F2FE:
    /* 0001f2fe   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2feu);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F300:
    /* 0001f300   4  move.b (f,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f300u);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1F304:
    /* 0001f304   2  move.w D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f304u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F306:
    /* 0001f306   4  move.l (a,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f306u);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F30A:
    /* 0001f30a   4  movea.l (fffffebe,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f30au);
    t0 = rc_rd32(c, m, (c->a[4] - 0x142u));
    c->a[0] = t0;

L_1F30E:
    /* 0001f30e   4  pea (2c,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f30eu);
    rc_push32(c, m, (c->a[0] + 0x2cu));

L_1F312:
    /* 0001f312   4  jsr (0001dcb0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f312u);
    rc_push32(c, m, RC_ADDR(0x0001f316u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001dcb0u);
    return;

L_1F316:
    /* 0001f316   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f316u);
    c->a[7] = (c->a[7] + 0xcu);

L_1F31A:
    /* 0001f31a   2  movea.l D0,A2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f31au);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_1F31C:
    /* 0001f31c   4  movea.l (a,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f31cu);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[0] = t0;

L_1F320:
    /* 0001f320   6  btst #0,(b,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f320u);
    t4 = 0x00000000u;
    t3 = (c->a[0] + 0xbu);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1F326:
    /* 0001f326   2  bne 0001f33e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f326u);
    if (rc_cond(c, 6)) goto L_1F33E;

L_1F328:
    /* 0001f328   4  clr.w (28,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f328u);
    rc_wr16(c, m, (c->a[2] + 0x28u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F32C:
    /* 0001f32c   4  clr.w (2a,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f32cu);
    rc_wr16(c, m, (c->a[2] + 0x2au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F330:
    /* 0001f330   4  move.l (2c,A2),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f330u);
    t0 = rc_rd32(c, m, (c->a[2] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F334:
    /* 0001f334   4  jsr (0001de42) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f334u);
    rc_push32(c, m, RC_ADDR(0x0001f338u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001de42u);
    return;

L_1F338:
    /* 0001f338   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f338u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F33A:
    /* 0001f33a   4  clr.l (2c,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f33au);
    rc_wr32(c, m, (c->a[2] + 0x2cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F33E:
    /* 0001f33e   6  move.l (10,A5),(10,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f33eu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_wr32(c, m, (c->a[2] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F344:
    /* 0001f344   6  move.l (14,A5),(14,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f344u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_wr32(c, m, (c->a[2] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F34A:
    /* 0001f34a   4  clr.l (24,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f34au);
    rc_wr32(c, m, (c->a[2] + 0x24u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F34E:
    /* 0001f34e   4  clr.l (20,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f34eu);
    rc_wr32(c, m, (c->a[2] + 0x20u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F352:
    /* 0001f352   4  clr.l (1c,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f352u);
    rc_wr32(c, m, (c->a[2] + 0x1cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F356:
    /* 0001f356   4  clr.l (18,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f356u);
    rc_wr32(c, m, (c->a[2] + 0x18u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F35A:
    /* 0001f35a   4  bra 0001f8ae */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f35au);
    c->pc = RC_ADDR(0x0001f8aeu);
    return;

}
