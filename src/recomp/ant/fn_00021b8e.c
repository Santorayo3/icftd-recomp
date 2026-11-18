/* fn_00021b8e - 482 byte(s), 139 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00021b8e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00021b8eu): goto L_21B8E;
    case RC_ADDR(0x00021b92u): goto L_21B92;
    case RC_ADDR(0x00021b96u): goto L_21B96;
    case RC_ADDR(0x00021b9cu): goto L_21B9C;
    case RC_ADDR(0x00021ba0u): goto L_21BA0;
    case RC_ADDR(0x00021ba4u): goto L_21BA4;
    case RC_ADDR(0x00021ba6u): goto L_21BA6;
    case RC_ADDR(0x00021baau): goto L_21BAA;
    case RC_ADDR(0x00021baeu): goto L_21BAE;
    case RC_ADDR(0x00021bb2u): goto L_21BB2;
    case RC_ADDR(0x00021bb6u): goto L_21BB6;
    case RC_ADDR(0x00021bbau): goto L_21BBA;
    case RC_ADDR(0x00021bbcu): goto L_21BBC;
    case RC_ADDR(0x00021bc2u): goto L_21BC2;
    case RC_ADDR(0x00021bc4u): goto L_21BC4;
    case RC_ADDR(0x00021bc8u): goto L_21BC8;
    case RC_ADDR(0x00021bceu): goto L_21BCE;
    case RC_ADDR(0x00021bd0u): goto L_21BD0;
    case RC_ADDR(0x00021bd4u): goto L_21BD4;
    case RC_ADDR(0x00021bd8u): goto L_21BD8;
    case RC_ADDR(0x00021bdeu): goto L_21BDE;
    case RC_ADDR(0x00021be0u): goto L_21BE0;
    case RC_ADDR(0x00021be4u): goto L_21BE4;
    case RC_ADDR(0x00021be6u): goto L_21BE6;
    case RC_ADDR(0x00021beau): goto L_21BEA;
    case RC_ADDR(0x00021becu): goto L_21BEC;
    case RC_ADDR(0x00021beeu): goto L_21BEE;
    case RC_ADDR(0x00021bf0u): goto L_21BF0;
    case RC_ADDR(0x00021bf2u): goto L_21BF2;
    case RC_ADDR(0x00021bf6u): goto L_21BF6;
    case RC_ADDR(0x00021bf8u): goto L_21BF8;
    case RC_ADDR(0x00021bfcu): goto L_21BFC;
    case RC_ADDR(0x00021c00u): goto L_21C00;
    case RC_ADDR(0x00021c02u): goto L_21C02;
    case RC_ADDR(0x00021c06u): goto L_21C06;
    case RC_ADDR(0x00021c08u): goto L_21C08;
    case RC_ADDR(0x00021c0au): goto L_21C0A;
    case RC_ADDR(0x00021c0cu): goto L_21C0C;
    case RC_ADDR(0x00021c10u): goto L_21C10;
    case RC_ADDR(0x00021c12u): goto L_21C12;
    case RC_ADDR(0x00021c16u): goto L_21C16;
    case RC_ADDR(0x00021c18u): goto L_21C18;
    case RC_ADDR(0x00021c1eu): goto L_21C1E;
    case RC_ADDR(0x00021c24u): goto L_21C24;
    case RC_ADDR(0x00021c2au): goto L_21C2A;
    case RC_ADDR(0x00021c2eu): goto L_21C2E;
    case RC_ADDR(0x00021c34u): goto L_21C34;
    case RC_ADDR(0x00021c3au): goto L_21C3A;
    case RC_ADDR(0x00021c3eu): goto L_21C3E;
    case RC_ADDR(0x00021c42u): goto L_21C42;
    case RC_ADDR(0x00021c44u): goto L_21C44;
    case RC_ADDR(0x00021c48u): goto L_21C48;
    case RC_ADDR(0x00021c4au): goto L_21C4A;
    case RC_ADDR(0x00021c4eu): goto L_21C4E;
    case RC_ADDR(0x00021c50u): goto L_21C50;
    case RC_ADDR(0x00021c54u): goto L_21C54;
    case RC_ADDR(0x00021c56u): goto L_21C56;
    case RC_ADDR(0x00021c5au): goto L_21C5A;
    case RC_ADDR(0x00021c5cu): goto L_21C5C;
    case RC_ADDR(0x00021c60u): goto L_21C60;
    case RC_ADDR(0x00021c62u): goto L_21C62;
    case RC_ADDR(0x00021c66u): goto L_21C66;
    case RC_ADDR(0x00021c6au): goto L_21C6A;
    case RC_ADDR(0x00021c6eu): goto L_21C6E;
    case RC_ADDR(0x00021c74u): goto L_21C74;
    case RC_ADDR(0x00021c78u): goto L_21C78;
    case RC_ADDR(0x00021c7cu): goto L_21C7C;
    case RC_ADDR(0x00021c7eu): goto L_21C7E;
    case RC_ADDR(0x00021c82u): goto L_21C82;
    case RC_ADDR(0x00021c86u): goto L_21C86;
    case RC_ADDR(0x00021c8au): goto L_21C8A;
    case RC_ADDR(0x00021c90u): goto L_21C90;
    case RC_ADDR(0x00021c92u): goto L_21C92;
    case RC_ADDR(0x00021c96u): goto L_21C96;
    case RC_ADDR(0x00021c98u): goto L_21C98;
    case RC_ADDR(0x00021c9cu): goto L_21C9C;
    case RC_ADDR(0x00021ca0u): goto L_21CA0;
    case RC_ADDR(0x00021ca4u): goto L_21CA4;
    case RC_ADDR(0x00021ca8u): goto L_21CA8;
    case RC_ADDR(0x00021cacu): goto L_21CAC;
    case RC_ADDR(0x00021cb0u): goto L_21CB0;
    case RC_ADDR(0x00021cb2u): goto L_21CB2;
    case RC_ADDR(0x00021cb6u): goto L_21CB6;
    case RC_ADDR(0x00021cbau): goto L_21CBA;
    case RC_ADDR(0x00021cbeu): goto L_21CBE;
    case RC_ADDR(0x00021cc2u): goto L_21CC2;
    case RC_ADDR(0x00021cc6u): goto L_21CC6;
    case RC_ADDR(0x00021ccau): goto L_21CCA;
    case RC_ADDR(0x00021cceu): goto L_21CCE;
    case RC_ADDR(0x00021cd2u): goto L_21CD2;
    case RC_ADDR(0x00021cd4u): goto L_21CD4;
    case RC_ADDR(0x00021cd8u): goto L_21CD8;
    case RC_ADDR(0x00021cdcu): goto L_21CDC;
    case RC_ADDR(0x00021ce0u): goto L_21CE0;
    case RC_ADDR(0x00021ce4u): goto L_21CE4;
    case RC_ADDR(0x00021ceau): goto L_21CEA;
    case RC_ADDR(0x00021ceeu): goto L_21CEE;
    case RC_ADDR(0x00021cf2u): goto L_21CF2;
    case RC_ADDR(0x00021cf4u): goto L_21CF4;
    case RC_ADDR(0x00021cf6u): goto L_21CF6;
    case RC_ADDR(0x00021cf8u): goto L_21CF8;
    case RC_ADDR(0x00021cfau): goto L_21CFA;
    case RC_ADDR(0x00021cfeu): goto L_21CFE;
    case RC_ADDR(0x00021d04u): goto L_21D04;
    case RC_ADDR(0x00021d06u): goto L_21D06;
    case RC_ADDR(0x00021d0au): goto L_21D0A;
    case RC_ADDR(0x00021d0eu): goto L_21D0E;
    case RC_ADDR(0x00021d10u): goto L_21D10;
    case RC_ADDR(0x00021d14u): goto L_21D14;
    case RC_ADDR(0x00021d16u): goto L_21D16;
    case RC_ADDR(0x00021d1au): goto L_21D1A;
    case RC_ADDR(0x00021d1eu): goto L_21D1E;
    case RC_ADDR(0x00021d20u): goto L_21D20;
    case RC_ADDR(0x00021d24u): goto L_21D24;
    case RC_ADDR(0x00021d28u): goto L_21D28;
    case RC_ADDR(0x00021d2au): goto L_21D2A;
    case RC_ADDR(0x00021d2eu): goto L_21D2E;
    case RC_ADDR(0x00021d30u): goto L_21D30;
    case RC_ADDR(0x00021d34u): goto L_21D34;
    case RC_ADDR(0x00021d36u): goto L_21D36;
    case RC_ADDR(0x00021d3au): goto L_21D3A;
    case RC_ADDR(0x00021d3eu): goto L_21D3E;
    case RC_ADDR(0x00021d40u): goto L_21D40;
    case RC_ADDR(0x00021d44u): goto L_21D44;
    case RC_ADDR(0x00021d48u): goto L_21D48;
    case RC_ADDR(0x00021d4au): goto L_21D4A;
    case RC_ADDR(0x00021d4eu): goto L_21D4E;
    case RC_ADDR(0x00021d52u): goto L_21D52;
    case RC_ADDR(0x00021d54u): goto L_21D54;
    case RC_ADDR(0x00021d56u): goto L_21D56;
    case RC_ADDR(0x00021d58u): goto L_21D58;
    case RC_ADDR(0x00021d5cu): goto L_21D5C;
    case RC_ADDR(0x00021d60u): goto L_21D60;
    case RC_ADDR(0x00021d62u): goto L_21D62;
    case RC_ADDR(0x00021d64u): goto L_21D64;
    case RC_ADDR(0x00021d68u): goto L_21D68;
    case RC_ADDR(0x00021d6au): goto L_21D6A;
    case RC_ADDR(0x00021d6cu): goto L_21D6C;
    case RC_ADDR(0x00021d6eu): goto L_21D6E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21B8E:
    /* 00021b8e   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00021b8eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_21B92:
    /* 00021b92   4  movem.l { D4 D5 A3 },-(SP) */
    c->pc = RC_ADDR(0x00021b92u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_21B96:
    /* 00021b96   6  pea (00010000).l */
    c->pc = RC_ADDR(0x00021b96u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010000u);

L_21B9C:
    /* 00021b9c   4  pea (00000114).l */
    c->pc = RC_ADDR(0x00021b9cu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000114u);

L_21BA0:
    /* 00021ba0   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x00021ba0u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x00021ba4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_21BA4:
    /* 00021ba4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00021ba4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_21BA6:
    /* 00021ba6   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00021ba6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21BAA:
    /* 00021baa   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x00021baau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_21BAE:
    /* 00021bae   4  beq 00021d64 */
    c->pc = RC_ADDR(0x00021baeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21D64;

L_21BB2:
    /* 00021bb2   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00021bb2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21BB6:
    /* 00021bb6   4  jsr (00023922) */
    c->pc = RC_ADDR(0x00021bb6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021bbau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023922u);
    return;

L_21BBA:
    /* 00021bba   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00021bbau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_21BBC:
    /* 00021bbc   6  btst #3,(10,A5) */
    c->pc = RC_ADDR(0x00021bbcu);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x10u);
    t4 = 0x00000003u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_21BC2:
    /* 00021bc2   2  beq 00021bd0 */
    c->pc = RC_ADDR(0x00021bc2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21BD0;

L_21BC4:
    /* 00021bc4   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00021bc4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_21BC8:
    /* 00021bc8   6  move.w #10,(12,A0) */
    c->pc = RC_ADDR(0x00021bc8u);
    rc_step(c, m, 16);
    t0 = 0x00000010u;
    rc_wr16(c, m, (c->a[0] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21BCE:
    /* 00021bce   2  bra 00021bf6 */
    c->pc = RC_ADDR(0x00021bceu);
    rc_step(c, m, 10);
    goto L_21BF6;

L_21BD0:
    /* 00021bd0   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00021bd0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_21BD4:
    /* 00021bd4   4  movea.l (8,A5),A1 */
    c->pc = RC_ADDR(0x00021bd4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[1] = t0;

L_21BD8:
    /* 00021bd8   6  cmpi.b #5,(5,A1) */
    c->pc = RC_ADDR(0x00021bd8u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[1] + 0x5u));
    rc_cmp(c, RC_B, t0, 0x00000005u);

L_21BDE:
    /* 00021bde   2  bcc 00021bec */
    c->pc = RC_ADDR(0x00021bdeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_21BEC;

L_21BE0:
    /* 00021be0   4  movea.l (8,A5),A1 */
    c->pc = RC_ADDR(0x00021be0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[1] = t0;

L_21BE4:
    /* 00021be4   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021be4u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21BE6:
    /* 00021be6   4  move.b (5,A1),D0 */
    c->pc = RC_ADDR(0x00021be6u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[1] + 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_21BEA:
    /* 00021bea   2  bra 00021bee */
    c->pc = RC_ADDR(0x00021beau);
    rc_step(c, m, 10);
    goto L_21BEE;

L_21BEC:
    /* 00021bec   2  moveq #5,D0 */
    c->pc = RC_ADDR(0x00021becu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000005u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21BEE:
    /* 00021bee   2  moveq #1,D1 */
    c->pc = RC_ADDR(0x00021beeu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000001u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_21BF0:
    /* 00021bf0   2  asl.w D0,D1 */
    c->pc = RC_ADDR(0x00021bf0u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 1, (c->d[0] & 63u), rc_d_get(c, 1, RC_W), RC_W));

L_21BF2:
    /* 00021bf2   4  move.w D1,(12,A0) */
    c->pc = RC_ADDR(0x00021bf2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[0] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21BF6:
    /* 00021bf6   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00021bf6u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_21BF8:
    /* 00021bf8   4  pea (00000028).l */
    c->pc = RC_ADDR(0x00021bf8u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000028u);

L_21BFC:
    /* 00021bfc   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x00021bfcu);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x00021c00u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_21C00:
    /* 00021c00   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00021c00u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_21C02:
    /* 00021c02   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00021c02u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_21C06:
    /* 00021c06   2  move.l D0,(A0) */
    c->pc = RC_ADDR(0x00021c06u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21C08:
    /* 00021c08   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x00021c08u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_21C0A:
    /* 00021c0a   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x00021c0au);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21C0C:
    /* 00021c0c   4  beq 00021d64 */
    c->pc = RC_ADDR(0x00021c0cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21D64;

L_21C10:
    /* 00021c10   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00021c10u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21C12:
    /* 00021c12   4  jsr (0002392e) */
    c->pc = RC_ADDR(0x00021c12u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021c16u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002392eu);
    return;

L_21C16:
    /* 00021c16   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00021c16u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_21C18:
    /* 00021c18   6  move.w (c,A5),(18,A2) */
    c->pc = RC_ADDR(0x00021c18u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_wr16(c, m, (c->a[2] + 0x18u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21C1E:
    /* 00021c1e   6  move.w (e,A5),(1a,A2) */
    c->pc = RC_ADDR(0x00021c1eu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    rc_wr16(c, m, (c->a[2] + 0x1au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21C24:
    /* 00021c24   6  move.w (10,A5),(20,A2) */
    c->pc = RC_ADDR(0x00021c24u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_wr16(c, m, (c->a[2] + 0x20u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21C2A:
    /* 00021c2a   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00021c2au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_21C2E:
    /* 00021c2e   6  move.w (10,A5),(10,A0) */
    c->pc = RC_ADDR(0x00021c2eu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_wr16(c, m, (c->a[0] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21C34:
    /* 00021c34   6  pea (00010000).l */
    c->pc = RC_ADDR(0x00021c34u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010000u);

L_21C3A:
    /* 00021c3a   4  pea (0000000c).l */
    c->pc = RC_ADDR(0x00021c3au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000cu);

L_21C3E:
    /* 00021c3e   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x00021c3eu);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x00021c42u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_21C42:
    /* 00021c42   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00021c42u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_21C44:
    /* 00021c44   4  move.l D0,(24,A2) */
    c->pc = RC_ADDR(0x00021c44u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[2] + 0x24u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21C48:
    /* 00021c48   2  movea.l D0,A3 */
    c->pc = RC_ADDR(0x00021c48u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[3] = t0;

L_21C4A:
    /* 00021c4a   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00021c4au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_21C4E:
    /* 00021c4e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021c4eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21C50:
    /* 00021c50   4  move.w (12,A0),D0 */
    c->pc = RC_ADDR(0x00021c50u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21C54:
    /* 00021c54   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00021c54u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21C56:
    /* 00021c56   4  jsr (000238d4) */
    c->pc = RC_ADDR(0x00021c56u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021c5au));
    rc_depth++;
    c->pc = RC_ADDR(0x000238d4u);
    return;

L_21C5A:
    /* 00021c5a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00021c5au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_21C5C:
    /* 00021c5c   4  move.l D0,(4,A2) */
    c->pc = RC_ADDR(0x00021c5cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[2] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21C60:
    /* 00021c60   2  move.l A3,D0 */
    c->pc = RC_ADDR(0x00021c60u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21C62:
    /* 00021c62   4  beq 00021d64 */
    c->pc = RC_ADDR(0x00021c62u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21D64;

L_21C66:
    /* 00021c66   4  tst.l (4,A2) */
    c->pc = RC_ADDR(0x00021c66u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_21C6A:
    /* 00021c6a   4  beq 00021d64 */
    c->pc = RC_ADDR(0x00021c6au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21D64;

L_21C6E:
    /* 00021c6e   6  move.l (8,A5),(4,A3) */
    c->pc = RC_ADDR(0x00021c6eu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[3] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21C74:
    /* 00021c74   4  move.w (10,A5),D0 */
    c->pc = RC_ADDR(0x00021c74u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21C78:
    /* 00021c78   4  and.w #8000,D0 */
    c->pc = RC_ADDR(0x00021c78u);
    rc_step(c, m, 10);
    t0 = 0x00008000u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_21C7C:
    /* 00021c7c   2  bne 00021c8a */
    c->pc = RC_ADDR(0x00021c7cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_21C8A;

L_21C7E:
    /* 00021c7e   4  move.w (c,A5),D0 */
    c->pc = RC_ADDR(0x00021c7eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21C82:
    /* 00021c82   4  muls.w #2,D0 */
    c->pc = RC_ADDR(0x00021c82u);
    rc_step(c, m, 42);
    t0 = 0x00000002u;
    rc_muls(c, 0, t0);

L_21C86:
    /* 00021c86   4  move.w D0,(c,A5) */
    c->pc = RC_ADDR(0x00021c86u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21C8A:
    /* 00021c8a   6  btst #2,(11,A5) */
    c->pc = RC_ADDR(0x00021c8au);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x11u);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_21C90:
    /* 00021c90   2  beq 00021ca0 */
    c->pc = RC_ADDR(0x00021c90u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21CA0;

L_21C92:
    /* 00021c92   4  move.w (e,A5),D0 */
    c->pc = RC_ADDR(0x00021c92u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21C96:
    /* 00021c96   2  ext.l D0 */
    c->pc = RC_ADDR(0x00021c96u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_21C98:
    /* 00021c98   4  divs.w #2,D0 */
    c->pc = RC_ADDR(0x00021c98u);
    rc_step(c, m, 162);
    t0 = 0x00000002u;
    rc_divs(c, m, 0, t0);

L_21C9C:
    /* 00021c9c   4  move.w D0,(e,A5) */
    c->pc = RC_ADDR(0x00021c9cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] + 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21CA0:
    /* 00021ca0   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00021ca0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_21CA4:
    /* 00021ca4   4  movea.l (ffffd324,A4),A1 */
    c->pc = RC_ADDR(0x00021ca4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cdcu));
    c->a[1] = t0;

L_21CA8:
    /* 00021ca8   4  move.w (da,A1),D0 */
    c->pc = RC_ADDR(0x00021ca8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0xdau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21CAC:
    /* 00021cac   4  sub.w (c,A5),D0 */
    c->pc = RC_ADDR(0x00021cacu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_21CB0:
    /* 00021cb0   2  ext.l D0 */
    c->pc = RC_ADDR(0x00021cb0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_21CB2:
    /* 00021cb2   4  divs.w #4,D0 */
    c->pc = RC_ADDR(0x00021cb2u);
    rc_step(c, m, 162);
    t0 = 0x00000004u;
    rc_divs(c, m, 0, t0);

L_21CB6:
    /* 00021cb6   4  movea.l (ffffd32c,A4),A1 */
    c->pc = RC_ADDR(0x00021cb6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cd4u));
    c->a[1] = t0;

L_21CBA:
    /* 00021cba   4  add.w (30,A1),D0 */
    c->pc = RC_ADDR(0x00021cbau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x30u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_21CBE:
    /* 00021cbe   4  move.w D0,(e,A0) */
    c->pc = RC_ADDR(0x00021cbeu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[0] + 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21CC2:
    /* 00021cc2   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00021cc2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_21CC6:
    /* 00021cc6   4  movea.l (ffffd324,A4),A1 */
    c->pc = RC_ADDR(0x00021cc6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cdcu));
    c->a[1] = t0;

L_21CCA:
    /* 00021cca   4  move.w (d8,A1),D0 */
    c->pc = RC_ADDR(0x00021ccau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0xd8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21CCE:
    /* 00021cce   4  sub.w (e,A5),D0 */
    c->pc = RC_ADDR(0x00021cceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_21CD2:
    /* 00021cd2   2  ext.l D0 */
    c->pc = RC_ADDR(0x00021cd2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_21CD4:
    /* 00021cd4   4  divs.w #2,D0 */
    c->pc = RC_ADDR(0x00021cd4u);
    rc_step(c, m, 162);
    t0 = 0x00000002u;
    rc_divs(c, m, 0, t0);

L_21CD8:
    /* 00021cd8   4  movea.l (ffffd32c,A4),A1 */
    c->pc = RC_ADDR(0x00021cd8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cd4u));
    c->a[1] = t0;

L_21CDC:
    /* 00021cdc   4  add.w (2e,A1),D0 */
    c->pc = RC_ADDR(0x00021cdcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x2eu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_21CE0:
    /* 00021ce0   4  move.w D0,(c,A0) */
    c->pc = RC_ADDR(0x00021ce0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[0] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21CE4:
    /* 00021ce4   6  pea (00010001).l */
    c->pc = RC_ADDR(0x00021ce4u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_21CEA:
    /* 00021cea   4  pea (0000000c).l */
    c->pc = RC_ADDR(0x00021ceau);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000cu);

L_21CEE:
    /* 00021cee   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x00021ceeu);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x00021cf2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_21CF2:
    /* 00021cf2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00021cf2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_21CF4:
    /* 00021cf4   2  move.l D0,D4 */
    c->pc = RC_ADDR(0x00021cf4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21CF6:
    /* 00021cf6   2  tst.l D4 */
    c->pc = RC_ADDR(0x00021cf6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_21CF8:
    /* 00021cf8   2  beq 00021d64 */
    c->pc = RC_ADDR(0x00021cf8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21D64;

L_21CFA:
    /* 00021cfa   4  pea (00000020).l */
    c->pc = RC_ADDR(0x00021cfau);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000020u);

L_21CFE:
    /* 00021cfe   6  move.l #dff096,-(A7) */
    c->pc = RC_ADDR(0x00021cfeu);
    rc_step(c, m, 20);
    t0 = 0x00dff096u;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21D04:
    /* 00021d04   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x00021d04u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21D06:
    /* 00021d06   4  jsr (00023872) */
    c->pc = RC_ADDR(0x00021d06u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021d0au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023872u);
    return;

L_21D0A:
    /* 00021d0a   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00021d0au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_21D0E:
    /* 00021d0e   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x00021d0eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21D10:
    /* 00021d10   4  jsr (0002385a) */
    c->pc = RC_ADDR(0x00021d10u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021d14u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002385au);
    return;

L_21D14:
    /* 00021d14   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00021d14u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_21D16:
    /* 00021d16   4  pea (000000ff).l */
    c->pc = RC_ADDR(0x00021d16u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000000ffu);

L_21D1A:
    /* 00021d1a   4  pea (00002710).l */
    c->pc = RC_ADDR(0x00021d1au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00002710u);

L_21D1E:
    /* 00021d1e   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x00021d1eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21D20:
    /* 00021d20   4  jsr (00023884) */
    c->pc = RC_ADDR(0x00021d20u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021d24u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023884u);
    return;

L_21D24:
    /* 00021d24   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00021d24u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_21D28:
    /* 00021d28   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x00021d28u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21D2A:
    /* 00021d2a   4  jsr (0002385a) */
    c->pc = RC_ADDR(0x00021d2au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021d2eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0002385au);
    return;

L_21D2E:
    /* 00021d2e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00021d2eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_21D30:
    /* 00021d30   4  move.l D4,(14,A2) */
    c->pc = RC_ADDR(0x00021d30u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 4, RC_L);
    rc_wr32(c, m, (c->a[2] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21D34:
    /* 00021d34   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00021d34u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21D36:
    /* 00021d36   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00021d36u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21D3A:
    /* 00021d3a   4  jsr (00023946) */
    c->pc = RC_ADDR(0x00021d3au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021d3eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023946u);
    return;

L_21D3E:
    /* 00021d3e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00021d3eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_21D40:
    /* 00021d40   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00021d40u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21D44:
    /* 00021d44   4  jsr (00023966) */
    c->pc = RC_ADDR(0x00021d44u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021d48u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023966u);
    return;

L_21D48:
    /* 00021d48   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00021d48u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_21D4A:
    /* 00021d4a   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00021d4au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21D4E:
    /* 00021d4e   4  jsr (00021e8a) */
    c->pc = RC_ADDR(0x00021d4eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021d52u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021e8au);
    return;

L_21D52:
    /* 00021d52   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00021d52u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_21D54:
    /* 00021d54   2  tst.w D0 */
    c->pc = RC_ADDR(0x00021d54u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_21D56:
    /* 00021d56   2  beq 00021d64 */
    c->pc = RC_ADDR(0x00021d56u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21D64;

L_21D58:
    /* 00021d58   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00021d58u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21D5C:
    /* 00021d5c   4  movem.l (SP)+,{ D4 A2 A3 } */
    c->pc = RC_ADDR(0x00021d5cu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_21D60:
    /* 00021d60   2  unlk A5 */
    c->pc = RC_ADDR(0x00021d60u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_21D62:
    /* 00021d62   2  rts */
    c->pc = RC_ADDR(0x00021d62u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_21D64:
    /* 00021d64   4  pea (fffffffc,A5) */
    c->pc = RC_ADDR(0x00021d64u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x4u));

L_21D68:
    /* 00021d68   2  bsr 00021d70 */
    c->pc = RC_ADDR(0x00021d68u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021d6au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d70u);
    return;

L_21D6A:
    /* 00021d6a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00021d6au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_21D6C:
    /* 00021d6c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021d6cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21D6E:
    /* 00021d6e   2  bra 00021d5c */
    c->pc = RC_ADDR(0x00021d6eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_21D5C;

}
