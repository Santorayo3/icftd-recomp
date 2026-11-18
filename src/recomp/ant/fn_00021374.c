/* fn_00021374 - 140 byte(s), 40 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00021374(cpu_t *c, rt_machine *m)
{
    u32 t0, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00021374u): goto L_21374;
    case RC_ADDR(0x00021376u): goto L_21376;
    case RC_ADDR(0x0002137au): goto L_2137A;
    case RC_ADDR(0x0002137cu): goto L_2137C;
    case RC_ADDR(0x00021380u): goto L_21380;
    case RC_ADDR(0x00021384u): goto L_21384;
    case RC_ADDR(0x00021388u): goto L_21388;
    case RC_ADDR(0x0002138cu): goto L_2138C;
    case RC_ADDR(0x00021390u): goto L_21390;
    case RC_ADDR(0x00021392u): goto L_21392;
    case RC_ADDR(0x00021394u): goto L_21394;
    case RC_ADDR(0x00021396u): goto L_21396;
    case RC_ADDR(0x0002139au): goto L_2139A;
    case RC_ADDR(0x0002139cu): goto L_2139C;
    case RC_ADDR(0x0002139eu): goto L_2139E;
    case RC_ADDR(0x000213a0u): goto L_213A0;
    case RC_ADDR(0x000213a2u): goto L_213A2;
    case RC_ADDR(0x000213a6u): goto L_213A6;
    case RC_ADDR(0x000213a8u): goto L_213A8;
    case RC_ADDR(0x000213acu): goto L_213AC;
    case RC_ADDR(0x000213b0u): goto L_213B0;
    case RC_ADDR(0x000213b4u): goto L_213B4;
    case RC_ADDR(0x000213b8u): goto L_213B8;
    case RC_ADDR(0x000213bcu): goto L_213BC;
    case RC_ADDR(0x000213beu): goto L_213BE;
    case RC_ADDR(0x000213c2u): goto L_213C2;
    case RC_ADDR(0x000213c8u): goto L_213C8;
    case RC_ADDR(0x000213cau): goto L_213CA;
    case RC_ADDR(0x000213ceu): goto L_213CE;
    case RC_ADDR(0x000213d2u): goto L_213D2;
    case RC_ADDR(0x000213d6u): goto L_213D6;
    case RC_ADDR(0x000213dau): goto L_213DA;
    case RC_ADDR(0x000213dcu): goto L_213DC;
    case RC_ADDR(0x000213e0u): goto L_213E0;
    case RC_ADDR(0x000213e6u): goto L_213E6;
    case RC_ADDR(0x000213ecu): goto L_213EC;
    case RC_ADDR(0x000213f0u): goto L_213F0;
    case RC_ADDR(0x000213f4u): goto L_213F4;
    case RC_ADDR(0x000213f8u): goto L_213F8;
    case RC_ADDR(0x000213fcu): goto L_213FC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21374:
    /* 00021374   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021374u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21376:
    /* 00021376   4  move.b (f,A5),D0 */
    c->pc = RC_ADDR(0x00021376u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2137A:
    /* 0002137a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0002137au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2137C:
    /* 0002137c   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x0002137cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21380:
    /* 00021380   4  movea.l (838,A4),A0 */
    c->pc = RC_ADDR(0x00021380u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x838u));
    c->a[0] = t0;

L_21384:
    /* 00021384   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x00021384u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21388:
    /* 00021388   4  jsr (ffff8248,A4) */
    c->pc = RC_ADDR(0x00021388u);
    rc_step(c, m, 18);
    /* vector 97 */
    rc_push32(c, m, RC_ADDR(0x0002138cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d3eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001fe0au);
    return;

L_2138C:
    /* 0002138c   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0002138cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_21390:
    /* 00021390   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x00021390u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_21392:
    /* 00021392   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x00021392u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21394:
    /* 00021394   2  bne 000213e0 */
    c->pc = RC_ADDR(0x00021394u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_213E0;

L_21396:
    /* 00021396   4  move.l (18,A5),D0 */
    c->pc = RC_ADDR(0x00021396u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x18u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2139A:
    /* 0002139a   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0002139au);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_2139C:
    /* 0002139c   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x0002139cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_2139E:
    /* 0002139e   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0002139eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_213A0:
    /* 000213a0   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000213a0u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_213A2:
    /* 000213a2   4  move.b (f,A5),D0 */
    c->pc = RC_ADDR(0x000213a2u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_213A6:
    /* 000213a6   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000213a6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_213A8:
    /* 000213a8   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x000213a8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_213AC:
    /* 000213ac   4  movea.l (838,A4),A0 */
    c->pc = RC_ADDR(0x000213acu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x838u));
    c->a[0] = t0;

L_213B0:
    /* 000213b0   4  pea (2c,A0) */
    c->pc = RC_ADDR(0x000213b0u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[0] + 0x2cu));

L_213B4:
    /* 000213b4   4  jsr (0001fd4c) */
    c->pc = RC_ADDR(0x000213b4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000213b8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fd4cu);
    return;

L_213B8:
    /* 000213b8   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000213b8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_213BC:
    /* 000213bc   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x000213bcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_213BE:
    /* 000213be   4  movea.l (a,A5),A0 */
    c->pc = RC_ADDR(0x000213beu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[0] = t0;

L_213C2:
    /* 000213c2   6  btst #0,(b,A0) */
    c->pc = RC_ADDR(0x000213c2u);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0xbu);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_213C8:
    /* 000213c8   2  bne 000213e0 */
    c->pc = RC_ADDR(0x000213c8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_213E0;

L_213CA:
    /* 000213ca   4  clr.w (28,A2) */
    c->pc = RC_ADDR(0x000213cau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[2] + 0x28u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_213CE:
    /* 000213ce   4  clr.w (2a,A2) */
    c->pc = RC_ADDR(0x000213ceu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[2] + 0x2au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_213D2:
    /* 000213d2   4  move.l (2c,A2),-(A7) */
    c->pc = RC_ADDR(0x000213d2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[2] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_213D6:
    /* 000213d6   4  jsr (0001fede) */
    c->pc = RC_ADDR(0x000213d6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000213dau));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fedeu);
    return;

L_213DA:
    /* 000213da   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000213dau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_213DC:
    /* 000213dc   4  clr.l (2c,A2) */
    c->pc = RC_ADDR(0x000213dcu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[2] + 0x2cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_213E0:
    /* 000213e0   6  move.l (10,A5),(10,A2) */
    c->pc = RC_ADDR(0x000213e0u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_wr32(c, m, (c->a[2] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_213E6:
    /* 000213e6   6  move.l (14,A5),(14,A2) */
    c->pc = RC_ADDR(0x000213e6u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_wr32(c, m, (c->a[2] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_213EC:
    /* 000213ec   4  clr.l (24,A2) */
    c->pc = RC_ADDR(0x000213ecu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[2] + 0x24u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_213F0:
    /* 000213f0   4  clr.l (20,A2) */
    c->pc = RC_ADDR(0x000213f0u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[2] + 0x20u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_213F4:
    /* 000213f4   4  clr.l (1c,A2) */
    c->pc = RC_ADDR(0x000213f4u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[2] + 0x1cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_213F8:
    /* 000213f8   4  clr.l (18,A2) */
    c->pc = RC_ADDR(0x000213f8u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[2] + 0x18u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_213FC:
    /* 000213fc   4  bra 00021950 */
    c->pc = RC_ADDR(0x000213fcu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021950u);
    return;

}
