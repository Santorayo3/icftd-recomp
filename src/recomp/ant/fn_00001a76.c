/* fn_00001a76 - 130 byte(s), 33 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00001a76(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00001a76u): goto L_1A76;
    case RC_ADDR(0x00001a7au): goto L_1A7A;
    case RC_ADDR(0x00001a7eu): goto L_1A7E;
    case RC_ADDR(0x00001a80u): goto L_1A80;
    case RC_ADDR(0x00001a82u): goto L_1A82;
    case RC_ADDR(0x00001a86u): goto L_1A86;
    case RC_ADDR(0x00001a8au): goto L_1A8A;
    case RC_ADDR(0x00001a90u): goto L_1A90;
    case RC_ADDR(0x00001a92u): goto L_1A92;
    case RC_ADDR(0x00001a98u): goto L_1A98;
    case RC_ADDR(0x00001a9au): goto L_1A9A;
    case RC_ADDR(0x00001a9eu): goto L_1A9E;
    case RC_ADDR(0x00001aa2u): goto L_1AA2;
    case RC_ADDR(0x00001aa4u): goto L_1AA4;
    case RC_ADDR(0x00001aa8u): goto L_1AA8;
    case RC_ADDR(0x00001aaeu): goto L_1AAE;
    case RC_ADDR(0x00001ab4u): goto L_1AB4;
    case RC_ADDR(0x00001abau): goto L_1ABA;
    case RC_ADDR(0x00001abcu): goto L_1ABC;
    case RC_ADDR(0x00001ac0u): goto L_1AC0;
    case RC_ADDR(0x00001ac4u): goto L_1AC4;
    case RC_ADDR(0x00001ac6u): goto L_1AC6;
    case RC_ADDR(0x00001acau): goto L_1ACA;
    case RC_ADDR(0x00001ad0u): goto L_1AD0;
    case RC_ADDR(0x00001ad6u): goto L_1AD6;
    case RC_ADDR(0x00001adcu): goto L_1ADC;
    case RC_ADDR(0x00001adeu): goto L_1ADE;
    case RC_ADDR(0x00001ae4u): goto L_1AE4;
    case RC_ADDR(0x00001ae8u): goto L_1AE8;
    case RC_ADDR(0x00001aeau): goto L_1AEA;
    case RC_ADDR(0x00001af0u): goto L_1AF0;
    case RC_ADDR(0x00001af4u): goto L_1AF4;
    case RC_ADDR(0x00001af6u): goto L_1AF6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1A76:
    /* 00001a76   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00001a76u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1A7A:
    /* 00001a7a   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00001a7au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1A7E:
    /* 00001a7e   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00001a7eu);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1A80:
    /* 00001a80   2  ext.w D0 */
    c->pc = RC_ADDR(0x00001a80u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_1A82:
    /* 00001a82   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00001a82u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A86:
    /* 00001a86   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00001a86u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A8A:
    /* 00001a8a   6  cmpi.w #fffe,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00001a8au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x0000fffeu);

L_1A90:
    /* 00001a90   2  beq 00001a9a */
    c->pc = RC_ADDR(0x00001a90u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A9A;

L_1A92:
    /* 00001a92   6  cmpi.w #fffd,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00001a92u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x0000fffdu);

L_1A98:
    /* 00001a98   2  bne 00001ab4 */
    c->pc = RC_ADDR(0x00001a98u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1AB4;

L_1A9A:
    /* 00001a9a   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00001a9au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1A9E:
    /* 00001a9e   4  move.b (2,A0),D0 */
    c->pc = RC_ADDR(0x00001a9eu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1AA2:
    /* 00001aa2   2  ext.w D0 */
    c->pc = RC_ADDR(0x00001aa2u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_1AA4:
    /* 00001aa4   4  move.w D0,(fffff78c,A4) */
    c->pc = RC_ADDR(0x00001aa4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x874u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AA8:
    /* 00001aa8   6  move.w #1,(ffff83f2,A4) */
    c->pc = RC_ADDR(0x00001aa8u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c0eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AAE:
    /* 00001aae   6  move.w #ff9a,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00001aaeu);
    rc_step(c, m, 16);
    t0 = 0x0000ff9au;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AB4:
    /* 00001ab4   6  cmpi.w #fffd,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00001ab4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x0000fffdu);

L_1ABA:
    /* 00001aba   2  bne 00001ad6 */
    c->pc = RC_ADDR(0x00001abau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1AD6;

L_1ABC:
    /* 00001abc   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00001abcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1AC0:
    /* 00001ac0   4  move.b (1,A0),D0 */
    c->pc = RC_ADDR(0x00001ac0u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1AC4:
    /* 00001ac4   2  ext.w D0 */
    c->pc = RC_ADDR(0x00001ac4u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_1AC6:
    /* 00001ac6   4  move.w D0,(ffff8d98,A4) */
    c->pc = RC_ADDR(0x00001ac6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x7268u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ACA:
    /* 00001aca   6  move.w #1,(ffff8d96,A4) */
    c->pc = RC_ADDR(0x00001acau);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x726au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AD0:
    /* 00001ad0   6  move.w #ff9a,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00001ad0u);
    rc_step(c, m, 16);
    t0 = 0x0000ff9au;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AD6:
    /* 00001ad6   6  cmpi.w #ffff,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00001ad6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1ADC:
    /* 00001adc   2  bne 00001ae4 */
    c->pc = RC_ADDR(0x00001adcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1AE4;

L_1ADE:
    /* 00001ade   6  move.w #ff9c,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00001adeu);
    rc_step(c, m, 16);
    t0 = 0x0000ff9cu;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE4:
    /* 00001ae4   4  tst.w (fffff78c,A4) */
    c->pc = RC_ADDR(0x00001ae4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_set_nzvc(c, t0, RC_W);

L_1AE8:
    /* 00001ae8   2  bcc 00001af0 */
    c->pc = RC_ADDR(0x00001ae8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_1AF0;

L_1AEA:
    /* 00001aea   6  move.w (ffff83f0,A4),(fffff78c,A4) */
    c->pc = RC_ADDR(0x00001aeau);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c10u));
    rc_wr16(c, m, (c->a[4] - 0x874u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AF0:
    /* 00001af0   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00001af0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AF4:
    /* 00001af4   2  unlk A5 */
    c->pc = RC_ADDR(0x00001af4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1AF6:
    /* 00001af6   2  rts */
    c->pc = RC_ADDR(0x00001af6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
