/* fn_0000a3a2 - 162 byte(s), 51 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000a3a2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000a3a2u): goto L_A3A2;
    case RC_ADDR(0x0000a3a6u): goto L_A3A6;
    case RC_ADDR(0x0000a3acu): goto L_A3AC;
    case RC_ADDR(0x0000a3b0u): goto L_A3B0;
    case RC_ADDR(0x0000a3b2u): goto L_A3B2;
    case RC_ADDR(0x0000a3b6u): goto L_A3B6;
    case RC_ADDR(0x0000a3bau): goto L_A3BA;
    case RC_ADDR(0x0000a3beu): goto L_A3BE;
    case RC_ADDR(0x0000a3c0u): goto L_A3C0;
    case RC_ADDR(0x0000a3c4u): goto L_A3C4;
    case RC_ADDR(0x0000a3c6u): goto L_A3C6;
    case RC_ADDR(0x0000a3c8u): goto L_A3C8;
    case RC_ADDR(0x0000a3cau): goto L_A3CA;
    case RC_ADDR(0x0000a3ccu): goto L_A3CC;
    case RC_ADDR(0x0000a3d0u): goto L_A3D0;
    case RC_ADDR(0x0000a3d4u): goto L_A3D4;
    case RC_ADDR(0x0000a3d8u): goto L_A3D8;
    case RC_ADDR(0x0000a3dcu): goto L_A3DC;
    case RC_ADDR(0x0000a3deu): goto L_A3DE;
    case RC_ADDR(0x0000a3e0u): goto L_A3E0;
    case RC_ADDR(0x0000a3e2u): goto L_A3E2;
    case RC_ADDR(0x0000a3e6u): goto L_A3E6;
    case RC_ADDR(0x0000a3eau): goto L_A3EA;
    case RC_ADDR(0x0000a3eeu): goto L_A3EE;
    case RC_ADDR(0x0000a3f2u): goto L_A3F2;
    case RC_ADDR(0x0000a3f6u): goto L_A3F6;
    case RC_ADDR(0x0000a3f8u): goto L_A3F8;
    case RC_ADDR(0x0000a3fau): goto L_A3FA;
    case RC_ADDR(0x0000a3fcu): goto L_A3FC;
    case RC_ADDR(0x0000a400u): goto L_A400;
    case RC_ADDR(0x0000a404u): goto L_A404;
    case RC_ADDR(0x0000a408u): goto L_A408;
    case RC_ADDR(0x0000a40cu): goto L_A40C;
    case RC_ADDR(0x0000a410u): goto L_A410;
    case RC_ADDR(0x0000a414u): goto L_A414;
    case RC_ADDR(0x0000a416u): goto L_A416;
    case RC_ADDR(0x0000a418u): goto L_A418;
    case RC_ADDR(0x0000a41au): goto L_A41A;
    case RC_ADDR(0x0000a41eu): goto L_A41E;
    case RC_ADDR(0x0000a422u): goto L_A422;
    case RC_ADDR(0x0000a426u): goto L_A426;
    case RC_ADDR(0x0000a428u): goto L_A428;
    case RC_ADDR(0x0000a42au): goto L_A42A;
    case RC_ADDR(0x0000a42cu): goto L_A42C;
    case RC_ADDR(0x0000a42eu): goto L_A42E;
    case RC_ADDR(0x0000a432u): goto L_A432;
    case RC_ADDR(0x0000a436u): goto L_A436;
    case RC_ADDR(0x0000a43au): goto L_A43A;
    case RC_ADDR(0x0000a43eu): goto L_A43E;
    case RC_ADDR(0x0000a440u): goto L_A440;
    case RC_ADDR(0x0000a442u): goto L_A442;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_A3A2:
    /* 0000a3a2   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x0000a3a2u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_A3A6:
    /* 0000a3a6   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = RC_ADDR(0x0000a3a6u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_A3AC:
    /* 0000a3ac   4  tst.w (2e2,A4) */
    c->pc = RC_ADDR(0x0000a3acu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2e2u));
    rc_set_nzvc(c, t0, RC_W);

L_A3B0:
    /* 0000a3b0   2  beq 0000a428 */
    c->pc = RC_ADDR(0x0000a3b0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_A428;

L_A3B2:
    /* 0000a3b2   4  clr.w (2e2,A4) */
    c->pc = RC_ADDR(0x0000a3b2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x2e2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A3B6:
    /* 0000a3b6   4  pea (0000a444) */
    c->pc = RC_ADDR(0x0000a3b6u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000a444u));

L_A3BA:
    /* 0000a3ba   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x0000a3bau);
    rc_step(c, m, 18);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x0000a3beu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021caau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_A3BE:
    /* 0000a3be   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000a3beu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_A3C0:
    /* 0000a3c0   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000a3c0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_A3C4:
    /* 0000a3c4   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000a3c4u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_A3C6:
    /* 0000a3c6   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000a3c6u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_A3C8:
    /* 0000a3c8   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000a3c8u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_A3CA:
    /* 0000a3ca   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000a3cau);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A3CC:
    /* 0000a3cc   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000a3ccu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A3D0:
    /* 0000a3d0   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000a3d0u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A3D4:
    /* 0000a3d4   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x0000a3d4u);
    rc_step(c, m, 18);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x0000a3d8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_A3D8:
    /* 0000a3d8   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x0000a3d8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_A3DC:
    /* 0000a3dc   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000a3dcu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A3DE:
    /* 0000a3de   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000a3deu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_A3E0:
    /* 0000a3e0   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000a3e0u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_A3E2:
    /* 0000a3e2   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000a3e2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_A3E6:
    /* 0000a3e6   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000a3e6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A3EA:
    /* 0000a3ea   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000a3eau);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000a3eeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cceu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001fa02u);
    return;

L_A3EE:
    /* 0000a3ee   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000a3eeu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_A3F2:
    /* 0000a3f2   4  jsr (ffff81ee,A4) */
    c->pc = RC_ADDR(0x0000a3f2u);
    rc_step(c, m, 18);
    /* vector 82 */
    rc_push32(c, m, RC_ADDR(0x0000a3f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c44u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d1dau);
    return;

L_A3F6:
    /* 0000a3f6   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000a3f6u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A3F8:
    /* 0000a3f8   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000a3f8u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_A3FA:
    /* 0000a3fa   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000a3fau);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_A3FC:
    /* 0000a3fc   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000a3fcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_A400:
    /* 0000a400   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000a400u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A404:
    /* 0000a404   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000a404u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000a408u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cceu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001fa02u);
    return;

L_A408:
    /* 0000a408   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000a408u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_A40C:
    /* 0000a40c   4  move.w #d,-(A7) */
    c->pc = RC_ADDR(0x0000a40cu);
    rc_step(c, m, 12);
    t0 = 0x0000000du;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A410:
    /* 0000a410   4  move.w (ffff9312,A4),D0 */
    c->pc = RC_ADDR(0x0000a410u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x6ceeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A414:
    /* 0000a414   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x0000a414u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_A416:
    /* 0000a416   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000a416u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_A418:
    /* 0000a418   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000a418u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_A41A:
    /* 0000a41a   4  lea (ffff9314,A4),A0 */
    c->pc = RC_ADDR(0x0000a41au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6cecu);

L_A41E:
    /* 0000a41e   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000a41eu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A422:
    /* 0000a422   4  jsr (000050ca) */
    c->pc = RC_ADDR(0x0000a422u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000a426u));
    rc_depth++;
    c->pc = RC_ADDR(0x000050cau);
    return;

L_A426:
    /* 0000a426   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0000a426u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_A428:
    /* 0000a428   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000a428u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A42A:
    /* 0000a42a   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000a42au);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_A42C:
    /* 0000a42c   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000a42cu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_A42E:
    /* 0000a42e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000a42eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_A432:
    /* 0000a432   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000a432u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A436:
    /* 0000a436   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000a436u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000a43au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cceu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001fa02u);
    return;

L_A43A:
    /* 0000a43a   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000a43au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_A43E:
    /* 0000a43e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000a43eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_A440:
    /* 0000a440   2  unlk A5 */
    c->pc = RC_ADDR(0x0000a440u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_A442:
    /* 0000a442   2  rts */
    c->pc = RC_ADDR(0x0000a442u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
