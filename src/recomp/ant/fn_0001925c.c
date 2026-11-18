/* fn_0001925c - 116 byte(s), 32 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001925c(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001925cu): goto L_1925C;
    case RC_ADDR(0x00019260u): goto L_19260;
    case RC_ADDR(0x00019264u): goto L_19264;
    case RC_ADDR(0x00019268u): goto L_19268;
    case RC_ADDR(0x0001926cu): goto L_1926C;
    case RC_ADDR(0x00019270u): goto L_19270;
    case RC_ADDR(0x00019274u): goto L_19274;
    case RC_ADDR(0x00019278u): goto L_19278;
    case RC_ADDR(0x0001927eu): goto L_1927E;
    case RC_ADDR(0x00019284u): goto L_19284;
    case RC_ADDR(0x00019288u): goto L_19288;
    case RC_ADDR(0x0001928cu): goto L_1928C;
    case RC_ADDR(0x00019292u): goto L_19292;
    case RC_ADDR(0x00019296u): goto L_19296;
    case RC_ADDR(0x0001929au): goto L_1929A;
    case RC_ADDR(0x0001929cu): goto L_1929C;
    case RC_ADDR(0x0001929eu): goto L_1929E;
    case RC_ADDR(0x000192a0u): goto L_192A0;
    case RC_ADDR(0x000192a6u): goto L_192A6;
    case RC_ADDR(0x000192a8u): goto L_192A8;
    case RC_ADDR(0x000192acu): goto L_192AC;
    case RC_ADDR(0x000192b0u): goto L_192B0;
    case RC_ADDR(0x000192b2u): goto L_192B2;
    case RC_ADDR(0x000192b4u): goto L_192B4;
    case RC_ADDR(0x000192b8u): goto L_192B8;
    case RC_ADDR(0x000192bcu): goto L_192BC;
    case RC_ADDR(0x000192c0u): goto L_192C0;
    case RC_ADDR(0x000192c2u): goto L_192C2;
    case RC_ADDR(0x000192c4u): goto L_192C4;
    case RC_ADDR(0x000192c6u): goto L_192C6;
    case RC_ADDR(0x000192ccu): goto L_192CC;
    case RC_ADDR(0x000192ceu): goto L_192CE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1925C:
    /* 0001925c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001925cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_19260:
    /* 00019260   4  pea (1d92,A4) */
    c->pc = RC_ADDR(0x00019260u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1d92u));

L_19264:
    /* 00019264   4  move.w #8,-(A7) */
    c->pc = RC_ADDR(0x00019264u);
    rc_step(c, m, 12);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19268:
    /* 00019268   4  pea (000192d0) */
    c->pc = RC_ADDR(0x00019268u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000192d0u));

L_1926C:
    /* 0001926c   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x0001926cu);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x00019270u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001850eu);
    return;

L_19270:
    /* 00019270   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00019270u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_19274:
    /* 00019274   4  clr.w (1db6,A4) */
    c->pc = RC_ADDR(0x00019274u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1db6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19278:
    /* 00019278   6  move.w #14,(1dba,A4) */
    c->pc = RC_ADDR(0x00019278u);
    rc_step(c, m, 16);
    t0 = 0x00000014u;
    rc_wr16(c, m, (c->a[4] + 0x1dbau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1927E:
    /* 0001927e   6  move.w #2,(1db8,A4) */
    c->pc = RC_ADDR(0x0001927eu);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x1db8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19284:
    /* 00019284   4  clr.w (1dc0,A4) */
    c->pc = RC_ADDR(0x00019284u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1dc0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19288:
    /* 00019288   4  clr.w (14f6,A4) */
    c->pc = RC_ADDR(0x00019288u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x14f6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1928C:
    /* 0001928c   6  move.w #1,(1dbe,A4) */
    c->pc = RC_ADDR(0x0001928cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1dbeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19292:
    /* 00019292   4  move.w #e9,-(A7) */
    c->pc = RC_ADDR(0x00019292u);
    rc_step(c, m, 12);
    t0 = 0x000000e9u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19296:
    /* 00019296   4  jsr (ffff808c,A4) */
    c->pc = RC_ADDR(0x00019296u);
    rc_step(c, m, 18);
    /* vector 23 */
    rc_push32(c, m, RC_ADDR(0x0001929au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b82u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000080a0u);
    return;

L_1929A:
    /* 0001929a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001929au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1929C:
    /* 0001929c   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001929cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1929E:
    /* 0001929e   2  beq 000192a8 */
    c->pc = RC_ADDR(0x0001929eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_192A8;

L_192A0:
    /* 000192a0   6  move.w (6e6,A4),(1dbc,A4) */
    c->pc = RC_ADDR(0x000192a0u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6e6u));
    rc_wr16(c, m, (c->a[4] + 0x1dbcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_192A6:
    /* 000192a6   2  bra 000192ac */
    c->pc = RC_ADDR(0x000192a6u);
    rc_step(c, m, 10);
    goto L_192AC;

L_192A8:
    /* 000192a8   4  clr.w (1dbc,A4) */
    c->pc = RC_ADDR(0x000192a8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1dbcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_192AC:
    /* 000192ac   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x000192acu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_192B0:
    /* 000192b0   2  ext.l D0 */
    c->pc = RC_ADDR(0x000192b0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_192B2:
    /* 000192b2   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000192b2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_192B4:
    /* 000192b4   4  lea (ffff84a2,A4),A0 */
    c->pc = RC_ADDR(0x000192b4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7b5eu);

L_192B8:
    /* 000192b8   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000192b8u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_192BC:
    /* 000192bc   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x000192bcu);
    rc_step(c, m, 18);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x000192c0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228c2u);
    return;

L_192C0:
    /* 000192c0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000192c0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_192C2:
    /* 000192c2   2  tst.w D0 */
    c->pc = RC_ADDR(0x000192c2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_192C4:
    /* 000192c4   2  bne 000192cc */
    c->pc = RC_ADDR(0x000192c4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_192CC;

L_192C6:
    /* 000192c6   6  move.w #1,(1dc0,A4) */
    c->pc = RC_ADDR(0x000192c6u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1dc0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_192CC:
    /* 000192cc   2  unlk A5 */
    c->pc = RC_ADDR(0x000192ccu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_192CE:
    /* 000192ce   2  rts */
    c->pc = RC_ADDR(0x000192ceu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
