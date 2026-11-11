/* fn_0001b2e8 - 398 byte(s), 103 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001b2e8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001b2e8u): goto L_1B2E8;
    case RC_ADDR(0x0001b2ecu): goto L_1B2EC;
    case RC_ADDR(0x0001b2f0u): goto L_1B2F0;
    case RC_ADDR(0x0001b2f4u): goto L_1B2F4;
    case RC_ADDR(0x0001b2f8u): goto L_1B2F8;
    case RC_ADDR(0x0001b2fcu): goto L_1B2FC;
    case RC_ADDR(0x0001b300u): goto L_1B300;
    case RC_ADDR(0x0001b304u): goto L_1B304;
    case RC_ADDR(0x0001b308u): goto L_1B308;
    case RC_ADDR(0x0001b30cu): goto L_1B30C;
    case RC_ADDR(0x0001b310u): goto L_1B310;
    case RC_ADDR(0x0001b314u): goto L_1B314;
    case RC_ADDR(0x0001b318u): goto L_1B318;
    case RC_ADDR(0x0001b31cu): goto L_1B31C;
    case RC_ADDR(0x0001b320u): goto L_1B320;
    case RC_ADDR(0x0001b324u): goto L_1B324;
    case RC_ADDR(0x0001b328u): goto L_1B328;
    case RC_ADDR(0x0001b32cu): goto L_1B32C;
    case RC_ADDR(0x0001b330u): goto L_1B330;
    case RC_ADDR(0x0001b334u): goto L_1B334;
    case RC_ADDR(0x0001b338u): goto L_1B338;
    case RC_ADDR(0x0001b33cu): goto L_1B33C;
    case RC_ADDR(0x0001b340u): goto L_1B340;
    case RC_ADDR(0x0001b344u): goto L_1B344;
    case RC_ADDR(0x0001b348u): goto L_1B348;
    case RC_ADDR(0x0001b34cu): goto L_1B34C;
    case RC_ADDR(0x0001b350u): goto L_1B350;
    case RC_ADDR(0x0001b354u): goto L_1B354;
    case RC_ADDR(0x0001b358u): goto L_1B358;
    case RC_ADDR(0x0001b35cu): goto L_1B35C;
    case RC_ADDR(0x0001b360u): goto L_1B360;
    case RC_ADDR(0x0001b364u): goto L_1B364;
    case RC_ADDR(0x0001b368u): goto L_1B368;
    case RC_ADDR(0x0001b36cu): goto L_1B36C;
    case RC_ADDR(0x0001b370u): goto L_1B370;
    case RC_ADDR(0x0001b374u): goto L_1B374;
    case RC_ADDR(0x0001b378u): goto L_1B378;
    case RC_ADDR(0x0001b37cu): goto L_1B37C;
    case RC_ADDR(0x0001b380u): goto L_1B380;
    case RC_ADDR(0x0001b384u): goto L_1B384;
    case RC_ADDR(0x0001b388u): goto L_1B388;
    case RC_ADDR(0x0001b38cu): goto L_1B38C;
    case RC_ADDR(0x0001b390u): goto L_1B390;
    case RC_ADDR(0x0001b394u): goto L_1B394;
    case RC_ADDR(0x0001b398u): goto L_1B398;
    case RC_ADDR(0x0001b39cu): goto L_1B39C;
    case RC_ADDR(0x0001b39eu): goto L_1B39E;
    case RC_ADDR(0x0001b3a2u): goto L_1B3A2;
    case RC_ADDR(0x0001b3a6u): goto L_1B3A6;
    case RC_ADDR(0x0001b3aau): goto L_1B3AA;
    case RC_ADDR(0x0001b3acu): goto L_1B3AC;
    case RC_ADDR(0x0001b3b0u): goto L_1B3B0;
    case RC_ADDR(0x0001b3b8u): goto L_1B3B8;
    case RC_ADDR(0x0001b3bau): goto L_1B3BA;
    case RC_ADDR(0x0001b3beu): goto L_1B3BE;
    case RC_ADDR(0x0001b3c2u): goto L_1B3C2;
    case RC_ADDR(0x0001b3c6u): goto L_1B3C6;
    case RC_ADDR(0x0001b3cau): goto L_1B3CA;
    case RC_ADDR(0x0001b3ccu): goto L_1B3CC;
    case RC_ADDR(0x0001b3d0u): goto L_1B3D0;
    case RC_ADDR(0x0001b3d4u): goto L_1B3D4;
    case RC_ADDR(0x0001b3d8u): goto L_1B3D8;
    case RC_ADDR(0x0001b3dau): goto L_1B3DA;
    case RC_ADDR(0x0001b3deu): goto L_1B3DE;
    case RC_ADDR(0x0001b3e6u): goto L_1B3E6;
    case RC_ADDR(0x0001b3e8u): goto L_1B3E8;
    case RC_ADDR(0x0001b3ecu): goto L_1B3EC;
    case RC_ADDR(0x0001b3f0u): goto L_1B3F0;
    case RC_ADDR(0x0001b3f4u): goto L_1B3F4;
    case RC_ADDR(0x0001b3f8u): goto L_1B3F8;
    case RC_ADDR(0x0001b3fau): goto L_1B3FA;
    case RC_ADDR(0x0001b3feu): goto L_1B3FE;
    case RC_ADDR(0x0001b402u): goto L_1B402;
    case RC_ADDR(0x0001b406u): goto L_1B406;
    case RC_ADDR(0x0001b408u): goto L_1B408;
    case RC_ADDR(0x0001b40cu): goto L_1B40C;
    case RC_ADDR(0x0001b414u): goto L_1B414;
    case RC_ADDR(0x0001b416u): goto L_1B416;
    case RC_ADDR(0x0001b41au): goto L_1B41A;
    case RC_ADDR(0x0001b41eu): goto L_1B41E;
    case RC_ADDR(0x0001b422u): goto L_1B422;
    case RC_ADDR(0x0001b426u): goto L_1B426;
    case RC_ADDR(0x0001b428u): goto L_1B428;
    case RC_ADDR(0x0001b42cu): goto L_1B42C;
    case RC_ADDR(0x0001b430u): goto L_1B430;
    case RC_ADDR(0x0001b434u): goto L_1B434;
    case RC_ADDR(0x0001b436u): goto L_1B436;
    case RC_ADDR(0x0001b43au): goto L_1B43A;
    case RC_ADDR(0x0001b442u): goto L_1B442;
    case RC_ADDR(0x0001b444u): goto L_1B444;
    case RC_ADDR(0x0001b448u): goto L_1B448;
    case RC_ADDR(0x0001b44cu): goto L_1B44C;
    case RC_ADDR(0x0001b450u): goto L_1B450;
    case RC_ADDR(0x0001b454u): goto L_1B454;
    case RC_ADDR(0x0001b456u): goto L_1B456;
    case RC_ADDR(0x0001b45au): goto L_1B45A;
    case RC_ADDR(0x0001b45eu): goto L_1B45E;
    case RC_ADDR(0x0001b462u): goto L_1B462;
    case RC_ADDR(0x0001b464u): goto L_1B464;
    case RC_ADDR(0x0001b468u): goto L_1B468;
    case RC_ADDR(0x0001b470u): goto L_1B470;
    case RC_ADDR(0x0001b472u): goto L_1B472;
    case RC_ADDR(0x0001b474u): goto L_1B474;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1B2E8:
    /* 0001b2e8   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0001b2e8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1B2EC:
    /* 0001b2ec   4  pea (1f54,A4) */
    c->pc = RC_ADDR(0x0001b2ecu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1f54u));

L_1B2F0:
    /* 0001b2f0   4  move.w #8,-(A7) */
    c->pc = RC_ADDR(0x0001b2f0u);
    rc_step(c, m, 12);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B2F4:
    /* 0001b2f4   4  pea (0001b476) */
    c->pc = RC_ADDR(0x0001b2f4u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001b476u));

L_1B2F8:
    /* 0001b2f8   4  jsr (ffff817c,A4) */
    c->pc = RC_ADDR(0x0001b2f8u);
    rc_step(c, m, 18);
    /* vector 63 */
    rc_push32(c, m, RC_ADDR(0x0001b2fcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bd2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016c00u);
    return;

L_1B2FC:
    /* 0001b2fc   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001b2fcu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1B300:
    /* 0001b300   4  pea (752,A4) */
    c->pc = RC_ADDR(0x0001b300u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x752u));

L_1B304:
    /* 0001b304   4  move.w #2b,-(A7) */
    c->pc = RC_ADDR(0x0001b304u);
    rc_step(c, m, 12);
    t0 = 0x0000002bu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B308:
    /* 0001b308   4  pea (0001b47b) */
    c->pc = RC_ADDR(0x0001b308u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001b47bu));

L_1B30C:
    /* 0001b30c   4  jsr (ffff817c,A4) */
    c->pc = RC_ADDR(0x0001b30cu);
    rc_step(c, m, 18);
    /* vector 63 */
    rc_push32(c, m, RC_ADDR(0x0001b310u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bd2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016c00u);
    return;

L_1B310:
    /* 0001b310   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001b310u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1B314:
    /* 0001b314   4  pea (1f74,A4) */
    c->pc = RC_ADDR(0x0001b314u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1f74u));

L_1B318:
    /* 0001b318   4  move.w #17,-(A7) */
    c->pc = RC_ADDR(0x0001b318u);
    rc_step(c, m, 12);
    t0 = 0x00000017u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B31C:
    /* 0001b31c   4  pea (0001b480) */
    c->pc = RC_ADDR(0x0001b31cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001b480u));

L_1B320:
    /* 0001b320   4  jsr (ffff817c,A4) */
    c->pc = RC_ADDR(0x0001b320u);
    rc_step(c, m, 18);
    /* vector 63 */
    rc_push32(c, m, RC_ADDR(0x0001b324u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bd2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016c00u);
    return;

L_1B324:
    /* 0001b324   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001b324u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1B328:
    /* 0001b328   4  pea (1fd0,A4) */
    c->pc = RC_ADDR(0x0001b328u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1fd0u));

L_1B32C:
    /* 0001b32c   4  move.w #11,-(A7) */
    c->pc = RC_ADDR(0x0001b32cu);
    rc_step(c, m, 12);
    t0 = 0x00000011u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B330:
    /* 0001b330   4  pea (0001b485) */
    c->pc = RC_ADDR(0x0001b330u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001b485u));

L_1B334:
    /* 0001b334   4  jsr (ffff817c,A4) */
    c->pc = RC_ADDR(0x0001b334u);
    rc_step(c, m, 18);
    /* vector 63 */
    rc_push32(c, m, RC_ADDR(0x0001b338u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bd2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016c00u);
    return;

L_1B338:
    /* 0001b338   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001b338u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1B33C:
    /* 0001b33c   4  pea (2014,A4) */
    c->pc = RC_ADDR(0x0001b33cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2014u));

L_1B340:
    /* 0001b340   4  move.w #28,-(A7) */
    c->pc = RC_ADDR(0x0001b340u);
    rc_step(c, m, 12);
    t0 = 0x00000028u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B344:
    /* 0001b344   4  pea (0001b48a) */
    c->pc = RC_ADDR(0x0001b344u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001b48au));

L_1B348:
    /* 0001b348   4  jsr (ffff817c,A4) */
    c->pc = RC_ADDR(0x0001b348u);
    rc_step(c, m, 18);
    /* vector 63 */
    rc_push32(c, m, RC_ADDR(0x0001b34cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bd2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016c00u);
    return;

L_1B34C:
    /* 0001b34c   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001b34cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1B350:
    /* 0001b350   4  pea (20b4,A4) */
    c->pc = RC_ADDR(0x0001b350u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x20b4u));

L_1B354:
    /* 0001b354   4  move.w #28,-(A7) */
    c->pc = RC_ADDR(0x0001b354u);
    rc_step(c, m, 12);
    t0 = 0x00000028u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B358:
    /* 0001b358   4  pea (0001b48f) */
    c->pc = RC_ADDR(0x0001b358u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001b48fu));

L_1B35C:
    /* 0001b35c   4  jsr (ffff817c,A4) */
    c->pc = RC_ADDR(0x0001b35cu);
    rc_step(c, m, 18);
    /* vector 63 */
    rc_push32(c, m, RC_ADDR(0x0001b360u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bd2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016c00u);
    return;

L_1B360:
    /* 0001b360   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001b360u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1B364:
    /* 0001b364   4  pea (2154,A4) */
    c->pc = RC_ADDR(0x0001b364u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2154u));

L_1B368:
    /* 0001b368   4  move.w #28,-(A7) */
    c->pc = RC_ADDR(0x0001b368u);
    rc_step(c, m, 12);
    t0 = 0x00000028u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B36C:
    /* 0001b36c   4  pea (0001b494) */
    c->pc = RC_ADDR(0x0001b36cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001b494u));

L_1B370:
    /* 0001b370   4  jsr (ffff817c,A4) */
    c->pc = RC_ADDR(0x0001b370u);
    rc_step(c, m, 18);
    /* vector 63 */
    rc_push32(c, m, RC_ADDR(0x0001b374u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bd2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016c00u);
    return;

L_1B374:
    /* 0001b374   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001b374u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1B378:
    /* 0001b378   4  pea (21f4,A4) */
    c->pc = RC_ADDR(0x0001b378u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x21f4u));

L_1B37C:
    /* 0001b37c   4  move.w #10,-(A7) */
    c->pc = RC_ADDR(0x0001b37cu);
    rc_step(c, m, 12);
    t0 = 0x00000010u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B380:
    /* 0001b380   4  pea (0001b499) */
    c->pc = RC_ADDR(0x0001b380u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001b499u));

L_1B384:
    /* 0001b384   4  jsr (ffff817c,A4) */
    c->pc = RC_ADDR(0x0001b384u);
    rc_step(c, m, 18);
    /* vector 63 */
    rc_push32(c, m, RC_ADDR(0x0001b388u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bd2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016c00u);
    return;

L_1B388:
    /* 0001b388   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001b388u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1B38C:
    /* 0001b38c   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b38cu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1B390:
    /* 0001b390   4  move.w #c,-(A7) */
    c->pc = RC_ADDR(0x0001b390u);
    rc_step(c, m, 12);
    t0 = 0x0000000cu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B394:
    /* 0001b394   4  move.w #18,-(A7) */
    c->pc = RC_ADDR(0x0001b394u);
    rc_step(c, m, 12);
    t0 = 0x00000018u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B398:
    /* 0001b398   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b398u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B39C:
    /* 0001b39c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001b39cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1B39E:
    /* 0001b39e   4  lea (20b4,A4),A0 */
    c->pc = RC_ADDR(0x0001b39eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x20b4u);

L_1B3A2:
    /* 0001b3a2   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001b3a2u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B3A6:
    /* 0001b3a6   4  jsr (0001aaac) */
    c->pc = RC_ADDR(0x0001b3a6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001b3aau));
    rc_depth++;
    c->pc = RC_ADDR(0x0001aaacu);
    return;

L_1B3AA:
    /* 0001b3aa   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001b3aau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1B3AC:
    /* 0001b3ac   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b3acu);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1B3B0:
    /* 0001b3b0   8  cmpi.l #28,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b3b0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000028u);

L_1B3B8:
    /* 0001b3b8   2  blt 0001b390 */
    c->pc = RC_ADDR(0x0001b3b8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1B390; }

L_1B3BA:
    /* 0001b3ba   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b3bau);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1B3BE:
    /* 0001b3be   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x0001b3beu);
    rc_step(c, m, 12);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B3C2:
    /* 0001b3c2   4  move.w #19,-(A7) */
    c->pc = RC_ADDR(0x0001b3c2u);
    rc_step(c, m, 12);
    t0 = 0x00000019u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B3C6:
    /* 0001b3c6   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b3c6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B3CA:
    /* 0001b3ca   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001b3cau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1B3CC:
    /* 0001b3cc   4  lea (20b4,A4),A0 */
    c->pc = RC_ADDR(0x0001b3ccu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x20b4u);

L_1B3D0:
    /* 0001b3d0   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001b3d0u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B3D4:
    /* 0001b3d4   4  jsr (0001aaac) */
    c->pc = RC_ADDR(0x0001b3d4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001b3d8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001aaacu);
    return;

L_1B3D8:
    /* 0001b3d8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001b3d8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1B3DA:
    /* 0001b3da   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b3dau);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1B3DE:
    /* 0001b3de   8  cmpi.l #28,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b3deu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000028u);

L_1B3E6:
    /* 0001b3e6   2  blt 0001b3be */
    c->pc = RC_ADDR(0x0001b3e6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1B3BE; }

L_1B3E8:
    /* 0001b3e8   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b3e8u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1B3EC:
    /* 0001b3ec   4  move.w #b,-(A7) */
    c->pc = RC_ADDR(0x0001b3ecu);
    rc_step(c, m, 12);
    t0 = 0x0000000bu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B3F0:
    /* 0001b3f0   4  move.w #1a,-(A7) */
    c->pc = RC_ADDR(0x0001b3f0u);
    rc_step(c, m, 12);
    t0 = 0x0000001au;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B3F4:
    /* 0001b3f4   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b3f4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B3F8:
    /* 0001b3f8   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001b3f8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1B3FA:
    /* 0001b3fa   4  lea (20b4,A4),A0 */
    c->pc = RC_ADDR(0x0001b3fau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x20b4u);

L_1B3FE:
    /* 0001b3fe   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001b3feu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B402:
    /* 0001b402   4  jsr (0001aaac) */
    c->pc = RC_ADDR(0x0001b402u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001b406u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001aaacu);
    return;

L_1B406:
    /* 0001b406   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001b406u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1B408:
    /* 0001b408   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b408u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1B40C:
    /* 0001b40c   8  cmpi.l #28,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b40cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000028u);

L_1B414:
    /* 0001b414   2  blt 0001b3ec */
    c->pc = RC_ADDR(0x0001b414u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1B3EC; }

L_1B416:
    /* 0001b416   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b416u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1B41A:
    /* 0001b41a   4  move.w #a,-(A7) */
    c->pc = RC_ADDR(0x0001b41au);
    rc_step(c, m, 12);
    t0 = 0x0000000au;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B41E:
    /* 0001b41e   4  move.w #1b,-(A7) */
    c->pc = RC_ADDR(0x0001b41eu);
    rc_step(c, m, 12);
    t0 = 0x0000001bu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B422:
    /* 0001b422   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b422u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B426:
    /* 0001b426   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001b426u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1B428:
    /* 0001b428   4  lea (20b4,A4),A0 */
    c->pc = RC_ADDR(0x0001b428u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x20b4u);

L_1B42C:
    /* 0001b42c   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001b42cu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B430:
    /* 0001b430   4  jsr (0001aaac) */
    c->pc = RC_ADDR(0x0001b430u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001b434u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001aaacu);
    return;

L_1B434:
    /* 0001b434   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001b434u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1B436:
    /* 0001b436   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b436u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1B43A:
    /* 0001b43a   8  cmpi.l #28,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b43au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000028u);

L_1B442:
    /* 0001b442   2  blt 0001b41a */
    c->pc = RC_ADDR(0x0001b442u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1B41A; }

L_1B444:
    /* 0001b444   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b444u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1B448:
    /* 0001b448   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x0001b448u);
    rc_step(c, m, 12);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B44C:
    /* 0001b44c   4  move.w #f,-(A7) */
    c->pc = RC_ADDR(0x0001b44cu);
    rc_step(c, m, 12);
    t0 = 0x0000000fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B450:
    /* 0001b450   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b450u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B454:
    /* 0001b454   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001b454u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1B456:
    /* 0001b456   4  lea (20b4,A4),A0 */
    c->pc = RC_ADDR(0x0001b456u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x20b4u);

L_1B45A:
    /* 0001b45a   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001b45au);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B45E:
    /* 0001b45e   4  jsr (0001aaac) */
    c->pc = RC_ADDR(0x0001b45eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001b462u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001aaacu);
    return;

L_1B462:
    /* 0001b462   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001b462u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1B464:
    /* 0001b464   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b464u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1B468:
    /* 0001b468   8  cmpi.l #28,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b468u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000028u);

L_1B470:
    /* 0001b470   2  blt 0001b448 */
    c->pc = RC_ADDR(0x0001b470u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1B448; }

L_1B472:
    /* 0001b472   2  unlk A5 */
    c->pc = RC_ADDR(0x0001b472u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1B474:
    /* 0001b474   2  rts */
    c->pc = RC_ADDR(0x0001b474u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
