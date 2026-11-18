/* fn_0000b8aa - 162 byte(s), 51 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000b8aa(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000b8aau): goto L_B8AA;
    case RC_ADDR(0x0000b8aeu): goto L_B8AE;
    case RC_ADDR(0x0000b8b4u): goto L_B8B4;
    case RC_ADDR(0x0000b8b8u): goto L_B8B8;
    case RC_ADDR(0x0000b8bau): goto L_B8BA;
    case RC_ADDR(0x0000b8beu): goto L_B8BE;
    case RC_ADDR(0x0000b8c2u): goto L_B8C2;
    case RC_ADDR(0x0000b8c6u): goto L_B8C6;
    case RC_ADDR(0x0000b8c8u): goto L_B8C8;
    case RC_ADDR(0x0000b8ccu): goto L_B8CC;
    case RC_ADDR(0x0000b8ceu): goto L_B8CE;
    case RC_ADDR(0x0000b8d0u): goto L_B8D0;
    case RC_ADDR(0x0000b8d2u): goto L_B8D2;
    case RC_ADDR(0x0000b8d4u): goto L_B8D4;
    case RC_ADDR(0x0000b8d8u): goto L_B8D8;
    case RC_ADDR(0x0000b8dcu): goto L_B8DC;
    case RC_ADDR(0x0000b8e0u): goto L_B8E0;
    case RC_ADDR(0x0000b8e4u): goto L_B8E4;
    case RC_ADDR(0x0000b8e6u): goto L_B8E6;
    case RC_ADDR(0x0000b8e8u): goto L_B8E8;
    case RC_ADDR(0x0000b8eau): goto L_B8EA;
    case RC_ADDR(0x0000b8eeu): goto L_B8EE;
    case RC_ADDR(0x0000b8f2u): goto L_B8F2;
    case RC_ADDR(0x0000b8f6u): goto L_B8F6;
    case RC_ADDR(0x0000b8fau): goto L_B8FA;
    case RC_ADDR(0x0000b8feu): goto L_B8FE;
    case RC_ADDR(0x0000b900u): goto L_B900;
    case RC_ADDR(0x0000b902u): goto L_B902;
    case RC_ADDR(0x0000b904u): goto L_B904;
    case RC_ADDR(0x0000b908u): goto L_B908;
    case RC_ADDR(0x0000b90cu): goto L_B90C;
    case RC_ADDR(0x0000b910u): goto L_B910;
    case RC_ADDR(0x0000b914u): goto L_B914;
    case RC_ADDR(0x0000b918u): goto L_B918;
    case RC_ADDR(0x0000b91cu): goto L_B91C;
    case RC_ADDR(0x0000b91eu): goto L_B91E;
    case RC_ADDR(0x0000b920u): goto L_B920;
    case RC_ADDR(0x0000b922u): goto L_B922;
    case RC_ADDR(0x0000b926u): goto L_B926;
    case RC_ADDR(0x0000b92au): goto L_B92A;
    case RC_ADDR(0x0000b92eu): goto L_B92E;
    case RC_ADDR(0x0000b930u): goto L_B930;
    case RC_ADDR(0x0000b932u): goto L_B932;
    case RC_ADDR(0x0000b934u): goto L_B934;
    case RC_ADDR(0x0000b936u): goto L_B936;
    case RC_ADDR(0x0000b93au): goto L_B93A;
    case RC_ADDR(0x0000b93eu): goto L_B93E;
    case RC_ADDR(0x0000b942u): goto L_B942;
    case RC_ADDR(0x0000b946u): goto L_B946;
    case RC_ADDR(0x0000b948u): goto L_B948;
    case RC_ADDR(0x0000b94au): goto L_B94A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B8AA:
    /* 0000b8aa   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x0000b8aau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_B8AE:
    /* 0000b8ae   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x0000b8aeu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B8B4:
    /* 0000b8b4   4  tst.w (9c6,A4) */
    c->pc = RC_ADDR(0x0000b8b4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x9c6u));
    rc_set_nzvc(c, t0, RC_W);

L_B8B8:
    /* 0000b8b8   2  beq 0000b930 */
    c->pc = RC_ADDR(0x0000b8b8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_B930;

L_B8BA:
    /* 0000b8ba   4  clr.w (9c6,A4) */
    c->pc = RC_ADDR(0x0000b8bau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x9c6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B8BE:
    /* 0000b8be   4  pea (0000b94c) */
    c->pc = RC_ADDR(0x0000b8beu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000b94cu));

L_B8C2:
    /* 0000b8c2   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000b8c2u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000b8c6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_B8C6:
    /* 0000b8c6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000b8c6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_B8C8:
    /* 0000b8c8   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000b8c8u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B8CC:
    /* 0000b8cc   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000b8ccu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_B8CE:
    /* 0000b8ce   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000b8ceu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_B8D0:
    /* 0000b8d0   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000b8d0u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_B8D2:
    /* 0000b8d2   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000b8d2u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B8D4:
    /* 0000b8d4   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000b8d4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B8D8:
    /* 0000b8d8   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000b8d8u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B8DC:
    /* 0000b8dc   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000b8dcu);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000b8e0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_B8E0:
    /* 0000b8e0   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x0000b8e0u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_B8E4:
    /* 0000b8e4   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000b8e4u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B8E6:
    /* 0000b8e6   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000b8e6u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_B8E8:
    /* 0000b8e8   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000b8e8u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_B8EA:
    /* 0000b8ea   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000b8eau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_B8EE:
    /* 0000b8ee   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000b8eeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B8F2:
    /* 0000b8f2   4  jsr (ffff829c,A4) */
    c->pc = RC_ADDR(0x0000b8f2u);
    rc_step(c, m, 18);
    /* vector 111 */
    rc_push32(c, m, RC_ADDR(0x0000b8f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d92u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021aa4u);
    return;

L_B8F6:
    /* 0000b8f6   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000b8f6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_B8FA:
    /* 0000b8fa   4  jsr (ffff820c,A4) */
    c->pc = RC_ADDR(0x0000b8fau);
    rc_step(c, m, 18);
    /* vector 87 */
    rc_push32(c, m, RC_ADDR(0x0000b8feu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f260u);
    return;

L_B8FE:
    /* 0000b8fe   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000b8feu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B900:
    /* 0000b900   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000b900u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_B902:
    /* 0000b902   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000b902u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_B904:
    /* 0000b904   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000b904u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_B908:
    /* 0000b908   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000b908u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B90C:
    /* 0000b90c   4  jsr (ffff829c,A4) */
    c->pc = RC_ADDR(0x0000b90cu);
    rc_step(c, m, 18);
    /* vector 111 */
    rc_push32(c, m, RC_ADDR(0x0000b910u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d92u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021aa4u);
    return;

L_B910:
    /* 0000b910   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000b910u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_B914:
    /* 0000b914   4  move.w #d,-(A7) */
    c->pc = RC_ADDR(0x0000b914u);
    rc_step(c, m, 12);
    t0 = 0x0000000du;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B918:
    /* 0000b918   4  move.w (ffff9582,A4),D0 */
    c->pc = RC_ADDR(0x0000b918u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x6a7eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B91C:
    /* 0000b91c   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x0000b91cu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_B91E:
    /* 0000b91e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000b91eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_B920:
    /* 0000b920   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000b920u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_B922:
    /* 0000b922   4  lea (ffff9584,A4),A0 */
    c->pc = RC_ADDR(0x0000b922u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6a7cu);

L_B926:
    /* 0000b926   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000b926u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B92A:
    /* 0000b92a   4  jsr (00005704) */
    c->pc = RC_ADDR(0x0000b92au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000b92eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00005704u);
    return;

L_B92E:
    /* 0000b92e   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0000b92eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_B930:
    /* 0000b930   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000b930u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B932:
    /* 0000b932   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000b932u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_B934:
    /* 0000b934   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000b934u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_B936:
    /* 0000b936   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000b936u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_B93A:
    /* 0000b93a   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000b93au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B93E:
    /* 0000b93e   4  jsr (ffff829c,A4) */
    c->pc = RC_ADDR(0x0000b93eu);
    rc_step(c, m, 18);
    /* vector 111 */
    rc_push32(c, m, RC_ADDR(0x0000b942u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d92u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021aa4u);
    return;

L_B942:
    /* 0000b942   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000b942u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_B946:
    /* 0000b946   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000b946u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_B948:
    /* 0000b948   2  unlk A5 */
    c->pc = RC_ADDR(0x0000b948u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B94A:
    /* 0000b94a   2  rts */
    c->pc = RC_ADDR(0x0000b94au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
