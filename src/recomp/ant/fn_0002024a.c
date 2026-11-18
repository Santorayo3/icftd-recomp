/* fn_0002024a - 138 byte(s), 42 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002024a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0002024au): goto L_2024A;
    case RC_ADDR(0x0002024cu): goto L_2024C;
    case RC_ADDR(0x00020250u): goto L_20250;
    case RC_ADDR(0x00020252u): goto L_20252;
    case RC_ADDR(0x00020254u): goto L_20254;
    case RC_ADDR(0x00020258u): goto L_20258;
    case RC_ADDR(0x0002025au): goto L_2025A;
    case RC_ADDR(0x0002025eu): goto L_2025E;
    case RC_ADDR(0x00020260u): goto L_20260;
    case RC_ADDR(0x00020262u): goto L_20262;
    case RC_ADDR(0x00020268u): goto L_20268;
    case RC_ADDR(0x0002026au): goto L_2026A;
    case RC_ADDR(0x00020270u): goto L_20270;
    case RC_ADDR(0x00020272u): goto L_20272;
    case RC_ADDR(0x00020274u): goto L_20274;
    case RC_ADDR(0x00020276u): goto L_20276;
    case RC_ADDR(0x00020278u): goto L_20278;
    case RC_ADDR(0x0002027au): goto L_2027A;
    case RC_ADDR(0x0002027cu): goto L_2027C;
    case RC_ADDR(0x0002027eu): goto L_2027E;
    case RC_ADDR(0x00020282u): goto L_20282;
    case RC_ADDR(0x00020284u): goto L_20284;
    case RC_ADDR(0x00020288u): goto L_20288;
    case RC_ADDR(0x0002028cu): goto L_2028C;
    case RC_ADDR(0x00020290u): goto L_20290;
    case RC_ADDR(0x00020294u): goto L_20294;
    case RC_ADDR(0x00020298u): goto L_20298;
    case RC_ADDR(0x0002029cu): goto L_2029C;
    case RC_ADDR(0x000202a0u): goto L_202A0;
    case RC_ADDR(0x000202a4u): goto L_202A4;
    case RC_ADDR(0x000202a6u): goto L_202A6;
    case RC_ADDR(0x000202a8u): goto L_202A8;
    case RC_ADDR(0x000202aeu): goto L_202AE;
    case RC_ADDR(0x000202b2u): goto L_202B2;
    case RC_ADDR(0x000202b6u): goto L_202B6;
    case RC_ADDR(0x000202bcu): goto L_202BC;
    case RC_ADDR(0x000202c0u): goto L_202C0;
    case RC_ADDR(0x000202c2u): goto L_202C2;
    case RC_ADDR(0x000202c6u): goto L_202C6;
    case RC_ADDR(0x000202ccu): goto L_202CC;
    case RC_ADDR(0x000202ceu): goto L_202CE;
    case RC_ADDR(0x000202d2u): goto L_202D2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2024A:
    /* 0002024a   2  move.l A4,-(A7) */
    c->pc = RC_ADDR(0x0002024au);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2024C:
    /* 0002024c   4  jsr (00022a2c) */
    c->pc = RC_ADDR(0x0002024cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020250u));
    rc_depth++;
    c->pc = RC_ADDR(0x00022a2cu);
    return;

L_20250:
    /* 00020250   2  move.l A0,D0 */
    c->pc = RC_ADDR(0x00020250u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20252:
    /* 00020252   2  beq 0002027a */
    c->pc = RC_ADDR(0x00020252u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2027A;

L_20254:
    /* 00020254   4  tst.w (ffffd2ae,A4) */
    c->pc = RC_ADDR(0x00020254u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d52u));
    rc_set_nzvc(c, t0, RC_W);

L_20258:
    /* 00020258   2  beq 0002027a */
    c->pc = RC_ADDR(0x00020258u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2027A;

L_2025A:
    /* 0002025a   4  tst.w (ffffd2b0,A4) */
    c->pc = RC_ADDR(0x0002025au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d50u));
    rc_set_nzvc(c, t0, RC_W);

L_2025E:
    /* 0002025e   2  bne 00020262 */
    c->pc = RC_ADDR(0x0002025eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_20262;

L_20260:
    /* 00020260   2  clr.l D0 */
    c->pc = RC_ADDR(0x00020260u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20262:
    /* 00020262   6  cmpi.b #2,(4,A0) */
    c->pc = RC_ADDR(0x00020262u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[0] + 0x4u));
    rc_cmp(c, RC_B, t0, 0x00000002u);

L_20268:
    /* 00020268   2  beq 0002027e */
    c->pc = RC_ADDR(0x00020268u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2027E;

L_2026A:
    /* 0002026a   6  cmpi.b #1,(4,A0) */
    c->pc = RC_ADDR(0x0002026au);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[0] + 0x4u));
    rc_cmp(c, RC_B, t0, 0x00000001u);

L_20270:
    /* 00020270   2  beq 000202ce */
    c->pc = RC_ADDR(0x00020270u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_202CE;

L_20272:
    /* 00020272   2  bra 0002027a */
    c->pc = RC_ADDR(0x00020272u);
    rc_step(c, m, 10);
    goto L_2027A;

L_20274:
    /* 00020274   2  movea.l (A0),A0 */
    c->pc = RC_ADDR(0x00020274u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[0] = t0;

L_20276:
    /* 00020276   2  move.l A0,D1 */
    c->pc = RC_ADDR(0x00020276u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20278:
    /* 00020278   2  bne 00020262 */
    c->pc = RC_ADDR(0x00020278u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_20262; }

L_2027A:
    /* 0002027a   2  movea.l (A7)+,A4 */
    c->pc = RC_ADDR(0x0002027au);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[4] = t0;

L_2027C:
    /* 0002027c   2  rts */
    c->pc = RC_ADDR(0x0002027cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_2027E:
    /* 0002027e   4  tst.w (ffffd2b0,A4) */
    c->pc = RC_ADDR(0x0002027eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d50u));
    rc_set_nzvc(c, t0, RC_W);

L_20282:
    /* 00020282   2  bne 00020274 */
    c->pc = RC_ADDR(0x00020282u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_20274; }

L_20284:
    /* 00020284   4  move.w (a,A0),D1 */
    c->pc = RC_ADDR(0x00020284u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20288:
    /* 00020288   4  add.w D1,(343e,A4) */
    c->pc = RC_ADDR(0x00020288u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x343eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_2028C:
    /* 0002028c   4  move.w (c,A0),D1 */
    c->pc = RC_ADDR(0x0002028cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20290:
    /* 00020290   4  add.w D1,(3440,A4) */
    c->pc = RC_ADDR(0x00020290u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x3440u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_20294:
    /* 00020294   4  move.w (6,A0),D1 */
    c->pc = RC_ADDR(0x00020294u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20298:
    /* 00020298   4  and.w #7f,D1 */
    c->pc = RC_ADDR(0x00020298u);
    rc_step(c, m, 10);
    t0 = 0x0000007fu;
    t2 = t0 & rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 1, RC_W, t2);

L_2029C:
    /* 0002029c   4  sub.w #68,D1 */
    c->pc = RC_ADDR(0x0002029cu);
    rc_step(c, m, 10);
    t0 = 0x00000068u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_202A0:
    /* 000202a0   4  cmp.w #1,D1 */
    c->pc = RC_ADDR(0x000202a0u);
    rc_step(c, m, 8);
    t0 = 0x00000001u;
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_202A4:
    /* 000202a4   2  bhi 00020274 */
    c->pc = RC_ADDR(0x000202a4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 2)) { rc_tick(); goto L_20274; }

L_202A6:
    /* 000202a6   2  asl.w #1,D1 */
    c->pc = RC_ADDR(0x000202a6u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_202A8:
    /* 000202a8   6  btst #7,(7,A0) */
    c->pc = RC_ADDR(0x000202a8u);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0x7u);
    t4 = 0x00000007u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_202AE:
    /* 000202ae   4  lea (ffffd2b8,A4),A1 */
    c->pc = RC_ADDR(0x000202aeu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x2d48u);

L_202B2:
    /* 000202b2   4  seq (0,A1,D1.w) */
    c->pc = RC_ADDR(0x000202b2u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr8(c, m, (c->a[1] + 0x0u + t4), (rc_cond(c, 7) ? 0xFFu : 0u));

L_202B6:
    /* 000202b6   6  andi.b #1,(0,A1,D1.w) */
    c->pc = RC_ADDR(0x000202b6u);
    rc_step(c, m, 22);
    t4 = rc_ext(c->d[1], RC_W);
    t3 = (c->a[1] + 0x0u + t4);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 & 0x00000001u;
    rc_wr8(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_B);

L_202BC:
    /* 000202bc   4  lea (ffffd2bc,A4),A1 */
    c->pc = RC_ADDR(0x000202bcu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x2d44u);

L_202C0:
    /* 000202c0   2  beq 000202c6 */
    c->pc = RC_ADDR(0x000202c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_202C6;

L_202C2:
    /* 000202c2   4  lea (ffffd2c0,A4),A1 */
    c->pc = RC_ADDR(0x000202c2u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x2d40u);

L_202C6:
    /* 000202c6   6  move.w #1,(0,A1,D1.w) */
    c->pc = RC_ADDR(0x000202c6u);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_202CC:
    /* 000202cc   2  bra 00020274 */
    c->pc = RC_ADDR(0x000202ccu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_20274;

L_202CE:
    /* 000202ce   4  tst.w (ffffd2b0,A4) */
    c->pc = RC_ADDR(0x000202ceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d50u));
    rc_set_nzvc(c, t0, RC_W);

L_202D2:
    /* 000202d2   2  bra 00020274 */
    c->pc = RC_ADDR(0x000202d2u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_20274;

}
