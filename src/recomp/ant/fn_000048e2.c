/* fn_000048e2 - 108 byte(s), 34 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000048e2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000048e2u): goto L_48E2;
    case RC_ADDR(0x000048e6u): goto L_48E6;
    case RC_ADDR(0x000048ecu): goto L_48EC;
    case RC_ADDR(0x000048f0u): goto L_48F0;
    case RC_ADDR(0x000048f2u): goto L_48F2;
    case RC_ADDR(0x000048f6u): goto L_48F6;
    case RC_ADDR(0x000048fau): goto L_48FA;
    case RC_ADDR(0x000048feu): goto L_48FE;
    case RC_ADDR(0x00004900u): goto L_4900;
    case RC_ADDR(0x00004904u): goto L_4904;
    case RC_ADDR(0x00004906u): goto L_4906;
    case RC_ADDR(0x00004908u): goto L_4908;
    case RC_ADDR(0x0000490au): goto L_490A;
    case RC_ADDR(0x0000490cu): goto L_490C;
    case RC_ADDR(0x00004910u): goto L_4910;
    case RC_ADDR(0x00004914u): goto L_4914;
    case RC_ADDR(0x00004918u): goto L_4918;
    case RC_ADDR(0x0000491cu): goto L_491C;
    case RC_ADDR(0x00004920u): goto L_4920;
    case RC_ADDR(0x00004922u): goto L_4922;
    case RC_ADDR(0x00004924u): goto L_4924;
    case RC_ADDR(0x00004926u): goto L_4926;
    case RC_ADDR(0x0000492au): goto L_492A;
    case RC_ADDR(0x0000492eu): goto L_492E;
    case RC_ADDR(0x00004932u): goto L_4932;
    case RC_ADDR(0x00004936u): goto L_4936;
    case RC_ADDR(0x0000493au): goto L_493A;
    case RC_ADDR(0x0000493eu): goto L_493E;
    case RC_ADDR(0x00004942u): goto L_4942;
    case RC_ADDR(0x00004944u): goto L_4944;
    case RC_ADDR(0x00004946u): goto L_4946;
    case RC_ADDR(0x00004948u): goto L_4948;
    case RC_ADDR(0x0000494au): goto L_494A;
    case RC_ADDR(0x0000494cu): goto L_494C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_48E2:
    /* 000048e2   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x000048e2u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_48E6:
    /* 000048e6   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x000048e6u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_48EC:
    /* 000048ec   4  tst.w (9c6,A4) */
    c->pc = RC_ADDR(0x000048ecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x9c6u));
    rc_set_nzvc(c, t0, RC_W);

L_48F0:
    /* 000048f0   2  beq 00004920 */
    c->pc = RC_ADDR(0x000048f0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4920;

L_48F2:
    /* 000048f2   4  clr.w (9c6,A4) */
    c->pc = RC_ADDR(0x000048f2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x9c6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_48F6:
    /* 000048f6   4  pea (0000494e) */
    c->pc = RC_ADDR(0x000048f6u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000494eu));

L_48FA:
    /* 000048fa   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x000048fau);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x000048feu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_48FE:
    /* 000048fe   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000048feu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4900:
    /* 00004900   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00004900u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4904:
    /* 00004904   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00004904u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_4906:
    /* 00004906   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00004906u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_4908:
    /* 00004908   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00004908u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_490A:
    /* 0000490a   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000490au);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_490C:
    /* 0000490c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000490cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4910:
    /* 00004910   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00004910u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4914:
    /* 00004914   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00004914u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00004918u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_4918:
    /* 00004918   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00004918u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_491C:
    /* 0000491c   4  clr.w (ffffd56e,A4) */
    c->pc = RC_ADDR(0x0000491cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2a92u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4920:
    /* 00004920   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00004920u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4922:
    /* 00004922   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00004922u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_4924:
    /* 00004924   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00004924u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_4926:
    /* 00004926   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00004926u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_492A:
    /* 0000492a   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000492au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_492E:
    /* 0000492e   4  jsr (ffff829c,A4) */
    c->pc = RC_ADDR(0x0000492eu);
    rc_step(c, m, 18);
    /* vector 111 */
    rc_push32(c, m, RC_ADDR(0x00004932u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d92u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021aa4u);
    return;

L_4932:
    /* 00004932   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00004932u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_4936:
    /* 00004936   4  move.w (ffffd56e,A4),D0 */
    c->pc = RC_ADDR(0x00004936u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a92u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_493A:
    /* 0000493a   4  addq.w #1,(ffffd56e,A4) */
    c->pc = RC_ADDR(0x0000493au);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x2a92u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_493E:
    /* 0000493e   4  cmp.w #37,D0 */
    c->pc = RC_ADDR(0x0000493eu);
    rc_step(c, m, 8);
    t0 = 0x00000037u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_4942:
    /* 00004942   2  bge 0000494a */
    c->pc = RC_ADDR(0x00004942u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_494A;

L_4944:
    /* 00004944   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00004944u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_4946:
    /* 00004946   2  unlk A5 */
    c->pc = RC_ADDR(0x00004946u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_4948:
    /* 00004948   2  rts */
    c->pc = RC_ADDR(0x00004948u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_494A:
    /* 0000494a   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0000494au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_494C:
    /* 0000494c   2  bra 00004946 */
    c->pc = RC_ADDR(0x0000494cu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_4946;

}
