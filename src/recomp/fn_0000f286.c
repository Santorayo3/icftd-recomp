/* fn_0000f286 - 366 byte(s), 121 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f286(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x0000f286u: goto L_F286;
    case 0x0000f28au: goto L_F28A;
    case 0x0000f28cu: goto L_F28C;
    case 0x0000f290u: goto L_F290;
    case 0x0000f294u: goto L_F294;
    case 0x0000f298u: goto L_F298;
    case 0x0000f29au: goto L_F29A;
    case 0x0000f29eu: goto L_F29E;
    case 0x0000f2a0u: goto L_F2A0;
    case 0x0000f2a4u: goto L_F2A4;
    case 0x0000f2a6u: goto L_F2A6;
    case 0x0000f2aau: goto L_F2AA;
    case 0x0000f2aeu: goto L_F2AE;
    case 0x0000f2b0u: goto L_F2B0;
    case 0x0000f2b2u: goto L_F2B2;
    case 0x0000f2b4u: goto L_F2B4;
    case 0x0000f2b8u: goto L_F2B8;
    case 0x0000f2bau: goto L_F2BA;
    case 0x0000f2bcu: goto L_F2BC;
    case 0x0000f2beu: goto L_F2BE;
    case 0x0000f2c0u: goto L_F2C0;
    case 0x0000f2c2u: goto L_F2C2;
    case 0x0000f2c6u: goto L_F2C6;
    case 0x0000f2cau: goto L_F2CA;
    case 0x0000f2ccu: goto L_F2CC;
    case 0x0000f2ceu: goto L_F2CE;
    case 0x0000f2d4u: goto L_F2D4;
    case 0x0000f2d6u: goto L_F2D6;
    case 0x0000f2dcu: goto L_F2DC;
    case 0x0000f2e4u: goto L_F2E4;
    case 0x0000f2e8u: goto L_F2E8;
    case 0x0000f2ecu: goto L_F2EC;
    case 0x0000f2f2u: goto L_F2F2;
    case 0x0000f2f6u: goto L_F2F6;
    case 0x0000f2f8u: goto L_F2F8;
    case 0x0000f2fau: goto L_F2FA;
    case 0x0000f2fcu: goto L_F2FC;
    case 0x0000f2feu: goto L_F2FE;
    case 0x0000f302u: goto L_F302;
    case 0x0000f304u: goto L_F304;
    case 0x0000f308u: goto L_F308;
    case 0x0000f30au: goto L_F30A;
    case 0x0000f30eu: goto L_F30E;
    case 0x0000f310u: goto L_F310;
    case 0x0000f312u: goto L_F312;
    case 0x0000f316u: goto L_F316;
    case 0x0000f31au: goto L_F31A;
    case 0x0000f31eu: goto L_F31E;
    case 0x0000f320u: goto L_F320;
    case 0x0000f324u: goto L_F324;
    case 0x0000f326u: goto L_F326;
    case 0x0000f32au: goto L_F32A;
    case 0x0000f32cu: goto L_F32C;
    case 0x0000f32eu: goto L_F32E;
    case 0x0000f330u: goto L_F330;
    case 0x0000f332u: goto L_F332;
    case 0x0000f334u: goto L_F334;
    case 0x0000f336u: goto L_F336;
    case 0x0000f33au: goto L_F33A;
    case 0x0000f33cu: goto L_F33C;
    case 0x0000f340u: goto L_F340;
    case 0x0000f342u: goto L_F342;
    case 0x0000f344u: goto L_F344;
    case 0x0000f348u: goto L_F348;
    case 0x0000f34au: goto L_F34A;
    case 0x0000f34cu: goto L_F34C;
    case 0x0000f350u: goto L_F350;
    case 0x0000f354u: goto L_F354;
    case 0x0000f358u: goto L_F358;
    case 0x0000f35au: goto L_F35A;
    case 0x0000f35cu: goto L_F35C;
    case 0x0000f360u: goto L_F360;
    case 0x0000f362u: goto L_F362;
    case 0x0000f366u: goto L_F366;
    case 0x0000f36au: goto L_F36A;
    case 0x0000f36cu: goto L_F36C;
    case 0x0000f370u: goto L_F370;
    case 0x0000f372u: goto L_F372;
    case 0x0000f376u: goto L_F376;
    case 0x0000f378u: goto L_F378;
    case 0x0000f37cu: goto L_F37C;
    case 0x0000f37eu: goto L_F37E;
    case 0x0000f380u: goto L_F380;
    case 0x0000f384u: goto L_F384;
    case 0x0000f386u: goto L_F386;
    case 0x0000f38au: goto L_F38A;
    case 0x0000f38cu: goto L_F38C;
    case 0x0000f38eu: goto L_F38E;
    case 0x0000f392u: goto L_F392;
    case 0x0000f398u: goto L_F398;
    case 0x0000f39au: goto L_F39A;
    case 0x0000f39cu: goto L_F39C;
    case 0x0000f3a0u: goto L_F3A0;
    case 0x0000f3a2u: goto L_F3A2;
    case 0x0000f3a6u: goto L_F3A6;
    case 0x0000f3a8u: goto L_F3A8;
    case 0x0000f3acu: goto L_F3AC;
    case 0x0000f3aeu: goto L_F3AE;
    case 0x0000f3b2u: goto L_F3B2;
    case 0x0000f3b4u: goto L_F3B4;
    case 0x0000f3b6u: goto L_F3B6;
    case 0x0000f3b8u: goto L_F3B8;
    case 0x0000f3bcu: goto L_F3BC;
    case 0x0000f3c0u: goto L_F3C0;
    case 0x0000f3c4u: goto L_F3C4;
    case 0x0000f3c8u: goto L_F3C8;
    case 0x0000f3ccu: goto L_F3CC;
    case 0x0000f3ceu: goto L_F3CE;
    case 0x0000f3d2u: goto L_F3D2;
    case 0x0000f3d4u: goto L_F3D4;
    case 0x0000f3d6u: goto L_F3D6;
    case 0x0000f3d8u: goto L_F3D8;
    case 0x0000f3dau: goto L_F3DA;
    case 0x0000f3deu: goto L_F3DE;
    case 0x0000f3e0u: goto L_F3E0;
    case 0x0000f3e4u: goto L_F3E4;
    case 0x0000f3e6u: goto L_F3E6;
    case 0x0000f3e8u: goto L_F3E8;
    case 0x0000f3ecu: goto L_F3EC;
    case 0x0000f3eeu: goto L_F3EE;
    case 0x0000f3f2u: goto L_F3F2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F286:
    /* 0000f286   4  tst.w (1e,A6) */
    c->pc = 0x0000f286u;
    t0 = rc_rd16(c, m, (c->a[6] + 0x1eu));
    rc_set_nzvc(c, t0, RC_W);

L_F28A:
    /* 0000f28a   2  beq 0000f294 */
    c->pc = 0x0000f28au;
    if (rc_cond(c, 7)) goto L_F294;

L_F28C:
    /* 0000f28c   4  subq.w #1,(1e,A6) */
    c->pc = 0x0000f28cu;
    t3 = (c->a[6] + 0x1eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_F290:
    /* 0000f290   4  bne 0000f3f2 */
    c->pc = 0x0000f290u;
    if (rc_cond(c, 6)) goto L_F3F2;

L_F294:
    /* 0000f294   4  move.w (2,A6),D0 */
    c->pc = 0x0000f294u;
    t0 = rc_rd16(c, m, (c->a[6] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F298:
    /* 0000f298   2  lsr.w #1,D0 */
    c->pc = 0x0000f298u;
    c->d[0] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_F29A:
    /* 0000f29a   4  cmp.w (20,A6),D0 */
    c->pc = 0x0000f29au;
    t0 = rc_rd16(c, m, (c->a[6] + 0x20u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_F29E:
    /* 0000f29e   2  beq 0000f2e4 */
    c->pc = 0x0000f29eu;
    if (rc_cond(c, 7)) goto L_F2E4;

L_F2A0:
    /* 0000f2a0   4  move.w D0,(20,A6) */
    c->pc = 0x0000f2a0u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[6] + 0x20u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F2A4:
    /* 0000f2a4   2  asl.w #1,D0 */
    c->pc = 0x0000f2a4u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_F2A6:
    /* 0000f2a6   4  lea (0000f6e2),A0 */
    c->pc = 0x0000f2a6u;
    c->a[0] = 0x0000f6e2u;

L_F2AA:
    /* 0000f2aa   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x0000f2aau;
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F2AE:
    /* 0000f2ae   2  move.w D1,D2 */
    c->pc = 0x0000f2aeu;
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F2B0:
    /* 0000f2b0   2  moveq #c,D7 */
    c->pc = 0x0000f2b0u;
    c->d[7] = 0x0000000cu;
    rc_set_nzvc(c, c->d[7], RC_L);

L_F2B2:
    /* 0000f2b2   2  lsr.w D7,D2 */
    c->pc = 0x0000f2b2u;
    c->d[2] = rc_shift(c, 1, 0, (c->d[7] & 63u), rc_d_get(c, 2, RC_W), RC_W);

L_F2B4:
    /* 0000f2b4   4  move.w D2,(24,A6) */
    c->pc = 0x0000f2b4u;
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[6] + 0x24u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F2B8:
    /* 0000f2b8   2  asl.w D7,D2 */
    c->pc = 0x0000f2b8u;
    c->d[2] = rc_shift(c, 0, 1, (c->d[7] & 63u), rc_d_get(c, 2, RC_W), RC_W);

L_F2BA:
    /* 0000f2ba   2  swap D1 */
    c->pc = 0x0000f2bau;
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_F2BC:
    /* 0000f2bc   2  clr.w D1 */
    c->pc = 0x0000f2bcu;
    rc_d_set(c, 1, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F2BE:
    /* 0000f2be   2  lsr.l #1,D1 */
    c->pc = 0x0000f2beu;
    c->d[1] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_F2C0:
    /* 0000f2c0   2  divu.w D2,D1 */
    c->pc = 0x0000f2c0u;
    t0 = rc_d_get(c, 2, RC_W);
    rc_divu(c, m, 1, t0);

L_F2C2:
    /* 0000f2c2   4  move.w D1,(22,A6) */
    c->pc = 0x0000f2c2u;
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[6] + 0x22u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F2C6:
    /* 0000f2c6   4  mulu.w #2e9c,D1 */
    c->pc = 0x0000f2c6u;
    t0 = 0x00002e9cu;
    rc_mulu(c, 1, t0);

L_F2CA:
    /* 0000f2ca   2  moveq #f,D7 */
    c->pc = 0x0000f2cau;
    c->d[7] = 0x0000000fu;
    rc_set_nzvc(c, c->d[7], RC_L);

L_F2CC:
    /* 0000f2cc   2  lsr.l D7,D1 */
    c->pc = 0x0000f2ccu;
    c->d[1] = rc_shift(c, 1, 0, (c->d[7] & 63u), rc_d_get(c, 1, RC_L), RC_L);

L_F2CE:
    /* 0000f2ce   6  move.b D1,(00bfe401).l */
    c->pc = 0x0000f2ceu;
    t0 = rc_d_get(c, 1, RC_B);
    rc_wr8(c, m, 0x00bfe401u, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F2D4:
    /* 0000f2d4   2  lsr.w #8,D1 */
    c->pc = 0x0000f2d4u;
    c->d[1] = rc_shift(c, 1, 0, 0x00000008u, rc_d_get(c, 1, RC_W), RC_W);

L_F2D6:
    /* 0000f2d6   6  move.b D1,(00bfe501).l */
    c->pc = 0x0000f2d6u;
    t0 = rc_d_get(c, 1, RC_B);
    rc_wr8(c, m, 0x00bfe501u, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F2DC:
    /* 0000f2dc   8  move.b #11,(00bfee01).l */
    c->pc = 0x0000f2dcu;
    t0 = 0x00000011u;
    rc_wr8(c, m, 0x00bfee01u, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F2E4:
    /* 0000f2e4   4  tst.w (a,A6) */
    c->pc = 0x0000f2e4u;
    t0 = rc_rd16(c, m, (c->a[6] + 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_F2E8:
    /* 0000f2e8   4  beq 0000f3f2 */
    c->pc = 0x0000f2e8u;
    if (rc_cond(c, 7)) goto L_F3F2;

L_F2EC:
    /* 0000f2ec   6  move.w (24,A6),(1e,A6) */
    c->pc = 0x0000f2ecu;
    t0 = rc_rd16(c, m, (c->a[6] + 0x24u));
    rc_wr16(c, m, (c->a[6] + 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F2F2:
    /* 0000f2f2   4  movea.l (6,A6),A2 */
    c->pc = 0x0000f2f2u;
    t0 = rc_rd32(c, m, (c->a[6] + 0x6u));
    c->a[2] = t0;

L_F2F6:
    /* 0000f2f6   2  clr.w D6 */
    c->pc = 0x0000f2f6u;
    rc_d_set(c, 6, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F2F8:
    /* 0000f2f8   2  movea.l A2,A1 */
    c->pc = 0x0000f2f8u;
    t0 = rc_a_get(c, 2, RC_L);
    c->a[1] = t0;

L_F2FA:
    /* 0000f2fa   2  movea.l A6,A5 */
    c->pc = 0x0000f2fau;
    t0 = rc_a_get(c, 6, RC_L);
    c->a[5] = t0;

L_F2FC:
    /* 0000f2fc   2  clr.b D7 */
    c->pc = 0x0000f2fcu;
    rc_d_set(c, 7, RC_B, 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_F2FE:
    /* 0000f2fe   4  tst.l (a6,A5) */
    c->pc = 0x0000f2feu;
    t0 = rc_rd32(c, m, (c->a[5] + 0xa6u));
    rc_set_nzvc(c, t0, RC_L);

L_F302:
    /* 0000f302   2  beq 0000f31a */
    c->pc = 0x0000f302u;
    if (rc_cond(c, 7)) goto L_F31A;

L_F304:
    /* 0000f304   4  subq.l #1,(a6,A5) */
    c->pc = 0x0000f304u;
    t3 = (c->a[5] + 0xa6u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_F308:
    /* 0000f308   2  bne 0000f316 */
    c->pc = 0x0000f308u;
    if (rc_cond(c, 6)) goto L_F316;

L_F30A:
    /* 0000f30a   4  tst.l (26,A5) */
    c->pc = 0x0000f30au;
    t0 = rc_rd32(c, m, (c->a[5] + 0x26u));
    rc_set_nzvc(c, t0, RC_L);

L_F30E:
    /* 0000f30e   2  beq 0000f316 */
    c->pc = 0x0000f30eu;
    if (rc_cond(c, 7)) goto L_F316;

L_F310:
    /* 0000f310   2  move.b D7,D0 */
    c->pc = 0x0000f310u;
    t0 = rc_d_get(c, 7, RC_B);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F312:
    /* 0000f312   4  bsr 0000f57e */
    c->pc = 0x0000f312u;
    rc_push32(c, m, 0x0000f316u);
    rc_depth++;
    c->pc = 0x0000f57eu;
    return;

L_F316:
    /* 0000f316   4  bra 0000f3b2 */
    c->pc = 0x0000f316u;
    goto L_F3B2;

L_F31A:
    /* 0000f31a   4  tst.l (b6,A5) */
    c->pc = 0x0000f31au;
    t0 = rc_rd32(c, m, (c->a[5] + 0xb6u));
    rc_set_nzvc(c, t0, RC_L);

L_F31E:
    /* 0000f31e   2  beq 0000f326 */
    c->pc = 0x0000f31eu;
    if (rc_cond(c, 7)) goto L_F326;

L_F320:
    /* 0000f320   4  subq.l #1,(b6,A5) */
    c->pc = 0x0000f320u;
    t3 = (c->a[5] + 0xb6u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_F324:
    /* 0000f324   2  bne 0000f316 */
    c->pc = 0x0000f324u;
    if (rc_cond(c, 6)) { rc_tick(); goto L_F316; }

L_F326:
    /* 0000f326   4  move.l (e6,A5),D0 */
    c->pc = 0x0000f326u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xe6u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F32A:
    /* 0000f32a   2  bne 0000f330 */
    c->pc = 0x0000f32au;
    if (rc_cond(c, 6)) goto L_F330;

L_F32C:
    /* 0000f32c   2  addq.w #1,D6 */
    c->pc = 0x0000f32cu;
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_F32E:
    /* 0000f32e   2  bra 0000f316 */
    c->pc = 0x0000f32eu;
    rc_tick();
    goto L_F316;

L_F330:
    /* 0000f330   2  movea.l D0,A0 */
    c->pc = 0x0000f330u;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_F332:
    /* 0000f332   2  move.w (A0)+,D2 */
    c->pc = 0x0000f332u;
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F334:
    /* 0000f334   2  beq 0000f332 */
    c->pc = 0x0000f334u;
    if (rc_cond(c, 7)) { rc_tick(); goto L_F332; }

L_F336:
    /* 0000f336   4  cmpi.w #ffff,D2 */
    c->pc = 0x0000f336u;
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_F33A:
    /* 0000f33a   2  beq 0000f32c */
    c->pc = 0x0000f33au;
    if (rc_cond(c, 7)) { rc_tick(); goto L_F32C; }

L_F33C:
    /* 0000f33c   4  move.l A0,(e6,A5) */
    c->pc = 0x0000f33cu;
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] + 0xe6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F340:
    /* 0000f340   2  move.w D2,D3 */
    c->pc = 0x0000f340u;
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F342:
    /* 0000f342   2  lsr.w #8,D2 */
    c->pc = 0x0000f342u;
    c->d[2] = rc_shift(c, 1, 0, 0x00000008u, rc_d_get(c, 2, RC_W), RC_W);

L_F344:
    /* 0000f344   4  andi.w #ff,D3 */
    c->pc = 0x0000f344u;
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 & 0x000000ffu;
    rc_d_set(c, 3, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_F348:
    /* 0000f348   2  tst.b D2 */
    c->pc = 0x0000f348u;
    t0 = rc_d_get(c, 2, RC_B);
    rc_set_nzvc(c, t0, RC_B);

L_F34A:
    /* 0000f34a   2  bpl 0000f36c */
    c->pc = 0x0000f34au;
    if (rc_cond(c, 10)) goto L_F36C;

L_F34C:
    /* 0000f34c   4  cmpi.b #80,D2 */
    c->pc = 0x0000f34cu;
    t0 = rc_d_get(c, 2, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000080u);

L_F350:
    /* 0000f350   4  beq 0000f3ae */
    c->pc = 0x0000f350u;
    if (rc_cond(c, 7)) goto L_F3AE;

L_F354:
    /* 0000f354   4  cmpi.b #81,D2 */
    c->pc = 0x0000f354u;
    t0 = rc_d_get(c, 2, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000081u);

L_F358:
    /* 0000f358   2  bne 0000f332 */
    c->pc = 0x0000f358u;
    if (rc_cond(c, 6)) { rc_tick(); goto L_F332; }

L_F35A:
    /* 0000f35a   2  clr.l D0 */
    c->pc = 0x0000f35au;
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_F35C:
    /* 0000f35c   4  lea (40,A2),A3 */
    c->pc = 0x0000f35cu;
    c->a[3] = (c->a[2] + 0x40u);

L_F360:
    /* 0000f360   2  asl.w #2,D3 */
    c->pc = 0x0000f360u;
    c->d[3] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 3, RC_W), RC_W);

L_F362:
    /* 0000f362   4  move.l (0,A3,D3.w),D0 */
    c->pc = 0x0000f362u;
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd32(c, m, (c->a[3] + 0x0u + t4));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F366:
    /* 0000f366   4  move.l D0,(96,A5) */
    c->pc = 0x0000f366u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] + 0x96u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F36A:
    /* 0000f36a   2  bra 0000f332 */
    c->pc = 0x0000f36au;
    rc_tick();
    goto L_F332;

L_F36C:
    /* 0000f36c   4  tst.l (26,A5) */
    c->pc = 0x0000f36cu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x26u));
    rc_set_nzvc(c, t0, RC_L);

L_F370:
    /* 0000f370   2  beq 0000f3ae */
    c->pc = 0x0000f370u;
    if (rc_cond(c, 7)) goto L_F3AE;

L_F372:
    /* 0000f372   4  move.l (96,A5),D0 */
    c->pc = 0x0000f372u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x96u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F376:
    /* 0000f376   2  bne 0000f37e */
    c->pc = 0x0000f376u;
    if (rc_cond(c, 6)) goto L_F37E;

L_F378:
    /* 0000f378   4  move.l (c,A2),D0 */
    c->pc = 0x0000f378u;
    t0 = rc_rd32(c, m, (c->a[2] + 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F37C:
    /* 0000f37c   2  beq 0000f3ae */
    c->pc = 0x0000f37cu;
    if (rc_cond(c, 7)) goto L_F3AE;

L_F37E:
    /* 0000f37e   2  movea.l D0,A0 */
    c->pc = 0x0000f37eu;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_F380:
    /* 0000f380   4  move.w (4,A2),D1 */
    c->pc = 0x0000f380u;
    t0 = rc_rd16(c, m, (c->a[2] + 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F384:
    /* 0000f384   2  asr.w #4,D1 */
    c->pc = 0x0000f384u;
    c->d[1] = rc_shift(c, 0, 0, 0x00000004u, rc_d_get(c, 1, RC_W), RC_W);

L_F386:
    /* 0000f386   4  subi.w #8,D1 */
    c->pc = 0x0000f386u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_F38A:
    /* 0000f38a   2  add.w D2,D1 */
    c->pc = 0x0000f38au;
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_F38C:
    /* 0000f38c   2  move.b D7,D0 */
    c->pc = 0x0000f38cu;
    t0 = rc_d_get(c, 7, RC_B);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F38E:
    /* 0000f38e   4  move.w (12,A1),D2 */
    c->pc = 0x0000f38eu;
    t0 = rc_rd16(c, m, (c->a[1] + 0x12u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F392:
    /* 0000f392   6  cmpi.w #1,(28,A5) */
    c->pc = 0x0000f392u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x28u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_F398:
    /* 0000f398   2  beq 0000f39c */
    c->pc = 0x0000f398u;
    if (rc_cond(c, 7)) goto L_F39C;

L_F39A:
    /* 0000f39a   2  lsr.w #1,D2 */
    c->pc = 0x0000f39au;
    c->d[2] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W);

L_F39C:
    /* 0000f39c   4  bsr 0000f4c0 */
    c->pc = 0x0000f39cu;
    rc_push32(c, m, 0x0000f3a0u);
    rc_depth++;
    c->pc = 0x0000f4c0u;
    return;

L_F3A0:
    /* 0000f3a0   2  move.w D3,D0 */
    c->pc = 0x0000f3a0u;
    t0 = rc_d_get(c, 3, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F3A2:
    /* 0000f3a2   4  mulu.w #c000,D0 */
    c->pc = 0x0000f3a2u;
    t0 = 0x0000c000u;
    rc_mulu(c, 0, t0);

L_F3A6:
    /* 0000f3a6   2  swap D0 */
    c->pc = 0x0000f3a6u;
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_F3A8:
    /* 0000f3a8   4  move.w D0,(a8,A5) */
    c->pc = 0x0000f3a8u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] + 0xa8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F3AC:
    /* 0000f3ac   2  sub.w D0,D3 */
    c->pc = 0x0000f3acu;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_F3AE:
    /* 0000f3ae   4  move.w D3,(b8,A5) */
    c->pc = 0x0000f3aeu;
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, (c->a[5] + 0xb8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F3B2:
    /* 0000f3b2   2  addq.l #4,A1 */
    c->pc = 0x0000f3b2u;
    c->a[1] += 0x00000004u;

L_F3B4:
    /* 0000f3b4   2  addq.l #4,A5 */
    c->pc = 0x0000f3b4u;
    c->a[5] += 0x00000004u;

L_F3B6:
    /* 0000f3b6   2  addq.b #1,D7 */
    c->pc = 0x0000f3b6u;
    t1 = rc_d_get(c, 7, RC_B);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 7, RC_B, t2);

L_F3B8:
    /* 0000f3b8   4  cmpi.b #4,D7 */
    c->pc = 0x0000f3b8u;
    t0 = rc_d_get(c, 7, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000004u);

L_F3BC:
    /* 0000f3bc   4  bne 0000f2fe */
    c->pc = 0x0000f3bcu;
    if (rc_cond(c, 6)) { rc_tick(); goto L_F2FE; }

L_F3C0:
    /* 0000f3c0   4  move.l (10,A6),D0 */
    c->pc = 0x0000f3c0u;
    t0 = rc_rd32(c, m, (c->a[6] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F3C4:
    /* 0000f3c4   4  addq.l #1,(10,A6) */
    c->pc = 0x0000f3c4u;
    t3 = (c->a[6] + 0x10u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_F3C8:
    /* 0000f3c8   4  move.l (14,A6),D1 */
    c->pc = 0x0000f3c8u;
    t0 = rc_rd32(c, m, (c->a[6] + 0x14u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F3CC:
    /* 0000f3cc   2  bpl 0000f3d6 */
    c->pc = 0x0000f3ccu;
    if (rc_cond(c, 10)) goto L_F3D6;

L_F3CE:
    /* 0000f3ce   4  cmpi.w #4,D6 */
    c->pc = 0x0000f3ceu;
    t0 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_F3D2:
    /* 0000f3d2   2  bne 0000f3f2 */
    c->pc = 0x0000f3d2u;
    if (rc_cond(c, 6)) goto L_F3F2;

L_F3D4:
    /* 0000f3d4   2  bra 0000f3da */
    c->pc = 0x0000f3d4u;
    goto L_F3DA;

L_F3D6:
    /* 0000f3d6   2  cmp.l D1,D0 */
    c->pc = 0x0000f3d6u;
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_F3D8:
    /* 0000f3d8   2  bne 0000f3f2 */
    c->pc = 0x0000f3d8u;
    if (rc_cond(c, 6)) goto L_F3F2;

L_F3DA:
    /* 0000f3da   4  tst.w (a,A6) */
    c->pc = 0x0000f3dau;
    t0 = rc_rd16(c, m, (c->a[6] + 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_F3DE:
    /* 0000f3de   2  bmi 0000f3e6 */
    c->pc = 0x0000f3deu;
    if (rc_cond(c, 11)) goto L_F3E6;

L_F3E0:
    /* 0000f3e0   4  subq.w #1,(a,A6) */
    c->pc = 0x0000f3e0u;
    t3 = (c->a[6] + 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_F3E4:
    /* 0000f3e4   2  beq 0000f3f2 */
    c->pc = 0x0000f3e4u;
    if (rc_cond(c, 7)) goto L_F3F2;

L_F3E6:
    /* 0000f3e6   2  movea.l A2,A0 */
    c->pc = 0x0000f3e6u;
    t0 = rc_a_get(c, 2, RC_L);
    c->a[0] = t0;

L_F3E8:
    /* 0000f3e8   4  bsr 0000f202 */
    c->pc = 0x0000f3e8u;
    rc_push32(c, m, 0x0000f3ecu);
    rc_depth++;
    c->pc = 0x0000f202u;
    return;

L_F3EC:
    /* 0000f3ec   2  addq.w #1,D6 */
    c->pc = 0x0000f3ecu;
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_F3EE:
    /* 0000f3ee   4  bra 0000f2f8 */
    c->pc = 0x0000f3eeu;
    rc_tick();
    goto L_F2F8;

L_F3F2:
    /* 0000f3f2   2  rts */
    c->pc = 0x0000f3f2u;
    rc_ret(c, m);
    return;

}
