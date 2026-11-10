/* fn_00016fda - 234 byte(s), 68 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00016fda(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case 0x00016fdau: goto L_16FDA;
    case 0x00016fdeu: goto L_16FDE;
    case 0x00016fe2u: goto L_16FE2;
    case 0x00016fe4u: goto L_16FE4;
    case 0x00016fe6u: goto L_16FE6;
    case 0x00016fe8u: goto L_16FE8;
    case 0x00016fecu: goto L_16FEC;
    case 0x00016feeu: goto L_16FEE;
    case 0x00016ff2u: goto L_16FF2;
    case 0x00016ff6u: goto L_16FF6;
    case 0x00016ffau: goto L_16FFA;
    case 0x00016ffcu: goto L_16FFC;
    case 0x00016ffeu: goto L_16FFE;
    case 0x00017002u: goto L_17002;
    case 0x00017006u: goto L_17006;
    case 0x00017008u: goto L_17008;
    case 0x0001700cu: goto L_1700C;
    case 0x00017010u: goto L_17010;
    case 0x00017012u: goto L_17012;
    case 0x00017014u: goto L_17014;
    case 0x00017018u: goto L_17018;
    case 0x0001701cu: goto L_1701C;
    case 0x00017020u: goto L_17020;
    case 0x00017022u: goto L_17022;
    case 0x00017026u: goto L_17026;
    case 0x0001702au: goto L_1702A;
    case 0x0001702cu: goto L_1702C;
    case 0x00017030u: goto L_17030;
    case 0x00017032u: goto L_17032;
    case 0x00017034u: goto L_17034;
    case 0x00017038u: goto L_17038;
    case 0x0001703cu: goto L_1703C;
    case 0x00017040u: goto L_17040;
    case 0x00017044u: goto L_17044;
    case 0x00017048u: goto L_17048;
    case 0x0001704cu: goto L_1704C;
    case 0x00017050u: goto L_17050;
    case 0x00017056u: goto L_17056;
    case 0x0001705cu: goto L_1705C;
    case 0x00017060u: goto L_17060;
    case 0x00017064u: goto L_17064;
    case 0x00017066u: goto L_17066;
    case 0x00017068u: goto L_17068;
    case 0x0001706cu: goto L_1706C;
    case 0x00017070u: goto L_17070;
    case 0x00017072u: goto L_17072;
    case 0x00017076u: goto L_17076;
    case 0x00017078u: goto L_17078;
    case 0x0001707cu: goto L_1707C;
    case 0x00017080u: goto L_17080;
    case 0x00017084u: goto L_17084;
    case 0x00017088u: goto L_17088;
    case 0x0001708cu: goto L_1708C;
    case 0x00017090u: goto L_17090;
    case 0x00017094u: goto L_17094;
    case 0x00017098u: goto L_17098;
    case 0x0001709cu: goto L_1709C;
    case 0x0001709eu: goto L_1709E;
    case 0x000170a2u: goto L_170A2;
    case 0x000170a6u: goto L_170A6;
    case 0x000170a8u: goto L_170A8;
    case 0x000170acu: goto L_170AC;
    case 0x000170b0u: goto L_170B0;
    case 0x000170b4u: goto L_170B4;
    case 0x000170b8u: goto L_170B8;
    case 0x000170bcu: goto L_170BC;
    case 0x000170c0u: goto L_170C0;
    case 0x000170c2u: goto L_170C2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16FDA:
    /* 00016fda   4  link.w A5,#fffffff2 */
    c->pc = 0x00016fdau;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xeu;

L_16FDE:
    /* 00016fde   4  move.w (1364,A4),D0 */
    c->pc = 0x00016fdeu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1364u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16FE2:
    /* 00016fe2   2  asl.w #3,D0 */
    c->pc = 0x00016fe2u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_W), RC_W);

L_16FE4:
    /* 00016fe4   2  moveq #0,D1 */
    c->pc = 0x00016fe4u;
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_16FE6:
    /* 00016fe6   2  move.w D0,D1 */
    c->pc = 0x00016fe6u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16FE8:
    /* 00016fe8   4  move.l D1,(fffffff8,A5) */
    c->pc = 0x00016fe8u;
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_16FEC:
    /* 00016fec   2  moveq #0,D0 */
    c->pc = 0x00016fecu;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_16FEE:
    /* 00016fee   4  move.w (1366,A4),D0 */
    c->pc = 0x00016feeu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1366u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16FF2:
    /* 00016ff2   4  move.l D0,(fffffff4,A5) */
    c->pc = 0x00016ff2u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_16FF6:
    /* 00016ff6   4  move.w (c,A5),D0 */
    c->pc = 0x00016ff6u;
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16FFA:
    /* 00016ffa   2  ext.l D0 */
    c->pc = 0x00016ffau;
    rc_ext_l(c, 0);

L_16FFC:
    /* 00016ffc   2  move.l D0,-(A7) */
    c->pc = 0x00016ffcu;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16FFE:
    /* 00016ffe   4  pea (12e0,A4) */
    c->pc = 0x00016ffeu;
    rc_push32(c, m, (c->a[4] + 0x12e0u));

L_17002:
    /* 00017002   4  jsr (ffff838c,A4) */
    c->pc = 0x00017002u;
    /* vector 151 */
    rc_push32(c, m, 0x00017006u);
    rc_depth++;
    c->pc = 0x000218eau;
    return;

L_17006:
    /* 00017006   2  addq.w #8,A7 */
    c->pc = 0x00017006u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_17008:
    /* 00017008   4  move.l (fffffff4,A5),-(A7) */
    c->pc = 0x00017008u;
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1700C:
    /* 0001700c   4  move.l (fffffff8,A5),-(A7) */
    c->pc = 0x0001700cu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17010:
    /* 00017010   2  clr.l -(A7) */
    c->pc = 0x00017010u;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_17012:
    /* 00017012   2  clr.l -(A7) */
    c->pc = 0x00017012u;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_17014:
    /* 00017014   4  pea (12e0,A4) */
    c->pc = 0x00017014u;
    rc_push32(c, m, (c->a[4] + 0x12e0u));

L_17018:
    /* 00017018   4  jsr (ffff8386,A4) */
    c->pc = 0x00017018u;
    /* vector 150 */
    rc_push32(c, m, 0x0001701cu);
    rc_depth++;
    c->pc = 0x000218d8u;
    return;

L_1701C:
    /* 0001701c   4  lea (14,A7),A7 */
    c->pc = 0x0001701cu;
    c->a[7] = (c->a[7] + 0x14u);

L_17020:
    /* 00017020   2  clr.l -(A7) */
    c->pc = 0x00017020u;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_17022:
    /* 00017022   4  pea (12e0,A4) */
    c->pc = 0x00017022u;
    rc_push32(c, m, (c->a[4] + 0x12e0u));

L_17026:
    /* 00017026   4  jsr (ffff838c,A4) */
    c->pc = 0x00017026u;
    /* vector 151 */
    rc_push32(c, m, 0x0001702au);
    rc_depth++;
    c->pc = 0x000218eau;
    return;

L_1702A:
    /* 0001702a   2  addq.w #8,A7 */
    c->pc = 0x0001702au;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1702C:
    /* 0001702c   4  move.l (fffffff4,A5),D0 */
    c->pc = 0x0001702cu;
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_17030:
    /* 00017030   2  subq.l #4,D0 */
    c->pc = 0x00017030u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000004u;
    rc_flags_sub(c, RC_L, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_17032:
    /* 00017032   2  move.l D0,-(A7) */
    c->pc = 0x00017032u;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17034:
    /* 00017034   4  movea.l (fffffff8,A5),A0 */
    c->pc = 0x00017034u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_17038:
    /* 00017038   4  pea (ffffffde,A0) */
    c->pc = 0x00017038u;
    rc_push32(c, m, (c->a[0] - 0x22u));

L_1703C:
    /* 0001703c   4  pea (00000001).l */
    c->pc = 0x0001703cu;
    rc_push32(c, m, 0x00000001u);

L_17040:
    /* 00017040   4  pea (00000001).l */
    c->pc = 0x00017040u;
    rc_push32(c, m, 0x00000001u);

L_17044:
    /* 00017044   4  pea (12e0,A4) */
    c->pc = 0x00017044u;
    rc_push32(c, m, (c->a[4] + 0x12e0u));

L_17048:
    /* 00017048   4  jsr (ffff8386,A4) */
    c->pc = 0x00017048u;
    /* vector 150 */
    rc_push32(c, m, 0x0001704cu);
    rc_depth++;
    c->pc = 0x000218d8u;
    return;

L_1704C:
    /* 0001704c   4  lea (14,A7),A7 */
    c->pc = 0x0001704cu;
    c->a[7] = (c->a[7] + 0x14u);

L_17050:
    /* 00017050   6  move.w #a,(fffffff2,A5) */
    c->pc = 0x00017050u;
    t0 = 0x0000000au;
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17056:
    /* 00017056   6  move.l (8,A5),(fffffffc,A5) */
    c->pc = 0x00017056u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1705C:
    /* 0001705c   4  movea.l (8,A5),A0 */
    c->pc = 0x0001705cu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_17060:
    /* 00017060   4  addq.l #1,(8,A5) */
    c->pc = 0x00017060u;
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_17064:
    /* 00017064   2  tst.b (A0) */
    c->pc = 0x00017064u;
    t0 = rc_rd8(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_B);

L_17066:
    /* 00017066   2  beq 000170a8 */
    c->pc = 0x00017066u;
    if (rc_cond(c, 7)) goto L_170A8;

L_17068:
    /* 00017068   4  movea.l (8,A5),A0 */
    c->pc = 0x00017068u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1706C:
    /* 0001706c   4  cmpi.b #a,(A0) */
    c->pc = 0x0001706cu;
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000000au);

L_17070:
    /* 00017070   2  bne 000170a6 */
    c->pc = 0x00017070u;
    if (rc_cond(c, 6)) goto L_170A6;

L_17072:
    /* 00017072   4  movea.l (8,A5),A0 */
    c->pc = 0x00017072u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_17076:
    /* 00017076   2  clr.b (A0) */
    c->pc = 0x00017076u;
    rc_wr8(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_17078:
    /* 00017078   4  move.w (c,A5),-(A7) */
    c->pc = 0x00017078u;
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1707C:
    /* 0001707c   4  move.w (fffffff2,A5),-(A7) */
    c->pc = 0x0001707cu;
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17080:
    /* 00017080   4  move.w #d,-(A7) */
    c->pc = 0x00017080u;
    t0 = 0x0000000du;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17084:
    /* 00017084   4  move.l (fffffffc,A5),-(A7) */
    c->pc = 0x00017084u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17088:
    /* 00017088   4  jsr (00016f72) */
    c->pc = 0x00017088u;
    rc_push32(c, m, 0x0001708cu);
    rc_depth++;
    c->pc = 0x00016f72u;
    return;

L_1708C:
    /* 0001708c   4  lea (a,A7),A7 */
    c->pc = 0x0001708cu;
    c->a[7] = (c->a[7] + 0xau);

L_17090:
    /* 00017090   4  movea.l (8,A5),A0 */
    c->pc = 0x00017090u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_17094:
    /* 00017094   4  move.b #a,(A0) */
    c->pc = 0x00017094u;
    t0 = 0x0000000au;
    rc_wr8(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_B);

L_17098:
    /* 00017098   4  movea.l (8,A5),A0 */
    c->pc = 0x00017098u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1709C:
    /* 0001709c   2  addq.l #1,A0 */
    c->pc = 0x0001709cu;
    c->a[0] += 0x00000001u;

L_1709E:
    /* 0001709e   4  move.l A0,(fffffffc,A5) */
    c->pc = 0x0001709eu;
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_170A2:
    /* 000170a2   4  addq.w #8,(fffffff2,A5) */
    c->pc = 0x000170a2u;
    t3 = (c->a[5] - 0xeu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_170A6:
    /* 000170a6   2  bra 0001705c */
    c->pc = 0x000170a6u;
    rc_tick();
    goto L_1705C;

L_170A8:
    /* 000170a8   4  move.w (c,A5),-(A7) */
    c->pc = 0x000170a8u;
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_170AC:
    /* 000170ac   4  move.w (fffffff2,A5),-(A7) */
    c->pc = 0x000170acu;
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_170B0:
    /* 000170b0   4  move.w #d,-(A7) */
    c->pc = 0x000170b0u;
    t0 = 0x0000000du;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_170B4:
    /* 000170b4   4  move.l (fffffffc,A5),-(A7) */
    c->pc = 0x000170b4u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_170B8:
    /* 000170b8   4  jsr (00016f72) */
    c->pc = 0x000170b8u;
    rc_push32(c, m, 0x000170bcu);
    rc_depth++;
    c->pc = 0x00016f72u;
    return;

L_170BC:
    /* 000170bc   4  lea (a,A7),A7 */
    c->pc = 0x000170bcu;
    c->a[7] = (c->a[7] + 0xau);

L_170C0:
    /* 000170c0   2  unlk A5 */
    c->pc = 0x000170c0u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_170C2:
    /* 000170c2   2  rts */
    c->pc = 0x000170c2u;
    rc_ret(c, m);
    return;

}
