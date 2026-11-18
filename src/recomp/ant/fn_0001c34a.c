/* fn_0001c34a - 274 byte(s), 96 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001c34a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001c34au): goto L_1C34A;
    case RC_ADDR(0x0001c34eu): goto L_1C34E;
    case RC_ADDR(0x0001c352u): goto L_1C352;
    case RC_ADDR(0x0001c354u): goto L_1C354;
    case RC_ADDR(0x0001c356u): goto L_1C356;
    case RC_ADDR(0x0001c35au): goto L_1C35A;
    case RC_ADDR(0x0001c35eu): goto L_1C35E;
    case RC_ADDR(0x0001c362u): goto L_1C362;
    case RC_ADDR(0x0001c366u): goto L_1C366;
    case RC_ADDR(0x0001c368u): goto L_1C368;
    case RC_ADDR(0x0001c36au): goto L_1C36A;
    case RC_ADDR(0x0001c36eu): goto L_1C36E;
    case RC_ADDR(0x0001c370u): goto L_1C370;
    case RC_ADDR(0x0001c374u): goto L_1C374;
    case RC_ADDR(0x0001c37au): goto L_1C37A;
    case RC_ADDR(0x0001c37cu): goto L_1C37C;
    case RC_ADDR(0x0001c37eu): goto L_1C37E;
    case RC_ADDR(0x0001c382u): goto L_1C382;
    case RC_ADDR(0x0001c384u): goto L_1C384;
    case RC_ADDR(0x0001c388u): goto L_1C388;
    case RC_ADDR(0x0001c38eu): goto L_1C38E;
    case RC_ADDR(0x0001c390u): goto L_1C390;
    case RC_ADDR(0x0001c392u): goto L_1C392;
    case RC_ADDR(0x0001c398u): goto L_1C398;
    case RC_ADDR(0x0001c39au): goto L_1C39A;
    case RC_ADDR(0x0001c39cu): goto L_1C39C;
    case RC_ADDR(0x0001c3a0u): goto L_1C3A0;
    case RC_ADDR(0x0001c3a4u): goto L_1C3A4;
    case RC_ADDR(0x0001c3a6u): goto L_1C3A6;
    case RC_ADDR(0x0001c3a8u): goto L_1C3A8;
    case RC_ADDR(0x0001c3aau): goto L_1C3AA;
    case RC_ADDR(0x0001c3acu): goto L_1C3AC;
    case RC_ADDR(0x0001c3aeu): goto L_1C3AE;
    case RC_ADDR(0x0001c3b2u): goto L_1C3B2;
    case RC_ADDR(0x0001c3b6u): goto L_1C3B6;
    case RC_ADDR(0x0001c3b8u): goto L_1C3B8;
    case RC_ADDR(0x0001c3bau): goto L_1C3BA;
    case RC_ADDR(0x0001c3beu): goto L_1C3BE;
    case RC_ADDR(0x0001c3c0u): goto L_1C3C0;
    case RC_ADDR(0x0001c3c2u): goto L_1C3C2;
    case RC_ADDR(0x0001c3c4u): goto L_1C3C4;
    case RC_ADDR(0x0001c3c8u): goto L_1C3C8;
    case RC_ADDR(0x0001c3cau): goto L_1C3CA;
    case RC_ADDR(0x0001c3ceu): goto L_1C3CE;
    case RC_ADDR(0x0001c3d0u): goto L_1C3D0;
    case RC_ADDR(0x0001c3d2u): goto L_1C3D2;
    case RC_ADDR(0x0001c3d4u): goto L_1C3D4;
    case RC_ADDR(0x0001c3d6u): goto L_1C3D6;
    case RC_ADDR(0x0001c3d8u): goto L_1C3D8;
    case RC_ADDR(0x0001c3dau): goto L_1C3DA;
    case RC_ADDR(0x0001c3e0u): goto L_1C3E0;
    case RC_ADDR(0x0001c3e2u): goto L_1C3E2;
    case RC_ADDR(0x0001c3e4u): goto L_1C3E4;
    case RC_ADDR(0x0001c3e6u): goto L_1C3E6;
    case RC_ADDR(0x0001c3e8u): goto L_1C3E8;
    case RC_ADDR(0x0001c3eau): goto L_1C3EA;
    case RC_ADDR(0x0001c3eeu): goto L_1C3EE;
    case RC_ADDR(0x0001c3f2u): goto L_1C3F2;
    case RC_ADDR(0x0001c3f4u): goto L_1C3F4;
    case RC_ADDR(0x0001c3f6u): goto L_1C3F6;
    case RC_ADDR(0x0001c3f8u): goto L_1C3F8;
    case RC_ADDR(0x0001c3fau): goto L_1C3FA;
    case RC_ADDR(0x0001c3feu): goto L_1C3FE;
    case RC_ADDR(0x0001c400u): goto L_1C400;
    case RC_ADDR(0x0001c402u): goto L_1C402;
    case RC_ADDR(0x0001c404u): goto L_1C404;
    case RC_ADDR(0x0001c406u): goto L_1C406;
    case RC_ADDR(0x0001c40au): goto L_1C40A;
    case RC_ADDR(0x0001c40eu): goto L_1C40E;
    case RC_ADDR(0x0001c410u): goto L_1C410;
    case RC_ADDR(0x0001c412u): goto L_1C412;
    case RC_ADDR(0x0001c416u): goto L_1C416;
    case RC_ADDR(0x0001c418u): goto L_1C418;
    case RC_ADDR(0x0001c41cu): goto L_1C41C;
    case RC_ADDR(0x0001c41eu): goto L_1C41E;
    case RC_ADDR(0x0001c420u): goto L_1C420;
    case RC_ADDR(0x0001c422u): goto L_1C422;
    case RC_ADDR(0x0001c424u): goto L_1C424;
    case RC_ADDR(0x0001c426u): goto L_1C426;
    case RC_ADDR(0x0001c42cu): goto L_1C42C;
    case RC_ADDR(0x0001c42eu): goto L_1C42E;
    case RC_ADDR(0x0001c430u): goto L_1C430;
    case RC_ADDR(0x0001c432u): goto L_1C432;
    case RC_ADDR(0x0001c436u): goto L_1C436;
    case RC_ADDR(0x0001c43au): goto L_1C43A;
    case RC_ADDR(0x0001c43cu): goto L_1C43C;
    case RC_ADDR(0x0001c440u): goto L_1C440;
    case RC_ADDR(0x0001c444u): goto L_1C444;
    case RC_ADDR(0x0001c448u): goto L_1C448;
    case RC_ADDR(0x0001c44au): goto L_1C44A;
    case RC_ADDR(0x0001c44cu): goto L_1C44C;
    case RC_ADDR(0x0001c44eu): goto L_1C44E;
    case RC_ADDR(0x0001c450u): goto L_1C450;
    case RC_ADDR(0x0001c454u): goto L_1C454;
    case RC_ADDR(0x0001c458u): goto L_1C458;
    case RC_ADDR(0x0001c45au): goto L_1C45A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1C34A:
    /* 0001c34a   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x0001c34au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_1C34E:
    /* 0001c34e   4  movem.l { A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001c34eu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1C352:
    /* 0001c352   2  moveq #1,D7 */
    c->pc = RC_ADDR(0x0001c352u);
    rc_step(c, m, 4);
    c->d[7] = 0x00000001u;
    rc_set_nzvc(c, c->d[7], RC_L);

L_1C354:
    /* 0001c354   2  moveq #0,D5 */
    c->pc = RC_ADDR(0x0001c354u);
    rc_step(c, m, 4);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_1C356:
    /* 0001c356   4  lea (fffffff6,A5),A0 */
    c->pc = RC_ADDR(0x0001c356u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0xau);

L_1C35A:
    /* 0001c35a   4  clr.b (0,A0,D5.w) */
    c->pc = RC_ADDR(0x0001c35au);
    rc_step(c, m, 18);
    t4 = c->d[5];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_1C35E:
    /* 0001c35e   4  lea (fffffffb,A5),A0 */
    c->pc = RC_ADDR(0x0001c35eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x5u);

L_1C362:
    /* 0001c362   4  clr.b (0,A0,D5.w) */
    c->pc = RC_ADDR(0x0001c362u);
    rc_step(c, m, 18);
    t4 = c->d[5];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_1C366:
    /* 0001c366   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001c366u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1C368:
    /* 0001c368   2  move.b D7,D0 */
    c->pc = RC_ADDR(0x0001c368u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_B);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1C36A:
    /* 0001c36a   4  and.w (c,A5),D0 */
    c->pc = RC_ADDR(0x0001c36au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1C36E:
    /* 0001c36e   2  beq 0001c37a */
    c->pc = RC_ADDR(0x0001c36eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1C37A;

L_1C370:
    /* 0001c370   4  lea (fffffffb,A5),A0 */
    c->pc = RC_ADDR(0x0001c370u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x5u);

L_1C374:
    /* 0001c374   6  move.b #ff,(0,A0,D5.w) */
    c->pc = RC_ADDR(0x0001c374u);
    rc_step(c, m, 18);
    t0 = 0x000000ffu;
    t4 = c->d[5];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1C37A:
    /* 0001c37a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001c37au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1C37C:
    /* 0001c37c   2  move.b D7,D0 */
    c->pc = RC_ADDR(0x0001c37cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_B);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1C37E:
    /* 0001c37e   4  and.w (e,A5),D0 */
    c->pc = RC_ADDR(0x0001c37eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1C382:
    /* 0001c382   2  beq 0001c38e */
    c->pc = RC_ADDR(0x0001c382u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1C38E;

L_1C384:
    /* 0001c384   4  lea (fffffff6,A5),A0 */
    c->pc = RC_ADDR(0x0001c384u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0xau);

L_1C388:
    /* 0001c388   6  move.b #ff,(0,A0,D5.w) */
    c->pc = RC_ADDR(0x0001c388u);
    rc_step(c, m, 18);
    t0 = 0x000000ffu;
    t4 = c->d[5];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1C38E:
    /* 0001c38e   2  asl.b #1,D7 */
    c->pc = RC_ADDR(0x0001c38eu);
    rc_step(c, m, 6);
    rc_d_set(c, 7, RC_B, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 7, RC_B), RC_B));

L_1C390:
    /* 0001c390   2  addq.l #1,D5 */
    c->pc = RC_ADDR(0x0001c390u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_1C392:
    /* 0001c392   6  cmp.l #5,D5 */
    c->pc = RC_ADDR(0x0001c392u);
    rc_step(c, m, 14);
    t0 = 0x00000005u;
    t1 = rc_d_get(c, 5, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1C398:
    /* 0001c398   2  blt 0001c356 */
    c->pc = RC_ADDR(0x0001c398u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1C356; }

L_1C39A:
    /* 0001c39a   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0001c39au);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1C39C:
    /* 0001c39c   4  bra 0001c43c */
    c->pc = RC_ADDR(0x0001c39cu);
    rc_step(c, m, 10);
    goto L_1C43C;

L_1C3A0:
    /* 0001c3a0   4  move.b #80,D7 */
    c->pc = RC_ADDR(0x0001c3a0u);
    rc_step(c, m, 8);
    t0 = 0x00000080u;
    rc_d_set(c, 7, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1C3A4:
    /* 0001c3a4   2  moveq #0,D6 */
    c->pc = RC_ADDR(0x0001c3a4u);
    rc_step(c, m, 4);
    c->d[6] = 0x00000000u;
    rc_set_nzvc(c, c->d[6], RC_L);

L_1C3A6:
    /* 0001c3a6   2  moveq #0,D5 */
    c->pc = RC_ADDR(0x0001c3a6u);
    rc_step(c, m, 4);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_1C3A8:
    /* 0001c3a8   2  move.l D5,D0 */
    c->pc = RC_ADDR(0x0001c3a8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C3AA:
    /* 0001c3aa   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001c3aau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1C3AC:
    /* 0001c3ac   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0001c3acu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1C3AE:
    /* 0001c3ae   4  adda.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001c3aeu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] += t0;

L_1C3B2:
    /* 0001c3b2   4  move.l (8,A0),D0 */
    c->pc = RC_ADDR(0x0001c3b2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C3B6:
    /* 0001c3b6   2  movea.l D4,A0 */
    c->pc = RC_ADDR(0x0001c3b6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[0] = t0;

L_1C3B8:
    /* 0001c3b8   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0001c3b8u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1C3BA:
    /* 0001c3ba   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001c3bau);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1C3BE:
    /* 0001c3be   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001c3beu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1C3C0:
    /* 0001c3c0   2  move.b D7,D0 */
    c->pc = RC_ADDR(0x0001c3c0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_B);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1C3C2:
    /* 0001c3c2   2  and.w D0,D1 */
    c->pc = RC_ADDR(0x0001c3c2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t2 = t0 & rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 1, RC_W, t2);

L_1C3C4:
    /* 0001c3c4   4  lea (fffffffb,A5),A0 */
    c->pc = RC_ADDR(0x0001c3c4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x5u);

L_1C3C8:
    /* 0001c3c8   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001c3c8u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1C3CA:
    /* 0001c3ca   4  move.b (0,A0,D5.w),D0 */
    c->pc = RC_ADDR(0x0001c3cau);
    rc_step(c, m, 14);
    t4 = c->d[5];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1C3CE:
    /* 0001c3ce   2  moveq #0,D2 */
    c->pc = RC_ADDR(0x0001c3ceu);
    rc_step(c, m, 4);
    c->d[2] = 0x00000000u;
    rc_set_nzvc(c, c->d[2], RC_L);

L_1C3D0:
    /* 0001c3d0   2  move.b D7,D2 */
    c->pc = RC_ADDR(0x0001c3d0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_B);
    rc_d_set(c, 2, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1C3D2:
    /* 0001c3d2   2  and.w D2,D0 */
    c->pc = RC_ADDR(0x0001c3d2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1C3D4:
    /* 0001c3d4   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x0001c3d4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1C3D6:
    /* 0001c3d6   2  bne 0001c42e */
    c->pc = RC_ADDR(0x0001c3d6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1C42E;

L_1C3D8:
    /* 0001c3d8   2  addq.l #1,D5 */
    c->pc = RC_ADDR(0x0001c3d8u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_1C3DA:
    /* 0001c3da   6  cmp.l #5,D5 */
    c->pc = RC_ADDR(0x0001c3dau);
    rc_step(c, m, 14);
    t0 = 0x00000005u;
    t1 = rc_d_get(c, 5, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1C3E0:
    /* 0001c3e0   2  blt 0001c3a8 */
    c->pc = RC_ADDR(0x0001c3e0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1C3A8; }

L_1C3E2:
    /* 0001c3e2   2  moveq #0,D5 */
    c->pc = RC_ADDR(0x0001c3e2u);
    rc_step(c, m, 4);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_1C3E4:
    /* 0001c3e4   2  move.l D5,D0 */
    c->pc = RC_ADDR(0x0001c3e4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C3E6:
    /* 0001c3e6   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001c3e6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1C3E8:
    /* 0001c3e8   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0001c3e8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1C3EA:
    /* 0001c3ea   4  adda.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001c3eau);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] += t0;

L_1C3EE:
    /* 0001c3ee   4  move.l (8,A0),D0 */
    c->pc = RC_ADDR(0x0001c3eeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C3F2:
    /* 0001c3f2   2  movea.l D4,A0 */
    c->pc = RC_ADDR(0x0001c3f2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[0] = t0;

L_1C3F4:
    /* 0001c3f4   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x0001c3f4u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_1C3F6:
    /* 0001c3f6   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001c3f6u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1C3F8:
    /* 0001c3f8   2  move.b D7,D0 */
    c->pc = RC_ADDR(0x0001c3f8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_B);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1C3FA:
    /* 0001c3fa   4  eori.w #ff,D0 */
    c->pc = RC_ADDR(0x0001c3fau);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 ^ 0x000000ffu;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1C3FE:
    /* 0001c3fe   2  and.b D0,(A0) */
    c->pc = RC_ADDR(0x0001c3feu);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd8(c, m, t3);
    t2 = t1 & rc_d_get(c, 0, RC_B);
    rc_wr8(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_B);

L_1C400:
    /* 0001c400   2  move.l D5,D0 */
    c->pc = RC_ADDR(0x0001c400u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C402:
    /* 0001c402   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001c402u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1C404:
    /* 0001c404   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0001c404u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1C406:
    /* 0001c406   4  adda.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001c406u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] += t0;

L_1C40A:
    /* 0001c40a   4  move.l (8,A0),D0 */
    c->pc = RC_ADDR(0x0001c40au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C40E:
    /* 0001c40e   2  movea.l D4,A0 */
    c->pc = RC_ADDR(0x0001c40eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[0] = t0;

L_1C410:
    /* 0001c410   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x0001c410u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_1C412:
    /* 0001c412   4  lea (fffffff6,A5),A1 */
    c->pc = RC_ADDR(0x0001c412u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[5] - 0xau);

L_1C416:
    /* 0001c416   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001c416u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1C418:
    /* 0001c418   4  move.b (0,A1,D5.w),D0 */
    c->pc = RC_ADDR(0x0001c418u);
    rc_step(c, m, 14);
    t4 = c->d[5];
    t0 = rc_rd8(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1C41C:
    /* 0001c41c   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0001c41cu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1C41E:
    /* 0001c41e   2  move.b D7,D1 */
    c->pc = RC_ADDR(0x0001c41eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_B);
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1C420:
    /* 0001c420   2  and.w D1,D0 */
    c->pc = RC_ADDR(0x0001c420u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1C422:
    /* 0001c422   2  or.b D0,(A0) */
    c->pc = RC_ADDR(0x0001c422u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd8(c, m, t3);
    t2 = t1 | rc_d_get(c, 0, RC_B);
    rc_wr8(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_B);

L_1C424:
    /* 0001c424   2  addq.l #1,D5 */
    c->pc = RC_ADDR(0x0001c424u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_1C426:
    /* 0001c426   6  cmp.l #5,D5 */
    c->pc = RC_ADDR(0x0001c426u);
    rc_step(c, m, 14);
    t0 = 0x00000005u;
    t1 = rc_d_get(c, 5, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1C42C:
    /* 0001c42c   2  blt 0001c3e4 */
    c->pc = RC_ADDR(0x0001c42cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1C3E4; }

L_1C42E:
    /* 0001c42e   2  lsr.b #1,D7 */
    c->pc = RC_ADDR(0x0001c42eu);
    rc_step(c, m, 6);
    rc_d_set(c, 7, RC_B, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 7, RC_B), RC_B));

L_1C430:
    /* 0001c430   2  addq.w #1,D6 */
    c->pc = RC_ADDR(0x0001c430u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_1C432:
    /* 0001c432   4  cmp.w #8,D6 */
    c->pc = RC_ADDR(0x0001c432u);
    rc_step(c, m, 8);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1C436:
    /* 0001c436   4  blt 0001c3a6 */
    c->pc = RC_ADDR(0x0001c436u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1C3A6; }

L_1C43A:
    /* 0001c43a   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0001c43au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_1C43C:
    /* 0001c43c   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001c43cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1C440:
    /* 0001c440   4  movea.l (8,A5),A1 */
    c->pc = RC_ADDR(0x0001c440u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[1] = t0;

L_1C444:
    /* 0001c444   4  move.w (2,A0),D0 */
    c->pc = RC_ADDR(0x0001c444u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C448:
    /* 0001c448   2  mulu.w (A1),D0 */
    c->pc = RC_ADDR(0x0001c448u);
    rc_step(c, m, 42);
    t0 = rc_rd16(c, m, c->a[1]);
    rc_mulu(c, 0, t0);

L_1C44A:
    /* 0001c44a   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0001c44au);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1C44C:
    /* 0001c44c   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x0001c44cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C44E:
    /* 0001c44e   2  cmp.l D1,D4 */
    c->pc = RC_ADDR(0x0001c44eu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1C450:
    /* 0001c450   4  bcs 0001c3a0 */
    c->pc = RC_ADDR(0x0001c450u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1C3A0; }

L_1C454:
    /* 0001c454   4  movem.l (SP)+,{ D4 D5 D6 D7 } */
    c->pc = RC_ADDR(0x0001c454u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1C458:
    /* 0001c458   2  unlk A5 */
    c->pc = RC_ADDR(0x0001c458u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1C45A:
    /* 0001c45a   2  rts */
    c->pc = RC_ADDR(0x0001c45au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
