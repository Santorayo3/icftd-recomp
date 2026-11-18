/* fn_0000f4e0 - 172 byte(s), 51 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000f4e0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f4e0u): goto L_F4E0;
    case RC_ADDR(0x0000f4e4u): goto L_F4E4;
    case RC_ADDR(0x0000f4e8u): goto L_F4E8;
    case RC_ADDR(0x0000f4ecu): goto L_F4EC;
    case RC_ADDR(0x0000f4f0u): goto L_F4F0;
    case RC_ADDR(0x0000f4f4u): goto L_F4F4;
    case RC_ADDR(0x0000f4f8u): goto L_F4F8;
    case RC_ADDR(0x0000f4fau): goto L_F4FA;
    case RC_ADDR(0x0000f4fcu): goto L_F4FC;
    case RC_ADDR(0x0000f4feu): goto L_F4FE;
    case RC_ADDR(0x0000f502u): goto L_F502;
    case RC_ADDR(0x0000f506u): goto L_F506;
    case RC_ADDR(0x0000f508u): goto L_F508;
    case RC_ADDR(0x0000f50au): goto L_F50A;
    case RC_ADDR(0x0000f50cu): goto L_F50C;
    case RC_ADDR(0x0000f50eu): goto L_F50E;
    case RC_ADDR(0x0000f512u): goto L_F512;
    case RC_ADDR(0x0000f516u): goto L_F516;
    case RC_ADDR(0x0000f518u): goto L_F518;
    case RC_ADDR(0x0000f51au): goto L_F51A;
    case RC_ADDR(0x0000f51cu): goto L_F51C;
    case RC_ADDR(0x0000f51eu): goto L_F51E;
    case RC_ADDR(0x0000f520u): goto L_F520;
    case RC_ADDR(0x0000f522u): goto L_F522;
    case RC_ADDR(0x0000f524u): goto L_F524;
    case RC_ADDR(0x0000f526u): goto L_F526;
    case RC_ADDR(0x0000f52au): goto L_F52A;
    case RC_ADDR(0x0000f52eu): goto L_F52E;
    case RC_ADDR(0x0000f532u): goto L_F532;
    case RC_ADDR(0x0000f534u): goto L_F534;
    case RC_ADDR(0x0000f536u): goto L_F536;
    case RC_ADDR(0x0000f53au): goto L_F53A;
    case RC_ADDR(0x0000f53eu): goto L_F53E;
    case RC_ADDR(0x0000f542u): goto L_F542;
    case RC_ADDR(0x0000f544u): goto L_F544;
    case RC_ADDR(0x0000f54au): goto L_F54A;
    case RC_ADDR(0x0000f54cu): goto L_F54C;
    case RC_ADDR(0x0000f552u): goto L_F552;
    case RC_ADDR(0x0000f554u): goto L_F554;
    case RC_ADDR(0x0000f55au): goto L_F55A;
    case RC_ADDR(0x0000f560u): goto L_F560;
    case RC_ADDR(0x0000f562u): goto L_F562;
    case RC_ADDR(0x0000f568u): goto L_F568;
    case RC_ADDR(0x0000f56eu): goto L_F56E;
    case RC_ADDR(0x0000f570u): goto L_F570;
    case RC_ADDR(0x0000f576u): goto L_F576;
    case RC_ADDR(0x0000f57cu): goto L_F57C;
    case RC_ADDR(0x0000f57eu): goto L_F57E;
    case RC_ADDR(0x0000f584u): goto L_F584;
    case RC_ADDR(0x0000f588u): goto L_F588;
    case RC_ADDR(0x0000f58au): goto L_F58A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F4E0:
    /* 0000f4e0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000f4e0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_F4E4:
    /* 0000f4e4   4  movem.l { A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0000f4e4u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_F4E8:
    /* 0000f4e8   4  move.w (8,A5),D5 */
    c->pc = RC_ADDR(0x0000f4e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F4EC:
    /* 0000f4ec   4  move.w (a,A5),D6 */
    c->pc = RC_ADDR(0x0000f4ecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F4F0:
    /* 0000f4f0   4  clr.w (1108,A4) */
    c->pc = RC_ADDR(0x0000f4f0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1108u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F4F4:
    /* 0000f4f4   4  clr.w (110a,A4) */
    c->pc = RC_ADDR(0x0000f4f4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x110au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F4F8:
    /* 0000f4f8   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0000f4f8u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_F4FA:
    /* 0000f4fa   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000f4fau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F4FC:
    /* 0000f4fc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f4fcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F4FE:
    /* 0000f4fe   4  lea (ffff9cc8,A4),A0 */
    c->pc = RC_ADDR(0x0000f4feu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6338u);

L_F502:
    /* 0000f502   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000f502u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F506:
    /* 0000f506   2  add.w D6,D1 */
    c->pc = RC_ADDR(0x0000f506u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_F508:
    /* 0000f508   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000f508u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_F50A:
    /* 0000f50a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000f50au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F50C:
    /* 0000f50c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f50cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F50E:
    /* 0000f50e   4  lea (ffff9cb8,A4),A0 */
    c->pc = RC_ADDR(0x0000f50eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6348u);

L_F512:
    /* 0000f512   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000f512u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F516:
    /* 0000f516   2  add.w D5,D1 */
    c->pc = RC_ADDR(0x0000f516u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_F518:
    /* 0000f518   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000f518u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_F51A:
    /* 0000f51a   2  bsr 0000f58c */
    c->pc = RC_ADDR(0x0000f51au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000f51cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f58cu);
    return;

L_F51C:
    /* 0000f51c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000f51cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_F51E:
    /* 0000f51e   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000f51eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_F520:
    /* 0000f520   2  beq 0000f542 */
    c->pc = RC_ADDR(0x0000f520u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F542;

L_F522:
    /* 0000f522   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000f522u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F524:
    /* 0000f524   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f524u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F526:
    /* 0000f526   4  lea (ffff9cd8,A4),A0 */
    c->pc = RC_ADDR(0x0000f526u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6328u);

L_F52A:
    /* 0000f52a   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000f52au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F52E:
    /* 0000f52e   4  add.w D1,(1108,A4) */
    c->pc = RC_ADDR(0x0000f52eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1108u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_F532:
    /* 0000f532   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000f532u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F534:
    /* 0000f534   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f534u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F536:
    /* 0000f536   4  lea (ffff9ce8,A4),A0 */
    c->pc = RC_ADDR(0x0000f536u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6318u);

L_F53A:
    /* 0000f53a   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000f53au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F53E:
    /* 0000f53e   4  add.w D1,(110a,A4) */
    c->pc = RC_ADDR(0x0000f53eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x110au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_F542:
    /* 0000f542   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0000f542u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_F544:
    /* 0000f544   6  cmp.l #8,D4 */
    c->pc = RC_ADDR(0x0000f544u);
    rc_step(c, m, 14);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_F54A:
    /* 0000f54a   2  blt 0000f4fa */
    c->pc = RC_ADDR(0x0000f54au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_F4FA; }

L_F54C:
    /* 0000f54c   6  cmpi.w #ffff,(1108,A4) */
    c->pc = RC_ADDR(0x0000f54cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1108u));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_F552:
    /* 0000f552   2  bge 0000f55a */
    c->pc = RC_ADDR(0x0000f552u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_F55A;

L_F554:
    /* 0000f554   6  move.w #ffff,(1108,A4) */
    c->pc = RC_ADDR(0x0000f554u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x1108u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F55A:
    /* 0000f55a   6  cmpi.w #1,(1108,A4) */
    c->pc = RC_ADDR(0x0000f55au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1108u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_F560:
    /* 0000f560   2  ble 0000f568 */
    c->pc = RC_ADDR(0x0000f560u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_F568;

L_F562:
    /* 0000f562   6  move.w #1,(1108,A4) */
    c->pc = RC_ADDR(0x0000f562u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1108u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F568:
    /* 0000f568   6  cmpi.w #ffff,(110a,A4) */
    c->pc = RC_ADDR(0x0000f568u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110au));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_F56E:
    /* 0000f56e   2  bge 0000f576 */
    c->pc = RC_ADDR(0x0000f56eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_F576;

L_F570:
    /* 0000f570   6  move.w #ffff,(110a,A4) */
    c->pc = RC_ADDR(0x0000f570u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x110au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F576:
    /* 0000f576   6  cmpi.w #1,(110a,A4) */
    c->pc = RC_ADDR(0x0000f576u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110au));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_F57C:
    /* 0000f57c   2  ble 0000f584 */
    c->pc = RC_ADDR(0x0000f57cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_F584;

L_F57E:
    /* 0000f57e   6  move.w #1,(110a,A4) */
    c->pc = RC_ADDR(0x0000f57eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x110au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F584:
    /* 0000f584   4  movem.l (SP)+,{ D4 D5 D6 } */
    c->pc = RC_ADDR(0x0000f584u);
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

L_F588:
    /* 0000f588   2  unlk A5 */
    c->pc = RC_ADDR(0x0000f588u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_F58A:
    /* 0000f58a   2  rts */
    c->pc = RC_ADDR(0x0000f58au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
