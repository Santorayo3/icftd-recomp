/* fn_00003264 - 164 byte(s), 46 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00003264(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00003264u): goto L_3264;
    case RC_ADDR(0x00003268u): goto L_3268;
    case RC_ADDR(0x0000326cu): goto L_326C;
    case RC_ADDR(0x00003270u): goto L_3270;
    case RC_ADDR(0x00003274u): goto L_3274;
    case RC_ADDR(0x00003278u): goto L_3278;
    case RC_ADDR(0x0000327cu): goto L_327C;
    case RC_ADDR(0x00003280u): goto L_3280;
    case RC_ADDR(0x00003284u): goto L_3284;
    case RC_ADDR(0x00003288u): goto L_3288;
    case RC_ADDR(0x0000328cu): goto L_328C;
    case RC_ADDR(0x0000328eu): goto L_328E;
    case RC_ADDR(0x00003292u): goto L_3292;
    case RC_ADDR(0x00003296u): goto L_3296;
    case RC_ADDR(0x0000329au): goto L_329A;
    case RC_ADDR(0x0000329eu): goto L_329E;
    case RC_ADDR(0x000032a2u): goto L_32A2;
    case RC_ADDR(0x000032a8u): goto L_32A8;
    case RC_ADDR(0x000032aau): goto L_32AA;
    case RC_ADDR(0x000032aeu): goto L_32AE;
    case RC_ADDR(0x000032b4u): goto L_32B4;
    case RC_ADDR(0x000032b8u): goto L_32B8;
    case RC_ADDR(0x000032bcu): goto L_32BC;
    case RC_ADDR(0x000032c2u): goto L_32C2;
    case RC_ADDR(0x000032c6u): goto L_32C6;
    case RC_ADDR(0x000032c8u): goto L_32C8;
    case RC_ADDR(0x000032ccu): goto L_32CC;
    case RC_ADDR(0x000032d0u): goto L_32D0;
    case RC_ADDR(0x000032d4u): goto L_32D4;
    case RC_ADDR(0x000032d6u): goto L_32D6;
    case RC_ADDR(0x000032d8u): goto L_32D8;
    case RC_ADDR(0x000032dcu): goto L_32DC;
    case RC_ADDR(0x000032e0u): goto L_32E0;
    case RC_ADDR(0x000032e4u): goto L_32E4;
    case RC_ADDR(0x000032e6u): goto L_32E6;
    case RC_ADDR(0x000032eau): goto L_32EA;
    case RC_ADDR(0x000032eeu): goto L_32EE;
    case RC_ADDR(0x000032f0u): goto L_32F0;
    case RC_ADDR(0x000032f4u): goto L_32F4;
    case RC_ADDR(0x000032f6u): goto L_32F6;
    case RC_ADDR(0x000032fcu): goto L_32FC;
    case RC_ADDR(0x000032feu): goto L_32FE;
    case RC_ADDR(0x00003300u): goto L_3300;
    case RC_ADDR(0x00003302u): goto L_3302;
    case RC_ADDR(0x00003304u): goto L_3304;
    case RC_ADDR(0x00003306u): goto L_3306;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_3264:
    /* 00003264   4  link.w A5,#ffffffce */
    c->pc = RC_ADDR(0x00003264u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x32u;

L_3268:
    /* 00003268   4  lea (00003308),A0 */
    c->pc = RC_ADDR(0x00003268u);
    c->a[0] = RC_ADDR(0x00003308u);

L_326C:
    /* 0000326c   4  move.l A0,(ffffffec,A5) */
    c->pc = RC_ADDR(0x0000326cu);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3270:
    /* 00003270   4  clr.b (fffffff8,A5) */
    c->pc = RC_ADDR(0x00003270u);
    rc_wr8(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_3274:
    /* 00003274   4  lea (ffffffde,A5),A0 */
    c->pc = RC_ADDR(0x00003274u);
    c->a[0] = (c->a[5] - 0x22u);

L_3278:
    /* 00003278   4  move.l A0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00003278u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_327C:
    /* 0000327c   4  lea (0000330a),A0 */
    c->pc = RC_ADDR(0x0000327cu);
    c->a[0] = RC_ADDR(0x0000330au);

L_3280:
    /* 00003280   4  move.l A0,(ffffffde,A5) */
    c->pc = RC_ADDR(0x00003280u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x22u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3284:
    /* 00003284   4  clr.b (ffffffea,A5) */
    c->pc = RC_ADDR(0x00003284u);
    rc_wr8(c, m, (c->a[5] - 0x16u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_3288:
    /* 00003288   4  tst.w (c,A5) */
    c->pc = RC_ADDR(0x00003288u);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_328C:
    /* 0000328c   2  beq 000032aa */
    c->pc = RC_ADDR(0x0000328cu);
    if (rc_cond(c, 7)) goto L_32AA;

L_328E:
    /* 0000328e   4  lea (ffffffd0,A5),A0 */
    c->pc = RC_ADDR(0x0000328eu);
    c->a[0] = (c->a[5] - 0x30u);

L_3292:
    /* 00003292   4  move.l A0,(ffffffe6,A5) */
    c->pc = RC_ADDR(0x00003292u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x1au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3296:
    /* 00003296   4  lea (0000330c),A0 */
    c->pc = RC_ADDR(0x00003296u);
    c->a[0] = RC_ADDR(0x0000330cu);

L_329A:
    /* 0000329a   4  move.l A0,(ffffffd0,A5) */
    c->pc = RC_ADDR(0x0000329au);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x30u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_329E:
    /* 0000329e   4  clr.l (ffffffd8,A5) */
    c->pc = RC_ADDR(0x0000329eu);
    rc_wr32(c, m, (c->a[5] - 0x28u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_32A2:
    /* 000032a2   6  move.b #3,(fffffffb,A5) */
    c->pc = RC_ADDR(0x000032a2u);
    t0 = 0x00000003u;
    rc_wr8(c, m, (c->a[5] - 0x5u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_32A8:
    /* 000032a8   2  bra 000032b4 */
    c->pc = RC_ADDR(0x000032a8u);
    goto L_32B4;

L_32AA:
    /* 000032aa   4  clr.l (ffffffe6,A5) */
    c->pc = RC_ADDR(0x000032aau);
    rc_wr32(c, m, (c->a[5] - 0x1au), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_32AE:
    /* 000032ae   6  move.b #2,(fffffffb,A5) */
    c->pc = RC_ADDR(0x000032aeu);
    t0 = 0x00000002u;
    rc_wr8(c, m, (c->a[5] - 0x5u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_32B4:
    /* 000032b4   4  lea (ffffffec,A5),A0 */
    c->pc = RC_ADDR(0x000032b4u);
    c->a[0] = (c->a[5] - 0x14u);

L_32B8:
    /* 000032b8   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000032b8u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_32BC:
    /* 000032bc   6  move.w #1,(ffffffce,A5) */
    c->pc = RC_ADDR(0x000032bcu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x32u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_32C2:
    /* 000032c2   4  tst.w (ffffffce,A5) */
    c->pc = RC_ADDR(0x000032c2u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x32u));
    rc_set_nzvc(c, t0, RC_W);

L_32C6:
    /* 000032c6   2  ble 000032f6 */
    c->pc = RC_ADDR(0x000032c6u);
    if (rc_cond(c, 15)) goto L_32F6;

L_32C8:
    /* 000032c8   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000032c8u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_32CC:
    /* 000032cc   4  pea (fffffffa,A5) */
    c->pc = RC_ADDR(0x000032ccu);
    rc_push32(c, m, (c->a[5] - 0x6u));

L_32D0:
    /* 000032d0   4  jsr (0000247a) */
    c->pc = RC_ADDR(0x000032d0u);
    rc_push32(c, m, RC_ADDR(0x000032d4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000247au);
    return;

L_32D4:
    /* 000032d4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000032d4u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_32D6:
    /* 000032d6   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000032d6u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_32D8:
    /* 000032d8   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000032d8u);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_32DC:
    /* 000032dc   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000032dcu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_32E0:
    /* 000032e0   4  jsr (00002cc8) */
    c->pc = RC_ADDR(0x000032e0u);
    rc_push32(c, m, RC_ADDR(0x000032e4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00002cc8u);
    return;

L_32E4:
    /* 000032e4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000032e4u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_32E6:
    /* 000032e6   4  move.w D0,(ffffffce,A5) */
    c->pc = RC_ADDR(0x000032e6u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x32u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_32EA:
    /* 000032ea   4  tst.w (ffffce2c,A4) */
    c->pc = RC_ADDR(0x000032eau);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31d4u));
    rc_set_nzvc(c, t0, RC_W);

L_32EE:
    /* 000032ee   2  beq 000032f4 */
    c->pc = RC_ADDR(0x000032eeu);
    if (rc_cond(c, 7)) goto L_32F4;

L_32F0:
    /* 000032f0   4  clr.w (ffffffce,A5) */
    c->pc = RC_ADDR(0x000032f0u);
    rc_wr16(c, m, (c->a[5] - 0x32u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_32F4:
    /* 000032f4   2  bra 000032c2 */
    c->pc = RC_ADDR(0x000032f4u);
    rc_tick();
    goto L_32C2;

L_32F6:
    /* 000032f6   6  cmpi.w #7,(ffffcf80,A4) */
    c->pc = RC_ADDR(0x000032f6u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3080u));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_32FC:
    /* 000032fc   2  bne 00003304 */
    c->pc = RC_ADDR(0x000032fcu);
    if (rc_cond(c, 6)) goto L_3304;

L_32FE:
    /* 000032fe   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x000032feu);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_3300:
    /* 00003300   2  unlk A5 */
    c->pc = RC_ADDR(0x00003300u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_3302:
    /* 00003302   2  rts */
    c->pc = RC_ADDR(0x00003302u);
    rc_ret(c, m);
    return;

L_3304:
    /* 00003304   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00003304u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_3306:
    /* 00003306   2  bra 00003300 */
    c->pc = RC_ADDR(0x00003306u);
    rc_tick();
    goto L_3300;

}
