/* fn_000180ee - 284 byte(s), 80 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000180ee(cpu_t *c, rt_machine *m)
{
    u32 t0, t1;

    switch (c->pc)
    {
    case RC_ADDR(0x000180eeu): goto L_180EE;
    case RC_ADDR(0x000180f2u): goto L_180F2;
    case RC_ADDR(0x000180f6u): goto L_180F6;
    case RC_ADDR(0x000180f8u): goto L_180F8;
    case RC_ADDR(0x000180fcu): goto L_180FC;
    case RC_ADDR(0x000180feu): goto L_180FE;
    case RC_ADDR(0x00018102u): goto L_18102;
    case RC_ADDR(0x00018106u): goto L_18106;
    case RC_ADDR(0x0001810au): goto L_1810A;
    case RC_ADDR(0x0001810cu): goto L_1810C;
    case RC_ADDR(0x00018112u): goto L_18112;
    case RC_ADDR(0x00018114u): goto L_18114;
    case RC_ADDR(0x00018116u): goto L_18116;
    case RC_ADDR(0x0001811au): goto L_1811A;
    case RC_ADDR(0x0001811cu): goto L_1811C;
    case RC_ADDR(0x00018120u): goto L_18120;
    case RC_ADDR(0x00018124u): goto L_18124;
    case RC_ADDR(0x00018126u): goto L_18126;
    case RC_ADDR(0x00018128u): goto L_18128;
    case RC_ADDR(0x0001812cu): goto L_1812C;
    case RC_ADDR(0x00018130u): goto L_18130;
    case RC_ADDR(0x00018134u): goto L_18134;
    case RC_ADDR(0x00018138u): goto L_18138;
    case RC_ADDR(0x0001813cu): goto L_1813C;
    case RC_ADDR(0x0001813eu): goto L_1813E;
    case RC_ADDR(0x00018142u): goto L_18142;
    case RC_ADDR(0x00018146u): goto L_18146;
    case RC_ADDR(0x00018148u): goto L_18148;
    case RC_ADDR(0x0001814au): goto L_1814A;
    case RC_ADDR(0x0001814eu): goto L_1814E;
    case RC_ADDR(0x00018152u): goto L_18152;
    case RC_ADDR(0x00018156u): goto L_18156;
    case RC_ADDR(0x0001815au): goto L_1815A;
    case RC_ADDR(0x0001815eu): goto L_1815E;
    case RC_ADDR(0x00018162u): goto L_18162;
    case RC_ADDR(0x00018168u): goto L_18168;
    case RC_ADDR(0x0001816au): goto L_1816A;
    case RC_ADDR(0x0001816cu): goto L_1816C;
    case RC_ADDR(0x00018170u): goto L_18170;
    case RC_ADDR(0x00018174u): goto L_18174;
    case RC_ADDR(0x00018176u): goto L_18176;
    case RC_ADDR(0x0001817au): goto L_1817A;
    case RC_ADDR(0x0001817eu): goto L_1817E;
    case RC_ADDR(0x00018180u): goto L_18180;
    case RC_ADDR(0x00018182u): goto L_18182;
    case RC_ADDR(0x00018186u): goto L_18186;
    case RC_ADDR(0x0001818au): goto L_1818A;
    case RC_ADDR(0x0001818eu): goto L_1818E;
    case RC_ADDR(0x00018192u): goto L_18192;
    case RC_ADDR(0x00018196u): goto L_18196;
    case RC_ADDR(0x0001819au): goto L_1819A;
    case RC_ADDR(0x0001819cu): goto L_1819C;
    case RC_ADDR(0x0001819eu): goto L_1819E;
    case RC_ADDR(0x000181a2u): goto L_181A2;
    case RC_ADDR(0x000181a6u): goto L_181A6;
    case RC_ADDR(0x000181aau): goto L_181AA;
    case RC_ADDR(0x000181aeu): goto L_181AE;
    case RC_ADDR(0x000181b2u): goto L_181B2;
    case RC_ADDR(0x000181b6u): goto L_181B6;
    case RC_ADDR(0x000181b8u): goto L_181B8;
    case RC_ADDR(0x000181bcu): goto L_181BC;
    case RC_ADDR(0x000181beu): goto L_181BE;
    case RC_ADDR(0x000181c2u): goto L_181C2;
    case RC_ADDR(0x000181c8u): goto L_181C8;
    case RC_ADDR(0x000181ccu): goto L_181CC;
    case RC_ADDR(0x000181ceu): goto L_181CE;
    case RC_ADDR(0x000181d2u): goto L_181D2;
    case RC_ADDR(0x000181d6u): goto L_181D6;
    case RC_ADDR(0x000181dau): goto L_181DA;
    case RC_ADDR(0x000181deu): goto L_181DE;
    case RC_ADDR(0x000181e2u): goto L_181E2;
    case RC_ADDR(0x000181e6u): goto L_181E6;
    case RC_ADDR(0x000181eau): goto L_181EA;
    case RC_ADDR(0x000181eeu): goto L_181EE;
    case RC_ADDR(0x000181f2u): goto L_181F2;
    case RC_ADDR(0x000181f6u): goto L_181F6;
    case RC_ADDR(0x000181fau): goto L_181FA;
    case RC_ADDR(0x000181feu): goto L_181FE;
    case RC_ADDR(0x00018202u): goto L_18202;
    case RC_ADDR(0x00018206u): goto L_18206;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_180EE:
    /* 000180ee   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x000180eeu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_180F2:
    /* 000180f2   4  tst.w (1b2c,A4) */
    c->pc = RC_ADDR(0x000180f2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b2cu));
    rc_set_nzvc(c, t0, RC_W);

L_180F6:
    /* 000180f6   2  bne 00018116 */
    c->pc = RC_ADDR(0x000180f6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_18116;

L_180F8:
    /* 000180f8   4  tst.w (1b3e,A4) */
    c->pc = RC_ADDR(0x000180f8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b3eu));
    rc_set_nzvc(c, t0, RC_W);

L_180FC:
    /* 000180fc   2  bne 00018112 */
    c->pc = RC_ADDR(0x000180fcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_18112;

L_180FE:
    /* 000180fe   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x000180feu);
    rc_step(c, m, 12);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18102:
    /* 00018102   4  pea (0001820a) */
    c->pc = RC_ADDR(0x00018102u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001820au));

L_18106:
    /* 00018106   4  jsr (000188e8) */
    c->pc = RC_ADDR(0x00018106u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001810au));
    rc_depth++;
    c->pc = RC_ADDR(0x000188e8u);
    return;

L_1810A:
    /* 0001810a   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0001810au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1810C:
    /* 0001810c   6  move.w #1,(1b3e,A4) */
    c->pc = RC_ADDR(0x0001810cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1b3eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18112:
    /* 00018112   2  unlk A5 */
    c->pc = RC_ADDR(0x00018112u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_18114:
    /* 00018114   2  rts */
    c->pc = RC_ADDR(0x00018114u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_18116:
    /* 00018116   4  tst.w (1cd8,A4) */
    c->pc = RC_ADDR(0x00018116u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cd8u));
    rc_set_nzvc(c, t0, RC_W);

L_1811A:
    /* 0001811a   2  beq 00018162 */
    c->pc = RC_ADDR(0x0001811au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18162;

L_1811C:
    /* 0001811c   4  pea (1832,A4) */
    c->pc = RC_ADDR(0x0001811cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1832u));

L_18120:
    /* 00018120   4  move.l (1cc4,A4),-(A7) */
    c->pc = RC_ADDR(0x00018120u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1cc4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18124:
    /* 00018124   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00018124u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18126:
    /* 00018126   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00018126u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18128:
    /* 00018128   4  jsr (ffff8170,A4) */
    c->pc = RC_ADDR(0x00018128u);
    rc_step(c, m, 18);
    /* vector 61 */
    rc_push32(c, m, RC_ADDR(0x0001812cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c66u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012986u);
    return;

L_1812C:
    /* 0001812c   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001812cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_18130:
    /* 00018130   4  pea (00000015).l */
    c->pc = RC_ADDR(0x00018130u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000015u);

L_18134:
    /* 00018134   4  pea (1cda,A4) */
    c->pc = RC_ADDR(0x00018134u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1cdau));

L_18138:
    /* 00018138   4  jsr (ffff83b0,A4) */
    c->pc = RC_ADDR(0x00018138u);
    rc_step(c, m, 18);
    /* vector 157 */
    rc_push32(c, m, RC_ADDR(0x0001813cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002398cu);
    return;

L_1813C:
    /* 0001813c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001813cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1813E:
    /* 0001813e   4  pea (0000000f).l */
    c->pc = RC_ADDR(0x0001813eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000fu);

L_18142:
    /* 00018142   4  move.w (1b2c,A4),D0 */
    c->pc = RC_ADDR(0x00018142u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b2cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18146:
    /* 00018146   2  ext.l D0 */
    c->pc = RC_ADDR(0x00018146u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_18148:
    /* 00018148   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00018148u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1814A:
    /* 0001814a   4  pea (56,A0) */
    c->pc = RC_ADDR(0x0001814au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[0] + 0x56u));

L_1814E:
    /* 0001814e   4  pea (00000009).l */
    c->pc = RC_ADDR(0x0001814eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000009u);

L_18152:
    /* 00018152   4  pea (00000056).l */
    c->pc = RC_ADDR(0x00018152u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000056u);

L_18156:
    /* 00018156   4  pea (1cda,A4) */
    c->pc = RC_ADDR(0x00018156u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1cdau));

L_1815A:
    /* 0001815a   4  jsr (ffff83aa,A4) */
    c->pc = RC_ADDR(0x0001815au);
    rc_step(c, m, 18);
    /* vector 156 */
    rc_push32(c, m, RC_ADDR(0x0001815eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002397au);
    return;

L_1815E:
    /* 0001815e   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x0001815eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_18162:
    /* 00018162   6  cmpi.w #bd,(1b2c,A4) */
    c->pc = RC_ADDR(0x00018162u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b2cu));
    rc_cmp(c, RC_W, t0, 0x000000bdu);

L_18168:
    /* 00018168   2  bgt 000181ae */
    c->pc = RC_ADDR(0x00018168u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_181AE;

L_1816A:
    /* 0001816a   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001816au);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1816C:
    /* 0001816c   4  pea (1cda,A4) */
    c->pc = RC_ADDR(0x0001816cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1cdau));

L_18170:
    /* 00018170   4  jsr (ffff83b0,A4) */
    c->pc = RC_ADDR(0x00018170u);
    rc_step(c, m, 18);
    /* vector 157 */
    rc_push32(c, m, RC_ADDR(0x00018174u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002398cu);
    return;

L_18174:
    /* 00018174   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00018174u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_18176:
    /* 00018176   4  pea (00000009).l */
    c->pc = RC_ADDR(0x00018176u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000009u);

L_1817A:
    /* 0001817a   4  move.w (1b2c,A4),D0 */
    c->pc = RC_ADDR(0x0001817au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b2cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1817E:
    /* 0001817e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001817eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_18180:
    /* 00018180   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00018180u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_18182:
    /* 00018182   4  pea (56,A0) */
    c->pc = RC_ADDR(0x00018182u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[0] + 0x56u));

L_18186:
    /* 00018186   4  pea (1cda,A4) */
    c->pc = RC_ADDR(0x00018186u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1cdau));

L_1818A:
    /* 0001818a   4  jsr (ffff839e,A4) */
    c->pc = RC_ADDR(0x0001818au);
    rc_step(c, m, 18);
    /* vector 154 */
    rc_push32(c, m, RC_ADDR(0x0001818eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e94u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023954u);
    return;

L_1818E:
    /* 0001818e   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001818eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_18192:
    /* 00018192   4  pea (0000000f).l */
    c->pc = RC_ADDR(0x00018192u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000fu);

L_18196:
    /* 00018196   4  move.w (1b2c,A4),D0 */
    c->pc = RC_ADDR(0x00018196u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b2cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1819A:
    /* 0001819a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001819au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1819C:
    /* 0001819c   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0001819cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1819E:
    /* 0001819e   4  pea (56,A0) */
    c->pc = RC_ADDR(0x0001819eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[0] + 0x56u));

L_181A2:
    /* 000181a2   4  pea (1cda,A4) */
    c->pc = RC_ADDR(0x000181a2u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1cdau));

L_181A6:
    /* 000181a6   4  jsr (ffff838c,A4) */
    c->pc = RC_ADDR(0x000181a6u);
    rc_step(c, m, 18);
    /* vector 151 */
    rc_push32(c, m, RC_ADDR(0x000181aau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e82u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002389eu);
    return;

L_181AA:
    /* 000181aa   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000181aau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_181AE:
    /* 000181ae   4  move.w (1cd0,A4),D0 */
    c->pc = RC_ADDR(0x000181aeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cd0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_181B2:
    /* 000181b2   4  cmp.w (1b2a,A4),D0 */
    c->pc = RC_ADDR(0x000181b2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b2au));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_181B6:
    /* 000181b6   2  bne 000181be */
    c->pc = RC_ADDR(0x000181b6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_181BE;

L_181B8:
    /* 000181b8   4  tst.w (1cd8,A4) */
    c->pc = RC_ADDR(0x000181b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cd8u));
    rc_set_nzvc(c, t0, RC_W);

L_181BC:
    /* 000181bc   2  beq 00018206 */
    c->pc = RC_ADDR(0x000181bcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18206;

L_181BE:
    /* 000181be   4  clr.w (1cd8,A4) */
    c->pc = RC_ADDR(0x000181beu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1cd8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_181C2:
    /* 000181c2   6  move.w (1b2a,A4),(1cd0,A4) */
    c->pc = RC_ADDR(0x000181c2u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b2au));
    rc_wr16(c, m, (c->a[4] + 0x1cd0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_181C8:
    /* 000181c8   4  pea (0000000b).l */
    c->pc = RC_ADDR(0x000181c8u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000bu);

L_181CC:
    /* 000181cc   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000181ccu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_181CE:
    /* 000181ce   4  pea (0000001d).l */
    c->pc = RC_ADDR(0x000181ceu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000001du);

L_181D2:
    /* 000181d2   4  jsr (00017e58) */
    c->pc = RC_ADDR(0x000181d2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000181d6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00017e58u);
    return;

L_181D6:
    /* 000181d6   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000181d6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_181DA:
    /* 000181da   4  move.w (1b2a,A4),-(A7) */
    c->pc = RC_ADDR(0x000181dau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b2au));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_181DE:
    /* 000181de   4  pea (00018250) */
    c->pc = RC_ADDR(0x000181deu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00018250u));

L_181E2:
    /* 000181e2   4  pea (fffffff6,A5) */
    c->pc = RC_ADDR(0x000181e2u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0xau));

L_181E6:
    /* 000181e6   4  jsr (ffff82f6,A4) */
    c->pc = RC_ADDR(0x000181e6u);
    rc_step(c, m, 18);
    /* vector 126 */
    rc_push32(c, m, RC_ADDR(0x000181eau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023decu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022e58u);
    return;

L_181EA:
    /* 000181ea   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000181eau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_181EE:
    /* 000181ee   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x000181eeu);
    rc_step(c, m, 12);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_181F2:
    /* 000181f2   4  move.w #10,-(A7) */
    c->pc = RC_ADDR(0x000181f2u);
    rc_step(c, m, 12);
    t0 = 0x00000010u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_181F6:
    /* 000181f6   4  move.w #1d,-(A7) */
    c->pc = RC_ADDR(0x000181f6u);
    rc_step(c, m, 12);
    t0 = 0x0000001du;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_181FA:
    /* 000181fa   4  pea (fffffff6,A5) */
    c->pc = RC_ADDR(0x000181fau);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0xau));

L_181FE:
    /* 000181fe   4  jsr (00018880) */
    c->pc = RC_ADDR(0x000181feu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018202u));
    rc_depth++;
    c->pc = RC_ADDR(0x00018880u);
    return;

L_18202:
    /* 00018202   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00018202u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_18206:
    /* 00018206   4  bra 00018112 */
    c->pc = RC_ADDR(0x00018206u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_18112;

}
