/* fn_00022b6c - 454 byte(s), 170 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00022b6c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00022b6cu): goto L_22B6C;
    case RC_ADDR(0x00022b70u): goto L_22B70;
    case RC_ADDR(0x00022b74u): goto L_22B74;
    case RC_ADDR(0x00022b78u): goto L_22B78;
    case RC_ADDR(0x00022b7cu): goto L_22B7C;
    case RC_ADDR(0x00022b80u): goto L_22B80;
    case RC_ADDR(0x00022b82u): goto L_22B82;
    case RC_ADDR(0x00022b86u): goto L_22B86;
    case RC_ADDR(0x00022b8au): goto L_22B8A;
    case RC_ADDR(0x00022b8cu): goto L_22B8C;
    case RC_ADDR(0x00022b8eu): goto L_22B8E;
    case RC_ADDR(0x00022b90u): goto L_22B90;
    case RC_ADDR(0x00022b94u): goto L_22B94;
    case RC_ADDR(0x00022b96u): goto L_22B96;
    case RC_ADDR(0x00022b98u): goto L_22B98;
    case RC_ADDR(0x00022b9au): goto L_22B9A;
    case RC_ADDR(0x00022b9eu): goto L_22B9E;
    case RC_ADDR(0x00022ba0u): goto L_22BA0;
    case RC_ADDR(0x00022ba2u): goto L_22BA2;
    case RC_ADDR(0x00022ba4u): goto L_22BA4;
    case RC_ADDR(0x00022ba8u): goto L_22BA8;
    case RC_ADDR(0x00022baau): goto L_22BAA;
    case RC_ADDR(0x00022baeu): goto L_22BAE;
    case RC_ADDR(0x00022bb0u): goto L_22BB0;
    case RC_ADDR(0x00022bb4u): goto L_22BB4;
    case RC_ADDR(0x00022bb6u): goto L_22BB6;
    case RC_ADDR(0x00022bb8u): goto L_22BB8;
    case RC_ADDR(0x00022bbcu): goto L_22BBC;
    case RC_ADDR(0x00022bc0u): goto L_22BC0;
    case RC_ADDR(0x00022bc2u): goto L_22BC2;
    case RC_ADDR(0x00022bc4u): goto L_22BC4;
    case RC_ADDR(0x00022bc8u): goto L_22BC8;
    case RC_ADDR(0x00022bcau): goto L_22BCA;
    case RC_ADDR(0x00022bccu): goto L_22BCC;
    case RC_ADDR(0x00022bceu): goto L_22BCE;
    case RC_ADDR(0x00022bd0u): goto L_22BD0;
    case RC_ADDR(0x00022bd2u): goto L_22BD2;
    case RC_ADDR(0x00022bd4u): goto L_22BD4;
    case RC_ADDR(0x00022bd6u): goto L_22BD6;
    case RC_ADDR(0x00022bd8u): goto L_22BD8;
    case RC_ADDR(0x00022bdau): goto L_22BDA;
    case RC_ADDR(0x00022bdeu): goto L_22BDE;
    case RC_ADDR(0x00022be2u): goto L_22BE2;
    case RC_ADDR(0x00022be4u): goto L_22BE4;
    case RC_ADDR(0x00022be6u): goto L_22BE6;
    case RC_ADDR(0x00022be8u): goto L_22BE8;
    case RC_ADDR(0x00022becu): goto L_22BEC;
    case RC_ADDR(0x00022bf0u): goto L_22BF0;
    case RC_ADDR(0x00022bf2u): goto L_22BF2;
    case RC_ADDR(0x00022bf4u): goto L_22BF4;
    case RC_ADDR(0x00022bf8u): goto L_22BF8;
    case RC_ADDR(0x00022bfau): goto L_22BFA;
    case RC_ADDR(0x00022bfeu): goto L_22BFE;
    case RC_ADDR(0x00022c02u): goto L_22C02;
    case RC_ADDR(0x00022c06u): goto L_22C06;
    case RC_ADDR(0x00022c0au): goto L_22C0A;
    case RC_ADDR(0x00022c10u): goto L_22C10;
    case RC_ADDR(0x00022c12u): goto L_22C12;
    case RC_ADDR(0x00022c14u): goto L_22C14;
    case RC_ADDR(0x00022c18u): goto L_22C18;
    case RC_ADDR(0x00022c1au): goto L_22C1A;
    case RC_ADDR(0x00022c1cu): goto L_22C1C;
    case RC_ADDR(0x00022c1eu): goto L_22C1E;
    case RC_ADDR(0x00022c22u): goto L_22C22;
    case RC_ADDR(0x00022c24u): goto L_22C24;
    case RC_ADDR(0x00022c26u): goto L_22C26;
    case RC_ADDR(0x00022c28u): goto L_22C28;
    case RC_ADDR(0x00022c2cu): goto L_22C2C;
    case RC_ADDR(0x00022c2eu): goto L_22C2E;
    case RC_ADDR(0x00022c32u): goto L_22C32;
    case RC_ADDR(0x00022c34u): goto L_22C34;
    case RC_ADDR(0x00022c38u): goto L_22C38;
    case RC_ADDR(0x00022c3au): goto L_22C3A;
    case RC_ADDR(0x00022c3eu): goto L_22C3E;
    case RC_ADDR(0x00022c40u): goto L_22C40;
    case RC_ADDR(0x00022c44u): goto L_22C44;
    case RC_ADDR(0x00022c46u): goto L_22C46;
    case RC_ADDR(0x00022c48u): goto L_22C48;
    case RC_ADDR(0x00022c4au): goto L_22C4A;
    case RC_ADDR(0x00022c4eu): goto L_22C4E;
    case RC_ADDR(0x00022c50u): goto L_22C50;
    case RC_ADDR(0x00022c54u): goto L_22C54;
    case RC_ADDR(0x00022c56u): goto L_22C56;
    case RC_ADDR(0x00022c58u): goto L_22C58;
    case RC_ADDR(0x00022c5au): goto L_22C5A;
    case RC_ADDR(0x00022c5cu): goto L_22C5C;
    case RC_ADDR(0x00022c5eu): goto L_22C5E;
    case RC_ADDR(0x00022c60u): goto L_22C60;
    case RC_ADDR(0x00022c62u): goto L_22C62;
    case RC_ADDR(0x00022c64u): goto L_22C64;
    case RC_ADDR(0x00022c66u): goto L_22C66;
    case RC_ADDR(0x00022c68u): goto L_22C68;
    case RC_ADDR(0x00022c6au): goto L_22C6A;
    case RC_ADDR(0x00022c6eu): goto L_22C6E;
    case RC_ADDR(0x00022c70u): goto L_22C70;
    case RC_ADDR(0x00022c74u): goto L_22C74;
    case RC_ADDR(0x00022c76u): goto L_22C76;
    case RC_ADDR(0x00022c78u): goto L_22C78;
    case RC_ADDR(0x00022c7au): goto L_22C7A;
    case RC_ADDR(0x00022c7eu): goto L_22C7E;
    case RC_ADDR(0x00022c80u): goto L_22C80;
    case RC_ADDR(0x00022c82u): goto L_22C82;
    case RC_ADDR(0x00022c84u): goto L_22C84;
    case RC_ADDR(0x00022c86u): goto L_22C86;
    case RC_ADDR(0x00022c88u): goto L_22C88;
    case RC_ADDR(0x00022c8au): goto L_22C8A;
    case RC_ADDR(0x00022c8cu): goto L_22C8C;
    case RC_ADDR(0x00022c8eu): goto L_22C8E;
    case RC_ADDR(0x00022c90u): goto L_22C90;
    case RC_ADDR(0x00022c94u): goto L_22C94;
    case RC_ADDR(0x00022c96u): goto L_22C96;
    case RC_ADDR(0x00022c9au): goto L_22C9A;
    case RC_ADDR(0x00022c9cu): goto L_22C9C;
    case RC_ADDR(0x00022ca0u): goto L_22CA0;
    case RC_ADDR(0x00022ca2u): goto L_22CA2;
    case RC_ADDR(0x00022ca6u): goto L_22CA6;
    case RC_ADDR(0x00022ca8u): goto L_22CA8;
    case RC_ADDR(0x00022cacu): goto L_22CAC;
    case RC_ADDR(0x00022caeu): goto L_22CAE;
    case RC_ADDR(0x00022cb0u): goto L_22CB0;
    case RC_ADDR(0x00022cb2u): goto L_22CB2;
    case RC_ADDR(0x00022cb4u): goto L_22CB4;
    case RC_ADDR(0x00022cb6u): goto L_22CB6;
    case RC_ADDR(0x00022cb8u): goto L_22CB8;
    case RC_ADDR(0x00022cbau): goto L_22CBA;
    case RC_ADDR(0x00022cbcu): goto L_22CBC;
    case RC_ADDR(0x00022cbeu): goto L_22CBE;
    case RC_ADDR(0x00022cc0u): goto L_22CC0;
    case RC_ADDR(0x00022cc2u): goto L_22CC2;
    case RC_ADDR(0x00022cc6u): goto L_22CC6;
    case RC_ADDR(0x00022ccau): goto L_22CCA;
    case RC_ADDR(0x00022cccu): goto L_22CCC;
    case RC_ADDR(0x00022cceu): goto L_22CCE;
    case RC_ADDR(0x00022cd2u): goto L_22CD2;
    case RC_ADDR(0x00022cd4u): goto L_22CD4;
    case RC_ADDR(0x00022cd6u): goto L_22CD6;
    case RC_ADDR(0x00022cd8u): goto L_22CD8;
    case RC_ADDR(0x00022cdau): goto L_22CDA;
    case RC_ADDR(0x00022cdeu): goto L_22CDE;
    case RC_ADDR(0x00022ce2u): goto L_22CE2;
    case RC_ADDR(0x00022ce4u): goto L_22CE4;
    case RC_ADDR(0x00022ce6u): goto L_22CE6;
    case RC_ADDR(0x00022ceau): goto L_22CEA;
    case RC_ADDR(0x00022ceeu): goto L_22CEE;
    case RC_ADDR(0x00022cf0u): goto L_22CF0;
    case RC_ADDR(0x00022cf4u): goto L_22CF4;
    case RC_ADDR(0x00022cf6u): goto L_22CF6;
    case RC_ADDR(0x00022cf8u): goto L_22CF8;
    case RC_ADDR(0x00022cfau): goto L_22CFA;
    case RC_ADDR(0x00022cfcu): goto L_22CFC;
    case RC_ADDR(0x00022d00u): goto L_22D00;
    case RC_ADDR(0x00022d04u): goto L_22D04;
    case RC_ADDR(0x00022d06u): goto L_22D06;
    case RC_ADDR(0x00022d08u): goto L_22D08;
    case RC_ADDR(0x00022d0au): goto L_22D0A;
    case RC_ADDR(0x00022d0cu): goto L_22D0C;
    case RC_ADDR(0x00022d0eu): goto L_22D0E;
    case RC_ADDR(0x00022d10u): goto L_22D10;
    case RC_ADDR(0x00022d12u): goto L_22D12;
    case RC_ADDR(0x00022d14u): goto L_22D14;
    case RC_ADDR(0x00022d16u): goto L_22D16;
    case RC_ADDR(0x00022d18u): goto L_22D18;
    case RC_ADDR(0x00022d1au): goto L_22D1A;
    case RC_ADDR(0x00022d1eu): goto L_22D1E;
    case RC_ADDR(0x00022d20u): goto L_22D20;
    case RC_ADDR(0x00022d22u): goto L_22D22;
    case RC_ADDR(0x00022d24u): goto L_22D24;
    case RC_ADDR(0x00022d26u): goto L_22D26;
    case RC_ADDR(0x00022d2au): goto L_22D2A;
    case RC_ADDR(0x00022d2eu): goto L_22D2E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22B6C:
    /* 00022b6c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00022b6cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_22B70:
    /* 00022b70   4  movem.l { D4 D5 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x00022b70u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_22B74:
    /* 00022b74   4  movea.l (10,A5),A2 */
    c->pc = RC_ADDR(0x00022b74u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[2] = t0;

L_22B78:
    /* 00022b78   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00022b78u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_22B7C:
    /* 00022b7c   4  tst.l (ac,A0) */
    c->pc = RC_ADDR(0x00022b7cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xacu));
    rc_set_nzvc(c, t0, RC_L);

L_22B80:
    /* 00022b80   2  beq 00022b9a */
    c->pc = RC_ADDR(0x00022b80u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22B9A;

L_22B82:
    /* 00022b82   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00022b82u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_22B86:
    /* 00022b86   4  move.l (ac,A0),D0 */
    c->pc = RC_ADDR(0x00022b86u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xacu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_22B8A:
    /* 00022b8a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00022b8au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_22B8C:
    /* 00022b8c   2  move.l D0,D4 */
    c->pc = RC_ADDR(0x00022b8cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_22B8E:
    /* 00022b8e   2  movea.l D4,A0 */
    c->pc = RC_ADDR(0x00022b8eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[0] = t0;

L_22B90:
    /* 00022b90   4  move.l (10,A0),D0 */
    c->pc = RC_ADDR(0x00022b90u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_22B94:
    /* 00022b94   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00022b94u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_22B96:
    /* 00022b96   2  movea.l D0,A3 */
    c->pc = RC_ADDR(0x00022b96u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[3] = t0;

L_22B98:
    /* 00022b98   2  bra 00022b9e */
    c->pc = RC_ADDR(0x00022b98u);
    rc_step(c, m, 10);
    goto L_22B9E;

L_22B9A:
    /* 00022b9a   4  movea.l (ffffd544,A4),A3 */
    c->pc = RC_ADDR(0x00022b9au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2abcu));
    c->a[3] = t0;

L_22B9E:
    /* 00022b9e   2  move.b (A3),D0 */
    c->pc = RC_ADDR(0x00022b9eu);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[3]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_22BA0:
    /* 00022ba0   2  ext.w D0 */
    c->pc = RC_ADDR(0x00022ba0u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_22BA2:
    /* 00022ba2   2  ext.l D0 */
    c->pc = RC_ADDR(0x00022ba2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_22BA4:
    /* 00022ba4   4  add.l (c,A5),D0 */
    c->pc = RC_ADDR(0x00022ba4u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_22BA8:
    /* 00022ba8   2  addq.l #2,D0 */
    c->pc = RC_ADDR(0x00022ba8u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_22BAA:
    /* 00022baa   4  move.w D0,(4540,A4) */
    c->pc = RC_ADDR(0x00022baau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x4540u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_22BAE:
    /* 00022bae   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00022baeu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_22BB0:
    /* 00022bb0   4  move.w (4540,A4),D0 */
    c->pc = RC_ADDR(0x00022bb0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x4540u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22BB4:
    /* 00022bb4   2  ext.l D0 */
    c->pc = RC_ADDR(0x00022bb4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_22BB6:
    /* 00022bb6   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00022bb6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22BB8:
    /* 00022bb8   4  jsr (00023732) */
    c->pc = RC_ADDR(0x00022bb8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022bbcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023732u);
    return;

L_22BBC:
    /* 00022bbc   4  move.l D0,(4542,A4) */
    c->pc = RC_ADDR(0x00022bbcu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x4542u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22BC0:
    /* 00022bc0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00022bc0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_22BC2:
    /* 00022bc2   2  bne 00022bcc */
    c->pc = RC_ADDR(0x00022bc2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_22BCC;

L_22BC4:
    /* 00022bc4   4  movem.l (SP)+,{ D4 D5 A2 A3 } */
    c->pc = RC_ADDR(0x00022bc4u);
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
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_22BC8:
    /* 00022bc8   2  unlk A5 */
    c->pc = RC_ADDR(0x00022bc8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_22BCA:
    /* 00022bca   2  rts */
    c->pc = RC_ADDR(0x00022bcau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_22BCC:
    /* 00022bcc   2  move.b (A3),D0 */
    c->pc = RC_ADDR(0x00022bccu);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[3]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_22BCE:
    /* 00022bce   2  ext.w D0 */
    c->pc = RC_ADDR(0x00022bceu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_22BD0:
    /* 00022bd0   2  move.w D0,D5 */
    c->pc = RC_ADDR(0x00022bd0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22BD2:
    /* 00022bd2   2  move.w D5,-(A7) */
    c->pc = RC_ADDR(0x00022bd2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 5, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_22BD4:
    /* 00022bd4   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00022bd4u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_22BD6:
    /* 00022bd6   2  addq.l #1,A0 */
    c->pc = RC_ADDR(0x00022bd6u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000001u;

L_22BD8:
    /* 00022bd8   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x00022bd8u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22BDA:
    /* 00022bda   4  move.l (4542,A4),-(A7) */
    c->pc = RC_ADDR(0x00022bdau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4542u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22BDE:
    /* 00022bde   4  jsr (00022d5e) */
    c->pc = RC_ADDR(0x00022bdeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022be2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00022d5eu);
    return;

L_22BE2:
    /* 00022be2   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x00022be2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22BE4:
    /* 00022be4   2  ext.l D0 */
    c->pc = RC_ADDR(0x00022be4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_22BE6:
    /* 00022be6   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00022be6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_22BE8:
    /* 00022be8   4  adda.l (4542,A4),A0 */
    c->pc = RC_ADDR(0x00022be8u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4542u));
    c->a[0] += t0;

L_22BEC:
    /* 00022bec   4  lea (00022d32),A1 */
    c->pc = RC_ADDR(0x00022becu);
    rc_step(c, m, 8);
    c->a[1] = RC_ADDR(0x00022d32u);

L_22BF0:
    /* 00022bf0   2  move.b (A1)+,(A0)+ */
    c->pc = RC_ADDR(0x00022bf0u);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 1u;
    t0 = rc_rd8(c, m, t3);
    t3 = c->a[0];
    c->a[0] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_22BF2:
    /* 00022bf2   2  bne 00022bf0 */
    c->pc = RC_ADDR(0x00022bf2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_22BF0; }

L_22BF4:
    /* 00022bf4   4  move.w (e,A5),-(A7) */
    c->pc = RC_ADDR(0x00022bf4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_22BF8:
    /* 00022bf8   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00022bf8u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22BFA:
    /* 00022bfa   4  move.l (4542,A4),-(A7) */
    c->pc = RC_ADDR(0x00022bfau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4542u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22BFE:
    /* 00022bfe   4  jsr (00022d3a) */
    c->pc = RC_ADDR(0x00022bfeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022c02u));
    rc_depth++;
    c->pc = RC_ADDR(0x00022d3au);
    return;

L_22C02:
    /* 00022c02   4  movea.l (4542,A4),A0 */
    c->pc = RC_ADDR(0x00022c02u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4542u));
    c->a[0] = t0;

L_22C06:
    /* 00022c06   4  clr.b (0,A0,D5.w) */
    c->pc = RC_ADDR(0x00022c06u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[5], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_22C0A:
    /* 00022c0a   6  move.w #1,(453e,A4) */
    c->pc = RC_ADDR(0x00022c0au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x453eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_22C10:
    /* 00022c10   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x00022c10u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22C12:
    /* 00022c12   2  ext.l D0 */
    c->pc = RC_ADDR(0x00022c12u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_22C14:
    /* 00022c14   4  add.l (4542,A4),D0 */
    c->pc = RC_ADDR(0x00022c14u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4542u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_22C18:
    /* 00022c18   2  movea.l D0,A3 */
    c->pc = RC_ADDR(0x00022c18u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[3] = t0;

L_22C1A:
    /* 00022c1a   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00022c1au);
    rc_step(c, m, 8);
    c->a[3] += 0x00000001u;

L_22C1C:
    /* 00022c1c   2  movea.l A3,A2 */
    c->pc = RC_ADDR(0x00022c1cu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[2] = t0;

L_22C1E:
    /* 00022c1e   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00022c1eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_22C22:
    /* 00022c22   2  move.b (A3),D0 */
    c->pc = RC_ADDR(0x00022c22u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[3]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_22C24:
    /* 00022c24   2  ext.w D0 */
    c->pc = RC_ADDR(0x00022c24u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_22C26:
    /* 00022c26   2  move.w D0,D5 */
    c->pc = RC_ADDR(0x00022c26u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22C28:
    /* 00022c28   4  cmp.w #20,D0 */
    c->pc = RC_ADDR(0x00022c28u);
    rc_step(c, m, 8);
    t0 = 0x00000020u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_22C2C:
    /* 00022c2c   2  beq 00022c46 */
    c->pc = RC_ADDR(0x00022c2cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22C46;

L_22C2E:
    /* 00022c2e   4  cmp.w #9,D5 */
    c->pc = RC_ADDR(0x00022c2eu);
    rc_step(c, m, 8);
    t0 = 0x00000009u;
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_22C32:
    /* 00022c32   2  beq 00022c46 */
    c->pc = RC_ADDR(0x00022c32u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22C46;

L_22C34:
    /* 00022c34   4  cmp.w #c,D5 */
    c->pc = RC_ADDR(0x00022c34u);
    rc_step(c, m, 8);
    t0 = 0x0000000cu;
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_22C38:
    /* 00022c38   2  beq 00022c46 */
    c->pc = RC_ADDR(0x00022c38u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22C46;

L_22C3A:
    /* 00022c3a   4  cmp.w #d,D5 */
    c->pc = RC_ADDR(0x00022c3au);
    rc_step(c, m, 8);
    t0 = 0x0000000du;
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_22C3E:
    /* 00022c3e   2  beq 00022c46 */
    c->pc = RC_ADDR(0x00022c3eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22C46;

L_22C40:
    /* 00022c40   4  cmp.w #a,D5 */
    c->pc = RC_ADDR(0x00022c40u);
    rc_step(c, m, 8);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_22C44:
    /* 00022c44   2  bne 00022c4a */
    c->pc = RC_ADDR(0x00022c44u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_22C4A;

L_22C46:
    /* 00022c46   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00022c46u);
    rc_step(c, m, 8);
    c->a[3] += 0x00000001u;

L_22C48:
    /* 00022c48   2  bra 00022c22 */
    c->pc = RC_ADDR(0x00022c48u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_22C22;

L_22C4A:
    /* 00022c4a   4  cmpi.b #20,(A3) */
    c->pc = RC_ADDR(0x00022c4au);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[3]);
    rc_cmp(c, RC_B, t0, 0x00000020u);

L_22C4E:
    /* 00022c4e   2  blt 00022cca */
    c->pc = RC_ADDR(0x00022c4eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_22CCA;

L_22C50:
    /* 00022c50   4  cmpi.b #22,(A3) */
    c->pc = RC_ADDR(0x00022c50u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[3]);
    rc_cmp(c, RC_B, t0, 0x00000022u);

L_22C54:
    /* 00022c54   2  bne 00022c84 */
    c->pc = RC_ADDR(0x00022c54u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_22C84;

L_22C56:
    /* 00022c56   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00022c56u);
    rc_step(c, m, 8);
    c->a[3] += 0x00000001u;

L_22C58:
    /* 00022c58   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00022c58u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_22C5A:
    /* 00022c5a   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00022c5au);
    rc_step(c, m, 8);
    c->a[3] += 0x00000001u;

L_22C5C:
    /* 00022c5c   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00022c5cu);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_22C5E:
    /* 00022c5e   2  ext.w D0 */
    c->pc = RC_ADDR(0x00022c5eu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_22C60:
    /* 00022c60   2  move.w D0,D5 */
    c->pc = RC_ADDR(0x00022c60u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22C62:
    /* 00022c62   2  beq 00022c82 */
    c->pc = RC_ADDR(0x00022c62u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22C82;

L_22C64:
    /* 00022c64   2  movea.l A2,A0 */
    c->pc = RC_ADDR(0x00022c64u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[0] = t0;

L_22C66:
    /* 00022c66   2  addq.l #1,A2 */
    c->pc = RC_ADDR(0x00022c66u);
    rc_step(c, m, 8);
    c->a[2] += 0x00000001u;

L_22C68:
    /* 00022c68   2  move.b D5,(A0) */
    c->pc = RC_ADDR(0x00022c68u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 5, RC_B);
    rc_wr8(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_B);

L_22C6A:
    /* 00022c6a   4  cmp.w #22,D5 */
    c->pc = RC_ADDR(0x00022c6au);
    rc_step(c, m, 8);
    t0 = 0x00000022u;
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_22C6E:
    /* 00022c6e   2  bne 00022c80 */
    c->pc = RC_ADDR(0x00022c6eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_22C80;

L_22C70:
    /* 00022c70   4  cmpi.b #22,(A3) */
    c->pc = RC_ADDR(0x00022c70u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[3]);
    rc_cmp(c, RC_B, t0, 0x00000022u);

L_22C74:
    /* 00022c74   2  bne 00022c7a */
    c->pc = RC_ADDR(0x00022c74u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_22C7A;

L_22C76:
    /* 00022c76   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00022c76u);
    rc_step(c, m, 8);
    c->a[3] += 0x00000001u;

L_22C78:
    /* 00022c78   2  bra 00022c80 */
    c->pc = RC_ADDR(0x00022c78u);
    rc_step(c, m, 10);
    goto L_22C80;

L_22C7A:
    /* 00022c7a   4  clr.b (ffffffff,A2) */
    c->pc = RC_ADDR(0x00022c7au);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[2] - 0x1u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_22C7E:
    /* 00022c7e   2  bra 00022c82 */
    c->pc = RC_ADDR(0x00022c7eu);
    rc_step(c, m, 10);
    goto L_22C82;

L_22C80:
    /* 00022c80   2  bra 00022c58 */
    c->pc = RC_ADDR(0x00022c80u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_22C58;

L_22C82:
    /* 00022c82   2  bra 00022cbc */
    c->pc = RC_ADDR(0x00022c82u);
    rc_step(c, m, 10);
    goto L_22CBC;

L_22C84:
    /* 00022c84   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00022c84u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_22C86:
    /* 00022c86   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00022c86u);
    rc_step(c, m, 8);
    c->a[3] += 0x00000001u;

L_22C88:
    /* 00022c88   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00022c88u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_22C8A:
    /* 00022c8a   2  ext.w D0 */
    c->pc = RC_ADDR(0x00022c8au);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_22C8C:
    /* 00022c8c   2  move.w D0,D5 */
    c->pc = RC_ADDR(0x00022c8cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22C8E:
    /* 00022c8e   2  beq 00022cb6 */
    c->pc = RC_ADDR(0x00022c8eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22CB6;

L_22C90:
    /* 00022c90   4  cmp.w #20,D5 */
    c->pc = RC_ADDR(0x00022c90u);
    rc_step(c, m, 8);
    t0 = 0x00000020u;
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_22C94:
    /* 00022c94   2  beq 00022cb6 */
    c->pc = RC_ADDR(0x00022c94u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22CB6;

L_22C96:
    /* 00022c96   4  cmp.w #9,D5 */
    c->pc = RC_ADDR(0x00022c96u);
    rc_step(c, m, 8);
    t0 = 0x00000009u;
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_22C9A:
    /* 00022c9a   2  beq 00022cb6 */
    c->pc = RC_ADDR(0x00022c9au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22CB6;

L_22C9C:
    /* 00022c9c   4  cmp.w #c,D5 */
    c->pc = RC_ADDR(0x00022c9cu);
    rc_step(c, m, 8);
    t0 = 0x0000000cu;
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_22CA0:
    /* 00022ca0   2  beq 00022cb6 */
    c->pc = RC_ADDR(0x00022ca0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22CB6;

L_22CA2:
    /* 00022ca2   4  cmp.w #d,D5 */
    c->pc = RC_ADDR(0x00022ca2u);
    rc_step(c, m, 8);
    t0 = 0x0000000du;
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_22CA6:
    /* 00022ca6   2  beq 00022cb6 */
    c->pc = RC_ADDR(0x00022ca6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22CB6;

L_22CA8:
    /* 00022ca8   4  cmp.w #a,D5 */
    c->pc = RC_ADDR(0x00022ca8u);
    rc_step(c, m, 8);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_22CAC:
    /* 00022cac   2  beq 00022cb6 */
    c->pc = RC_ADDR(0x00022cacu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22CB6;

L_22CAE:
    /* 00022cae   2  movea.l A2,A0 */
    c->pc = RC_ADDR(0x00022caeu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[0] = t0;

L_22CB0:
    /* 00022cb0   2  addq.l #1,A2 */
    c->pc = RC_ADDR(0x00022cb0u);
    rc_step(c, m, 8);
    c->a[2] += 0x00000001u;

L_22CB2:
    /* 00022cb2   2  move.b D5,(A0) */
    c->pc = RC_ADDR(0x00022cb2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 5, RC_B);
    rc_wr8(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_B);

L_22CB4:
    /* 00022cb4   2  bra 00022c84 */
    c->pc = RC_ADDR(0x00022cb4u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_22C84;

L_22CB6:
    /* 00022cb6   2  movea.l A2,A0 */
    c->pc = RC_ADDR(0x00022cb6u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[0] = t0;

L_22CB8:
    /* 00022cb8   2  addq.l #1,A2 */
    c->pc = RC_ADDR(0x00022cb8u);
    rc_step(c, m, 8);
    c->a[2] += 0x00000001u;

L_22CBA:
    /* 00022cba   2  clr.b (A0) */
    c->pc = RC_ADDR(0x00022cbau);
    rc_step(c, m, 12);
    rc_wr8(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_22CBC:
    /* 00022cbc   2  tst.w D5 */
    c->pc = RC_ADDR(0x00022cbcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_22CBE:
    /* 00022cbe   2  bne 00022cc2 */
    c->pc = RC_ADDR(0x00022cbeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_22CC2;

L_22CC0:
    /* 00022cc0   2  subq.l #1,A3 */
    c->pc = RC_ADDR(0x00022cc0u);
    rc_step(c, m, 8);
    c->a[3] -= 0x00000001u;

L_22CC2:
    /* 00022cc2   4  addq.w #1,(453e,A4) */
    c->pc = RC_ADDR(0x00022cc2u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x453eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_22CC6:
    /* 00022cc6   4  bra 00022c22 */
    c->pc = RC_ADDR(0x00022cc6u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_22C22;

L_22CCA:
    /* 00022cca   2  clr.b (A2) */
    c->pc = RC_ADDR(0x00022ccau);
    rc_step(c, m, 12);
    rc_wr8(c, m, c->a[2], 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_22CCC:
    /* 00022ccc   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00022cccu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_22CCE:
    /* 00022cce   4  move.w (453e,A4),D0 */
    c->pc = RC_ADDR(0x00022cceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x453eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22CD2:
    /* 00022cd2   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00022cd2u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_22CD4:
    /* 00022cd4   2  ext.l D0 */
    c->pc = RC_ADDR(0x00022cd4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_22CD6:
    /* 00022cd6   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00022cd6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_22CD8:
    /* 00022cd8   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00022cd8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22CDA:
    /* 00022cda   4  jsr (00023732) */
    c->pc = RC_ADDR(0x00022cdau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022cdeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023732u);
    return;

L_22CDE:
    /* 00022cde   4  move.l D0,(453a,A4) */
    c->pc = RC_ADDR(0x00022cdeu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x453au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22CE2:
    /* 00022ce2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00022ce2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_22CE4:
    /* 00022ce4   2  bne 00022cee */
    c->pc = RC_ADDR(0x00022ce4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_22CEE;

L_22CE6:
    /* 00022ce6   4  clr.w (453e,A4) */
    c->pc = RC_ADDR(0x00022ce6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x453eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_22CEA:
    /* 00022cea   4  bra 00022bc4 */
    c->pc = RC_ADDR(0x00022ceau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_22BC4;

L_22CEE:
    /* 00022cee   2  moveq #0,D5 */
    c->pc = RC_ADDR(0x00022ceeu);
    rc_step(c, m, 4);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_22CF0:
    /* 00022cf0   4  movea.l (4542,A4),A3 */
    c->pc = RC_ADDR(0x00022cf0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4542u));
    c->a[3] = t0;

L_22CF4:
    /* 00022cf4   2  bra 00022d1a */
    c->pc = RC_ADDR(0x00022cf4u);
    rc_step(c, m, 10);
    goto L_22D1A;

L_22CF6:
    /* 00022cf6   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x00022cf6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22CF8:
    /* 00022cf8   2  ext.l D0 */
    c->pc = RC_ADDR(0x00022cf8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_22CFA:
    /* 00022cfa   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00022cfau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_22CFC:
    /* 00022cfc   4  movea.l (453a,A4),A0 */
    c->pc = RC_ADDR(0x00022cfcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x453au));
    c->a[0] = t0;

L_22D00:
    /* 00022d00   4  move.l A3,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00022d00u);
    rc_step(c, m, 18);
    t0 = rc_a_get(c, 3, RC_L);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22D04:
    /* 00022d04   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00022d04u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_22D06:
    /* 00022d06   2  move.l A0,D0 */
    c->pc = RC_ADDR(0x00022d06u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_22D08:
    /* 00022d08   2  tst.b (A0)+ */
    c->pc = RC_ADDR(0x00022d08u);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_set_nzvc(c, t0, RC_B);

L_22D0A:
    /* 00022d0a   2  bne 00022d08 */
    c->pc = RC_ADDR(0x00022d0au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_22D08; }

L_22D0C:
    /* 00022d0c   2  suba.l D0,A0 */
    c->pc = RC_ADDR(0x00022d0cu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] -= t0;

L_22D0E:
    /* 00022d0e   2  subq.l #1,A0 */
    c->pc = RC_ADDR(0x00022d0eu);
    rc_step(c, m, 8);
    c->a[0] -= 0x00000001u;

L_22D10:
    /* 00022d10   2  move.w A0,D0 */
    c->pc = RC_ADDR(0x00022d10u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22D12:
    /* 00022d12   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00022d12u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_22D14:
    /* 00022d14   2  ext.l D0 */
    c->pc = RC_ADDR(0x00022d14u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_22D16:
    /* 00022d16   2  adda.l D0,A3 */
    c->pc = RC_ADDR(0x00022d16u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[3] += t0;

L_22D18:
    /* 00022d18   2  addq.w #1,D5 */
    c->pc = RC_ADDR(0x00022d18u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_22D1A:
    /* 00022d1a   4  cmp.w (453e,A4),D5 */
    c->pc = RC_ADDR(0x00022d1au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x453eu));
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_22D1E:
    /* 00022d1e   2  blt 00022cf6 */
    c->pc = RC_ADDR(0x00022d1eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_22CF6; }

L_22D20:
    /* 00022d20   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x00022d20u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22D22:
    /* 00022d22   2  ext.l D0 */
    c->pc = RC_ADDR(0x00022d22u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_22D24:
    /* 00022d24   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00022d24u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_22D26:
    /* 00022d26   4  movea.l (453a,A4),A0 */
    c->pc = RC_ADDR(0x00022d26u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x453au));
    c->a[0] = t0;

L_22D2A:
    /* 00022d2a   4  clr.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00022d2au);
    rc_step(c, m, 26);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_22D2E:
    /* 00022d2e   4  bra 00022bc4 */
    c->pc = RC_ADDR(0x00022d2eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_22BC4;

}
