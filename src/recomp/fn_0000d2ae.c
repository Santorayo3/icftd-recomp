/* fn_0000d2ae - 200 byte(s), 55 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000d2ae(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case 0x0000d2aeu: goto L_D2AE;
    case 0x0000d2b2u: goto L_D2B2;
    case 0x0000d2b6u: goto L_D2B6;
    case 0x0000d2b8u: goto L_D2B8;
    case 0x0000d2bcu: goto L_D2BC;
    case 0x0000d2beu: goto L_D2BE;
    case 0x0000d2c2u: goto L_D2C2;
    case 0x0000d2c6u: goto L_D2C6;
    case 0x0000d2c8u: goto L_D2C8;
    case 0x0000d2ccu: goto L_D2CC;
    case 0x0000d2ceu: goto L_D2CE;
    case 0x0000d2d2u: goto L_D2D2;
    case 0x0000d2d6u: goto L_D2D6;
    case 0x0000d2dau: goto L_D2DA;
    case 0x0000d2deu: goto L_D2DE;
    case 0x0000d2e0u: goto L_D2E0;
    case 0x0000d2e4u: goto L_D2E4;
    case 0x0000d2eau: goto L_D2EA;
    case 0x0000d2ecu: goto L_D2EC;
    case 0x0000d2f2u: goto L_D2F2;
    case 0x0000d2f6u: goto L_D2F6;
    case 0x0000d2f8u: goto L_D2F8;
    case 0x0000d2fcu: goto L_D2FC;
    case 0x0000d302u: goto L_D302;
    case 0x0000d304u: goto L_D304;
    case 0x0000d30au: goto L_D30A;
    case 0x0000d30eu: goto L_D30E;
    case 0x0000d310u: goto L_D310;
    case 0x0000d312u: goto L_D312;
    case 0x0000d316u: goto L_D316;
    case 0x0000d31au: goto L_D31A;
    case 0x0000d31eu: goto L_D31E;
    case 0x0000d322u: goto L_D322;
    case 0x0000d326u: goto L_D326;
    case 0x0000d328u: goto L_D328;
    case 0x0000d32cu: goto L_D32C;
    case 0x0000d330u: goto L_D330;
    case 0x0000d334u: goto L_D334;
    case 0x0000d33au: goto L_D33A;
    case 0x0000d33eu: goto L_D33E;
    case 0x0000d342u: goto L_D342;
    case 0x0000d346u: goto L_D346;
    case 0x0000d34au: goto L_D34A;
    case 0x0000d34eu: goto L_D34E;
    case 0x0000d350u: goto L_D350;
    case 0x0000d352u: goto L_D352;
    case 0x0000d356u: goto L_D356;
    case 0x0000d35au: goto L_D35A;
    case 0x0000d35eu: goto L_D35E;
    case 0x0000d362u: goto L_D362;
    case 0x0000d366u: goto L_D366;
    case 0x0000d36au: goto L_D36A;
    case 0x0000d36eu: goto L_D36E;
    case 0x0000d372u: goto L_D372;
    case 0x0000d374u: goto L_D374;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_D2AE:
    /* 0000d2ae   4  link.w A5,#fffffffc */
    c->pc = 0x0000d2aeu;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_D2B2:
    /* 0000d2b2   4  move.w (47a,A4),D0 */
    c->pc = 0x0000d2b2u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D2B6:
    /* 0000d2b6   2  ext.l D0 */
    c->pc = 0x0000d2b6u;
    rc_ext_l(c, 0);

L_D2B8:
    /* 0000d2b8   4  divs.w #20,D0 */
    c->pc = 0x0000d2b8u;
    t0 = 0x00000020u;
    rc_divs(c, m, 0, t0);

L_D2BC:
    /* 0000d2bc   2  subq.w #5,D0 */
    c->pc = 0x0000d2bcu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000005u;
    rc_flags_sub(c, RC_W, t1, 0x00000005u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_D2BE:
    /* 0000d2be   4  move.w D0,(fffffffe,A5) */
    c->pc = 0x0000d2beu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D2C2:
    /* 0000d2c2   4  move.w (47c,A4),D0 */
    c->pc = 0x0000d2c2u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D2C6:
    /* 0000d2c6   2  ext.l D0 */
    c->pc = 0x0000d2c6u;
    rc_ext_l(c, 0);

L_D2C8:
    /* 0000d2c8   4  divs.w #1b,D0 */
    c->pc = 0x0000d2c8u;
    t0 = 0x0000001bu;
    rc_divs(c, m, 0, t0);

L_D2CC:
    /* 0000d2cc   2  subq.w #3,D0 */
    c->pc = 0x0000d2ccu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_D2CE:
    /* 0000d2ce   4  move.w D0,(fffffffc,A5) */
    c->pc = 0x0000d2ceu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D2D2:
    /* 0000d2d2   4  addq.w #1,(fffffffe,A5) */
    c->pc = 0x0000d2d2u;
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_D2D6:
    /* 0000d2d6   4  addq.w #1,(fffffffc,A5) */
    c->pc = 0x0000d2d6u;
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_D2DA:
    /* 0000d2da   4  tst.w (fffffffe,A5) */
    c->pc = 0x0000d2dau;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_D2DE:
    /* 0000d2de   2  bge 0000d2e4 */
    c->pc = 0x0000d2deu;
    if (rc_cond(c, 12)) goto L_D2E4;

L_D2E0:
    /* 0000d2e0   4  clr.w (fffffffe,A5) */
    c->pc = 0x0000d2e0u;
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D2E4:
    /* 0000d2e4   6  cmpi.w #29,(fffffffe,A5) */
    c->pc = 0x0000d2e4u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000029u);

L_D2EA:
    /* 0000d2ea   2  ble 0000d2f2 */
    c->pc = 0x0000d2eau;
    if (rc_cond(c, 15)) goto L_D2F2;

L_D2EC:
    /* 0000d2ec   6  move.w #29,(fffffffe,A5) */
    c->pc = 0x0000d2ecu;
    t0 = 0x00000029u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D2F2:
    /* 0000d2f2   4  tst.w (fffffffc,A5) */
    c->pc = 0x0000d2f2u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_D2F6:
    /* 0000d2f6   2  bge 0000d2fc */
    c->pc = 0x0000d2f6u;
    if (rc_cond(c, 12)) goto L_D2FC;

L_D2F8:
    /* 0000d2f8   4  clr.w (fffffffc,A5) */
    c->pc = 0x0000d2f8u;
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D2FC:
    /* 0000d2fc   6  cmpi.w #1f,(fffffffc,A5) */
    c->pc = 0x0000d2fcu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x0000001fu);

L_D302:
    /* 0000d302   2  ble 0000d30a */
    c->pc = 0x0000d302u;
    if (rc_cond(c, 15)) goto L_D30A;

L_D304:
    /* 0000d304   6  move.w #1f,(fffffffc,A5) */
    c->pc = 0x0000d304u;
    t0 = 0x0000001fu;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D30A:
    /* 0000d30a   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x0000d30au;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D30E:
    /* 0000d30e   2  asl.w #5,D0 */
    c->pc = 0x0000d30eu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000005u, rc_d_get(c, 0, RC_W), RC_W);

L_D310:
    /* 0000d310   2  ext.l D0 */
    c->pc = 0x0000d310u;
    rc_ext_l(c, 0);

L_D312:
    /* 0000d312   4  divs.w #10,D0 */
    c->pc = 0x0000d312u;
    t0 = 0x00000010u;
    rc_divs(c, m, 0, t0);

L_D316:
    /* 0000d316   4  move.w D0,(74e,A4) */
    c->pc = 0x0000d316u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x74eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D31A:
    /* 0000d31a   4  move.w D0,(a16,A4) */
    c->pc = 0x0000d31au;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xa16u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D31E:
    /* 0000d31e   4  move.w (fffffffc,A5),D0 */
    c->pc = 0x0000d31eu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D322:
    /* 0000d322   4  muls.w #1b,D0 */
    c->pc = 0x0000d322u;
    t0 = 0x0000001bu;
    rc_muls(c, 0, t0);

L_D326:
    /* 0000d326   2  ext.l D0 */
    c->pc = 0x0000d326u;
    rc_ext_l(c, 0);

L_D328:
    /* 0000d328   4  divs.w #9,D0 */
    c->pc = 0x0000d328u;
    t0 = 0x00000009u;
    rc_divs(c, m, 0, t0);

L_D32C:
    /* 0000d32c   4  move.w D0,(750,A4) */
    c->pc = 0x0000d32cu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x750u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D330:
    /* 0000d330   4  move.w D0,(a18,A4) */
    c->pc = 0x0000d330u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xa18u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D334:
    /* 0000d334   6  move.w #f,(fffff27e,A4) */
    c->pc = 0x0000d334u;
    t0 = 0x0000000fu;
    rc_wr16(c, m, (c->a[4] - 0xd82u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D33A:
    /* 0000d33a   4  clr.w (fffff280,A4) */
    c->pc = 0x0000d33au;
    rc_wr16(c, m, (c->a[4] - 0xd80u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D33E:
    /* 0000d33e   4  clr.l (fffff282,A4) */
    c->pc = 0x0000d33eu;
    rc_wr32(c, m, (c->a[4] - 0xd7eu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_D342:
    /* 0000d342   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x0000d342u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D346:
    /* 0000d346   4  muls.w #27,D0 */
    c->pc = 0x0000d346u;
    t0 = 0x00000027u;
    rc_muls(c, 0, t0);

L_D34A:
    /* 0000d34a   4  add.w (fffffffc,A5),D0 */
    c->pc = 0x0000d34au;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_D34E:
    /* 0000d34e   2  asl.w #1,D0 */
    c->pc = 0x0000d34eu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_D350:
    /* 0000d350   2  ext.l D0 */
    c->pc = 0x0000d350u;
    rc_ext_l(c, 0);

L_D352:
    /* 0000d352   4  move.l D0,(fffff2e4,A4) */
    c->pc = 0x0000d352u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xd1cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_D356:
    /* 0000d356   4  clr.l (fffff2e0,A4) */
    c->pc = 0x0000d356u;
    rc_wr32(c, m, (c->a[4] - 0xd20u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_D35A:
    /* 0000d35a   4  clr.l (fffff2dc,A4) */
    c->pc = 0x0000d35au;
    rc_wr32(c, m, (c->a[4] - 0xd24u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_D35E:
    /* 0000d35e   4  clr.w (fffff2d8,A4) */
    c->pc = 0x0000d35eu;
    rc_wr16(c, m, (c->a[4] - 0xd28u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D362:
    /* 0000d362   4  clr.w (fffff2d6,A4) */
    c->pc = 0x0000d362u;
    rc_wr16(c, m, (c->a[4] - 0xd2au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D366:
    /* 0000d366   4  clr.w (fffff2d4,A4) */
    c->pc = 0x0000d366u;
    rc_wr16(c, m, (c->a[4] - 0xd2cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D36A:
    /* 0000d36a   4  clr.w (fffff2d2,A4) */
    c->pc = 0x0000d36au;
    rc_wr16(c, m, (c->a[4] - 0xd2eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D36E:
    /* 0000d36e   4  jsr (ffff8194,A4) */
    c->pc = 0x0000d36eu;
    /* vector 67 */
    rc_push32(c, m, 0x0000d372u);
    rc_depth++;
    c->pc = 0x00017fdcu;
    return;

L_D372:
    /* 0000d372   2  unlk A5 */
    c->pc = 0x0000d372u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_D374:
    /* 0000d374   2  rts */
    c->pc = 0x0000d374u;
    rc_ret(c, m);
    return;

}
