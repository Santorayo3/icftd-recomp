/* fn_00012fdc - 312 byte(s), 86 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00012fdc(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00012fdcu): goto L_12FDC;
    case RC_ADDR(0x00012fe0u): goto L_12FE0;
    case RC_ADDR(0x00012fe4u): goto L_12FE4;
    case RC_ADDR(0x00012fe6u): goto L_12FE6;
    case RC_ADDR(0x00012fe8u): goto L_12FE8;
    case RC_ADDR(0x00012fecu): goto L_12FEC;
    case RC_ADDR(0x00012ff0u): goto L_12FF0;
    case RC_ADDR(0x00012ff4u): goto L_12FF4;
    case RC_ADDR(0x00012ff6u): goto L_12FF6;
    case RC_ADDR(0x00012ffau): goto L_12FFA;
    case RC_ADDR(0x00012ffcu): goto L_12FFC;
    case RC_ADDR(0x00012ffeu): goto L_12FFE;
    case RC_ADDR(0x00013002u): goto L_13002;
    case RC_ADDR(0x00013004u): goto L_13004;
    case RC_ADDR(0x00013006u): goto L_13006;
    case RC_ADDR(0x0001300au): goto L_1300A;
    case RC_ADDR(0x0001300eu): goto L_1300E;
    case RC_ADDR(0x00013010u): goto L_13010;
    case RC_ADDR(0x00013014u): goto L_13014;
    case RC_ADDR(0x00013018u): goto L_13018;
    case RC_ADDR(0x0001301cu): goto L_1301C;
    case RC_ADDR(0x00013020u): goto L_13020;
    case RC_ADDR(0x00013024u): goto L_13024;
    case RC_ADDR(0x00013028u): goto L_13028;
    case RC_ADDR(0x0001302cu): goto L_1302C;
    case RC_ADDR(0x00013030u): goto L_13030;
    case RC_ADDR(0x00013034u): goto L_13034;
    case RC_ADDR(0x00013038u): goto L_13038;
    case RC_ADDR(0x0001303cu): goto L_1303C;
    case RC_ADDR(0x00013040u): goto L_13040;
    case RC_ADDR(0x00013044u): goto L_13044;
    case RC_ADDR(0x00013048u): goto L_13048;
    case RC_ADDR(0x0001304cu): goto L_1304C;
    case RC_ADDR(0x00013050u): goto L_13050;
    case RC_ADDR(0x00013054u): goto L_13054;
    case RC_ADDR(0x00013058u): goto L_13058;
    case RC_ADDR(0x0001305cu): goto L_1305C;
    case RC_ADDR(0x00013060u): goto L_13060;
    case RC_ADDR(0x00013064u): goto L_13064;
    case RC_ADDR(0x00013068u): goto L_13068;
    case RC_ADDR(0x0001306cu): goto L_1306C;
    case RC_ADDR(0x00013070u): goto L_13070;
    case RC_ADDR(0x00013074u): goto L_13074;
    case RC_ADDR(0x00013078u): goto L_13078;
    case RC_ADDR(0x0001307cu): goto L_1307C;
    case RC_ADDR(0x00013080u): goto L_13080;
    case RC_ADDR(0x00013084u): goto L_13084;
    case RC_ADDR(0x00013088u): goto L_13088;
    case RC_ADDR(0x0001308cu): goto L_1308C;
    case RC_ADDR(0x00013090u): goto L_13090;
    case RC_ADDR(0x00013094u): goto L_13094;
    case RC_ADDR(0x00013098u): goto L_13098;
    case RC_ADDR(0x0001309cu): goto L_1309C;
    case RC_ADDR(0x000130a0u): goto L_130A0;
    case RC_ADDR(0x000130a4u): goto L_130A4;
    case RC_ADDR(0x000130aau): goto L_130AA;
    case RC_ADDR(0x000130aeu): goto L_130AE;
    case RC_ADDR(0x000130b0u): goto L_130B0;
    case RC_ADDR(0x000130b2u): goto L_130B2;
    case RC_ADDR(0x000130b6u): goto L_130B6;
    case RC_ADDR(0x000130bau): goto L_130BA;
    case RC_ADDR(0x000130beu): goto L_130BE;
    case RC_ADDR(0x000130c0u): goto L_130C0;
    case RC_ADDR(0x000130c2u): goto L_130C2;
    case RC_ADDR(0x000130c6u): goto L_130C6;
    case RC_ADDR(0x000130c8u): goto L_130C8;
    case RC_ADDR(0x000130ccu): goto L_130CC;
    case RC_ADDR(0x000130d0u): goto L_130D0;
    case RC_ADDR(0x000130d2u): goto L_130D2;
    case RC_ADDR(0x000130d6u): goto L_130D6;
    case RC_ADDR(0x000130dau): goto L_130DA;
    case RC_ADDR(0x000130dcu): goto L_130DC;
    case RC_ADDR(0x000130e2u): goto L_130E2;
    case RC_ADDR(0x000130e4u): goto L_130E4;
    case RC_ADDR(0x000130eau): goto L_130EA;
    case RC_ADDR(0x000130ecu): goto L_130EC;
    case RC_ADDR(0x000130f0u): goto L_130F0;
    case RC_ADDR(0x000130f4u): goto L_130F4;
    case RC_ADDR(0x000130f8u): goto L_130F8;
    case RC_ADDR(0x000130fcu): goto L_130FC;
    case RC_ADDR(0x000130feu): goto L_130FE;
    case RC_ADDR(0x00013100u): goto L_13100;
    case RC_ADDR(0x00013104u): goto L_13104;
    case RC_ADDR(0x00013108u): goto L_13108;
    case RC_ADDR(0x0001310cu): goto L_1310C;
    case RC_ADDR(0x00013112u): goto L_13112;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_12FDC:
    /* 00012fdc   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00012fdcu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_12FE0:
    /* 00012fe0   4  move.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x00012fe0u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12FE4:
    /* 00012fe4   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012fe4u);
    rc_ext_l(c, 0);

L_12FE6:
    /* 00012fe6   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00012fe6u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_12FE8:
    /* 00012fe8   4  lea (ffff8440,A4),A0 */
    c->pc = RC_ADDR(0x00012fe8u);
    c->a[0] = (c->a[4] - 0x7bc0u);

L_12FEC:
    /* 00012fec   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00012fecu);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12FF0:
    /* 00012ff0   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00012ff0u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12FF4:
    /* 00012ff4   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012ff4u);
    rc_ext_l(c, 0);

L_12FF6:
    /* 00012ff6   4  divs.w #a,D0 */
    c->pc = RC_ADDR(0x00012ff6u);
    t0 = 0x0000000au;
    rc_divs(c, m, 0, t0);

L_12FFA:
    /* 00012ffa   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012ffau);
    rc_ext_l(c, 0);

L_12FFC:
    /* 00012ffc   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00012ffcu);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_12FFE:
    /* 00012ffe   4  move.b (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x00012ffeu);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_13002:
    /* 00013002   2  ext.w D0 */
    c->pc = RC_ADDR(0x00013002u);
    rc_ext_w(c, 0);

L_13004:
    /* 00013004   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00013004u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13006:
    /* 00013006   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00013006u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1300A:
    /* 0001300a   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001300au);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1300E:
    /* 0001300e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001300eu);
    rc_ext_l(c, 0);

L_13010:
    /* 00013010   4  divs.w #a,D0 */
    c->pc = RC_ADDR(0x00013010u);
    t0 = 0x0000000au;
    rc_divs(c, m, 0, t0);

L_13014:
    /* 00013014   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00013014u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13018:
    /* 00013018   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00013018u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1301C:
    /* 0001301c   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x0001301cu);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_13020:
    /* 00013020   4  lea (fffff380,A4),A0 */
    c->pc = RC_ADDR(0x00013020u);
    c->a[0] = (c->a[4] - 0xc80u);

L_13024:
    /* 00013024   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013024u);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13028:
    /* 00013028   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00013028u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1302C:
    /* 0001302c   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x0001302cu);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_13030:
    /* 00013030   4  lea (fffff37c,A4),A0 */
    c->pc = RC_ADDR(0x00013030u);
    c->a[0] = (c->a[4] - 0xc84u);

L_13034:
    /* 00013034   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013034u);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13038:
    /* 00013038   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00013038u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1303C:
    /* 0001303c   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x0001303cu);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_13040:
    /* 00013040   4  lea (fffff382,A4),A0 */
    c->pc = RC_ADDR(0x00013040u);
    c->a[0] = (c->a[4] - 0xc7eu);

L_13044:
    /* 00013044   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013044u);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13048:
    /* 00013048   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00013048u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1304C:
    /* 0001304c   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x0001304cu);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_13050:
    /* 00013050   4  lea (fffff37e,A4),A0 */
    c->pc = RC_ADDR(0x00013050u);
    c->a[0] = (c->a[4] - 0xc82u);

L_13054:
    /* 00013054   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013054u);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13058:
    /* 00013058   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00013058u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1305C:
    /* 0001305c   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x0001305cu);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_13060:
    /* 00013060   4  lea (fffff38a,A4),A0 */
    c->pc = RC_ADDR(0x00013060u);
    c->a[0] = (c->a[4] - 0xc76u);

L_13064:
    /* 00013064   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013064u);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_13068:
    /* 00013068   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00013068u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1306C:
    /* 0001306c   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x0001306cu);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_13070:
    /* 00013070   4  lea (fffff389,A4),A0 */
    c->pc = RC_ADDR(0x00013070u);
    c->a[0] = (c->a[4] - 0xc77u);

L_13074:
    /* 00013074   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013074u);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_13078:
    /* 00013078   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00013078u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1307C:
    /* 0001307c   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x0001307cu);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_13080:
    /* 00013080   4  lea (fffff38e,A4),A0 */
    c->pc = RC_ADDR(0x00013080u);
    c->a[0] = (c->a[4] - 0xc72u);

L_13084:
    /* 00013084   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013084u);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_13088:
    /* 00013088   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00013088u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1308C:
    /* 0001308c   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x0001308cu);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_13090:
    /* 00013090   4  lea (fffff38c,A4),A0 */
    c->pc = RC_ADDR(0x00013090u);
    c->a[0] = (c->a[4] - 0xc74u);

L_13094:
    /* 00013094   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013094u);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_13098:
    /* 00013098   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00013098u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1309C:
    /* 0001309c   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x0001309cu);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_130A0:
    /* 000130a0   4  lea (fffff38d,A4),A0 */
    c->pc = RC_ADDR(0x000130a0u);
    c->a[0] = (c->a[4] - 0xc73u);

L_130A4:
    /* 000130a4   6  move.b #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000130a4u);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_130AA:
    /* 000130aa   4  move.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x000130aau);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_130AE:
    /* 000130ae   2  ext.l D0 */
    c->pc = RC_ADDR(0x000130aeu);
    rc_ext_l(c, 0);

L_130B0:
    /* 000130b0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000130b0u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_130B2:
    /* 000130b2   4  lea (ffff847c,A4),A0 */
    c->pc = RC_ADDR(0x000130b2u);
    c->a[0] = (c->a[4] - 0x7b84u);

L_130B6:
    /* 000130b6   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000130b6u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_130BA:
    /* 000130ba   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000130bau);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_130BE:
    /* 000130be   2  ext.l D0 */
    c->pc = RC_ADDR(0x000130beu);
    rc_ext_l(c, 0);

L_130C0:
    /* 000130c0   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x000130c0u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_130C2:
    /* 000130c2   4  tst.b (0,A0,D1.w) */
    c->pc = RC_ADDR(0x000130c2u);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_130C6:
    /* 000130c6   2  beq 00013100 */
    c->pc = RC_ADDR(0x000130c6u);
    if (rc_cond(c, 7)) goto L_13100;

L_130C8:
    /* 000130c8   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000130c8u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_130CC:
    /* 000130cc   4  jsr (00012c34) */
    c->pc = RC_ADDR(0x000130ccu);
    rc_push32(c, m, RC_ADDR(0x000130d0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00012c34u);
    return;

L_130D0:
    /* 000130d0   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000130d0u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_130D2:
    /* 000130d2   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000130d2u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_130D6:
    /* 000130d6   4  jsr (00012a84) */
    c->pc = RC_ADDR(0x000130d6u);
    rc_push32(c, m, RC_ADDR(0x000130dau));
    rc_depth++;
    c->pc = RC_ADDR(0x00012a84u);
    return;

L_130DA:
    /* 000130da   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000130dau);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_130DC:
    /* 000130dc   6  cmpi.w #8,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000130dcu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_130E2:
    /* 000130e2   2  blt 000130ec */
    c->pc = RC_ADDR(0x000130e2u);
    if (rc_cond(c, 13)) goto L_130EC;

L_130E4:
    /* 000130e4   6  cmpi.w #a,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000130e4u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_130EA:
    /* 000130ea   2  ble 00013100 */
    c->pc = RC_ADDR(0x000130eau);
    if (rc_cond(c, 15)) goto L_13100;

L_130EC:
    /* 000130ec   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000130ecu);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_130F0:
    /* 000130f0   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x000130f0u);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_130F4:
    /* 000130f4   4  lea (fffff388,A4),A0 */
    c->pc = RC_ADDR(0x000130f4u);
    c->a[0] = (c->a[4] - 0xc78u);

L_130F8:
    /* 000130f8   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000130f8u);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_130FC:
    /* 000130fc   2  unlk A5 */
    c->pc = RC_ADDR(0x000130fcu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_130FE:
    /* 000130fe   2  rts */
    c->pc = RC_ADDR(0x000130feu);
    rc_ret(c, m);
    return;

L_13100:
    /* 00013100   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00013100u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13104:
    /* 00013104   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00013104u);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_13108:
    /* 00013108   4  lea (fffff388,A4),A0 */
    c->pc = RC_ADDR(0x00013108u);
    c->a[0] = (c->a[4] - 0xc78u);

L_1310C:
    /* 0001310c   6  move.b #ff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001310cu);
    t0 = 0x000000ffu;
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_13112:
    /* 00013112   2  bra 000130fc */
    c->pc = RC_ADDR(0x00013112u);
    rc_tick();
    goto L_130FC;

}
