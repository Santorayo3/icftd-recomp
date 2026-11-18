/* fn_00010e74 - 62 byte(s), 23 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00010e74(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00010e74u): goto L_10E74;
    case RC_ADDR(0x00010e78u): goto L_10E78;
    case RC_ADDR(0x00010e7cu): goto L_10E7C;
    case RC_ADDR(0x00010e80u): goto L_10E80;
    case RC_ADDR(0x00010e82u): goto L_10E82;
    case RC_ADDR(0x00010e84u): goto L_10E84;
    case RC_ADDR(0x00010e86u): goto L_10E86;
    case RC_ADDR(0x00010e8au): goto L_10E8A;
    case RC_ADDR(0x00010e8cu): goto L_10E8C;
    case RC_ADDR(0x00010e90u): goto L_10E90;
    case RC_ADDR(0x00010e92u): goto L_10E92;
    case RC_ADDR(0x00010e94u): goto L_10E94;
    case RC_ADDR(0x00010e96u): goto L_10E96;
    case RC_ADDR(0x00010e98u): goto L_10E98;
    case RC_ADDR(0x00010e9au): goto L_10E9A;
    case RC_ADDR(0x00010e9cu): goto L_10E9C;
    case RC_ADDR(0x00010e9eu): goto L_10E9E;
    case RC_ADDR(0x00010ea0u): goto L_10EA0;
    case RC_ADDR(0x00010ea2u): goto L_10EA2;
    case RC_ADDR(0x00010ea6u): goto L_10EA6;
    case RC_ADDR(0x00010eaau): goto L_10EAA;
    case RC_ADDR(0x00010eacu): goto L_10EAC;
    case RC_ADDR(0x00010eb0u): goto L_10EB0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10E74:
    /* 00010e74   4  movem.l { D7 A5 A6 },-(SP) */
    c->pc = RC_ADDR(0x00010e74u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    c->a[7] = t3;

L_10E78:
    /* 00010e78   4  movea.l (6,A6),A0 */
    c->pc = RC_ADDR(0x00010e78u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[6] + 0x6u));
    c->a[0] = t0;

L_10E7C:
    /* 00010e7c   4  clr.w (3c,A6) */
    c->pc = RC_ADDR(0x00010e7cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[6] + 0x3cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10E80:
    /* 00010e80   2  tst.w D0 */
    c->pc = RC_ADDR(0x00010e80u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_10E82:
    /* 00010e82   2  beq 00010eac */
    c->pc = RC_ADDR(0x00010e82u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10EAC;

L_10E84:
    /* 00010e84   2  moveq #0,D2 */
    c->pc = RC_ADDR(0x00010e84u);
    rc_step(c, m, 4);
    c->d[2] = 0x00000000u;
    rc_set_nzvc(c, c->d[2], RC_L);

L_10E86:
    /* 00010e86   4  move.w (0,A6),D2 */
    c->pc = RC_ADDR(0x00010e86u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0x0u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10E8A:
    /* 00010e8a   2  asl.w #8,D2 */
    c->pc = RC_ADDR(0x00010e8au);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 0, 1, 0x00000008u, rc_d_get(c, 2, RC_W), RC_W));

L_10E8C:
    /* 00010e8c   4  move.w D2,(38,A6) */
    c->pc = RC_ADDR(0x00010e8cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[6] + 0x38u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10E90:
    /* 00010e90   2  asl.w #8,D1 */
    c->pc = RC_ADDR(0x00010e90u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 1, 0x00000008u, rc_d_get(c, 1, RC_W), RC_W));

L_10E92:
    /* 00010e92   2  sub.w D1,D2 */
    c->pc = RC_ADDR(0x00010e92u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_10E94:
    /* 00010e94   2  bcc 00010e98 */
    c->pc = RC_ADDR(0x00010e94u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_10E98;

L_10E96:
    /* 00010e96   2  neg.w D2 */
    c->pc = RC_ADDR(0x00010e96u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_10E98:
    /* 00010e98   2  divu.w D0,D2 */
    c->pc = RC_ADDR(0x00010e98u);
    rc_step(c, m, 140);
    t0 = rc_d_get(c, 0, RC_W);
    rc_divu(c, m, 2, t0);

L_10E9A:
    /* 00010e9a   2  swap D1 */
    c->pc = RC_ADDR(0x00010e9au);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_10E9C:
    /* 00010e9c   2  move.w D2,D1 */
    c->pc = RC_ADDR(0x00010e9cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10E9E:
    /* 00010e9e   2  bne 00010ea2 */
    c->pc = RC_ADDR(0x00010e9eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_10EA2;

L_10EA0:
    /* 00010ea0   2  addq.w #1,D1 */
    c->pc = RC_ADDR(0x00010ea0u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_10EA2:
    /* 00010ea2   4  move.l D1,(3a,A6) */
    c->pc = RC_ADDR(0x00010ea2u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[6] + 0x3au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10EA6:
    /* 00010ea6   4  movem.l (SP)+,{ D1 D2 A0 } */
    c->pc = RC_ADDR(0x00010ea6u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_10EAA:
    /* 00010eaa   2  rts */
    c->pc = RC_ADDR(0x00010eaau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_10EAC:
    /* 00010eac   4  move.w D1,(0,A6) */
    c->pc = RC_ADDR(0x00010eacu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[6] + 0x0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10EB0:
    /* 00010eb0   2  bra 00010ea6 */
    c->pc = RC_ADDR(0x00010eb0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_10EA6;

}
