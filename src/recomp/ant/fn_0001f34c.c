/* fn_0001f34c - 220 byte(s), 60 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001f34c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f34cu): goto L_1F34C;
    case RC_ADDR(0x0001f350u): goto L_1F350;
    case RC_ADDR(0x0001f356u): goto L_1F356;
    case RC_ADDR(0x0001f35au): goto L_1F35A;
    case RC_ADDR(0x0001f35cu): goto L_1F35C;
    case RC_ADDR(0x0001f360u): goto L_1F360;
    case RC_ADDR(0x0001f364u): goto L_1F364;
    case RC_ADDR(0x0001f366u): goto L_1F366;
    case RC_ADDR(0x0001f36au): goto L_1F36A;
    case RC_ADDR(0x0001f370u): goto L_1F370;
    case RC_ADDR(0x0001f374u): goto L_1F374;
    case RC_ADDR(0x0001f378u): goto L_1F378;
    case RC_ADDR(0x0001f37au): goto L_1F37A;
    case RC_ADDR(0x0001f380u): goto L_1F380;
    case RC_ADDR(0x0001f384u): goto L_1F384;
    case RC_ADDR(0x0001f386u): goto L_1F386;
    case RC_ADDR(0x0001f38au): goto L_1F38A;
    case RC_ADDR(0x0001f390u): goto L_1F390;
    case RC_ADDR(0x0001f394u): goto L_1F394;
    case RC_ADDR(0x0001f398u): goto L_1F398;
    case RC_ADDR(0x0001f39au): goto L_1F39A;
    case RC_ADDR(0x0001f39eu): goto L_1F39E;
    case RC_ADDR(0x0001f3a0u): goto L_1F3A0;
    case RC_ADDR(0x0001f3a2u): goto L_1F3A2;
    case RC_ADDR(0x0001f3a4u): goto L_1F3A4;
    case RC_ADDR(0x0001f3a6u): goto L_1F3A6;
    case RC_ADDR(0x0001f3aau): goto L_1F3AA;
    case RC_ADDR(0x0001f3acu): goto L_1F3AC;
    case RC_ADDR(0x0001f3aeu): goto L_1F3AE;
    case RC_ADDR(0x0001f3b2u): goto L_1F3B2;
    case RC_ADDR(0x0001f3b6u): goto L_1F3B6;
    case RC_ADDR(0x0001f3bau): goto L_1F3BA;
    case RC_ADDR(0x0001f3beu): goto L_1F3BE;
    case RC_ADDR(0x0001f3c4u): goto L_1F3C4;
    case RC_ADDR(0x0001f3c8u): goto L_1F3C8;
    case RC_ADDR(0x0001f3ccu): goto L_1F3CC;
    case RC_ADDR(0x0001f3d2u): goto L_1F3D2;
    case RC_ADDR(0x0001f3d8u): goto L_1F3D8;
    case RC_ADDR(0x0001f3deu): goto L_1F3DE;
    case RC_ADDR(0x0001f3e2u): goto L_1F3E2;
    case RC_ADDR(0x0001f3e8u): goto L_1F3E8;
    case RC_ADDR(0x0001f3ecu): goto L_1F3EC;
    case RC_ADDR(0x0001f3f0u): goto L_1F3F0;
    case RC_ADDR(0x0001f3f2u): goto L_1F3F2;
    case RC_ADDR(0x0001f3f4u): goto L_1F3F4;
    case RC_ADDR(0x0001f3f8u): goto L_1F3F8;
    case RC_ADDR(0x0001f3fcu): goto L_1F3FC;
    case RC_ADDR(0x0001f3feu): goto L_1F3FE;
    case RC_ADDR(0x0001f402u): goto L_1F402;
    case RC_ADDR(0x0001f404u): goto L_1F404;
    case RC_ADDR(0x0001f406u): goto L_1F406;
    case RC_ADDR(0x0001f40au): goto L_1F40A;
    case RC_ADDR(0x0001f40cu): goto L_1F40C;
    case RC_ADDR(0x0001f410u): goto L_1F410;
    case RC_ADDR(0x0001f414u): goto L_1F414;
    case RC_ADDR(0x0001f416u): goto L_1F416;
    case RC_ADDR(0x0001f41au): goto L_1F41A;
    case RC_ADDR(0x0001f41eu): goto L_1F41E;
    case RC_ADDR(0x0001f420u): goto L_1F420;
    case RC_ADDR(0x0001f424u): goto L_1F424;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F34C:
    /* 0001f34c   4  link.w A5,#fffffff2 */
    c->pc = RC_ADDR(0x0001f34cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xeu;

L_1F350:
    /* 0001f350   6  move.l (ffffd29c,A4),(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001f350u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d64u));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F356:
    /* 0001f356   4  tst.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x0001f356u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_1F35A:
    /* 0001f35a   2  beq 0001f37a */
    c->pc = RC_ADDR(0x0001f35au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F37A;

L_1F35C:
    /* 0001f35c   4  move.l (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f35cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F360:
    /* 0001f360   4  jsr (ffff8230,A4) */
    c->pc = RC_ADDR(0x0001f360u);
    rc_step(c, m, 18);
    /* vector 93 */
    rc_push32(c, m, RC_ADDR(0x0001f364u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d26u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f6ccu);
    return;

L_1F364:
    /* 0001f364   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f364u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F366:
    /* 0001f366   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x0001f366u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_1F36A:
    /* 0001f36a   6  andi.w #fffd,(a,A0) */
    c->pc = RC_ADDR(0x0001f36au);
    rc_step(c, m, 20);
    t3 = (c->a[0] + 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 & 0x0000fffdu;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1F370:
    /* 0001f370   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x0001f370u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_1F374:
    /* 0001f374   4  move.l (A0),(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001f374u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F378:
    /* 0001f378   2  bra 0001f356 */
    c->pc = RC_ADDR(0x0001f378u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F356;

L_1F37A:
    /* 0001f37a   6  move.l (ffffd46a,A4),(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001f37au);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2b96u));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F380:
    /* 0001f380   4  tst.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x0001f380u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_1F384:
    /* 0001f384   2  beq 0001f39a */
    c->pc = RC_ADDR(0x0001f384u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F39A;

L_1F386:
    /* 0001f386   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x0001f386u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_1F38A:
    /* 0001f38a   6  andi.w #fffd,(a,A0) */
    c->pc = RC_ADDR(0x0001f38au);
    rc_step(c, m, 20);
    t3 = (c->a[0] + 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 & 0x0000fffdu;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1F390:
    /* 0001f390   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x0001f390u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_1F394:
    /* 0001f394   4  move.l (A0),(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001f394u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F398:
    /* 0001f398   2  bra 0001f380 */
    c->pc = RC_ADDR(0x0001f398u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F380;

L_1F39A:
    /* 0001f39a   4  jsr (0001f090) */
    c->pc = RC_ADDR(0x0001f39au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f39eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f090u);
    return;

L_1F39E:
    /* 0001f39e   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001f39eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1F3A0:
    /* 0001f3a0   2  bne 0001f3a6 */
    c->pc = RC_ADDR(0x0001f3a0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F3A6;

L_1F3A2:
    /* 0001f3a2   2  unlk A5 */
    c->pc = RC_ADDR(0x0001f3a2u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F3A4:
    /* 0001f3a4   2  rts */
    c->pc = RC_ADDR(0x0001f3a4u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1F3A6:
    /* 0001f3a6   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001f3a6u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F3AA:
    /* 0001f3aa   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0001f3aau);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F3AC:
    /* 0001f3ac   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0001f3acu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F3AE:
    /* 0001f3ae   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f3aeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F3B2:
    /* 0001f3b2   4  pea (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001f3b2u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x4u));

L_1F3B6:
    /* 0001f3b6   4  jsr (0001fd4c) */
    c->pc = RC_ADDR(0x0001f3b6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f3bau));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fd4cu);
    return;

L_1F3BA:
    /* 0001f3ba   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001f3bau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1F3BE:
    /* 0001f3be   6  move.w (ffffd28a,A4),(30e4,A4) */
    c->pc = RC_ADDR(0x0001f3beu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d76u));
    rc_wr16(c, m, (c->a[4] + 0x30e4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F3C4:
    /* 0001f3c4   4  clr.l (30e6,A4) */
    c->pc = RC_ADDR(0x0001f3c4u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x30e6u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F3C8:
    /* 0001f3c8   4  jsr (0001f83c) */
    c->pc = RC_ADDR(0x0001f3c8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f3ccu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f83cu);
    return;

L_1F3CC:
    /* 0001f3cc   6  move.w #1,(30ea,A4) */
    c->pc = RC_ADDR(0x0001f3ccu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x30eau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F3D2:
    /* 0001f3d2   6  move.w #1,(30ec,A4) */
    c->pc = RC_ADDR(0x0001f3d2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x30ecu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F3D8:
    /* 0001f3d8   6  move.w #1,(30ee,A4) */
    c->pc = RC_ADDR(0x0001f3d8u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x30eeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F3DE:
    /* 0001f3de   4  clr.b (ffffd2b6,A4) */
    c->pc = RC_ADDR(0x0001f3deu);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[4] - 0x2d4au), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_1F3E2:
    /* 0001f3e2   6  move.w (30ec,A4),(30ee,A4) */
    c->pc = RC_ADDR(0x0001f3e2u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x30ecu));
    rc_wr16(c, m, (c->a[4] + 0x30eeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F3E8:
    /* 0001f3e8   4  clr.w (fffffff2,A5) */
    c->pc = RC_ADDR(0x0001f3e8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F3EC:
    /* 0001f3ec   4  move.w (fffffff2,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f3ecu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F3F0:
    /* 0001f3f0   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001f3f0u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F3F2:
    /* 0001f3f2   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001f3f2u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F3F4:
    /* 0001f3f4   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f3f4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F3F8:
    /* 0001f3f8   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x0001f3f8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1F3FC:
    /* 0001f3fc   2  jsr (A0) */
    c->pc = RC_ADDR(0x0001f3fcu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001f3feu));
    rc_depth++;
    t3 = c->a[0];
    c->pc = t3;
    return;

L_1F3FE:
    /* 0001f3fe   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001f3feu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_1F402:
    /* 0001f402   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001f402u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1F404:
    /* 0001f404   2  bne 0001f416 */
    c->pc = RC_ADDR(0x0001f404u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F416;

L_1F406:
    /* 0001f406   4  tst.w (fffffff2,A5) */
    c->pc = RC_ADDR(0x0001f406u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_set_nzvc(c, t0, RC_W);

L_1F40A:
    /* 0001f40a   2  bne 0001f410 */
    c->pc = RC_ADDR(0x0001f40au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F410;

L_1F40C:
    /* 0001f40c   4  jsr (0001f260) */
    c->pc = RC_ADDR(0x0001f40cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f410u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f260u);
    return;

L_1F410:
    /* 0001f410   4  addq.l #1,(30e6,A4) */
    c->pc = RC_ADDR(0x0001f410u);
    rc_step(c, m, 24);
    t3 = (c->a[4] + 0x30e6u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1F414:
    /* 0001f414   2  bra 0001f3de */
    c->pc = RC_ADDR(0x0001f414u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F3DE;

L_1F416:
    /* 0001f416   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f416u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F41A:
    /* 0001f41a   4  jsr (0001fede) */
    c->pc = RC_ADDR(0x0001f41au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f41eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fedeu);
    return;

L_1F41E:
    /* 0001f41e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f41eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F420:
    /* 0001f420   4  jsr (0001f2b8) */
    c->pc = RC_ADDR(0x0001f420u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f424u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2b8u);
    return;

L_1F424:
    /* 0001f424   4  bra 0001f3a2 */
    c->pc = RC_ADDR(0x0001f424u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F3A2;

}
