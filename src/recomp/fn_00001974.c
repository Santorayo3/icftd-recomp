/* fn_00001974 - 500 byte(s), 143 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00001974(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00001974u): goto L_1974;
    case RC_ADDR(0x00001978u): goto L_1978;
    case RC_ADDR(0x0000197cu): goto L_197C;
    case RC_ADDR(0x0000197eu): goto L_197E;
    case RC_ADDR(0x00001980u): goto L_1980;
    case RC_ADDR(0x00001982u): goto L_1982;
    case RC_ADDR(0x00001984u): goto L_1984;
    case RC_ADDR(0x0000198au): goto L_198A;
    case RC_ADDR(0x00001990u): goto L_1990;
    case RC_ADDR(0x00001994u): goto L_1994;
    case RC_ADDR(0x00001998u): goto L_1998;
    case RC_ADDR(0x0000199cu): goto L_199C;
    case RC_ADDR(0x000019a0u): goto L_19A0;
    case RC_ADDR(0x000019a4u): goto L_19A4;
    case RC_ADDR(0x000019a8u): goto L_19A8;
    case RC_ADDR(0x000019aau): goto L_19AA;
    case RC_ADDR(0x000019aeu): goto L_19AE;
    case RC_ADDR(0x000019b2u): goto L_19B2;
    case RC_ADDR(0x000019b4u): goto L_19B4;
    case RC_ADDR(0x000019b8u): goto L_19B8;
    case RC_ADDR(0x000019beu): goto L_19BE;
    case RC_ADDR(0x000019c0u): goto L_19C0;
    case RC_ADDR(0x000019c2u): goto L_19C2;
    case RC_ADDR(0x000019c4u): goto L_19C4;
    case RC_ADDR(0x000019c8u): goto L_19C8;
    case RC_ADDR(0x000019cau): goto L_19CA;
    case RC_ADDR(0x000019d0u): goto L_19D0;
    case RC_ADDR(0x000019d2u): goto L_19D2;
    case RC_ADDR(0x000019d8u): goto L_19D8;
    case RC_ADDR(0x000019dcu): goto L_19DC;
    case RC_ADDR(0x000019e0u): goto L_19E0;
    case RC_ADDR(0x000019e2u): goto L_19E2;
    case RC_ADDR(0x000019e6u): goto L_19E6;
    case RC_ADDR(0x000019eau): goto L_19EA;
    case RC_ADDR(0x000019eeu): goto L_19EE;
    case RC_ADDR(0x000019f0u): goto L_19F0;
    case RC_ADDR(0x000019f4u): goto L_19F4;
    case RC_ADDR(0x000019f8u): goto L_19F8;
    case RC_ADDR(0x000019fcu): goto L_19FC;
    case RC_ADDR(0x000019feu): goto L_19FE;
    case RC_ADDR(0x00001a02u): goto L_1A02;
    case RC_ADDR(0x00001a06u): goto L_1A06;
    case RC_ADDR(0x00001a08u): goto L_1A08;
    case RC_ADDR(0x00001a0cu): goto L_1A0C;
    case RC_ADDR(0x00001a10u): goto L_1A10;
    case RC_ADDR(0x00001a12u): goto L_1A12;
    case RC_ADDR(0x00001a18u): goto L_1A18;
    case RC_ADDR(0x00001a1eu): goto L_1A1E;
    case RC_ADDR(0x00001a20u): goto L_1A20;
    case RC_ADDR(0x00001a24u): goto L_1A24;
    case RC_ADDR(0x00001a26u): goto L_1A26;
    case RC_ADDR(0x00001a2cu): goto L_1A2C;
    case RC_ADDR(0x00001a2eu): goto L_1A2E;
    case RC_ADDR(0x00001a32u): goto L_1A32;
    case RC_ADDR(0x00001a34u): goto L_1A34;
    case RC_ADDR(0x00001a36u): goto L_1A36;
    case RC_ADDR(0x00001a38u): goto L_1A38;
    case RC_ADDR(0x00001a3cu): goto L_1A3C;
    case RC_ADDR(0x00001a40u): goto L_1A40;
    case RC_ADDR(0x00001a42u): goto L_1A42;
    case RC_ADDR(0x00001a46u): goto L_1A46;
    case RC_ADDR(0x00001a4au): goto L_1A4A;
    case RC_ADDR(0x00001a4eu): goto L_1A4E;
    case RC_ADDR(0x00001a52u): goto L_1A52;
    case RC_ADDR(0x00001a54u): goto L_1A54;
    case RC_ADDR(0x00001a58u): goto L_1A58;
    case RC_ADDR(0x00001a5eu): goto L_1A5E;
    case RC_ADDR(0x00001a60u): goto L_1A60;
    case RC_ADDR(0x00001a64u): goto L_1A64;
    case RC_ADDR(0x00001a68u): goto L_1A68;
    case RC_ADDR(0x00001a6cu): goto L_1A6C;
    case RC_ADDR(0x00001a70u): goto L_1A70;
    case RC_ADDR(0x00001a72u): goto L_1A72;
    case RC_ADDR(0x00001a76u): goto L_1A76;
    case RC_ADDR(0x00001a7cu): goto L_1A7C;
    case RC_ADDR(0x00001a80u): goto L_1A80;
    case RC_ADDR(0x00001a84u): goto L_1A84;
    case RC_ADDR(0x00001a86u): goto L_1A86;
    case RC_ADDR(0x00001a8cu): goto L_1A8C;
    case RC_ADDR(0x00001a8eu): goto L_1A8E;
    case RC_ADDR(0x00001a92u): goto L_1A92;
    case RC_ADDR(0x00001a96u): goto L_1A96;
    case RC_ADDR(0x00001a9cu): goto L_1A9C;
    case RC_ADDR(0x00001aa0u): goto L_1AA0;
    case RC_ADDR(0x00001aa4u): goto L_1AA4;
    case RC_ADDR(0x00001aa6u): goto L_1AA6;
    case RC_ADDR(0x00001aacu): goto L_1AAC;
    case RC_ADDR(0x00001ab2u): goto L_1AB2;
    case RC_ADDR(0x00001ab4u): goto L_1AB4;
    case RC_ADDR(0x00001ab8u): goto L_1AB8;
    case RC_ADDR(0x00001abcu): goto L_1ABC;
    case RC_ADDR(0x00001abeu): goto L_1ABE;
    case RC_ADDR(0x00001ac2u): goto L_1AC2;
    case RC_ADDR(0x00001ac8u): goto L_1AC8;
    case RC_ADDR(0x00001acau): goto L_1ACA;
    case RC_ADDR(0x00001accu): goto L_1ACC;
    case RC_ADDR(0x00001ad0u): goto L_1AD0;
    case RC_ADDR(0x00001ad4u): goto L_1AD4;
    case RC_ADDR(0x00001ad6u): goto L_1AD6;
    case RC_ADDR(0x00001adau): goto L_1ADA;
    case RC_ADDR(0x00001adcu): goto L_1ADC;
    case RC_ADDR(0x00001adeu): goto L_1ADE;
    case RC_ADDR(0x00001ae4u): goto L_1AE4;
    case RC_ADDR(0x00001ae6u): goto L_1AE6;
    case RC_ADDR(0x00001aecu): goto L_1AEC;
    case RC_ADDR(0x00001aeeu): goto L_1AEE;
    case RC_ADDR(0x00001af2u): goto L_1AF2;
    case RC_ADDR(0x00001af8u): goto L_1AF8;
    case RC_ADDR(0x00001afau): goto L_1AFA;
    case RC_ADDR(0x00001afeu): goto L_1AFE;
    case RC_ADDR(0x00001b00u): goto L_1B00;
    case RC_ADDR(0x00001b04u): goto L_1B04;
    case RC_ADDR(0x00001b06u): goto L_1B06;
    case RC_ADDR(0x00001b0au): goto L_1B0A;
    case RC_ADDR(0x00001b0cu): goto L_1B0C;
    case RC_ADDR(0x00001b0eu): goto L_1B0E;
    case RC_ADDR(0x00001b10u): goto L_1B10;
    case RC_ADDR(0x00001b14u): goto L_1B14;
    case RC_ADDR(0x00001b18u): goto L_1B18;
    case RC_ADDR(0x00001b1au): goto L_1B1A;
    case RC_ADDR(0x00001b1eu): goto L_1B1E;
    case RC_ADDR(0x00001b20u): goto L_1B20;
    case RC_ADDR(0x00001b22u): goto L_1B22;
    case RC_ADDR(0x00001b26u): goto L_1B26;
    case RC_ADDR(0x00001b2au): goto L_1B2A;
    case RC_ADDR(0x00001b2eu): goto L_1B2E;
    case RC_ADDR(0x00001b32u): goto L_1B32;
    case RC_ADDR(0x00001b34u): goto L_1B34;
    case RC_ADDR(0x00001b38u): goto L_1B38;
    case RC_ADDR(0x00001b3au): goto L_1B3A;
    case RC_ADDR(0x00001b3eu): goto L_1B3E;
    case RC_ADDR(0x00001b40u): goto L_1B40;
    case RC_ADDR(0x00001b42u): goto L_1B42;
    case RC_ADDR(0x00001b46u): goto L_1B46;
    case RC_ADDR(0x00001b4au): goto L_1B4A;
    case RC_ADDR(0x00001b4eu): goto L_1B4E;
    case RC_ADDR(0x00001b52u): goto L_1B52;
    case RC_ADDR(0x00001b54u): goto L_1B54;
    case RC_ADDR(0x00001b58u): goto L_1B58;
    case RC_ADDR(0x00001b5au): goto L_1B5A;
    case RC_ADDR(0x00001b5eu): goto L_1B5E;
    case RC_ADDR(0x00001b60u): goto L_1B60;
    case RC_ADDR(0x00001b64u): goto L_1B64;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1974:
    /* 00001974   4  link.w A5,#fffffff2 */
    c->pc = RC_ADDR(0x00001974u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xeu;

L_1978:
    /* 00001978   4  tst.l (8,A5) */
    c->pc = RC_ADDR(0x00001978u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_197C:
    /* 0000197c   2  bne 00001984 */
    c->pc = RC_ADDR(0x0000197cu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1984;

L_197E:
    /* 0000197e   2  moveq #ffffff9c,D0 */
    c->pc = RC_ADDR(0x0000197eu);
    rc_step(c, m);
    c->d[0] = 0xffffff9cu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1980:
    /* 00001980   2  unlk A5 */
    c->pc = RC_ADDR(0x00001980u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1982:
    /* 00001982   2  rts */
    c->pc = RC_ADDR(0x00001982u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_1984:
    /* 00001984   6  move.w #ff9c,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001984u);
    rc_step(c, m);
    t0 = 0x0000ff9cu;
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_198A:
    /* 0000198a   6  move.w #1,(fffffff2,A5) */
    c->pc = RC_ADDR(0x0000198au);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1990:
    /* 00001990   4  tst.l (8,A5) */
    c->pc = RC_ADDR(0x00001990u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_1994:
    /* 00001994   4  beq 00001aa0 */
    c->pc = RC_ADDR(0x00001994u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1AA0;

L_1998:
    /* 00001998   4  tst.w (fffffff2,A5) */
    c->pc = RC_ADDR(0x00001998u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_set_nzvc(c, t0, RC_W);

L_199C:
    /* 0000199c   4  beq 00001aa0 */
    c->pc = RC_ADDR(0x0000199cu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1AA0;

L_19A0:
    /* 000019a0   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000019a0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_19A4:
    /* 000019a4   4  jsr (0000176c) */
    c->pc = RC_ADDR(0x000019a4u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000019a8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000176cu);
    return;

L_19A8:
    /* 000019a8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000019a8u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_19AA:
    /* 000019aa   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000019aau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_19AE:
    /* 000019ae   4  jsr (00001826) */
    c->pc = RC_ADDR(0x000019aeu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000019b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001826u);
    return;

L_19B2:
    /* 000019b2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000019b2u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_19B4:
    /* 000019b4   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x000019b4u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19B8:
    /* 000019b8   6  cmpi.w #ff9a,(fffffff6,A5) */
    c->pc = RC_ADDR(0x000019b8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x0000ff9au);

L_19BE:
    /* 000019be   2  bne 000019c4 */
    c->pc = RC_ADDR(0x000019beu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_19C4;

L_19C0:
    /* 000019c0   2  moveq #ffffff9a,D0 */
    c->pc = RC_ADDR(0x000019c0u);
    rc_step(c, m);
    c->d[0] = 0xffffff9au;
    rc_set_nzvc(c, c->d[0], RC_L);

L_19C2:
    /* 000019c2   2  bra 00001980 */
    c->pc = RC_ADDR(0x000019c2u);
    rc_step(c, m);
    rc_tick();
    goto L_1980;

L_19C4:
    /* 000019c4   4  tst.w (c,A5) */
    c->pc = RC_ADDR(0x000019c4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_19C8:
    /* 000019c8   2  beq 00001a18 */
    c->pc = RC_ADDR(0x000019c8u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1A18;

L_19CA:
    /* 000019ca   6  cmpi.w #ffff,(fffffff6,A5) */
    c->pc = RC_ADDR(0x000019cau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_19D0:
    /* 000019d0   2  ble 00001a18 */
    c->pc = RC_ADDR(0x000019d0u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_1A18;

L_19D2:
    /* 000019d2   6  move.w (fffffff6,A5),(fffffff4,A5) */
    c->pc = RC_ADDR(0x000019d2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19D8:
    /* 000019d8   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x000019d8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19DC:
    /* 000019dc   4  jsr (00001f44) */
    c->pc = RC_ADDR(0x000019dcu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000019e0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001f44u);
    return;

L_19E0:
    /* 000019e0   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000019e0u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_19E2:
    /* 000019e2   4  move.l D0,(8,A5) */
    c->pc = RC_ADDR(0x000019e2u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_19E6:
    /* 000019e6   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000019e6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_19EA:
    /* 000019ea   4  jsr (000018dc) */
    c->pc = RC_ADDR(0x000019eau);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000019eeu));
    rc_depth++;
    c->pc = RC_ADDR(0x000018dcu);
    return;

L_19EE:
    /* 000019ee   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000019eeu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_19F0:
    /* 000019f0   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x000019f0u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19F4:
    /* 000019f4   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x000019f4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19F8:
    /* 000019f8   4  cmp.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x000019f8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19FC:
    /* 000019fc   2  beq 00001a18 */
    c->pc = RC_ADDR(0x000019fcu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1A18;

L_19FE:
    /* 000019fe   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x000019feu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A02:
    /* 00001a02   4  jsr (000017f0) */
    c->pc = RC_ADDR(0x00001a02u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00001a06u));
    rc_depth++;
    c->pc = RC_ADDR(0x000017f0u);
    return;

L_1A06:
    /* 00001a06   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00001a06u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1A08:
    /* 00001a08   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001a08u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A0C:
    /* 00001a0c   4  tst.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00001a0cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_1A10:
    /* 00001a10   2  bge 00001a18 */
    c->pc = RC_ADDR(0x00001a10u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_1A18;

L_1A12:
    /* 00001a12   6  move.w #ff9c,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001a12u);
    rc_step(c, m);
    t0 = 0x0000ff9cu;
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A18:
    /* 00001a18   6  cmpi.w #ff9c,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001a18u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x0000ff9cu);

L_1A1E:
    /* 00001a1e   2  bne 00001a26 */
    c->pc = RC_ADDR(0x00001a1eu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1A26;

L_1A20:
    /* 00001a20   4  clr.w (fffffff2,A5) */
    c->pc = RC_ADDR(0x00001a20u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0xeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A24:
    /* 00001a24   2  bra 00001a92 */
    c->pc = RC_ADDR(0x00001a24u);
    rc_step(c, m);
    goto L_1A92;

L_1A26:
    /* 00001a26   6  cmpi.w #ffff,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001a26u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1A2C:
    /* 00001a2c   2  ble 00001a92 */
    c->pc = RC_ADDR(0x00001a2cu);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_1A92;

L_1A2E:
    /* 00001a2e   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00001a2eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A32:
    /* 00001a32   2  ext.l D0 */
    c->pc = RC_ADDR(0x00001a32u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1A34:
    /* 00001a34   2  moveq #1,D1 */
    c->pc = RC_ADDR(0x00001a34u);
    rc_step(c, m);
    c->d[1] = 0x00000001u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1A36:
    /* 00001a36   2  asl.l D0,D1 */
    c->pc = RC_ADDR(0x00001a36u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, (c->d[0] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_1A38:
    /* 00001a38   4  move.l D1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00001a38u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A3C:
    /* 00001a3c   4  tst.w (ffff8b54,A4) */
    c->pc = RC_ADDR(0x00001a3cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x74acu));
    rc_set_nzvc(c, t0, RC_W);

L_1A40:
    /* 00001a40   2  beq 00001a60 */
    c->pc = RC_ADDR(0x00001a40u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1A60;

L_1A42:
    /* 00001a42   4  move.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x00001a42u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A46:
    /* 00001a46   4  muls.w #222,D0 */
    c->pc = RC_ADDR(0x00001a46u);
    rc_step(c, m);
    t0 = 0x00000222u;
    rc_muls(c, 0, t0);

L_1A4A:
    /* 00001a4a   4  move.w (ffffefe4,A4),D1 */
    c->pc = RC_ADDR(0x00001a4au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A4E:
    /* 00001a4e   4  mulu.w #e,D1 */
    c->pc = RC_ADDR(0x00001a4eu);
    rc_step(c, m);
    t0 = 0x0000000eu;
    rc_mulu(c, 1, t0);

L_1A52:
    /* 00001a52   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00001a52u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1A54:
    /* 00001a54   4  lea (ffffcf98,A4),A0 */
    c->pc = RC_ADDR(0x00001a54u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x3068u);

L_1A58:
    /* 00001a58   6  move.l (0,A0,D0.w),(fffffff8,A5) */
    c->pc = RC_ADDR(0x00001a58u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A5E:
    /* 00001a5e   2  bra 00001a7c */
    c->pc = RC_ADDR(0x00001a5eu);
    rc_step(c, m);
    goto L_1A7C;

L_1A60:
    /* 00001a60   4  move.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x00001a60u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A64:
    /* 00001a64   4  muls.w #222,D0 */
    c->pc = RC_ADDR(0x00001a64u);
    rc_step(c, m);
    t0 = 0x00000222u;
    rc_muls(c, 0, t0);

L_1A68:
    /* 00001a68   4  move.w (ffffefe4,A4),D1 */
    c->pc = RC_ADDR(0x00001a68u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A6C:
    /* 00001a6c   4  mulu.w #e,D1 */
    c->pc = RC_ADDR(0x00001a6cu);
    rc_step(c, m);
    t0 = 0x0000000eu;
    rc_mulu(c, 1, t0);

L_1A70:
    /* 00001a70   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00001a70u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1A72:
    /* 00001a72   4  lea (ffffcf94,A4),A0 */
    c->pc = RC_ADDR(0x00001a72u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x306cu);

L_1A76:
    /* 00001a76   6  move.l (0,A0,D0.w),(fffffff8,A5) */
    c->pc = RC_ADDR(0x00001a76u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A7C:
    /* 00001a7c   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00001a7cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A80:
    /* 00001a80   4  and.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00001a80u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    t2 = t0 & rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 0, RC_L, t2);

L_1A84:
    /* 00001a84   2  beq 00001a8e */
    c->pc = RC_ADDR(0x00001a84u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1A8E;

L_1A86:
    /* 00001a86   6  move.w #ff9c,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001a86u);
    rc_step(c, m);
    t0 = 0x0000ff9cu;
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A8C:
    /* 00001a8c   2  bra 00001a92 */
    c->pc = RC_ADDR(0x00001a8cu);
    rc_step(c, m);
    goto L_1A92;

L_1A8E:
    /* 00001a8e   4  clr.w (fffffff2,A5) */
    c->pc = RC_ADDR(0x00001a8eu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0xeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A92:
    /* 00001a92   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00001a92u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1A96:
    /* 00001a96   6  move.l (e,A0),(8,A5) */
    c->pc = RC_ADDR(0x00001a96u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0xeu));
    rc_wr32(c, m, (c->a[5] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A9C:
    /* 00001a9c   4  bra 00001990 */
    c->pc = RC_ADDR(0x00001a9cu);
    rc_step(c, m);
    rc_tick();
    goto L_1990;

L_1AA0:
    /* 00001aa0   4  tst.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00001aa0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_1AA4:
    /* 00001aa4   2  bge 00001aac */
    c->pc = RC_ADDR(0x00001aa4u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_1AAC;

L_1AA6:
    /* 00001aa6   6  move.w #ff9c,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001aa6u);
    rc_step(c, m);
    t0 = 0x0000ff9cu;
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AAC:
    /* 00001aac   6  cmpi.w #ff9c,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001aacu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x0000ff9cu);

L_1AB2:
    /* 00001ab2   2  bne 00001af2 */
    c->pc = RC_ADDR(0x00001ab2u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1AF2;

L_1AB4:
    /* 00001ab4   4  pea (ffffefa0,A4) */
    c->pc = RC_ADDR(0x00001ab4u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] - 0x1060u));

L_1AB8:
    /* 00001ab8   4  jsr (000016c0) */
    c->pc = RC_ADDR(0x00001ab8u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00001abcu));
    rc_depth++;
    c->pc = RC_ADDR(0x000016c0u);
    return;

L_1ABC:
    /* 00001abc   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00001abcu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1ABE:
    /* 00001abe   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001abeu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AC2:
    /* 00001ac2   6  cmpi.w #ff9a,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001ac2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x0000ff9au);

L_1AC8:
    /* 00001ac8   2  bne 00001ad0 */
    c->pc = RC_ADDR(0x00001ac8u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1AD0;

L_1ACA:
    /* 00001aca   2  moveq #ffffff9a,D0 */
    c->pc = RC_ADDR(0x00001acau);
    rc_step(c, m);
    c->d[0] = 0xffffff9au;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1ACC:
    /* 00001acc   4  bra 00001980 */
    c->pc = RC_ADDR(0x00001accu);
    rc_step(c, m);
    rc_tick();
    goto L_1980;

L_1AD0:
    /* 00001ad0   4  tst.w (ffff8b54,A4) */
    c->pc = RC_ADDR(0x00001ad0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x74acu));
    rc_set_nzvc(c, t0, RC_W);

L_1AD4:
    /* 00001ad4   2  beq 00001af2 */
    c->pc = RC_ADDR(0x00001ad4u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1AF2;

L_1AD6:
    /* 00001ad6   4  jsr (00001954) */
    c->pc = RC_ADDR(0x00001ad6u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00001adau));
    rc_depth++;
    c->pc = RC_ADDR(0x00001954u);
    return;

L_1ADA:
    /* 00001ada   2  tst.w D0 */
    c->pc = RC_ADDR(0x00001adau);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1ADC:
    /* 00001adc   2  bne 00001ae6 */
    c->pc = RC_ADDR(0x00001adcu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1AE6;

L_1ADE:
    /* 00001ade   6  cmpi.w #ff9c,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001adeu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x0000ff9cu);

L_1AE4:
    /* 00001ae4   2  bne 00001af2 */
    c->pc = RC_ADDR(0x00001ae4u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1AF2;

L_1AE6:
    /* 00001ae6   6  move.w #1,(ffff8402,A4) */
    c->pc = RC_ADDR(0x00001ae6u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7bfeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AEC:
    /* 00001aec   2  moveq #ffffff9b,D0 */
    c->pc = RC_ADDR(0x00001aecu);
    rc_step(c, m);
    c->d[0] = 0xffffff9bu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1AEE:
    /* 00001aee   4  bra 00001980 */
    c->pc = RC_ADDR(0x00001aeeu);
    rc_step(c, m);
    rc_tick();
    goto L_1980;

L_1AF2:
    /* 00001af2   6  cmpi.w #ff9c,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001af2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x0000ff9cu);

L_1AF8:
    /* 00001af8   2  beq 00001b60 */
    c->pc = RC_ADDR(0x00001af8u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1B60;

L_1AFA:
    /* 00001afa   4  tst.w (c,A5) */
    c->pc = RC_ADDR(0x00001afau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_1AFE:
    /* 00001afe   2  beq 00001b60 */
    c->pc = RC_ADDR(0x00001afeu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1B60;

L_1B00:
    /* 00001b00   4  tst.w (ffffcf4a,A4) */
    c->pc = RC_ADDR(0x00001b00u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x30b6u));
    rc_set_nzvc(c, t0, RC_W);

L_1B04:
    /* 00001b04   2  bne 00001b60 */
    c->pc = RC_ADDR(0x00001b04u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1B60;

L_1B06:
    /* 00001b06   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00001b06u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B0A:
    /* 00001b0a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00001b0au);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1B0C:
    /* 00001b0c   2  moveq #1,D1 */
    c->pc = RC_ADDR(0x00001b0cu);
    rc_step(c, m);
    c->d[1] = 0x00000001u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1B0E:
    /* 00001b0e   2  asl.l D0,D1 */
    c->pc = RC_ADDR(0x00001b0eu);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, (c->d[0] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_1B10:
    /* 00001b10   4  move.l D1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00001b10u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B14:
    /* 00001b14   4  tst.w (ffff8b54,A4) */
    c->pc = RC_ADDR(0x00001b14u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x74acu));
    rc_set_nzvc(c, t0, RC_W);

L_1B18:
    /* 00001b18   2  beq 00001b42 */
    c->pc = RC_ADDR(0x00001b18u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1B42;

L_1B1A:
    /* 00001b1a   4  jsr (00001954) */
    c->pc = RC_ADDR(0x00001b1au);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00001b1eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00001954u);
    return;

L_1B1E:
    /* 00001b1e   2  tst.w D0 */
    c->pc = RC_ADDR(0x00001b1eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1B20:
    /* 00001b20   2  beq 00001b40 */
    c->pc = RC_ADDR(0x00001b20u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1B40;

L_1B22:
    /* 00001b22   4  move.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x00001b22u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B26:
    /* 00001b26   4  muls.w #222,D0 */
    c->pc = RC_ADDR(0x00001b26u);
    rc_step(c, m);
    t0 = 0x00000222u;
    rc_muls(c, 0, t0);

L_1B2A:
    /* 00001b2a   4  move.w (ffffefe4,A4),D1 */
    c->pc = RC_ADDR(0x00001b2au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B2E:
    /* 00001b2e   4  mulu.w #e,D1 */
    c->pc = RC_ADDR(0x00001b2eu);
    rc_step(c, m);
    t0 = 0x0000000eu;
    rc_mulu(c, 1, t0);

L_1B32:
    /* 00001b32   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00001b32u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1B34:
    /* 00001b34   4  lea (ffffcf98,A4),A0 */
    c->pc = RC_ADDR(0x00001b34u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x3068u);

L_1B38:
    /* 00001b38   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x00001b38u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_1B3A:
    /* 00001b3a   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00001b3au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B3E:
    /* 00001b3e   2  or.l D0,(A0) */
    c->pc = RC_ADDR(0x00001b3eu);
    rc_step(c, m);
    t3 = c->a[0];
    t1 = rc_rd32(c, m, t3);
    t2 = t1 | rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_L);

L_1B40:
    /* 00001b40   2  bra 00001b60 */
    c->pc = RC_ADDR(0x00001b40u);
    rc_step(c, m);
    goto L_1B60;

L_1B42:
    /* 00001b42   4  move.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x00001b42u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B46:
    /* 00001b46   4  muls.w #222,D0 */
    c->pc = RC_ADDR(0x00001b46u);
    rc_step(c, m);
    t0 = 0x00000222u;
    rc_muls(c, 0, t0);

L_1B4A:
    /* 00001b4a   4  move.w (ffffefe4,A4),D1 */
    c->pc = RC_ADDR(0x00001b4au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B4E:
    /* 00001b4e   4  mulu.w #e,D1 */
    c->pc = RC_ADDR(0x00001b4eu);
    rc_step(c, m);
    t0 = 0x0000000eu;
    rc_mulu(c, 1, t0);

L_1B52:
    /* 00001b52   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00001b52u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1B54:
    /* 00001b54   4  lea (ffffcf94,A4),A0 */
    c->pc = RC_ADDR(0x00001b54u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x306cu);

L_1B58:
    /* 00001b58   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x00001b58u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_1B5A:
    /* 00001b5a   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00001b5au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B5E:
    /* 00001b5e   2  or.l D0,(A0) */
    c->pc = RC_ADDR(0x00001b5eu);
    rc_step(c, m);
    t3 = c->a[0];
    t1 = rc_rd32(c, m, t3);
    t2 = t1 | rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_L);

L_1B60:
    /* 00001b60   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00001b60u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B64:
    /* 00001b64   4  bra 00001980 */
    c->pc = RC_ADDR(0x00001b64u);
    rc_step(c, m);
    rc_tick();
    goto L_1980;

}
