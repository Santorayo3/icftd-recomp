/* fn_00009b3e - 516 byte(s), 156 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00009b3e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00009b3eu): goto L_9B3E;
    case RC_ADDR(0x00009b42u): goto L_9B42;
    case RC_ADDR(0x00009b46u): goto L_9B46;
    case RC_ADDR(0x00009b4au): goto L_9B4A;
    case RC_ADDR(0x00009b4cu): goto L_9B4C;
    case RC_ADDR(0x00009b50u): goto L_9B50;
    case RC_ADDR(0x00009b54u): goto L_9B54;
    case RC_ADDR(0x00009b56u): goto L_9B56;
    case RC_ADDR(0x00009b58u): goto L_9B58;
    case RC_ADDR(0x00009b5au): goto L_9B5A;
    case RC_ADDR(0x00009b5eu): goto L_9B5E;
    case RC_ADDR(0x00009b62u): goto L_9B62;
    case RC_ADDR(0x00009b64u): goto L_9B64;
    case RC_ADDR(0x00009b66u): goto L_9B66;
    case RC_ADDR(0x00009b6cu): goto L_9B6C;
    case RC_ADDR(0x00009b70u): goto L_9B70;
    case RC_ADDR(0x00009b72u): goto L_9B72;
    case RC_ADDR(0x00009b74u): goto L_9B74;
    case RC_ADDR(0x00009b76u): goto L_9B76;
    case RC_ADDR(0x00009b7au): goto L_9B7A;
    case RC_ADDR(0x00009b80u): goto L_9B80;
    case RC_ADDR(0x00009b84u): goto L_9B84;
    case RC_ADDR(0x00009b88u): goto L_9B88;
    case RC_ADDR(0x00009b8cu): goto L_9B8C;
    case RC_ADDR(0x00009b90u): goto L_9B90;
    case RC_ADDR(0x00009b94u): goto L_9B94;
    case RC_ADDR(0x00009b96u): goto L_9B96;
    case RC_ADDR(0x00009b9au): goto L_9B9A;
    case RC_ADDR(0x00009b9eu): goto L_9B9E;
    case RC_ADDR(0x00009ba4u): goto L_9BA4;
    case RC_ADDR(0x00009ba6u): goto L_9BA6;
    case RC_ADDR(0x00009baau): goto L_9BAA;
    case RC_ADDR(0x00009baeu): goto L_9BAE;
    case RC_ADDR(0x00009bb0u): goto L_9BB0;
    case RC_ADDR(0x00009bb6u): goto L_9BB6;
    case RC_ADDR(0x00009bbau): goto L_9BBA;
    case RC_ADDR(0x00009bbeu): goto L_9BBE;
    case RC_ADDR(0x00009bc2u): goto L_9BC2;
    case RC_ADDR(0x00009bc6u): goto L_9BC6;
    case RC_ADDR(0x00009bcau): goto L_9BCA;
    case RC_ADDR(0x00009bceu): goto L_9BCE;
    case RC_ADDR(0x00009bd0u): goto L_9BD0;
    case RC_ADDR(0x00009bd2u): goto L_9BD2;
    case RC_ADDR(0x00009bd6u): goto L_9BD6;
    case RC_ADDR(0x00009bdau): goto L_9BDA;
    case RC_ADDR(0x00009bdeu): goto L_9BDE;
    case RC_ADDR(0x00009be0u): goto L_9BE0;
    case RC_ADDR(0x00009be2u): goto L_9BE2;
    case RC_ADDR(0x00009be6u): goto L_9BE6;
    case RC_ADDR(0x00009becu): goto L_9BEC;
    case RC_ADDR(0x00009beeu): goto L_9BEE;
    case RC_ADDR(0x00009bf0u): goto L_9BF0;
    case RC_ADDR(0x00009bf4u): goto L_9BF4;
    case RC_ADDR(0x00009bf8u): goto L_9BF8;
    case RC_ADDR(0x00009bfcu): goto L_9BFC;
    case RC_ADDR(0x00009bfeu): goto L_9BFE;
    case RC_ADDR(0x00009c00u): goto L_9C00;
    case RC_ADDR(0x00009c04u): goto L_9C04;
    case RC_ADDR(0x00009c08u): goto L_9C08;
    case RC_ADDR(0x00009c0cu): goto L_9C0C;
    case RC_ADDR(0x00009c10u): goto L_9C10;
    case RC_ADDR(0x00009c14u): goto L_9C14;
    case RC_ADDR(0x00009c18u): goto L_9C18;
    case RC_ADDR(0x00009c1cu): goto L_9C1C;
    case RC_ADDR(0x00009c20u): goto L_9C20;
    case RC_ADDR(0x00009c24u): goto L_9C24;
    case RC_ADDR(0x00009c28u): goto L_9C28;
    case RC_ADDR(0x00009c2au): goto L_9C2A;
    case RC_ADDR(0x00009c2eu): goto L_9C2E;
    case RC_ADDR(0x00009c32u): goto L_9C32;
    case RC_ADDR(0x00009c36u): goto L_9C36;
    case RC_ADDR(0x00009c3cu): goto L_9C3C;
    case RC_ADDR(0x00009c40u): goto L_9C40;
    case RC_ADDR(0x00009c44u): goto L_9C44;
    case RC_ADDR(0x00009c48u): goto L_9C48;
    case RC_ADDR(0x00009c4au): goto L_9C4A;
    case RC_ADDR(0x00009c4cu): goto L_9C4C;
    case RC_ADDR(0x00009c4eu): goto L_9C4E;
    case RC_ADDR(0x00009c50u): goto L_9C50;
    case RC_ADDR(0x00009c52u): goto L_9C52;
    case RC_ADDR(0x00009c54u): goto L_9C54;
    case RC_ADDR(0x00009c58u): goto L_9C58;
    case RC_ADDR(0x00009c5au): goto L_9C5A;
    case RC_ADDR(0x00009c5cu): goto L_9C5C;
    case RC_ADDR(0x00009c60u): goto L_9C60;
    case RC_ADDR(0x00009c64u): goto L_9C64;
    case RC_ADDR(0x00009c68u): goto L_9C68;
    case RC_ADDR(0x00009c6cu): goto L_9C6C;
    case RC_ADDR(0x00009c70u): goto L_9C70;
    case RC_ADDR(0x00009c74u): goto L_9C74;
    case RC_ADDR(0x00009c78u): goto L_9C78;
    case RC_ADDR(0x00009c7au): goto L_9C7A;
    case RC_ADDR(0x00009c7cu): goto L_9C7C;
    case RC_ADDR(0x00009c7eu): goto L_9C7E;
    case RC_ADDR(0x00009c82u): goto L_9C82;
    case RC_ADDR(0x00009c86u): goto L_9C86;
    case RC_ADDR(0x00009c8au): goto L_9C8A;
    case RC_ADDR(0x00009c8cu): goto L_9C8C;
    case RC_ADDR(0x00009c8eu): goto L_9C8E;
    case RC_ADDR(0x00009c92u): goto L_9C92;
    case RC_ADDR(0x00009c96u): goto L_9C96;
    case RC_ADDR(0x00009c98u): goto L_9C98;
    case RC_ADDR(0x00009c9cu): goto L_9C9C;
    case RC_ADDR(0x00009c9eu): goto L_9C9E;
    case RC_ADDR(0x00009ca0u): goto L_9CA0;
    case RC_ADDR(0x00009ca4u): goto L_9CA4;
    case RC_ADDR(0x00009ca8u): goto L_9CA8;
    case RC_ADDR(0x00009cacu): goto L_9CAC;
    case RC_ADDR(0x00009cb0u): goto L_9CB0;
    case RC_ADDR(0x00009cb2u): goto L_9CB2;
    case RC_ADDR(0x00009cb4u): goto L_9CB4;
    case RC_ADDR(0x00009cb8u): goto L_9CB8;
    case RC_ADDR(0x00009cbau): goto L_9CBA;
    case RC_ADDR(0x00009cbcu): goto L_9CBC;
    case RC_ADDR(0x00009cbeu): goto L_9CBE;
    case RC_ADDR(0x00009cc0u): goto L_9CC0;
    case RC_ADDR(0x00009cc4u): goto L_9CC4;
    case RC_ADDR(0x00009cc8u): goto L_9CC8;
    case RC_ADDR(0x00009ccau): goto L_9CCA;
    case RC_ADDR(0x00009cccu): goto L_9CCC;
    case RC_ADDR(0x00009cceu): goto L_9CCE;
    case RC_ADDR(0x00009cd0u): goto L_9CD0;
    case RC_ADDR(0x00009cd4u): goto L_9CD4;
    case RC_ADDR(0x00009cd8u): goto L_9CD8;
    case RC_ADDR(0x00009cdcu): goto L_9CDC;
    case RC_ADDR(0x00009ce0u): goto L_9CE0;
    case RC_ADDR(0x00009ce2u): goto L_9CE2;
    case RC_ADDR(0x00009ce6u): goto L_9CE6;
    case RC_ADDR(0x00009ce8u): goto L_9CE8;
    case RC_ADDR(0x00009ceau): goto L_9CEA;
    case RC_ADDR(0x00009ceeu): goto L_9CEE;
    case RC_ADDR(0x00009cf0u): goto L_9CF0;
    case RC_ADDR(0x00009cf2u): goto L_9CF2;
    case RC_ADDR(0x00009cf6u): goto L_9CF6;
    case RC_ADDR(0x00009cf8u): goto L_9CF8;
    case RC_ADDR(0x00009cfau): goto L_9CFA;
    case RC_ADDR(0x00009cfeu): goto L_9CFE;
    case RC_ADDR(0x00009d02u): goto L_9D02;
    case RC_ADDR(0x00009d06u): goto L_9D06;
    case RC_ADDR(0x00009d08u): goto L_9D08;
    case RC_ADDR(0x00009d0au): goto L_9D0A;
    case RC_ADDR(0x00009d0eu): goto L_9D0E;
    case RC_ADDR(0x00009d12u): goto L_9D12;
    case RC_ADDR(0x00009d16u): goto L_9D16;
    case RC_ADDR(0x00009d1au): goto L_9D1A;
    case RC_ADDR(0x00009d1eu): goto L_9D1E;
    case RC_ADDR(0x00009d20u): goto L_9D20;
    case RC_ADDR(0x00009d22u): goto L_9D22;
    case RC_ADDR(0x00009d26u): goto L_9D26;
    case RC_ADDR(0x00009d2au): goto L_9D2A;
    case RC_ADDR(0x00009d2cu): goto L_9D2C;
    case RC_ADDR(0x00009d32u): goto L_9D32;
    case RC_ADDR(0x00009d36u): goto L_9D36;
    case RC_ADDR(0x00009d3au): goto L_9D3A;
    case RC_ADDR(0x00009d3eu): goto L_9D3E;
    case RC_ADDR(0x00009d40u): goto L_9D40;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9B3E:
    /* 00009b3e   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00009b3eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_9B42:
    /* 00009b42   4  movem.l { D4 D5 A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x00009b42u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_9B46:
    /* 00009b46   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x00009b46u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_9B4A:
    /* 00009b4a   2  moveq #0,D5 */
    c->pc = RC_ADDR(0x00009b4au);
    rc_step(c, m, 4);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_9B4C:
    /* 00009b4c   4  move.w (b02,A4),D0 */
    c->pc = RC_ADDR(0x00009b4cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb02u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9B50:
    /* 00009b50   4  muls.w #24,D0 */
    c->pc = RC_ADDR(0x00009b50u);
    rc_step(c, m, 42);
    t0 = 0x00000024u;
    rc_muls(c, 0, t0);

L_9B54:
    /* 00009b54   2  move.l D5,D1 */
    c->pc = RC_ADDR(0x00009b54u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9B56:
    /* 00009b56   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00009b56u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_9B58:
    /* 00009b58   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00009b58u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_9B5A:
    /* 00009b5a   4  lea (ffff9314,A4),A0 */
    c->pc = RC_ADDR(0x00009b5au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6cecu);

L_9B5E:
    /* 00009b5e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00009b5eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9B62:
    /* 00009b62   2  ext.l D1 */
    c->pc = RC_ADDR(0x00009b62u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_9B64:
    /* 00009b64   2  move.l D1,D4 */
    c->pc = RC_ADDR(0x00009b64u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9B66:
    /* 00009b66   6  cmp.l #ff,D1 */
    c->pc = RC_ADDR(0x00009b66u);
    rc_step(c, m, 14);
    t0 = 0x000000ffu;
    t1 = rc_d_get(c, 1, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_9B6C:
    /* 00009b6c   4  beq 00009d3a */
    c->pc = RC_ADDR(0x00009b6cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_9D3A;

L_9B70:
    /* 00009b70   2  addq.l #1,D5 */
    c->pc = RC_ADDR(0x00009b70u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_9B72:
    /* 00009b72   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00009b72u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9B74:
    /* 00009b74   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00009b74u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_9B76:
    /* 00009b76   4  lea (b7a,A4),A0 */
    c->pc = RC_ADDR(0x00009b76u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb7au);

L_9B7A:
    /* 00009b7a   6  move.l (0,A0,D0.w),(af4,A4) */
    c->pc = RC_ADDR(0x00009b7au);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[4] + 0xaf4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9B80:
    /* 00009b80   4  clr.w (afc,A4) */
    c->pc = RC_ADDR(0x00009b80u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xafcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9B84:
    /* 00009b84   4  clr.w (afa,A4) */
    c->pc = RC_ADDR(0x00009b84u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xafau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9B88:
    /* 00009b88   4  move.w (14,A5),-(A7) */
    c->pc = RC_ADDR(0x00009b88u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9B8C:
    /* 00009b8c   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x00009b8cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9B90:
    /* 00009b90   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00009b90u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9B94:
    /* 00009b94   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00009b94u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9B96:
    /* 00009b96   4  jsr (0000a3b2) */
    c->pc = RC_ADDR(0x00009b96u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00009b9au));
    rc_depth++;
    c->pc = RC_ADDR(0x0000a3b2u);
    return;

L_9B9A:
    /* 00009b9a   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00009b9au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_9B9E:
    /* 00009b9e   6  cmp.l #3,D4 */
    c->pc = RC_ADDR(0x00009b9eu);
    rc_step(c, m, 14);
    t0 = 0x00000003u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_9BA4:
    /* 00009ba4   2  bne 00009bb6 */
    c->pc = RC_ADDR(0x00009ba4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_9BB6;

L_9BA6:
    /* 00009ba6   4  clr.w (af8,A4) */
    c->pc = RC_ADDR(0x00009ba6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xaf8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9BAA:
    /* 00009baa   4  tst.w (c94,A4) */
    c->pc = RC_ADDR(0x00009baau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc94u));
    rc_set_nzvc(c, t0, RC_W);

L_9BAE:
    /* 00009bae   2  beq 00009bb6 */
    c->pc = RC_ADDR(0x00009baeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_9BB6;

L_9BB0:
    /* 00009bb0   6  move.w #1,(af8,A4) */
    c->pc = RC_ADDR(0x00009bb0u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xaf8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9BB6:
    /* 00009bb6   4  tst.w (afa,A4) */
    c->pc = RC_ADDR(0x00009bb6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xafau));
    rc_set_nzvc(c, t0, RC_W);

L_9BBA:
    /* 00009bba   4  beq 00009d36 */
    c->pc = RC_ADDR(0x00009bbau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_9D36;

L_9BBE:
    /* 00009bbe   4  tst.w (afc,A4) */
    c->pc = RC_ADDR(0x00009bbeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xafcu));
    rc_set_nzvc(c, t0, RC_W);

L_9BC2:
    /* 00009bc2   4  beq 00009d36 */
    c->pc = RC_ADDR(0x00009bc2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_9D36;

L_9BC6:
    /* 00009bc6   4  move.w (af8,A4),D0 */
    c->pc = RC_ADDR(0x00009bc6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaf8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9BCA:
    /* 00009bca   4  and.w #1,D0 */
    c->pc = RC_ADDR(0x00009bcau);
    rc_step(c, m, 10);
    t0 = 0x00000001u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_9BCE:
    /* 00009bce   2  ext.l D0 */
    c->pc = RC_ADDR(0x00009bceu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_9BD0:
    /* 00009bd0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00009bd0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_9BD2:
    /* 00009bd2   4  lea (c92,A4),A0 */
    c->pc = RC_ADDR(0x00009bd2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc92u);

L_9BD6:
    /* 00009bd6   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00009bd6u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_9BDA:
    /* 00009bda   4  beq 00009d36 */
    c->pc = RC_ADDR(0x00009bdau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_9D36;

L_9BDE:
    /* 00009bde   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00009bdeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9BE0:
    /* 00009be0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00009be0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_9BE2:
    /* 00009be2   4  lea (c06,A4),A0 */
    c->pc = RC_ADDR(0x00009be2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc06u);

L_9BE6:
    /* 00009be6   6  move.l (0,A0,D0.w),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00009be6u);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9BEC:
    /* 00009bec   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00009becu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9BEE:
    /* 00009bee   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00009beeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_9BF0:
    /* 00009bf0   4  lea (ffff91fc,A4),A0 */
    c->pc = RC_ADDR(0x00009bf0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6e04u);

L_9BF4:
    /* 00009bf4   4  move.w (0,A0,D0.w),D7 */
    c->pc = RC_ADDR(0x00009bf4u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9BF8:
    /* 00009bf8   4  add.w (afa,A4),D7 */
    c->pc = RC_ADDR(0x00009bf8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xafau));
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_9BFC:
    /* 00009bfc   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00009bfcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9BFE:
    /* 00009bfe   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00009bfeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_9C00:
    /* 00009c00   4  lea (ffff9242,A4),A0 */
    c->pc = RC_ADDR(0x00009c00u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6dbeu);

L_9C04:
    /* 00009c04   4  movea.w (0,A0,D0.w),A3 */
    c->pc = RC_ADDR(0x00009c04u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[3] = rc_ext(t0, RC_W);

L_9C08:
    /* 00009c08   4  adda.w (afc,A4),A3 */
    c->pc = RC_ADDR(0x00009c08u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xafcu));
    c->a[3] += rc_ext(t0, RC_W);

L_9C0C:
    /* 00009c0c   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00009c0cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_9C10:
    /* 00009c10   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x00009c10u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_9C14:
    /* 00009c14   4  sub.w (8,A1),D7 */
    c->pc = RC_ADDR(0x00009c14u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_9C18:
    /* 00009c18   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00009c18u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_9C1C:
    /* 00009c1c   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x00009c1cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_9C20:
    /* 00009c20   4  suba.w (a,A1),A3 */
    c->pc = RC_ADDR(0x00009c20u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[1] + 0xau));
    c->a[3] -= rc_ext(t0, RC_W);

L_9C24:
    /* 00009c24   4  jsr (ffff83a4,A4) */
    c->pc = RC_ADDR(0x00009c24u);
    rc_step(c, m, 18);
    /* vector 155 */
    rc_push32(c, m, RC_ADDR(0x00009c28u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023972u);
    return;

L_9C28:
    /* 00009c28   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00009c28u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9C2A:
    /* 00009c2a   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00009c2au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_9C2E:
    /* 00009c2e   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x00009c2eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_9C32:
    /* 00009c32   4  move.l (30,A1),-(A7) */
    c->pc = RC_ADDR(0x00009c32u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[1] + 0x30u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9C36:
    /* 00009c36   6  pea (00043210).l */
    c->pc = RC_ADDR(0x00009c36u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00043210u);

L_9C3C:
    /* 00009c3c   4  pea (000000ca).l */
    c->pc = RC_ADDR(0x00009c3cu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000000cau);

L_9C40:
    /* 00009c40   4  pea (00000063).l */
    c->pc = RC_ADDR(0x00009c40u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000063u);

L_9C44:
    /* 00009c44   4  pea (00000063).l */
    c->pc = RC_ADDR(0x00009c44u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000063u);

L_9C48:
    /* 00009c48   2  move.w A3,D0 */
    c->pc = RC_ADDR(0x00009c48u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9C4A:
    /* 00009c4a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00009c4au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_9C4C:
    /* 00009c4c   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00009c4cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9C4E:
    /* 00009c4e   2  move.w D7,D0 */
    c->pc = RC_ADDR(0x00009c4eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9C50:
    /* 00009c50   2  ext.l D0 */
    c->pc = RC_ADDR(0x00009c50u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_9C52:
    /* 00009c52   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00009c52u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9C54:
    /* 00009c54   4  move.l (ffffd340,A4),-(A7) */
    c->pc = RC_ADDR(0x00009c54u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9C58:
    /* 00009c58   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00009c58u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9C5A:
    /* 00009c5a   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00009c5au);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9C5C:
    /* 00009c5c   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00009c5cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_9C60:
    /* 00009c60   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x00009c60u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_9C64:
    /* 00009c64   4  pea (c,A1) */
    c->pc = RC_ADDR(0x00009c64u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[1] + 0xcu));

L_9C68:
    /* 00009c68   4  jsr (ffff8260,A4) */
    c->pc = RC_ADDR(0x00009c68u);
    rc_step(c, m, 18);
    /* vector 101 */
    rc_push32(c, m, RC_ADDR(0x00009c6cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d56u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020940u);
    return;

L_9C6C:
    /* 00009c6c   4  lea (30,A7),A7 */
    c->pc = RC_ADDR(0x00009c6cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x30u);

L_9C70:
    /* 00009c70   4  jsr (ffff83ce,A4) */
    c->pc = RC_ADDR(0x00009c70u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00009c74u));
    rc_depth++;
    t3 = (c->a[4] - 0x7c32u);
    c->pc = t3;
    return;

L_9C74:
    /* 00009c74   4  jsr (ffff8386,A4) */
    c->pc = RC_ADDR(0x00009c74u);
    rc_step(c, m, 18);
    /* vector 150 */
    rc_push32(c, m, RC_ADDR(0x00009c78u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e7cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023896u);
    return;

L_9C78:
    /* 00009c78   2  moveq #0,D6 */
    c->pc = RC_ADDR(0x00009c78u);
    rc_step(c, m, 4);
    c->d[6] = 0x00000000u;
    rc_set_nzvc(c, c->d[6], RC_L);

L_9C7A:
    /* 00009c7a   2  move.l D6,D0 */
    c->pc = RC_ADDR(0x00009c7au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9C7C:
    /* 00009c7c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00009c7cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_9C7E:
    /* 00009c7e   4  lea (ad2,A4),A0 */
    c->pc = RC_ADDR(0x00009c7eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xad2u);

L_9C82:
    /* 00009c82   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00009c82u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_9C86:
    /* 00009c86   4  beq 00009d2a */
    c->pc = RC_ADDR(0x00009c86u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_9D2A;

L_9C8A:
    /* 00009c8a   2  move.l D6,D0 */
    c->pc = RC_ADDR(0x00009c8au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9C8C:
    /* 00009c8c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00009c8cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_9C8E:
    /* 00009c8e   4  lea (adc,A4),A0 */
    c->pc = RC_ADDR(0x00009c8eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xadcu);

L_9C92:
    /* 00009c92   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00009c92u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9C96:
    /* 00009c96   2  cmp.w D7,D1 */
    c->pc = RC_ADDR(0x00009c96u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_9C98:
    /* 00009c98   4  blt 00009d2a */
    c->pc = RC_ADDR(0x00009c98u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_9D2A;

L_9C9C:
    /* 00009c9c   2  move.l D6,D0 */
    c->pc = RC_ADDR(0x00009c9cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9C9E:
    /* 00009c9e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00009c9eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_9CA0:
    /* 00009ca0   4  lea (adc,A4),A0 */
    c->pc = RC_ADDR(0x00009ca0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xadcu);

L_9CA4:
    /* 00009ca4   4  movea.l (fffffffc,A5),A1 */
    c->pc = RC_ADDR(0x00009ca4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[1] = t0;

L_9CA8:
    /* 00009ca8   4  movea.l (c,A1),A6 */
    c->pc = RC_ADDR(0x00009ca8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0xcu));
    c->a[6] = t0;

L_9CAC:
    /* 00009cac   4  move.w (c,A6),D1 */
    c->pc = RC_ADDR(0x00009cacu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9CB0:
    /* 00009cb0   2  asl.w #3,D1 */
    c->pc = RC_ADDR(0x00009cb0u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 1, RC_W), RC_W));

L_9CB2:
    /* 00009cb2   2  add.w D7,D1 */
    c->pc = RC_ADDR(0x00009cb2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_9CB4:
    /* 00009cb4   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x00009cb4u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9CB8:
    /* 00009cb8   2  cmp.w D1,D2 */
    c->pc = RC_ADDR(0x00009cb8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_9CBA:
    /* 00009cba   2  bcc 00009d2a */
    c->pc = RC_ADDR(0x00009cbau);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_9D2A;

L_9CBC:
    /* 00009cbc   2  move.l D6,D0 */
    c->pc = RC_ADDR(0x00009cbcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9CBE:
    /* 00009cbe   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00009cbeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_9CC0:
    /* 00009cc0   4  lea (ae6,A4),A0 */
    c->pc = RC_ADDR(0x00009cc0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xae6u);

L_9CC4:
    /* 00009cc4   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00009cc4u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9CC8:
    /* 00009cc8   2  cmp.w A3,D1 */
    c->pc = RC_ADDR(0x00009cc8u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_9CCA:
    /* 00009cca   2  blt 00009d2a */
    c->pc = RC_ADDR(0x00009ccau);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_9D2A;

L_9CCC:
    /* 00009ccc   2  move.l D6,D0 */
    c->pc = RC_ADDR(0x00009cccu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9CCE:
    /* 00009cce   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00009cceu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_9CD0:
    /* 00009cd0   4  lea (ae6,A4),A0 */
    c->pc = RC_ADDR(0x00009cd0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xae6u);

L_9CD4:
    /* 00009cd4   4  movea.l (fffffffc,A5),A1 */
    c->pc = RC_ADDR(0x00009cd4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[1] = t0;

L_9CD8:
    /* 00009cd8   4  movea.l (c,A1),A6 */
    c->pc = RC_ADDR(0x00009cd8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0xcu));
    c->a[6] = t0;

L_9CDC:
    /* 00009cdc   4  move.w (e,A6),D1 */
    c->pc = RC_ADDR(0x00009cdcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0xeu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9CE0:
    /* 00009ce0   2  add.w A3,D1 */
    c->pc = RC_ADDR(0x00009ce0u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_9CE2:
    /* 00009ce2   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x00009ce2u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9CE6:
    /* 00009ce6   2  cmp.w D1,D2 */
    c->pc = RC_ADDR(0x00009ce6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_9CE8:
    /* 00009ce8   2  bcc 00009d2a */
    c->pc = RC_ADDR(0x00009ce8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_9D2A;

L_9CEA:
    /* 00009cea   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00009ceau);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9CEE:
    /* 00009cee   2  move.w A3,-(A7) */
    c->pc = RC_ADDR(0x00009ceeu);
    rc_step(c, m, 8);
    t0 = rc_a_get(c, 3, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9CF0:
    /* 00009cf0   2  move.w D7,-(A7) */
    c->pc = RC_ADDR(0x00009cf0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 7, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9CF2:
    /* 00009cf2   4  move.w (af8,A4),-(A7) */
    c->pc = RC_ADDR(0x00009cf2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaf8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9CF6:
    /* 00009cf6   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00009cf6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9CF8:
    /* 00009cf8   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00009cf8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_9CFA:
    /* 00009cfa   4  lea (ffff9288,A4),A0 */
    c->pc = RC_ADDR(0x00009cfau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6d78u);

L_9CFE:
    /* 00009cfe   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00009cfeu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9D02:
    /* 00009d02   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x00009d02u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x00009d06u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_9D06:
    /* 00009d06   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00009d06u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_9D08:
    /* 00009d08   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00009d08u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9D0A:
    /* 00009d0a   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00009d0au);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9D0E:
    /* 00009d0e   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x00009d0eu);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x00009d12u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_9D12:
    /* 00009d12   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00009d12u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_9D16:
    /* 00009d16   4  move.w (af8,A4),D0 */
    c->pc = RC_ADDR(0x00009d16u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaf8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9D1A:
    /* 00009d1a   4  and.w #1,D0 */
    c->pc = RC_ADDR(0x00009d1au);
    rc_step(c, m, 10);
    t0 = 0x00000001u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_9D1E:
    /* 00009d1e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00009d1eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_9D20:
    /* 00009d20   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00009d20u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_9D22:
    /* 00009d22   4  lea (c92,A4),A0 */
    c->pc = RC_ADDR(0x00009d22u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc92u);

L_9D26:
    /* 00009d26   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00009d26u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9D2A:
    /* 00009d2a   2  addq.l #1,D6 */
    c->pc = RC_ADDR(0x00009d2au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 6, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 6, RC_L, t2);

L_9D2C:
    /* 00009d2c   6  cmp.l #3,D6 */
    c->pc = RC_ADDR(0x00009d2cu);
    rc_step(c, m, 14);
    t0 = 0x00000003u;
    t1 = rc_d_get(c, 6, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_9D32:
    /* 00009d32   4  blt 00009c7a */
    c->pc = RC_ADDR(0x00009d32u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_9C7A; }

L_9D36:
    /* 00009d36   4  bra 00009b4c */
    c->pc = RC_ADDR(0x00009d36u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_9B4C;

L_9D3A:
    /* 00009d3a   4  movem.l (SP)+,{ D4 D5 D6 D7 A2 A3 } */
    c->pc = RC_ADDR(0x00009d3au);
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
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_9D3E:
    /* 00009d3e   2  unlk A5 */
    c->pc = RC_ADDR(0x00009d3eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_9D40:
    /* 00009d40   2  rts */
    c->pc = RC_ADDR(0x00009d40u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
