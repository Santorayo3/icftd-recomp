/* fn_00015f18 - 348 byte(s), 93 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00015f18(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00015f18u): goto L_15F18;
    case RC_ADDR(0x00015f1cu): goto L_15F1C;
    case RC_ADDR(0x00015f20u): goto L_15F20;
    case RC_ADDR(0x00015f22u): goto L_15F22;
    case RC_ADDR(0x00015f26u): goto L_15F26;
    case RC_ADDR(0x00015f28u): goto L_15F28;
    case RC_ADDR(0x00015f2cu): goto L_15F2C;
    case RC_ADDR(0x00015f30u): goto L_15F30;
    case RC_ADDR(0x00015f34u): goto L_15F34;
    case RC_ADDR(0x00015f38u): goto L_15F38;
    case RC_ADDR(0x00015f3au): goto L_15F3A;
    case RC_ADDR(0x00015f3eu): goto L_15F3E;
    case RC_ADDR(0x00015f42u): goto L_15F42;
    case RC_ADDR(0x00015f44u): goto L_15F44;
    case RC_ADDR(0x00015f48u): goto L_15F48;
    case RC_ADDR(0x00015f4au): goto L_15F4A;
    case RC_ADDR(0x00015f50u): goto L_15F50;
    case RC_ADDR(0x00015f54u): goto L_15F54;
    case RC_ADDR(0x00015f58u): goto L_15F58;
    case RC_ADDR(0x00015f5au): goto L_15F5A;
    case RC_ADDR(0x00015f60u): goto L_15F60;
    case RC_ADDR(0x00015f62u): goto L_15F62;
    case RC_ADDR(0x00015f64u): goto L_15F64;
    case RC_ADDR(0x00015f68u): goto L_15F68;
    case RC_ADDR(0x00015f6cu): goto L_15F6C;
    case RC_ADDR(0x00015f70u): goto L_15F70;
    case RC_ADDR(0x00015f72u): goto L_15F72;
    case RC_ADDR(0x00015f76u): goto L_15F76;
    case RC_ADDR(0x00015f7au): goto L_15F7A;
    case RC_ADDR(0x00015f7cu): goto L_15F7C;
    case RC_ADDR(0x00015f80u): goto L_15F80;
    case RC_ADDR(0x00015f84u): goto L_15F84;
    case RC_ADDR(0x00015f88u): goto L_15F88;
    case RC_ADDR(0x00015f8cu): goto L_15F8C;
    case RC_ADDR(0x00015f90u): goto L_15F90;
    case RC_ADDR(0x00015f94u): goto L_15F94;
    case RC_ADDR(0x00015f98u): goto L_15F98;
    case RC_ADDR(0x00015f9eu): goto L_15F9E;
    case RC_ADDR(0x00015fa2u): goto L_15FA2;
    case RC_ADDR(0x00015fa6u): goto L_15FA6;
    case RC_ADDR(0x00015faau): goto L_15FAA;
    case RC_ADDR(0x00015faeu): goto L_15FAE;
    case RC_ADDR(0x00015fb0u): goto L_15FB0;
    case RC_ADDR(0x00015fb2u): goto L_15FB2;
    case RC_ADDR(0x00015fb6u): goto L_15FB6;
    case RC_ADDR(0x00015fbau): goto L_15FBA;
    case RC_ADDR(0x00015fbeu): goto L_15FBE;
    case RC_ADDR(0x00015fc2u): goto L_15FC2;
    case RC_ADDR(0x00015fc6u): goto L_15FC6;
    case RC_ADDR(0x00015fcau): goto L_15FCA;
    case RC_ADDR(0x00015fceu): goto L_15FCE;
    case RC_ADDR(0x00015fd4u): goto L_15FD4;
    case RC_ADDR(0x00015fd8u): goto L_15FD8;
    case RC_ADDR(0x00015fdcu): goto L_15FDC;
    case RC_ADDR(0x00015fe0u): goto L_15FE0;
    case RC_ADDR(0x00015fe4u): goto L_15FE4;
    case RC_ADDR(0x00015fe8u): goto L_15FE8;
    case RC_ADDR(0x00015fecu): goto L_15FEC;
    case RC_ADDR(0x00015ff0u): goto L_15FF0;
    case RC_ADDR(0x00015ff4u): goto L_15FF4;
    case RC_ADDR(0x00015ffau): goto L_15FFA;
    case RC_ADDR(0x00015ffcu): goto L_15FFC;
    case RC_ADDR(0x00016002u): goto L_16002;
    case RC_ADDR(0x00016008u): goto L_16008;
    case RC_ADDR(0x0001600au): goto L_1600A;
    case RC_ADDR(0x00016010u): goto L_16010;
    case RC_ADDR(0x00016016u): goto L_16016;
    case RC_ADDR(0x00016018u): goto L_16018;
    case RC_ADDR(0x0001601eu): goto L_1601E;
    case RC_ADDR(0x00016024u): goto L_16024;
    case RC_ADDR(0x00016026u): goto L_16026;
    case RC_ADDR(0x0001602cu): goto L_1602C;
    case RC_ADDR(0x00016032u): goto L_16032;
    case RC_ADDR(0x00016034u): goto L_16034;
    case RC_ADDR(0x00016038u): goto L_16038;
    case RC_ADDR(0x0001603cu): goto L_1603C;
    case RC_ADDR(0x00016040u): goto L_16040;
    case RC_ADDR(0x00016042u): goto L_16042;
    case RC_ADDR(0x00016044u): goto L_16044;
    case RC_ADDR(0x00016048u): goto L_16048;
    case RC_ADDR(0x0001604cu): goto L_1604C;
    case RC_ADDR(0x00016050u): goto L_16050;
    case RC_ADDR(0x00016052u): goto L_16052;
    case RC_ADDR(0x00016054u): goto L_16054;
    case RC_ADDR(0x00016058u): goto L_16058;
    case RC_ADDR(0x0001605cu): goto L_1605C;
    case RC_ADDR(0x00016060u): goto L_16060;
    case RC_ADDR(0x00016062u): goto L_16062;
    case RC_ADDR(0x00016064u): goto L_16064;
    case RC_ADDR(0x00016068u): goto L_16068;
    case RC_ADDR(0x0001606cu): goto L_1606C;
    case RC_ADDR(0x00016070u): goto L_16070;
    case RC_ADDR(0x00016072u): goto L_16072;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_15F18:
    /* 00015f18   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00015f18u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_15F1C:
    /* 00015f1c   4  tst.w (1b3a,A4) */
    c->pc = RC_ADDR(0x00015f1cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b3au));
    rc_set_nzvc(c, t0, RC_W);

L_15F20:
    /* 00015f20   2  bne 00015f50 */
    c->pc = RC_ADDR(0x00015f20u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_15F50;

L_15F22:
    /* 00015f22   4  tst.w (1ac8,A4) */
    c->pc = RC_ADDR(0x00015f22u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ac8u));
    rc_set_nzvc(c, t0, RC_W);

L_15F26:
    /* 00015f26   2  beq 00015f30 */
    c->pc = RC_ADDR(0x00015f26u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15F30;

L_15F28:
    /* 00015f28   4  move.w (14f2,A4),D0 */
    c->pc = RC_ADDR(0x00015f28u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15F2C:
    /* 00015f2c   4  add.w D0,(1b2e,A4) */
    c->pc = RC_ADDR(0x00015f2cu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1b2eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_15F30:
    /* 00015f30   4  move.w (1b2e,A4),D0 */
    c->pc = RC_ADDR(0x00015f30u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b2eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15F34:
    /* 00015f34   4  cmp.w (1b30,A4),D0 */
    c->pc = RC_ADDR(0x00015f34u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b30u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15F38:
    /* 00015f38   2  ble 00015f50 */
    c->pc = RC_ADDR(0x00015f38u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_15F50;

L_15F3A:
    /* 00015f3a   4  clr.w (1b2e,A4) */
    c->pc = RC_ADDR(0x00015f3au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1b2eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15F3E:
    /* 00015f3e   4  tst.w (1b2c,A4) */
    c->pc = RC_ADDR(0x00015f3eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b2cu));
    rc_set_nzvc(c, t0, RC_W);

L_15F42:
    /* 00015f42   2  beq 00015f4a */
    c->pc = RC_ADDR(0x00015f42u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15F4A;

L_15F44:
    /* 00015f44   4  subq.w #1,(1b2c,A4) */
    c->pc = RC_ADDR(0x00015f44u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1b2cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15F48:
    /* 00015f48   2  bra 00015f50 */
    c->pc = RC_ADDR(0x00015f48u);
    rc_step(c, m, 10);
    goto L_15F50;

L_15F4A:
    /* 00015f4a   6  move.w #1,(1b3a,A4) */
    c->pc = RC_ADDR(0x00015f4au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1b3au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15F50:
    /* 00015f50   4  jsr (00015980) */
    c->pc = RC_ADDR(0x00015f50u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00015f54u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015980u);
    return;

L_15F54:
    /* 00015f54   4  tst.w (1adc,A4) */
    c->pc = RC_ADDR(0x00015f54u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1adcu));
    rc_set_nzvc(c, t0, RC_W);

L_15F58:
    /* 00015f58   2  beq 00015fa6 */
    c->pc = RC_ADDR(0x00015f58u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15FA6;

L_15F5A:
    /* 00015f5a   6  cmpi.w #1,(1adc,A4) */
    c->pc = RC_ADDR(0x00015f5au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1adcu));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_15F60:
    /* 00015f60   2  bne 00015f98 */
    c->pc = RC_ADDR(0x00015f60u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_15F98;

L_15F62:
    /* 00015f62   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00015f62u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15F64:
    /* 00015f64   4  move.w (1b32,A4),-(A7) */
    c->pc = RC_ADDR(0x00015f64u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b32u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15F68:
    /* 00015f68   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00015f68u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15F6C:
    /* 00015f6c   4  jsr (ffff80da,A4) */
    c->pc = RC_ADDR(0x00015f6cu);
    rc_step(c, m, 18);
    /* vector 36 */
    rc_push32(c, m, RC_ADDR(0x00015f70u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bd0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000afe6u);
    return;

L_15F70:
    /* 00015f70   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00015f70u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_15F72:
    /* 00015f72   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00015f72u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_15F76:
    /* 00015f76   4  jsr (ffff8140,A4) */
    c->pc = RC_ADDR(0x00015f76u);
    rc_step(c, m, 18);
    /* vector 53 */
    rc_push32(c, m, RC_ADDR(0x00015f7au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c36u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00010812u);
    return;

L_15F7A:
    /* 00015f7a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00015f7au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_15F7C:
    /* 00015f7c   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x00015f7cu);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15F80:
    /* 00015f80   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00015f80u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15F84:
    /* 00015f84   4  move.l (cde,A4),-(A7) */
    c->pc = RC_ADDR(0x00015f84u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcdeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_15F88:
    /* 00015f88   4  move.w #2bc,-(A7) */
    c->pc = RC_ADDR(0x00015f88u);
    rc_step(c, m, 12);
    t0 = 0x000002bcu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15F8C:
    /* 00015f8c   4  move.l (ffffb370,A4),-(A7) */
    c->pc = RC_ADDR(0x00015f8cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4c90u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_15F90:
    /* 00015f90   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x00015f90u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x00015f94u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_15F94:
    /* 00015f94   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00015f94u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_15F98:
    /* 00015f98   6  move.w #c,(1ac4,A4) */
    c->pc = RC_ADDR(0x00015f98u);
    rc_step(c, m, 16);
    t0 = 0x0000000cu;
    rc_wr16(c, m, (c->a[4] + 0x1ac4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15F9E:
    /* 00015f9e   4  addq.w #1,(1adc,A4) */
    c->pc = RC_ADDR(0x00015f9eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1adcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15FA2:
    /* 00015fa2   4  clr.w (1ac8,A4) */
    c->pc = RC_ADDR(0x00015fa2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1ac8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15FA6:
    /* 00015fa6   4  pea (ffffface,A4) */
    c->pc = RC_ADDR(0x00015fa6u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x532u));

L_15FAA:
    /* 00015faa   4  move.w (1ac4,A4),D0 */
    c->pc = RC_ADDR(0x00015faau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ac4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15FAE:
    /* 00015fae   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015faeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_15FB0:
    /* 00015fb0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00015fb0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_15FB2:
    /* 00015fb2   4  lea (1ade,A4),A0 */
    c->pc = RC_ADDR(0x00015fb2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1adeu);

L_15FB6:
    /* 00015fb6   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00015fb6u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_15FBA:
    /* 00015fba   4  move.w (6fe,A4),-(A7) */
    c->pc = RC_ADDR(0x00015fbau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6feu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15FBE:
    /* 00015fbe   4  move.w (6fc,A4),-(A7) */
    c->pc = RC_ADDR(0x00015fbeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6fcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15FC2:
    /* 00015fc2   4  jsr (ffff8170,A4) */
    c->pc = RC_ADDR(0x00015fc2u);
    rc_step(c, m, 18);
    /* vector 61 */
    rc_push32(c, m, RC_ADDR(0x00015fc6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c66u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012986u);
    return;

L_15FC6:
    /* 00015fc6   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00015fc6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_15FCA:
    /* 00015fca   4  clr.w (700,A4) */
    c->pc = RC_ADDR(0x00015fcau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x700u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15FCE:
    /* 00015fce   6  move.w (ffffb250,A4),(fffffa34,A4) */
    c->pc = RC_ADDR(0x00015fceu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db0u));
    rc_wr16(c, m, (c->a[4] - 0x5ccu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15FD4:
    /* 00015fd4   4  tst.w (1ac8,A4) */
    c->pc = RC_ADDR(0x00015fd4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ac8u));
    rc_set_nzvc(c, t0, RC_W);

L_15FD8:
    /* 00015fd8   4  beq 00016070 */
    c->pc = RC_ADDR(0x00015fd8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_16070;

L_15FDC:
    /* 00015fdc   4  move.w (1ad8,A4),D2 */
    c->pc = RC_ADDR(0x00015fdcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ad8u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15FE0:
    /* 00015fe0   4  move.w (1ada,A4),D3 */
    c->pc = RC_ADDR(0x00015fe0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1adau));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15FE4:
    /* 00015fe4   4  mulu.w (fffffa2e,A4),D2 */
    c->pc = RC_ADDR(0x00015fe4u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5d2u));
    rc_mulu(c, 2, t0);

L_15FE8:
    /* 00015fe8   4  mulu.w (fffffa30,A4),D3 */
    c->pc = RC_ADDR(0x00015fe8u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5d0u));
    rc_mulu(c, 3, t0);

L_15FEC:
    /* 00015fec   4  add.w D2,(6fc,A4) */
    c->pc = RC_ADDR(0x00015fecu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x6fcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 2, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 2, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_15FF0:
    /* 00015ff0   4  add.w D3,(6fe,A4) */
    c->pc = RC_ADDR(0x00015ff0u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x6feu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 3, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 3, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_15FF4:
    /* 00015ff4   6  cmpi.w #be,(6fc,A4) */
    c->pc = RC_ADDR(0x00015ff4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6fcu));
    rc_cmp(c, RC_W, t0, 0x000000beu);

L_15FFA:
    /* 00015ffa   2  blt 00016002 */
    c->pc = RC_ADDR(0x00015ffau);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_16002;

L_15FFC:
    /* 00015ffc   6  ori.w #1,(700,A4) */
    c->pc = RC_ADDR(0x00015ffcu);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x700u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | 0x00000001u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_16002:
    /* 00016002   6  cmpi.w #6e,(6fc,A4) */
    c->pc = RC_ADDR(0x00016002u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6fcu));
    rc_cmp(c, RC_W, t0, 0x0000006eu);

L_16008:
    /* 00016008   2  bgt 00016010 */
    c->pc = RC_ADDR(0x00016008u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_16010;

L_1600A:
    /* 0001600a   6  ori.w #2,(700,A4) */
    c->pc = RC_ADDR(0x0001600au);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x700u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | 0x00000002u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_16010:
    /* 00016010   6  cmpi.w #64,(6fe,A4) */
    c->pc = RC_ADDR(0x00016010u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6feu));
    rc_cmp(c, RC_W, t0, 0x00000064u);

L_16016:
    /* 00016016   2  blt 0001601e */
    c->pc = RC_ADDR(0x00016016u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1601E;

L_16018:
    /* 00016018   6  ori.w #4,(700,A4) */
    c->pc = RC_ADDR(0x00016018u);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x700u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | 0x00000004u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1601E:
    /* 0001601e   6  cmpi.w #50,(6fe,A4) */
    c->pc = RC_ADDR(0x0001601eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6feu));
    rc_cmp(c, RC_W, t0, 0x00000050u);

L_16024:
    /* 00016024   2  bgt 0001602c */
    c->pc = RC_ADDR(0x00016024u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1602C;

L_16026:
    /* 00016026   6  ori.w #8,(700,A4) */
    c->pc = RC_ADDR(0x00016026u);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x700u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | 0x00000008u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1602C:
    /* 0001602c   6  cmpi.w #5,(14f2,A4) */
    c->pc = RC_ADDR(0x0001602cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_16032:
    /* 00016032   2  bgt 00016070 */
    c->pc = RC_ADDR(0x00016032u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_16070;

L_16034:
    /* 00016034   4  move.w (1b16,A4),D0 */
    c->pc = RC_ADDR(0x00016034u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b16u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16038:
    /* 00016038   4  move.w (1b18,A4),D1 */
    c->pc = RC_ADDR(0x00016038u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b18u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1603C:
    /* 0001603c   4  bsr 000176ec */
    c->pc = RC_ADDR(0x0001603cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00016040u));
    rc_depth++;
    c->pc = RC_ADDR(0x000176ecu);
    return;

L_16040:
    /* 00016040   2  tst.w D0 */
    c->pc = RC_ADDR(0x00016040u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_16042:
    /* 00016042   2  bne 00016070 */
    c->pc = RC_ADDR(0x00016042u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_16070;

L_16044:
    /* 00016044   4  move.w (1b1a,A4),D0 */
    c->pc = RC_ADDR(0x00016044u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b1au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16048:
    /* 00016048   4  move.w (1b1c,A4),D1 */
    c->pc = RC_ADDR(0x00016048u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b1cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1604C:
    /* 0001604c   4  bsr 000176ec */
    c->pc = RC_ADDR(0x0001604cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00016050u));
    rc_depth++;
    c->pc = RC_ADDR(0x000176ecu);
    return;

L_16050:
    /* 00016050   2  tst.w D0 */
    c->pc = RC_ADDR(0x00016050u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_16052:
    /* 00016052   2  bne 00016070 */
    c->pc = RC_ADDR(0x00016052u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_16070;

L_16054:
    /* 00016054   4  move.w (1b1e,A4),D0 */
    c->pc = RC_ADDR(0x00016054u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16058:
    /* 00016058   4  move.w (1b20,A4),D1 */
    c->pc = RC_ADDR(0x00016058u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b20u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1605C:
    /* 0001605c   4  bsr 000176ec */
    c->pc = RC_ADDR(0x0001605cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00016060u));
    rc_depth++;
    c->pc = RC_ADDR(0x000176ecu);
    return;

L_16060:
    /* 00016060   2  tst.w D0 */
    c->pc = RC_ADDR(0x00016060u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_16062:
    /* 00016062   2  bne 00016070 */
    c->pc = RC_ADDR(0x00016062u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_16070;

L_16064:
    /* 00016064   4  move.w (1b22,A4),D0 */
    c->pc = RC_ADDR(0x00016064u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b22u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16068:
    /* 00016068   4  move.w (1b24,A4),D1 */
    c->pc = RC_ADDR(0x00016068u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b24u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1606C:
    /* 0001606c   4  bsr 000176ec */
    c->pc = RC_ADDR(0x0001606cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00016070u));
    rc_depth++;
    c->pc = RC_ADDR(0x000176ecu);
    return;

L_16070:
    /* 00016070   2  unlk A5 */
    c->pc = RC_ADDR(0x00016070u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16072:
    /* 00016072   2  rts */
    c->pc = RC_ADDR(0x00016072u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
