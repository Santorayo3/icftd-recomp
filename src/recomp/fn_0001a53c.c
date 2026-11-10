/* fn_0001a53c - 94 byte(s), 27 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001a53c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001a53cu): goto L_1A53C;
    case RC_ADDR(0x0001a540u): goto L_1A540;
    case RC_ADDR(0x0001a544u): goto L_1A544;
    case RC_ADDR(0x0001a548u): goto L_1A548;
    case RC_ADDR(0x0001a54au): goto L_1A54A;
    case RC_ADDR(0x0001a54eu): goto L_1A54E;
    case RC_ADDR(0x0001a554u): goto L_1A554;
    case RC_ADDR(0x0001a558u): goto L_1A558;
    case RC_ADDR(0x0001a55au): goto L_1A55A;
    case RC_ADDR(0x0001a55eu): goto L_1A55E;
    case RC_ADDR(0x0001a562u): goto L_1A562;
    case RC_ADDR(0x0001a564u): goto L_1A564;
    case RC_ADDR(0x0001a568u): goto L_1A568;
    case RC_ADDR(0x0001a56cu): goto L_1A56C;
    case RC_ADDR(0x0001a570u): goto L_1A570;
    case RC_ADDR(0x0001a572u): goto L_1A572;
    case RC_ADDR(0x0001a574u): goto L_1A574;
    case RC_ADDR(0x0001a578u): goto L_1A578;
    case RC_ADDR(0x0001a57cu): goto L_1A57C;
    case RC_ADDR(0x0001a580u): goto L_1A580;
    case RC_ADDR(0x0001a582u): goto L_1A582;
    case RC_ADDR(0x0001a586u): goto L_1A586;
    case RC_ADDR(0x0001a588u): goto L_1A588;
    case RC_ADDR(0x0001a58cu): goto L_1A58C;
    case RC_ADDR(0x0001a594u): goto L_1A594;
    case RC_ADDR(0x0001a596u): goto L_1A596;
    case RC_ADDR(0x0001a598u): goto L_1A598;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1A53C:
    /* 0001a53c   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x0001a53cu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_1A540:
    /* 0001a540   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001a540u);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1A544:
    /* 0001a544   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001a544u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A548:
    /* 0001a548   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a548u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1A54A:
    /* 0001a54a   4  lea (1cc6,A4),A0 */
    c->pc = RC_ADDR(0x0001a54au);
    c->a[0] = (c->a[4] + 0x1cc6u);

L_1A54E:
    /* 0001a54e   6  move.w (0,A0,D0.w),(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001a54eu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A554:
    /* 0001a554   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x0001a554u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_1A558:
    /* 0001a558   2  ble 0001a588 */
    c->pc = RC_ADDR(0x0001a558u);
    if (rc_cond(c, 15)) goto L_1A588;

L_1A55A:
    /* 0001a55a   4  move.l (2010,A4),-(A7) */
    c->pc = RC_ADDR(0x0001a55au);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2010u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A55E:
    /* 0001a55e   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001a55eu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A562:
    /* 0001a562   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a562u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1A564:
    /* 0001a564   4  lea (1cc8,A4),A0 */
    c->pc = RC_ADDR(0x0001a564u);
    c->a[0] = (c->a[4] + 0x1cc8u);

L_1A568:
    /* 0001a568   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a568u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A56C:
    /* 0001a56c   4  sub.w (472,A4),D1 */
    c->pc = RC_ADDR(0x0001a56cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x472u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A570:
    /* 0001a570   2  subq.w #7,D1 */
    c->pc = RC_ADDR(0x0001a570u);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000007u;
    rc_flags_sub(c, RC_W, t1, 0x00000007u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A572:
    /* 0001a572   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001a572u);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A574:
    /* 0001a574   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001a574u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A578:
    /* 0001a578   4  sub.w (470,A4),D0 */
    c->pc = RC_ADDR(0x0001a578u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x470u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A57C:
    /* 0001a57c   4  sub.w #a,D0 */
    c->pc = RC_ADDR(0x0001a57cu);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A580:
    /* 0001a580   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001a580u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A582:
    /* 0001a582   4  jsr (ffff8158,A4) */
    c->pc = RC_ADDR(0x0001a582u);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x0001a586u));
    rc_depth++;
    c->pc = RC_ADDR(0x00011208u);
    return;

L_1A586:
    /* 0001a586   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001a586u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1A588:
    /* 0001a588   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001a588u);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1A58C:
    /* 0001a58c   8  cmpi.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001a58cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000001u);

L_1A594:
    /* 0001a594   2  blt 0001a544 */
    c->pc = RC_ADDR(0x0001a594u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1A544; }

L_1A596:
    /* 0001a596   2  unlk A5 */
    c->pc = RC_ADDR(0x0001a596u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1A598:
    /* 0001a598   2  rts */
    c->pc = RC_ADDR(0x0001a598u);
    rc_ret(c, m);
    return;

}
