/* fn_0001e2d8 - 204 byte(s), 64 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001e2d8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001e2d8u): goto L_1E2D8;
    case RC_ADDR(0x0001e2dcu): goto L_1E2DC;
    case RC_ADDR(0x0001e2e0u): goto L_1E2E0;
    case RC_ADDR(0x0001e2e4u): goto L_1E2E4;
    case RC_ADDR(0x0001e2eau): goto L_1E2EA;
    case RC_ADDR(0x0001e2eeu): goto L_1E2EE;
    case RC_ADDR(0x0001e2f0u): goto L_1E2F0;
    case RC_ADDR(0x0001e2f4u): goto L_1E2F4;
    case RC_ADDR(0x0001e2f6u): goto L_1E2F6;
    case RC_ADDR(0x0001e2fau): goto L_1E2FA;
    case RC_ADDR(0x0001e2fcu): goto L_1E2FC;
    case RC_ADDR(0x0001e300u): goto L_1E300;
    case RC_ADDR(0x0001e302u): goto L_1E302;
    case RC_ADDR(0x0001e306u): goto L_1E306;
    case RC_ADDR(0x0001e30au): goto L_1E30A;
    case RC_ADDR(0x0001e30cu): goto L_1E30C;
    case RC_ADDR(0x0001e30eu): goto L_1E30E;
    case RC_ADDR(0x0001e312u): goto L_1E312;
    case RC_ADDR(0x0001e316u): goto L_1E316;
    case RC_ADDR(0x0001e31au): goto L_1E31A;
    case RC_ADDR(0x0001e31eu): goto L_1E31E;
    case RC_ADDR(0x0001e320u): goto L_1E320;
    case RC_ADDR(0x0001e322u): goto L_1E322;
    case RC_ADDR(0x0001e326u): goto L_1E326;
    case RC_ADDR(0x0001e328u): goto L_1E328;
    case RC_ADDR(0x0001e32eu): goto L_1E32E;
    case RC_ADDR(0x0001e332u): goto L_1E332;
    case RC_ADDR(0x0001e334u): goto L_1E334;
    case RC_ADDR(0x0001e336u): goto L_1E336;
    case RC_ADDR(0x0001e338u): goto L_1E338;
    case RC_ADDR(0x0001e33cu): goto L_1E33C;
    case RC_ADDR(0x0001e33eu): goto L_1E33E;
    case RC_ADDR(0x0001e344u): goto L_1E344;
    case RC_ADDR(0x0001e348u): goto L_1E348;
    case RC_ADDR(0x0001e34au): goto L_1E34A;
    case RC_ADDR(0x0001e34cu): goto L_1E34C;
    case RC_ADDR(0x0001e34eu): goto L_1E34E;
    case RC_ADDR(0x0001e350u): goto L_1E350;
    case RC_ADDR(0x0001e356u): goto L_1E356;
    case RC_ADDR(0x0001e35au): goto L_1E35A;
    case RC_ADDR(0x0001e35cu): goto L_1E35C;
    case RC_ADDR(0x0001e35eu): goto L_1E35E;
    case RC_ADDR(0x0001e360u): goto L_1E360;
    case RC_ADDR(0x0001e364u): goto L_1E364;
    case RC_ADDR(0x0001e366u): goto L_1E366;
    case RC_ADDR(0x0001e368u): goto L_1E368;
    case RC_ADDR(0x0001e36cu): goto L_1E36C;
    case RC_ADDR(0x0001e370u): goto L_1E370;
    case RC_ADDR(0x0001e374u): goto L_1E374;
    case RC_ADDR(0x0001e378u): goto L_1E378;
    case RC_ADDR(0x0001e37au): goto L_1E37A;
    case RC_ADDR(0x0001e37eu): goto L_1E37E;
    case RC_ADDR(0x0001e380u): goto L_1E380;
    case RC_ADDR(0x0001e384u): goto L_1E384;
    case RC_ADDR(0x0001e388u): goto L_1E388;
    case RC_ADDR(0x0001e38au): goto L_1E38A;
    case RC_ADDR(0x0001e38eu): goto L_1E38E;
    case RC_ADDR(0x0001e390u): goto L_1E390;
    case RC_ADDR(0x0001e394u): goto L_1E394;
    case RC_ADDR(0x0001e396u): goto L_1E396;
    case RC_ADDR(0x0001e39au): goto L_1E39A;
    case RC_ADDR(0x0001e39cu): goto L_1E39C;
    case RC_ADDR(0x0001e3a0u): goto L_1E3A0;
    case RC_ADDR(0x0001e3a2u): goto L_1E3A2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E2D8:
    /* 0001e2d8   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001e2d8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1E2DC:
    /* 0001e2dc   4  lea (ffffcf46,A4),A0 */
    c->pc = RC_ADDR(0x0001e2dcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x30bau);

L_1E2E0:
    /* 0001e2e0   4  move.l A0,(2dbe,A4) */
    c->pc = RC_ADDR(0x0001e2e0u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2dbeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E2E4:
    /* 0001e2e4   6  adda.l #24,A0 */
    c->pc = RC_ADDR(0x0001e2e4u);
    rc_step(c, m, 16);
    t0 = 0x00000024u;
    c->a[0] += t0;

L_1E2EA:
    /* 0001e2ea   4  cmpi.w #e0,(A0)+ */
    c->pc = RC_ADDR(0x0001e2eau);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_cmp(c, RC_W, t0, 0x000000e0u);

L_1E2EE:
    /* 0001e2ee   2  bne 0001e2ea */
    c->pc = RC_ADDR(0x0001e2eeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_1E2EA; }

L_1E2F0:
    /* 0001e2f0   4  movea.l (2db2,A4),A1 */
    c->pc = RC_ADDR(0x0001e2f0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2db2u));
    c->a[1] = t0;

L_1E2F4:
    /* 0001e2f4   2  addq.l #8,A1 */
    c->pc = RC_ADDR(0x0001e2f4u);
    rc_step(c, m, 8);
    c->a[1] += 0x00000008u;

L_1E2F6:
    /* 0001e2f6   4  move.w #3,D0 */
    c->pc = RC_ADDR(0x0001e2f6u);
    rc_step(c, m, 8);
    t0 = 0x00000003u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E2FA:
    /* 0001e2fa   2  move.w (A1)+,(A0) */
    c->pc = RC_ADDR(0x0001e2fau);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E2FC:
    /* 0001e2fc   4  move.w (A1)+,(4,A0) */
    c->pc = RC_ADDR(0x0001e2fcu);
    rc_step(c, m, 16);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_wr16(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E300:
    /* 0001e300   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x0001e300u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_1E302:
    /* 0001e302   4  dbf D0,0001e2fa */
    c->pc = RC_ADDR(0x0001e302u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1E2FA; }
    }

L_1E306:
    /* 0001e306   4  cmpi.w #e0,(A0)+ */
    c->pc = RC_ADDR(0x0001e306u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_cmp(c, RC_W, t0, 0x000000e0u);

L_1E30A:
    /* 0001e30a   2  bne 0001e306 */
    c->pc = RC_ADDR(0x0001e30au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_1E306; }

L_1E30C:
    /* 0001e30c   2  move.l A0,D0 */
    c->pc = RC_ADDR(0x0001e30cu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E30E:
    /* 0001e30e   4  sub.l (2dbe,A4),D0 */
    c->pc = RC_ADDR(0x0001e30eu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2dbeu));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1E312:
    /* 0001e312   4  move.l D0,(2cbc,A4) */
    c->pc = RC_ADDR(0x0001e312u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2cbcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E316:
    /* 0001e316   4  movea.l (2cc0,A4),A1 */
    c->pc = RC_ADDR(0x0001e316u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2cc0u));
    c->a[1] = t0;

L_1E31A:
    /* 0001e31a   4  movea.l (2cc4,A4),A2 */
    c->pc = RC_ADDR(0x0001e31au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2cc4u));
    c->a[2] = t0;

L_1E31E:
    /* 0001e31e   2  addq.l #8,A1 */
    c->pc = RC_ADDR(0x0001e31eu);
    rc_step(c, m, 8);
    c->a[1] += 0x00000008u;

L_1E320:
    /* 0001e320   2  addq.l #8,A2 */
    c->pc = RC_ADDR(0x0001e320u);
    rc_step(c, m, 8);
    c->a[2] += 0x00000008u;

L_1E322:
    /* 0001e322   4  move.w #2,D0 */
    c->pc = RC_ADDR(0x0001e322u);
    rc_step(c, m, 8);
    t0 = 0x00000002u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E326:
    /* 0001e326   2  move.l (A1)+,D1 */
    c->pc = RC_ADDR(0x0001e326u);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E328:
    /* 0001e328   6  addi.l #190,D1 */
    c->pc = RC_ADDR(0x0001e328u);
    rc_step(c, m, 16);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + 0x00000190u;
    rc_flags_add(c, RC_L, t1, 0x00000190u, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1E32E:
    /* 0001e32e   4  move.w D1,(4,A0) */
    c->pc = RC_ADDR(0x0001e32eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E332:
    /* 0001e332   2  swap D1 */
    c->pc = RC_ADDR(0x0001e332u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_1E334:
    /* 0001e334   2  move.w D1,(A0) */
    c->pc = RC_ADDR(0x0001e334u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E336:
    /* 0001e336   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x0001e336u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_1E338:
    /* 0001e338   4  dbf D0,0001e326 */
    c->pc = RC_ADDR(0x0001e338u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1E326; }
    }

L_1E33C:
    /* 0001e33c   2  move.l (A2)+,D1 */
    c->pc = RC_ADDR(0x0001e33cu);
    rc_step(c, m, 12);
    t3 = c->a[2];
    c->a[2] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E33E:
    /* 0001e33e   6  addi.l #190,D1 */
    c->pc = RC_ADDR(0x0001e33eu);
    rc_step(c, m, 16);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + 0x00000190u;
    rc_flags_add(c, RC_L, t1, 0x00000190u, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1E344:
    /* 0001e344   4  move.w D1,(4,A0) */
    c->pc = RC_ADDR(0x0001e344u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E348:
    /* 0001e348   2  swap D1 */
    c->pc = RC_ADDR(0x0001e348u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_1E34A:
    /* 0001e34a   2  move.w D1,(A0) */
    c->pc = RC_ADDR(0x0001e34au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E34C:
    /* 0001e34c   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x0001e34cu);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_1E34E:
    /* 0001e34e   2  move.l (A2)+,D1 */
    c->pc = RC_ADDR(0x0001e34eu);
    rc_step(c, m, 12);
    t3 = c->a[2];
    c->a[2] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E350:
    /* 0001e350   6  addi.l #190,D1 */
    c->pc = RC_ADDR(0x0001e350u);
    rc_step(c, m, 16);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + 0x00000190u;
    rc_flags_add(c, RC_L, t1, 0x00000190u, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1E356:
    /* 0001e356   4  move.w D1,(4,A0) */
    c->pc = RC_ADDR(0x0001e356u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E35A:
    /* 0001e35a   2  swap D1 */
    c->pc = RC_ADDR(0x0001e35au);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_1E35C:
    /* 0001e35c   2  move.w D1,(A0) */
    c->pc = RC_ADDR(0x0001e35cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E35E:
    /* 0001e35e   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x0001e35eu);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_1E360:
    /* 0001e360   4  cmpi.w #e0,(A0)+ */
    c->pc = RC_ADDR(0x0001e360u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_cmp(c, RC_W, t0, 0x000000e0u);

L_1E364:
    /* 0001e364   2  bne 0001e360 */
    c->pc = RC_ADDR(0x0001e364u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_1E360; }

L_1E366:
    /* 0001e366   2  move.l A0,D0 */
    c->pc = RC_ADDR(0x0001e366u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E368:
    /* 0001e368   4  sub.l (2dbe,A4),D0 */
    c->pc = RC_ADDR(0x0001e368u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2dbeu));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1E36C:
    /* 0001e36c   4  move.l D0,(2cb8,A4) */
    c->pc = RC_ADDR(0x0001e36cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2cb8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E370:
    /* 0001e370   4  lea (ffffface,A4),A1 */
    c->pc = RC_ADDR(0x0001e370u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x532u);

L_1E374:
    /* 0001e374   4  move.w #4,D0 */
    c->pc = RC_ADDR(0x0001e374u);
    rc_step(c, m, 8);
    t0 = 0x00000004u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E378:
    /* 0001e378   2  move.w (A1)+,(A0) */
    c->pc = RC_ADDR(0x0001e378u);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E37A:
    /* 0001e37a   4  move.w (A1)+,(4,A0) */
    c->pc = RC_ADDR(0x0001e37au);
    rc_step(c, m, 16);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_wr16(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E37E:
    /* 0001e37e   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x0001e37eu);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_1E380:
    /* 0001e380   4  dbf D0,0001e378 */
    c->pc = RC_ADDR(0x0001e380u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1E378; }
    }

L_1E384:
    /* 0001e384   4  cmpi.w #e0,(A0)+ */
    c->pc = RC_ADDR(0x0001e384u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_cmp(c, RC_W, t0, 0x000000e0u);

L_1E388:
    /* 0001e388   2  bne 0001e384 */
    c->pc = RC_ADDR(0x0001e388u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_1E384; }

L_1E38A:
    /* 0001e38a   4  movea.l (2dba,A4),A1 */
    c->pc = RC_ADDR(0x0001e38au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2dbau));
    c->a[1] = t0;

L_1E38E:
    /* 0001e38e   2  addq.l #8,A1 */
    c->pc = RC_ADDR(0x0001e38eu);
    rc_step(c, m, 8);
    c->a[1] += 0x00000008u;

L_1E390:
    /* 0001e390   4  move.w #4,D0 */
    c->pc = RC_ADDR(0x0001e390u);
    rc_step(c, m, 8);
    t0 = 0x00000004u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E394:
    /* 0001e394   2  move.w (A1)+,(A0) */
    c->pc = RC_ADDR(0x0001e394u);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E396:
    /* 0001e396   4  move.w (A1)+,(4,A0) */
    c->pc = RC_ADDR(0x0001e396u);
    rc_step(c, m, 16);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_wr16(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E39A:
    /* 0001e39a   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x0001e39au);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_1E39C:
    /* 0001e39c   4  dbf D0,0001e394 */
    c->pc = RC_ADDR(0x0001e39cu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1E394; }
    }

L_1E3A0:
    /* 0001e3a0   2  unlk A5 */
    c->pc = RC_ADDR(0x0001e3a0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1E3A2:
    /* 0001e3a2   2  rts */
    c->pc = RC_ADDR(0x0001e3a2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
