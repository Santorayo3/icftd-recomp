/* fn_00005fe0 - 272 byte(s), 79 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00005fe0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case 0x00005fe0u: goto L_5FE0;
    case 0x00005fe4u: goto L_5FE4;
    case 0x00005fecu: goto L_5FEC;
    case 0x00005ff2u: goto L_5FF2;
    case 0x00005ff6u: goto L_5FF6;
    case 0x00005ffau: goto L_5FFA;
    case 0x00006000u: goto L_6000;
    case 0x00006006u: goto L_6006;
    case 0x0000600au: goto L_600A;
    case 0x0000600cu: goto L_600C;
    case 0x0000600eu: goto L_600E;
    case 0x00006010u: goto L_6010;
    case 0x00006014u: goto L_6014;
    case 0x00006016u: goto L_6016;
    case 0x00006018u: goto L_6018;
    case 0x0000601au: goto L_601A;
    case 0x0000601eu: goto L_601E;
    case 0x00006020u: goto L_6020;
    case 0x00006022u: goto L_6022;
    case 0x00006024u: goto L_6024;
    case 0x00006028u: goto L_6028;
    case 0x0000602cu: goto L_602C;
    case 0x00006030u: goto L_6030;
    case 0x00006034u: goto L_6034;
    case 0x00006038u: goto L_6038;
    case 0x0000603cu: goto L_603C;
    case 0x0000603eu: goto L_603E;
    case 0x00006040u: goto L_6040;
    case 0x00006044u: goto L_6044;
    case 0x00006048u: goto L_6048;
    case 0x0000604au: goto L_604A;
    case 0x0000604eu: goto L_604E;
    case 0x00006050u: goto L_6050;
    case 0x00006054u: goto L_6054;
    case 0x00006058u: goto L_6058;
    case 0x0000605cu: goto L_605C;
    case 0x00006060u: goto L_6060;
    case 0x00006062u: goto L_6062;
    case 0x00006066u: goto L_6066;
    case 0x0000606au: goto L_606A;
    case 0x0000606cu: goto L_606C;
    case 0x00006070u: goto L_6070;
    case 0x00006072u: goto L_6072;
    case 0x00006076u: goto L_6076;
    case 0x0000607au: goto L_607A;
    case 0x0000607cu: goto L_607C;
    case 0x00006082u: goto L_6082;
    case 0x00006084u: goto L_6084;
    case 0x00006088u: goto L_6088;
    case 0x0000608cu: goto L_608C;
    case 0x00006090u: goto L_6090;
    case 0x00006092u: goto L_6092;
    case 0x00006096u: goto L_6096;
    case 0x00006098u: goto L_6098;
    case 0x0000609cu: goto L_609C;
    case 0x000060a0u: goto L_60A0;
    case 0x000060a4u: goto L_60A4;
    case 0x000060a8u: goto L_60A8;
    case 0x000060aau: goto L_60AA;
    case 0x000060aeu: goto L_60AE;
    case 0x000060b2u: goto L_60B2;
    case 0x000060b4u: goto L_60B4;
    case 0x000060b8u: goto L_60B8;
    case 0x000060bau: goto L_60BA;
    case 0x000060beu: goto L_60BE;
    case 0x000060c2u: goto L_60C2;
    case 0x000060c4u: goto L_60C4;
    case 0x000060cau: goto L_60CA;
    case 0x000060ccu: goto L_60CC;
    case 0x000060d0u: goto L_60D0;
    case 0x000060d4u: goto L_60D4;
    case 0x000060d8u: goto L_60D8;
    case 0x000060dcu: goto L_60DC;
    case 0x000060e0u: goto L_60E0;
    case 0x000060e2u: goto L_60E2;
    case 0x000060e6u: goto L_60E6;
    case 0x000060eau: goto L_60EA;
    case 0x000060ecu: goto L_60EC;
    case 0x000060eeu: goto L_60EE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5FE0:
    /* 00005fe0   4  link.w A5,#fffffffa */
    c->pc = 0x00005fe0u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_5FE4:
    /* 00005fe4   8  move.l #1,(fffffffc,A5) */
    c->pc = 0x00005fe4u;
    t0 = 0x00000001u;
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5FEC:
    /* 00005fec   6  move.w #2,(fffffffa,A5) */
    c->pc = 0x00005fecu;
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5FF2:
    /* 00005ff2   4  tst.w (fffffffa,A5) */
    c->pc = 0x00005ff2u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_5FF6:
    /* 00005ff6   4  beq 000060d8 */
    c->pc = 0x00005ff6u;
    if (rc_cond(c, 7)) goto L_60D8;

L_5FFA:
    /* 00005ffa   6  move.w #2,(fffffffa,A5) */
    c->pc = 0x00005ffau;
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6000:
    /* 00006000   6  move.l (22,A5),(fffffebe,A4) */
    c->pc = 0x00006000u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x22u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6006:
    /* 00006006   4  move.l (1e,A5),D0 */
    c->pc = 0x00006006u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x1eu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_600A:
    /* 0000600a   2  moveq #10,D1 */
    c->pc = 0x0000600au;
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_600C:
    /* 0000600c   2  asl.l D1,D0 */
    c->pc = 0x0000600cu;
    c->d[0] = rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L);

L_600E:
    /* 0000600e   2  move.l D0,-(A7) */
    c->pc = 0x0000600eu;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6010:
    /* 00006010   4  move.l (12,A5),D0 */
    c->pc = 0x00006010u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x12u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_6014:
    /* 00006014   2  moveq #10,D1 */
    c->pc = 0x00006014u;
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_6016:
    /* 00006016   2  asl.l D1,D0 */
    c->pc = 0x00006016u;
    c->d[0] = rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L);

L_6018:
    /* 00006018   2  move.l D0,-(A7) */
    c->pc = 0x00006018u;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_601A:
    /* 0000601a   4  move.l (e,A5),D0 */
    c->pc = 0x0000601au;
    t0 = rc_rd32(c, m, (c->a[5] + 0xeu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_601E:
    /* 0000601e   2  moveq #10,D1 */
    c->pc = 0x0000601eu;
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_6020:
    /* 00006020   2  asl.l D1,D0 */
    c->pc = 0x00006020u;
    c->d[0] = rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L);

L_6022:
    /* 00006022   2  move.l D0,-(A7) */
    c->pc = 0x00006022u;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6024:
    /* 00006024   4  move.w (c,A5),-(A7) */
    c->pc = 0x00006024u;
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6028:
    /* 00006028   4  move.l (8,A5),-(A7) */
    c->pc = 0x00006028u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_602C:
    /* 0000602c   4  move.w #1,-(A7) */
    c->pc = 0x0000602cu;
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6030:
    /* 00006030   4  jsr (ffff8266,A4) */
    c->pc = 0x00006030u;
    /* vector 102 */
    rc_push32(c, m, 0x00006034u);
    rc_depth++;
    c->pc = 0x0001f2aeu;
    return;

L_6034:
    /* 00006034   4  lea (14,A7),A7 */
    c->pc = 0x00006034u;
    c->a[7] = (c->a[7] + 0x14u);

L_6038:
    /* 00006038   4  move.l (22,A5),-(A7) */
    c->pc = 0x00006038u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x22u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_603C:
    /* 0000603c   2  bsr 00005fbe */
    c->pc = 0x0000603cu;
    rc_push32(c, m, 0x0000603eu);
    rc_depth++;
    c->pc = 0x00005fbeu;
    return;

L_603E:
    /* 0000603e   2  addq.w #4,A7 */
    c->pc = 0x0000603eu;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6040:
    /* 00006040   4  move.l (e,A5),D0 */
    c->pc = 0x00006040u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xeu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_6044:
    /* 00006044   4  cmp.l (16,A5),D0 */
    c->pc = 0x00006044u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x16u));
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_6048:
    /* 00006048   2  beq 00006084 */
    c->pc = 0x00006048u;
    if (rc_cond(c, 7)) goto L_6084;

L_604A:
    /* 0000604a   4  move.w (26,A5),D0 */
    c->pc = 0x0000604au;
    t0 = rc_rd16(c, m, (c->a[5] + 0x26u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_604E:
    /* 0000604e   2  ext.l D0 */
    c->pc = 0x0000604eu;
    rc_ext_l(c, 0);

L_6050:
    /* 00006050   4  move.l (fffffffc,A5),D1 */
    c->pc = 0x00006050u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_6054:
    /* 00006054   4  jsr (ffff82cc,A4) */
    c->pc = 0x00006054u;
    /* vector 119 */
    rc_push32(c, m, 0x00006058u);
    rc_depth++;
    c->pc = 0x00020cdeu;
    return;

L_6058:
    /* 00006058   4  add.l D0,(e,A5) */
    c->pc = 0x00006058u;
    t3 = (c->a[5] + 0xeu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_605C:
    /* 0000605c   4  tst.w (26,A5) */
    c->pc = 0x0000605cu;
    t0 = rc_rd16(c, m, (c->a[5] + 0x26u));
    rc_set_nzvc(c, t0, RC_W);

L_6060:
    /* 00006060   2  bge 0000606c */
    c->pc = 0x00006060u;
    if (rc_cond(c, 12)) goto L_606C;

L_6062:
    /* 00006062   4  move.l (e,A5),D0 */
    c->pc = 0x00006062u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xeu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_6066:
    /* 00006066   4  cmp.l (16,A5),D0 */
    c->pc = 0x00006066u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x16u));
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_606A:
    /* 0000606a   2  blt 0000607c */
    c->pc = 0x0000606au;
    if (rc_cond(c, 13)) goto L_607C;

L_606C:
    /* 0000606c   4  tst.w (26,A5) */
    c->pc = 0x0000606cu;
    t0 = rc_rd16(c, m, (c->a[5] + 0x26u));
    rc_set_nzvc(c, t0, RC_W);

L_6070:
    /* 00006070   2  ble 00006082 */
    c->pc = 0x00006070u;
    if (rc_cond(c, 15)) goto L_6082;

L_6072:
    /* 00006072   4  move.l (e,A5),D0 */
    c->pc = 0x00006072u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xeu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_6076:
    /* 00006076   4  cmp.l (16,A5),D0 */
    c->pc = 0x00006076u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x16u));
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_607A:
    /* 0000607a   2  ble 00006082 */
    c->pc = 0x0000607au;
    if (rc_cond(c, 15)) goto L_6082;

L_607C:
    /* 0000607c   6  move.l (16,A5),(e,A5) */
    c->pc = 0x0000607cu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x16u));
    rc_wr32(c, m, (c->a[5] + 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6082:
    /* 00006082   2  bra 00006088 */
    c->pc = 0x00006082u;
    goto L_6088;

L_6084:
    /* 00006084   4  subq.w #1,(fffffffa,A5) */
    c->pc = 0x00006084u;
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_6088:
    /* 00006088   4  move.l (12,A5),D0 */
    c->pc = 0x00006088u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x12u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_608C:
    /* 0000608c   4  cmp.l (1a,A5),D0 */
    c->pc = 0x0000608cu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x1au));
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_6090:
    /* 00006090   2  beq 000060cc */
    c->pc = 0x00006090u;
    if (rc_cond(c, 7)) goto L_60CC;

L_6092:
    /* 00006092   4  move.w (26,A5),D0 */
    c->pc = 0x00006092u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x26u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6096:
    /* 00006096   2  ext.l D0 */
    c->pc = 0x00006096u;
    rc_ext_l(c, 0);

L_6098:
    /* 00006098   4  move.l (fffffffc,A5),D1 */
    c->pc = 0x00006098u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_609C:
    /* 0000609c   4  jsr (ffff82cc,A4) */
    c->pc = 0x0000609cu;
    /* vector 119 */
    rc_push32(c, m, 0x000060a0u);
    rc_depth++;
    c->pc = 0x00020cdeu;
    return;

L_60A0:
    /* 000060a0   4  add.l D0,(12,A5) */
    c->pc = 0x000060a0u;
    t3 = (c->a[5] + 0x12u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_60A4:
    /* 000060a4   4  tst.w (26,A5) */
    c->pc = 0x000060a4u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x26u));
    rc_set_nzvc(c, t0, RC_W);

L_60A8:
    /* 000060a8   2  bge 000060b4 */
    c->pc = 0x000060a8u;
    if (rc_cond(c, 12)) goto L_60B4;

L_60AA:
    /* 000060aa   4  move.l (12,A5),D0 */
    c->pc = 0x000060aau;
    t0 = rc_rd32(c, m, (c->a[5] + 0x12u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_60AE:
    /* 000060ae   4  cmp.l (1a,A5),D0 */
    c->pc = 0x000060aeu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x1au));
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_60B2:
    /* 000060b2   2  blt 000060c4 */
    c->pc = 0x000060b2u;
    if (rc_cond(c, 13)) goto L_60C4;

L_60B4:
    /* 000060b4   4  tst.w (26,A5) */
    c->pc = 0x000060b4u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x26u));
    rc_set_nzvc(c, t0, RC_W);

L_60B8:
    /* 000060b8   2  ble 000060ca */
    c->pc = 0x000060b8u;
    if (rc_cond(c, 15)) goto L_60CA;

L_60BA:
    /* 000060ba   4  move.l (12,A5),D0 */
    c->pc = 0x000060bau;
    t0 = rc_rd32(c, m, (c->a[5] + 0x12u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_60BE:
    /* 000060be   4  cmp.l (1a,A5),D0 */
    c->pc = 0x000060beu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x1au));
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_60C2:
    /* 000060c2   2  ble 000060ca */
    c->pc = 0x000060c2u;
    if (rc_cond(c, 15)) goto L_60CA;

L_60C4:
    /* 000060c4   6  move.l (1a,A5),(12,A5) */
    c->pc = 0x000060c4u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x1au));
    rc_wr32(c, m, (c->a[5] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_60CA:
    /* 000060ca   2  bra 000060d0 */
    c->pc = 0x000060cau;
    goto L_60D0;

L_60CC:
    /* 000060cc   4  subq.w #1,(fffffffa,A5) */
    c->pc = 0x000060ccu;
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_60D0:
    /* 000060d0   4  addq.l #1,(fffffffc,A5) */
    c->pc = 0x000060d0u;
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_60D4:
    /* 000060d4   4  bra 00005ff2 */
    c->pc = 0x000060d4u;
    rc_tick();
    goto L_5FF2;

L_60D8:
    /* 000060d8   4  move.l (22,A5),-(A7) */
    c->pc = 0x000060d8u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x22u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_60DC:
    /* 000060dc   4  jsr (00005fbe) */
    c->pc = 0x000060dcu;
    rc_push32(c, m, 0x000060e0u);
    rc_depth++;
    c->pc = 0x00005fbeu;
    return;

L_60E0:
    /* 000060e0   2  addq.w #4,A7 */
    c->pc = 0x000060e0u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_60E2:
    /* 000060e2   4  move.l (22,A5),-(A7) */
    c->pc = 0x000060e2u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x22u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_60E6:
    /* 000060e6   4  jsr (00005fbe) */
    c->pc = 0x000060e6u;
    rc_push32(c, m, 0x000060eau);
    rc_depth++;
    c->pc = 0x00005fbeu;
    return;

L_60EA:
    /* 000060ea   2  addq.w #4,A7 */
    c->pc = 0x000060eau;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_60EC:
    /* 000060ec   2  unlk A5 */
    c->pc = 0x000060ecu;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_60EE:
    /* 000060ee   2  rts */
    c->pc = 0x000060eeu;
    rc_ret(c, m);
    return;

}
