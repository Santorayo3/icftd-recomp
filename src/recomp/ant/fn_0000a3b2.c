/* fn_0000a3b2 - 182 byte(s), 52 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000a3b2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000a3b2u): goto L_A3B2;
    case RC_ADDR(0x0000a3b6u): goto L_A3B6;
    case RC_ADDR(0x0000a3b8u): goto L_A3B8;
    case RC_ADDR(0x0000a3bcu): goto L_A3BC;
    case RC_ADDR(0x0000a3c0u): goto L_A3C0;
    case RC_ADDR(0x0000a3c2u): goto L_A3C2;
    case RC_ADDR(0x0000a3c6u): goto L_A3C6;
    case RC_ADDR(0x0000a3cau): goto L_A3CA;
    case RC_ADDR(0x0000a3ceu): goto L_A3CE;
    case RC_ADDR(0x0000a3d2u): goto L_A3D2;
    case RC_ADDR(0x0000a3d8u): goto L_A3D8;
    case RC_ADDR(0x0000a3dau): goto L_A3DA;
    case RC_ADDR(0x0000a3deu): goto L_A3DE;
    case RC_ADDR(0x0000a3e2u): goto L_A3E2;
    case RC_ADDR(0x0000a3e4u): goto L_A3E4;
    case RC_ADDR(0x0000a3eau): goto L_A3EA;
    case RC_ADDR(0x0000a3eeu): goto L_A3EE;
    case RC_ADDR(0x0000a3f2u): goto L_A3F2;
    case RC_ADDR(0x0000a3f6u): goto L_A3F6;
    case RC_ADDR(0x0000a3fau): goto L_A3FA;
    case RC_ADDR(0x0000a3feu): goto L_A3FE;
    case RC_ADDR(0x0000a402u): goto L_A402;
    case RC_ADDR(0x0000a406u): goto L_A406;
    case RC_ADDR(0x0000a40au): goto L_A40A;
    case RC_ADDR(0x0000a40eu): goto L_A40E;
    case RC_ADDR(0x0000a412u): goto L_A412;
    case RC_ADDR(0x0000a418u): goto L_A418;
    case RC_ADDR(0x0000a41au): goto L_A41A;
    case RC_ADDR(0x0000a41eu): goto L_A41E;
    case RC_ADDR(0x0000a420u): goto L_A420;
    case RC_ADDR(0x0000a424u): goto L_A424;
    case RC_ADDR(0x0000a42au): goto L_A42A;
    case RC_ADDR(0x0000a42cu): goto L_A42C;
    case RC_ADDR(0x0000a42eu): goto L_A42E;
    case RC_ADDR(0x0000a430u): goto L_A430;
    case RC_ADDR(0x0000a432u): goto L_A432;
    case RC_ADDR(0x0000a434u): goto L_A434;
    case RC_ADDR(0x0000a438u): goto L_A438;
    case RC_ADDR(0x0000a43cu): goto L_A43C;
    case RC_ADDR(0x0000a43eu): goto L_A43E;
    case RC_ADDR(0x0000a442u): goto L_A442;
    case RC_ADDR(0x0000a446u): goto L_A446;
    case RC_ADDR(0x0000a448u): goto L_A448;
    case RC_ADDR(0x0000a44cu): goto L_A44C;
    case RC_ADDR(0x0000a450u): goto L_A450;
    case RC_ADDR(0x0000a454u): goto L_A454;
    case RC_ADDR(0x0000a458u): goto L_A458;
    case RC_ADDR(0x0000a45au): goto L_A45A;
    case RC_ADDR(0x0000a45eu): goto L_A45E;
    case RC_ADDR(0x0000a462u): goto L_A462;
    case RC_ADDR(0x0000a464u): goto L_A464;
    case RC_ADDR(0x0000a466u): goto L_A466;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_A3B2:
    /* 0000a3b2   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0000a3b2u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_A3B6:
    /* 0000a3b6   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0000a3b6u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A3B8:
    /* 0000a3b8   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x0000a3b8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_A3BC:
    /* 0000a3bc   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0000a3bcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A3C0:
    /* 0000a3c0   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x0000a3c0u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_A3C2:
    /* 0000a3c2   4  beq 0000a45e */
    c->pc = RC_ADDR(0x0000a3c2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_A45E;

L_A3C6:
    /* 0000a3c6   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0000a3c6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_A3CA:
    /* 0000a3ca   4  bne 0000a45e */
    c->pc = RC_ADDR(0x0000a3cau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_A45E;

L_A3CE:
    /* 0000a3ce   4  movea.l (4,A2),A0 */
    c->pc = RC_ADDR(0x0000a3ceu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[0] = t0;

L_A3D2:
    /* 0000a3d2   6  btst #0,(b,A0) */
    c->pc = RC_ADDR(0x0000a3d2u);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0xbu);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_A3D8:
    /* 0000a3d8   2  beq 0000a41a */
    c->pc = RC_ADDR(0x0000a3d8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_A41A;

L_A3DA:
    /* 0000a3da   4  movea.l (4,A2),A0 */
    c->pc = RC_ADDR(0x0000a3dau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[0] = t0;

L_A3DE:
    /* 0000a3de   4  cmpa.l (af4,A4),A0 */
    c->pc = RC_ADDR(0x0000a3deu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] + 0xaf4u));
    rc_cmp(c, RC_L, c->a[0], t0);

L_A3E2:
    /* 0000a3e2   2  bne 0000a418 */
    c->pc = RC_ADDR(0x0000a3e2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_A418;

L_A3E4:
    /* 0000a3e4   6  move.w (8,A2),(af8,A4) */
    c->pc = RC_ADDR(0x0000a3e4u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[2] + 0x8u));
    rc_wr16(c, m, (c->a[4] + 0xaf8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A3EA:
    /* 0000a3ea   4  movea.l (4,A2),A0 */
    c->pc = RC_ADDR(0x0000a3eau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[0] = t0;

L_A3EE:
    /* 0000a3ee   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0000a3eeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_A3F2:
    /* 0000a3f2   4  move.w (8,A1),D0 */
    c->pc = RC_ADDR(0x0000a3f2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A3F6:
    /* 0000a3f6   4  add.w (c,A2),D0 */
    c->pc = RC_ADDR(0x0000a3f6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_A3FA:
    /* 0000a3fa   4  move.w D0,(afa,A4) */
    c->pc = RC_ADDR(0x0000a3fau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xafau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A3FE:
    /* 0000a3fe   4  movea.l (4,A2),A0 */
    c->pc = RC_ADDR(0x0000a3feu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[0] = t0;

L_A402:
    /* 0000a402   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0000a402u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_A406:
    /* 0000a406   4  move.w (a,A1),D0 */
    c->pc = RC_ADDR(0x0000a406u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A40A:
    /* 0000a40a   4  add.w (e,A2),D0 */
    c->pc = RC_ADDR(0x0000a40au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_A40E:
    /* 0000a40e   4  move.w D0,(afc,A4) */
    c->pc = RC_ADDR(0x0000a40eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xafcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A412:
    /* 0000a412   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000a412u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A418:
    /* 0000a418   2  bra 0000a458 */
    c->pc = RC_ADDR(0x0000a418u);
    rc_step(c, m, 10);
    goto L_A458;

L_A41A:
    /* 0000a41a   4  tst.w (14,A5) */
    c->pc = RC_ADDR(0x0000a41au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    rc_set_nzvc(c, t0, RC_W);

L_A41E:
    /* 0000a41e   2  bne 0000a42c */
    c->pc = RC_ADDR(0x0000a41eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_A42C;

L_A420:
    /* 0000a420   4  movea.l (4,A2),A0 */
    c->pc = RC_ADDR(0x0000a420u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[0] = t0;

L_A424:
    /* 0000a424   6  btst #1,(b,A0) */
    c->pc = RC_ADDR(0x0000a424u);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0xbu);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_A42A:
    /* 0000a42a   2  beq 0000a430 */
    c->pc = RC_ADDR(0x0000a42au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_A430;

L_A42C:
    /* 0000a42c   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0000a42cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_A42E:
    /* 0000a42e   2  bra 0000a432 */
    c->pc = RC_ADDR(0x0000a42eu);
    rc_step(c, m, 10);
    goto L_A432;

L_A430:
    /* 0000a430   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000a430u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_A432:
    /* 0000a432   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000a432u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A434:
    /* 0000a434   4  move.l (14,A2),D0 */
    c->pc = RC_ADDR(0x0000a434u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x14u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_A438:
    /* 0000a438   4  add.l (10,A5),D0 */
    c->pc = RC_ADDR(0x0000a438u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_A43C:
    /* 0000a43c   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000a43cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A43E:
    /* 0000a43e   4  move.l (10,A2),D0 */
    c->pc = RC_ADDR(0x0000a43eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_A442:
    /* 0000a442   4  add.l (c,A5),D0 */
    c->pc = RC_ADDR(0x0000a442u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_A446:
    /* 0000a446   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000a446u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A448:
    /* 0000a448   4  move.l (2c,A2),-(A7) */
    c->pc = RC_ADDR(0x0000a448u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[2] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A44C:
    /* 0000a44c   4  jsr (0000a3b2) */
    c->pc = RC_ADDR(0x0000a44cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000a450u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000a3b2u);
    return;

L_A450:
    /* 0000a450   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000a450u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_A454:
    /* 0000a454   4  or.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000a454u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_A458:
    /* 0000a458   2  movea.l (A2),A2 */
    c->pc = RC_ADDR(0x0000a458u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[2]);
    c->a[2] = t0;

L_A45A:
    /* 0000a45a   4  bra 0000a3c0 */
    c->pc = RC_ADDR(0x0000a45au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_A3C0;

L_A45E:
    /* 0000a45e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000a45eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A462:
    /* 0000a462   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x0000a462u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_A464:
    /* 0000a464   2  unlk A5 */
    c->pc = RC_ADDR(0x0000a464u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_A466:
    /* 0000a466   2  rts */
    c->pc = RC_ADDR(0x0000a466u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
