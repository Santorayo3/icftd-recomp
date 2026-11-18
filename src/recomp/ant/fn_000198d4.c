/* fn_000198d4 - 468 byte(s), 126 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000198d4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000198d4u): goto L_198D4;
    case RC_ADDR(0x000198d8u): goto L_198D8;
    case RC_ADDR(0x000198deu): goto L_198DE;
    case RC_ADDR(0x000198e4u): goto L_198E4;
    case RC_ADDR(0x000198eau): goto L_198EA;
    case RC_ADDR(0x000198f2u): goto L_198F2;
    case RC_ADDR(0x000198f8u): goto L_198F8;
    case RC_ADDR(0x000198fcu): goto L_198FC;
    case RC_ADDR(0x00019900u): goto L_19900;
    case RC_ADDR(0x00019904u): goto L_19904;
    case RC_ADDR(0x00019906u): goto L_19906;
    case RC_ADDR(0x0001990au): goto L_1990A;
    case RC_ADDR(0x0001990eu): goto L_1990E;
    case RC_ADDR(0x00019910u): goto L_19910;
    case RC_ADDR(0x00019916u): goto L_19916;
    case RC_ADDR(0x0001991au): goto L_1991A;
    case RC_ADDR(0x0001991cu): goto L_1991C;
    case RC_ADDR(0x00019920u): goto L_19920;
    case RC_ADDR(0x00019924u): goto L_19924;
    case RC_ADDR(0x00019926u): goto L_19926;
    case RC_ADDR(0x0001992cu): goto L_1992C;
    case RC_ADDR(0x00019930u): goto L_19930;
    case RC_ADDR(0x00019934u): goto L_19934;
    case RC_ADDR(0x00019938u): goto L_19938;
    case RC_ADDR(0x0001993au): goto L_1993A;
    case RC_ADDR(0x00019940u): goto L_19940;
    case RC_ADDR(0x00019944u): goto L_19944;
    case RC_ADDR(0x00019946u): goto L_19946;
    case RC_ADDR(0x0001994cu): goto L_1994C;
    case RC_ADDR(0x00019950u): goto L_19950;
    case RC_ADDR(0x00019954u): goto L_19954;
    case RC_ADDR(0x00019956u): goto L_19956;
    case RC_ADDR(0x0001995au): goto L_1995A;
    case RC_ADDR(0x0001995eu): goto L_1995E;
    case RC_ADDR(0x00019962u): goto L_19962;
    case RC_ADDR(0x00019966u): goto L_19966;
    case RC_ADDR(0x00019968u): goto L_19968;
    case RC_ADDR(0x0001996cu): goto L_1996C;
    case RC_ADDR(0x00019970u): goto L_19970;
    case RC_ADDR(0x00019974u): goto L_19974;
    case RC_ADDR(0x00019978u): goto L_19978;
    case RC_ADDR(0x0001997eu): goto L_1997E;
    case RC_ADDR(0x00019984u): goto L_19984;
    case RC_ADDR(0x00019988u): goto L_19988;
    case RC_ADDR(0x0001998eu): goto L_1998E;
    case RC_ADDR(0x00019992u): goto L_19992;
    case RC_ADDR(0x00019994u): goto L_19994;
    case RC_ADDR(0x00019996u): goto L_19996;
    case RC_ADDR(0x0001999au): goto L_1999A;
    case RC_ADDR(0x0001999eu): goto L_1999E;
    case RC_ADDR(0x000199a2u): goto L_199A2;
    case RC_ADDR(0x000199a6u): goto L_199A6;
    case RC_ADDR(0x000199a8u): goto L_199A8;
    case RC_ADDR(0x000199acu): goto L_199AC;
    case RC_ADDR(0x000199aeu): goto L_199AE;
    case RC_ADDR(0x000199b2u): goto L_199B2;
    case RC_ADDR(0x000199b6u): goto L_199B6;
    case RC_ADDR(0x000199b8u): goto L_199B8;
    case RC_ADDR(0x000199bcu): goto L_199BC;
    case RC_ADDR(0x000199c0u): goto L_199C0;
    case RC_ADDR(0x000199c2u): goto L_199C2;
    case RC_ADDR(0x000199c6u): goto L_199C6;
    case RC_ADDR(0x000199cau): goto L_199CA;
    case RC_ADDR(0x000199ceu): goto L_199CE;
    case RC_ADDR(0x000199d2u): goto L_199D2;
    case RC_ADDR(0x000199d6u): goto L_199D6;
    case RC_ADDR(0x000199dau): goto L_199DA;
    case RC_ADDR(0x000199deu): goto L_199DE;
    case RC_ADDR(0x000199e2u): goto L_199E2;
    case RC_ADDR(0x000199e6u): goto L_199E6;
    case RC_ADDR(0x000199eau): goto L_199EA;
    case RC_ADDR(0x000199eeu): goto L_199EE;
    case RC_ADDR(0x000199f2u): goto L_199F2;
    case RC_ADDR(0x000199f6u): goto L_199F6;
    case RC_ADDR(0x000199fcu): goto L_199FC;
    case RC_ADDR(0x000199feu): goto L_199FE;
    case RC_ADDR(0x00019a02u): goto L_19A02;
    case RC_ADDR(0x00019a04u): goto L_19A04;
    case RC_ADDR(0x00019a08u): goto L_19A08;
    case RC_ADDR(0x00019a0au): goto L_19A0A;
    case RC_ADDR(0x00019a10u): goto L_19A10;
    case RC_ADDR(0x00019a12u): goto L_19A12;
    case RC_ADDR(0x00019a16u): goto L_19A16;
    case RC_ADDR(0x00019a18u): goto L_19A18;
    case RC_ADDR(0x00019a1cu): goto L_19A1C;
    case RC_ADDR(0x00019a20u): goto L_19A20;
    case RC_ADDR(0x00019a24u): goto L_19A24;
    case RC_ADDR(0x00019a26u): goto L_19A26;
    case RC_ADDR(0x00019a2au): goto L_19A2A;
    case RC_ADDR(0x00019a2eu): goto L_19A2E;
    case RC_ADDR(0x00019a32u): goto L_19A32;
    case RC_ADDR(0x00019a36u): goto L_19A36;
    case RC_ADDR(0x00019a3au): goto L_19A3A;
    case RC_ADDR(0x00019a3eu): goto L_19A3E;
    case RC_ADDR(0x00019a42u): goto L_19A42;
    case RC_ADDR(0x00019a44u): goto L_19A44;
    case RC_ADDR(0x00019a48u): goto L_19A48;
    case RC_ADDR(0x00019a4au): goto L_19A4A;
    case RC_ADDR(0x00019a4eu): goto L_19A4E;
    case RC_ADDR(0x00019a50u): goto L_19A50;
    case RC_ADDR(0x00019a54u): goto L_19A54;
    case RC_ADDR(0x00019a56u): goto L_19A56;
    case RC_ADDR(0x00019a5au): goto L_19A5A;
    case RC_ADDR(0x00019a5eu): goto L_19A5E;
    case RC_ADDR(0x00019a62u): goto L_19A62;
    case RC_ADDR(0x00019a64u): goto L_19A64;
    case RC_ADDR(0x00019a66u): goto L_19A66;
    case RC_ADDR(0x00019a6au): goto L_19A6A;
    case RC_ADDR(0x00019a6eu): goto L_19A6E;
    case RC_ADDR(0x00019a72u): goto L_19A72;
    case RC_ADDR(0x00019a74u): goto L_19A74;
    case RC_ADDR(0x00019a78u): goto L_19A78;
    case RC_ADDR(0x00019a7au): goto L_19A7A;
    case RC_ADDR(0x00019a7eu): goto L_19A7E;
    case RC_ADDR(0x00019a80u): goto L_19A80;
    case RC_ADDR(0x00019a84u): goto L_19A84;
    case RC_ADDR(0x00019a86u): goto L_19A86;
    case RC_ADDR(0x00019a8au): goto L_19A8A;
    case RC_ADDR(0x00019a8eu): goto L_19A8E;
    case RC_ADDR(0x00019a92u): goto L_19A92;
    case RC_ADDR(0x00019a94u): goto L_19A94;
    case RC_ADDR(0x00019a98u): goto L_19A98;
    case RC_ADDR(0x00019a9cu): goto L_19A9C;
    case RC_ADDR(0x00019aa0u): goto L_19AA0;
    case RC_ADDR(0x00019aa4u): goto L_19AA4;
    case RC_ADDR(0x00019aa6u): goto L_19AA6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_198D4:
    /* 000198d4   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x000198d4u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_198D8:
    /* 000198d8   6  move.w #150,(113a,A4) */
    c->pc = RC_ADDR(0x000198d8u);
    rc_step(c, m, 16);
    t0 = 0x00000150u;
    rc_wr16(c, m, (c->a[4] + 0x113au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_198DE:
    /* 000198de   6  move.w #c8,(113c,A4) */
    c->pc = RC_ADDR(0x000198deu);
    rc_step(c, m, 16);
    t0 = 0x000000c8u;
    rc_wr16(c, m, (c->a[4] + 0x113cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_198E4:
    /* 000198e4   6  move.w #5,(113e,A4) */
    c->pc = RC_ADDR(0x000198e4u);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[4] + 0x113eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_198EA:
    /* 000198ea   8  move.l #20d0,(1140,A4) */
    c->pc = RC_ADDR(0x000198eau);
    rc_step(c, m, 24);
    t0 = 0x000020d0u;
    rc_wr32(c, m, (c->a[4] + 0x1140u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_198F2:
    /* 000198f2   6  move.w #a,(1144,A4) */
    c->pc = RC_ADDR(0x000198f2u);
    rc_step(c, m, 16);
    t0 = 0x0000000au;
    rc_wr16(c, m, (c->a[4] + 0x1144u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_198F8:
    /* 000198f8   4  jsr (ffff81e2,A4) */
    c->pc = RC_ADDR(0x000198f8u);
    rc_step(c, m, 18);
    /* vector 80 */
    rc_push32(c, m, RC_ADDR(0x000198fcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cd8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d53eu);
    return;

L_198FC:
    /* 000198fc   4  clr.w (1dc8,A4) */
    c->pc = RC_ADDR(0x000198fcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1dc8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19900:
    /* 00019900   4  tst.w (7b6,A4) */
    c->pc = RC_ADDR(0x00019900u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7b6u));
    rc_set_nzvc(c, t0, RC_W);

L_19904:
    /* 00019904   2  beq 0001991c */
    c->pc = RC_ADDR(0x00019904u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1991C;

L_19906:
    /* 00019906   4  pea (ffff9f94,A4) */
    c->pc = RC_ADDR(0x00019906u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x606cu));

L_1990A:
    /* 0001990a   4  jsr (ffff8128,A4) */
    c->pc = RC_ADDR(0x0001990au);
    rc_step(c, m, 18);
    /* vector 49 */
    rc_push32(c, m, RC_ADDR(0x0001990eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c1eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00010070u);
    return;

L_1990E:
    /* 0001990e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001990eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_19910:
    /* 00019910   6  move.w #80,(fffff7cc,A4) */
    c->pc = RC_ADDR(0x00019910u);
    rc_step(c, m, 16);
    t0 = 0x00000080u;
    rc_wr16(c, m, (c->a[4] - 0x834u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19916:
    /* 00019916   4  jsr (0001d206) */
    c->pc = RC_ADDR(0x00019916u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001991au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d206u);
    return;

L_1991A:
    /* 0001991a   2  bra 0001992c */
    c->pc = RC_ADDR(0x0001991au);
    rc_step(c, m, 10);
    goto L_1992C;

L_1991C:
    /* 0001991c   4  pea (ffffa0d2,A4) */
    c->pc = RC_ADDR(0x0001991cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x5f2eu));

L_19920:
    /* 00019920   4  jsr (ffff8128,A4) */
    c->pc = RC_ADDR(0x00019920u);
    rc_step(c, m, 18);
    /* vector 49 */
    rc_push32(c, m, RC_ADDR(0x00019924u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c1eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00010070u);
    return;

L_19924:
    /* 00019924   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00019924u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_19926:
    /* 00019926   6  move.w #50,(fffff7cc,A4) */
    c->pc = RC_ADDR(0x00019926u);
    rc_step(c, m, 16);
    t0 = 0x00000050u;
    rc_wr16(c, m, (c->a[4] - 0x834u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1992C:
    /* 0001992c   4  jsr (0001d09a) */
    c->pc = RC_ADDR(0x0001992cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00019930u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d09au);
    return;

L_19930:
    /* 00019930   4  pea (00019aa8) */
    c->pc = RC_ADDR(0x00019930u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00019aa8u));

L_19934:
    /* 00019934   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x00019934u);
    rc_step(c, m, 18);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x00019938u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023da4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022366u);
    return;

L_19938:
    /* 00019938   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00019938u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1993A:
    /* 0001993a   6  move.w #2,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001993au);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19940:
    /* 00019940   4  tst.w (7b6,A4) */
    c->pc = RC_ADDR(0x00019940u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7b6u));
    rc_set_nzvc(c, t0, RC_W);

L_19944:
    /* 00019944   2  beq 0001994c */
    c->pc = RC_ADDR(0x00019944u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1994C;

L_19946:
    /* 00019946   6  move.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00019946u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1994C:
    /* 0001994c   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x0001994cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19950:
    /* 00019950   4  jsr (0001c45c) */
    c->pc = RC_ADDR(0x00019950u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00019954u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c45cu);
    return;

L_19954:
    /* 00019954   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00019954u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_19956:
    /* 00019956   4  move.w #5,-(A7) */
    c->pc = RC_ADDR(0x00019956u);
    rc_step(c, m, 12);
    t0 = 0x00000005u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1995A:
    /* 0001995a   4  move.w #5,-(A7) */
    c->pc = RC_ADDR(0x0001995au);
    rc_step(c, m, 12);
    t0 = 0x00000005u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1995E:
    /* 0001995e   4  pea (00019ab5) */
    c->pc = RC_ADDR(0x0001995eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00019ab5u));

L_19962:
    /* 00019962   4  jsr (ffff81d0,A4) */
    c->pc = RC_ADDR(0x00019962u);
    rc_step(c, m, 18);
    /* vector 77 */
    rc_push32(c, m, RC_ADDR(0x00019966u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d222u);
    return;

L_19966:
    /* 00019966   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00019966u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_19968:
    /* 00019968   4  jsr (0001ce8e) */
    c->pc = RC_ADDR(0x00019968u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001996cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001ce8eu);
    return;

L_1996C:
    /* 0001996c   4  jsr (ffff81e8,A4) */
    c->pc = RC_ADDR(0x0001996cu);
    rc_step(c, m, 18);
    /* vector 81 */
    rc_push32(c, m, RC_ADDR(0x00019970u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cdeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d598u);
    return;

L_19970:
    /* 00019970   4  jsr (ffff81ac,A4) */
    c->pc = RC_ADDR(0x00019970u);
    rc_step(c, m, 18);
    /* vector 71 */
    rc_push32(c, m, RC_ADDR(0x00019974u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ca2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001966eu);
    return;

L_19974:
    /* 00019974   4  jsr (00019c06) */
    c->pc = RC_ADDR(0x00019974u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00019978u));
    rc_depth++;
    c->pc = RC_ADDR(0x00019c06u);
    return;

L_19978:
    /* 00019978   6  move.w #4,(1132,A4) */
    c->pc = RC_ADDR(0x00019978u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x1132u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1997E:
    /* 0001997e   6  cmpi.w #8,(1116,A4) */
    c->pc = RC_ADDR(0x0001997eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1116u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_19984:
    /* 00019984   4  bge 00019a2e */
    c->pc = RC_ADDR(0x00019984u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_19A2E;

L_19988:
    /* 00019988   6  move.w #1,(fffffa32,A4) */
    c->pc = RC_ADDR(0x00019988u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x5ceu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1998E:
    /* 0001998e   4  tst.w (fffffa32,A4) */
    /* a flag wait: rc_wait runs it natively and returns 1 when its exit branch is taken;
     * 0 means the three instructions below run instead (the reference path). */
    if (rc_wait(c, m, RC_ADDR(0x0001998eu), 12,
                RC_ADDR(0x00019992u), 10, 7,
                RC_ADDR(0x00019994u), 10,
                (c->a[4] - 0x5ceu), RC_W))
        goto L_19996;
    c->pc = RC_ADDR(0x0001998eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5ceu));
    rc_set_nzvc(c, t0, RC_W);

L_19992:
    /* 00019992   2  beq 00019996 */
    c->pc = RC_ADDR(0x00019992u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19996;

L_19994:
    /* 00019994   2  bra 0001998e */
    c->pc = RC_ADDR(0x00019994u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1998E;

L_19996:
    /* 00019996   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x00019996u);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x0001999au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c7eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013446u);
    return;

L_1999A:
    /* 0001999a   4  jsr (ffff80e6,A4) */
    c->pc = RC_ADDR(0x0001999au);
    rc_step(c, m, 18);
    /* vector 38 */
    rc_push32(c, m, RC_ADDR(0x0001999eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bdcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b03eu);
    return;

L_1999E:
    /* 0001999e   4  move.w #7,-(A7) */
    c->pc = RC_ADDR(0x0001999eu);
    rc_step(c, m, 12);
    t0 = 0x00000007u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_199A2:
    /* 000199a2   4  jsr (ffff8158,A4) */
    c->pc = RC_ADDR(0x000199a2u);
    rc_step(c, m, 18);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x000199a6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c4eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011facu);
    return;

L_199A6:
    /* 000199a6   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000199a6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_199A8:
    /* 000199a8   4  tst.w (1132,A4) */
    c->pc = RC_ADDR(0x000199a8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1132u));
    rc_set_nzvc(c, t0, RC_W);

L_199AC:
    /* 000199ac   2  beq 000199bc */
    c->pc = RC_ADDR(0x000199acu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_199BC;

L_199AE:
    /* 000199ae   4  subq.w #1,(1132,A4) */
    c->pc = RC_ADDR(0x000199aeu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1132u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_199B2:
    /* 000199b2   4  tst.w (1132,A4) */
    c->pc = RC_ADDR(0x000199b2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1132u));
    rc_set_nzvc(c, t0, RC_W);

L_199B6:
    /* 000199b6   2  bne 000199bc */
    c->pc = RC_ADDR(0x000199b6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_199BC;

L_199B8:
    /* 000199b8   4  jsr (ffff81b8,A4) */
    c->pc = RC_ADDR(0x000199b8u);
    rc_step(c, m, 18);
    /* vector 73 */
    rc_push32(c, m, RC_ADDR(0x000199bcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023caeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000197a8u);
    return;

L_199BC:
    /* 000199bc   4  move.w (1148,A4),D0 */
    c->pc = RC_ADDR(0x000199bcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1148u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_199C0:
    /* 000199c0   2  asl.w #4,D0 */
    c->pc = RC_ADDR(0x000199c0u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_199C2:
    /* 000199c2   4  sub.w #30,D0 */
    c->pc = RC_ADDR(0x000199c2u);
    rc_step(c, m, 10);
    t0 = 0x00000030u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_199C6:
    /* 000199c6   4  move.w D0,(e6c,A4) */
    c->pc = RC_ADDR(0x000199c6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xe6cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_199CA:
    /* 000199ca   4  move.w (114a,A4),D0 */
    c->pc = RC_ADDR(0x000199cau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x114au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_199CE:
    /* 000199ce   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x000199ceu);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_199D2:
    /* 000199d2   4  sub.w #28,D0 */
    c->pc = RC_ADDR(0x000199d2u);
    rc_step(c, m, 10);
    t0 = 0x00000028u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_199D6:
    /* 000199d6   4  move.w D0,(e6e,A4) */
    c->pc = RC_ADDR(0x000199d6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xe6eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_199DA:
    /* 000199da   4  jsr (0001a0f8) */
    c->pc = RC_ADDR(0x000199dau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000199deu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001a0f8u);
    return;

L_199DE:
    /* 000199de   4  jsr (0001a142) */
    c->pc = RC_ADDR(0x000199deu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000199e2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001a142u);
    return;

L_199E2:
    /* 000199e2   4  jsr (ffff817c,A4) */
    c->pc = RC_ADDR(0x000199e2u);
    rc_step(c, m, 18);
    /* vector 63 */
    rc_push32(c, m, RC_ADDR(0x000199e6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c72u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012d68u);
    return;

L_199E6:
    /* 000199e6   4  jsr (0001cd32) */
    c->pc = RC_ADDR(0x000199e6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000199eau));
    rc_depth++;
    c->pc = RC_ADDR(0x0001cd32u);
    return;

L_199EA:
    /* 000199ea   4  jsr (0001ba86) */
    c->pc = RC_ADDR(0x000199eau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000199eeu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001ba86u);
    return;

L_199EE:
    /* 000199ee   4  jsr (0001bdda) */
    c->pc = RC_ADDR(0x000199eeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000199f2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001bddau);
    return;

L_199F2:
    /* 000199f2   4  jsr (0001a8c2) */
    c->pc = RC_ADDR(0x000199f2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000199f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001a8c2u);
    return;

L_199F6:
    /* 000199f6   6  cmpi.w #14,(26e8,A4) */
    c->pc = RC_ADDR(0x000199f6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26e8u));
    rc_cmp(c, RC_W, t0, 0x00000014u);

L_199FC:
    /* 000199fc   2  blt 00019a04 */
    c->pc = RC_ADDR(0x000199fcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_19A04;

L_199FE:
    /* 000199fe   4  tst.w (26d8,A4) */
    c->pc = RC_ADDR(0x000199feu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26d8u));
    rc_set_nzvc(c, t0, RC_W);

L_19A02:
    /* 00019a02   2  blt 00019a1c */
    c->pc = RC_ADDR(0x00019a02u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_19A1C;

L_19A04:
    /* 00019a04   4  tst.w (2968,A4) */
    c->pc = RC_ADDR(0x00019a04u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2968u));
    rc_set_nzvc(c, t0, RC_W);

L_19A08:
    /* 00019a08   2  bne 00019a12 */
    c->pc = RC_ADDR(0x00019a08u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_19A12;

L_19A0A:
    /* 00019a0a   6  cmpi.w #1,(7a4,A4) */
    c->pc = RC_ADDR(0x00019a0au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7a4u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_19A10:
    /* 00019a10   2  beq 00019a18 */
    c->pc = RC_ADDR(0x00019a10u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19A18;

L_19A12:
    /* 00019a12   4  jsr (0001a254) */
    c->pc = RC_ADDR(0x00019a12u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00019a16u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001a254u);
    return;

L_19A16:
    /* 00019a16   2  bra 00019a1c */
    c->pc = RC_ADDR(0x00019a16u);
    rc_step(c, m, 10);
    goto L_19A1C;

L_19A18:
    /* 00019a18   4  clr.w (700,A4) */
    c->pc = RC_ADDR(0x00019a18u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x700u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19A1C:
    /* 00019a1c   4  jsr (0001b766) */
    c->pc = RC_ADDR(0x00019a1cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00019a20u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001b766u);
    return;

L_19A20:
    /* 00019a20   4  tst.w (7b6,A4) */
    c->pc = RC_ADDR(0x00019a20u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7b6u));
    rc_set_nzvc(c, t0, RC_W);

L_19A24:
    /* 00019a24   2  beq 00019a2a */
    c->pc = RC_ADDR(0x00019a24u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19A2A;

L_19A26:
    /* 00019a26   4  jsr (0001d68a) */
    c->pc = RC_ADDR(0x00019a26u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00019a2au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d68au);
    return;

L_19A2A:
    /* 00019a2a   4  bra 0001997e */
    c->pc = RC_ADDR(0x00019a2au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1997E;

L_19A2E:
    /* 00019a2e   4  jsr (ffff812e,A4) */
    c->pc = RC_ADDR(0x00019a2eu);
    rc_step(c, m, 18);
    /* vector 50 */
    rc_push32(c, m, RC_ADDR(0x00019a32u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c24u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000104f6u);
    return;

L_19A32:
    /* 00019a32   4  jsr (ffff82a8,A4) */
    c->pc = RC_ADDR(0x00019a32u);
    rc_step(c, m, 18);
    /* vector 113 */
    rc_push32(c, m, RC_ADDR(0x00019a36u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d9eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022308u);
    return;

L_19A36:
    /* 00019a36   4  jsr (ffff81dc,A4) */
    c->pc = RC_ADDR(0x00019a36u);
    rc_step(c, m, 18);
    /* vector 79 */
    rc_push32(c, m, RC_ADDR(0x00019a3au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cd2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d51au);
    return;

L_19A3A:
    /* 00019a3a   4  jsr (ffff80d4,A4) */
    c->pc = RC_ADDR(0x00019a3au);
    rc_step(c, m, 18);
    /* vector 35 */
    rc_push32(c, m, RC_ADDR(0x00019a3eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bcau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000afb8u);
    return;

L_19A3E:
    /* 00019a3e   4  tst.w (856,A4) */
    c->pc = RC_ADDR(0x00019a3eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x856u));
    rc_set_nzvc(c, t0, RC_W);

L_19A42:
    /* 00019a42   2  bne 00019a7a */
    c->pc = RC_ADDR(0x00019a42u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_19A7A;

L_19A44:
    /* 00019a44   4  tst.w (7b6,A4) */
    c->pc = RC_ADDR(0x00019a44u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7b6u));
    rc_set_nzvc(c, t0, RC_W);

L_19A48:
    /* 00019a48   2  beq 00019a66 */
    c->pc = RC_ADDR(0x00019a48u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19A66;

L_19A4A:
    /* 00019a4a   4  tst.w (2968,A4) */
    c->pc = RC_ADDR(0x00019a4au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2968u));
    rc_set_nzvc(c, t0, RC_W);

L_19A4E:
    /* 00019a4e   2  bne 00019a66 */
    c->pc = RC_ADDR(0x00019a4eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_19A66;

L_19A50:
    /* 00019a50   4  tst.w (7a4,A4) */
    c->pc = RC_ADDR(0x00019a50u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7a4u));
    rc_set_nzvc(c, t0, RC_W);

L_19A54:
    /* 00019a54   2  bne 00019a66 */
    c->pc = RC_ADDR(0x00019a54u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_19A66;

L_19A56:
    /* 00019a56   4  move.w #7,-(A7) */
    c->pc = RC_ADDR(0x00019a56u);
    rc_step(c, m, 12);
    t0 = 0x00000007u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19A5A:
    /* 00019a5a   4  pea (00019abf) */
    c->pc = RC_ADDR(0x00019a5au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00019abfu));

L_19A5E:
    /* 00019a5e   4  jsr (00018a56) */
    c->pc = RC_ADDR(0x00019a5eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00019a62u));
    rc_depth++;
    c->pc = RC_ADDR(0x00018a56u);
    return;

L_19A62:
    /* 00019a62   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00019a62u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_19A64:
    /* 00019a64   2  bra 00019a74 */
    c->pc = RC_ADDR(0x00019a64u);
    rc_step(c, m, 10);
    goto L_19A74;

L_19A66:
    /* 00019a66   4  move.w #7,-(A7) */
    c->pc = RC_ADDR(0x00019a66u);
    rc_step(c, m, 12);
    t0 = 0x00000007u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19A6A:
    /* 00019a6a   4  pea (00019afd) */
    c->pc = RC_ADDR(0x00019a6au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00019afdu));

L_19A6E:
    /* 00019a6e   4  jsr (00018a56) */
    c->pc = RC_ADDR(0x00019a6eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00019a72u));
    rc_depth++;
    c->pc = RC_ADDR(0x00018a56u);
    return;

L_19A72:
    /* 00019a72   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00019a72u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_19A74:
    /* 00019a74   4  clr.w (858,A4) */
    c->pc = RC_ADDR(0x00019a74u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x858u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19A78:
    /* 00019a78   2  bra 00019a94 */
    c->pc = RC_ADDR(0x00019a78u);
    rc_step(c, m, 10);
    goto L_19A94;

L_19A7A:
    /* 00019a7a   4  tst.w (7b6,A4) */
    c->pc = RC_ADDR(0x00019a7au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7b6u));
    rc_set_nzvc(c, t0, RC_W);

L_19A7E:
    /* 00019a7e   2  beq 00019a94 */
    c->pc = RC_ADDR(0x00019a7eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19A94;

L_19A80:
    /* 00019a80   4  tst.w (858,A4) */
    c->pc = RC_ADDR(0x00019a80u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x858u));
    rc_set_nzvc(c, t0, RC_W);

L_19A84:
    /* 00019a84   2  bne 00019a94 */
    c->pc = RC_ADDR(0x00019a84u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_19A94;

L_19A86:
    /* 00019a86   4  move.w #7,-(A7) */
    c->pc = RC_ADDR(0x00019a86u);
    rc_step(c, m, 12);
    t0 = 0x00000007u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19A8A:
    /* 00019a8a   4  pea (00019b75) */
    c->pc = RC_ADDR(0x00019a8au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00019b75u));

L_19A8E:
    /* 00019a8e   4  jsr (00018a56) */
    c->pc = RC_ADDR(0x00019a8eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00019a92u));
    rc_depth++;
    c->pc = RC_ADDR(0x00018a56u);
    return;

L_19A92:
    /* 00019a92   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00019a92u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_19A94:
    /* 00019a94   4  jsr (ffff81be,A4) */
    c->pc = RC_ADDR(0x00019a94u);
    rc_step(c, m, 18);
    /* vector 74 */
    rc_push32(c, m, RC_ADDR(0x00019a98u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cb4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000197e8u);
    return;

L_19A98:
    /* 00019a98   4  jsr (ffff8194,A4) */
    c->pc = RC_ADDR(0x00019a98u);
    rc_step(c, m, 18);
    /* vector 67 */
    rc_push32(c, m, RC_ADDR(0x00019a9cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c8au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00018442u);
    return;

L_19A9C:
    /* 00019a9c   4  jsr (ffff81ee,A4) */
    c->pc = RC_ADDR(0x00019a9cu);
    rc_step(c, m, 18);
    /* vector 82 */
    rc_push32(c, m, RC_ADDR(0x00019aa0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ce4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d60eu);
    return;

L_19AA0:
    /* 00019aa0   4  jsr (0001d1a6) */
    c->pc = RC_ADDR(0x00019aa0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00019aa4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d1a6u);
    return;

L_19AA4:
    /* 00019aa4   2  unlk A5 */
    c->pc = RC_ADDR(0x00019aa4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_19AA6:
    /* 00019aa6   2  rts */
    c->pc = RC_ADDR(0x00019aa6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
