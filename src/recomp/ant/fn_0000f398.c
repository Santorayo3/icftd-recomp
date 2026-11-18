/* fn_0000f398 - 154 byte(s), 55 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000f398(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f398u): goto L_F398;
    case RC_ADDR(0x0000f39cu): goto L_F39C;
    case RC_ADDR(0x0000f3a0u): goto L_F3A0;
    case RC_ADDR(0x0000f3a4u): goto L_F3A4;
    case RC_ADDR(0x0000f3a8u): goto L_F3A8;
    case RC_ADDR(0x0000f3acu): goto L_F3AC;
    case RC_ADDR(0x0000f3b0u): goto L_F3B0;
    case RC_ADDR(0x0000f3b4u): goto L_F3B4;
    case RC_ADDR(0x0000f3b6u): goto L_F3B6;
    case RC_ADDR(0x0000f3b8u): goto L_F3B8;
    case RC_ADDR(0x0000f3bau): goto L_F3BA;
    case RC_ADDR(0x0000f3beu): goto L_F3BE;
    case RC_ADDR(0x0000f3c0u): goto L_F3C0;
    case RC_ADDR(0x0000f3c2u): goto L_F3C2;
    case RC_ADDR(0x0000f3c4u): goto L_F3C4;
    case RC_ADDR(0x0000f3c6u): goto L_F3C6;
    case RC_ADDR(0x0000f3c8u): goto L_F3C8;
    case RC_ADDR(0x0000f3ccu): goto L_F3CC;
    case RC_ADDR(0x0000f3ceu): goto L_F3CE;
    case RC_ADDR(0x0000f3d2u): goto L_F3D2;
    case RC_ADDR(0x0000f3d4u): goto L_F3D4;
    case RC_ADDR(0x0000f3d8u): goto L_F3D8;
    case RC_ADDR(0x0000f3dau): goto L_F3DA;
    case RC_ADDR(0x0000f3dcu): goto L_F3DC;
    case RC_ADDR(0x0000f3deu): goto L_F3DE;
    case RC_ADDR(0x0000f3e0u): goto L_F3E0;
    case RC_ADDR(0x0000f3e4u): goto L_F3E4;
    case RC_ADDR(0x0000f3e8u): goto L_F3E8;
    case RC_ADDR(0x0000f3eau): goto L_F3EA;
    case RC_ADDR(0x0000f3ecu): goto L_F3EC;
    case RC_ADDR(0x0000f3f0u): goto L_F3F0;
    case RC_ADDR(0x0000f3f4u): goto L_F3F4;
    case RC_ADDR(0x0000f3f6u): goto L_F3F6;
    case RC_ADDR(0x0000f3f8u): goto L_F3F8;
    case RC_ADDR(0x0000f3fau): goto L_F3FA;
    case RC_ADDR(0x0000f3fcu): goto L_F3FC;
    case RC_ADDR(0x0000f400u): goto L_F400;
    case RC_ADDR(0x0000f402u): goto L_F402;
    case RC_ADDR(0x0000f404u): goto L_F404;
    case RC_ADDR(0x0000f406u): goto L_F406;
    case RC_ADDR(0x0000f408u): goto L_F408;
    case RC_ADDR(0x0000f40au): goto L_F40A;
    case RC_ADDR(0x0000f410u): goto L_F410;
    case RC_ADDR(0x0000f412u): goto L_F412;
    case RC_ADDR(0x0000f414u): goto L_F414;
    case RC_ADDR(0x0000f416u): goto L_F416;
    case RC_ADDR(0x0000f418u): goto L_F418;
    case RC_ADDR(0x0000f41au): goto L_F41A;
    case RC_ADDR(0x0000f41eu): goto L_F41E;
    case RC_ADDR(0x0000f420u): goto L_F420;
    case RC_ADDR(0x0000f424u): goto L_F424;
    case RC_ADDR(0x0000f426u): goto L_F426;
    case RC_ADDR(0x0000f42au): goto L_F42A;
    case RC_ADDR(0x0000f42eu): goto L_F42E;
    case RC_ADDR(0x0000f430u): goto L_F430;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F398:
    /* 0000f398   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0000f398u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_F39C:
    /* 0000f39c   4  movem.l { D5 A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0000f39cu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_F3A0:
    /* 0000f3a0   4  move.w (e76,A4),D6 */
    c->pc = RC_ADDR(0x0000f3a0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F3A4:
    /* 0000f3a4   4  sub.w (e6c,A4),D6 */
    c->pc = RC_ADDR(0x0000f3a4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6cu));
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_F3A8:
    /* 0000f3a8   4  move.w (e78,A4),D7 */
    c->pc = RC_ADDR(0x0000f3a8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F3AC:
    /* 0000f3ac   4  sub.w (e6e,A4),D7 */
    c->pc = RC_ADDR(0x0000f3acu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6eu));
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_F3B0:
    /* 0000f3b0   4  move.w (fffffa76,A4),D0 */
    c->pc = RC_ADDR(0x0000f3b0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x58au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F3B4:
    /* 0000f3b4   2  muls.w D7,D0 */
    c->pc = RC_ADDR(0x0000f3b4u);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 7, RC_W);
    rc_muls(c, 0, t0);

L_F3B6:
    /* 0000f3b6   2  move.w D6,D1 */
    c->pc = RC_ADDR(0x0000f3b6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F3B8:
    /* 0000f3b8   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000f3b8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_F3BA:
    /* 0000f3ba   4  divs.w #8,D1 */
    c->pc = RC_ADDR(0x0000f3bau);
    rc_step(c, m, 162);
    t0 = 0x00000008u;
    rc_divs(c, m, 1, t0);

L_F3BE:
    /* 0000f3be   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x0000f3beu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_F3C0:
    /* 0000f3c0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000f3c0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_F3C2:
    /* 0000f3c2   2  move.l D0,D4 */
    c->pc = RC_ADDR(0x0000f3c2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F3C4:
    /* 0000f3c4   2  move.w D6,D0 */
    c->pc = RC_ADDR(0x0000f3c4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F3C6:
    /* 0000f3c6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000f3c6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_F3C8:
    /* 0000f3c8   4  divs.w #8,D0 */
    c->pc = RC_ADDR(0x0000f3c8u);
    rc_step(c, m, 162);
    t0 = 0x00000008u;
    rc_divs(c, m, 0, t0);

L_F3CC:
    /* 0000f3cc   2  swap D0 */
    c->pc = RC_ADDR(0x0000f3ccu);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_F3CE:
    /* 0000f3ce   4  move.w #80,D1 */
    c->pc = RC_ADDR(0x0000f3ceu);
    rc_step(c, m, 8);
    t0 = 0x00000080u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F3D2:
    /* 0000f3d2   2  asr.w D0,D1 */
    c->pc = RC_ADDR(0x0000f3d2u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 0, (c->d[0] & 63u), rc_d_get(c, 1, RC_W), RC_W));

L_F3D4:
    /* 0000f3d4   4  move.b D1,(ffffffff,A5) */
    c->pc = RC_ADDR(0x0000f3d4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_B);
    rc_wr8(c, m, (c->a[5] - 0x1u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_F3D8:
    /* 0000f3d8   2  suba.l A2,A2 */
    c->pc = RC_ADDR(0x0000f3d8u);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[2] -= t0;

L_F3DA:
    /* 0000f3da   2  moveq #0,D5 */
    c->pc = RC_ADDR(0x0000f3dau);
    rc_step(c, m, 4);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_F3DC:
    /* 0000f3dc   2  move.l D5,D0 */
    c->pc = RC_ADDR(0x0000f3dcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F3DE:
    /* 0000f3de   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000f3deu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_F3E0:
    /* 0000f3e0   4  lea (ffffface,A4),A0 */
    c->pc = RC_ADDR(0x0000f3e0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x532u);

L_F3E4:
    /* 0000f3e4   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000f3e4u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F3E8:
    /* 0000f3e8   2  movea.l D4,A0 */
    c->pc = RC_ADDR(0x0000f3e8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[0] = t0;

L_F3EA:
    /* 0000f3ea   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000f3eau);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_F3EC:
    /* 0000f3ec   4  move.b (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000f3ecu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F3F0:
    /* 0000f3f0   4  move.b (ffffffff,A5),D1 */
    c->pc = RC_ADDR(0x0000f3f0u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F3F4:
    /* 0000f3f4   2  ext.w D1 */
    c->pc = RC_ADDR(0x0000f3f4u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_F3F6:
    /* 0000f3f6   2  and.w D1,D0 */
    c->pc = RC_ADDR(0x0000f3f6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_F3F8:
    /* 0000f3f8   2  beq 0000f402 */
    c->pc = RC_ADDR(0x0000f3f8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F402;

L_F3FA:
    /* 0000f3fa   2  move.w A2,D0 */
    c->pc = RC_ADDR(0x0000f3fau);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F3FC:
    /* 0000f3fc   4  bset #5,D0 */
    c->pc = RC_ADDR(0x0000f3fcu);
    rc_step(c, m, 12);
    t4 = 0x00000005u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 0, RC_L, t2);

L_F400:
    /* 0000f400   2  movea.w D0,A2 */
    c->pc = RC_ADDR(0x0000f400u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[2] = rc_ext(t0, RC_W);

L_F402:
    /* 0000f402   2  move.w A2,D0 */
    c->pc = RC_ADDR(0x0000f402u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F404:
    /* 0000f404   2  asr.w #1,D0 */
    c->pc = RC_ADDR(0x0000f404u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_F406:
    /* 0000f406   2  movea.w D0,A2 */
    c->pc = RC_ADDR(0x0000f406u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[2] = rc_ext(t0, RC_W);

L_F408:
    /* 0000f408   2  addq.l #1,D5 */
    c->pc = RC_ADDR(0x0000f408u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_F40A:
    /* 0000f40a   6  cmp.l #5,D5 */
    c->pc = RC_ADDR(0x0000f40au);
    rc_step(c, m, 14);
    t0 = 0x00000005u;
    t1 = rc_d_get(c, 5, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_F410:
    /* 0000f410   2  blt 0000f3dc */
    c->pc = RC_ADDR(0x0000f410u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_F3DC; }

L_F412:
    /* 0000f412   2  move.w A2,D0 */
    c->pc = RC_ADDR(0x0000f412u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F414:
    /* 0000f414   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000f414u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_F416:
    /* 0000f416   2  moveq #1,D1 */
    c->pc = RC_ADDR(0x0000f416u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000001u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_F418:
    /* 0000f418   2  asl.l D0,D1 */
    c->pc = RC_ADDR(0x0000f418u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, (c->d[0] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_F41A:
    /* 0000f41a   4  and.l (ffff9c74,A4),D1 */
    c->pc = RC_ADDR(0x0000f41au);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x638cu));
    t2 = t0 & rc_d_get(c, 1, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 1, RC_L, t2);

L_F41E:
    /* 0000f41e   2  beq 0000f426 */
    c->pc = RC_ADDR(0x0000f41eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F426;

L_F420:
    /* 0000f420   4  addq.w #1,(e8a,A4) */
    c->pc = RC_ADDR(0x0000f420u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xe8au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_F424:
    /* 0000f424   2  bra 0000f42a */
    c->pc = RC_ADDR(0x0000f424u);
    rc_step(c, m, 10);
    goto L_F42A;

L_F426:
    /* 0000f426   4  clr.w (e8a,A4) */
    c->pc = RC_ADDR(0x0000f426u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xe8au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F42A:
    /* 0000f42a   4  movem.l (SP)+,{ D4 D5 D6 D7 A2 } */
    c->pc = RC_ADDR(0x0000f42au);
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
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_F42E:
    /* 0000f42e   2  unlk A5 */
    c->pc = RC_ADDR(0x0000f42eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_F430:
    /* 0000f430   2  rts */
    c->pc = RC_ADDR(0x0000f430u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
