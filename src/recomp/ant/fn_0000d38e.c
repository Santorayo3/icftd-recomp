/* fn_0000d38e - 402 byte(s), 109 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000d38e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000d38eu): goto L_D38E;
    case RC_ADDR(0x0000d392u): goto L_D392;
    case RC_ADDR(0x0000d396u): goto L_D396;
    case RC_ADDR(0x0000d39au): goto L_D39A;
    case RC_ADDR(0x0000d39cu): goto L_D39C;
    case RC_ADDR(0x0000d39eu): goto L_D39E;
    case RC_ADDR(0x0000d3a0u): goto L_D3A0;
    case RC_ADDR(0x0000d3a2u): goto L_D3A2;
    case RC_ADDR(0x0000d3a6u): goto L_D3A6;
    case RC_ADDR(0x0000d3aau): goto L_D3AA;
    case RC_ADDR(0x0000d3acu): goto L_D3AC;
    case RC_ADDR(0x0000d3b0u): goto L_D3B0;
    case RC_ADDR(0x0000d3b4u): goto L_D3B4;
    case RC_ADDR(0x0000d3b8u): goto L_D3B8;
    case RC_ADDR(0x0000d3bau): goto L_D3BA;
    case RC_ADDR(0x0000d3beu): goto L_D3BE;
    case RC_ADDR(0x0000d3c4u): goto L_D3C4;
    case RC_ADDR(0x0000d3cau): goto L_D3CA;
    case RC_ADDR(0x0000d3ceu): goto L_D3CE;
    case RC_ADDR(0x0000d3d2u): goto L_D3D2;
    case RC_ADDR(0x0000d3d6u): goto L_D3D6;
    case RC_ADDR(0x0000d3d8u): goto L_D3D8;
    case RC_ADDR(0x0000d3dcu): goto L_D3DC;
    case RC_ADDR(0x0000d3e0u): goto L_D3E0;
    case RC_ADDR(0x0000d3e4u): goto L_D3E4;
    case RC_ADDR(0x0000d3e8u): goto L_D3E8;
    case RC_ADDR(0x0000d3ecu): goto L_D3EC;
    case RC_ADDR(0x0000d3f0u): goto L_D3F0;
    case RC_ADDR(0x0000d3f4u): goto L_D3F4;
    case RC_ADDR(0x0000d3f6u): goto L_D3F6;
    case RC_ADDR(0x0000d3fau): goto L_D3FA;
    case RC_ADDR(0x0000d3feu): goto L_D3FE;
    case RC_ADDR(0x0000d400u): goto L_D400;
    case RC_ADDR(0x0000d402u): goto L_D402;
    case RC_ADDR(0x0000d406u): goto L_D406;
    case RC_ADDR(0x0000d40au): goto L_D40A;
    case RC_ADDR(0x0000d40eu): goto L_D40E;
    case RC_ADDR(0x0000d412u): goto L_D412;
    case RC_ADDR(0x0000d416u): goto L_D416;
    case RC_ADDR(0x0000d418u): goto L_D418;
    case RC_ADDR(0x0000d41cu): goto L_D41C;
    case RC_ADDR(0x0000d420u): goto L_D420;
    case RC_ADDR(0x0000d424u): goto L_D424;
    case RC_ADDR(0x0000d428u): goto L_D428;
    case RC_ADDR(0x0000d42cu): goto L_D42C;
    case RC_ADDR(0x0000d430u): goto L_D430;
    case RC_ADDR(0x0000d434u): goto L_D434;
    case RC_ADDR(0x0000d438u): goto L_D438;
    case RC_ADDR(0x0000d43cu): goto L_D43C;
    case RC_ADDR(0x0000d440u): goto L_D440;
    case RC_ADDR(0x0000d444u): goto L_D444;
    case RC_ADDR(0x0000d448u): goto L_D448;
    case RC_ADDR(0x0000d44au): goto L_D44A;
    case RC_ADDR(0x0000d44eu): goto L_D44E;
    case RC_ADDR(0x0000d452u): goto L_D452;
    case RC_ADDR(0x0000d456u): goto L_D456;
    case RC_ADDR(0x0000d45au): goto L_D45A;
    case RC_ADDR(0x0000d45eu): goto L_D45E;
    case RC_ADDR(0x0000d462u): goto L_D462;
    case RC_ADDR(0x0000d464u): goto L_D464;
    case RC_ADDR(0x0000d46au): goto L_D46A;
    case RC_ADDR(0x0000d46cu): goto L_D46C;
    case RC_ADDR(0x0000d470u): goto L_D470;
    case RC_ADDR(0x0000d472u): goto L_D472;
    case RC_ADDR(0x0000d476u): goto L_D476;
    case RC_ADDR(0x0000d47au): goto L_D47A;
    case RC_ADDR(0x0000d47eu): goto L_D47E;
    case RC_ADDR(0x0000d482u): goto L_D482;
    case RC_ADDR(0x0000d486u): goto L_D486;
    case RC_ADDR(0x0000d48au): goto L_D48A;
    case RC_ADDR(0x0000d48eu): goto L_D48E;
    case RC_ADDR(0x0000d492u): goto L_D492;
    case RC_ADDR(0x0000d496u): goto L_D496;
    case RC_ADDR(0x0000d49au): goto L_D49A;
    case RC_ADDR(0x0000d49eu): goto L_D49E;
    case RC_ADDR(0x0000d4a2u): goto L_D4A2;
    case RC_ADDR(0x0000d4a6u): goto L_D4A6;
    case RC_ADDR(0x0000d4aau): goto L_D4AA;
    case RC_ADDR(0x0000d4aeu): goto L_D4AE;
    case RC_ADDR(0x0000d4b4u): goto L_D4B4;
    case RC_ADDR(0x0000d4b6u): goto L_D4B6;
    case RC_ADDR(0x0000d4bau): goto L_D4BA;
    case RC_ADDR(0x0000d4beu): goto L_D4BE;
    case RC_ADDR(0x0000d4c0u): goto L_D4C0;
    case RC_ADDR(0x0000d4c4u): goto L_D4C4;
    case RC_ADDR(0x0000d4c8u): goto L_D4C8;
    case RC_ADDR(0x0000d4cau): goto L_D4CA;
    case RC_ADDR(0x0000d4ceu): goto L_D4CE;
    case RC_ADDR(0x0000d4d0u): goto L_D4D0;
    case RC_ADDR(0x0000d4d4u): goto L_D4D4;
    case RC_ADDR(0x0000d4d8u): goto L_D4D8;
    case RC_ADDR(0x0000d4dcu): goto L_D4DC;
    case RC_ADDR(0x0000d4deu): goto L_D4DE;
    case RC_ADDR(0x0000d4e2u): goto L_D4E2;
    case RC_ADDR(0x0000d4e4u): goto L_D4E4;
    case RC_ADDR(0x0000d4e8u): goto L_D4E8;
    case RC_ADDR(0x0000d4ecu): goto L_D4EC;
    case RC_ADDR(0x0000d4f0u): goto L_D4F0;
    case RC_ADDR(0x0000d4f4u): goto L_D4F4;
    case RC_ADDR(0x0000d4f8u): goto L_D4F8;
    case RC_ADDR(0x0000d4fcu): goto L_D4FC;
    case RC_ADDR(0x0000d500u): goto L_D500;
    case RC_ADDR(0x0000d504u): goto L_D504;
    case RC_ADDR(0x0000d508u): goto L_D508;
    case RC_ADDR(0x0000d50cu): goto L_D50C;
    case RC_ADDR(0x0000d510u): goto L_D510;
    case RC_ADDR(0x0000d514u): goto L_D514;
    case RC_ADDR(0x0000d518u): goto L_D518;
    case RC_ADDR(0x0000d51cu): goto L_D51C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_D38E:
    /* 0000d38e   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0000d38eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_D392:
    /* 0000d392   4  jsr (ffff812e,A4) */
    c->pc = RC_ADDR(0x0000d392u);
    rc_step(c, m, 18);
    /* vector 50 */
    rc_push32(c, m, RC_ADDR(0x0000d396u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c24u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000104f6u);
    return;

L_D396:
    /* 0000d396   4  jsr (0000d276) */
    c->pc = RC_ADDR(0x0000d396u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000d39au));
    rc_depth++;
    c->pc = RC_ADDR(0x0000d276u);
    return;

L_D39A:
    /* 0000d39a   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000d39au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_D39C:
    /* 0000d39c   2  bne 0000d3a2 */
    c->pc = RC_ADDR(0x0000d39cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_D3A2;

L_D39E:
    /* 0000d39e   2  unlk A5 */
    c->pc = RC_ADDR(0x0000d39eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_D3A0:
    /* 0000d3a0   2  rts */
    c->pc = RC_ADDR(0x0000d3a0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_D3A2:
    /* 0000d3a2   4  pea (0000d520) */
    c->pc = RC_ADDR(0x0000d3a2u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000d520u));

L_D3A6:
    /* 0000d3a6   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000d3a6u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000d3aau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_D3AA:
    /* 0000d3aa   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000d3aau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_D3AC:
    /* 0000d3ac   4  move.l D0,(e28,A4) */
    c->pc = RC_ADDR(0x0000d3acu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xe28u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_D3B0:
    /* 0000d3b0   4  pea (0000d52a) */
    c->pc = RC_ADDR(0x0000d3b0u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000d52au));

L_D3B4:
    /* 0000d3b4   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000d3b4u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000d3b8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_D3B8:
    /* 0000d3b8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000d3b8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_D3BA:
    /* 0000d3ba   4  move.l D0,(e1c,A4) */
    c->pc = RC_ADDR(0x0000d3bau);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xe1cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_D3BE:
    /* 0000d3be   6  move.l (8,A5),(e60,A4) */
    c->pc = RC_ADDR(0x0000d3beu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0xe60u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_D3C4:
    /* 0000d3c4   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x0000d3c4u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_D3CA:
    /* 0000d3ca   4  move.w #9,-(A7) */
    c->pc = RC_ADDR(0x0000d3cau);
    rc_step(c, m, 12);
    t0 = 0x00000009u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D3CE:
    /* 0000d3ce   4  move.w (928,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d3ceu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x928u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D3D2:
    /* 0000d3d2   4  move.w (926,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d3d2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x926u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D3D6:
    /* 0000d3d6   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000d3d6u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D3D8:
    /* 0000d3d8   4  move.l (e28,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d3d8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe28u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D3DC:
    /* 0000d3dc   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000d3dcu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D3E0:
    /* 0000d3e0   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000d3e0u);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000d3e4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_D3E4:
    /* 0000d3e4   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000d3e4u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_D3E8:
    /* 0000d3e8   4  move.w #8,-(A7) */
    c->pc = RC_ADDR(0x0000d3e8u);
    rc_step(c, m, 12);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D3EC:
    /* 0000d3ec   4  move.w (928,A4),D0 */
    c->pc = RC_ADDR(0x0000d3ecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x928u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D3F0:
    /* 0000d3f0   4  sub.w #13,D0 */
    c->pc = RC_ADDR(0x0000d3f0u);
    rc_step(c, m, 10);
    t0 = 0x00000013u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_D3F4:
    /* 0000d3f4   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000d3f4u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D3F6:
    /* 0000d3f6   4  move.w (926,A4),D0 */
    c->pc = RC_ADDR(0x0000d3f6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x926u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D3FA:
    /* 0000d3fa   4  sub.w #12,D0 */
    c->pc = RC_ADDR(0x0000d3fau);
    rc_step(c, m, 10);
    t0 = 0x00000012u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_D3FE:
    /* 0000d3fe   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000d3feu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D400:
    /* 0000d400   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000d400u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D402:
    /* 0000d402   4  move.l (e1c,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d402u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe1cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D406:
    /* 0000d406   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000d406u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D40A:
    /* 0000d40a   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000d40au);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000d40eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_D40E:
    /* 0000d40e   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000d40eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_D412:
    /* 0000d412   4  tst.l (e3c,A4) */
    c->pc = RC_ADDR(0x0000d412u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe3cu));
    rc_set_nzvc(c, t0, RC_L);

L_D416:
    /* 0000d416   2  beq 0000d456 */
    c->pc = RC_ADDR(0x0000d416u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_D456;

L_D418:
    /* 0000d418   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x0000d418u);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D41C:
    /* 0000d41c   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000d41cu);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D420:
    /* 0000d420   4  move.l (e4e,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d420u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe4eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D424:
    /* 0000d424   4  move.w (e46,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d424u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe46u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D428:
    /* 0000d428   4  move.l (e3c,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d428u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe3cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D42C:
    /* 0000d42c   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0000d42cu);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0000d430u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_D430:
    /* 0000d430   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000d430u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_D434:
    /* 0000d434   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x0000d434u);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D438:
    /* 0000d438   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000d438u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D43C:
    /* 0000d43c   4  move.l (e4e,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d43cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe4eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D440:
    /* 0000d440   4  move.w (e46,A4),D0 */
    c->pc = RC_ADDR(0x0000d440u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe46u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D444:
    /* 0000d444   4  add.w #3e8,D0 */
    c->pc = RC_ADDR(0x0000d444u);
    rc_step(c, m, 10);
    t0 = 0x000003e8u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_D448:
    /* 0000d448   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000d448u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D44A:
    /* 0000d44a   4  move.l (e3c,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d44au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe3cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D44E:
    /* 0000d44e   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0000d44eu);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0000d452u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_D452:
    /* 0000d452   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000d452u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_D456:
    /* 0000d456   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0000d456u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D45A:
    /* 0000d45a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000d45au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D45E:
    /* 0000d45e   4  jsr (00006612) */
    c->pc = RC_ADDR(0x0000d45eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000d462u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006612u);
    return;

L_D462:
    /* 0000d462   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000d462u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_D464:
    /* 0000d464   6  cmpi.w #24,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000d464u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000024u);

L_D46A:
    /* 0000d46a   2  bne 0000d4aa */
    c->pc = RC_ADDR(0x0000d46au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_D4AA;

L_D46C:
    /* 0000d46c   4  tst.l (e40,A4) */
    c->pc = RC_ADDR(0x0000d46cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe40u));
    rc_set_nzvc(c, t0, RC_L);

L_D470:
    /* 0000d470   2  beq 0000d4aa */
    c->pc = RC_ADDR(0x0000d470u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_D4AA;

L_D472:
    /* 0000d472   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x0000d472u);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D476:
    /* 0000d476   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000d476u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D47A:
    /* 0000d47a   4  move.l (e52,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d47au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe52u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D47E:
    /* 0000d47e   4  move.w (e48,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d47eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe48u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D482:
    /* 0000d482   4  move.l (e40,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d482u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe40u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D486:
    /* 0000d486   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0000d486u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0000d48au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_D48A:
    /* 0000d48a   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000d48au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_D48E:
    /* 0000d48e   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x0000d48eu);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D492:
    /* 0000d492   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000d492u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D496:
    /* 0000d496   4  move.l (e52,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d496u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe52u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D49A:
    /* 0000d49a   4  move.w (e48,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d49au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe48u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D49E:
    /* 0000d49e   4  move.l (e40,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d49eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe40u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D4A2:
    /* 0000d4a2   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0000d4a2u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0000d4a6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_D4A6:
    /* 0000d4a6   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000d4a6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_D4AA:
    /* 0000d4aa   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000d4aau);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_D4AE:
    /* 0000d4ae   6  cmpi.w #2e,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000d4aeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000002eu);

L_D4B4:
    /* 0000d4b4   2  blt 0000d45a */
    c->pc = RC_ADDR(0x0000d4b4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_D45A; }

L_D4B6:
    /* 0000d4b6   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000d4b6u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D4BA:
    /* 0000d4ba   4  jsr (ffff80ce,A4) */
    c->pc = RC_ADDR(0x0000d4bau);
    rc_step(c, m, 18);
    /* vector 34 */
    rc_push32(c, m, RC_ADDR(0x0000d4beu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bc4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_D4BE:
    /* 0000d4be   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000d4beu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_D4C0:
    /* 0000d4c0   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000d4c0u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D4C4:
    /* 0000d4c4   4  jsr (ffff80ce,A4) */
    c->pc = RC_ADDR(0x0000d4c4u);
    rc_step(c, m, 18);
    /* vector 34 */
    rc_push32(c, m, RC_ADDR(0x0000d4c8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bc4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_D4C8:
    /* 0000d4c8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000d4c8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_D4CA:
    /* 0000d4ca   4  tst.l (e40,A4) */
    c->pc = RC_ADDR(0x0000d4cau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe40u));
    rc_set_nzvc(c, t0, RC_L);

L_D4CE:
    /* 0000d4ce   2  beq 0000d4de */
    c->pc = RC_ADDR(0x0000d4ceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_D4DE;

L_D4D0:
    /* 0000d4d0   4  move.l (e52,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d4d0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe52u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D4D4:
    /* 0000d4d4   4  move.l (e40,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d4d4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe40u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D4D8:
    /* 0000d4d8   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0000d4d8u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0000d4dcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_D4DC:
    /* 0000d4dc   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000d4dcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_D4DE:
    /* 0000d4de   4  tst.l (e38,A4) */
    c->pc = RC_ADDR(0x0000d4deu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe38u));
    rc_set_nzvc(c, t0, RC_L);

L_D4E2:
    /* 0000d4e2   2  beq 0000d51c */
    c->pc = RC_ADDR(0x0000d4e2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_D51C;

L_D4E4:
    /* 0000d4e4   4  move.w #35,-(A7) */
    c->pc = RC_ADDR(0x0000d4e4u);
    rc_step(c, m, 12);
    t0 = 0x00000035u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D4E8:
    /* 0000d4e8   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000d4e8u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D4EC:
    /* 0000d4ec   4  move.l (e4a,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d4ecu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe4au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D4F0:
    /* 0000d4f0   4  move.w (e44,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d4f0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe44u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D4F4:
    /* 0000d4f4   4  move.l (e38,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d4f4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe38u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D4F8:
    /* 0000d4f8   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0000d4f8u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0000d4fcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_D4FC:
    /* 0000d4fc   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000d4fcu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_D500:
    /* 0000d500   4  move.w #35,-(A7) */
    c->pc = RC_ADDR(0x0000d500u);
    rc_step(c, m, 12);
    t0 = 0x00000035u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D504:
    /* 0000d504   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000d504u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D508:
    /* 0000d508   4  move.l (e4a,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d508u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe4au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D50C:
    /* 0000d50c   4  move.w (e44,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d50cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe44u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D510:
    /* 0000d510   4  move.l (e38,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d510u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe38u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D514:
    /* 0000d514   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0000d514u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0000d518u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_D518:
    /* 0000d518   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000d518u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_D51C:
    /* 0000d51c   4  bra 0000d39e */
    c->pc = RC_ADDR(0x0000d51cu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_D39E;

}
