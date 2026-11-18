/* fn_0000b292 - 356 byte(s), 101 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000b292(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000b292u): goto L_B292;
    case RC_ADDR(0x0000b296u): goto L_B296;
    case RC_ADDR(0x0000b29au): goto L_B29A;
    case RC_ADDR(0x0000b29eu): goto L_B29E;
    case RC_ADDR(0x0000b2a2u): goto L_B2A2;
    case RC_ADDR(0x0000b2a6u): goto L_B2A6;
    case RC_ADDR(0x0000b2a8u): goto L_B2A8;
    case RC_ADDR(0x0000b2acu): goto L_B2AC;
    case RC_ADDR(0x0000b2b0u): goto L_B2B0;
    case RC_ADDR(0x0000b2b2u): goto L_B2B2;
    case RC_ADDR(0x0000b2b6u): goto L_B2B6;
    case RC_ADDR(0x0000b2bau): goto L_B2BA;
    case RC_ADDR(0x0000b2beu): goto L_B2BE;
    case RC_ADDR(0x0000b2c2u): goto L_B2C2;
    case RC_ADDR(0x0000b2c4u): goto L_B2C4;
    case RC_ADDR(0x0000b2cau): goto L_B2CA;
    case RC_ADDR(0x0000b2ceu): goto L_B2CE;
    case RC_ADDR(0x0000b2d2u): goto L_B2D2;
    case RC_ADDR(0x0000b2d6u): goto L_B2D6;
    case RC_ADDR(0x0000b2d8u): goto L_B2D8;
    case RC_ADDR(0x0000b2dau): goto L_B2DA;
    case RC_ADDR(0x0000b2dcu): goto L_B2DC;
    case RC_ADDR(0x0000b2e0u): goto L_B2E0;
    case RC_ADDR(0x0000b2e4u): goto L_B2E4;
    case RC_ADDR(0x0000b2e8u): goto L_B2E8;
    case RC_ADDR(0x0000b2ecu): goto L_B2EC;
    case RC_ADDR(0x0000b2f0u): goto L_B2F0;
    case RC_ADDR(0x0000b2f4u): goto L_B2F4;
    case RC_ADDR(0x0000b2f8u): goto L_B2F8;
    case RC_ADDR(0x0000b2fcu): goto L_B2FC;
    case RC_ADDR(0x0000b300u): goto L_B300;
    case RC_ADDR(0x0000b304u): goto L_B304;
    case RC_ADDR(0x0000b306u): goto L_B306;
    case RC_ADDR(0x0000b308u): goto L_B308;
    case RC_ADDR(0x0000b30au): goto L_B30A;
    case RC_ADDR(0x0000b30eu): goto L_B30E;
    case RC_ADDR(0x0000b312u): goto L_B312;
    case RC_ADDR(0x0000b316u): goto L_B316;
    case RC_ADDR(0x0000b31au): goto L_B31A;
    case RC_ADDR(0x0000b31eu): goto L_B31E;
    case RC_ADDR(0x0000b322u): goto L_B322;
    case RC_ADDR(0x0000b326u): goto L_B326;
    case RC_ADDR(0x0000b32au): goto L_B32A;
    case RC_ADDR(0x0000b32eu): goto L_B32E;
    case RC_ADDR(0x0000b332u): goto L_B332;
    case RC_ADDR(0x0000b336u): goto L_B336;
    case RC_ADDR(0x0000b33au): goto L_B33A;
    case RC_ADDR(0x0000b33eu): goto L_B33E;
    case RC_ADDR(0x0000b342u): goto L_B342;
    case RC_ADDR(0x0000b346u): goto L_B346;
    case RC_ADDR(0x0000b34au): goto L_B34A;
    case RC_ADDR(0x0000b34eu): goto L_B34E;
    case RC_ADDR(0x0000b350u): goto L_B350;
    case RC_ADDR(0x0000b354u): goto L_B354;
    case RC_ADDR(0x0000b358u): goto L_B358;
    case RC_ADDR(0x0000b35au): goto L_B35A;
    case RC_ADDR(0x0000b35eu): goto L_B35E;
    case RC_ADDR(0x0000b362u): goto L_B362;
    case RC_ADDR(0x0000b364u): goto L_B364;
    case RC_ADDR(0x0000b368u): goto L_B368;
    case RC_ADDR(0x0000b36au): goto L_B36A;
    case RC_ADDR(0x0000b36eu): goto L_B36E;
    case RC_ADDR(0x0000b372u): goto L_B372;
    case RC_ADDR(0x0000b376u): goto L_B376;
    case RC_ADDR(0x0000b37au): goto L_B37A;
    case RC_ADDR(0x0000b37eu): goto L_B37E;
    case RC_ADDR(0x0000b382u): goto L_B382;
    case RC_ADDR(0x0000b386u): goto L_B386;
    case RC_ADDR(0x0000b38au): goto L_B38A;
    case RC_ADDR(0x0000b38eu): goto L_B38E;
    case RC_ADDR(0x0000b392u): goto L_B392;
    case RC_ADDR(0x0000b396u): goto L_B396;
    case RC_ADDR(0x0000b39au): goto L_B39A;
    case RC_ADDR(0x0000b39eu): goto L_B39E;
    case RC_ADDR(0x0000b3a2u): goto L_B3A2;
    case RC_ADDR(0x0000b3a6u): goto L_B3A6;
    case RC_ADDR(0x0000b3aau): goto L_B3AA;
    case RC_ADDR(0x0000b3acu): goto L_B3AC;
    case RC_ADDR(0x0000b3b0u): goto L_B3B0;
    case RC_ADDR(0x0000b3b4u): goto L_B3B4;
    case RC_ADDR(0x0000b3b6u): goto L_B3B6;
    case RC_ADDR(0x0000b3bau): goto L_B3BA;
    case RC_ADDR(0x0000b3beu): goto L_B3BE;
    case RC_ADDR(0x0000b3c0u): goto L_B3C0;
    case RC_ADDR(0x0000b3c4u): goto L_B3C4;
    case RC_ADDR(0x0000b3c8u): goto L_B3C8;
    case RC_ADDR(0x0000b3cau): goto L_B3CA;
    case RC_ADDR(0x0000b3ceu): goto L_B3CE;
    case RC_ADDR(0x0000b3d2u): goto L_B3D2;
    case RC_ADDR(0x0000b3d6u): goto L_B3D6;
    case RC_ADDR(0x0000b3d8u): goto L_B3D8;
    case RC_ADDR(0x0000b3dcu): goto L_B3DC;
    case RC_ADDR(0x0000b3e0u): goto L_B3E0;
    case RC_ADDR(0x0000b3e2u): goto L_B3E2;
    case RC_ADDR(0x0000b3e6u): goto L_B3E6;
    case RC_ADDR(0x0000b3eau): goto L_B3EA;
    case RC_ADDR(0x0000b3ecu): goto L_B3EC;
    case RC_ADDR(0x0000b3eeu): goto L_B3EE;
    case RC_ADDR(0x0000b3f0u): goto L_B3F0;
    case RC_ADDR(0x0000b3f2u): goto L_B3F2;
    case RC_ADDR(0x0000b3f4u): goto L_B3F4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B292:
    /* 0000b292   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x0000b292u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_B296:
    /* 0000b296   4  clr.l (fffff896,A4) */
    c->pc = RC_ADDR(0x0000b296u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x76au), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_B29A:
    /* 0000b29a   4  clr.l (fffffff6,A5) */
    c->pc = RC_ADDR(0x0000b29au);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_B29E:
    /* 0000b29e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000b29eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_B2A2:
    /* 0000b2a2   4  tst.b (3,A0) */
    c->pc = RC_ADDR(0x0000b2a2u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x3u));
    rc_set_nzvc(c, t0, RC_B);

L_B2A6:
    /* 0000b2a6   2  beq 0000b2c4 */
    c->pc = RC_ADDR(0x0000b2a6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_B2C4;

L_B2A8:
    /* 0000b2a8   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000b2a8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_B2AC:
    /* 0000b2ac   4  move.b (3,A0),D0 */
    c->pc = RC_ADDR(0x0000b2acu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x3u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_B2B0:
    /* 0000b2b0   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000b2b0u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_B2B2:
    /* 0000b2b2   4  sub.w #30,D0 */
    c->pc = RC_ADDR(0x0000b2b2u);
    rc_step(c, m, 10);
    t0 = 0x00000030u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_B2B6:
    /* 0000b2b6   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000b2b6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B2BA:
    /* 0000b2ba   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000b2bau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_B2BE:
    /* 0000b2be   4  clr.b (3,A0) */
    c->pc = RC_ADDR(0x0000b2beu);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[0] + 0x3u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_B2C2:
    /* 0000b2c2   2  bra 0000b2ca */
    c->pc = RC_ADDR(0x0000b2c2u);
    rc_step(c, m, 10);
    goto L_B2CA;

L_B2C4:
    /* 0000b2c4   6  move.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000b2c4u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B2CA:
    /* 0000b2ca   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000b2cau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B2CE:
    /* 0000b2ce   4  pea (0000b3f6) */
    c->pc = RC_ADDR(0x0000b2ceu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000b3f6u));

L_B2D2:
    /* 0000b2d2   4  jsr (ffff82de,A4) */
    c->pc = RC_ADDR(0x0000b2d2u);
    rc_step(c, m, 18);
    /* vector 122 */
    rc_push32(c, m, RC_ADDR(0x0000b2d6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dd4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002298au);
    return;

L_B2D6:
    /* 0000b2d6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000b2d6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_B2D8:
    /* 0000b2d8   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000b2d8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_B2DA:
    /* 0000b2da   2  bne 0000b2f8 */
    c->pc = RC_ADDR(0x0000b2dau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_B2F8;

L_B2DC:
    /* 0000b2dc   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000b2dcu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B2E0:
    /* 0000b2e0   4  pea (0000b406) */
    c->pc = RC_ADDR(0x0000b2e0u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000b406u));

L_B2E4:
    /* 0000b2e4   4  pea (0000b3fa) */
    c->pc = RC_ADDR(0x0000b2e4u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000b3fau));

L_B2E8:
    /* 0000b2e8   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x0000b2e8u);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x0000b2ecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000068au);
    return;

L_B2EC:
    /* 0000b2ec   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000b2ecu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_B2F0:
    /* 0000b2f0   4  lea (0000b40d),A0 */
    c->pc = RC_ADDR(0x0000b2f0u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x0000b40du);

L_B2F4:
    /* 0000b2f4   4  move.l A0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000b2f4u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B2F8:
    /* 0000b2f8   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000b2f8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B2FC:
    /* 0000b2fc   4  pea (0000b420) */
    c->pc = RC_ADDR(0x0000b2fcu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000b420u));

L_B300:
    /* 0000b300   4  jsr (ffff82de,A4) */
    c->pc = RC_ADDR(0x0000b300u);
    rc_step(c, m, 18);
    /* vector 122 */
    rc_push32(c, m, RC_ADDR(0x0000b304u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dd4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002298au);
    return;

L_B304:
    /* 0000b304   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000b304u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_B306:
    /* 0000b306   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000b306u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_B308:
    /* 0000b308   2  bne 0000b326 */
    c->pc = RC_ADDR(0x0000b308u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_B326;

L_B30A:
    /* 0000b30a   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000b30au);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B30E:
    /* 0000b30e   4  pea (0000b430) */
    c->pc = RC_ADDR(0x0000b30eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000b430u));

L_B312:
    /* 0000b312   4  pea (0000b424) */
    c->pc = RC_ADDR(0x0000b312u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000b424u));

L_B316:
    /* 0000b316   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x0000b316u);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x0000b31au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000068au);
    return;

L_B31A:
    /* 0000b31a   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000b31au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_B31E:
    /* 0000b31e   4  lea (0000b43a),A0 */
    c->pc = RC_ADDR(0x0000b31eu);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x0000b43au);

L_B322:
    /* 0000b322   4  move.l A0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000b322u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B326:
    /* 0000b326   4  tst.l (fffffff6,A5) */
    c->pc = RC_ADDR(0x0000b326u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    rc_set_nzvc(c, t0, RC_L);

L_B32A:
    /* 0000b32a   4  beq 0000b3f2 */
    c->pc = RC_ADDR(0x0000b32au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_B3F2;

L_B32E:
    /* 0000b32e   4  pea (fffff89a,A4) */
    c->pc = RC_ADDR(0x0000b32eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x766u));

L_B332:
    /* 0000b332   4  pea (fffff89e,A4) */
    c->pc = RC_ADDR(0x0000b332u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x762u));

L_B336:
    /* 0000b336   4  move.l (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x0000b336u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B33A:
    /* 0000b33a   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0000b33au);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0000b33eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_B33E:
    /* 0000b33e   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000b33eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_B342:
    /* 0000b342   4  move.l D0,(fffff896,A4) */
    c->pc = RC_ADDR(0x0000b342u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x76au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B346:
    /* 0000b346   4  pea (00000002).l */
    c->pc = RC_ADDR(0x0000b346u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_B34A:
    /* 0000b34a   4  jsr (ffff8140,A4) */
    c->pc = RC_ADDR(0x0000b34au);
    rc_step(c, m, 18);
    /* vector 53 */
    rc_push32(c, m, RC_ADDR(0x0000b34eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c36u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00010812u);
    return;

L_B34E:
    /* 0000b34e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000b34eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_B350:
    /* 0000b350   4  pea (00000003).l */
    c->pc = RC_ADDR(0x0000b350u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000003u);

L_B354:
    /* 0000b354   4  jsr (ffff8140,A4) */
    c->pc = RC_ADDR(0x0000b354u);
    rc_step(c, m, 18);
    /* vector 53 */
    rc_push32(c, m, RC_ADDR(0x0000b358u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c36u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00010812u);
    return;

L_B358:
    /* 0000b358   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000b358u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_B35A:
    /* 0000b35a   4  pea (0000000a).l */
    c->pc = RC_ADDR(0x0000b35au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000au);

L_B35E:
    /* 0000b35e   4  jsr (ffff8326,A4) */
    c->pc = RC_ADDR(0x0000b35eu);
    rc_step(c, m, 18);
    /* vector 134 */
    rc_push32(c, m, RC_ADDR(0x0000b362u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e1cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000234cau);
    return;

L_B362:
    /* 0000b362   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000b362u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_B364:
    /* 0000b364   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0000b364u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B368:
    /* 0000b368   2  bra 0000b3ce */
    c->pc = RC_ADDR(0x0000b368u);
    rc_step(c, m, 10);
    goto L_B3CE;

L_B36A:
    /* 0000b36a   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x0000b36au);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B36E:
    /* 0000b36e   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000b36eu);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B372:
    /* 0000b372   4  move.l (fffff89a,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b372u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x766u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B376:
    /* 0000b376   4  move.w (fffff89e,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b376u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x762u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B37A:
    /* 0000b37a   4  move.l (fffff896,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b37au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x76au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B37E:
    /* 0000b37e   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0000b37eu);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0000b382u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_B382:
    /* 0000b382   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000b382u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_B386:
    /* 0000b386   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x0000b386u);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B38A:
    /* 0000b38a   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000b38au);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B38E:
    /* 0000b38e   4  move.l (fffff89a,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b38eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x766u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B392:
    /* 0000b392   4  move.w (fffff89e,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b392u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x762u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B396:
    /* 0000b396   4  move.l (fffff896,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b396u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x76au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B39A:
    /* 0000b39a   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0000b39au);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0000b39eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_B39E:
    /* 0000b39e   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000b39eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_B3A2:
    /* 0000b3a2   4  pea (0000001e).l */
    c->pc = RC_ADDR(0x0000b3a2u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000001eu);

L_B3A6:
    /* 0000b3a6   4  jsr (ffff8326,A4) */
    c->pc = RC_ADDR(0x0000b3a6u);
    rc_step(c, m, 18);
    /* vector 134 */
    rc_push32(c, m, RC_ADDR(0x0000b3aau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e1cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000234cau);
    return;

L_B3AA:
    /* 0000b3aa   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000b3aau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_B3AC:
    /* 0000b3ac   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000b3acu);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B3B0:
    /* 0000b3b0   4  jsr (ffff80ce,A4) */
    c->pc = RC_ADDR(0x0000b3b0u);
    rc_step(c, m, 18);
    /* vector 34 */
    rc_push32(c, m, RC_ADDR(0x0000b3b4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bc4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_B3B4:
    /* 0000b3b4   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000b3b4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_B3B6:
    /* 0000b3b6   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000b3b6u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B3BA:
    /* 0000b3ba   4  jsr (ffff80ce,A4) */
    c->pc = RC_ADDR(0x0000b3bau);
    rc_step(c, m, 18);
    /* vector 34 */
    rc_push32(c, m, RC_ADDR(0x0000b3beu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bc4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_B3BE:
    /* 0000b3be   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000b3beu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_B3C0:
    /* 0000b3c0   4  pea (0000003c).l */
    c->pc = RC_ADDR(0x0000b3c0u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000003cu);

L_B3C4:
    /* 0000b3c4   4  jsr (ffff8326,A4) */
    c->pc = RC_ADDR(0x0000b3c4u);
    rc_step(c, m, 18);
    /* vector 134 */
    rc_push32(c, m, RC_ADDR(0x0000b3c8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e1cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000234cau);
    return;

L_B3C8:
    /* 0000b3c8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000b3c8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_B3CA:
    /* 0000b3ca   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000b3cau);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_B3CE:
    /* 0000b3ce   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000b3ceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B3D2:
    /* 0000b3d2   4  cmp.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0000b3d2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_B3D6:
    /* 0000b3d6   2  blt 0000b36a */
    c->pc = RC_ADDR(0x0000b3d6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_B36A; }

L_B3D8:
    /* 0000b3d8   4  pea (00000002).l */
    c->pc = RC_ADDR(0x0000b3d8u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_B3DC:
    /* 0000b3dc   4  jsr (0001082c) */
    c->pc = RC_ADDR(0x0000b3dcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000b3e0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001082cu);
    return;

L_B3E0:
    /* 0000b3e0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000b3e0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_B3E2:
    /* 0000b3e2   4  pea (00000003).l */
    c->pc = RC_ADDR(0x0000b3e2u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000003u);

L_B3E6:
    /* 0000b3e6   4  jsr (0001082c) */
    c->pc = RC_ADDR(0x0000b3e6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000b3eau));
    rc_depth++;
    c->pc = RC_ADDR(0x0001082cu);
    return;

L_B3EA:
    /* 0000b3ea   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000b3eau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_B3EC:
    /* 0000b3ec   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000b3ecu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_B3EE:
    /* 0000b3ee   2  unlk A5 */
    c->pc = RC_ADDR(0x0000b3eeu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B3F0:
    /* 0000b3f0   2  rts */
    c->pc = RC_ADDR(0x0000b3f0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_B3F2:
    /* 0000b3f2   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0000b3f2u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_B3F4:
    /* 0000b3f4   2  bra 0000b3ee */
    c->pc = RC_ADDR(0x0000b3f4u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_B3EE;

}
