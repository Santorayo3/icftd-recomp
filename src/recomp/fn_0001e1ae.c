/* fn_0001e1ae - 130 byte(s), 39 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001e1ae(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001e1aeu): goto L_1E1AE;
    case RC_ADDR(0x0001e1b0u): goto L_1E1B0;
    case RC_ADDR(0x0001e1b4u): goto L_1E1B4;
    case RC_ADDR(0x0001e1b6u): goto L_1E1B6;
    case RC_ADDR(0x0001e1b8u): goto L_1E1B8;
    case RC_ADDR(0x0001e1bcu): goto L_1E1BC;
    case RC_ADDR(0x0001e1beu): goto L_1E1BE;
    case RC_ADDR(0x0001e1c2u): goto L_1E1C2;
    case RC_ADDR(0x0001e1c4u): goto L_1E1C4;
    case RC_ADDR(0x0001e1c6u): goto L_1E1C6;
    case RC_ADDR(0x0001e1ccu): goto L_1E1CC;
    case RC_ADDR(0x0001e1ceu): goto L_1E1CE;
    case RC_ADDR(0x0001e1d4u): goto L_1E1D4;
    case RC_ADDR(0x0001e1d6u): goto L_1E1D6;
    case RC_ADDR(0x0001e1d8u): goto L_1E1D8;
    case RC_ADDR(0x0001e1dau): goto L_1E1DA;
    case RC_ADDR(0x0001e1dcu): goto L_1E1DC;
    case RC_ADDR(0x0001e1deu): goto L_1E1DE;
    case RC_ADDR(0x0001e1e0u): goto L_1E1E0;
    case RC_ADDR(0x0001e1e4u): goto L_1E1E4;
    case RC_ADDR(0x0001e1e6u): goto L_1E1E6;
    case RC_ADDR(0x0001e1eau): goto L_1E1EA;
    case RC_ADDR(0x0001e1eeu): goto L_1E1EE;
    case RC_ADDR(0x0001e1f2u): goto L_1E1F2;
    case RC_ADDR(0x0001e1f6u): goto L_1E1F6;
    case RC_ADDR(0x0001e1fau): goto L_1E1FA;
    case RC_ADDR(0x0001e1feu): goto L_1E1FE;
    case RC_ADDR(0x0001e202u): goto L_1E202;
    case RC_ADDR(0x0001e206u): goto L_1E206;
    case RC_ADDR(0x0001e208u): goto L_1E208;
    case RC_ADDR(0x0001e20au): goto L_1E20A;
    case RC_ADDR(0x0001e210u): goto L_1E210;
    case RC_ADDR(0x0001e214u): goto L_1E214;
    case RC_ADDR(0x0001e218u): goto L_1E218;
    case RC_ADDR(0x0001e21eu): goto L_1E21E;
    case RC_ADDR(0x0001e222u): goto L_1E222;
    case RC_ADDR(0x0001e224u): goto L_1E224;
    case RC_ADDR(0x0001e228u): goto L_1E228;
    case RC_ADDR(0x0001e22eu): goto L_1E22E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E1AE:
    /* 0001e1ae   2  move.l A4,-(A7) */
    c->pc = RC_ADDR(0x0001e1aeu);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E1B0:
    /* 0001e1b0   4  jsr (0002098a) */
    c->pc = RC_ADDR(0x0001e1b0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e1b4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002098au);
    return;

L_1E1B4:
    /* 0001e1b4   2  move.l A0,D0 */
    c->pc = RC_ADDR(0x0001e1b4u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E1B6:
    /* 0001e1b6   2  beq 0001e1dc */
    c->pc = RC_ADDR(0x0001e1b6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E1DC;

L_1E1B8:
    /* 0001e1b8   4  tst.w (ffffcb2a,A4) */
    c->pc = RC_ADDR(0x0001e1b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34d6u));
    rc_set_nzvc(c, t0, RC_W);

L_1E1BC:
    /* 0001e1bc   2  beq 0001e1dc */
    c->pc = RC_ADDR(0x0001e1bcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E1DC;

L_1E1BE:
    /* 0001e1be   4  tst.w (ffffcb2c,A4) */
    c->pc = RC_ADDR(0x0001e1beu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34d4u));
    rc_set_nzvc(c, t0, RC_W);

L_1E1C2:
    /* 0001e1c2   2  bne 0001e1c6 */
    c->pc = RC_ADDR(0x0001e1c2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1E1C6;

L_1E1C4:
    /* 0001e1c4   2  clr.l D0 */
    c->pc = RC_ADDR(0x0001e1c4u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E1C6:
    /* 0001e1c6   6  cmpi.b #2,(4,A0) */
    c->pc = RC_ADDR(0x0001e1c6u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[0] + 0x4u));
    rc_cmp(c, RC_B, t0, 0x00000002u);

L_1E1CC:
    /* 0001e1cc   2  beq 0001e1e0 */
    c->pc = RC_ADDR(0x0001e1ccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E1E0;

L_1E1CE:
    /* 0001e1ce   6  cmpi.b #1,(4,A0) */
    c->pc = RC_ADDR(0x0001e1ceu);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[0] + 0x4u));
    rc_cmp(c, RC_B, t0, 0x00000001u);

L_1E1D4:
    /* 0001e1d4   2  bra 0001e1dc */
    c->pc = RC_ADDR(0x0001e1d4u);
    rc_step(c, m, 10);
    goto L_1E1DC;

L_1E1D6:
    /* 0001e1d6   2  movea.l (A0),A0 */
    c->pc = RC_ADDR(0x0001e1d6u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[0] = t0;

L_1E1D8:
    /* 0001e1d8   2  move.l A0,D1 */
    c->pc = RC_ADDR(0x0001e1d8u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E1DA:
    /* 0001e1da   2  bne 0001e1c6 */
    c->pc = RC_ADDR(0x0001e1dau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_1E1C6; }

L_1E1DC:
    /* 0001e1dc   2  movea.l (A7)+,A4 */
    c->pc = RC_ADDR(0x0001e1dcu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[4] = t0;

L_1E1DE:
    /* 0001e1de   2  rts */
    c->pc = RC_ADDR(0x0001e1deu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1E1E0:
    /* 0001e1e0   4  tst.w (ffffcb2c,A4) */
    c->pc = RC_ADDR(0x0001e1e0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34d4u));
    rc_set_nzvc(c, t0, RC_W);

L_1E1E4:
    /* 0001e1e4   2  bne 0001e1d6 */
    c->pc = RC_ADDR(0x0001e1e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_1E1D6; }

L_1E1E6:
    /* 0001e1e6   4  move.w (a,A0),D1 */
    c->pc = RC_ADDR(0x0001e1e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E1EA:
    /* 0001e1ea   4  add.w D1,(2a0e,A4) */
    c->pc = RC_ADDR(0x0001e1eau);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x2a0eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1E1EE:
    /* 0001e1ee   4  move.w (c,A0),D1 */
    c->pc = RC_ADDR(0x0001e1eeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E1F2:
    /* 0001e1f2   4  add.w D1,(2a10,A4) */
    c->pc = RC_ADDR(0x0001e1f2u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x2a10u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1E1F6:
    /* 0001e1f6   4  move.w (6,A0),D1 */
    c->pc = RC_ADDR(0x0001e1f6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E1FA:
    /* 0001e1fa   4  and.w #7f,D1 */
    c->pc = RC_ADDR(0x0001e1fau);
    rc_step(c, m, 10);
    t0 = 0x0000007fu;
    t2 = t0 & rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 1, RC_W, t2);

L_1E1FE:
    /* 0001e1fe   4  sub.w #68,D1 */
    c->pc = RC_ADDR(0x0001e1feu);
    rc_step(c, m, 10);
    t0 = 0x00000068u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1E202:
    /* 0001e202   4  cmp.w #1,D1 */
    c->pc = RC_ADDR(0x0001e202u);
    rc_step(c, m, 8);
    t0 = 0x00000001u;
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1E206:
    /* 0001e206   2  bhi 0001e1d6 */
    c->pc = RC_ADDR(0x0001e206u);
    rc_step(c, m, 10);
    if (rc_cond(c, 2)) { rc_tick(); goto L_1E1D6; }

L_1E208:
    /* 0001e208   2  asl.w #1,D1 */
    c->pc = RC_ADDR(0x0001e208u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_1E20A:
    /* 0001e20a   6  btst #7,(7,A0) */
    c->pc = RC_ADDR(0x0001e20au);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0x7u);
    t4 = 0x00000007u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1E210:
    /* 0001e210   4  lea (ffffcb34,A4),A1 */
    c->pc = RC_ADDR(0x0001e210u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x34ccu);

L_1E214:
    /* 0001e214   4  seq (0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001e214u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr8(c, m, (c->a[1] + 0x0u + t4), (rc_cond(c, 7) ? 0xFFu : 0u));

L_1E218:
    /* 0001e218   6  andi.b #1,(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001e218u);
    rc_step(c, m, 22);
    t4 = rc_ext(c->d[1], RC_W);
    t3 = (c->a[1] + 0x0u + t4);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 & 0x00000001u;
    rc_wr8(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_B);

L_1E21E:
    /* 0001e21e   4  lea (ffffcb38,A4),A1 */
    c->pc = RC_ADDR(0x0001e21eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x34c8u);

L_1E222:
    /* 0001e222   2  beq 0001e228 */
    c->pc = RC_ADDR(0x0001e222u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E228;

L_1E224:
    /* 0001e224   4  lea (ffffcb3c,A4),A1 */
    c->pc = RC_ADDR(0x0001e224u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x34c4u);

L_1E228:
    /* 0001e228   6  move.w #1,(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001e228u);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E22E:
    /* 0001e22e   2  bra 0001e1d6 */
    c->pc = RC_ADDR(0x0001e22eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1E1D6;

}
