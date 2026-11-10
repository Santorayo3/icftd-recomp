/* fn_0000c310 - 128 byte(s), 35 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000c310(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000c310u): goto L_C310;
    case RC_ADDR(0x0000c314u): goto L_C314;
    case RC_ADDR(0x0000c318u): goto L_C318;
    case RC_ADDR(0x0000c31au): goto L_C31A;
    case RC_ADDR(0x0000c31eu): goto L_C31E;
    case RC_ADDR(0x0000c322u): goto L_C322;
    case RC_ADDR(0x0000c324u): goto L_C324;
    case RC_ADDR(0x0000c328u): goto L_C328;
    case RC_ADDR(0x0000c32eu): goto L_C32E;
    case RC_ADDR(0x0000c330u): goto L_C330;
    case RC_ADDR(0x0000c334u): goto L_C334;
    case RC_ADDR(0x0000c338u): goto L_C338;
    case RC_ADDR(0x0000c33au): goto L_C33A;
    case RC_ADDR(0x0000c33eu): goto L_C33E;
    case RC_ADDR(0x0000c340u): goto L_C340;
    case RC_ADDR(0x0000c344u): goto L_C344;
    case RC_ADDR(0x0000c346u): goto L_C346;
    case RC_ADDR(0x0000c348u): goto L_C348;
    case RC_ADDR(0x0000c34cu): goto L_C34C;
    case RC_ADDR(0x0000c350u): goto L_C350;
    case RC_ADDR(0x0000c352u): goto L_C352;
    case RC_ADDR(0x0000c358u): goto L_C358;
    case RC_ADDR(0x0000c35eu): goto L_C35E;
    case RC_ADDR(0x0000c364u): goto L_C364;
    case RC_ADDR(0x0000c36au): goto L_C36A;
    case RC_ADDR(0x0000c36eu): goto L_C36E;
    case RC_ADDR(0x0000c372u): goto L_C372;
    case RC_ADDR(0x0000c376u): goto L_C376;
    case RC_ADDR(0x0000c37au): goto L_C37A;
    case RC_ADDR(0x0000c37eu): goto L_C37E;
    case RC_ADDR(0x0000c380u): goto L_C380;
    case RC_ADDR(0x0000c384u): goto L_C384;
    case RC_ADDR(0x0000c388u): goto L_C388;
    case RC_ADDR(0x0000c38cu): goto L_C38C;
    case RC_ADDR(0x0000c38eu): goto L_C38E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_C310:
    /* 0000c310   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000c310u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_C314:
    /* 0000c314   4  tst.w (716,A4) */
    c->pc = RC_ADDR(0x0000c314u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x716u));
    rc_set_nzvc(c, t0, RC_W);

L_C318:
    /* 0000c318   2  beq 0000c38c */
    c->pc = RC_ADDR(0x0000c318u);
    if (rc_cond(c, 7)) goto L_C38C;

L_C31A:
    /* 0000c31a   4  addq.w #1,(716,A4) */
    c->pc = RC_ADDR(0x0000c31au);
    t3 = (c->a[4] + 0x716u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_C31E:
    /* 0000c31e   4  tst.w (71c,A4) */
    c->pc = RC_ADDR(0x0000c31eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x71cu));
    rc_set_nzvc(c, t0, RC_W);

L_C322:
    /* 0000c322   2  beq 0000c328 */
    c->pc = RC_ADDR(0x0000c322u);
    if (rc_cond(c, 7)) goto L_C328;

L_C324:
    /* 0000c324   4  addq.w #1,(71c,A4) */
    c->pc = RC_ADDR(0x0000c324u);
    t3 = (c->a[4] + 0x71cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_C328:
    /* 0000c328   6  cmpi.w #18,(71c,A4) */
    c->pc = RC_ADDR(0x0000c328u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x71cu));
    rc_cmp(c, RC_W, t0, 0x00000018u);

L_C32E:
    /* 0000c32e   2  ble 0000c334 */
    c->pc = RC_ADDR(0x0000c32eu);
    if (rc_cond(c, 15)) goto L_C334;

L_C330:
    /* 0000c330   4  addq.w #1,(71a,A4) */
    c->pc = RC_ADDR(0x0000c330u);
    t3 = (c->a[4] + 0x71au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_C334:
    /* 0000c334   4  subq.w #1,(718,A4) */
    c->pc = RC_ADDR(0x0000c334u);
    t3 = (c->a[4] + 0x718u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_C338:
    /* 0000c338   2  bne 0000c38c */
    c->pc = RC_ADDR(0x0000c338u);
    if (rc_cond(c, 6)) goto L_C38C;

L_C33A:
    /* 0000c33a   4  move.w (716,A4),D0 */
    c->pc = RC_ADDR(0x0000c33au);
    t0 = rc_rd16(c, m, (c->a[4] + 0x716u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C33E:
    /* 0000c33e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c33eu);
    rc_ext_l(c, 0);

L_C340:
    /* 0000c340   4  divs.w #12c,D0 */
    c->pc = RC_ADDR(0x0000c340u);
    t0 = 0x0000012cu;
    rc_divs(c, m, 0, t0);

L_C344:
    /* 0000c344   2  moveq #8,D1 */
    c->pc = RC_ADDR(0x0000c344u);
    c->d[1] = 0x00000008u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_C346:
    /* 0000c346   2  sub.w D0,D1 */
    c->pc = RC_ADDR(0x0000c346u);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_C348:
    /* 0000c348   4  move.w D1,(718,A4) */
    c->pc = RC_ADDR(0x0000c348u);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x718u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C34C:
    /* 0000c34c   4  tst.w (718,A4) */
    c->pc = RC_ADDR(0x0000c34cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x718u));
    rc_set_nzvc(c, t0, RC_W);

L_C350:
    /* 0000c350   2  bgt 0000c36a */
    c->pc = RC_ADDR(0x0000c350u);
    if (rc_cond(c, 14)) goto L_C36A;

L_C352:
    /* 0000c352   6  move.w #3e7,(718,A4) */
    c->pc = RC_ADDR(0x0000c352u);
    t0 = 0x000003e7u;
    rc_wr16(c, m, (c->a[4] + 0x718u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C358:
    /* 0000c358   6  move.w #1,(fffffec8,A4) */
    c->pc = RC_ADDR(0x0000c358u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x138u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C35E:
    /* 0000c35e   6  move.w #2,(71e,A4) */
    c->pc = RC_ADDR(0x0000c35eu);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x71eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C364:
    /* 0000c364   6  move.w #1,(71c,A4) */
    c->pc = RC_ADDR(0x0000c364u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x71cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C36A:
    /* 0000c36a   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0000c36au);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C36E:
    /* 0000c36e   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000c36eu);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C372:
    /* 0000c372   4  move.l (72e,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c372u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x72eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C376:
    /* 0000c376   4  move.w (72a,A4),D0 */
    c->pc = RC_ADDR(0x0000c376u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x72au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C37A:
    /* 0000c37a   4  sub.w #c8,D0 */
    c->pc = RC_ADDR(0x0000c37au);
    t0 = 0x000000c8u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_C37E:
    /* 0000c37e   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000c37eu);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C380:
    /* 0000c380   4  move.l (722,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c380u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x722u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C384:
    /* 0000c384   4  jsr (ffff80d4,A4) */
    c->pc = RC_ADDR(0x0000c384u);
    /* vector 35 */
    rc_push32(c, m, RC_ADDR(0x0000c388u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009c3cu);
    return;

L_C388:
    /* 0000c388   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000c388u);
    c->a[7] = (c->a[7] + 0xeu);

L_C38C:
    /* 0000c38c   2  unlk A5 */
    c->pc = RC_ADDR(0x0000c38cu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_C38E:
    /* 0000c38e   2  rts */
    c->pc = RC_ADDR(0x0000c38eu);
    rc_ret(c, m);
    return;

}
