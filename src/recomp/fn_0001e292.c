/* fn_0001e292 - 130 byte(s), 41 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001e292(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001e292u): goto L_1E292;
    case RC_ADDR(0x0001e296u): goto L_1E296;
    case RC_ADDR(0x0001e298u): goto L_1E298;
    case RC_ADDR(0x0001e29au): goto L_1E29A;
    case RC_ADDR(0x0001e29eu): goto L_1E29E;
    case RC_ADDR(0x0001e2a0u): goto L_1E2A0;
    case RC_ADDR(0x0001e2a4u): goto L_1E2A4;
    case RC_ADDR(0x0001e2a8u): goto L_1E2A8;
    case RC_ADDR(0x0001e2aau): goto L_1E2AA;
    case RC_ADDR(0x0001e2aeu): goto L_1E2AE;
    case RC_ADDR(0x0001e2b2u): goto L_1E2B2;
    case RC_ADDR(0x0001e2b4u): goto L_1E2B4;
    case RC_ADDR(0x0001e2b8u): goto L_1E2B8;
    case RC_ADDR(0x0001e2bcu): goto L_1E2BC;
    case RC_ADDR(0x0001e2beu): goto L_1E2BE;
    case RC_ADDR(0x0001e2c0u): goto L_1E2C0;
    case RC_ADDR(0x0001e2c4u): goto L_1E2C4;
    case RC_ADDR(0x0001e2c6u): goto L_1E2C6;
    case RC_ADDR(0x0001e2cau): goto L_1E2CA;
    case RC_ADDR(0x0001e2ceu): goto L_1E2CE;
    case RC_ADDR(0x0001e2d2u): goto L_1E2D2;
    case RC_ADDR(0x0001e2d4u): goto L_1E2D4;
    case RC_ADDR(0x0001e2d6u): goto L_1E2D6;
    case RC_ADDR(0x0001e2dcu): goto L_1E2DC;
    case RC_ADDR(0x0001e2deu): goto L_1E2DE;
    case RC_ADDR(0x0001e2e2u): goto L_1E2E2;
    case RC_ADDR(0x0001e2e6u): goto L_1E2E6;
    case RC_ADDR(0x0001e2e8u): goto L_1E2E8;
    case RC_ADDR(0x0001e2ecu): goto L_1E2EC;
    case RC_ADDR(0x0001e2f2u): goto L_1E2F2;
    case RC_ADDR(0x0001e2f6u): goto L_1E2F6;
    case RC_ADDR(0x0001e2fau): goto L_1E2FA;
    case RC_ADDR(0x0001e2feu): goto L_1E2FE;
    case RC_ADDR(0x0001e302u): goto L_1E302;
    case RC_ADDR(0x0001e306u): goto L_1E306;
    case RC_ADDR(0x0001e308u): goto L_1E308;
    case RC_ADDR(0x0001e30au): goto L_1E30A;
    case RC_ADDR(0x0001e30cu): goto L_1E30C;
    case RC_ADDR(0x0001e30eu): goto L_1E30E;
    case RC_ADDR(0x0001e310u): goto L_1E310;
    case RC_ADDR(0x0001e312u): goto L_1E312;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E292:
    /* 0001e292   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001e292u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1E296:
    /* 0001e296   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001e296u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E298:
    /* 0001e298   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001e298u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E29A:
    /* 0001e29a   4  jsr (000214fa) */
    c->pc = RC_ADDR(0x0001e29au);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001e29eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000214fau);
    return;

L_1E29E:
    /* 0001e29e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001e29eu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E2A0:
    /* 0001e2a0   4  move.l D0,(ffffcb46,A4) */
    c->pc = RC_ADDR(0x0001e2a0u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x34bau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E2A4:
    /* 0001e2a4   4  tst.l (ffffcb46,A4) */
    c->pc = RC_ADDR(0x0001e2a4u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34bau));
    rc_set_nzvc(c, t0, RC_L);

L_1E2A8:
    /* 0001e2a8   2  beq 0001e30e */
    c->pc = RC_ADDR(0x0001e2a8u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1E30E;

L_1E2AA:
    /* 0001e2aa   4  move.l (ffffcb46,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e2aau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34bau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E2AE:
    /* 0001e2ae   4  jsr (000215e4) */
    c->pc = RC_ADDR(0x0001e2aeu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001e2b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x000215e4u);
    return;

L_1E2B2:
    /* 0001e2b2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001e2b2u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E2B4:
    /* 0001e2b4   4  move.l D0,(ffffcb42,A4) */
    c->pc = RC_ADDR(0x0001e2b4u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x34beu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E2B8:
    /* 0001e2b8   4  tst.l (ffffcb42,A4) */
    c->pc = RC_ADDR(0x0001e2b8u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34beu));
    rc_set_nzvc(c, t0, RC_L);

L_1E2BC:
    /* 0001e2bc   2  beq 0001e30e */
    c->pc = RC_ADDR(0x0001e2bcu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1E30E;

L_1E2BE:
    /* 0001e2be   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001e2beu);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E2C0:
    /* 0001e2c0   4  move.l (ffffcb42,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e2c0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34beu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E2C4:
    /* 0001e2c4   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001e2c4u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E2C6:
    /* 0001e2c6   4  pea (0001e314) */
    c->pc = RC_ADDR(0x0001e2c6u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001e314u));

L_1E2CA:
    /* 0001e2ca   4  jsr (0002170a) */
    c->pc = RC_ADDR(0x0001e2cau);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001e2ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x0002170au);
    return;

L_1E2CE:
    /* 0001e2ce   4  lea (10,A7),A7 */
    c->pc = RC_ADDR(0x0001e2ceu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0x10u);

L_1E2D2:
    /* 0001e2d2   2  tst.l D0 */
    c->pc = RC_ADDR(0x0001e2d2u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_1E2D4:
    /* 0001e2d4   2  bne 0001e2de */
    c->pc = RC_ADDR(0x0001e2d4u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1E2DE;

L_1E2D6:
    /* 0001e2d6   6  move.w #1,(ffffcb40,A4) */
    c->pc = RC_ADDR(0x0001e2d6u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x34c0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E2DC:
    /* 0001e2dc   2  bra 0001e2e2 */
    c->pc = RC_ADDR(0x0001e2dcu);
    rc_step(c, m);
    goto L_1E2E2;

L_1E2DE:
    /* 0001e2de   4  clr.w (ffffcb40,A4) */
    c->pc = RC_ADDR(0x0001e2deu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x34c0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1E2E2:
    /* 0001e2e2   4  tst.w (ffffcb40,A4) */
    c->pc = RC_ADDR(0x0001e2e2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34c0u));
    rc_set_nzvc(c, t0, RC_W);

L_1E2E6:
    /* 0001e2e6   2  beq 0001e30e */
    c->pc = RC_ADDR(0x0001e2e6u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1E30E;

L_1E2E8:
    /* 0001e2e8   4  movea.l (ffffcb42,A4),A0 */
    c->pc = RC_ADDR(0x0001e2e8u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34beu));
    c->a[0] = t0;

L_1E2EC:
    /* 0001e2ec   6  move.w #9,(1c,A0) */
    c->pc = RC_ADDR(0x0001e2ecu);
    rc_step(c, m);
    t0 = 0x00000009u;
    rc_wr16(c, m, (c->a[0] + 0x1cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E2F2:
    /* 0001e2f2   4  lea (ffffcb4a,A4),A0 */
    c->pc = RC_ADDR(0x0001e2f2u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x34b6u);

L_1E2F6:
    /* 0001e2f6   4  movea.l (ffffcb42,A4),A1 */
    c->pc = RC_ADDR(0x0001e2f6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34beu));
    c->a[1] = t0;

L_1E2FA:
    /* 0001e2fa   4  move.l A0,(28,A1) */
    c->pc = RC_ADDR(0x0001e2fau);
    rc_step(c, m);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0x28u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E2FE:
    /* 0001e2fe   4  move.l (ffffcb42,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e2feu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34beu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E302:
    /* 0001e302   4  jsr (0002169e) */
    c->pc = RC_ADDR(0x0001e302u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001e306u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002169eu);
    return;

L_1E306:
    /* 0001e306   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001e306u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E308:
    /* 0001e308   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001e308u);
    rc_step(c, m);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1E30A:
    /* 0001e30a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001e30au);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1E30C:
    /* 0001e30c   2  rts */
    c->pc = RC_ADDR(0x0001e30cu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_1E30E:
    /* 0001e30e   2  bsr 0001e322 */
    c->pc = RC_ADDR(0x0001e30eu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001e310u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e322u);
    return;

L_1E310:
    /* 0001e310   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001e310u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1E312:
    /* 0001e312   2  bra 0001e30a */
    c->pc = RC_ADDR(0x0001e312u);
    rc_step(c, m);
    rc_tick();
    goto L_1E30A;

}
