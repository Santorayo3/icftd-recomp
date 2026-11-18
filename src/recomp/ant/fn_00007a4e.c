/* fn_00007a4e - 70 byte(s), 22 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00007a4e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00007a4eu): goto L_7A4E;
    case RC_ADDR(0x00007a52u): goto L_7A52;
    case RC_ADDR(0x00007a56u): goto L_7A56;
    case RC_ADDR(0x00007a5cu): goto L_7A5C;
    case RC_ADDR(0x00007a60u): goto L_7A60;
    case RC_ADDR(0x00007a62u): goto L_7A62;
    case RC_ADDR(0x00007a64u): goto L_7A64;
    case RC_ADDR(0x00007a68u): goto L_7A68;
    case RC_ADDR(0x00007a6cu): goto L_7A6C;
    case RC_ADDR(0x00007a6eu): goto L_7A6E;
    case RC_ADDR(0x00007a70u): goto L_7A70;
    case RC_ADDR(0x00007a74u): goto L_7A74;
    case RC_ADDR(0x00007a76u): goto L_7A76;
    case RC_ADDR(0x00007a78u): goto L_7A78;
    case RC_ADDR(0x00007a7cu): goto L_7A7C;
    case RC_ADDR(0x00007a80u): goto L_7A80;
    case RC_ADDR(0x00007a84u): goto L_7A84;
    case RC_ADDR(0x00007a88u): goto L_7A88;
    case RC_ADDR(0x00007a8au): goto L_7A8A;
    case RC_ADDR(0x00007a8eu): goto L_7A8E;
    case RC_ADDR(0x00007a90u): goto L_7A90;
    case RC_ADDR(0x00007a92u): goto L_7A92;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_7A4E:
    /* 00007a4e   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00007a4eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_7A52:
    /* 00007a52   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00007a52u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7A56:
    /* 00007a56   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x00007a56u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7A5C:
    /* 00007a5c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00007a5cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7A60:
    /* 00007a60   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007a60u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7A62:
    /* 00007a62   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00007a62u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_7A64:
    /* 00007a64   4  lea (fffff97a,A4),A0 */
    c->pc = RC_ADDR(0x00007a64u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x686u);

L_7A68:
    /* 00007a68   4  tst.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00007a68u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_L);

L_7A6C:
    /* 00007a6c   2  beq 00007a90 */
    c->pc = RC_ADDR(0x00007a6cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_7A90;

L_7A6E:
    /* 00007a6e   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00007a6eu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7A70:
    /* 00007a70   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00007a70u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7A74:
    /* 00007a74   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007a74u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7A76:
    /* 00007a76   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00007a76u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_7A78:
    /* 00007a78   4  lea (fffff97a,A4),A0 */
    c->pc = RC_ADDR(0x00007a78u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x686u);

L_7A7C:
    /* 00007a7c   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00007a7cu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7A80:
    /* 00007a80   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00007a80u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7A84:
    /* 00007a84   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00007a84u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00007a88u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_7A88:
    /* 00007a88   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00007a88u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_7A8A:
    /* 00007a8a   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00007a8au);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_7A8E:
    /* 00007a8e   2  bra 00007a5c */
    c->pc = RC_ADDR(0x00007a8eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_7A5C;

L_7A90:
    /* 00007a90   2  unlk A5 */
    c->pc = RC_ADDR(0x00007a90u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_7A92:
    /* 00007a92   2  rts */
    c->pc = RC_ADDR(0x00007a92u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
