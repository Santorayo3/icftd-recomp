/* fn_0001c11e - 194 byte(s), 56 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001c11e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001c11eu): goto L_1C11E;
    case RC_ADDR(0x0001c122u): goto L_1C122;
    case RC_ADDR(0x0001c126u): goto L_1C126;
    case RC_ADDR(0x0001c12au): goto L_1C12A;
    case RC_ADDR(0x0001c12eu): goto L_1C12E;
    case RC_ADDR(0x0001c132u): goto L_1C132;
    case RC_ADDR(0x0001c136u): goto L_1C136;
    case RC_ADDR(0x0001c13au): goto L_1C13A;
    case RC_ADDR(0x0001c13eu): goto L_1C13E;
    case RC_ADDR(0x0001c140u): goto L_1C140;
    case RC_ADDR(0x0001c144u): goto L_1C144;
    case RC_ADDR(0x0001c146u): goto L_1C146;
    case RC_ADDR(0x0001c148u): goto L_1C148;
    case RC_ADDR(0x0001c14cu): goto L_1C14C;
    case RC_ADDR(0x0001c150u): goto L_1C150;
    case RC_ADDR(0x0001c154u): goto L_1C154;
    case RC_ADDR(0x0001c156u): goto L_1C156;
    case RC_ADDR(0x0001c158u): goto L_1C158;
    case RC_ADDR(0x0001c15au): goto L_1C15A;
    case RC_ADDR(0x0001c15cu): goto L_1C15C;
    case RC_ADDR(0x0001c160u): goto L_1C160;
    case RC_ADDR(0x0001c164u): goto L_1C164;
    case RC_ADDR(0x0001c168u): goto L_1C168;
    case RC_ADDR(0x0001c16au): goto L_1C16A;
    case RC_ADDR(0x0001c16cu): goto L_1C16C;
    case RC_ADDR(0x0001c170u): goto L_1C170;
    case RC_ADDR(0x0001c172u): goto L_1C172;
    case RC_ADDR(0x0001c174u): goto L_1C174;
    case RC_ADDR(0x0001c176u): goto L_1C176;
    case RC_ADDR(0x0001c178u): goto L_1C178;
    case RC_ADDR(0x0001c17au): goto L_1C17A;
    case RC_ADDR(0x0001c17eu): goto L_1C17E;
    case RC_ADDR(0x0001c182u): goto L_1C182;
    case RC_ADDR(0x0001c186u): goto L_1C186;
    case RC_ADDR(0x0001c188u): goto L_1C188;
    case RC_ADDR(0x0001c18au): goto L_1C18A;
    case RC_ADDR(0x0001c18eu): goto L_1C18E;
    case RC_ADDR(0x0001c192u): goto L_1C192;
    case RC_ADDR(0x0001c196u): goto L_1C196;
    case RC_ADDR(0x0001c198u): goto L_1C198;
    case RC_ADDR(0x0001c19eu): goto L_1C19E;
    case RC_ADDR(0x0001c1a0u): goto L_1C1A0;
    case RC_ADDR(0x0001c1a6u): goto L_1C1A6;
    case RC_ADDR(0x0001c1a8u): goto L_1C1A8;
    case RC_ADDR(0x0001c1aeu): goto L_1C1AE;
    case RC_ADDR(0x0001c1b4u): goto L_1C1B4;
    case RC_ADDR(0x0001c1b6u): goto L_1C1B6;
    case RC_ADDR(0x0001c1bcu): goto L_1C1BC;
    case RC_ADDR(0x0001c1c2u): goto L_1C1C2;
    case RC_ADDR(0x0001c1c4u): goto L_1C1C4;
    case RC_ADDR(0x0001c1cau): goto L_1C1CA;
    case RC_ADDR(0x0001c1d0u): goto L_1C1D0;
    case RC_ADDR(0x0001c1d2u): goto L_1C1D2;
    case RC_ADDR(0x0001c1d8u): goto L_1C1D8;
    case RC_ADDR(0x0001c1dcu): goto L_1C1DC;
    case RC_ADDR(0x0001c1deu): goto L_1C1DE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1C11E:
    /* 0001c11e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001c11eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1C122:
    /* 0001c122   4  movem.l { A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001c122u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1C126:
    /* 0001c126   4  move.w (8,A5),D5 */
    c->pc = RC_ADDR(0x0001c126u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C12A:
    /* 0001c12a   4  sub.w (e6c,A4),D5 */
    c->pc = RC_ADDR(0x0001c12au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6cu));
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_1C12E:
    /* 0001c12e   4  move.w (a,A5),D6 */
    c->pc = RC_ADDR(0x0001c12eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C132:
    /* 0001c132   4  sub.w (e6e,A4),D6 */
    c->pc = RC_ADDR(0x0001c132u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6eu));
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_1C136:
    /* 0001c136   4  clr.w (110a,A4) */
    c->pc = RC_ADDR(0x0001c136u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x110au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C13A:
    /* 0001c13a   4  clr.w (1108,A4) */
    c->pc = RC_ADDR(0x0001c13au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1108u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C13E:
    /* 0001c13e   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0001c13eu);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1C140:
    /* 0001c140   4  pea (ffff83ff).l */
    c->pc = RC_ADDR(0x0001c140u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xffff83ffu);

L_1C144:
    /* 0001c144   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001c144u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C146:
    /* 0001c146   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c146u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C148:
    /* 0001c148   4  lea (ffffceec,A4),A0 */
    c->pc = RC_ADDR(0x0001c148u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3114u);

L_1C14C:
    /* 0001c14c   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001c14cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C150:
    /* 0001c150   4  muls.w (c,A5),D1 */
    c->pc = RC_ADDR(0x0001c150u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_muls(c, 1, t0);

L_1C154:
    /* 0001c154   2  add.w D6,D1 */
    c->pc = RC_ADDR(0x0001c154u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1C156:
    /* 0001c156   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001c156u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C158:
    /* 0001c158   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001c158u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C15A:
    /* 0001c15a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c15au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C15C:
    /* 0001c15c   4  lea (ffffcee4,A4),A0 */
    c->pc = RC_ADDR(0x0001c15cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x311cu);

L_1C160:
    /* 0001c160   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001c160u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C164:
    /* 0001c164   4  muls.w (c,A5),D1 */
    c->pc = RC_ADDR(0x0001c164u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_muls(c, 1, t0);

L_1C168:
    /* 0001c168   2  add.w D5,D1 */
    c->pc = RC_ADDR(0x0001c168u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1C16A:
    /* 0001c16a   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001c16au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C16C:
    /* 0001c16c   4  jsr (0001c2a2) */
    c->pc = RC_ADDR(0x0001c16cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001c170u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c2a2u);
    return;

L_1C170:
    /* 0001c170   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001c170u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1C172:
    /* 0001c172   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001c172u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1C174:
    /* 0001c174   2  beq 0001c196 */
    c->pc = RC_ADDR(0x0001c174u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1C196;

L_1C176:
    /* 0001c176   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001c176u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C178:
    /* 0001c178   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c178u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C17A:
    /* 0001c17a   4  lea (ffffcee4,A4),A0 */
    c->pc = RC_ADDR(0x0001c17au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x311cu);

L_1C17E:
    /* 0001c17e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001c17eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C182:
    /* 0001c182   4  sub.w D1,(1108,A4) */
    c->pc = RC_ADDR(0x0001c182u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1108u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 1, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C186:
    /* 0001c186   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001c186u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C188:
    /* 0001c188   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c188u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C18A:
    /* 0001c18a   4  lea (ffffceec,A4),A0 */
    c->pc = RC_ADDR(0x0001c18au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3114u);

L_1C18E:
    /* 0001c18e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001c18eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C192:
    /* 0001c192   4  sub.w D1,(110a,A4) */
    c->pc = RC_ADDR(0x0001c192u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x110au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 1, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C196:
    /* 0001c196   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0001c196u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_1C198:
    /* 0001c198   6  cmp.l #4,D4 */
    c->pc = RC_ADDR(0x0001c198u);
    rc_step(c, m, 14);
    t0 = 0x00000004u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1C19E:
    /* 0001c19e   2  blt 0001c140 */
    c->pc = RC_ADDR(0x0001c19eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1C140; }

L_1C1A0:
    /* 0001c1a0   6  cmpi.w #ffff,(1108,A4) */
    c->pc = RC_ADDR(0x0001c1a0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1108u));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1C1A6:
    /* 0001c1a6   2  bge 0001c1ae */
    c->pc = RC_ADDR(0x0001c1a6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1C1AE;

L_1C1A8:
    /* 0001c1a8   6  move.w #ffff,(1108,A4) */
    c->pc = RC_ADDR(0x0001c1a8u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x1108u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C1AE:
    /* 0001c1ae   6  cmpi.w #1,(1108,A4) */
    c->pc = RC_ADDR(0x0001c1aeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1108u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1C1B4:
    /* 0001c1b4   2  ble 0001c1bc */
    c->pc = RC_ADDR(0x0001c1b4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1C1BC;

L_1C1B6:
    /* 0001c1b6   6  move.w #1,(1108,A4) */
    c->pc = RC_ADDR(0x0001c1b6u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1108u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C1BC:
    /* 0001c1bc   6  cmpi.w #ffff,(110a,A4) */
    c->pc = RC_ADDR(0x0001c1bcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110au));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1C1C2:
    /* 0001c1c2   2  bge 0001c1ca */
    c->pc = RC_ADDR(0x0001c1c2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1C1CA;

L_1C1C4:
    /* 0001c1c4   6  move.w #ffff,(110a,A4) */
    c->pc = RC_ADDR(0x0001c1c4u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x110au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C1CA:
    /* 0001c1ca   6  cmpi.w #1,(110a,A4) */
    c->pc = RC_ADDR(0x0001c1cau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110au));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1C1D0:
    /* 0001c1d0   2  ble 0001c1d8 */
    c->pc = RC_ADDR(0x0001c1d0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1C1D8;

L_1C1D2:
    /* 0001c1d2   6  move.w #1,(110a,A4) */
    c->pc = RC_ADDR(0x0001c1d2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x110au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C1D8:
    /* 0001c1d8   4  movem.l (SP)+,{ D4 D5 D6 } */
    c->pc = RC_ADDR(0x0001c1d8u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1C1DC:
    /* 0001c1dc   2  unlk A5 */
    c->pc = RC_ADDR(0x0001c1dcu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1C1DE:
    /* 0001c1de   2  rts */
    c->pc = RC_ADDR(0x0001c1deu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
