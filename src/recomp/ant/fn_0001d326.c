/* fn_0001d326 - 500 byte(s), 149 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001d326(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d326u): goto L_1D326;
    case RC_ADDR(0x0001d32au): goto L_1D32A;
    case RC_ADDR(0x0001d32eu): goto L_1D32E;
    case RC_ADDR(0x0001d332u): goto L_1D332;
    case RC_ADDR(0x0001d336u): goto L_1D336;
    case RC_ADDR(0x0001d338u): goto L_1D338;
    case RC_ADDR(0x0001d33cu): goto L_1D33C;
    case RC_ADDR(0x0001d340u): goto L_1D340;
    case RC_ADDR(0x0001d344u): goto L_1D344;
    case RC_ADDR(0x0001d348u): goto L_1D348;
    case RC_ADDR(0x0001d34cu): goto L_1D34C;
    case RC_ADDR(0x0001d350u): goto L_1D350;
    case RC_ADDR(0x0001d354u): goto L_1D354;
    case RC_ADDR(0x0001d358u): goto L_1D358;
    case RC_ADDR(0x0001d35cu): goto L_1D35C;
    case RC_ADDR(0x0001d360u): goto L_1D360;
    case RC_ADDR(0x0001d364u): goto L_1D364;
    case RC_ADDR(0x0001d368u): goto L_1D368;
    case RC_ADDR(0x0001d36cu): goto L_1D36C;
    case RC_ADDR(0x0001d370u): goto L_1D370;
    case RC_ADDR(0x0001d374u): goto L_1D374;
    case RC_ADDR(0x0001d378u): goto L_1D378;
    case RC_ADDR(0x0001d37cu): goto L_1D37C;
    case RC_ADDR(0x0001d380u): goto L_1D380;
    case RC_ADDR(0x0001d384u): goto L_1D384;
    case RC_ADDR(0x0001d388u): goto L_1D388;
    case RC_ADDR(0x0001d38cu): goto L_1D38C;
    case RC_ADDR(0x0001d390u): goto L_1D390;
    case RC_ADDR(0x0001d394u): goto L_1D394;
    case RC_ADDR(0x0001d396u): goto L_1D396;
    case RC_ADDR(0x0001d39au): goto L_1D39A;
    case RC_ADDR(0x0001d39cu): goto L_1D39C;
    case RC_ADDR(0x0001d39eu): goto L_1D39E;
    case RC_ADDR(0x0001d3a0u): goto L_1D3A0;
    case RC_ADDR(0x0001d3a2u): goto L_1D3A2;
    case RC_ADDR(0x0001d3a4u): goto L_1D3A4;
    case RC_ADDR(0x0001d3a8u): goto L_1D3A8;
    case RC_ADDR(0x0001d3aeu): goto L_1D3AE;
    case RC_ADDR(0x0001d3b2u): goto L_1D3B2;
    case RC_ADDR(0x0001d3b6u): goto L_1D3B6;
    case RC_ADDR(0x0001d3b8u): goto L_1D3B8;
    case RC_ADDR(0x0001d3bcu): goto L_1D3BC;
    case RC_ADDR(0x0001d3c2u): goto L_1D3C2;
    case RC_ADDR(0x0001d3c6u): goto L_1D3C6;
    case RC_ADDR(0x0001d3cau): goto L_1D3CA;
    case RC_ADDR(0x0001d3ccu): goto L_1D3CC;
    case RC_ADDR(0x0001d3d0u): goto L_1D3D0;
    case RC_ADDR(0x0001d3d4u): goto L_1D3D4;
    case RC_ADDR(0x0001d3d8u): goto L_1D3D8;
    case RC_ADDR(0x0001d3dau): goto L_1D3DA;
    case RC_ADDR(0x0001d3dcu): goto L_1D3DC;
    case RC_ADDR(0x0001d3deu): goto L_1D3DE;
    case RC_ADDR(0x0001d3e0u): goto L_1D3E0;
    case RC_ADDR(0x0001d3e4u): goto L_1D3E4;
    case RC_ADDR(0x0001d3e8u): goto L_1D3E8;
    case RC_ADDR(0x0001d3ecu): goto L_1D3EC;
    case RC_ADDR(0x0001d3f0u): goto L_1D3F0;
    case RC_ADDR(0x0001d3f4u): goto L_1D3F4;
    case RC_ADDR(0x0001d3f8u): goto L_1D3F8;
    case RC_ADDR(0x0001d3fau): goto L_1D3FA;
    case RC_ADDR(0x0001d3feu): goto L_1D3FE;
    case RC_ADDR(0x0001d400u): goto L_1D400;
    case RC_ADDR(0x0001d404u): goto L_1D404;
    case RC_ADDR(0x0001d408u): goto L_1D408;
    case RC_ADDR(0x0001d40cu): goto L_1D40C;
    case RC_ADDR(0x0001d40eu): goto L_1D40E;
    case RC_ADDR(0x0001d412u): goto L_1D412;
    case RC_ADDR(0x0001d414u): goto L_1D414;
    case RC_ADDR(0x0001d418u): goto L_1D418;
    case RC_ADDR(0x0001d41cu): goto L_1D41C;
    case RC_ADDR(0x0001d41eu): goto L_1D41E;
    case RC_ADDR(0x0001d420u): goto L_1D420;
    case RC_ADDR(0x0001d424u): goto L_1D424;
    case RC_ADDR(0x0001d428u): goto L_1D428;
    case RC_ADDR(0x0001d42cu): goto L_1D42C;
    case RC_ADDR(0x0001d42eu): goto L_1D42E;
    case RC_ADDR(0x0001d430u): goto L_1D430;
    case RC_ADDR(0x0001d434u): goto L_1D434;
    case RC_ADDR(0x0001d43au): goto L_1D43A;
    case RC_ADDR(0x0001d43eu): goto L_1D43E;
    case RC_ADDR(0x0001d442u): goto L_1D442;
    case RC_ADDR(0x0001d446u): goto L_1D446;
    case RC_ADDR(0x0001d448u): goto L_1D448;
    case RC_ADDR(0x0001d44cu): goto L_1D44C;
    case RC_ADDR(0x0001d450u): goto L_1D450;
    case RC_ADDR(0x0001d454u): goto L_1D454;
    case RC_ADDR(0x0001d458u): goto L_1D458;
    case RC_ADDR(0x0001d45au): goto L_1D45A;
    case RC_ADDR(0x0001d45eu): goto L_1D45E;
    case RC_ADDR(0x0001d462u): goto L_1D462;
    case RC_ADDR(0x0001d466u): goto L_1D466;
    case RC_ADDR(0x0001d468u): goto L_1D468;
    case RC_ADDR(0x0001d46cu): goto L_1D46C;
    case RC_ADDR(0x0001d470u): goto L_1D470;
    case RC_ADDR(0x0001d474u): goto L_1D474;
    case RC_ADDR(0x0001d476u): goto L_1D476;
    case RC_ADDR(0x0001d47au): goto L_1D47A;
    case RC_ADDR(0x0001d47cu): goto L_1D47C;
    case RC_ADDR(0x0001d47eu): goto L_1D47E;
    case RC_ADDR(0x0001d482u): goto L_1D482;
    case RC_ADDR(0x0001d486u): goto L_1D486;
    case RC_ADDR(0x0001d488u): goto L_1D488;
    case RC_ADDR(0x0001d48cu): goto L_1D48C;
    case RC_ADDR(0x0001d48eu): goto L_1D48E;
    case RC_ADDR(0x0001d490u): goto L_1D490;
    case RC_ADDR(0x0001d494u): goto L_1D494;
    case RC_ADDR(0x0001d498u): goto L_1D498;
    case RC_ADDR(0x0001d49au): goto L_1D49A;
    case RC_ADDR(0x0001d49cu): goto L_1D49C;
    case RC_ADDR(0x0001d4a0u): goto L_1D4A0;
    case RC_ADDR(0x0001d4a4u): goto L_1D4A4;
    case RC_ADDR(0x0001d4a6u): goto L_1D4A6;
    case RC_ADDR(0x0001d4a8u): goto L_1D4A8;
    case RC_ADDR(0x0001d4acu): goto L_1D4AC;
    case RC_ADDR(0x0001d4aeu): goto L_1D4AE;
    case RC_ADDR(0x0001d4b2u): goto L_1D4B2;
    case RC_ADDR(0x0001d4b4u): goto L_1D4B4;
    case RC_ADDR(0x0001d4b6u): goto L_1D4B6;
    case RC_ADDR(0x0001d4bau): goto L_1D4BA;
    case RC_ADDR(0x0001d4beu): goto L_1D4BE;
    case RC_ADDR(0x0001d4c0u): goto L_1D4C0;
    case RC_ADDR(0x0001d4c4u): goto L_1D4C4;
    case RC_ADDR(0x0001d4c8u): goto L_1D4C8;
    case RC_ADDR(0x0001d4ccu): goto L_1D4CC;
    case RC_ADDR(0x0001d4ceu): goto L_1D4CE;
    case RC_ADDR(0x0001d4d2u): goto L_1D4D2;
    case RC_ADDR(0x0001d4d4u): goto L_1D4D4;
    case RC_ADDR(0x0001d4d6u): goto L_1D4D6;
    case RC_ADDR(0x0001d4d8u): goto L_1D4D8;
    case RC_ADDR(0x0001d4dcu): goto L_1D4DC;
    case RC_ADDR(0x0001d4e0u): goto L_1D4E0;
    case RC_ADDR(0x0001d4e4u): goto L_1D4E4;
    case RC_ADDR(0x0001d4e8u): goto L_1D4E8;
    case RC_ADDR(0x0001d4ecu): goto L_1D4EC;
    case RC_ADDR(0x0001d4f0u): goto L_1D4F0;
    case RC_ADDR(0x0001d4f4u): goto L_1D4F4;
    case RC_ADDR(0x0001d4f8u): goto L_1D4F8;
    case RC_ADDR(0x0001d4fcu): goto L_1D4FC;
    case RC_ADDR(0x0001d500u): goto L_1D500;
    case RC_ADDR(0x0001d502u): goto L_1D502;
    case RC_ADDR(0x0001d504u): goto L_1D504;
    case RC_ADDR(0x0001d506u): goto L_1D506;
    case RC_ADDR(0x0001d50au): goto L_1D50A;
    case RC_ADDR(0x0001d50cu): goto L_1D50C;
    case RC_ADDR(0x0001d510u): goto L_1D510;
    case RC_ADDR(0x0001d512u): goto L_1D512;
    case RC_ADDR(0x0001d514u): goto L_1D514;
    case RC_ADDR(0x0001d516u): goto L_1D516;
    case RC_ADDR(0x0001d518u): goto L_1D518;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D326:
    /* 0001d326   4  link.w A5,#fffffff0 */
    c->pc = RC_ADDR(0x0001d326u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x10u;

L_1D32A:
    /* 0001d32a   4  pea (000003ed).l */
    c->pc = RC_ADDR(0x0001d32au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000003edu);

L_1D32E:
    /* 0001d32e   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d32eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D332:
    /* 0001d332   4  jsr (ffff82b4,A4) */
    c->pc = RC_ADDR(0x0001d332u);
    rc_step(c, m, 18);
    /* vector 115 */
    rc_push32(c, m, RC_ADDR(0x0001d336u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023daau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022518u);
    return;

L_1D336:
    /* 0001d336   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d336u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D338:
    /* 0001d338   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001d338u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D33C:
    /* 0001d33c   4  beq 0001d516 */
    c->pc = RC_ADDR(0x0001d33cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D516;

L_1D340:
    /* 0001d340   4  pea (00000002).l */
    c->pc = RC_ADDR(0x0001d340u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_1D344:
    /* 0001d344   4  pea (fffffa94,A4) */
    c->pc = RC_ADDR(0x0001d344u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x56cu));

L_1D348:
    /* 0001d348   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d348u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D34C:
    /* 0001d34c   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0001d34cu);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0001d350u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_1D350:
    /* 0001d350   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001d350u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1D354:
    /* 0001d354   4  pea (00000002).l */
    c->pc = RC_ADDR(0x0001d354u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_1D358:
    /* 0001d358   4  pea (fffffa96,A4) */
    c->pc = RC_ADDR(0x0001d358u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x56au));

L_1D35C:
    /* 0001d35c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d35cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D360:
    /* 0001d360   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0001d360u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0001d364u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_1D364:
    /* 0001d364   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001d364u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1D368:
    /* 0001d368   4  pea (00000002).l */
    c->pc = RC_ADDR(0x0001d368u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_1D36C:
    /* 0001d36c   4  pea (fffffa98,A4) */
    c->pc = RC_ADDR(0x0001d36cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x568u));

L_1D370:
    /* 0001d370   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d370u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D374:
    /* 0001d374   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0001d374u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0001d378u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_1D378:
    /* 0001d378   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001d378u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1D37C:
    /* 0001d37c   4  pea (00000002).l */
    c->pc = RC_ADDR(0x0001d37cu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_1D380:
    /* 0001d380   4  pea (fffffa9a,A4) */
    c->pc = RC_ADDR(0x0001d380u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x566u));

L_1D384:
    /* 0001d384   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d384u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D388:
    /* 0001d388   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0001d388u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0001d38cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_1D38C:
    /* 0001d38c   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001d38cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1D390:
    /* 0001d390   4  move.w (fffffa98,A4),D0 */
    c->pc = RC_ADDR(0x0001d390u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x568u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D394:
    /* 0001d394   2  addq.w #4,D0 */
    c->pc = RC_ADDR(0x0001d394u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000004u;
    rc_flags_add(c, RC_W, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1D396:
    /* 0001d396   4  move.w (fffffa9a,A4),D1 */
    c->pc = RC_ADDR(0x0001d396u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x566u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D39A:
    /* 0001d39a   2  addq.w #2,D1 */
    c->pc = RC_ADDR(0x0001d39au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1D39C:
    /* 0001d39c   2  mulu.w D1,D0 */
    c->pc = RC_ADDR(0x0001d39cu);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 1, RC_W);
    rc_mulu(c, 0, t0);

L_1D39E:
    /* 0001d39e   2  asl.w #1,D0 */
    c->pc = RC_ADDR(0x0001d39eu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_1D3A0:
    /* 0001d3a0   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0001d3a0u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1D3A2:
    /* 0001d3a2   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x0001d3a2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D3A4:
    /* 0001d3a4   4  move.l D1,(1414,A4) */
    c->pc = RC_ADDR(0x0001d3a4u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x1414u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D3A8:
    /* 0001d3a8   6  pea (00010001).l */
    c->pc = RC_ADDR(0x0001d3a8u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_1D3AE:
    /* 0001d3ae   4  move.l (1414,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d3aeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1414u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D3B2:
    /* 0001d3b2   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x0001d3b2u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x0001d3b6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_1D3B6:
    /* 0001d3b6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d3b6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D3B8:
    /* 0001d3b8   4  move.l D0,(fffffaa0,A4) */
    c->pc = RC_ADDR(0x0001d3b8u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x560u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D3BC:
    /* 0001d3bc   6  pea (00010001).l */
    c->pc = RC_ADDR(0x0001d3bcu);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_1D3C2:
    /* 0001d3c2   4  move.l (1414,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d3c2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1414u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D3C6:
    /* 0001d3c6   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x0001d3c6u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x0001d3cau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_1D3CA:
    /* 0001d3ca   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d3cau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D3CC:
    /* 0001d3cc   4  move.l D0,(fffffff0,A5) */
    c->pc = RC_ADDR(0x0001d3ccu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D3D0:
    /* 0001d3d0   4  move.w (fffffa98,A4),D0 */
    c->pc = RC_ADDR(0x0001d3d0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x568u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D3D4:
    /* 0001d3d4   4  mulu.w (fffffa9a,A4),D0 */
    c->pc = RC_ADDR(0x0001d3d4u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x566u));
    rc_mulu(c, 0, t0);

L_1D3D8:
    /* 0001d3d8   2  asl.w #1,D0 */
    c->pc = RC_ADDR(0x0001d3d8u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_1D3DA:
    /* 0001d3da   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0001d3dau);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1D3DC:
    /* 0001d3dc   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x0001d3dcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D3DE:
    /* 0001d3de   2  move.l D1,-(A7) */
    c->pc = RC_ADDR(0x0001d3deu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D3E0:
    /* 0001d3e0   4  move.l (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d3e0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D3E4:
    /* 0001d3e4   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d3e4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D3E8:
    /* 0001d3e8   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0001d3e8u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0001d3ecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_1D3EC:
    /* 0001d3ec   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001d3ecu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1D3F0:
    /* 0001d3f0   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d3f0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D3F4:
    /* 0001d3f4   4  jsr (ffff82ba,A4) */
    c->pc = RC_ADDR(0x0001d3f4u);
    rc_step(c, m, 18);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x0001d3f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023db0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022532u);
    return;

L_1D3F8:
    /* 0001d3f8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001d3f8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D3FA:
    /* 0001d3fa   4  move.w (fffffa9a,A4),D0 */
    c->pc = RC_ADDR(0x0001d3fau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x566u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D3FE:
    /* 0001d3fe   2  addq.w #3,D0 */
    c->pc = RC_ADDR(0x0001d3feu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000003u;
    rc_flags_add(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1D400:
    /* 0001d400   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0001d400u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D404:
    /* 0001d404   4  clr.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x0001d404u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D408:
    /* 0001d408   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x0001d408u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D40C:
    /* 0001d40c   2  bra 0001d450 */
    c->pc = RC_ADDR(0x0001d40cu);
    rc_step(c, m, 10);
    goto L_1D450;

L_1D40E:
    /* 0001d40e   4  clr.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x0001d40eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D412:
    /* 0001d412   2  bra 0001d43e */
    c->pc = RC_ADDR(0x0001d412u);
    rc_step(c, m, 10);
    goto L_1D43E;

L_1D414:
    /* 0001d414   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x0001d414u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D418:
    /* 0001d418   4  addq.w #1,(fffffff4,A5) */
    c->pc = RC_ADDR(0x0001d418u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D41C:
    /* 0001d41c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001d41cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1D41E:
    /* 0001d41e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001d41eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1D420:
    /* 0001d420   4  movea.l (fffffff0,A5),A0 */
    c->pc = RC_ADDR(0x0001d420u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[0] = t0;

L_1D424:
    /* 0001d424   4  move.w (fffffff6,A5),D1 */
    c->pc = RC_ADDR(0x0001d424u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D428:
    /* 0001d428   4  addq.w #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0001d428u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D42C:
    /* 0001d42c   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001d42cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1D42E:
    /* 0001d42e   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001d42eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1D430:
    /* 0001d430   4  movea.l (fffffaa0,A4),A1 */
    c->pc = RC_ADDR(0x0001d430u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x560u));
    c->a[1] = t0;

L_1D434:
    /* 0001d434   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001d434u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D43A:
    /* 0001d43a   4  addq.w #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001d43au);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D43E:
    /* 0001d43e   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001d43eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D442:
    /* 0001d442   4  cmp.w (fffffa9a,A4),D0 */
    c->pc = RC_ADDR(0x0001d442u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x566u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1D446:
    /* 0001d446   2  bcs 0001d414 */
    c->pc = RC_ADDR(0x0001d446u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1D414; }

L_1D448:
    /* 0001d448   4  addq.w #2,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0001d448u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D44C:
    /* 0001d44c   4  addq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001d44cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D450:
    /* 0001d450   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001d450u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D454:
    /* 0001d454   4  cmp.w (fffffa98,A4),D0 */
    c->pc = RC_ADDR(0x0001d454u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x568u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1D458:
    /* 0001d458   2  bcs 0001d40e */
    c->pc = RC_ADDR(0x0001d458u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1D40E; }

L_1D45A:
    /* 0001d45a   4  move.l (1414,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d45au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1414u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D45E:
    /* 0001d45e   4  move.l (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d45eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D462:
    /* 0001d462   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001d462u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001d466u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1D466:
    /* 0001d466   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d466u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D468:
    /* 0001d468   4  addq.w #2,(fffffa9a,A4) */
    c->pc = RC_ADDR(0x0001d468u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x566u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D46C:
    /* 0001d46c   4  addq.w #4,(fffffa98,A4) */
    c->pc = RC_ADDR(0x0001d46cu);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x568u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000004u;
    rc_flags_add(c, RC_W, t1, 0x00000004u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D470:
    /* 0001d470   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x0001d470u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D474:
    /* 0001d474   2  bra 0001d4c8 */
    c->pc = RC_ADDR(0x0001d474u);
    rc_step(c, m, 10);
    goto L_1D4C8;

L_1D476:
    /* 0001d476   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001d476u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D47A:
    /* 0001d47a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001d47au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1D47C:
    /* 0001d47c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001d47cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1D47E:
    /* 0001d47e   4  movea.l (fffffaa0,A4),A0 */
    c->pc = RC_ADDR(0x0001d47eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x560u));
    c->a[0] = t0;

L_1D482:
    /* 0001d482   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001d482u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_1D486:
    /* 0001d486   2  beq 0001d4ae */
    c->pc = RC_ADDR(0x0001d486u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D4AE;

L_1D488:
    /* 0001d488   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001d488u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D48C:
    /* 0001d48c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001d48cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1D48E:
    /* 0001d48e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001d48eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1D490:
    /* 0001d490   4  movea.l (fffffaa0,A4),A0 */
    c->pc = RC_ADDR(0x0001d490u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x560u));
    c->a[0] = t0;

L_1D494:
    /* 0001d494   4  move.w (fffffffa,A5),D1 */
    c->pc = RC_ADDR(0x0001d494u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D498:
    /* 0001d498   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001d498u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1D49A:
    /* 0001d49a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001d49au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1D49C:
    /* 0001d49c   4  movea.l (fffffaa0,A4),A1 */
    c->pc = RC_ADDR(0x0001d49cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x560u));
    c->a[1] = t0;

L_1D4A0:
    /* 0001d4a0   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0001d4a0u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D4A4:
    /* 0001d4a4   2  subq.w #1,D2 */
    c->pc = RC_ADDR(0x0001d4a4u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_1D4A6:
    /* 0001d4a6   2  asl.w #1,D2 */
    c->pc = RC_ADDR(0x0001d4a6u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W));

L_1D4A8:
    /* 0001d4a8   4  move.w D2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001d4a8u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 2, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D4AC:
    /* 0001d4ac   2  bra 0001d4c4 */
    c->pc = RC_ADDR(0x0001d4acu);
    rc_step(c, m, 10);
    goto L_1D4C4;

L_1D4AE:
    /* 0001d4ae   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001d4aeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D4B2:
    /* 0001d4b2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001d4b2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1D4B4:
    /* 0001d4b4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001d4b4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1D4B6:
    /* 0001d4b6   4  movea.l (fffffaa0,A4),A0 */
    c->pc = RC_ADDR(0x0001d4b6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x560u));
    c->a[0] = t0;

L_1D4BA:
    /* 0001d4ba   4  move.w (1146,A4),D1 */
    c->pc = RC_ADDR(0x0001d4bau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1146u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D4BE:
    /* 0001d4be   2  asl.w #1,D1 */
    c->pc = RC_ADDR(0x0001d4beu);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_1D4C0:
    /* 0001d4c0   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001d4c0u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D4C4:
    /* 0001d4c4   4  addq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001d4c4u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D4C8:
    /* 0001d4c8   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001d4c8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D4CC:
    /* 0001d4cc   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001d4ccu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1D4CE:
    /* 0001d4ce   4  move.l (1414,A4),D1 */
    c->pc = RC_ADDR(0x0001d4ceu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1414u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D4D2:
    /* 0001d4d2   2  lsr.l #1,D1 */
    c->pc = RC_ADDR(0x0001d4d2u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1D4D4:
    /* 0001d4d4   2  cmp.l D1,D0 */
    c->pc = RC_ADDR(0x0001d4d4u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1D4D6:
    /* 0001d4d6   2  bcs 0001d476 */
    c->pc = RC_ADDR(0x0001d4d6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1D476; }

L_1D4D8:
    /* 0001d4d8   4  subq.w #1,(fffffa98,A4) */
    c->pc = RC_ADDR(0x0001d4d8u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x568u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D4DC:
    /* 0001d4dc   4  move.w (fffffa98,A4),D0 */
    c->pc = RC_ADDR(0x0001d4dcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x568u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D4E0:
    /* 0001d4e0   4  mulu.w (fffffa94,A4),D0 */
    c->pc = RC_ADDR(0x0001d4e0u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x56cu));
    rc_mulu(c, 0, t0);

L_1D4E4:
    /* 0001d4e4   4  move.w D0,(fffffa98,A4) */
    c->pc = RC_ADDR(0x0001d4e4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x568u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D4E8:
    /* 0001d4e8   4  move.w (fffffa94,A4),D0 */
    c->pc = RC_ADDR(0x0001d4e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x56cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D4EC:
    /* 0001d4ec   4  mulu.w #2,D0 */
    c->pc = RC_ADDR(0x0001d4ecu);
    rc_step(c, m, 42);
    t0 = 0x00000002u;
    rc_mulu(c, 0, t0);

L_1D4F0:
    /* 0001d4f0   4  move.w D0,(fffffa94,A4) */
    c->pc = RC_ADDR(0x0001d4f0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x56cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D4F4:
    /* 0001d4f4   4  move.w (fffffa9a,A4),D0 */
    c->pc = RC_ADDR(0x0001d4f4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x566u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D4F8:
    /* 0001d4f8   4  mulu.w (fffffa96,A4),D0 */
    c->pc = RC_ADDR(0x0001d4f8u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x56au));
    rc_mulu(c, 0, t0);

L_1D4FC:
    /* 0001d4fc   4  sub.w (113c,A4),D0 */
    c->pc = RC_ADDR(0x0001d4fcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x113cu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1D500:
    /* 0001d500   2  swap D0 */
    c->pc = RC_ADDR(0x0001d500u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D502:
    /* 0001d502   2  clr.w D0 */
    c->pc = RC_ADDR(0x0001d502u);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D504:
    /* 0001d504   2  swap D0 */
    c->pc = RC_ADDR(0x0001d504u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D506:
    /* 0001d506   4  divu.w (1144,A4),D0 */
    c->pc = RC_ADDR(0x0001d506u);
    rc_step(c, m, 148);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1144u));
    rc_divu(c, m, 0, t0);

L_1D50A:
    /* 0001d50a   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0001d50au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1D50C:
    /* 0001d50c   4  move.w D0,(1dc6,A4) */
    c->pc = RC_ADDR(0x0001d50cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1dc6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D510:
    /* 0001d510   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001d510u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D512:
    /* 0001d512   2  unlk A5 */
    c->pc = RC_ADDR(0x0001d512u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D514:
    /* 0001d514   2  rts */
    c->pc = RC_ADDR(0x0001d514u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1D516:
    /* 0001d516   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d516u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D518:
    /* 0001d518   2  bra 0001d512 */
    c->pc = RC_ADDR(0x0001d518u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1D512;

}
