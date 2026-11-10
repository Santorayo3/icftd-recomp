/* fn_000091fe - 218 byte(s), 58 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000091fe(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000091feu): goto L_91FE;
    case RC_ADDR(0x00009202u): goto L_9202;
    case RC_ADDR(0x00009206u): goto L_9206;
    case RC_ADDR(0x0000920au): goto L_920A;
    case RC_ADDR(0x0000920eu): goto L_920E;
    case RC_ADDR(0x00009212u): goto L_9212;
    case RC_ADDR(0x00009216u): goto L_9216;
    case RC_ADDR(0x0000921au): goto L_921A;
    case RC_ADDR(0x0000921eu): goto L_921E;
    case RC_ADDR(0x00009222u): goto L_9222;
    case RC_ADDR(0x00009226u): goto L_9226;
    case RC_ADDR(0x0000922cu): goto L_922C;
    case RC_ADDR(0x00009230u): goto L_9230;
    case RC_ADDR(0x00009232u): goto L_9232;
    case RC_ADDR(0x00009236u): goto L_9236;
    case RC_ADDR(0x0000923au): goto L_923A;
    case RC_ADDR(0x0000923eu): goto L_923E;
    case RC_ADDR(0x00009242u): goto L_9242;
    case RC_ADDR(0x00009246u): goto L_9246;
    case RC_ADDR(0x0000924au): goto L_924A;
    case RC_ADDR(0x0000924eu): goto L_924E;
    case RC_ADDR(0x00009250u): goto L_9250;
    case RC_ADDR(0x00009254u): goto L_9254;
    case RC_ADDR(0x00009256u): goto L_9256;
    case RC_ADDR(0x0000925au): goto L_925A;
    case RC_ADDR(0x0000925eu): goto L_925E;
    case RC_ADDR(0x00009264u): goto L_9264;
    case RC_ADDR(0x00009266u): goto L_9266;
    case RC_ADDR(0x0000926cu): goto L_926C;
    case RC_ADDR(0x00009270u): goto L_9270;
    case RC_ADDR(0x00009274u): goto L_9274;
    case RC_ADDR(0x00009278u): goto L_9278;
    case RC_ADDR(0x0000927cu): goto L_927C;
    case RC_ADDR(0x00009280u): goto L_9280;
    case RC_ADDR(0x00009284u): goto L_9284;
    case RC_ADDR(0x00009288u): goto L_9288;
    case RC_ADDR(0x0000928cu): goto L_928C;
    case RC_ADDR(0x00009292u): goto L_9292;
    case RC_ADDR(0x00009296u): goto L_9296;
    case RC_ADDR(0x00009298u): goto L_9298;
    case RC_ADDR(0x0000929cu): goto L_929C;
    case RC_ADDR(0x000092a0u): goto L_92A0;
    case RC_ADDR(0x000092a4u): goto L_92A4;
    case RC_ADDR(0x000092a6u): goto L_92A6;
    case RC_ADDR(0x000092a8u): goto L_92A8;
    case RC_ADDR(0x000092acu): goto L_92AC;
    case RC_ADDR(0x000092b0u): goto L_92B0;
    case RC_ADDR(0x000092b4u): goto L_92B4;
    case RC_ADDR(0x000092b6u): goto L_92B6;
    case RC_ADDR(0x000092bau): goto L_92BA;
    case RC_ADDR(0x000092c0u): goto L_92C0;
    case RC_ADDR(0x000092c2u): goto L_92C2;
    case RC_ADDR(0x000092c8u): goto L_92C8;
    case RC_ADDR(0x000092ccu): goto L_92CC;
    case RC_ADDR(0x000092ceu): goto L_92CE;
    case RC_ADDR(0x000092d2u): goto L_92D2;
    case RC_ADDR(0x000092d4u): goto L_92D4;
    case RC_ADDR(0x000092d6u): goto L_92D6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_91FE:
    /* 000091fe   4  link.w A5,#ffffffc0 */
    c->pc = RC_ADDR(0x000091feu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x40u;

L_9202:
    /* 00009202   4  lea (000092d8),A0 */
    c->pc = RC_ADDR(0x00009202u);
    c->a[0] = RC_ADDR(0x000092d8u);

L_9206:
    /* 00009206   4  move.l A0,(ffffffec,A5) */
    c->pc = RC_ADDR(0x00009206u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_920A:
    /* 0000920a   4  clr.b (fffffff8,A5) */
    c->pc = RC_ADDR(0x0000920au);
    rc_wr8(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_920E:
    /* 0000920e   4  lea (ffffffde,A5),A0 */
    c->pc = RC_ADDR(0x0000920eu);
    c->a[0] = (c->a[5] - 0x22u);

L_9212:
    /* 00009212   4  move.l A0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00009212u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9216:
    /* 00009216   4  lea (000092da),A0 */
    c->pc = RC_ADDR(0x00009216u);
    c->a[0] = RC_ADDR(0x000092dau);

L_921A:
    /* 0000921a   4  move.l A0,(ffffffde,A5) */
    c->pc = RC_ADDR(0x0000921au);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x22u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_921E:
    /* 0000921e   4  clr.b (ffffffea,A5) */
    c->pc = RC_ADDR(0x0000921eu);
    rc_wr8(c, m, (c->a[5] - 0x16u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_9222:
    /* 00009222   4  clr.l (ffffffe6,A5) */
    c->pc = RC_ADDR(0x00009222u);
    rc_wr32(c, m, (c->a[5] - 0x1au), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9226:
    /* 00009226   6  move.b #2,(fffffffb,A5) */
    c->pc = RC_ADDR(0x00009226u);
    t0 = 0x00000002u;
    rc_wr8(c, m, (c->a[5] - 0x5u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_922C:
    /* 0000922c   4  tst.w (c,A5) */
    c->pc = RC_ADDR(0x0000922cu);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_9230:
    /* 00009230   2  beq 0000924a */
    c->pc = RC_ADDR(0x00009230u);
    if (rc_cond(c, 7)) goto L_924A;

L_9232:
    /* 00009232   4  lea (ffffffd0,A5),A0 */
    c->pc = RC_ADDR(0x00009232u);
    c->a[0] = (c->a[5] - 0x30u);

L_9236:
    /* 00009236   4  move.l A0,(ffffffe6,A5) */
    c->pc = RC_ADDR(0x00009236u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x1au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_923A:
    /* 0000923a   4  lea (000092dc),A0 */
    c->pc = RC_ADDR(0x0000923au);
    c->a[0] = RC_ADDR(0x000092dcu);

L_923E:
    /* 0000923e   4  move.l A0,(ffffffd0,A5) */
    c->pc = RC_ADDR(0x0000923eu);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x30u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9242:
    /* 00009242   4  clr.l (ffffffd8,A5) */
    c->pc = RC_ADDR(0x00009242u);
    rc_wr32(c, m, (c->a[5] - 0x28u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9246:
    /* 00009246   4  addq.b #1,(fffffffb,A5) */
    c->pc = RC_ADDR(0x00009246u);
    t3 = (c->a[5] - 0x5u);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_wr8(c, m, t3, t2);

L_924A:
    /* 0000924a   4  tst.w (e,A5) */
    c->pc = RC_ADDR(0x0000924au);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    rc_set_nzvc(c, t0, RC_W);

L_924E:
    /* 0000924e   2  beq 00009284 */
    c->pc = RC_ADDR(0x0000924eu);
    if (rc_cond(c, 7)) goto L_9284;

L_9250:
    /* 00009250   4  tst.l (ffffffe6,A5) */
    c->pc = RC_ADDR(0x00009250u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1au));
    rc_set_nzvc(c, t0, RC_L);

L_9254:
    /* 00009254   2  beq 00009266 */
    c->pc = RC_ADDR(0x00009254u);
    if (rc_cond(c, 7)) goto L_9266;

L_9256:
    /* 00009256   4  lea (ffffffc2,A5),A0 */
    c->pc = RC_ADDR(0x00009256u);
    c->a[0] = (c->a[5] - 0x3eu);

L_925A:
    /* 0000925a   4  move.l A0,(ffffffd8,A5) */
    c->pc = RC_ADDR(0x0000925au);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x28u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_925E:
    /* 0000925e   6  move.w #3,(ffffefd4,A4) */
    c->pc = RC_ADDR(0x0000925eu);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] - 0x102cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9264:
    /* 00009264   2  bra 00009274 */
    c->pc = RC_ADDR(0x00009264u);
    goto L_9274;

L_9266:
    /* 00009266   6  move.w #2,(ffffefd4,A4) */
    c->pc = RC_ADDR(0x00009266u);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] - 0x102cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_926C:
    /* 0000926c   4  lea (ffffffc2,A5),A0 */
    c->pc = RC_ADDR(0x0000926cu);
    c->a[0] = (c->a[5] - 0x3eu);

L_9270:
    /* 00009270   4  move.l A0,(ffffffe6,A5) */
    c->pc = RC_ADDR(0x00009270u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x1au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9274:
    /* 00009274   4  lea (000092ee),A0 */
    c->pc = RC_ADDR(0x00009274u);
    c->a[0] = RC_ADDR(0x000092eeu);

L_9278:
    /* 00009278   4  move.l A0,(ffffffc2,A5) */
    c->pc = RC_ADDR(0x00009278u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x3eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_927C:
    /* 0000927c   4  clr.l (ffffffca,A5) */
    c->pc = RC_ADDR(0x0000927cu);
    rc_wr32(c, m, (c->a[5] - 0x36u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9280:
    /* 00009280   4  addq.b #1,(fffffffb,A5) */
    c->pc = RC_ADDR(0x00009280u);
    t3 = (c->a[5] - 0x5u);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_wr8(c, m, t3, t2);

L_9284:
    /* 00009284   4  lea (ffffffec,A5),A0 */
    c->pc = RC_ADDR(0x00009284u);
    c->a[0] = (c->a[5] - 0x14u);

L_9288:
    /* 00009288   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00009288u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_928C:
    /* 0000928c   6  move.w #1,(ffffffc0,A5) */
    c->pc = RC_ADDR(0x0000928cu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x40u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9292:
    /* 00009292   4  tst.w (ffffffc0,A5) */
    c->pc = RC_ADDR(0x00009292u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x40u));
    rc_set_nzvc(c, t0, RC_W);

L_9296:
    /* 00009296   2  ble 000092d4 */
    c->pc = RC_ADDR(0x00009296u);
    if (rc_cond(c, 15)) goto L_92D4;

L_9298:
    /* 00009298   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00009298u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_929C:
    /* 0000929c   4  pea (fffffffa,A5) */
    c->pc = RC_ADDR(0x0000929cu);
    rc_push32(c, m, (c->a[5] - 0x6u));

L_92A0:
    /* 000092a0   4  jsr (0000247a) */
    c->pc = RC_ADDR(0x000092a0u);
    rc_push32(c, m, RC_ADDR(0x000092a4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000247au);
    return;

L_92A4:
    /* 000092a4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000092a4u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_92A6:
    /* 000092a6   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000092a6u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_92A8:
    /* 000092a8   4  move.w #ffff,-(A7) */
    c->pc = RC_ADDR(0x000092a8u);
    t0 = 0x0000ffffu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_92AC:
    /* 000092ac   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000092acu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_92B0:
    /* 000092b0   4  jsr (00002cc8) */
    c->pc = RC_ADDR(0x000092b0u);
    rc_push32(c, m, RC_ADDR(0x000092b4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00002cc8u);
    return;

L_92B4:
    /* 000092b4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000092b4u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_92B6:
    /* 000092b6   4  move.w D0,(ffffffc0,A5) */
    c->pc = RC_ADDR(0x000092b6u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x40u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_92BA:
    /* 000092ba   6  cmpi.w #1,(ffffcf80,A4) */
    c->pc = RC_ADDR(0x000092bau);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3080u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_92C0:
    /* 000092c0   2  bne 000092c8 */
    c->pc = RC_ADDR(0x000092c0u);
    if (rc_cond(c, 6)) goto L_92C8;

L_92C2:
    /* 000092c2   6  move.w #1,(ffffffc0,A5) */
    c->pc = RC_ADDR(0x000092c2u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x40u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_92C8:
    /* 000092c8   4  tst.w (ffffce2c,A4) */
    c->pc = RC_ADDR(0x000092c8u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31d4u));
    rc_set_nzvc(c, t0, RC_W);

L_92CC:
    /* 000092cc   2  beq 000092d2 */
    c->pc = RC_ADDR(0x000092ccu);
    if (rc_cond(c, 7)) goto L_92D2;

L_92CE:
    /* 000092ce   4  clr.w (ffffffc0,A5) */
    c->pc = RC_ADDR(0x000092ceu);
    rc_wr16(c, m, (c->a[5] - 0x40u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_92D2:
    /* 000092d2   2  bra 00009292 */
    c->pc = RC_ADDR(0x000092d2u);
    rc_tick();
    goto L_9292;

L_92D4:
    /* 000092d4   2  unlk A5 */
    c->pc = RC_ADDR(0x000092d4u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_92D6:
    /* 000092d6   2  rts */
    c->pc = RC_ADDR(0x000092d6u);
    rc_ret(c, m);
    return;

}
