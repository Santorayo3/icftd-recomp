/* fn_0001c1e0 - 194 byte(s), 56 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001c1e0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001c1e0u): goto L_1C1E0;
    case RC_ADDR(0x0001c1e4u): goto L_1C1E4;
    case RC_ADDR(0x0001c1e8u): goto L_1C1E8;
    case RC_ADDR(0x0001c1ecu): goto L_1C1EC;
    case RC_ADDR(0x0001c1f0u): goto L_1C1F0;
    case RC_ADDR(0x0001c1f4u): goto L_1C1F4;
    case RC_ADDR(0x0001c1f8u): goto L_1C1F8;
    case RC_ADDR(0x0001c1fcu): goto L_1C1FC;
    case RC_ADDR(0x0001c200u): goto L_1C200;
    case RC_ADDR(0x0001c202u): goto L_1C202;
    case RC_ADDR(0x0001c208u): goto L_1C208;
    case RC_ADDR(0x0001c20au): goto L_1C20A;
    case RC_ADDR(0x0001c20cu): goto L_1C20C;
    case RC_ADDR(0x0001c210u): goto L_1C210;
    case RC_ADDR(0x0001c214u): goto L_1C214;
    case RC_ADDR(0x0001c218u): goto L_1C218;
    case RC_ADDR(0x0001c21au): goto L_1C21A;
    case RC_ADDR(0x0001c21cu): goto L_1C21C;
    case RC_ADDR(0x0001c21eu): goto L_1C21E;
    case RC_ADDR(0x0001c220u): goto L_1C220;
    case RC_ADDR(0x0001c224u): goto L_1C224;
    case RC_ADDR(0x0001c228u): goto L_1C228;
    case RC_ADDR(0x0001c22cu): goto L_1C22C;
    case RC_ADDR(0x0001c22eu): goto L_1C22E;
    case RC_ADDR(0x0001c230u): goto L_1C230;
    case RC_ADDR(0x0001c232u): goto L_1C232;
    case RC_ADDR(0x0001c234u): goto L_1C234;
    case RC_ADDR(0x0001c236u): goto L_1C236;
    case RC_ADDR(0x0001c238u): goto L_1C238;
    case RC_ADDR(0x0001c23au): goto L_1C23A;
    case RC_ADDR(0x0001c23cu): goto L_1C23C;
    case RC_ADDR(0x0001c240u): goto L_1C240;
    case RC_ADDR(0x0001c244u): goto L_1C244;
    case RC_ADDR(0x0001c248u): goto L_1C248;
    case RC_ADDR(0x0001c24au): goto L_1C24A;
    case RC_ADDR(0x0001c24cu): goto L_1C24C;
    case RC_ADDR(0x0001c250u): goto L_1C250;
    case RC_ADDR(0x0001c254u): goto L_1C254;
    case RC_ADDR(0x0001c258u): goto L_1C258;
    case RC_ADDR(0x0001c25au): goto L_1C25A;
    case RC_ADDR(0x0001c260u): goto L_1C260;
    case RC_ADDR(0x0001c262u): goto L_1C262;
    case RC_ADDR(0x0001c268u): goto L_1C268;
    case RC_ADDR(0x0001c26au): goto L_1C26A;
    case RC_ADDR(0x0001c270u): goto L_1C270;
    case RC_ADDR(0x0001c276u): goto L_1C276;
    case RC_ADDR(0x0001c278u): goto L_1C278;
    case RC_ADDR(0x0001c27eu): goto L_1C27E;
    case RC_ADDR(0x0001c284u): goto L_1C284;
    case RC_ADDR(0x0001c286u): goto L_1C286;
    case RC_ADDR(0x0001c28cu): goto L_1C28C;
    case RC_ADDR(0x0001c292u): goto L_1C292;
    case RC_ADDR(0x0001c294u): goto L_1C294;
    case RC_ADDR(0x0001c29au): goto L_1C29A;
    case RC_ADDR(0x0001c29eu): goto L_1C29E;
    case RC_ADDR(0x0001c2a0u): goto L_1C2A0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1C1E0:
    /* 0001c1e0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001c1e0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1C1E4:
    /* 0001c1e4   4  movem.l { A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001c1e4u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1C1E8:
    /* 0001c1e8   4  move.w (8,A5),D5 */
    c->pc = RC_ADDR(0x0001c1e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C1EC:
    /* 0001c1ec   4  sub.w (e6c,A4),D5 */
    c->pc = RC_ADDR(0x0001c1ecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6cu));
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_1C1F0:
    /* 0001c1f0   4  move.w (a,A5),D6 */
    c->pc = RC_ADDR(0x0001c1f0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C1F4:
    /* 0001c1f4   4  sub.w (e6e,A4),D6 */
    c->pc = RC_ADDR(0x0001c1f4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6eu));
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_1C1F8:
    /* 0001c1f8   4  clr.w (110a,A4) */
    c->pc = RC_ADDR(0x0001c1f8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x110au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C1FC:
    /* 0001c1fc   4  clr.w (1108,A4) */
    c->pc = RC_ADDR(0x0001c1fcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1108u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C200:
    /* 0001c200   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0001c200u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1C202:
    /* 0001c202   6  pea (0f8f81fc).l */
    c->pc = RC_ADDR(0x0001c202u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x0f8f81fcu);

L_1C208:
    /* 0001c208   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001c208u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C20A:
    /* 0001c20a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c20au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C20C:
    /* 0001c20c   4  lea (ffffcf04,A4),A0 */
    c->pc = RC_ADDR(0x0001c20cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x30fcu);

L_1C210:
    /* 0001c210   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001c210u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C214:
    /* 0001c214   4  muls.w (c,A5),D1 */
    c->pc = RC_ADDR(0x0001c214u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_muls(c, 1, t0);

L_1C218:
    /* 0001c218   2  add.w D6,D1 */
    c->pc = RC_ADDR(0x0001c218u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1C21A:
    /* 0001c21a   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001c21au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C21C:
    /* 0001c21c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001c21cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C21E:
    /* 0001c21e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c21eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C220:
    /* 0001c220   4  lea (ffffcef4,A4),A0 */
    c->pc = RC_ADDR(0x0001c220u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x310cu);

L_1C224:
    /* 0001c224   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001c224u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C228:
    /* 0001c228   4  muls.w (c,A5),D1 */
    c->pc = RC_ADDR(0x0001c228u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_muls(c, 1, t0);

L_1C22C:
    /* 0001c22c   2  add.w D5,D1 */
    c->pc = RC_ADDR(0x0001c22cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1C22E:
    /* 0001c22e   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001c22eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C230:
    /* 0001c230   2  bsr 0001c2a2 */
    c->pc = RC_ADDR(0x0001c230u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001c232u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c2a2u);
    return;

L_1C232:
    /* 0001c232   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001c232u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1C234:
    /* 0001c234   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001c234u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1C236:
    /* 0001c236   2  beq 0001c258 */
    c->pc = RC_ADDR(0x0001c236u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1C258;

L_1C238:
    /* 0001c238   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001c238u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C23A:
    /* 0001c23a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c23au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C23C:
    /* 0001c23c   4  lea (ffffcf14,A4),A0 */
    c->pc = RC_ADDR(0x0001c23cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x30ecu);

L_1C240:
    /* 0001c240   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001c240u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C244:
    /* 0001c244   4  add.w D1,(1108,A4) */
    c->pc = RC_ADDR(0x0001c244u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1108u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C248:
    /* 0001c248   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001c248u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C24A:
    /* 0001c24a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c24au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C24C:
    /* 0001c24c   4  lea (ffffcf24,A4),A0 */
    c->pc = RC_ADDR(0x0001c24cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x30dcu);

L_1C250:
    /* 0001c250   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001c250u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C254:
    /* 0001c254   4  add.w D1,(110a,A4) */
    c->pc = RC_ADDR(0x0001c254u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x110au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C258:
    /* 0001c258   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0001c258u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_1C25A:
    /* 0001c25a   6  cmp.l #8,D4 */
    c->pc = RC_ADDR(0x0001c25au);
    rc_step(c, m, 14);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1C260:
    /* 0001c260   2  blt 0001c202 */
    c->pc = RC_ADDR(0x0001c260u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1C202; }

L_1C262:
    /* 0001c262   6  cmpi.w #ffff,(1108,A4) */
    c->pc = RC_ADDR(0x0001c262u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1108u));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1C268:
    /* 0001c268   2  bge 0001c270 */
    c->pc = RC_ADDR(0x0001c268u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1C270;

L_1C26A:
    /* 0001c26a   6  move.w #ffff,(1108,A4) */
    c->pc = RC_ADDR(0x0001c26au);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x1108u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C270:
    /* 0001c270   6  cmpi.w #1,(1108,A4) */
    c->pc = RC_ADDR(0x0001c270u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1108u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1C276:
    /* 0001c276   2  ble 0001c27e */
    c->pc = RC_ADDR(0x0001c276u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1C27E;

L_1C278:
    /* 0001c278   6  move.w #1,(1108,A4) */
    c->pc = RC_ADDR(0x0001c278u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1108u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C27E:
    /* 0001c27e   6  cmpi.w #ffff,(110a,A4) */
    c->pc = RC_ADDR(0x0001c27eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110au));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1C284:
    /* 0001c284   2  bge 0001c28c */
    c->pc = RC_ADDR(0x0001c284u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1C28C;

L_1C286:
    /* 0001c286   6  move.w #ffff,(110a,A4) */
    c->pc = RC_ADDR(0x0001c286u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x110au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C28C:
    /* 0001c28c   6  cmpi.w #1,(110a,A4) */
    c->pc = RC_ADDR(0x0001c28cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110au));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1C292:
    /* 0001c292   2  ble 0001c29a */
    c->pc = RC_ADDR(0x0001c292u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1C29A;

L_1C294:
    /* 0001c294   6  move.w #1,(110a,A4) */
    c->pc = RC_ADDR(0x0001c294u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x110au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C29A:
    /* 0001c29a   4  movem.l (SP)+,{ D4 D5 D6 } */
    c->pc = RC_ADDR(0x0001c29au);
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

L_1C29E:
    /* 0001c29e   2  unlk A5 */
    c->pc = RC_ADDR(0x0001c29eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1C2A0:
    /* 0001c2a0   2  rts */
    c->pc = RC_ADDR(0x0001c2a0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
