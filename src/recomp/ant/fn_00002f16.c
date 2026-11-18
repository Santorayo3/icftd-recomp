/* fn_00002f16 - 278 byte(s), 76 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00002f16(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00002f16u): goto L_2F16;
    case RC_ADDR(0x00002f1au): goto L_2F1A;
    case RC_ADDR(0x00002f1eu): goto L_2F1E;
    case RC_ADDR(0x00002f22u): goto L_2F22;
    case RC_ADDR(0x00002f28u): goto L_2F28;
    case RC_ADDR(0x00002f2cu): goto L_2F2C;
    case RC_ADDR(0x00002f30u): goto L_2F30;
    case RC_ADDR(0x00002f34u): goto L_2F34;
    case RC_ADDR(0x00002f38u): goto L_2F38;
    case RC_ADDR(0x00002f3au): goto L_2F3A;
    case RC_ADDR(0x00002f3eu): goto L_2F3E;
    case RC_ADDR(0x00002f42u): goto L_2F42;
    case RC_ADDR(0x00002f46u): goto L_2F46;
    case RC_ADDR(0x00002f4au): goto L_2F4A;
    case RC_ADDR(0x00002f4eu): goto L_2F4E;
    case RC_ADDR(0x00002f54u): goto L_2F54;
    case RC_ADDR(0x00002f58u): goto L_2F58;
    case RC_ADDR(0x00002f5cu): goto L_2F5C;
    case RC_ADDR(0x00002f60u): goto L_2F60;
    case RC_ADDR(0x00002f62u): goto L_2F62;
    case RC_ADDR(0x00002f66u): goto L_2F66;
    case RC_ADDR(0x00002f6cu): goto L_2F6C;
    case RC_ADDR(0x00002f6eu): goto L_2F6E;
    case RC_ADDR(0x00002f74u): goto L_2F74;
    case RC_ADDR(0x00002f78u): goto L_2F78;
    case RC_ADDR(0x00002f7cu): goto L_2F7C;
    case RC_ADDR(0x00002f7eu): goto L_2F7E;
    case RC_ADDR(0x00002f82u): goto L_2F82;
    case RC_ADDR(0x00002f84u): goto L_2F84;
    case RC_ADDR(0x00002f88u): goto L_2F88;
    case RC_ADDR(0x00002f8au): goto L_2F8A;
    case RC_ADDR(0x00002f8eu): goto L_2F8E;
    case RC_ADDR(0x00002f92u): goto L_2F92;
    case RC_ADDR(0x00002f98u): goto L_2F98;
    case RC_ADDR(0x00002f9au): goto L_2F9A;
    case RC_ADDR(0x00002f9cu): goto L_2F9C;
    case RC_ADDR(0x00002f9eu): goto L_2F9E;
    case RC_ADDR(0x00002fa2u): goto L_2FA2;
    case RC_ADDR(0x00002fa6u): goto L_2FA6;
    case RC_ADDR(0x00002faau): goto L_2FAA;
    case RC_ADDR(0x00002faeu): goto L_2FAE;
    case RC_ADDR(0x00002fb2u): goto L_2FB2;
    case RC_ADDR(0x00002fb6u): goto L_2FB6;
    case RC_ADDR(0x00002fbau): goto L_2FBA;
    case RC_ADDR(0x00002fbcu): goto L_2FBC;
    case RC_ADDR(0x00002fc2u): goto L_2FC2;
    case RC_ADDR(0x00002fc4u): goto L_2FC4;
    case RC_ADDR(0x00002fc8u): goto L_2FC8;
    case RC_ADDR(0x00002fccu): goto L_2FCC;
    case RC_ADDR(0x00002fd0u): goto L_2FD0;
    case RC_ADDR(0x00002fd2u): goto L_2FD2;
    case RC_ADDR(0x00002fd6u): goto L_2FD6;
    case RC_ADDR(0x00002fdau): goto L_2FDA;
    case RC_ADDR(0x00002fdcu): goto L_2FDC;
    case RC_ADDR(0x00002fdeu): goto L_2FDE;
    case RC_ADDR(0x00002fe2u): goto L_2FE2;
    case RC_ADDR(0x00002fe6u): goto L_2FE6;
    case RC_ADDR(0x00002feau): goto L_2FEA;
    case RC_ADDR(0x00002fecu): goto L_2FEC;
    case RC_ADDR(0x00002ff0u): goto L_2FF0;
    case RC_ADDR(0x00002ff6u): goto L_2FF6;
    case RC_ADDR(0x00002ff8u): goto L_2FF8;
    case RC_ADDR(0x00002ffcu): goto L_2FFC;
    case RC_ADDR(0x00003000u): goto L_3000;
    case RC_ADDR(0x00003002u): goto L_3002;
    case RC_ADDR(0x00003006u): goto L_3006;
    case RC_ADDR(0x0000300cu): goto L_300C;
    case RC_ADDR(0x0000300eu): goto L_300E;
    case RC_ADDR(0x00003014u): goto L_3014;
    case RC_ADDR(0x00003018u): goto L_3018;
    case RC_ADDR(0x0000301cu): goto L_301C;
    case RC_ADDR(0x00003020u): goto L_3020;
    case RC_ADDR(0x00003022u): goto L_3022;
    case RC_ADDR(0x00003024u): goto L_3024;
    case RC_ADDR(0x00003026u): goto L_3026;
    case RC_ADDR(0x0000302au): goto L_302A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2F16:
    /* 00002f16   4  link.w A5,#fffffff4 */
    c->pc = RC_ADDR(0x00002f16u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xcu;

L_2F1A:
    /* 00002f1a   4  clr.w (ffff83f2,A4) */
    c->pc = RC_ADDR(0x00002f1au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c0eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2F1E:
    /* 00002f1e   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00002f1eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2F22:
    /* 00002f22   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00002f22u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2F28:
    /* 00002f28   4  jsr (0000370e) */
    c->pc = RC_ADDR(0x00002f28u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002f2cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000370eu);
    return;

L_2F2C:
    /* 00002f2c   4  move.w #ffff,-(A7) */
    c->pc = RC_ADDR(0x00002f2cu);
    rc_step(c, m, 12);
    t0 = 0x0000ffffu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2F30:
    /* 00002f30   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002f30u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2F34:
    /* 00002f34   4  jsr (00006500) */
    c->pc = RC_ADDR(0x00002f34u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002f38u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006500u);
    return;

L_2F38:
    /* 00002f38   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002f38u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2F3A:
    /* 00002f3a   4  move.w (fffff78c,A4),D0 */
    c->pc = RC_ADDR(0x00002f3au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2F3E:
    /* 00002f3e   4  sub.w #22,D0 */
    c->pc = RC_ADDR(0x00002f3eu);
    rc_step(c, m, 10);
    t0 = 0x00000022u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_2F42:
    /* 00002f42   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00002f42u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2F46:
    /* 00002f46   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00002f46u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_2F4A:
    /* 00002f4a   4  beq 0000302a */
    c->pc = RC_ADDR(0x00002f4au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_302A;

L_2F4E:
    /* 00002f4e   6  move.w (ffffd5c6,A4),(fffffff4,A5) */
    c->pc = RC_ADDR(0x00002f4eu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a3au));
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2F54:
    /* 00002f54   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00002f54u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2F58:
    /* 00002f58   4  add.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00002f58u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_2F5C:
    /* 00002f5c   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00002f5cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_2F60:
    /* 00002f60   2  bge 00002f66 */
    c->pc = RC_ADDR(0x00002f60u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_2F66;

L_2F62:
    /* 00002f62   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00002f62u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2F66:
    /* 00002f66   6  cmpi.w #4,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00002f66u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_2F6C:
    /* 00002f6c   2  ble 00002f74 */
    c->pc = RC_ADDR(0x00002f6cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_2F74;

L_2F6E:
    /* 00002f6e   6  move.w #4,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00002f6eu);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2F74:
    /* 00002f74   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00002f74u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2F78:
    /* 00002f78   4  cmp.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00002f78u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_2F7C:
    /* 00002f7c   2  bne 00002f92 */
    c->pc = RC_ADDR(0x00002f7cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2F92;

L_2F7E:
    /* 00002f7e   4  tst.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00002f7eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_2F82:
    /* 00002f82   2  bne 00002f8a */
    c->pc = RC_ADDR(0x00002f82u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2F8A;

L_2F84:
    /* 00002f84   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00002f84u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_2F88:
    /* 00002f88   2  bra 00002f92 */
    c->pc = RC_ADDR(0x00002f88u);
    rc_step(c, m, 10);
    goto L_2F92;

L_2F8A:
    /* 00002f8a   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00002f8au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2F8E:
    /* 00002f8e   4  add.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00002f8eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_2F92:
    /* 00002f92   6  move.w #96,(fffffa1a,A4) */
    c->pc = RC_ADDR(0x00002f92u);
    rc_step(c, m, 16);
    t0 = 0x00000096u;
    rc_wr16(c, m, (c->a[4] - 0x5e6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2F98:
    /* 00002f98   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00002f98u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2F9A:
    /* 00002f9a   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00002f9au);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2F9C:
    /* 00002f9c   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00002f9cu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2F9E:
    /* 00002f9e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00002f9eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_2FA2:
    /* 00002fa2   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x00002fa2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2FA6:
    /* 00002fa6   4  jsr (ffff829c,A4) */
    c->pc = RC_ADDR(0x00002fa6u);
    rc_step(c, m, 18);
    /* vector 111 */
    rc_push32(c, m, RC_ADDR(0x00002faau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d92u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021aa4u);
    return;

L_2FAA:
    /* 00002faa   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00002faau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_2FAE:
    /* 00002fae   4  clr.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00002faeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2FB2:
    /* 00002fb2   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00002fb2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2FB6:
    /* 00002fb6   4  cmp.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00002fb6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_2FBA:
    /* 00002fba   2  bne 00002fc4 */
    c->pc = RC_ADDR(0x00002fbau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2FC4;

L_2FBC:
    /* 00002fbc   6  move.w #8,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00002fbcu);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2FC2:
    /* 00002fc2   2  bra 00002fc8 */
    c->pc = RC_ADDR(0x00002fc2u);
    rc_step(c, m, 10);
    goto L_2FC8;

L_2FC4:
    /* 00002fc4   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00002fc4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2FC8:
    /* 00002fc8   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00002fc8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2FCC:
    /* 00002fcc   4  cmp.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00002fccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_2FD0:
    /* 00002fd0   2  beq 00002fec */
    c->pc = RC_ADDR(0x00002fd0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2FEC;

L_2FD2:
    /* 00002fd2   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x00002fd2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2FD6:
    /* 00002fd6   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00002fd6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2FDA:
    /* 00002fda   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002fdau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2FDC:
    /* 00002fdc   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00002fdcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_2FDE:
    /* 00002fde   4  lea (ffff858e,A4),A0 */
    c->pc = RC_ADDR(0x00002fdeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a72u);

L_2FE2:
    /* 00002fe2   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00002fe2u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2FE6:
    /* 00002fe6   4  jsr (00005544) */
    c->pc = RC_ADDR(0x00002fe6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002feau));
    rc_depth++;
    c->pc = RC_ADDR(0x00005544u);
    return;

L_2FEA:
    /* 00002fea   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002feau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2FEC:
    /* 00002fec   4  addq.w #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00002fecu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_2FF0:
    /* 00002ff0   6  cmpi.w #5,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00002ff0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_2FF6:
    /* 00002ff6   2  blt 00002fb2 */
    c->pc = RC_ADDR(0x00002ff6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_2FB2; }

L_2FF8:
    /* 00002ff8   4  jsr (ffff820c,A4) */
    c->pc = RC_ADDR(0x00002ff8u);
    rc_step(c, m, 18);
    /* vector 87 */
    rc_push32(c, m, RC_ADDR(0x00002ffcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f260u);
    return;

L_2FFC:
    /* 00002ffc   4  tst.w (ffffd5c8,A4) */
    c->pc = RC_ADDR(0x00002ffcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a38u));
    rc_set_nzvc(c, t0, RC_W);

L_3000:
    /* 00003000   2  beq 00003026 */
    c->pc = RC_ADDR(0x00003000u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_3026;

L_3002:
    /* 00003002   4  jsr (0000370e) */
    c->pc = RC_ADDR(0x00003002u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00003006u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000370eu);
    return;

L_3006:
    /* 00003006   6  cmpi.w #4,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00003006u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_300C:
    /* 0000300c   2  beq 00003020 */
    c->pc = RC_ADDR(0x0000300cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_3020;

L_300E:
    /* 0000300e   6  move.w #1,(ffff83f2,A4) */
    c->pc = RC_ADDR(0x0000300eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c0eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3014:
    /* 00003014   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00003014u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3018:
    /* 00003018   4  add.w #22,D0 */
    c->pc = RC_ADDR(0x00003018u);
    rc_step(c, m, 10);
    t0 = 0x00000022u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_301C:
    /* 0000301c   4  move.w D0,(fffff78c,A4) */
    c->pc = RC_ADDR(0x0000301cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x874u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3020:
    /* 00003020   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00003020u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_3022:
    /* 00003022   2  unlk A5 */
    c->pc = RC_ADDR(0x00003022u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_3024:
    /* 00003024   2  rts */
    c->pc = RC_ADDR(0x00003024u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_3026:
    /* 00003026   4  bra 00002f46 */
    c->pc = RC_ADDR(0x00003026u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2F46;

L_302A:
    /* 0000302a   2  bra 00003022 */
    c->pc = RC_ADDR(0x0000302au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_3022;

}
