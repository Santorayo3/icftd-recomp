/* fn_000210d0 - 98 byte(s), 40 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000210d0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000210d0u): goto L_210D0;
    case RC_ADDR(0x000210d4u): goto L_210D4;
    case RC_ADDR(0x000210d8u): goto L_210D8;
    case RC_ADDR(0x000210dcu): goto L_210DC;
    case RC_ADDR(0x000210e0u): goto L_210E0;
    case RC_ADDR(0x000210e2u): goto L_210E2;
    case RC_ADDR(0x000210e4u): goto L_210E4;
    case RC_ADDR(0x000210e6u): goto L_210E6;
    case RC_ADDR(0x000210e8u): goto L_210E8;
    case RC_ADDR(0x000210eau): goto L_210EA;
    case RC_ADDR(0x000210eeu): goto L_210EE;
    case RC_ADDR(0x000210f0u): goto L_210F0;
    case RC_ADDR(0x000210f2u): goto L_210F2;
    case RC_ADDR(0x000210f4u): goto L_210F4;
    case RC_ADDR(0x000210f6u): goto L_210F6;
    case RC_ADDR(0x000210f8u): goto L_210F8;
    case RC_ADDR(0x000210fcu): goto L_210FC;
    case RC_ADDR(0x000210feu): goto L_210FE;
    case RC_ADDR(0x00021100u): goto L_21100;
    case RC_ADDR(0x00021102u): goto L_21102;
    case RC_ADDR(0x00021104u): goto L_21104;
    case RC_ADDR(0x00021106u): goto L_21106;
    case RC_ADDR(0x00021108u): goto L_21108;
    case RC_ADDR(0x0002110au): goto L_2110A;
    case RC_ADDR(0x0002110cu): goto L_2110C;
    case RC_ADDR(0x0002110eu): goto L_2110E;
    case RC_ADDR(0x00021110u): goto L_21110;
    case RC_ADDR(0x00021114u): goto L_21114;
    case RC_ADDR(0x00021116u): goto L_21116;
    case RC_ADDR(0x00021118u): goto L_21118;
    case RC_ADDR(0x0002111au): goto L_2111A;
    case RC_ADDR(0x0002111cu): goto L_2111C;
    case RC_ADDR(0x0002111eu): goto L_2111E;
    case RC_ADDR(0x00021122u): goto L_21122;
    case RC_ADDR(0x00021124u): goto L_21124;
    case RC_ADDR(0x00021126u): goto L_21126;
    case RC_ADDR(0x00021128u): goto L_21128;
    case RC_ADDR(0x0002112au): goto L_2112A;
    case RC_ADDR(0x0002112eu): goto L_2112E;
    case RC_ADDR(0x00021130u): goto L_21130;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_210D0:
    /* 000210d0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000210d0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_210D4:
    /* 000210d4   4  movem.l { D4 D5 },-(SP) */
    c->pc = RC_ADDR(0x000210d4u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    c->a[7] = t3;

L_210D8:
    /* 000210d8   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x000210d8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_210DC:
    /* 000210dc   4  movea.l (c,A5),A3 */
    c->pc = RC_ADDR(0x000210dcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[3] = t0;

L_210E0:
    /* 000210e0   2  tst.b (A2) */
    c->pc = RC_ADDR(0x000210e0u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[2]);
    rc_set_nzvc(c, t0, RC_B);

L_210E2:
    /* 000210e2   2  beq 0002110a */
    c->pc = RC_ADDR(0x000210e2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2110A;

L_210E4:
    /* 000210e4   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000210e4u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_210E6:
    /* 000210e6   2  move.b (A2),D0 */
    c->pc = RC_ADDR(0x000210e6u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[2]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_210E8:
    /* 000210e8   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000210e8u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_210EA:
    /* 000210ea   4  jsr (0002295a) */
    c->pc = RC_ADDR(0x000210eau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000210eeu));
    rc_depth++;
    c->pc = RC_ADDR(0x0002295au);
    return;

L_210EE:
    /* 000210ee   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000210eeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_210F0:
    /* 000210f0   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000210f0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_210F2:
    /* 000210f2   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000210f2u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_210F4:
    /* 000210f4   2  move.b (A3),D0 */
    c->pc = RC_ADDR(0x000210f4u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[3]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_210F6:
    /* 000210f6   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000210f6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_210F8:
    /* 000210f8   4  jsr (0002295a) */
    c->pc = RC_ADDR(0x000210f8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000210fcu));
    rc_depth++;
    c->pc = RC_ADDR(0x0002295au);
    return;

L_210FC:
    /* 000210fc   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000210fcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_210FE:
    /* 000210fe   2  move.w (A7)+,D1 */
    c->pc = RC_ADDR(0x000210feu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    c->a[7] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21100:
    /* 00021100   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00021100u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_21102:
    /* 00021102   2  bne 0002110a */
    c->pc = RC_ADDR(0x00021102u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2110A;

L_21104:
    /* 00021104   2  addq.l #1,A2 */
    c->pc = RC_ADDR(0x00021104u);
    rc_step(c, m, 8);
    c->a[2] += 0x00000001u;

L_21106:
    /* 00021106   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00021106u);
    rc_step(c, m, 8);
    c->a[3] += 0x00000001u;

L_21108:
    /* 00021108   2  bra 000210e0 */
    c->pc = RC_ADDR(0x00021108u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_210E0;

L_2110A:
    /* 0002110a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0002110au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2110C:
    /* 0002110c   2  move.b (A2),D0 */
    c->pc = RC_ADDR(0x0002110cu);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[2]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2110E:
    /* 0002110e   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0002110eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_21110:
    /* 00021110   4  jsr (0002295a) */
    c->pc = RC_ADDR(0x00021110u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021114u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002295au);
    return;

L_21114:
    /* 00021114   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00021114u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_21116:
    /* 00021116   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00021116u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_21118:
    /* 00021118   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021118u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2111A:
    /* 0002111a   2  move.b (A3),D0 */
    c->pc = RC_ADDR(0x0002111au);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[3]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2111C:
    /* 0002111c   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0002111cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2111E:
    /* 0002111e   4  jsr (0002295a) */
    c->pc = RC_ADDR(0x0002111eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021122u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002295au);
    return;

L_21122:
    /* 00021122   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00021122u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_21124:
    /* 00021124   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x00021124u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21126:
    /* 00021126   2  move.w (A7)+,D0 */
    c->pc = RC_ADDR(0x00021126u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    c->a[7] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21128:
    /* 00021128   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x00021128u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_2112A:
    /* 0002112a   4  movem.l (SP)+,{ A2 A3 } */
    c->pc = RC_ADDR(0x0002112au);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_2112E:
    /* 0002112e   2  unlk A5 */
    c->pc = RC_ADDR(0x0002112eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_21130:
    /* 00021130   2  rts */
    c->pc = RC_ADDR(0x00021130u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
