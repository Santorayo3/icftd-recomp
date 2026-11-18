/* fn_000132de - 84 byte(s), 21 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000132de(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000132deu): goto L_132DE;
    case RC_ADDR(0x000132e2u): goto L_132E2;
    case RC_ADDR(0x000132e6u): goto L_132E6;
    case RC_ADDR(0x000132eau): goto L_132EA;
    case RC_ADDR(0x000132f0u): goto L_132F0;
    case RC_ADDR(0x000132f4u): goto L_132F4;
    case RC_ADDR(0x000132fau): goto L_132FA;
    case RC_ADDR(0x00013300u): goto L_13300;
    case RC_ADDR(0x00013302u): goto L_13302;
    case RC_ADDR(0x00013304u): goto L_13304;
    case RC_ADDR(0x00013308u): goto L_13308;
    case RC_ADDR(0x0001330au): goto L_1330A;
    case RC_ADDR(0x00013310u): goto L_13310;
    case RC_ADDR(0x00013316u): goto L_13316;
    case RC_ADDR(0x0001331eu): goto L_1331E;
    case RC_ADDR(0x00013320u): goto L_13320;
    case RC_ADDR(0x00013324u): goto L_13324;
    case RC_ADDR(0x00013326u): goto L_13326;
    case RC_ADDR(0x00013328u): goto L_13328;
    case RC_ADDR(0x0001332cu): goto L_1332C;
    case RC_ADDR(0x00013330u): goto L_13330;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_132DE:
    /* 000132de   4  movem.l { A4 A5 },-(SP) */
    c->pc = RC_ADDR(0x000132deu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    c->a[7] = t3;

L_132E2:
    /* 000132e2   4  bsr 00013258 */
    c->pc = RC_ADDR(0x000132e2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000132e6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00013258u);
    return;

L_132E6:
    /* 000132e6   4  movea.l (fffffaa0,A4),A0 */
    c->pc = RC_ADDR(0x000132e6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x560u));
    c->a[0] = t0;

L_132EA:
    /* 000132ea   6  adda.l #2f8,A0 */
    c->pc = RC_ADDR(0x000132eau);
    rc_step(c, m, 16);
    t0 = 0x000002f8u;
    c->a[0] += t0;

L_132F0:
    /* 000132f0   4  move.w (17e4,A4),D6 */
    c->pc = RC_ADDR(0x000132f0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17e4u));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_132F4:
    /* 000132f4   6  adda.l #26,A2 */
    c->pc = RC_ADDR(0x000132f4u);
    rc_step(c, m, 16);
    t0 = 0x00000026u;
    c->a[2] += t0;

L_132FA:
    /* 000132fa   6  move.l A2,(00dff054).l */
    c->pc = RC_ADDR(0x000132fau);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_13300:
    /* 00013300   2  clr.l D0 */
    c->pc = RC_ADDR(0x00013300u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_13302:
    /* 00013302   2  move.w (A0)+,D0 */
    c->pc = RC_ADDR(0x00013302u);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13304:
    /* 00013304   4  move.w (0,A5,D0.w),D0 */
    c->pc = RC_ADDR(0x00013304u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[5] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13308:
    /* 00013308   2  add.l A1,D0 */
    c->pc = RC_ADDR(0x00013308u);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1330A:
    /* 0001330a   6  move.l D0,(00dff050).l */
    c->pc = RC_ADDR(0x0001330au);
    rc_step(c, m, 20);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_13310:
    /* 00013310   6  move.w D5,(00dff058).l */
    c->pc = RC_ADDR(0x00013310u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 5, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13316:
    /* 00013316   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x00013316u);
    rc_step(c, m, 20);
    t3 = 0x00dff002u;
    t4 = 0x00000006u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1331E:
    /* 0001331e   2  bne 00013316 */
    c->pc = RC_ADDR(0x0001331eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_13316; }

L_13320:
    /* 00013320   4  dbf D6,00013300 */
    c->pc = RC_ADDR(0x00013320u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 6, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 6, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_13300; }
    }

L_13324:
    /* 00013324   2  movea.l (A3)+,A1 */
    c->pc = RC_ADDR(0x00013324u);
    rc_step(c, m, 12);
    t3 = c->a[3];
    c->a[3] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;

L_13326:
    /* 00013326   2  movea.l (A6)+,A2 */
    c->pc = RC_ADDR(0x00013326u);
    rc_step(c, m, 12);
    t3 = c->a[6];
    c->a[6] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_13328:
    /* 00013328   4  dbf D2,000132e6 */
    c->pc = RC_ADDR(0x00013328u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 2, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 2, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_132E6; }
    }

L_1332C:
    /* 0001332c   4  movem.l (SP)+,{ D2 D3 } */
    c->pc = RC_ADDR(0x0001332cu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_13330:
    /* 00013330   2  rts */
    c->pc = RC_ADDR(0x00013330u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
