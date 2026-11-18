/* fn_00004852 - 144 byte(s), 40 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00004852(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x00004852u): goto L_4852;
    case RC_ADDR(0x00004856u): goto L_4856;
    case RC_ADDR(0x0000485cu): goto L_485C;
    case RC_ADDR(0x00004862u): goto L_4862;
    case RC_ADDR(0x00004866u): goto L_4866;
    case RC_ADDR(0x0000486au): goto L_486A;
    case RC_ADDR(0x0000486cu): goto L_486C;
    case RC_ADDR(0x00004870u): goto L_4870;
    case RC_ADDR(0x00004872u): goto L_4872;
    case RC_ADDR(0x00004876u): goto L_4876;
    case RC_ADDR(0x0000487au): goto L_487A;
    case RC_ADDR(0x0000487eu): goto L_487E;
    case RC_ADDR(0x00004882u): goto L_4882;
    case RC_ADDR(0x00004884u): goto L_4884;
    case RC_ADDR(0x00004888u): goto L_4888;
    case RC_ADDR(0x0000488cu): goto L_488C;
    case RC_ADDR(0x0000488eu): goto L_488E;
    case RC_ADDR(0x00004892u): goto L_4892;
    case RC_ADDR(0x00004896u): goto L_4896;
    case RC_ADDR(0x0000489au): goto L_489A;
    case RC_ADDR(0x0000489eu): goto L_489E;
    case RC_ADDR(0x000048a0u): goto L_48A0;
    case RC_ADDR(0x000048a4u): goto L_48A4;
    case RC_ADDR(0x000048a6u): goto L_48A6;
    case RC_ADDR(0x000048aau): goto L_48AA;
    case RC_ADDR(0x000048aeu): goto L_48AE;
    case RC_ADDR(0x000048b0u): goto L_48B0;
    case RC_ADDR(0x000048b4u): goto L_48B4;
    case RC_ADDR(0x000048b8u): goto L_48B8;
    case RC_ADDR(0x000048bcu): goto L_48BC;
    case RC_ADDR(0x000048beu): goto L_48BE;
    case RC_ADDR(0x000048c2u): goto L_48C2;
    case RC_ADDR(0x000048c4u): goto L_48C4;
    case RC_ADDR(0x000048c8u): goto L_48C8;
    case RC_ADDR(0x000048cau): goto L_48CA;
    case RC_ADDR(0x000048ccu): goto L_48CC;
    case RC_ADDR(0x000048d2u): goto L_48D2;
    case RC_ADDR(0x000048d8u): goto L_48D8;
    case RC_ADDR(0x000048deu): goto L_48DE;
    case RC_ADDR(0x000048e0u): goto L_48E0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_4852:
    /* 00004852   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00004852u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_4856:
    /* 00004856   6  move.w #4,(850,A4) */
    c->pc = RC_ADDR(0x00004856u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x850u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_485C:
    /* 0000485c   6  move.w #13b,(852,A4) */
    c->pc = RC_ADDR(0x0000485cu);
    rc_step(c, m, 16);
    t0 = 0x0000013bu;
    rc_wr16(c, m, (c->a[4] + 0x852u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4862:
    /* 00004862   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00004862u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4866:
    /* 00004866   4  jsr (00005596) */
    c->pc = RC_ADDR(0x00004866u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000486au));
    rc_depth++;
    c->pc = RC_ADDR(0x00005596u);
    return;

L_486A:
    /* 0000486a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000486au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_486C:
    /* 0000486c   4  move.w #c5,D1 */
    c->pc = RC_ADDR(0x0000486cu);
    rc_step(c, m, 8);
    t0 = 0x000000c5u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4870:
    /* 00004870   2  sub.w D0,D1 */
    c->pc = RC_ADDR(0x00004870u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_4872:
    /* 00004872   4  move.w D1,(ffffd346,A4) */
    c->pc = RC_ADDR(0x00004872u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x2cbau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4876:
    /* 00004876   4  move.w #1b,-(A7) */
    c->pc = RC_ADDR(0x00004876u);
    rc_step(c, m, 12);
    t0 = 0x0000001bu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_487A:
    /* 0000487a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000487au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_487E:
    /* 0000487e   4  jsr (ffff8074,A4) */
    c->pc = RC_ADDR(0x0000487eu);
    rc_step(c, m, 18);
    /* vector 19 */
    rc_push32(c, m, RC_ADDR(0x00004882u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b6au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000564cu);
    return;

L_4882:
    /* 00004882   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00004882u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_4884:
    /* 00004884   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00004884u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4888:
    /* 00004888   4  jsr (00003b86) */
    c->pc = RC_ADDR(0x00004888u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000488cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00003b86u);
    return;

L_488C:
    /* 0000488c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000488cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_488E:
    /* 0000488e   4  jsr (ffff820c,A4) */
    c->pc = RC_ADDR(0x0000488eu);
    rc_step(c, m, 18);
    /* vector 87 */
    rc_push32(c, m, RC_ADDR(0x00004892u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f260u);
    return;

L_4892:
    /* 00004892   4  move.w #1b,-(A7) */
    c->pc = RC_ADDR(0x00004892u);
    rc_step(c, m, 12);
    t0 = 0x0000001bu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4896:
    /* 00004896   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00004896u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_489A:
    /* 0000489a   4  jsr (ffff8074,A4) */
    c->pc = RC_ADDR(0x0000489au);
    rc_step(c, m, 18);
    /* vector 19 */
    rc_push32(c, m, RC_ADDR(0x0000489eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b6au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000564cu);
    return;

L_489E:
    /* 0000489e   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0000489eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_48A0:
    /* 000048a0   4  tst.w (ffffd5c8,A4) */
    c->pc = RC_ADDR(0x000048a0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a38u));
    rc_set_nzvc(c, t0, RC_W);

L_48A4:
    /* 000048a4   2  bne 000048c4 */
    c->pc = RC_ADDR(0x000048a4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_48C4;

L_48A6:
    /* 000048a6   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x000048a6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_48AA:
    /* 000048aa   4  jsr (000047f0) */
    c->pc = RC_ADDR(0x000048aau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000048aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x000047f0u);
    return;

L_48AE:
    /* 000048ae   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000048aeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_48B0:
    /* 000048b0   4  jsr (00003d92) */
    c->pc = RC_ADDR(0x000048b0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000048b4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00003d92u);
    return;

L_48B4:
    /* 000048b4   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x000048b4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_48B8:
    /* 000048b8   4  jsr (00003b86) */
    c->pc = RC_ADDR(0x000048b8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000048bcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00003b86u);
    return;

L_48BC:
    /* 000048bc   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000048bcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_48BE:
    /* 000048be   4  jsr (ffff820c,A4) */
    c->pc = RC_ADDR(0x000048beu);
    rc_step(c, m, 18);
    /* vector 87 */
    rc_push32(c, m, RC_ADDR(0x000048c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f260u);
    return;

L_48C2:
    /* 000048c2   2  bra 000048a0 */
    c->pc = RC_ADDR(0x000048c2u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_48A0;

L_48C4:
    /* 000048c4   4  tst.w (ffffd5c8,A4) */
    /* a flag wait: rc_wait runs it natively and returns 1 when its exit branch is taken;
     * 0 means the three instructions below run instead (the reference path). */
    if (rc_wait(c, m, RC_ADDR(0x000048c4u), 12,
                RC_ADDR(0x000048c8u), 10, 7,
                RC_ADDR(0x000048cau), 10,
                (c->a[4] - 0x2a38u), RC_W))
        goto L_48CC;
    c->pc = RC_ADDR(0x000048c4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a38u));
    rc_set_nzvc(c, t0, RC_W);

L_48C8:
    /* 000048c8   2  beq 000048cc */
    c->pc = RC_ADDR(0x000048c8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_48CC;

L_48CA:
    /* 000048ca   2  bra 000048c4 */
    c->pc = RC_ADDR(0x000048cau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_48C4;

L_48CC:
    /* 000048cc   6  move.w #c8,(ffffd346,A4) */
    c->pc = RC_ADDR(0x000048ccu);
    rc_step(c, m, 16);
    t0 = 0x000000c8u;
    rc_wr16(c, m, (c->a[4] - 0x2cbau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_48D2:
    /* 000048d2   6  move.w #13,(850,A4) */
    c->pc = RC_ADDR(0x000048d2u);
    rc_step(c, m, 16);
    t0 = 0x00000013u;
    rc_wr16(c, m, (c->a[4] + 0x850u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_48D8:
    /* 000048d8   6  move.w #12c,(852,A4) */
    c->pc = RC_ADDR(0x000048d8u);
    rc_step(c, m, 16);
    t0 = 0x0000012cu;
    rc_wr16(c, m, (c->a[4] + 0x852u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_48DE:
    /* 000048de   2  unlk A5 */
    c->pc = RC_ADDR(0x000048deu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_48E0:
    /* 000048e0   2  rts */
    c->pc = RC_ADDR(0x000048e0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
