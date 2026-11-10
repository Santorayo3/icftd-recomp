/* fn_00017148 - 200 byte(s), 53 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00017148(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00017148u): goto L_17148;
    case RC_ADDR(0x0001714cu): goto L_1714C;
    case RC_ADDR(0x00017152u): goto L_17152;
    case RC_ADDR(0x00017158u): goto L_17158;
    case RC_ADDR(0x0001715cu): goto L_1715C;
    case RC_ADDR(0x00017160u): goto L_17160;
    case RC_ADDR(0x00017164u): goto L_17164;
    case RC_ADDR(0x00017166u): goto L_17166;
    case RC_ADDR(0x0001716cu): goto L_1716C;
    case RC_ADDR(0x00017172u): goto L_17172;
    case RC_ADDR(0x00017174u): goto L_17174;
    case RC_ADDR(0x0001717au): goto L_1717A;
    case RC_ADDR(0x00017180u): goto L_17180;
    case RC_ADDR(0x00017182u): goto L_17182;
    case RC_ADDR(0x00017184u): goto L_17184;
    case RC_ADDR(0x0001718au): goto L_1718A;
    case RC_ADDR(0x0001718eu): goto L_1718E;
    case RC_ADDR(0x00017192u): goto L_17192;
    case RC_ADDR(0x00017194u): goto L_17194;
    case RC_ADDR(0x00017198u): goto L_17198;
    case RC_ADDR(0x0001719au): goto L_1719A;
    case RC_ADDR(0x0001719eu): goto L_1719E;
    case RC_ADDR(0x000171a0u): goto L_171A0;
    case RC_ADDR(0x000171a2u): goto L_171A2;
    case RC_ADDR(0x000171a4u): goto L_171A4;
    case RC_ADDR(0x000171a6u): goto L_171A6;
    case RC_ADDR(0x000171a8u): goto L_171A8;
    case RC_ADDR(0x000171aau): goto L_171AA;
    case RC_ADDR(0x000171aeu): goto L_171AE;
    case RC_ADDR(0x000171b0u): goto L_171B0;
    case RC_ADDR(0x000171b2u): goto L_171B2;
    case RC_ADDR(0x000171b6u): goto L_171B6;
    case RC_ADDR(0x000171bau): goto L_171BA;
    case RC_ADDR(0x000171beu): goto L_171BE;
    case RC_ADDR(0x000171c2u): goto L_171C2;
    case RC_ADDR(0x000171c8u): goto L_171C8;
    case RC_ADDR(0x000171ceu): goto L_171CE;
    case RC_ADDR(0x000171d2u): goto L_171D2;
    case RC_ADDR(0x000171d6u): goto L_171D6;
    case RC_ADDR(0x000171dau): goto L_171DA;
    case RC_ADDR(0x000171dcu): goto L_171DC;
    case RC_ADDR(0x000171e0u): goto L_171E0;
    case RC_ADDR(0x000171e4u): goto L_171E4;
    case RC_ADDR(0x000171e8u): goto L_171E8;
    case RC_ADDR(0x000171ecu): goto L_171EC;
    case RC_ADDR(0x000171eeu): goto L_171EE;
    case RC_ADDR(0x000171f2u): goto L_171F2;
    case RC_ADDR(0x000171f6u): goto L_171F6;
    case RC_ADDR(0x000171fau): goto L_171FA;
    case RC_ADDR(0x00017200u): goto L_17200;
    case RC_ADDR(0x00017206u): goto L_17206;
    case RC_ADDR(0x0001720cu): goto L_1720C;
    case RC_ADDR(0x0001720eu): goto L_1720E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_17148:
    /* 00017148   4  link.w A5,#ffffffee */
    c->pc = RC_ADDR(0x00017148u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x12u;

L_1714C:
    /* 0001714c   6  move.l (ffffcbbc,A4),(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001714cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_17152:
    /* 00017152   6  move.l (ffffcbb8,A4),(fffffff8,A5) */
    c->pc = RC_ADDR(0x00017152u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3448u));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_17158:
    /* 00017158   4  movea.l (ffffcbb8,A4),A0 */
    c->pc = RC_ADDR(0x00017158u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3448u));
    c->a[0] = t0;

L_1715C:
    /* 0001715c   4  movea.l (8,A0),A1 */
    c->pc = RC_ADDR(0x0001715cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    c->a[1] = t0;

L_17160:
    /* 00017160   4  cmpa.l (fffff326,A4),A1 */
    c->pc = RC_ADDR(0x00017160u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0xcdau));
    rc_cmp(c, RC_L, c->a[1], t0);

L_17164:
    /* 00017164   2  bne 00017174 */
    c->pc = RC_ADDR(0x00017164u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_17174;

L_17166:
    /* 00017166   6  move.l (ffffcbbc,A4),(fffffff4,A5) */
    c->pc = RC_ADDR(0x00017166u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1716C:
    /* 0001716c   6  move.l (ffffcbb8,A4),(fffffff0,A5) */
    c->pc = RC_ADDR(0x0001716cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3448u));
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_17172:
    /* 00017172   2  bra 00017180 */
    c->pc = RC_ADDR(0x00017172u);
    rc_step(c, m);
    goto L_17180;

L_17174:
    /* 00017174   6  move.l (ffffcbbc,A4),(fffffff0,A5) */
    c->pc = RC_ADDR(0x00017174u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1717A:
    /* 0001717a   6  move.l (ffffcbb8,A4),(fffffff4,A5) */
    c->pc = RC_ADDR(0x0001717au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3448u));
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_17180:
    /* 00017180   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00017180u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_17182:
    /* 00017182   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00017182u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_17184:
    /* 00017184   6  pea (ccc43210).l */
    c->pc = RC_ADDR(0x00017184u);
    rc_step(c, m);
    rc_push32(c, m, 0xccc43210u);

L_1718A:
    /* 0001718a   4  pea (000000ca).l */
    c->pc = RC_ADDR(0x0001718au);
    rc_step(c, m);
    rc_push32(c, m, 0x000000cau);

L_1718E:
    /* 0001718e   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x0001718eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_17192:
    /* 00017192   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00017192u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_17194:
    /* 00017194   4  move.w (2,A0),D0 */
    c->pc = RC_ADDR(0x00017194u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17198:
    /* 00017198   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00017198u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1719A:
    /* 0001719a   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x0001719au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_1719E:
    /* 0001719e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001719eu);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_171A0:
    /* 000171a0   2  move.w (A0),D0 */
    c->pc = RC_ADDR(0x000171a0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_171A2:
    /* 000171a2   2  asl.l #3,D0 */
    c->pc = RC_ADDR(0x000171a2u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_L), RC_L));

L_171A4:
    /* 000171a4   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000171a4u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_171A6:
    /* 000171a6   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000171a6u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_171A8:
    /* 000171a8   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000171a8u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_171AA:
    /* 000171aa   4  move.l (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x000171aau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_171AE:
    /* 000171ae   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000171aeu);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_171B0:
    /* 000171b0   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000171b0u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_171B2:
    /* 000171b2   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x000171b2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_171B6:
    /* 000171b6   4  jsr (ffff823c,A4) */
    c->pc = RC_ADDR(0x000171b6u);
    rc_step(c, m);
    /* vector 95 */
    rc_push32(c, m, RC_ADDR(0x000171bau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c92u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e8c8u);
    return;

L_171BA:
    /* 000171ba   4  lea (30,A7),A7 */
    c->pc = RC_ADDR(0x000171bau);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0x30u);

L_171BE:
    /* 000171be   4  jsr (000170f4) */
    c->pc = RC_ADDR(0x000171beu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000171c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x000170f4u);
    return;

L_171C2:
    /* 000171c2   6  subi.w #a,(ffffcb04,A4) */
    c->pc = RC_ADDR(0x000171c2u);
    rc_step(c, m);
    t3 = (c->a[4] - 0x34fcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_171C8:
    /* 000171c8   6  move.w (e,A5),(c,A4) */
    c->pc = RC_ADDR(0x000171c8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    rc_wr16(c, m, (c->a[4] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_171CE:
    /* 000171ce   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x000171ceu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_171D2:
    /* 000171d2   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000171d2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_171D6:
    /* 000171d6   4  jsr (ffff806e,A4) */
    c->pc = RC_ADDR(0x000171d6u);
    rc_step(c, m);
    /* vector 18 */
    rc_push32(c, m, RC_ADDR(0x000171dau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ac4u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005012u);
    return;

L_171DA:
    /* 000171da   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000171dau);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_171DC:
    /* 000171dc   4  jsr (000170de) */
    c->pc = RC_ADDR(0x000171dcu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000171e0u));
    rc_depth++;
    c->pc = RC_ADDR(0x000170deu);
    return;

L_171E0:
    /* 000171e0   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x000171e0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_171E4:
    /* 000171e4   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000171e4u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_171E8:
    /* 000171e8   4  jsr (ffff806e,A4) */
    c->pc = RC_ADDR(0x000171e8u);
    rc_step(c, m);
    /* vector 18 */
    rc_push32(c, m, RC_ADDR(0x000171ecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ac4u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005012u);
    return;

L_171EC:
    /* 000171ec   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000171ecu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_171EE:
    /* 000171ee   4  jsr (000170de) */
    c->pc = RC_ADDR(0x000171eeu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000171f2u));
    rc_depth++;
    c->pc = RC_ADDR(0x000170deu);
    return;

L_171F2:
    /* 000171f2   4  jsr (ffff804a,A4) */
    c->pc = RC_ADDR(0x000171f2u);
    rc_step(c, m);
    /* vector 12 */
    rc_push32(c, m, RC_ADDR(0x000171f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021aa0u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000330eu);
    return;

L_171F6:
    /* 000171f6   4  clr.w (c,A4) */
    c->pc = RC_ADDR(0x000171f6u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_171FA:
    /* 000171fa   6  addi.w #a,(ffffcb04,A4) */
    c->pc = RC_ADDR(0x000171fau);
    rc_step(c, m);
    t3 = (c->a[4] - 0x34fcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17200:
    /* 00017200   6  move.l (fffffffc,A5),(ffffcbbc,A4) */
    c->pc = RC_ADDR(0x00017200u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_wr32(c, m, (c->a[4] - 0x3444u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_17206:
    /* 00017206   6  move.l (fffffff8,A5),(ffffcbb8,A4) */
    c->pc = RC_ADDR(0x00017206u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x3448u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1720C:
    /* 0001720c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001720cu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1720E:
    /* 0001720e   2  rts */
    c->pc = RC_ADDR(0x0001720eu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
