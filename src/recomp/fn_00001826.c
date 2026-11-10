/* fn_00001826 - 148 byte(s), 47 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00001826(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00001826u): goto L_1826;
    case RC_ADDR(0x0000182au): goto L_182A;
    case RC_ADDR(0x0000182eu): goto L_182E;
    case RC_ADDR(0x00001830u): goto L_1830;
    case RC_ADDR(0x00001832u): goto L_1832;
    case RC_ADDR(0x00001836u): goto L_1836;
    case RC_ADDR(0x0000183au): goto L_183A;
    case RC_ADDR(0x0000183cu): goto L_183C;
    case RC_ADDR(0x00001840u): goto L_1840;
    case RC_ADDR(0x00001844u): goto L_1844;
    case RC_ADDR(0x00001848u): goto L_1848;
    case RC_ADDR(0x0000184eu): goto L_184E;
    case RC_ADDR(0x00001852u): goto L_1852;
    case RC_ADDR(0x00001856u): goto L_1856;
    case RC_ADDR(0x0000185au): goto L_185A;
    case RC_ADDR(0x0000185cu): goto L_185C;
    case RC_ADDR(0x0000185eu): goto L_185E;
    case RC_ADDR(0x00001862u): goto L_1862;
    case RC_ADDR(0x00001864u): goto L_1864;
    case RC_ADDR(0x00001866u): goto L_1866;
    case RC_ADDR(0x0000186au): goto L_186A;
    case RC_ADDR(0x0000186cu): goto L_186C;
    case RC_ADDR(0x00001872u): goto L_1872;
    case RC_ADDR(0x00001874u): goto L_1874;
    case RC_ADDR(0x00001878u): goto L_1878;
    case RC_ADDR(0x0000187au): goto L_187A;
    case RC_ADDR(0x0000187cu): goto L_187C;
    case RC_ADDR(0x0000187eu): goto L_187E;
    case RC_ADDR(0x00001882u): goto L_1882;
    case RC_ADDR(0x00001884u): goto L_1884;
    case RC_ADDR(0x00001886u): goto L_1886;
    case RC_ADDR(0x00001888u): goto L_1888;
    case RC_ADDR(0x0000188cu): goto L_188C;
    case RC_ADDR(0x0000188eu): goto L_188E;
    case RC_ADDR(0x00001890u): goto L_1890;
    case RC_ADDR(0x00001894u): goto L_1894;
    case RC_ADDR(0x00001896u): goto L_1896;
    case RC_ADDR(0x0000189au): goto L_189A;
    case RC_ADDR(0x0000189eu): goto L_189E;
    case RC_ADDR(0x000018a0u): goto L_18A0;
    case RC_ADDR(0x000018a2u): goto L_18A2;
    case RC_ADDR(0x000018a6u): goto L_18A6;
    case RC_ADDR(0x000018acu): goto L_18AC;
    case RC_ADDR(0x000018aeu): goto L_18AE;
    case RC_ADDR(0x000018b2u): goto L_18B2;
    case RC_ADDR(0x000018b6u): goto L_18B6;
    case RC_ADDR(0x000018b8u): goto L_18B8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1826:
    /* 00001826   4  link.w A5,#ffffffee */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001826u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x12u;

L_182A:
    /* 0000182a   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000182au);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_182E:
    /* 0000182e   2  move.b (A0),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000182eu);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1830:
    /* 00001830   2  ext.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001830u);
    rc_ext_w(c, 0);

L_1832:
    /* 00001832   4  move.w D0,(fffffff4,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001832u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1836:
    /* 00001836   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001836u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_183A:
    /* 0000183a   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000183au);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_183C:
    /* 0000183c   4  move.b (27,A0),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000183cu);
    t0 = rc_rd8(c, m, (c->a[0] + 0x27u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1840:
    /* 00001840   4  move.w D0,(fffffff6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001840u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1844:
    /* 00001844   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001844u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1848:
    /* 00001848   6  move.l (28,A0),(ffffffee,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001848u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x28u));
    rc_wr32(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_184E:
    /* 0000184e   4  clr.w (fffffff2,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000184eu);
    rc_wr16(c, m, (c->a[5] - 0xeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1852:
    /* 00001852   4  move.w (fffffff6,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001852u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1856:
    /* 00001856   4  subq.w #1,(fffffff6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001856u);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_185A:
    /* 0000185a   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000185au);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_185C:
    /* 0000185c   2  beq 000018ae */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000185cu);
    if (rc_cond(c, 7)) goto L_18AE;

L_185E:
    /* 0000185e   4  movea.l (ffffffee,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000185eu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x12u));
    c->a[0] = t0;

L_1862:
    /* 00001862   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001862u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1864:
    /* 00001864   2  move.b (A0),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001864u);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1866:
    /* 00001866   4  cmp.w #ff,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001866u);
    t0 = 0x000000ffu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_186A:
    /* 0000186a   2  bne 00001874 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000186au);
    if (rc_cond(c, 6)) goto L_1874;

L_186C:
    /* 0000186c   6  move.w #1,(ffffcf4a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000186cu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x30b6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1872:
    /* 00001872   2  bra 000018a2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001872u);
    goto L_18A2;

L_1874:
    /* 00001874   4  movea.l (ffffffee,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001874u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x12u));
    c->a[0] = t0;

L_1878:
    /* 00001878   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001878u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_187A:
    /* 0000187a   2  move.b (A0),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000187au);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_187C:
    /* 0000187c   2  move.w D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000187cu);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_187E:
    /* 0000187e   4  jsr (ffff8086,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000187eu);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x00001882u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000711cu);
    return;

L_1882:
    /* 00001882   2  addq.w #2,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001882u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1884:
    /* 00001884   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001884u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1886:
    /* 00001886   2  beq 000018a2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001886u);
    if (rc_cond(c, 7)) goto L_18A2;

L_1888:
    /* 00001888   4  movea.l (ffffffee,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001888u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x12u));
    c->a[0] = t0;

L_188C:
    /* 0000188c   2  addq.l #2,A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000188cu);
    c->a[0] += 0x00000002u;

L_188E:
    /* 0000188e   2  move.l A0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000188eu);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1890:
    /* 00001890   4  jsr (000016c0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001890u);
    rc_push32(c, m, RC_ADDR(0x00001894u));
    rc_depth++;
    c->pc = RC_ADDR(0x000016c0u);
    return;

L_1894:
    /* 00001894   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001894u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1896:
    /* 00001896   4  move.w D0,(fffffff4,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001896u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_189A:
    /* 0000189a   4  move.w (fffffff4,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000189au);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_189E:
    /* 0000189e   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000189eu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_18A0:
    /* 000018a0   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000018a0u);
    rc_ret(c, m);
    return;

L_18A2:
    /* 000018a2   4  movea.l (ffffffee,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000018a2u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x12u));
    c->a[0] = t0;

L_18A6:
    /* 000018a6   6  move.l (6,A0),(ffffffee,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000018a6u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x6u));
    rc_wr32(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18AC:
    /* 000018ac   2  bra 00001852 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000018acu);
    rc_tick();
    goto L_1852;

L_18AE:
    /* 000018ae   4  move.w (fffffff4,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000018aeu);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18B2:
    /* 000018b2   4  jsr (000017f0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000018b2u);
    rc_push32(c, m, RC_ADDR(0x000018b6u));
    rc_depth++;
    c->pc = RC_ADDR(0x000017f0u);
    return;

L_18B6:
    /* 000018b6   2  addq.w #2,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000018b6u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_18B8:
    /* 000018b8   2  bra 0000189e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000018b8u);
    rc_tick();
    goto L_189E;

}
