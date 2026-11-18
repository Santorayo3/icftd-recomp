/* fn_00014db0 - 170 byte(s), 48 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00014db0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00014db0u): goto L_14DB0;
    case RC_ADDR(0x00014db4u): goto L_14DB4;
    case RC_ADDR(0x00014dbau): goto L_14DBA;
    case RC_ADDR(0x00014dbeu): goto L_14DBE;
    case RC_ADDR(0x00014dc2u): goto L_14DC2;
    case RC_ADDR(0x00014dc4u): goto L_14DC4;
    case RC_ADDR(0x00014dc8u): goto L_14DC8;
    case RC_ADDR(0x00014dccu): goto L_14DCC;
    case RC_ADDR(0x00014dd0u): goto L_14DD0;
    case RC_ADDR(0x00014dd4u): goto L_14DD4;
    case RC_ADDR(0x00014dd8u): goto L_14DD8;
    case RC_ADDR(0x00014ddau): goto L_14DDA;
    case RC_ADDR(0x00014ddeu): goto L_14DDE;
    case RC_ADDR(0x00014de0u): goto L_14DE0;
    case RC_ADDR(0x00014de2u): goto L_14DE2;
    case RC_ADDR(0x00014de6u): goto L_14DE6;
    case RC_ADDR(0x00014deau): goto L_14DEA;
    case RC_ADDR(0x00014deeu): goto L_14DEE;
    case RC_ADDR(0x00014df2u): goto L_14DF2;
    case RC_ADDR(0x00014df6u): goto L_14DF6;
    case RC_ADDR(0x00014df8u): goto L_14DF8;
    case RC_ADDR(0x00014dfcu): goto L_14DFC;
    case RC_ADDR(0x00014dfeu): goto L_14DFE;
    case RC_ADDR(0x00014e00u): goto L_14E00;
    case RC_ADDR(0x00014e02u): goto L_14E02;
    case RC_ADDR(0x00014e06u): goto L_14E06;
    case RC_ADDR(0x00014e0au): goto L_14E0A;
    case RC_ADDR(0x00014e0eu): goto L_14E0E;
    case RC_ADDR(0x00014e10u): goto L_14E10;
    case RC_ADDR(0x00014e16u): goto L_14E16;
    case RC_ADDR(0x00014e1cu): goto L_14E1C;
    case RC_ADDR(0x00014e20u): goto L_14E20;
    case RC_ADDR(0x00014e24u): goto L_14E24;
    case RC_ADDR(0x00014e28u): goto L_14E28;
    case RC_ADDR(0x00014e2au): goto L_14E2A;
    case RC_ADDR(0x00014e2eu): goto L_14E2E;
    case RC_ADDR(0x00014e30u): goto L_14E30;
    case RC_ADDR(0x00014e34u): goto L_14E34;
    case RC_ADDR(0x00014e38u): goto L_14E38;
    case RC_ADDR(0x00014e3cu): goto L_14E3C;
    case RC_ADDR(0x00014e40u): goto L_14E40;
    case RC_ADDR(0x00014e44u): goto L_14E44;
    case RC_ADDR(0x00014e48u): goto L_14E48;
    case RC_ADDR(0x00014e4cu): goto L_14E4C;
    case RC_ADDR(0x00014e4eu): goto L_14E4E;
    case RC_ADDR(0x00014e52u): goto L_14E52;
    case RC_ADDR(0x00014e56u): goto L_14E56;
    case RC_ADDR(0x00014e58u): goto L_14E58;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_14DB0:
    /* 00014db0   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x00014db0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_14DB4:
    /* 00014db4   6  move.w #7d00,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00014db4u);
    rc_step(c, m, 16);
    t0 = 0x00007d00u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14DBA:
    /* 00014dba   4  clr.w (6bc,A4) */
    c->pc = RC_ADDR(0x00014dbau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x6bcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14DBE:
    /* 00014dbe   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00014dbeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14DC2:
    /* 00014dc2   2  bra 00014e20 */
    c->pc = RC_ADDR(0x00014dc2u);
    rc_step(c, m, 10);
    goto L_14E20;

L_14DC4:
    /* 00014dc4   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014dc4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14DC8:
    /* 00014dc8   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014dc8u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_14DCC:
    /* 00014dcc   4  lea (fffffb24,A4),A0 */
    c->pc = RC_ADDR(0x00014dccu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4dcu);

L_14DD0:
    /* 00014dd0   4  move.w (6ee,A4),D1 */
    c->pc = RC_ADDR(0x00014dd0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6eeu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14DD4:
    /* 00014dd4   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00014dd4u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_14DD8:
    /* 00014dd8   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x00014dd8u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14DDA:
    /* 00014dda   4  jsr (ffff818e,A4) */
    c->pc = RC_ADDR(0x00014ddau);
    rc_step(c, m, 18);
    /* vector 66 */
    rc_push32(c, m, RC_ADDR(0x00014ddeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c84u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013988u);
    return;

L_14DDE:
    /* 00014dde   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00014ddeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_14DE0:
    /* 00014de0   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00014de0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14DE2:
    /* 00014de2   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014de2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14DE6:
    /* 00014de6   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014de6u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_14DEA:
    /* 00014dea   4  lea (fffffb26,A4),A0 */
    c->pc = RC_ADDR(0x00014deau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4dau);

L_14DEE:
    /* 00014dee   4  move.w (6f0,A4),D1 */
    c->pc = RC_ADDR(0x00014deeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6f0u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14DF2:
    /* 00014df2   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00014df2u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_14DF6:
    /* 00014df6   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x00014df6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14DF8:
    /* 00014df8   4  jsr (ffff818e,A4) */
    c->pc = RC_ADDR(0x00014df8u);
    rc_step(c, m, 18);
    /* vector 66 */
    rc_push32(c, m, RC_ADDR(0x00014dfcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c84u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013988u);
    return;

L_14DFC:
    /* 00014dfc   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00014dfcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_14DFE:
    /* 00014dfe   2  move.w (A7)+,D1 */
    c->pc = RC_ADDR(0x00014dfeu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    c->a[7] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E00:
    /* 00014e00   2  add.w D0,D1 */
    c->pc = RC_ADDR(0x00014e00u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_14E02:
    /* 00014e02   4  move.w D1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00014e02u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E06:
    /* 00014e06   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00014e06u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E0A:
    /* 00014e0a   4  cmp.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00014e0au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14E0E:
    /* 00014e0e   2  bge 00014e1c */
    c->pc = RC_ADDR(0x00014e0eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_14E1C;

L_14E10:
    /* 00014e10   6  move.w (fffffffc,A5),(fffffffa,A5) */
    c->pc = RC_ADDR(0x00014e10u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E16:
    /* 00014e16   6  move.w (fffffffe,A5),(6c0,A4) */
    c->pc = RC_ADDR(0x00014e16u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_wr16(c, m, (c->a[4] + 0x6c0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E1C:
    /* 00014e1c   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00014e1cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_14E20:
    /* 00014e20   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014e20u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E24:
    /* 00014e24   4  cmp.w (6b8,A4),D0 */
    c->pc = RC_ADDR(0x00014e24u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6b8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14E28:
    /* 00014e28   2  blt 00014dc4 */
    c->pc = RC_ADDR(0x00014e28u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_14DC4; }

L_14E2A:
    /* 00014e2a   4  move.w (6c0,A4),D0 */
    c->pc = RC_ADDR(0x00014e2au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6c0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E2E:
    /* 00014e2e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014e2eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14E30:
    /* 00014e30   4  divs.w #a,D0 */
    c->pc = RC_ADDR(0x00014e30u);
    rc_step(c, m, 162);
    t0 = 0x0000000au;
    rc_divs(c, m, 0, t0);

L_14E34:
    /* 00014e34   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x00014e34u);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_14E38:
    /* 00014e38   4  move.w D0,(6bc,A4) */
    c->pc = RC_ADDR(0x00014e38u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x6bcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E3C:
    /* 00014e3c   4  move.w (6bc,A4),D0 */
    c->pc = RC_ADDR(0x00014e3cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6bcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E40:
    /* 00014e40   4  add.w #a,D0 */
    c->pc = RC_ADDR(0x00014e40u);
    rc_step(c, m, 10);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14E44:
    /* 00014e44   4  move.w D0,(6be,A4) */
    c->pc = RC_ADDR(0x00014e44u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x6beu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E48:
    /* 00014e48   4  move.w (6bc,A4),D0 */
    c->pc = RC_ADDR(0x00014e48u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6bcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E4C:
    /* 00014e4c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014e4cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14E4E:
    /* 00014e4e   4  divs.w #a,D0 */
    c->pc = RC_ADDR(0x00014e4eu);
    rc_step(c, m, 162);
    t0 = 0x0000000au;
    rc_divs(c, m, 0, t0);

L_14E52:
    /* 00014e52   4  move.w D0,(6c2,A4) */
    c->pc = RC_ADDR(0x00014e52u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x6c2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E56:
    /* 00014e56   2  unlk A5 */
    c->pc = RC_ADDR(0x00014e56u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_14E58:
    /* 00014e58   2  rts */
    c->pc = RC_ADDR(0x00014e58u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
