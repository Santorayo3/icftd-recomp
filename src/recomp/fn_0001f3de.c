/* fn_0001f3de - 134 byte(s), 42 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f3de(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f3deu): goto L_1F3DE;
    case RC_ADDR(0x0001f3e0u): goto L_1F3E0;
    case RC_ADDR(0x0001f3e4u): goto L_1F3E4;
    case RC_ADDR(0x0001f3e6u): goto L_1F3E6;
    case RC_ADDR(0x0001f3eau): goto L_1F3EA;
    case RC_ADDR(0x0001f3eeu): goto L_1F3EE;
    case RC_ADDR(0x0001f3f2u): goto L_1F3F2;
    case RC_ADDR(0x0001f3f6u): goto L_1F3F6;
    case RC_ADDR(0x0001f3fau): goto L_1F3FA;
    case RC_ADDR(0x0001f3fcu): goto L_1F3FC;
    case RC_ADDR(0x0001f3feu): goto L_1F3FE;
    case RC_ADDR(0x0001f400u): goto L_1F400;
    case RC_ADDR(0x0001f404u): goto L_1F404;
    case RC_ADDR(0x0001f408u): goto L_1F408;
    case RC_ADDR(0x0001f40cu): goto L_1F40C;
    case RC_ADDR(0x0001f410u): goto L_1F410;
    case RC_ADDR(0x0001f412u): goto L_1F412;
    case RC_ADDR(0x0001f414u): goto L_1F414;
    case RC_ADDR(0x0001f416u): goto L_1F416;
    case RC_ADDR(0x0001f418u): goto L_1F418;
    case RC_ADDR(0x0001f41cu): goto L_1F41C;
    case RC_ADDR(0x0001f41eu): goto L_1F41E;
    case RC_ADDR(0x0001f420u): goto L_1F420;
    case RC_ADDR(0x0001f424u): goto L_1F424;
    case RC_ADDR(0x0001f428u): goto L_1F428;
    case RC_ADDR(0x0001f42cu): goto L_1F42C;
    case RC_ADDR(0x0001f430u): goto L_1F430;
    case RC_ADDR(0x0001f434u): goto L_1F434;
    case RC_ADDR(0x0001f438u): goto L_1F438;
    case RC_ADDR(0x0001f43cu): goto L_1F43C;
    case RC_ADDR(0x0001f43eu): goto L_1F43E;
    case RC_ADDR(0x0001f440u): goto L_1F440;
    case RC_ADDR(0x0001f442u): goto L_1F442;
    case RC_ADDR(0x0001f444u): goto L_1F444;
    case RC_ADDR(0x0001f448u): goto L_1F448;
    case RC_ADDR(0x0001f44au): goto L_1F44A;
    case RC_ADDR(0x0001f44cu): goto L_1F44C;
    case RC_ADDR(0x0001f450u): goto L_1F450;
    case RC_ADDR(0x0001f454u): goto L_1F454;
    case RC_ADDR(0x0001f458u): goto L_1F458;
    case RC_ADDR(0x0001f45cu): goto L_1F45C;
    case RC_ADDR(0x0001f460u): goto L_1F460;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F3DE:
    /* 0001f3de   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f3deu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F3E0:
    /* 0001f3e0   4  move.b (f,A5),D0 */
    c->pc = RC_ADDR(0x0001f3e0u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1F3E4:
    /* 0001f3e4   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001f3e4u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F3E6:
    /* 0001f3e6   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f3e6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F3EA:
    /* 0001f3ea   4  movea.l (fffffebe,A4),A0 */
    c->pc = RC_ADDR(0x0001f3eau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x142u));
    c->a[0] = t0;

L_1F3EE:
    /* 0001f3ee   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0001f3eeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F3F2:
    /* 0001f3f2   4  jsr (ffff822a,A4) */
    c->pc = RC_ADDR(0x0001f3f2u);
    rc_step(c, m, 18);
    /* vector 92 */
    rc_push32(c, m, RC_ADDR(0x0001f3f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001dd6eu);
    return;

L_1F3F6:
    /* 0001f3f6   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001f3f6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1F3FA:
    /* 0001f3fa   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x0001f3fau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_1F3FC:
    /* 0001f3fc   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x0001f3fcu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F3FE:
    /* 0001f3fe   2  beq 0001f460 */
    c->pc = RC_ADDR(0x0001f3feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F460;

L_1F400:
    /* 0001f400   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x0001f400u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F404:
    /* 0001f404   4  sub.l (10,A2),D0 */
    c->pc = RC_ADDR(0x0001f404u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[2] + 0x10u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1F408:
    /* 0001f408   4  jsr (000219b2) */
    c->pc = RC_ADDR(0x0001f408u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f40cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000219b2u);
    return;

L_1F40C:
    /* 0001f40c   4  move.l (18,A5),D1 */
    c->pc = RC_ADDR(0x0001f40cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x18u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F410:
    /* 0001f410   2  moveq #10,D2 */
    c->pc = RC_ADDR(0x0001f410u);
    rc_step(c, m, 4);
    c->d[2] = 0x00000010u;
    rc_set_nzvc(c, c->d[2], RC_L);

L_1F412:
    /* 0001f412   2  asr.l D2,D1 */
    c->pc = RC_ADDR(0x0001f412u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 0, (c->d[2] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_1F414:
    /* 0001f414   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001f414u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F416:
    /* 0001f416   2  move.l D1,D0 */
    c->pc = RC_ADDR(0x0001f416u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F418:
    /* 0001f418   4  jsr (000219b2) */
    c->pc = RC_ADDR(0x0001f418u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f41cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000219b2u);
    return;

L_1F41C:
    /* 0001f41c   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x0001f41cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F41E:
    /* 0001f41e   2  move.l (A7)+,D0 */
    c->pc = RC_ADDR(0x0001f41eu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F420:
    /* 0001f420   4  jsr (000219a8) */
    c->pc = RC_ADDR(0x0001f420u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f424u));
    rc_depth++;
    c->pc = RC_ADDR(0x000219a8u);
    return;

L_1F424:
    /* 0001f424   4  jsr (0002199e) */
    c->pc = RC_ADDR(0x0001f424u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f428u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002199eu);
    return;

L_1F428:
    /* 0001f428   4  move.l D0,(18,A2) */
    c->pc = RC_ADDR(0x0001f428u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[2] + 0x18u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F42C:
    /* 0001f42c   4  move.l (14,A5),D0 */
    c->pc = RC_ADDR(0x0001f42cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F430:
    /* 0001f430   4  sub.l (14,A2),D0 */
    c->pc = RC_ADDR(0x0001f430u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[2] + 0x14u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1F434:
    /* 0001f434   4  jsr (000219b2) */
    c->pc = RC_ADDR(0x0001f434u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f438u));
    rc_depth++;
    c->pc = RC_ADDR(0x000219b2u);
    return;

L_1F438:
    /* 0001f438   4  move.l (18,A5),D1 */
    c->pc = RC_ADDR(0x0001f438u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x18u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F43C:
    /* 0001f43c   2  moveq #10,D2 */
    c->pc = RC_ADDR(0x0001f43cu);
    rc_step(c, m, 4);
    c->d[2] = 0x00000010u;
    rc_set_nzvc(c, c->d[2], RC_L);

L_1F43E:
    /* 0001f43e   2  asr.l D2,D1 */
    c->pc = RC_ADDR(0x0001f43eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 0, (c->d[2] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_1F440:
    /* 0001f440   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001f440u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F442:
    /* 0001f442   2  move.l D1,D0 */
    c->pc = RC_ADDR(0x0001f442u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F444:
    /* 0001f444   4  jsr (000219b2) */
    c->pc = RC_ADDR(0x0001f444u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f448u));
    rc_depth++;
    c->pc = RC_ADDR(0x000219b2u);
    return;

L_1F448:
    /* 0001f448   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x0001f448u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F44A:
    /* 0001f44a   2  move.l (A7)+,D0 */
    c->pc = RC_ADDR(0x0001f44au);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F44C:
    /* 0001f44c   4  jsr (000219a8) */
    c->pc = RC_ADDR(0x0001f44cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f450u));
    rc_depth++;
    c->pc = RC_ADDR(0x000219a8u);
    return;

L_1F450:
    /* 0001f450   4  jsr (0002199e) */
    c->pc = RC_ADDR(0x0001f450u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f454u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002199eu);
    return;

L_1F454:
    /* 0001f454   4  move.l D0,(1c,A2) */
    c->pc = RC_ADDR(0x0001f454u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[2] + 0x1cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F458:
    /* 0001f458   4  clr.l (24,A2) */
    c->pc = RC_ADDR(0x0001f458u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[2] + 0x24u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F45C:
    /* 0001f45c   4  clr.l (20,A2) */
    c->pc = RC_ADDR(0x0001f45cu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[2] + 0x20u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F460:
    /* 0001f460   4  bra 0001f8ae */
    c->pc = RC_ADDR(0x0001f460u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001f8aeu);
    return;

}
