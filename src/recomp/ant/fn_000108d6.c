/* fn_000108d6 - 66 byte(s), 22 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000108d6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000108d6u): goto L_108D6;
    case RC_ADDR(0x000108dau): goto L_108DA;
    case RC_ADDR(0x000108deu): goto L_108DE;
    case RC_ADDR(0x000108e0u): goto L_108E0;
    case RC_ADDR(0x000108e2u): goto L_108E2;
    case RC_ADDR(0x000108e4u): goto L_108E4;
    case RC_ADDR(0x000108e6u): goto L_108E6;
    case RC_ADDR(0x000108e8u): goto L_108E8;
    case RC_ADDR(0x000108eau): goto L_108EA;
    case RC_ADDR(0x000108eeu): goto L_108EE;
    case RC_ADDR(0x000108f0u): goto L_108F0;
    case RC_ADDR(0x000108f4u): goto L_108F4;
    case RC_ADDR(0x000108f8u): goto L_108F8;
    case RC_ADDR(0x000108fau): goto L_108FA;
    case RC_ADDR(0x000108feu): goto L_108FE;
    case RC_ADDR(0x00010902u): goto L_10902;
    case RC_ADDR(0x00010906u): goto L_10906;
    case RC_ADDR(0x00010908u): goto L_10908;
    case RC_ADDR(0x0001090cu): goto L_1090C;
    case RC_ADDR(0x00010910u): goto L_10910;
    case RC_ADDR(0x00010912u): goto L_10912;
    case RC_ADDR(0x00010916u): goto L_10916;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_108D6:
    /* 000108d6   4  movem.l { D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x000108d6u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_108DA:
    /* 000108da   4  move.l (0,A0),D0 */
    c->pc = RC_ADDR(0x000108dau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_108DE:
    /* 000108de   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x000108deu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_108E0:
    /* 000108e0   2  beq 000108f0 */
    c->pc = RC_ADDR(0x000108e0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_108F0;

L_108E2:
    /* 000108e2   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x000108e2u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_108E4:
    /* 000108e4   2  beq 00010908 */
    c->pc = RC_ADDR(0x000108e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10908;

L_108E6:
    /* 000108e6   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x000108e6u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_108E8:
    /* 000108e8   2  beq 00010912 */
    c->pc = RC_ADDR(0x000108e8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10912;

L_108EA:
    /* 000108ea   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x000108eau);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_108EE:
    /* 000108ee   2  rts */
    c->pc = RC_ADDR(0x000108eeu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_108F0:
    /* 000108f0   4  move.l A1,(4,A0) */
    c->pc = RC_ADDR(0x000108f0u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_108F4:
    /* 000108f4   4  cmpi.b #80,(A1) */
    c->pc = RC_ADDR(0x000108f4u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[1]);
    rc_cmp(c, RC_B, t0, 0x00000080u);

L_108F8:
    /* 000108f8   2  bne 000108fe */
    c->pc = RC_ADDR(0x000108f8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_108FE;

L_108FA:
    /* 000108fa   4  bsr 00011456 */
    c->pc = RC_ADDR(0x000108fau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000108feu));
    rc_depth++;
    c->pc = RC_ADDR(0x00011456u);
    return;

L_108FE:
    /* 000108fe   4  lea (0001104e),A2 */
    c->pc = RC_ADDR(0x000108feu);
    rc_step(c, m, 8);
    c->a[2] = RC_ADDR(0x0001104eu);

L_10902:
    /* 00010902   4  move.l A2,(0,A0) */
    c->pc = RC_ADDR(0x00010902u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[0] + 0x0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10906:
    /* 00010906   2  bra 000108ea */
    c->pc = RC_ADDR(0x00010906u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_108EA;

L_10908:
    /* 00010908   4  move.l A1,(4,A0) */
    c->pc = RC_ADDR(0x00010908u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1090C:
    /* 0001090c   4  lea (0001153a),A2 */
    c->pc = RC_ADDR(0x0001090cu);
    rc_step(c, m, 8);
    c->a[2] = RC_ADDR(0x0001153au);

L_10910:
    /* 00010910   2  bra 00010902 */
    c->pc = RC_ADDR(0x00010910u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_10902;

L_10912:
    /* 00010912   4  lea (000117b4),A2 */
    c->pc = RC_ADDR(0x00010912u);
    rc_step(c, m, 8);
    c->a[2] = RC_ADDR(0x000117b4u);

L_10916:
    /* 00010916   2  bra 00010902 */
    c->pc = RC_ADDR(0x00010916u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_10902;

}
