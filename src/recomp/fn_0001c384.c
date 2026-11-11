/* fn_0001c384 - 244 byte(s), 66 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001c384(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001c384u): goto L_1C384;
    case RC_ADDR(0x0001c388u): goto L_1C388;
    case RC_ADDR(0x0001c38eu): goto L_1C38E;
    case RC_ADDR(0x0001c394u): goto L_1C394;
    case RC_ADDR(0x0001c39au): goto L_1C39A;
    case RC_ADDR(0x0001c3a0u): goto L_1C3A0;
    case RC_ADDR(0x0001c3a6u): goto L_1C3A6;
    case RC_ADDR(0x0001c3aau): goto L_1C3AA;
    case RC_ADDR(0x0001c3acu): goto L_1C3AC;
    case RC_ADDR(0x0001c3b0u): goto L_1C3B0;
    case RC_ADDR(0x0001c3b2u): goto L_1C3B2;
    case RC_ADDR(0x0001c3b4u): goto L_1C3B4;
    case RC_ADDR(0x0001c3b8u): goto L_1C3B8;
    case RC_ADDR(0x0001c3bau): goto L_1C3BA;
    case RC_ADDR(0x0001c3beu): goto L_1C3BE;
    case RC_ADDR(0x0001c3c0u): goto L_1C3C0;
    case RC_ADDR(0x0001c3c4u): goto L_1C3C4;
    case RC_ADDR(0x0001c3cau): goto L_1C3CA;
    case RC_ADDR(0x0001c3ccu): goto L_1C3CC;
    case RC_ADDR(0x0001c3d0u): goto L_1C3D0;
    case RC_ADDR(0x0001c3d2u): goto L_1C3D2;
    case RC_ADDR(0x0001c3d4u): goto L_1C3D4;
    case RC_ADDR(0x0001c3d8u): goto L_1C3D8;
    case RC_ADDR(0x0001c3dau): goto L_1C3DA;
    case RC_ADDR(0x0001c3deu): goto L_1C3DE;
    case RC_ADDR(0x0001c3e0u): goto L_1C3E0;
    case RC_ADDR(0x0001c3e4u): goto L_1C3E4;
    case RC_ADDR(0x0001c3eau): goto L_1C3EA;
    case RC_ADDR(0x0001c3ecu): goto L_1C3EC;
    case RC_ADDR(0x0001c3f0u): goto L_1C3F0;
    case RC_ADDR(0x0001c3f2u): goto L_1C3F2;
    case RC_ADDR(0x0001c3f6u): goto L_1C3F6;
    case RC_ADDR(0x0001c3f8u): goto L_1C3F8;
    case RC_ADDR(0x0001c3fcu): goto L_1C3FC;
    case RC_ADDR(0x0001c3feu): goto L_1C3FE;
    case RC_ADDR(0x0001c402u): goto L_1C402;
    case RC_ADDR(0x0001c408u): goto L_1C408;
    case RC_ADDR(0x0001c40cu): goto L_1C40C;
    case RC_ADDR(0x0001c412u): goto L_1C412;
    case RC_ADDR(0x0001c414u): goto L_1C414;
    case RC_ADDR(0x0001c418u): goto L_1C418;
    case RC_ADDR(0x0001c41cu): goto L_1C41C;
    case RC_ADDR(0x0001c41eu): goto L_1C41E;
    case RC_ADDR(0x0001c422u): goto L_1C422;
    case RC_ADDR(0x0001c426u): goto L_1C426;
    case RC_ADDR(0x0001c42au): goto L_1C42A;
    case RC_ADDR(0x0001c42eu): goto L_1C42E;
    case RC_ADDR(0x0001c432u): goto L_1C432;
    case RC_ADDR(0x0001c436u): goto L_1C436;
    case RC_ADDR(0x0001c43au): goto L_1C43A;
    case RC_ADDR(0x0001c43eu): goto L_1C43E;
    case RC_ADDR(0x0001c442u): goto L_1C442;
    case RC_ADDR(0x0001c448u): goto L_1C448;
    case RC_ADDR(0x0001c44cu): goto L_1C44C;
    case RC_ADDR(0x0001c450u): goto L_1C450;
    case RC_ADDR(0x0001c452u): goto L_1C452;
    case RC_ADDR(0x0001c456u): goto L_1C456;
    case RC_ADDR(0x0001c45au): goto L_1C45A;
    case RC_ADDR(0x0001c45eu): goto L_1C45E;
    case RC_ADDR(0x0001c462u): goto L_1C462;
    case RC_ADDR(0x0001c466u): goto L_1C466;
    case RC_ADDR(0x0001c46au): goto L_1C46A;
    case RC_ADDR(0x0001c46eu): goto L_1C46E;
    case RC_ADDR(0x0001c472u): goto L_1C472;
    case RC_ADDR(0x0001c474u): goto L_1C474;
    case RC_ADDR(0x0001c476u): goto L_1C476;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1C384:
    /* 0001c384   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0001c384u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1C388:
    /* 0001c388   6  move.w #2e,(fffff2ce,A4) */
    c->pc = RC_ADDR(0x0001c388u);
    rc_step(c, m, 16);
    t0 = 0x0000002eu;
    rc_wr16(c, m, (c->a[4] - 0xd32u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C38E:
    /* 0001c38e   6  move.w #70,(fffff2d0,A4) */
    c->pc = RC_ADDR(0x0001c38eu);
    rc_step(c, m, 16);
    t0 = 0x00000070u;
    rc_wr16(c, m, (c->a[4] - 0xd30u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C394:
    /* 0001c394   6  move.w (fffff2ce,A4),(229a,A4) */
    c->pc = RC_ADDR(0x0001c394u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd32u));
    rc_wr16(c, m, (c->a[4] + 0x229au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C39A:
    /* 0001c39a   6  move.w (fffff2d0,A4),(229c,A4) */
    c->pc = RC_ADDR(0x0001c39au);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd30u));
    rc_wr16(c, m, (c->a[4] + 0x229cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C3A0:
    /* 0001c3a0   6  move.b #5,(229f,A4) */
    c->pc = RC_ADDR(0x0001c3a0u);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr8(c, m, (c->a[4] + 0x229fu), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1C3A6:
    /* 0001c3a6   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001c3a6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C3AA:
    /* 0001c3aa   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001c3aau);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1C3AC:
    /* 0001c3ac   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001c3acu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C3B0:
    /* 0001c3b0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001c3b0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1C3B2:
    /* 0001c3b2   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0001c3b2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1C3B4:
    /* 0001c3b4   4  adda.l (ffffcbb8,A4),A0 */
    c->pc = RC_ADDR(0x0001c3b4u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3448u));
    c->a[0] += t0;

L_1C3B8:
    /* 0001c3b8   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001c3b8u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1C3BA:
    /* 0001c3ba   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001c3bau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C3BE:
    /* 0001c3be   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001c3beu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1C3C0:
    /* 0001c3c0   4  lea (fffff326,A4),A1 */
    c->pc = RC_ADDR(0x0001c3c0u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0xcdau);

L_1C3C4:
    /* 0001c3c4   6  move.l (8,A0),(0,A1,D0.w) */
    c->pc = RC_ADDR(0x0001c3c4u);
    rc_step(c, m, 30);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C3CA:
    /* 0001c3ca   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001c3cau);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1C3CC:
    /* 0001c3cc   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001c3ccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C3D0:
    /* 0001c3d0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001c3d0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1C3D2:
    /* 0001c3d2   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0001c3d2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1C3D4:
    /* 0001c3d4   4  adda.l (ffffcbbc,A4),A0 */
    c->pc = RC_ADDR(0x0001c3d4u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    c->a[0] += t0;

L_1C3D8:
    /* 0001c3d8   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001c3d8u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1C3DA:
    /* 0001c3da   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001c3dau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C3DE:
    /* 0001c3de   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001c3deu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1C3E0:
    /* 0001c3e0   4  lea (fffff33a,A4),A1 */
    c->pc = RC_ADDR(0x0001c3e0u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0xcc6u);

L_1C3E4:
    /* 0001c3e4   6  move.l (8,A0),(0,A1,D0.w) */
    c->pc = RC_ADDR(0x0001c3e4u);
    rc_step(c, m, 30);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C3EA:
    /* 0001c3ea   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001c3eau);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1C3EC:
    /* 0001c3ec   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001c3ecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C3F0:
    /* 0001c3f0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001c3f0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1C3F2:
    /* 0001c3f2   4  lea (fffff326,A4),A0 */
    c->pc = RC_ADDR(0x0001c3f2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xcdau);

L_1C3F6:
    /* 0001c3f6   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0001c3f6u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1C3F8:
    /* 0001c3f8   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001c3f8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C3FC:
    /* 0001c3fc   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0001c3fcu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_1C3FE:
    /* 0001c3fe   4  lea (22a2,A4),A1 */
    c->pc = RC_ADDR(0x0001c3feu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x22a2u);

L_1C402:
    /* 0001c402   6  move.l (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c402u);
    rc_step(c, m, 32);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C408:
    /* 0001c408   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001c408u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C40C:
    /* 0001c40c   6  cmpi.w #5,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001c40cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_1C412:
    /* 0001c412   2  bcs 0001c3aa */
    c->pc = RC_ADDR(0x0001c412u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1C3AA; }

L_1C414:
    /* 0001c414   4  pea (23b2,A4) */
    c->pc = RC_ADDR(0x0001c414u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x23b2u));

L_1C418:
    /* 0001c418   4  jsr (ffff836e,A4) */
    c->pc = RC_ADDR(0x0001c418u);
    rc_step(c, m, 18);
    /* vector 146 */
    rc_push32(c, m, RC_ADDR(0x0001c41cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021dc4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021862u);
    return;

L_1C41C:
    /* 0001c41c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001c41cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1C41E:
    /* 0001c41e   4  lea (229a,A4),A0 */
    c->pc = RC_ADDR(0x0001c41eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x229au);

L_1C422:
    /* 0001c422   4  move.l A0,(23b6,A4) */
    c->pc = RC_ADDR(0x0001c422u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x23b6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C426:
    /* 0001c426   4  pea (00000064).l */
    c->pc = RC_ADDR(0x0001c426u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000064u);

L_1C42A:
    /* 0001c42a   4  pea (2436,A4) */
    c->pc = RC_ADDR(0x0001c42au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2436u));

L_1C42E:
    /* 0001c42e   4  pea (2416,A4) */
    c->pc = RC_ADDR(0x0001c42eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2416u));

L_1C432:
    /* 0001c432   4  jsr (0002183e) */
    c->pc = RC_ADDR(0x0001c432u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001c436u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002183eu);
    return;

L_1C436:
    /* 0001c436   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001c436u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1C43A:
    /* 0001c43a   4  lea (2416,A4),A0 */
    c->pc = RC_ADDR(0x0001c43au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2416u);

L_1C43E:
    /* 0001c43e   4  move.l A0,(23c2,A4) */
    c->pc = RC_ADDR(0x0001c43eu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x23c2u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C442:
    /* 0001c442   6  pea (00010002).l */
    c->pc = RC_ADDR(0x0001c442u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010002u);

L_1C448:
    /* 0001c448   4  pea (00001420).l */
    c->pc = RC_ADDR(0x0001c448u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00001420u);

L_1C44C:
    /* 0001c44c   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0001c44cu);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0001c450u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d8eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002168cu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021690u);
    return;

L_1C450:
    /* 0001c450   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001c450u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1C452:
    /* 0001c452   4  move.l D0,(262a,A4) */
    c->pc = RC_ADDR(0x0001c452u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x262au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C456:
    /* 0001c456   4  pea (00001420).l */
    c->pc = RC_ADDR(0x0001c456u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00001420u);

L_1C45A:
    /* 0001c45a   4  move.l (262a,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c45au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x262au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C45E:
    /* 0001c45e   4  pea (242e,A4) */
    c->pc = RC_ADDR(0x0001c45eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x242eu));

L_1C462:
    /* 0001c462   4  jsr (0002186e) */
    c->pc = RC_ADDR(0x0001c462u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001c466u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002186eu);
    return;

L_1C466:
    /* 0001c466   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001c466u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1C46A:
    /* 0001c46a   4  lea (242e,A4),A0 */
    c->pc = RC_ADDR(0x0001c46au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x242eu);

L_1C46E:
    /* 0001c46e   4  move.l A0,(23be,A4) */
    c->pc = RC_ADDR(0x0001c46eu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x23beu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C472:
    /* 0001c472   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001c472u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1C474:
    /* 0001c474   2  unlk A5 */
    c->pc = RC_ADDR(0x0001c474u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1C476:
    /* 0001c476   2  rts */
    c->pc = RC_ADDR(0x0001c476u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
