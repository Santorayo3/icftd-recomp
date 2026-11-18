/* fn_000018d0 - 384 byte(s), 100 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000018d0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000018d0u): goto L_18D0;
    case RC_ADDR(0x000018d4u): goto L_18D4;
    case RC_ADDR(0x000018d8u): goto L_18D8;
    case RC_ADDR(0x000018dcu): goto L_18DC;
    case RC_ADDR(0x000018e2u): goto L_18E2;
    case RC_ADDR(0x000018e8u): goto L_18E8;
    case RC_ADDR(0x000018ecu): goto L_18EC;
    case RC_ADDR(0x000018f0u): goto L_18F0;
    case RC_ADDR(0x000018f4u): goto L_18F4;
    case RC_ADDR(0x000018f8u): goto L_18F8;
    case RC_ADDR(0x000018feu): goto L_18FE;
    case RC_ADDR(0x00001902u): goto L_1902;
    case RC_ADDR(0x00001906u): goto L_1906;
    case RC_ADDR(0x00001908u): goto L_1908;
    case RC_ADDR(0x0000190cu): goto L_190C;
    case RC_ADDR(0x00001910u): goto L_1910;
    case RC_ADDR(0x00001914u): goto L_1914;
    case RC_ADDR(0x00001916u): goto L_1916;
    case RC_ADDR(0x0000191au): goto L_191A;
    case RC_ADDR(0x0000191eu): goto L_191E;
    case RC_ADDR(0x00001922u): goto L_1922;
    case RC_ADDR(0x00001926u): goto L_1926;
    case RC_ADDR(0x0000192au): goto L_192A;
    case RC_ADDR(0x00001930u): goto L_1930;
    case RC_ADDR(0x00001932u): goto L_1932;
    case RC_ADDR(0x00001936u): goto L_1936;
    case RC_ADDR(0x0000193au): goto L_193A;
    case RC_ADDR(0x0000193eu): goto L_193E;
    case RC_ADDR(0x00001944u): goto L_1944;
    case RC_ADDR(0x00001948u): goto L_1948;
    case RC_ADDR(0x0000194eu): goto L_194E;
    case RC_ADDR(0x00001952u): goto L_1952;
    case RC_ADDR(0x00001956u): goto L_1956;
    case RC_ADDR(0x0000195au): goto L_195A;
    case RC_ADDR(0x0000195cu): goto L_195C;
    case RC_ADDR(0x00001960u): goto L_1960;
    case RC_ADDR(0x00001962u): goto L_1962;
    case RC_ADDR(0x00001966u): goto L_1966;
    case RC_ADDR(0x00001968u): goto L_1968;
    case RC_ADDR(0x0000196cu): goto L_196C;
    case RC_ADDR(0x00001970u): goto L_1970;
    case RC_ADDR(0x00001974u): goto L_1974;
    case RC_ADDR(0x00001976u): goto L_1976;
    case RC_ADDR(0x00001978u): goto L_1978;
    case RC_ADDR(0x0000197cu): goto L_197C;
    case RC_ADDR(0x00001980u): goto L_1980;
    case RC_ADDR(0x00001984u): goto L_1984;
    case RC_ADDR(0x0000198au): goto L_198A;
    case RC_ADDR(0x0000198eu): goto L_198E;
    case RC_ADDR(0x00001994u): goto L_1994;
    case RC_ADDR(0x00001998u): goto L_1998;
    case RC_ADDR(0x0000199au): goto L_199A;
    case RC_ADDR(0x0000199eu): goto L_199E;
    case RC_ADDR(0x000019a0u): goto L_19A0;
    case RC_ADDR(0x000019a4u): goto L_19A4;
    case RC_ADDR(0x000019a8u): goto L_19A8;
    case RC_ADDR(0x000019acu): goto L_19AC;
    case RC_ADDR(0x000019aeu): goto L_19AE;
    case RC_ADDR(0x000019b2u): goto L_19B2;
    case RC_ADDR(0x000019b6u): goto L_19B6;
    case RC_ADDR(0x000019bau): goto L_19BA;
    case RC_ADDR(0x000019beu): goto L_19BE;
    case RC_ADDR(0x000019c2u): goto L_19C2;
    case RC_ADDR(0x000019c4u): goto L_19C4;
    case RC_ADDR(0x000019c8u): goto L_19C8;
    case RC_ADDR(0x000019ccu): goto L_19CC;
    case RC_ADDR(0x000019d2u): goto L_19D2;
    case RC_ADDR(0x000019d6u): goto L_19D6;
    case RC_ADDR(0x000019d8u): goto L_19D8;
    case RC_ADDR(0x000019dcu): goto L_19DC;
    case RC_ADDR(0x000019e2u): goto L_19E2;
    case RC_ADDR(0x000019e6u): goto L_19E6;
    case RC_ADDR(0x000019e8u): goto L_19E8;
    case RC_ADDR(0x000019ecu): goto L_19EC;
    case RC_ADDR(0x000019eeu): goto L_19EE;
    case RC_ADDR(0x000019f2u): goto L_19F2;
    case RC_ADDR(0x000019f6u): goto L_19F6;
    case RC_ADDR(0x000019fau): goto L_19FA;
    case RC_ADDR(0x000019fcu): goto L_19FC;
    case RC_ADDR(0x00001a02u): goto L_1A02;
    case RC_ADDR(0x00001a04u): goto L_1A04;
    case RC_ADDR(0x00001a08u): goto L_1A08;
    case RC_ADDR(0x00001a0eu): goto L_1A0E;
    case RC_ADDR(0x00001a12u): goto L_1A12;
    case RC_ADDR(0x00001a14u): goto L_1A14;
    case RC_ADDR(0x00001a18u): goto L_1A18;
    case RC_ADDR(0x00001a1eu): goto L_1A1E;
    case RC_ADDR(0x00001a22u): goto L_1A22;
    case RC_ADDR(0x00001a26u): goto L_1A26;
    case RC_ADDR(0x00001a2au): goto L_1A2A;
    case RC_ADDR(0x00001a2cu): goto L_1A2C;
    case RC_ADDR(0x00001a32u): goto L_1A32;
    case RC_ADDR(0x00001a34u): goto L_1A34;
    case RC_ADDR(0x00001a38u): goto L_1A38;
    case RC_ADDR(0x00001a3cu): goto L_1A3C;
    case RC_ADDR(0x00001a40u): goto L_1A40;
    case RC_ADDR(0x00001a42u): goto L_1A42;
    case RC_ADDR(0x00001a48u): goto L_1A48;
    case RC_ADDR(0x00001a4cu): goto L_1A4C;
    case RC_ADDR(0x00001a4eu): goto L_1A4E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_18D0:
    /* 000018d0   4  link.w A5,#ffffffd0 */
    c->pc = RC_ADDR(0x000018d0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x30u;

L_18D4:
    /* 000018d4   4  tst.l (fffff74c,A4) */
    c->pc = RC_ADDR(0x000018d4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x8b4u));
    rc_set_nzvc(c, t0, RC_L);

L_18D8:
    /* 000018d8   4  beq 00001a4c */
    c->pc = RC_ADDR(0x000018d8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A4C;

L_18DC:
    /* 000018dc   6  move.w (fffff742,A4),(ffffffd4,A5) */
    c->pc = RC_ADDR(0x000018dcu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x8beu));
    rc_wr16(c, m, (c->a[5] - 0x2cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18E2:
    /* 000018e2   6  move.l (fffff744,A4),(fffffff2,A5) */
    c->pc = RC_ADDR(0x000018e2u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x8bcu));
    rc_wr32(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18E8:
    /* 000018e8   4  tst.w (ffffffd4,A5) */
    c->pc = RC_ADDR(0x000018e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2cu));
    rc_set_nzvc(c, t0, RC_W);

L_18EC:
    /* 000018ec   4  beq 00001a4c */
    c->pc = RC_ADDR(0x000018ecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A4C;

L_18F0:
    /* 000018f0   4  subq.w #1,(ffffffd4,A5) */
    c->pc = RC_ADDR(0x000018f0u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_18F4:
    /* 000018f4   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x000018f4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_18F8:
    /* 000018f8   6  move.l (e,A0),(ffffffee,A5) */
    c->pc = RC_ADDR(0x000018f8u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0xeu));
    rc_wr32(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18FE:
    /* 000018fe   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x000018feu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_1902:
    /* 00001902   4  move.b (1,A0),D0 */
    c->pc = RC_ADDR(0x00001902u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1906:
    /* 00001906   2  ext.w D0 */
    c->pc = RC_ADDR(0x00001906u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_1908:
    /* 00001908   4  move.w D0,(ffffffd2,A5) */
    c->pc = RC_ADDR(0x00001908u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_190C:
    /* 0000190c   4  beq 000019ba */
    c->pc = RC_ADDR(0x0000190cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19BA;

L_1910:
    /* 00001910   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x00001910u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_1914:
    /* 00001914   2  addq.l #2,A0 */
    c->pc = RC_ADDR(0x00001914u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000002u;

L_1916:
    /* 00001916   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00001916u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_191A:
    /* 0000191a   4  tst.w (ffffffd2,A5) */
    c->pc = RC_ADDR(0x0000191au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2eu));
    rc_set_nzvc(c, t0, RC_W);

L_191E:
    /* 0000191e   4  beq 000019ba */
    c->pc = RC_ADDR(0x0000191eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19BA;

L_1922:
    /* 00001922   4  subq.w #1,(ffffffd2,A5) */
    c->pc = RC_ADDR(0x00001922u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1926:
    /* 00001926   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00001926u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_192A:
    /* 0000192a   6  cmpi.b #64,(4,A0) */
    c->pc = RC_ADDR(0x0000192au);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[0] + 0x4u));
    rc_cmp(c, RC_B, t0, 0x00000064u);

L_1930:
    /* 00001930   2  bne 00001978 */
    c->pc = RC_ADDR(0x00001930u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1978;

L_1932:
    /* 00001932   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00001932u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1936:
    /* 00001936   4  move.l (A0),(ffffffe2,A5) */
    c->pc = RC_ADDR(0x00001936u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_193A:
    /* 0000193a   4  movea.l (ffffffe2,A5),A0 */
    c->pc = RC_ADDR(0x0000193au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_193E:
    /* 0000193e   6  move.b (14,A0),(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000193eu);
    rc_step(c, m, 20);
    t0 = rc_rd8(c, m, (c->a[0] + 0x14u));
    rc_wr8(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1944:
    /* 00001944   4  movea.l (ffffffe2,A5),A0 */
    c->pc = RC_ADDR(0x00001944u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_1948:
    /* 00001948   6  move.l (10,A0),(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001948u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x10u));
    rc_wr32(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_194E:
    /* 0000194e   4  movea.l (ffffffe2,A5),A0 */
    c->pc = RC_ADDR(0x0000194eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_1952:
    /* 00001952   4  move.l (c,A0),-(A7) */
    c->pc = RC_ADDR(0x00001952u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1956:
    /* 00001956   4  jsr (000018a8) */
    c->pc = RC_ADDR(0x00001956u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000195au));
    rc_depth++;
    c->pc = RC_ADDR(0x000018a8u);
    return;

L_195A:
    /* 0000195a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000195au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_195C:
    /* 0000195c   4  movea.l (ffffffe2,A5),A0 */
    c->pc = RC_ADDR(0x0000195cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_1960:
    /* 00001960   2  move.l (A0),-(A7) */
    c->pc = RC_ADDR(0x00001960u);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1962:
    /* 00001962   4  jsr (000018a8) */
    c->pc = RC_ADDR(0x00001962u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001966u));
    rc_depth++;
    c->pc = RC_ADDR(0x000018a8u);
    return;

L_1966:
    /* 00001966   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00001966u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1968:
    /* 00001968   4  pea (00000016).l */
    c->pc = RC_ADDR(0x00001968u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000016u);

L_196C:
    /* 0000196c   4  move.l (ffffffe2,A5),-(A7) */
    c->pc = RC_ADDR(0x0000196cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1970:
    /* 00001970   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00001970u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00001974u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1974:
    /* 00001974   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00001974u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1976:
    /* 00001976   2  bra 000019ae */
    c->pc = RC_ADDR(0x00001976u);
    rc_step(c, m, 10);
    goto L_19AE;

L_1978:
    /* 00001978   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00001978u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_197C:
    /* 0000197c   4  move.l (A0),(ffffffde,A5) */
    c->pc = RC_ADDR(0x0000197cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x22u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1980:
    /* 00001980   4  movea.l (ffffffde,A5),A0 */
    c->pc = RC_ADDR(0x00001980u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x22u));
    c->a[0] = t0;

L_1984:
    /* 00001984   6  move.b (8,A0),(fffffffa,A5) */
    c->pc = RC_ADDR(0x00001984u);
    rc_step(c, m, 20);
    t0 = rc_rd8(c, m, (c->a[0] + 0x8u));
    rc_wr8(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_198A:
    /* 0000198a   4  movea.l (ffffffde,A5),A0 */
    c->pc = RC_ADDR(0x0000198au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x22u));
    c->a[0] = t0;

L_198E:
    /* 0000198e   6  move.l (4,A0),(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000198eu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    rc_wr32(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1994:
    /* 00001994   4  movea.l (ffffffde,A5),A0 */
    c->pc = RC_ADDR(0x00001994u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x22u));
    c->a[0] = t0;

L_1998:
    /* 00001998   2  move.l (A0),-(A7) */
    c->pc = RC_ADDR(0x00001998u);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_199A:
    /* 0000199a   4  jsr (000018a8) */
    c->pc = RC_ADDR(0x0000199au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000199eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000018a8u);
    return;

L_199E:
    /* 0000199e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000199eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_19A0:
    /* 000019a0   4  pea (0000000a).l */
    c->pc = RC_ADDR(0x000019a0u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000au);

L_19A4:
    /* 000019a4   4  move.l (ffffffde,A5),-(A7) */
    c->pc = RC_ADDR(0x000019a4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x22u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_19A8:
    /* 000019a8   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x000019a8u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x000019acu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_19AC:
    /* 000019ac   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000019acu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_19AE:
    /* 000019ae   4  lea (fffffff6,A5),A0 */
    c->pc = RC_ADDR(0x000019aeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0xau);

L_19B2:
    /* 000019b2   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000019b2u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_19B6:
    /* 000019b6   4  bra 0000191a */
    c->pc = RC_ADDR(0x000019b6u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_191A;

L_19BA:
    /* 000019ba   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x000019bau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_19BE:
    /* 000019be   4  move.b (9,A0),D0 */
    c->pc = RC_ADDR(0x000019beu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x9u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_19C2:
    /* 000019c2   2  ext.w D0 */
    c->pc = RC_ADDR(0x000019c2u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_19C4:
    /* 000019c4   4  move.w D0,(ffffffd0,A5) */
    c->pc = RC_ADDR(0x000019c4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x30u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C8:
    /* 000019c8   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x000019c8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_19CC:
    /* 000019cc   6  move.l (a,A0),(ffffffea,A5) */
    c->pc = RC_ADDR(0x000019ccu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0xau));
    rc_wr32(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_19D2:
    /* 000019d2   4  tst.l (ffffffea,A5) */
    c->pc = RC_ADDR(0x000019d2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    rc_set_nzvc(c, t0, RC_L);

L_19D6:
    /* 000019d6   2  beq 00001a04 */
    c->pc = RC_ADDR(0x000019d6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A04;

L_19D8:
    /* 000019d8   4  movea.l (ffffffea,A5),A0 */
    c->pc = RC_ADDR(0x000019d8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_19DC:
    /* 000019dc   6  move.l (8,A0),(ffffffe6,A5) */
    c->pc = RC_ADDR(0x000019dcu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x1au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_19E2:
    /* 000019e2   4  movea.l (ffffffea,A5),A0 */
    c->pc = RC_ADDR(0x000019e2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_19E6:
    /* 000019e6   2  move.l (A0),-(A7) */
    c->pc = RC_ADDR(0x000019e6u);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_19E8:
    /* 000019e8   4  jsr (000018a8) */
    c->pc = RC_ADDR(0x000019e8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000019ecu));
    rc_depth++;
    c->pc = RC_ADDR(0x000018a8u);
    return;

L_19EC:
    /* 000019ec   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000019ecu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_19EE:
    /* 000019ee   4  pea (0000000e).l */
    c->pc = RC_ADDR(0x000019eeu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000eu);

L_19F2:
    /* 000019f2   4  move.l (ffffffea,A5),-(A7) */
    c->pc = RC_ADDR(0x000019f2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_19F6:
    /* 000019f6   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x000019f6u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x000019fau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_19FA:
    /* 000019fa   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000019fau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_19FC:
    /* 000019fc   6  move.l (ffffffe6,A5),(ffffffea,A5) */
    c->pc = RC_ADDR(0x000019fcu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1au));
    rc_wr32(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A02:
    /* 00001a02   2  bra 000019d2 */
    c->pc = RC_ADDR(0x00001a02u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_19D2;

L_1A04:
    /* 00001a04   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x00001a04u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_1A08:
    /* 00001a08   6  move.l (28,A0),(ffffffda,A5) */
    c->pc = RC_ADDR(0x00001a08u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x28u));
    rc_wr32(c, m, (c->a[5] - 0x26u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A0E:
    /* 00001a0e   4  tst.l (ffffffda,A5) */
    c->pc = RC_ADDR(0x00001a0eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x26u));
    rc_set_nzvc(c, t0, RC_L);

L_1A12:
    /* 00001a12   2  beq 00001a34 */
    c->pc = RC_ADDR(0x00001a12u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A34;

L_1A14:
    /* 00001a14   4  movea.l (ffffffda,A5),A0 */
    c->pc = RC_ADDR(0x00001a14u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x26u));
    c->a[0] = t0;

L_1A18:
    /* 00001a18   6  move.l (6,A0),(ffffffd6,A5) */
    c->pc = RC_ADDR(0x00001a18u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x6u));
    rc_wr32(c, m, (c->a[5] - 0x2au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A1E:
    /* 00001a1e   4  pea (0000000a).l */
    c->pc = RC_ADDR(0x00001a1eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000au);

L_1A22:
    /* 00001a22   4  move.l (ffffffda,A5),-(A7) */
    c->pc = RC_ADDR(0x00001a22u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x26u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A26:
    /* 00001a26   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00001a26u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00001a2au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1A2A:
    /* 00001a2a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00001a2au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1A2C:
    /* 00001a2c   6  move.l (ffffffd6,A5),(ffffffda,A5) */
    c->pc = RC_ADDR(0x00001a2cu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] - 0x2au));
    rc_wr32(c, m, (c->a[5] - 0x26u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A32:
    /* 00001a32   2  bra 00001a0e */
    c->pc = RC_ADDR(0x00001a32u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1A0E;

L_1A34:
    /* 00001a34   4  pea (0000002c).l */
    c->pc = RC_ADDR(0x00001a34u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000002cu);

L_1A38:
    /* 00001a38   4  move.l (fffffff2,A5),-(A7) */
    c->pc = RC_ADDR(0x00001a38u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A3C:
    /* 00001a3c   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00001a3cu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00001a40u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1A40:
    /* 00001a40   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00001a40u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1A42:
    /* 00001a42   6  move.l (ffffffee,A5),(fffffff2,A5) */
    c->pc = RC_ADDR(0x00001a42u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] - 0x12u));
    rc_wr32(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A48:
    /* 00001a48   4  bra 000018e8 */
    c->pc = RC_ADDR(0x00001a48u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_18E8;

L_1A4C:
    /* 00001a4c   2  unlk A5 */
    c->pc = RC_ADDR(0x00001a4cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1A4E:
    /* 00001a4e   2  rts */
    c->pc = RC_ADDR(0x00001a4eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
