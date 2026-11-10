/* fn_0001a1bc - 704 byte(s), 205 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001a1bc(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001a1bcu): goto L_1A1BC;
    case RC_ADDR(0x0001a1c0u): goto L_1A1C0;
    case RC_ADDR(0x0001a1c6u): goto L_1A1C6;
    case RC_ADDR(0x0001a1c8u): goto L_1A1C8;
    case RC_ADDR(0x0001a1ccu): goto L_1A1CC;
    case RC_ADDR(0x0001a1d0u): goto L_1A1D0;
    case RC_ADDR(0x0001a1d4u): goto L_1A1D4;
    case RC_ADDR(0x0001a1d8u): goto L_1A1D8;
    case RC_ADDR(0x0001a1dcu): goto L_1A1DC;
    case RC_ADDR(0x0001a1deu): goto L_1A1DE;
    case RC_ADDR(0x0001a1e2u): goto L_1A1E2;
    case RC_ADDR(0x0001a1e8u): goto L_1A1E8;
    case RC_ADDR(0x0001a1ecu): goto L_1A1EC;
    case RC_ADDR(0x0001a1eeu): goto L_1A1EE;
    case RC_ADDR(0x0001a1f2u): goto L_1A1F2;
    case RC_ADDR(0x0001a1f8u): goto L_1A1F8;
    case RC_ADDR(0x0001a1fcu): goto L_1A1FC;
    case RC_ADDR(0x0001a1feu): goto L_1A1FE;
    case RC_ADDR(0x0001a202u): goto L_1A202;
    case RC_ADDR(0x0001a208u): goto L_1A208;
    case RC_ADDR(0x0001a20cu): goto L_1A20C;
    case RC_ADDR(0x0001a20eu): goto L_1A20E;
    case RC_ADDR(0x0001a212u): goto L_1A212;
    case RC_ADDR(0x0001a214u): goto L_1A214;
    case RC_ADDR(0x0001a218u): goto L_1A218;
    case RC_ADDR(0x0001a21cu): goto L_1A21C;
    case RC_ADDR(0x0001a21eu): goto L_1A21E;
    case RC_ADDR(0x0001a220u): goto L_1A220;
    case RC_ADDR(0x0001a224u): goto L_1A224;
    case RC_ADDR(0x0001a228u): goto L_1A228;
    case RC_ADDR(0x0001a22cu): goto L_1A22C;
    case RC_ADDR(0x0001a22eu): goto L_1A22E;
    case RC_ADDR(0x0001a232u): goto L_1A232;
    case RC_ADDR(0x0001a234u): goto L_1A234;
    case RC_ADDR(0x0001a238u): goto L_1A238;
    case RC_ADDR(0x0001a23cu): goto L_1A23C;
    case RC_ADDR(0x0001a23eu): goto L_1A23E;
    case RC_ADDR(0x0001a242u): goto L_1A242;
    case RC_ADDR(0x0001a244u): goto L_1A244;
    case RC_ADDR(0x0001a248u): goto L_1A248;
    case RC_ADDR(0x0001a24cu): goto L_1A24C;
    case RC_ADDR(0x0001a24eu): goto L_1A24E;
    case RC_ADDR(0x0001a250u): goto L_1A250;
    case RC_ADDR(0x0001a254u): goto L_1A254;
    case RC_ADDR(0x0001a258u): goto L_1A258;
    case RC_ADDR(0x0001a25cu): goto L_1A25C;
    case RC_ADDR(0x0001a25eu): goto L_1A25E;
    case RC_ADDR(0x0001a262u): goto L_1A262;
    case RC_ADDR(0x0001a264u): goto L_1A264;
    case RC_ADDR(0x0001a266u): goto L_1A266;
    case RC_ADDR(0x0001a26cu): goto L_1A26C;
    case RC_ADDR(0x0001a26eu): goto L_1A26E;
    case RC_ADDR(0x0001a276u): goto L_1A276;
    case RC_ADDR(0x0001a278u): goto L_1A278;
    case RC_ADDR(0x0001a27eu): goto L_1A27E;
    case RC_ADDR(0x0001a280u): goto L_1A280;
    case RC_ADDR(0x0001a286u): goto L_1A286;
    case RC_ADDR(0x0001a288u): goto L_1A288;
    case RC_ADDR(0x0001a28cu): goto L_1A28C;
    case RC_ADDR(0x0001a290u): goto L_1A290;
    case RC_ADDR(0x0001a292u): goto L_1A292;
    case RC_ADDR(0x0001a298u): goto L_1A298;
    case RC_ADDR(0x0001a29au): goto L_1A29A;
    case RC_ADDR(0x0001a29eu): goto L_1A29E;
    case RC_ADDR(0x0001a2a0u): goto L_1A2A0;
    case RC_ADDR(0x0001a2a2u): goto L_1A2A2;
    case RC_ADDR(0x0001a2a6u): goto L_1A2A6;
    case RC_ADDR(0x0001a2aau): goto L_1A2AA;
    case RC_ADDR(0x0001a2aeu): goto L_1A2AE;
    case RC_ADDR(0x0001a2b2u): goto L_1A2B2;
    case RC_ADDR(0x0001a2b4u): goto L_1A2B4;
    case RC_ADDR(0x0001a2b8u): goto L_1A2B8;
    case RC_ADDR(0x0001a2bcu): goto L_1A2BC;
    case RC_ADDR(0x0001a2beu): goto L_1A2BE;
    case RC_ADDR(0x0001a2c2u): goto L_1A2C2;
    case RC_ADDR(0x0001a2c4u): goto L_1A2C4;
    case RC_ADDR(0x0001a2c6u): goto L_1A2C6;
    case RC_ADDR(0x0001a2ccu): goto L_1A2CC;
    case RC_ADDR(0x0001a2d0u): goto L_1A2D0;
    case RC_ADDR(0x0001a2d4u): goto L_1A2D4;
    case RC_ADDR(0x0001a2d8u): goto L_1A2D8;
    case RC_ADDR(0x0001a2dau): goto L_1A2DA;
    case RC_ADDR(0x0001a2deu): goto L_1A2DE;
    case RC_ADDR(0x0001a2e4u): goto L_1A2E4;
    case RC_ADDR(0x0001a2e8u): goto L_1A2E8;
    case RC_ADDR(0x0001a2eau): goto L_1A2EA;
    case RC_ADDR(0x0001a2eeu): goto L_1A2EE;
    case RC_ADDR(0x0001a2f4u): goto L_1A2F4;
    case RC_ADDR(0x0001a2f8u): goto L_1A2F8;
    case RC_ADDR(0x0001a2fau): goto L_1A2FA;
    case RC_ADDR(0x0001a2feu): goto L_1A2FE;
    case RC_ADDR(0x0001a300u): goto L_1A300;
    case RC_ADDR(0x0001a304u): goto L_1A304;
    case RC_ADDR(0x0001a308u): goto L_1A308;
    case RC_ADDR(0x0001a30au): goto L_1A30A;
    case RC_ADDR(0x0001a30cu): goto L_1A30C;
    case RC_ADDR(0x0001a310u): goto L_1A310;
    case RC_ADDR(0x0001a314u): goto L_1A314;
    case RC_ADDR(0x0001a318u): goto L_1A318;
    case RC_ADDR(0x0001a31au): goto L_1A31A;
    case RC_ADDR(0x0001a31eu): goto L_1A31E;
    case RC_ADDR(0x0001a320u): goto L_1A320;
    case RC_ADDR(0x0001a322u): goto L_1A322;
    case RC_ADDR(0x0001a326u): goto L_1A326;
    case RC_ADDR(0x0001a328u): goto L_1A328;
    case RC_ADDR(0x0001a32cu): goto L_1A32C;
    case RC_ADDR(0x0001a32eu): goto L_1A32E;
    case RC_ADDR(0x0001a330u): goto L_1A330;
    case RC_ADDR(0x0001a334u): goto L_1A334;
    case RC_ADDR(0x0001a336u): goto L_1A336;
    case RC_ADDR(0x0001a338u): goto L_1A338;
    case RC_ADDR(0x0001a33cu): goto L_1A33C;
    case RC_ADDR(0x0001a340u): goto L_1A340;
    case RC_ADDR(0x0001a344u): goto L_1A344;
    case RC_ADDR(0x0001a346u): goto L_1A346;
    case RC_ADDR(0x0001a34au): goto L_1A34A;
    case RC_ADDR(0x0001a34cu): goto L_1A34C;
    case RC_ADDR(0x0001a34eu): goto L_1A34E;
    case RC_ADDR(0x0001a354u): goto L_1A354;
    case RC_ADDR(0x0001a356u): goto L_1A356;
    case RC_ADDR(0x0001a35au): goto L_1A35A;
    case RC_ADDR(0x0001a35eu): goto L_1A35E;
    case RC_ADDR(0x0001a360u): goto L_1A360;
    case RC_ADDR(0x0001a366u): goto L_1A366;
    case RC_ADDR(0x0001a368u): goto L_1A368;
    case RC_ADDR(0x0001a36cu): goto L_1A36C;
    case RC_ADDR(0x0001a36eu): goto L_1A36E;
    case RC_ADDR(0x0001a370u): goto L_1A370;
    case RC_ADDR(0x0001a374u): goto L_1A374;
    case RC_ADDR(0x0001a378u): goto L_1A378;
    case RC_ADDR(0x0001a37cu): goto L_1A37C;
    case RC_ADDR(0x0001a380u): goto L_1A380;
    case RC_ADDR(0x0001a382u): goto L_1A382;
    case RC_ADDR(0x0001a386u): goto L_1A386;
    case RC_ADDR(0x0001a38au): goto L_1A38A;
    case RC_ADDR(0x0001a38cu): goto L_1A38C;
    case RC_ADDR(0x0001a390u): goto L_1A390;
    case RC_ADDR(0x0001a392u): goto L_1A392;
    case RC_ADDR(0x0001a394u): goto L_1A394;
    case RC_ADDR(0x0001a398u): goto L_1A398;
    case RC_ADDR(0x0001a3a0u): goto L_1A3A0;
    case RC_ADDR(0x0001a3a4u): goto L_1A3A4;
    case RC_ADDR(0x0001a3a8u): goto L_1A3A8;
    case RC_ADDR(0x0001a3acu): goto L_1A3AC;
    case RC_ADDR(0x0001a3aeu): goto L_1A3AE;
    case RC_ADDR(0x0001a3b0u): goto L_1A3B0;
    case RC_ADDR(0x0001a3b4u): goto L_1A3B4;
    case RC_ADDR(0x0001a3b8u): goto L_1A3B8;
    case RC_ADDR(0x0001a3bau): goto L_1A3BA;
    case RC_ADDR(0x0001a3beu): goto L_1A3BE;
    case RC_ADDR(0x0001a3c0u): goto L_1A3C0;
    case RC_ADDR(0x0001a3c4u): goto L_1A3C4;
    case RC_ADDR(0x0001a3c8u): goto L_1A3C8;
    case RC_ADDR(0x0001a3ccu): goto L_1A3CC;
    case RC_ADDR(0x0001a3ceu): goto L_1A3CE;
    case RC_ADDR(0x0001a3d4u): goto L_1A3D4;
    case RC_ADDR(0x0001a3d6u): goto L_1A3D6;
    case RC_ADDR(0x0001a3dau): goto L_1A3DA;
    case RC_ADDR(0x0001a3deu): goto L_1A3DE;
    case RC_ADDR(0x0001a3e0u): goto L_1A3E0;
    case RC_ADDR(0x0001a3e2u): goto L_1A3E2;
    case RC_ADDR(0x0001a3e8u): goto L_1A3E8;
    case RC_ADDR(0x0001a3ecu): goto L_1A3EC;
    case RC_ADDR(0x0001a3eeu): goto L_1A3EE;
    case RC_ADDR(0x0001a3f4u): goto L_1A3F4;
    case RC_ADDR(0x0001a3f6u): goto L_1A3F6;
    case RC_ADDR(0x0001a3fau): goto L_1A3FA;
    case RC_ADDR(0x0001a400u): goto L_1A400;
    case RC_ADDR(0x0001a402u): goto L_1A402;
    case RC_ADDR(0x0001a406u): goto L_1A406;
    case RC_ADDR(0x0001a408u): goto L_1A408;
    case RC_ADDR(0x0001a40cu): goto L_1A40C;
    case RC_ADDR(0x0001a40eu): goto L_1A40E;
    case RC_ADDR(0x0001a412u): goto L_1A412;
    case RC_ADDR(0x0001a416u): goto L_1A416;
    case RC_ADDR(0x0001a41au): goto L_1A41A;
    case RC_ADDR(0x0001a41cu): goto L_1A41C;
    case RC_ADDR(0x0001a420u): goto L_1A420;
    case RC_ADDR(0x0001a424u): goto L_1A424;
    case RC_ADDR(0x0001a428u): goto L_1A428;
    case RC_ADDR(0x0001a42cu): goto L_1A42C;
    case RC_ADDR(0x0001a430u): goto L_1A430;
    case RC_ADDR(0x0001a434u): goto L_1A434;
    case RC_ADDR(0x0001a436u): goto L_1A436;
    case RC_ADDR(0x0001a43au): goto L_1A43A;
    case RC_ADDR(0x0001a43cu): goto L_1A43C;
    case RC_ADDR(0x0001a440u): goto L_1A440;
    case RC_ADDR(0x0001a444u): goto L_1A444;
    case RC_ADDR(0x0001a446u): goto L_1A446;
    case RC_ADDR(0x0001a44au): goto L_1A44A;
    case RC_ADDR(0x0001a44eu): goto L_1A44E;
    case RC_ADDR(0x0001a452u): goto L_1A452;
    case RC_ADDR(0x0001a456u): goto L_1A456;
    case RC_ADDR(0x0001a458u): goto L_1A458;
    case RC_ADDR(0x0001a45cu): goto L_1A45C;
    case RC_ADDR(0x0001a460u): goto L_1A460;
    case RC_ADDR(0x0001a462u): goto L_1A462;
    case RC_ADDR(0x0001a466u): goto L_1A466;
    case RC_ADDR(0x0001a46au): goto L_1A46A;
    case RC_ADDR(0x0001a46cu): goto L_1A46C;
    case RC_ADDR(0x0001a46eu): goto L_1A46E;
    case RC_ADDR(0x0001a472u): goto L_1A472;
    case RC_ADDR(0x0001a476u): goto L_1A476;
    case RC_ADDR(0x0001a478u): goto L_1A478;
    case RC_ADDR(0x0001a47au): goto L_1A47A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1A1BC:
    /* 0001a1bc   4  link.w A5,#ffffffee */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a1bcu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x12u;

L_1A1C0:
    /* 0001a1c0   6  cmpi.w #1,(1cca,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a1c0u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ccau));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1A1C6:
    /* 0001a1c6   2  bne 0001a1cc */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a1c6u);
    if (rc_cond(c, 6)) goto L_1A1CC;

L_1A1C8:
    /* 0001a1c8   4  clr.w (1cca,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a1c8u);
    rc_wr16(c, m, (c->a[4] + 0x1ccau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A1CC:
    /* 0001a1cc   4  clr.w (1cbe,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a1ccu);
    rc_wr16(c, m, (c->a[4] + 0x1cbeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A1D0:
    /* 0001a1d0   4  clr.l (fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a1d0u);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1A1D4:
    /* 0001a1d4   4  bra 0001a3a8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a1d4u);
    goto L_1A3A8;

L_1A1D8:
    /* 0001a1d8   4  move.l (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a1d8u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A1DC:
    /* 0001a1dc   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a1dcu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1A1DE:
    /* 0001a1de   4  lea (1bd2,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a1deu);
    c->a[0] = (c->a[4] + 0x1bd2u);

L_1A1E2:
    /* 0001a1e2   6  move.w (0,A0,D0.w),(fffffff4,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a1e2u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A1E8:
    /* 0001a1e8   4  move.l (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a1e8u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A1EC:
    /* 0001a1ec   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a1ecu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1A1EE:
    /* 0001a1ee   4  lea (1c00,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a1eeu);
    c->a[0] = (c->a[4] + 0x1c00u);

L_1A1F2:
    /* 0001a1f2   6  move.w (0,A0,D0.w),(fffffff2,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a1f2u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A1F8:
    /* 0001a1f8   4  move.l (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a1f8u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A1FC:
    /* 0001a1fc   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a1fcu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1A1FE:
    /* 0001a1fe   4  lea (1ba4,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a1feu);
    c->a[0] = (c->a[4] + 0x1ba4u);

L_1A202:
    /* 0001a202   6  move.w (0,A0,D0.w),(fffffff6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a202u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A208:
    /* 0001a208   4  move.w (fffffff4,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a208u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A20C:
    /* 0001a20c   2  subq.w #8,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a20cu);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A20E:
    /* 0001a20e   4  move.w (47a,A4),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a20eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A212:
    /* 0001a212   2  cmp.w D0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a212u);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A214:
    /* 0001a214   4  ble 0001a2d0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a214u);
    if (rc_cond(c, 15)) goto L_1A2D0;

L_1A218:
    /* 0001a218   4  move.w (fffffff6,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a218u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A21C:
    /* 0001a21c   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a21cu);
    rc_ext_l(c, 0);

L_1A21E:
    /* 0001a21e   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a21eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1A220:
    /* 0001a220   4  lea (ffffc6ca,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a220u);
    c->a[0] = (c->a[4] - 0x3936u);

L_1A224:
    /* 0001a224   4  move.w (0,A0,D0.w),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a224u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A228:
    /* 0001a228   4  add.w (fffffff4,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a228u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A22C:
    /* 0001a22c   2  addq.w #8,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a22cu);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A22E:
    /* 0001a22e   4  move.w (47a,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a22eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A232:
    /* 0001a232   2  cmp.w D1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a232u);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A234:
    /* 0001a234   4  bge 0001a2d0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a234u);
    if (rc_cond(c, 12)) goto L_1A2D0;

L_1A238:
    /* 0001a238   4  move.w (fffffff2,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a238u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A23C:
    /* 0001a23c   2  subq.w #6,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a23cu);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000006u;
    rc_flags_sub(c, RC_W, t1, 0x00000006u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A23E:
    /* 0001a23e   4  move.w (47c,A4),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a23eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A242:
    /* 0001a242   2  cmp.w D0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a242u);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A244:
    /* 0001a244   4  ble 0001a2d0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a244u);
    if (rc_cond(c, 15)) goto L_1A2D0;

L_1A248:
    /* 0001a248   4  move.w (fffffff6,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a248u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A24C:
    /* 0001a24c   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a24cu);
    rc_ext_l(c, 0);

L_1A24E:
    /* 0001a24e   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a24eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1A250:
    /* 0001a250   4  lea (ffffc6d6,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a250u);
    c->a[0] = (c->a[4] - 0x392au);

L_1A254:
    /* 0001a254   4  move.w (0,A0,D0.w),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a254u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A258:
    /* 0001a258   4  add.w (fffffff2,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a258u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A25C:
    /* 0001a25c   2  addq.w #6,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a25cu);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000006u;
    rc_flags_add(c, RC_W, t1, 0x00000006u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A25E:
    /* 0001a25e   4  move.w (47c,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a25eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A262:
    /* 0001a262   2  cmp.w D1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a262u);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A264:
    /* 0001a264   2  bge 0001a2d0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a264u);
    if (rc_cond(c, 12)) goto L_1A2D0;

L_1A266:
    /* 0001a266   6  cmpi.w #3,(478,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a266u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x478u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_1A26C:
    /* 0001a26c   2  beq 0001a2d0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a26cu);
    if (rc_cond(c, 7)) goto L_1A2D0;

L_1A26E:
    /* 0001a26e   8  cmpi.l #2,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a26eu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000002u);

L_1A276:
    /* 0001a276   2  bgt 0001a280 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a276u);
    if (rc_cond(c, 14)) goto L_1A280;

L_1A278:
    /* 0001a278   6  cmpi.w #1,(478,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a278u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x478u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1A27E:
    /* 0001a27e   2  beq 0001a2c6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a27eu);
    if (rc_cond(c, 7)) goto L_1A2C6;

L_1A280:
    /* 0001a280   6  cmpi.w #5,(fffffff6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a280u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_1A286:
    /* 0001a286   2  bne 0001a29a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a286u);
    if (rc_cond(c, 6)) goto L_1A29A;

L_1A288:
    /* 0001a288   4  move.w (1f42,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a288u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f42u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A28C:
    /* 0001a28c   4  cmp.w (1f40,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a28cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f40u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A290:
    /* 0001a290   2  bne 0001a298 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a290u);
    if (rc_cond(c, 6)) goto L_1A298;

L_1A292:
    /* 0001a292   6  move.w #1,(1cca,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a292u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1ccau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A298:
    /* 0001a298   2  bra 0001a2c4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a298u);
    goto L_1A2C4;

L_1A29A:
    /* 0001a29a   4  move.w (fffffff6,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a29au);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A29E:
    /* 0001a29e   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a29eu);
    rc_ext_l(c, 0);

L_1A2A0:
    /* 0001a2a0   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a2a0u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1A2A2:
    /* 0001a2a2   4  lea (1f54,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a2a2u);
    c->a[0] = (c->a[4] + 0x1f54u);

L_1A2A6:
    /* 0001a2a6   4  move.l (0,A0,D0.w),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a2a6u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A2AA:
    /* 0001a2aa   4  move.w (fffffff2,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a2aau);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A2AE:
    /* 0001a2ae   4  sub.w (472,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a2aeu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x472u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A2B2:
    /* 0001a2b2   2  move.w D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a2b2u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A2B4:
    /* 0001a2b4   4  move.w (fffffff4,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a2b4u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A2B8:
    /* 0001a2b8   4  sub.w (470,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a2b8u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x470u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A2BC:
    /* 0001a2bc   2  move.w D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a2bcu);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A2BE:
    /* 0001a2be   4  jsr (ffff8158,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a2beu);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x0001a2c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00011208u);
    return;

L_1A2C2:
    /* 0001a2c2   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a2c2u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1A2C4:
    /* 0001a2c4   2  bra 0001a2cc */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a2c4u);
    goto L_1A2CC;

L_1A2C6:
    /* 0001a2c6   6  move.w #2,(1cbe,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a2c6u);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x1cbeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A2CC:
    /* 0001a2cc   4  bra 0001a3a4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a2ccu);
    goto L_1A3A4;

L_1A2D0:
    /* 0001a2d0   4  clr.l (fffffff8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a2d0u);
    rc_wr32(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1A2D4:
    /* 0001a2d4   4  move.l (fffffff8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a2d4u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A2D8:
    /* 0001a2d8   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a2d8u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1A2DA:
    /* 0001a2da   4  lea (1ce8,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a2dau);
    c->a[0] = (c->a[4] + 0x1ce8u);

L_1A2DE:
    /* 0001a2de   6  move.w (0,A0,D0.w),(fffffff0,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a2deu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A2E4:
    /* 0001a2e4   4  move.l (fffffff8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a2e4u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A2E8:
    /* 0001a2e8   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a2e8u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1A2EA:
    /* 0001a2ea   4  lea (1d00,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a2eau);
    c->a[0] = (c->a[4] + 0x1d00u);

L_1A2EE:
    /* 0001a2ee   6  move.w (0,A0,D0.w),(ffffffee,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a2eeu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A2F4:
    /* 0001a2f4   4  move.w (fffffff4,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a2f4u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A2F8:
    /* 0001a2f8   2  subq.w #8,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a2f8u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A2FA:
    /* 0001a2fa   4  move.w (fffffff0,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a2fau);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A2FE:
    /* 0001a2fe   2  cmp.w D0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a2feu);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A300:
    /* 0001a300   4  ble 0001a394 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a300u);
    if (rc_cond(c, 15)) goto L_1A394;

L_1A304:
    /* 0001a304   4  move.w (fffffff6,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a304u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A308:
    /* 0001a308   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a308u);
    rc_ext_l(c, 0);

L_1A30A:
    /* 0001a30a   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a30au);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1A30C:
    /* 0001a30c   4  lea (ffffc6ca,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a30cu);
    c->a[0] = (c->a[4] - 0x3936u);

L_1A310:
    /* 0001a310   4  move.w (0,A0,D0.w),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a310u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A314:
    /* 0001a314   4  add.w (fffffff4,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a314u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A318:
    /* 0001a318   2  addq.w #8,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a318u);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A31A:
    /* 0001a31a   4  move.w (fffffff0,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a31au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A31E:
    /* 0001a31e   2  cmp.w D1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a31eu);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A320:
    /* 0001a320   2  bge 0001a394 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a320u);
    if (rc_cond(c, 12)) goto L_1A394;

L_1A322:
    /* 0001a322   4  move.w (fffffff2,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a322u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A326:
    /* 0001a326   2  subq.w #6,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a326u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000006u;
    rc_flags_sub(c, RC_W, t1, 0x00000006u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A328:
    /* 0001a328   4  move.w (ffffffee,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a328u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A32C:
    /* 0001a32c   2  cmp.w D0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a32cu);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A32E:
    /* 0001a32e   2  ble 0001a394 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a32eu);
    if (rc_cond(c, 15)) goto L_1A394;

L_1A330:
    /* 0001a330   4  move.w (fffffff6,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a330u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A334:
    /* 0001a334   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a334u);
    rc_ext_l(c, 0);

L_1A336:
    /* 0001a336   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a336u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1A338:
    /* 0001a338   4  lea (ffffc6d6,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a338u);
    c->a[0] = (c->a[4] - 0x392au);

L_1A33C:
    /* 0001a33c   4  move.w (0,A0,D0.w),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a33cu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A340:
    /* 0001a340   4  add.w (fffffff2,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a340u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A344:
    /* 0001a344   2  addq.w #6,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a344u);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000006u;
    rc_flags_add(c, RC_W, t1, 0x00000006u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A346:
    /* 0001a346   4  move.w (ffffffee,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a346u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A34A:
    /* 0001a34a   2  cmp.w D1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a34au);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A34C:
    /* 0001a34c   2  bge 0001a394 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a34cu);
    if (rc_cond(c, 12)) goto L_1A394;

L_1A34E:
    /* 0001a34e   6  cmpi.w #5,(fffffff6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a34eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_1A354:
    /* 0001a354   2  bne 0001a368 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a354u);
    if (rc_cond(c, 6)) goto L_1A368;

L_1A356:
    /* 0001a356   4  move.w (1f42,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a356u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f42u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A35A:
    /* 0001a35a   4  cmp.w (1f40,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a35au);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f40u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A35E:
    /* 0001a35e   2  bne 0001a366 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a35eu);
    if (rc_cond(c, 6)) goto L_1A366;

L_1A360:
    /* 0001a360   6  move.w #1,(1cca,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a360u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1ccau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A366:
    /* 0001a366   2  bra 0001a392 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a366u);
    goto L_1A392;

L_1A368:
    /* 0001a368   4  move.w (fffffff6,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a368u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A36C:
    /* 0001a36c   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a36cu);
    rc_ext_l(c, 0);

L_1A36E:
    /* 0001a36e   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a36eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1A370:
    /* 0001a370   4  lea (1f54,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a370u);
    c->a[0] = (c->a[4] + 0x1f54u);

L_1A374:
    /* 0001a374   4  move.l (0,A0,D0.w),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a374u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A378:
    /* 0001a378   4  move.w (fffffff2,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a378u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A37C:
    /* 0001a37c   4  sub.w (472,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a37cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x472u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A380:
    /* 0001a380   2  move.w D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a380u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A382:
    /* 0001a382   4  move.w (fffffff4,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a382u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A386:
    /* 0001a386   4  sub.w (470,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a386u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x470u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A38A:
    /* 0001a38a   2  move.w D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a38au);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A38C:
    /* 0001a38c   4  jsr (ffff8158,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a38cu);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x0001a390u));
    rc_depth++;
    c->pc = RC_ADDR(0x00011208u);
    return;

L_1A390:
    /* 0001a390   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a390u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1A392:
    /* 0001a392   2  bra 0001a3a4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a392u);
    goto L_1A3A4;

L_1A394:
    /* 0001a394   4  addq.l #1,(fffffff8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a394u);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1A398:
    /* 0001a398   8  cmpi.l #c,(fffffff8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a398u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_L, t0, 0x0000000cu);

L_1A3A0:
    /* 0001a3a0   4  blt 0001a2d4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a3a0u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1A2D4; }

L_1A3A4:
    /* 0001a3a4   4  addq.l #1,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a3a4u);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1A3A8:
    /* 0001a3a8   4  move.w (1f40,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a3a8u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f40u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A3AC:
    /* 0001a3ac   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a3acu);
    rc_ext_l(c, 0);

L_1A3AE:
    /* 0001a3ae   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a3aeu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1A3B0:
    /* 0001a3b0   4  lea (ffffc656,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a3b0u);
    c->a[0] = (c->a[4] - 0x39aau);

L_1A3B4:
    /* 0001a3b4   4  move.w (0,A0,D0.w),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a3b4u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A3B8:
    /* 0001a3b8   2  ext.l D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a3b8u);
    rc_ext_l(c, 1);

L_1A3BA:
    /* 0001a3ba   4  move.l (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a3bau);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A3BE:
    /* 0001a3be   2  cmp.l D1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a3beu);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1A3C0:
    /* 0001a3c0   4  blt 0001a1d8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a3c0u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1A1D8; }

L_1A3C4:
    /* 0001a3c4   4  move.w (1f42,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a3c4u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f42u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A3C8:
    /* 0001a3c8   4  cmp.w (1f40,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a3c8u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f40u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A3CC:
    /* 0001a3cc   2  bne 0001a412 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a3ccu);
    if (rc_cond(c, 6)) goto L_1A412;

L_1A3CE:
    /* 0001a3ce   6  cmpi.w #2,(1cca,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a3ceu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ccau));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_1A3D4:
    /* 0001a3d4   2  bne 0001a3e8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a3d4u);
    if (rc_cond(c, 6)) goto L_1A3E8;

L_1A3D6:
    /* 0001a3d6   4  move.w (1cce,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a3d6u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A3DA:
    /* 0001a3da   4  subq.w #1,(1cce,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a3dau);
    t3 = (c->a[4] + 0x1cceu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A3DE:
    /* 0001a3de   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a3deu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1A3E0:
    /* 0001a3e0   2  bne 0001a3e8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a3e0u);
    if (rc_cond(c, 6)) goto L_1A3E8;

L_1A3E2:
    /* 0001a3e2   6  move.w #1,(1cca,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a3e2u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1ccau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A3E8:
    /* 0001a3e8   4  tst.w (1cca,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a3e8u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ccau));
    rc_set_nzvc(c, t0, RC_W);

L_1A3EC:
    /* 0001a3ec   2  beq 0001a408 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a3ecu);
    if (rc_cond(c, 7)) goto L_1A408;

L_1A3EE:
    /* 0001a3ee   6  cmpi.w #9,(1ccc,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a3eeu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cccu));
    rc_cmp(c, RC_W, t0, 0x00000009u);

L_1A3F4:
    /* 0001a3f4   2  bge 0001a3fa */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a3f4u);
    if (rc_cond(c, 12)) goto L_1A3FA;

L_1A3F6:
    /* 0001a3f6   4  addq.w #1,(1ccc,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a3f6u);
    t3 = (c->a[4] + 0x1cccu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A3FA:
    /* 0001a3fa   6  cmpi.w #1,(1ccc,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a3fau);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cccu));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1A400:
    /* 0001a400   2  bne 0001a406 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a400u);
    if (rc_cond(c, 6)) goto L_1A406;

L_1A402:
    /* 0001a402   4  jsr (0001b1d8) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a402u);
    rc_push32(c, m, RC_ADDR(0x0001a406u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001b1d8u);
    return;

L_1A406:
    /* 0001a406   2  bra 0001a412 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a406u);
    goto L_1A412;

L_1A408:
    /* 0001a408   4  tst.w (1ccc,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a408u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cccu));
    rc_set_nzvc(c, t0, RC_W);

L_1A40C:
    /* 0001a40c   2  beq 0001a412 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a40cu);
    if (rc_cond(c, 7)) goto L_1A412;

L_1A40E:
    /* 0001a40e   4  subq.w #1,(1ccc,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a40eu);
    t3 = (c->a[4] + 0x1cccu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A412:
    /* 0001a412   4  move.w #180,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a412u);
    t0 = 0x00000180u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A416:
    /* 0001a416   4  sub.w (470,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a416u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x470u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A41A:
    /* 0001a41a   2  addq.w #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a41au);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A41C:
    /* 0001a41c   4  move.w D0,(fffffff4,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a41cu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A420:
    /* 0001a420   4  move.w #118,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a420u);
    t0 = 0x00000118u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A424:
    /* 0001a424   4  sub.w (472,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a424u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x472u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A428:
    /* 0001a428   4  move.w D0,(fffffff2,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a428u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A42C:
    /* 0001a42c   4  move.l (1f6c,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a42cu);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1f6cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A430:
    /* 0001a430   4  move.w (fffffff2,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a430u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A434:
    /* 0001a434   2  addq.w #6,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a434u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000006u;
    rc_flags_add(c, RC_W, t1, 0x00000006u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A436:
    /* 0001a436   4  sub.w (1ccc,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a436u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cccu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A43A:
    /* 0001a43a   2  move.w D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a43au);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A43C:
    /* 0001a43c   4  move.w (fffffff4,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a43cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A440:
    /* 0001a440   4  jsr (ffff8158,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a440u);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x0001a444u));
    rc_depth++;
    c->pc = RC_ADDR(0x00011208u);
    return;

L_1A444:
    /* 0001a444   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a444u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1A446:
    /* 0001a446   4  move.l (1f70,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a446u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1f70u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A44A:
    /* 0001a44a   4  move.w (fffffff2,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a44au);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A44E:
    /* 0001a44e   4  add.w (1ccc,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a44eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cccu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A452:
    /* 0001a452   4  add.w #f,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a452u);
    t0 = 0x0000000fu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A456:
    /* 0001a456   2  move.w D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a456u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A458:
    /* 0001a458   4  move.w (fffffff4,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a458u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A45C:
    /* 0001a45c   4  jsr (ffff8158,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a45cu);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x0001a460u));
    rc_depth++;
    c->pc = RC_ADDR(0x00011208u);
    return;

L_1A460:
    /* 0001a460   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a460u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1A462:
    /* 0001a462   4  move.l (1f68,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a462u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1f68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A466:
    /* 0001a466   4  move.w (fffffff2,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a466u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A46A:
    /* 0001a46a   2  subq.w #3,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a46au);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A46C:
    /* 0001a46c   2  move.w D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a46cu);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A46E:
    /* 0001a46e   4  move.w (fffffff4,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a46eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A472:
    /* 0001a472   4  jsr (ffff8158,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a472u);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x0001a476u));
    rc_depth++;
    c->pc = RC_ADDR(0x00011208u);
    return;

L_1A476:
    /* 0001a476   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a476u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1A478:
    /* 0001a478   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a478u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1A47A:
    /* 0001a47a   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a47au);
    rc_ret(c, m);
    return;

}
