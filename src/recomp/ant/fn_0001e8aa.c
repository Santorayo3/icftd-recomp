/* fn_0001e8aa - 400 byte(s), 121 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001e8aa(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001e8aau): goto L_1E8AA;
    case RC_ADDR(0x0001e8aeu): goto L_1E8AE;
    case RC_ADDR(0x0001e8b4u): goto L_1E8B4;
    case RC_ADDR(0x0001e8b8u): goto L_1E8B8;
    case RC_ADDR(0x0001e8bcu): goto L_1E8BC;
    case RC_ADDR(0x0001e8c0u): goto L_1E8C0;
    case RC_ADDR(0x0001e8c4u): goto L_1E8C4;
    case RC_ADDR(0x0001e8c6u): goto L_1E8C6;
    case RC_ADDR(0x0001e8cau): goto L_1E8CA;
    case RC_ADDR(0x0001e8ceu): goto L_1E8CE;
    case RC_ADDR(0x0001e8d2u): goto L_1E8D2;
    case RC_ADDR(0x0001e8d4u): goto L_1E8D4;
    case RC_ADDR(0x0001e8d6u): goto L_1E8D6;
    case RC_ADDR(0x0001e8dau): goto L_1E8DA;
    case RC_ADDR(0x0001e8e0u): goto L_1E8E0;
    case RC_ADDR(0x0001e8e6u): goto L_1E8E6;
    case RC_ADDR(0x0001e8eau): goto L_1E8EA;
    case RC_ADDR(0x0001e8f0u): goto L_1E8F0;
    case RC_ADDR(0x0001e8f2u): goto L_1E8F2;
    case RC_ADDR(0x0001e8f6u): goto L_1E8F6;
    case RC_ADDR(0x0001e8fau): goto L_1E8FA;
    case RC_ADDR(0x0001e8feu): goto L_1E8FE;
    case RC_ADDR(0x0001e902u): goto L_1E902;
    case RC_ADDR(0x0001e904u): goto L_1E904;
    case RC_ADDR(0x0001e906u): goto L_1E906;
    case RC_ADDR(0x0001e908u): goto L_1E908;
    case RC_ADDR(0x0001e90cu): goto L_1E90C;
    case RC_ADDR(0x0001e910u): goto L_1E910;
    case RC_ADDR(0x0001e912u): goto L_1E912;
    case RC_ADDR(0x0001e916u): goto L_1E916;
    case RC_ADDR(0x0001e918u): goto L_1E918;
    case RC_ADDR(0x0001e91cu): goto L_1E91C;
    case RC_ADDR(0x0001e920u): goto L_1E920;
    case RC_ADDR(0x0001e924u): goto L_1E924;
    case RC_ADDR(0x0001e926u): goto L_1E926;
    case RC_ADDR(0x0001e928u): goto L_1E928;
    case RC_ADDR(0x0001e92cu): goto L_1E92C;
    case RC_ADDR(0x0001e930u): goto L_1E930;
    case RC_ADDR(0x0001e932u): goto L_1E932;
    case RC_ADDR(0x0001e936u): goto L_1E936;
    case RC_ADDR(0x0001e938u): goto L_1E938;
    case RC_ADDR(0x0001e93cu): goto L_1E93C;
    case RC_ADDR(0x0001e93eu): goto L_1E93E;
    case RC_ADDR(0x0001e942u): goto L_1E942;
    case RC_ADDR(0x0001e944u): goto L_1E944;
    case RC_ADDR(0x0001e946u): goto L_1E946;
    case RC_ADDR(0x0001e94au): goto L_1E94A;
    case RC_ADDR(0x0001e94eu): goto L_1E94E;
    case RC_ADDR(0x0001e950u): goto L_1E950;
    case RC_ADDR(0x0001e954u): goto L_1E954;
    case RC_ADDR(0x0001e956u): goto L_1E956;
    case RC_ADDR(0x0001e95au): goto L_1E95A;
    case RC_ADDR(0x0001e95eu): goto L_1E95E;
    case RC_ADDR(0x0001e960u): goto L_1E960;
    case RC_ADDR(0x0001e962u): goto L_1E962;
    case RC_ADDR(0x0001e964u): goto L_1E964;
    case RC_ADDR(0x0001e966u): goto L_1E966;
    case RC_ADDR(0x0001e96au): goto L_1E96A;
    case RC_ADDR(0x0001e96eu): goto L_1E96E;
    case RC_ADDR(0x0001e970u): goto L_1E970;
    case RC_ADDR(0x0001e974u): goto L_1E974;
    case RC_ADDR(0x0001e978u): goto L_1E978;
    case RC_ADDR(0x0001e97cu): goto L_1E97C;
    case RC_ADDR(0x0001e980u): goto L_1E980;
    case RC_ADDR(0x0001e982u): goto L_1E982;
    case RC_ADDR(0x0001e986u): goto L_1E986;
    case RC_ADDR(0x0001e988u): goto L_1E988;
    case RC_ADDR(0x0001e98cu): goto L_1E98C;
    case RC_ADDR(0x0001e98eu): goto L_1E98E;
    case RC_ADDR(0x0001e992u): goto L_1E992;
    case RC_ADDR(0x0001e994u): goto L_1E994;
    case RC_ADDR(0x0001e998u): goto L_1E998;
    case RC_ADDR(0x0001e99au): goto L_1E99A;
    case RC_ADDR(0x0001e99cu): goto L_1E99C;
    case RC_ADDR(0x0001e9a0u): goto L_1E9A0;
    case RC_ADDR(0x0001e9a2u): goto L_1E9A2;
    case RC_ADDR(0x0001e9a4u): goto L_1E9A4;
    case RC_ADDR(0x0001e9a8u): goto L_1E9A8;
    case RC_ADDR(0x0001e9aau): goto L_1E9AA;
    case RC_ADDR(0x0001e9acu): goto L_1E9AC;
    case RC_ADDR(0x0001e9b0u): goto L_1E9B0;
    case RC_ADDR(0x0001e9b4u): goto L_1E9B4;
    case RC_ADDR(0x0001e9b8u): goto L_1E9B8;
    case RC_ADDR(0x0001e9bcu): goto L_1E9BC;
    case RC_ADDR(0x0001e9beu): goto L_1E9BE;
    case RC_ADDR(0x0001e9c2u): goto L_1E9C2;
    case RC_ADDR(0x0001e9c4u): goto L_1E9C4;
    case RC_ADDR(0x0001e9c6u): goto L_1E9C6;
    case RC_ADDR(0x0001e9cau): goto L_1E9CA;
    case RC_ADDR(0x0001e9ceu): goto L_1E9CE;
    case RC_ADDR(0x0001e9d2u): goto L_1E9D2;
    case RC_ADDR(0x0001e9d6u): goto L_1E9D6;
    case RC_ADDR(0x0001e9dcu): goto L_1E9DC;
    case RC_ADDR(0x0001e9deu): goto L_1E9DE;
    case RC_ADDR(0x0001e9e2u): goto L_1E9E2;
    case RC_ADDR(0x0001e9e4u): goto L_1E9E4;
    case RC_ADDR(0x0001e9e8u): goto L_1E9E8;
    case RC_ADDR(0x0001e9eau): goto L_1E9EA;
    case RC_ADDR(0x0001e9ecu): goto L_1E9EC;
    case RC_ADDR(0x0001e9f0u): goto L_1E9F0;
    case RC_ADDR(0x0001e9f2u): goto L_1E9F2;
    case RC_ADDR(0x0001e9f6u): goto L_1E9F6;
    case RC_ADDR(0x0001e9f8u): goto L_1E9F8;
    case RC_ADDR(0x0001e9fau): goto L_1E9FA;
    case RC_ADDR(0x0001e9feu): goto L_1E9FE;
    case RC_ADDR(0x0001ea02u): goto L_1EA02;
    case RC_ADDR(0x0001ea06u): goto L_1EA06;
    case RC_ADDR(0x0001ea0au): goto L_1EA0A;
    case RC_ADDR(0x0001ea0eu): goto L_1EA0E;
    case RC_ADDR(0x0001ea12u): goto L_1EA12;
    case RC_ADDR(0x0001ea14u): goto L_1EA14;
    case RC_ADDR(0x0001ea18u): goto L_1EA18;
    case RC_ADDR(0x0001ea1au): goto L_1EA1A;
    case RC_ADDR(0x0001ea20u): goto L_1EA20;
    case RC_ADDR(0x0001ea24u): goto L_1EA24;
    case RC_ADDR(0x0001ea28u): goto L_1EA28;
    case RC_ADDR(0x0001ea2cu): goto L_1EA2C;
    case RC_ADDR(0x0001ea2eu): goto L_1EA2E;
    case RC_ADDR(0x0001ea32u): goto L_1EA32;
    case RC_ADDR(0x0001ea36u): goto L_1EA36;
    case RC_ADDR(0x0001ea38u): goto L_1EA38;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E8AA:
    /* 0001e8aa   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x0001e8aau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_1E8AE:
    /* 0001e8ae   6  cmpi.w #ffff,(2caa,A4) */
    c->pc = RC_ADDR(0x0001e8aeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2caau));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1E8B4:
    /* 0001e8b4   4  ble 0001ea20 */
    c->pc = RC_ADDR(0x0001e8b4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1EA20;

L_1E8B8:
    /* 0001e8b8   4  tst.w (2cb6,A4) */
    c->pc = RC_ADDR(0x0001e8b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2cb6u));
    rc_set_nzvc(c, t0, RC_W);

L_1E8BC:
    /* 0001e8bc   4  beq 0001ea20 */
    c->pc = RC_ADDR(0x0001e8bcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1EA20;

L_1E8C0:
    /* 0001e8c0   4  tst.w (2cac,A4) */
    c->pc = RC_ADDR(0x0001e8c0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2cacu));
    rc_set_nzvc(c, t0, RC_W);

L_1E8C4:
    /* 0001e8c4   2  beq 0001e8ce */
    c->pc = RC_ADDR(0x0001e8c4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E8CE;

L_1E8C6:
    /* 0001e8c6   4  jsr (0001ea3a) */
    c->pc = RC_ADDR(0x0001e8c6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e8cau));
    rc_depth++;
    c->pc = RC_ADDR(0x0001ea3au);
    return;

L_1E8CA:
    /* 0001e8ca   4  bra 0001ea0e */
    c->pc = RC_ADDR(0x0001e8cau);
    rc_step(c, m, 10);
    goto L_1EA0E;

L_1E8CE:
    /* 0001e8ce   4  move.w (2caa,A4),D0 */
    c->pc = RC_ADDR(0x0001e8ceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2caau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E8D2:
    /* 0001e8d2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001e8d2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1E8D4:
    /* 0001e8d4   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001e8d4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1E8D6:
    /* 0001e8d6   4  lea (307a,A4),A0 */
    c->pc = RC_ADDR(0x0001e8d6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x307au);

L_1E8DA:
    /* 0001e8da   6  move.l (0,A0,D0.w),(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001e8dau);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E8E0:
    /* 0001e8e0   6  move.w (3072,A4),(fffffff6,A5) */
    c->pc = RC_ADDR(0x0001e8e0u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3072u));
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E8E6:
    /* 0001e8e6   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001e8e6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1E8EA:
    /* 0001e8ea   6  move.w (2,A0),(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001e8eau);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E8F0:
    /* 0001e8f0   2  moveq #64,D1 */
    c->pc = RC_ADDR(0x0001e8f0u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000064u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1E8F2:
    /* 0001e8f2   4  move.l (3074,A4),D0 */
    c->pc = RC_ADDR(0x0001e8f2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3074u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E8F6:
    /* 0001e8f6   4  jsr (ffff82f0,A4) */
    c->pc = RC_ADDR(0x0001e8f6u);
    rc_step(c, m, 18);
    /* vector 125 */
    rc_push32(c, m, RC_ADDR(0x0001e8fau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023de6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022d80u);
    return;

L_1E8FA:
    /* 0001e8fa   4  move.w (fffffff6,A5),D1 */
    c->pc = RC_ADDR(0x0001e8fau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E8FE:
    /* 0001e8fe   4  muls.w #64,D1 */
    c->pc = RC_ADDR(0x0001e8feu);
    rc_step(c, m, 42);
    t0 = 0x00000064u;
    rc_muls(c, 1, t0);

L_1E902:
    /* 0001e902   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001e902u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1E904:
    /* 0001e904   2  sub.l D1,D0 */
    c->pc = RC_ADDR(0x0001e904u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1E906:
    /* 0001e906   2  moveq #6f,D1 */
    c->pc = RC_ADDR(0x0001e906u);
    rc_step(c, m, 4);
    c->d[1] = 0x0000006fu;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1E908:
    /* 0001e908   4  jsr (ffff82fc,A4) */
    c->pc = RC_ADDR(0x0001e908u);
    rc_step(c, m, 18);
    /* vector 127 */
    rc_push32(c, m, RC_ADDR(0x0001e90cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023df2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002324eu);
    return;

L_1E90C:
    /* 0001e90c   4  move.w (fffffff8,A5),D1 */
    c->pc = RC_ADDR(0x0001e90cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E910:
    /* 0001e910   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001e910u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1E912:
    /* 0001e912   4  jsr (ffff82f0,A4) */
    c->pc = RC_ADDR(0x0001e912u);
    rc_step(c, m, 18);
    /* vector 125 */
    rc_push32(c, m, RC_ADDR(0x0001e916u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023de6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022d80u);
    return;

L_1E916:
    /* 0001e916   2  moveq #64,D1 */
    c->pc = RC_ADDR(0x0001e916u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000064u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1E918:
    /* 0001e918   4  jsr (ffff82fc,A4) */
    c->pc = RC_ADDR(0x0001e918u);
    rc_step(c, m, 18);
    /* vector 127 */
    rc_push32(c, m, RC_ADDR(0x0001e91cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023df2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002324eu);
    return;

L_1E91C:
    /* 0001e91c   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001e91cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E920:
    /* 0001e920   4  move.w (2caa,A4),D0 */
    c->pc = RC_ADDR(0x0001e920u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2caau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E924:
    /* 0001e924   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001e924u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1E926:
    /* 0001e926   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001e926u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1E928:
    /* 0001e928   4  lea (ffffd234,A4),A0 */
    c->pc = RC_ADDR(0x0001e928u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2dccu);

L_1E92C:
    /* 0001e92c   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001e92cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E930:
    /* 0001e930   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001e930u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1E932:
    /* 0001e932   4  divs.w #2,D1 */
    c->pc = RC_ADDR(0x0001e932u);
    rc_step(c, m, 162);
    t0 = 0x00000002u;
    rc_divs(c, m, 1, t0);

L_1E936:
    /* 0001e936   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001e936u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1E938:
    /* 0001e938   4  move.l (3074,A4),D0 */
    c->pc = RC_ADDR(0x0001e938u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3074u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E93C:
    /* 0001e93c   2  sub.l D1,D0 */
    c->pc = RC_ADDR(0x0001e93cu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1E93E:
    /* 0001e93e   4  move.w (fffffffa,A5),D1 */
    c->pc = RC_ADDR(0x0001e93eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E942:
    /* 0001e942   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001e942u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1E944:
    /* 0001e944   2  sub.l D1,D0 */
    c->pc = RC_ADDR(0x0001e944u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1E946:
    /* 0001e946   4  move.w D0,(30ce,A4) */
    c->pc = RC_ADDR(0x0001e946u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x30ceu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E94A:
    /* 0001e94a   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001e94au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E94E:
    /* 0001e94e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001e94eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1E950:
    /* 0001e950   4  divs.w #2,D0 */
    c->pc = RC_ADDR(0x0001e950u);
    rc_step(c, m, 162);
    t0 = 0x00000002u;
    rc_divs(c, m, 0, t0);

L_1E954:
    /* 0001e954   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001e954u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E956:
    /* 0001e956   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001e956u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E95A:
    /* 0001e95a   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x0001e95au);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x0001e95eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_1E95E:
    /* 0001e95e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001e95eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1E960:
    /* 0001e960   2  move.w (A7)+,D1 */
    c->pc = RC_ADDR(0x0001e960u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    c->a[7] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E962:
    /* 0001e962   2  sub.w D0,D1 */
    c->pc = RC_ADDR(0x0001e962u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1E964:
    /* 0001e964   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001e964u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1E966:
    /* 0001e966   4  divs.w #5,D1 */
    c->pc = RC_ADDR(0x0001e966u);
    rc_step(c, m, 162);
    t0 = 0x00000005u;
    rc_divs(c, m, 1, t0);

L_1E96A:
    /* 0001e96a   4  add.w D1,(30ce,A4) */
    c->pc = RC_ADDR(0x0001e96au);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x30ceu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1E96E:
    /* 0001e96e   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001e96eu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E970:
    /* 0001e970   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001e970u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1E974:
    /* 0001e974   4  move.l (24,A0),-(A7) */
    c->pc = RC_ADDR(0x0001e974u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x24u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E978:
    /* 0001e978   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001e978u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1E97C:
    /* 0001e97c   4  move.l (20,A0),-(A7) */
    c->pc = RC_ADDR(0x0001e97cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x20u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E980:
    /* 0001e980   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001e980u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E982:
    /* 0001e982   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001e982u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1E986:
    /* 0001e986   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001e986u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1E988:
    /* 0001e988   4  move.w (2,A0),D0 */
    c->pc = RC_ADDR(0x0001e988u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E98C:
    /* 0001e98c   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001e98cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E98E:
    /* 0001e98e   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001e98eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1E992:
    /* 0001e992   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001e992u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1E994:
    /* 0001e994   4  move.b (4,A0),D0 */
    c->pc = RC_ADDR(0x0001e994u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x4u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1E998:
    /* 0001e998   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001e998u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E99A:
    /* 0001e99a   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001e99au);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E99C:
    /* 0001e99c   4  move.w (30ce,A4),D0 */
    c->pc = RC_ADDR(0x0001e99cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x30ceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E9A0:
    /* 0001e9a0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001e9a0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1E9A2:
    /* 0001e9a2   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001e9a2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E9A4:
    /* 0001e9a4   4  pea (2cc8,A4) */
    c->pc = RC_ADDR(0x0001e9a4u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2cc8u));

L_1E9A8:
    /* 0001e9a8   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001e9a8u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E9AA:
    /* 0001e9aa   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001e9aau);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E9AC:
    /* 0001e9ac   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001e9acu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E9B0:
    /* 0001e9b0   4  jsr (ffff8260,A4) */
    c->pc = RC_ADDR(0x0001e9b0u);
    rc_step(c, m, 18);
    /* vector 101 */
    rc_push32(c, m, RC_ADDR(0x0001e9b4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d56u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020940u);
    return;

L_1E9B4:
    /* 0001e9b4   4  lea (30,A7),A7 */
    c->pc = RC_ADDR(0x0001e9b4u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x30u);

L_1E9B8:
    /* 0001e9b8   4  tst.w (30ca,A4) */
    c->pc = RC_ADDR(0x0001e9b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x30cau));
    rc_set_nzvc(c, t0, RC_W);

L_1E9BC:
    /* 0001e9bc   2  beq 0001e9c4 */
    c->pc = RC_ADDR(0x0001e9bcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E9C4;

L_1E9BE:
    /* 0001e9be   4  subq.w #1,(30ca,A4) */
    c->pc = RC_ADDR(0x0001e9beu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x30cau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1E9C2:
    /* 0001e9c2   2  bra 0001e9d6 */
    c->pc = RC_ADDR(0x0001e9c2u);
    rc_step(c, m, 10);
    goto L_1E9D6;

L_1E9C4:
    /* 0001e9c4   2  moveq #9,D0 */
    c->pc = RC_ADDR(0x0001e9c4u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000009u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1E9C6:
    /* 0001e9c6   4  sub.w (2cb6,A4),D0 */
    c->pc = RC_ADDR(0x0001e9c6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2cb6u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1E9CA:
    /* 0001e9ca   4  move.w D0,(30ca,A4) */
    c->pc = RC_ADDR(0x0001e9cau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x30cau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E9CE:
    /* 0001e9ce   4  subq.w #1,(2caa,A4) */
    c->pc = RC_ADDR(0x0001e9ceu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x2caau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1E9D2:
    /* 0001e9d2   4  addq.w #1,(30cc,A4) */
    c->pc = RC_ADDR(0x0001e9d2u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x30ccu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1E9D6:
    /* 0001e9d6   6  cmpi.w #1,(2caa,A4) */
    c->pc = RC_ADDR(0x0001e9d6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2caau));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1E9DC:
    /* 0001e9dc   2  bne 0001ea0e */
    c->pc = RC_ADDR(0x0001e9dcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1EA0E;

L_1E9DE:
    /* 0001e9de   4  move.w (30d8,A4),D0 */
    c->pc = RC_ADDR(0x0001e9deu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x30d8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E9E2:
    /* 0001e9e2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001e9e2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1E9E4:
    /* 0001e9e4   4  move.l (3070,A4),D1 */
    c->pc = RC_ADDR(0x0001e9e4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3070u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E9E8:
    /* 0001e9e8   2  cmp.l D0,D1 */
    c->pc = RC_ADDR(0x0001e9e8u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1E9EA:
    /* 0001e9ea   2  ble 0001ea0e */
    c->pc = RC_ADDR(0x0001e9eau);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1EA0E;

L_1E9EC:
    /* 0001e9ec   4  move.w (30da,A4),D0 */
    c->pc = RC_ADDR(0x0001e9ecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x30dau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E9F0:
    /* 0001e9f0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001e9f0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1E9F2:
    /* 0001e9f2   4  move.l (3070,A4),D1 */
    c->pc = RC_ADDR(0x0001e9f2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3070u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E9F6:
    /* 0001e9f6   2  cmp.l D0,D1 */
    c->pc = RC_ADDR(0x0001e9f6u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1E9F8:
    /* 0001e9f8   2  bge 0001ea0e */
    c->pc = RC_ADDR(0x0001e9f8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1EA0E;

L_1E9FA:
    /* 0001e9fa   4  addq.w #1,(2cac,A4) */
    c->pc = RC_ADDR(0x0001e9fau);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x2cacu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1E9FE:
    /* 0001e9fe   4  move.w (30ce,A4),D0 */
    c->pc = RC_ADDR(0x0001e9feu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x30ceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EA02:
    /* 0001ea02   4  sub.w #50,D0 */
    c->pc = RC_ADDR(0x0001ea02u);
    rc_step(c, m, 10);
    t0 = 0x00000050u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1EA06:
    /* 0001ea06   4  move.w D0,(30d2,A4) */
    c->pc = RC_ADDR(0x0001ea06u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x30d2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EA0A:
    /* 0001ea0a   4  jsr (0001e1e6) */
    c->pc = RC_ADDR(0x0001ea0au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001ea0eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e1e6u);
    return;

L_1EA0E:
    /* 0001ea0e   4  tst.w (2caa,A4) */
    c->pc = RC_ADDR(0x0001ea0eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2caau));
    rc_set_nzvc(c, t0, RC_W);

L_1EA12:
    /* 0001ea12   2  bge 0001ea20 */
    c->pc = RC_ADDR(0x0001ea12u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1EA20;

L_1EA14:
    /* 0001ea14   4  tst.w (2ca6,A4) */
    c->pc = RC_ADDR(0x0001ea14u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2ca6u));
    rc_set_nzvc(c, t0, RC_W);

L_1EA18:
    /* 0001ea18   2  bne 0001ea20 */
    c->pc = RC_ADDR(0x0001ea18u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1EA20;

L_1EA1A:
    /* 0001ea1a   6  move.w #1,(2ca8,A4) */
    c->pc = RC_ADDR(0x0001ea1au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x2ca8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EA20:
    /* 0001ea20   4  pea (ffffface,A4) */
    c->pc = RC_ADDR(0x0001ea20u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x532u));

L_1EA24:
    /* 0001ea24   4  move.l (2db6,A4),-(A7) */
    c->pc = RC_ADDR(0x0001ea24u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2db6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EA28:
    /* 0001ea28   4  move.w #4b,-(A7) */
    c->pc = RC_ADDR(0x0001ea28u);
    rc_step(c, m, 12);
    t0 = 0x0000004bu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EA2C:
    /* 0001ea2c   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0001ea2cu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1EA2E:
    /* 0001ea2e   4  jsr (ffff8170,A4) */
    c->pc = RC_ADDR(0x0001ea2eu);
    rc_step(c, m, 18);
    /* vector 61 */
    rc_push32(c, m, RC_ADDR(0x0001ea32u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c66u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012986u);
    return;

L_1EA32:
    /* 0001ea32   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001ea32u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1EA36:
    /* 0001ea36   2  unlk A5 */
    c->pc = RC_ADDR(0x0001ea36u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1EA38:
    /* 0001ea38   2  rts */
    c->pc = RC_ADDR(0x0001ea38u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
