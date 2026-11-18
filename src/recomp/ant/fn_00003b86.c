/* fn_00003b86 - 488 byte(s), 146 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00003b86(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00003b86u): goto L_3B86;
    case RC_ADDR(0x00003b8au): goto L_3B8A;
    case RC_ADDR(0x00003b90u): goto L_3B90;
    case RC_ADDR(0x00003b92u): goto L_3B92;
    case RC_ADDR(0x00003b96u): goto L_3B96;
    case RC_ADDR(0x00003b9au): goto L_3B9A;
    case RC_ADDR(0x00003b9cu): goto L_3B9C;
    case RC_ADDR(0x00003ba0u): goto L_3BA0;
    case RC_ADDR(0x00003ba4u): goto L_3BA4;
    case RC_ADDR(0x00003ba8u): goto L_3BA8;
    case RC_ADDR(0x00003baeu): goto L_3BAE;
    case RC_ADDR(0x00003bb4u): goto L_3BB4;
    case RC_ADDR(0x00003bb8u): goto L_3BB8;
    case RC_ADDR(0x00003bbau): goto L_3BBA;
    case RC_ADDR(0x00003bbcu): goto L_3BBC;
    case RC_ADDR(0x00003bbeu): goto L_3BBE;
    case RC_ADDR(0x00003bc0u): goto L_3BC0;
    case RC_ADDR(0x00003bc6u): goto L_3BC6;
    case RC_ADDR(0x00003bc8u): goto L_3BC8;
    case RC_ADDR(0x00003bccu): goto L_3BCC;
    case RC_ADDR(0x00003bd0u): goto L_3BD0;
    case RC_ADDR(0x00003bd4u): goto L_3BD4;
    case RC_ADDR(0x00003bd8u): goto L_3BD8;
    case RC_ADDR(0x00003bdeu): goto L_3BDE;
    case RC_ADDR(0x00003be2u): goto L_3BE2;
    case RC_ADDR(0x00003be4u): goto L_3BE4;
    case RC_ADDR(0x00003be6u): goto L_3BE6;
    case RC_ADDR(0x00003be8u): goto L_3BE8;
    case RC_ADDR(0x00003beau): goto L_3BEA;
    case RC_ADDR(0x00003becu): goto L_3BEC;
    case RC_ADDR(0x00003bf2u): goto L_3BF2;
    case RC_ADDR(0x00003bf4u): goto L_3BF4;
    case RC_ADDR(0x00003bf8u): goto L_3BF8;
    case RC_ADDR(0x00003bfcu): goto L_3BFC;
    case RC_ADDR(0x00003c00u): goto L_3C00;
    case RC_ADDR(0x00003c04u): goto L_3C04;
    case RC_ADDR(0x00003c06u): goto L_3C06;
    case RC_ADDR(0x00003c08u): goto L_3C08;
    case RC_ADDR(0x00003c0au): goto L_3C0A;
    case RC_ADDR(0x00003c0eu): goto L_3C0E;
    case RC_ADDR(0x00003c12u): goto L_3C12;
    case RC_ADDR(0x00003c16u): goto L_3C16;
    case RC_ADDR(0x00003c1au): goto L_3C1A;
    case RC_ADDR(0x00003c1eu): goto L_3C1E;
    case RC_ADDR(0x00003c22u): goto L_3C22;
    case RC_ADDR(0x00003c24u): goto L_3C24;
    case RC_ADDR(0x00003c28u): goto L_3C28;
    case RC_ADDR(0x00003c2au): goto L_3C2A;
    case RC_ADDR(0x00003c2eu): goto L_3C2E;
    case RC_ADDR(0x00003c32u): goto L_3C32;
    case RC_ADDR(0x00003c34u): goto L_3C34;
    case RC_ADDR(0x00003c3au): goto L_3C3A;
    case RC_ADDR(0x00003c40u): goto L_3C40;
    case RC_ADDR(0x00003c42u): goto L_3C42;
    case RC_ADDR(0x00003c48u): goto L_3C48;
    case RC_ADDR(0x00003c4eu): goto L_3C4E;
    case RC_ADDR(0x00003c52u): goto L_3C52;
    case RC_ADDR(0x00003c54u): goto L_3C54;
    case RC_ADDR(0x00003c58u): goto L_3C58;
    case RC_ADDR(0x00003c5cu): goto L_3C5C;
    case RC_ADDR(0x00003c5eu): goto L_3C5E;
    case RC_ADDR(0x00003c60u): goto L_3C60;
    case RC_ADDR(0x00003c64u): goto L_3C64;
    case RC_ADDR(0x00003c68u): goto L_3C68;
    case RC_ADDR(0x00003c6cu): goto L_3C6C;
    case RC_ADDR(0x00003c6eu): goto L_3C6E;
    case RC_ADDR(0x00003c70u): goto L_3C70;
    case RC_ADDR(0x00003c72u): goto L_3C72;
    case RC_ADDR(0x00003c76u): goto L_3C76;
    case RC_ADDR(0x00003c7au): goto L_3C7A;
    case RC_ADDR(0x00003c7eu): goto L_3C7E;
    case RC_ADDR(0x00003c80u): goto L_3C80;
    case RC_ADDR(0x00003c84u): goto L_3C84;
    case RC_ADDR(0x00003c86u): goto L_3C86;
    case RC_ADDR(0x00003c88u): goto L_3C88;
    case RC_ADDR(0x00003c8cu): goto L_3C8C;
    case RC_ADDR(0x00003c90u): goto L_3C90;
    case RC_ADDR(0x00003c94u): goto L_3C94;
    case RC_ADDR(0x00003c98u): goto L_3C98;
    case RC_ADDR(0x00003c9cu): goto L_3C9C;
    case RC_ADDR(0x00003ca0u): goto L_3CA0;
    case RC_ADDR(0x00003ca4u): goto L_3CA4;
    case RC_ADDR(0x00003ca6u): goto L_3CA6;
    case RC_ADDR(0x00003caau): goto L_3CAA;
    case RC_ADDR(0x00003cacu): goto L_3CAC;
    case RC_ADDR(0x00003caeu): goto L_3CAE;
    case RC_ADDR(0x00003cb2u): goto L_3CB2;
    case RC_ADDR(0x00003cb6u): goto L_3CB6;
    case RC_ADDR(0x00003cb8u): goto L_3CB8;
    case RC_ADDR(0x00003cbcu): goto L_3CBC;
    case RC_ADDR(0x00003cbeu): goto L_3CBE;
    case RC_ADDR(0x00003cc2u): goto L_3CC2;
    case RC_ADDR(0x00003cc4u): goto L_3CC4;
    case RC_ADDR(0x00003cc6u): goto L_3CC6;
    case RC_ADDR(0x00003ccau): goto L_3CCA;
    case RC_ADDR(0x00003cccu): goto L_3CCC;
    case RC_ADDR(0x00003cd0u): goto L_3CD0;
    case RC_ADDR(0x00003cd4u): goto L_3CD4;
    case RC_ADDR(0x00003cd8u): goto L_3CD8;
    case RC_ADDR(0x00003cdau): goto L_3CDA;
    case RC_ADDR(0x00003cdcu): goto L_3CDC;
    case RC_ADDR(0x00003ce0u): goto L_3CE0;
    case RC_ADDR(0x00003ce4u): goto L_3CE4;
    case RC_ADDR(0x00003ce6u): goto L_3CE6;
    case RC_ADDR(0x00003ce8u): goto L_3CE8;
    case RC_ADDR(0x00003cecu): goto L_3CEC;
    case RC_ADDR(0x00003cf0u): goto L_3CF0;
    case RC_ADDR(0x00003cf2u): goto L_3CF2;
    case RC_ADDR(0x00003cf4u): goto L_3CF4;
    case RC_ADDR(0x00003cf8u): goto L_3CF8;
    case RC_ADDR(0x00003cfau): goto L_3CFA;
    case RC_ADDR(0x00003cfcu): goto L_3CFC;
    case RC_ADDR(0x00003cfeu): goto L_3CFE;
    case RC_ADDR(0x00003d02u): goto L_3D02;
    case RC_ADDR(0x00003d06u): goto L_3D06;
    case RC_ADDR(0x00003d0au): goto L_3D0A;
    case RC_ADDR(0x00003d0eu): goto L_3D0E;
    case RC_ADDR(0x00003d10u): goto L_3D10;
    case RC_ADDR(0x00003d14u): goto L_3D14;
    case RC_ADDR(0x00003d16u): goto L_3D16;
    case RC_ADDR(0x00003d1au): goto L_3D1A;
    case RC_ADDR(0x00003d1cu): goto L_3D1C;
    case RC_ADDR(0x00003d1eu): goto L_3D1E;
    case RC_ADDR(0x00003d22u): goto L_3D22;
    case RC_ADDR(0x00003d24u): goto L_3D24;
    case RC_ADDR(0x00003d28u): goto L_3D28;
    case RC_ADDR(0x00003d2au): goto L_3D2A;
    case RC_ADDR(0x00003d2eu): goto L_3D2E;
    case RC_ADDR(0x00003d32u): goto L_3D32;
    case RC_ADDR(0x00003d36u): goto L_3D36;
    case RC_ADDR(0x00003d3au): goto L_3D3A;
    case RC_ADDR(0x00003d3cu): goto L_3D3C;
    case RC_ADDR(0x00003d40u): goto L_3D40;
    case RC_ADDR(0x00003d44u): goto L_3D44;
    case RC_ADDR(0x00003d46u): goto L_3D46;
    case RC_ADDR(0x00003d4au): goto L_3D4A;
    case RC_ADDR(0x00003d4eu): goto L_3D4E;
    case RC_ADDR(0x00003d52u): goto L_3D52;
    case RC_ADDR(0x00003d56u): goto L_3D56;
    case RC_ADDR(0x00003d5cu): goto L_3D5C;
    case RC_ADDR(0x00003d5eu): goto L_3D5E;
    case RC_ADDR(0x00003d60u): goto L_3D60;
    case RC_ADDR(0x00003d64u): goto L_3D64;
    case RC_ADDR(0x00003d68u): goto L_3D68;
    case RC_ADDR(0x00003d6au): goto L_3D6A;
    case RC_ADDR(0x00003d6cu): goto L_3D6C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_3B86:
    /* 00003b86   4  link.w A5,#ffffffc6 */
    c->pc = RC_ADDR(0x00003b86u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x3au;

L_3B8A:
    /* 00003b8a   6  cmpi.w #c8,(ffffd346,A4) */
    c->pc = RC_ADDR(0x00003b8au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2cbau));
    rc_cmp(c, RC_W, t0, 0x000000c8u);

L_3B90:
    /* 00003b90   2  bge 00003ba8 */
    c->pc = RC_ADDR(0x00003b90u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_3BA8;

L_3B92:
    /* 00003b92   4  move.w (fffff792,A4),D0 */
    c->pc = RC_ADDR(0x00003b92u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x86eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3B96:
    /* 00003b96   4  cmp.w (fffff79c,A4),D0 */
    c->pc = RC_ADDR(0x00003b96u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x864u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_3B9A:
    /* 00003b9a   2  bne 00003ba8 */
    c->pc = RC_ADDR(0x00003b9au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_3BA8;

L_3B9C:
    /* 00003b9c   4  move.w #c8,D0 */
    c->pc = RC_ADDR(0x00003b9cu);
    rc_step(c, m, 8);
    t0 = 0x000000c8u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3BA0:
    /* 00003ba0   4  sub.w (ffffd346,A4),D0 */
    c->pc = RC_ADDR(0x00003ba0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2cbau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_3BA4:
    /* 00003ba4   4  sub.w D0,(fffff792,A4) */
    c->pc = RC_ADDR(0x00003ba4u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x86eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_3BA8:
    /* 00003ba8   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x00003ba8u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3BAE:
    /* 00003bae   6  pea (00020000).l */
    c->pc = RC_ADDR(0x00003baeu);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00020000u);

L_3BB4:
    /* 00003bb4   4  move.w (fffff792,A4),D0 */
    c->pc = RC_ADDR(0x00003bb4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x86eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3BB8:
    /* 00003bb8   2  ext.l D0 */
    c->pc = RC_ADDR(0x00003bb8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_3BBA:
    /* 00003bba   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00003bbau);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_3BBC:
    /* 00003bbc   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x00003bbcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_3BBE:
    /* 00003bbe   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00003bbeu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3BC0:
    /* 00003bc0   6  pea (00660000).l */
    c->pc = RC_ADDR(0x00003bc0u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00660000u);

L_3BC6:
    /* 00003bc6   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00003bc6u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3BC8:
    /* 00003bc8   4  move.l (fffff780,A4),-(A7) */
    c->pc = RC_ADDR(0x00003bc8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x880u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3BCC:
    /* 00003bcc   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00003bccu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3BD0:
    /* 00003bd0   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00003bd0u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00003bd4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_3BD4:
    /* 00003bd4   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00003bd4u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_3BD8:
    /* 00003bd8   6  pea (00020000).l */
    c->pc = RC_ADDR(0x00003bd8u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00020000u);

L_3BDE:
    /* 00003bde   4  move.w (fffff792,A4),D0 */
    c->pc = RC_ADDR(0x00003bdeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x86eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3BE2:
    /* 00003be2   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00003be2u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_3BE4:
    /* 00003be4   2  ext.l D0 */
    c->pc = RC_ADDR(0x00003be4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_3BE6:
    /* 00003be6   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00003be6u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_3BE8:
    /* 00003be8   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x00003be8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_3BEA:
    /* 00003bea   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00003beau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3BEC:
    /* 00003bec   6  pea (00b20000).l */
    c->pc = RC_ADDR(0x00003becu);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00b20000u);

L_3BF2:
    /* 00003bf2   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00003bf2u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3BF4:
    /* 00003bf4   4  move.l (fffff784,A4),-(A7) */
    c->pc = RC_ADDR(0x00003bf4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x87cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3BF8:
    /* 00003bf8   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00003bf8u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3BFC:
    /* 00003bfc   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00003bfcu);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00003c00u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_3C00:
    /* 00003c00   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00003c00u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_3C04:
    /* 00003c04   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00003c04u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3C06:
    /* 00003c06   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00003c06u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_3C08:
    /* 00003c08   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00003c08u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_3C0A:
    /* 00003c0a   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00003c0au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_3C0E:
    /* 00003c0e   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x00003c0eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3C12:
    /* 00003c12   4  jsr (ffff829c,A4) */
    c->pc = RC_ADDR(0x00003c12u);
    rc_step(c, m, 18);
    /* vector 111 */
    rc_push32(c, m, RC_ADDR(0x00003c16u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d92u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021aa4u);
    return;

L_3C16:
    /* 00003c16   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00003c16u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_3C1A:
    /* 00003c1a   4  move.w (fffff78c,A4),D0 */
    c->pc = RC_ADDR(0x00003c1au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3C1E:
    /* 00003c1e   4  cmp.w (fffff794,A4),D0 */
    c->pc = RC_ADDR(0x00003c1eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x86cu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_3C22:
    /* 00003c22   2  bne 00003c2a */
    c->pc = RC_ADDR(0x00003c22u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_3C2A;

L_3C24:
    /* 00003c24   4  clr.w (fffff796,A4) */
    c->pc = RC_ADDR(0x00003c24u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x86au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3C28:
    /* 00003c28   2  bra 00003c7e */
    c->pc = RC_ADDR(0x00003c28u);
    rc_step(c, m, 10);
    goto L_3C7E;

L_3C2A:
    /* 00003c2a   4  move.w (fffff78c,A4),D0 */
    c->pc = RC_ADDR(0x00003c2au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3C2E:
    /* 00003c2e   4  cmp.w (fffff794,A4),D0 */
    c->pc = RC_ADDR(0x00003c2eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x86cu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_3C32:
    /* 00003c32   2  bcc 00003c42 */
    c->pc = RC_ADDR(0x00003c32u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_3C42;

L_3C34:
    /* 00003c34   6  move.w (fffff78c,A4),(fffffffe,A5) */
    c->pc = RC_ADDR(0x00003c34u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3C3A:
    /* 00003c3a   6  move.w (fffff794,A4),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00003c3au);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x86cu));
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3C40:
    /* 00003c40   2  bra 00003c4e */
    c->pc = RC_ADDR(0x00003c40u);
    rc_step(c, m, 10);
    goto L_3C4E;

L_3C42:
    /* 00003c42   6  move.w (fffff794,A4),(fffffffe,A5) */
    c->pc = RC_ADDR(0x00003c42u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x86cu));
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3C48:
    /* 00003c48   6  move.w (fffff78c,A4),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00003c48u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3C4E:
    /* 00003c4e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00003c4eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3C52:
    /* 00003c52   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00003c52u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_3C54:
    /* 00003c54   4  sub.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00003c54u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_3C58:
    /* 00003c58   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00003c58u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3C5C:
    /* 00003c5c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00003c5cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_3C5E:
    /* 00003c5e   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00003c5eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_3C60:
    /* 00003c60   4  lea (92a,A4),A0 */
    c->pc = RC_ADDR(0x00003c60u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x92au);

L_3C64:
    /* 00003c64   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00003c64u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_3C68:
    /* 00003c68   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00003c68u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3C6C:
    /* 00003c6c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00003c6cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_3C6E:
    /* 00003c6e   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00003c6eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_3C70:
    /* 00003c70   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00003c70u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_3C72:
    /* 00003c72   4  move.b (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x00003c72u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_3C76:
    /* 00003c76   4  mulu.w #5,D0 */
    c->pc = RC_ADDR(0x00003c76u);
    rc_step(c, m, 42);
    t0 = 0x00000005u;
    rc_mulu(c, 0, t0);

L_3C7A:
    /* 00003c7a   4  move.w D0,(fffff796,A4) */
    c->pc = RC_ADDR(0x00003c7au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x86au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3C7E:
    /* 00003c7e   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00003c7eu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3C80:
    /* 00003c80   4  move.w (fffff792,A4),D0 */
    c->pc = RC_ADDR(0x00003c80u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x86eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3C84:
    /* 00003c84   2  subq.w #7,D0 */
    c->pc = RC_ADDR(0x00003c84u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000007u;
    rc_flags_sub(c, RC_W, t1, 0x00000007u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_3C86:
    /* 00003c86   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00003c86u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3C88:
    /* 00003c88   4  move.w #52,-(A7) */
    c->pc = RC_ADDR(0x00003c88u);
    rc_step(c, m, 12);
    t0 = 0x00000052u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3C8C:
    /* 00003c8c   4  move.w (fffff794,A4),D0 */
    c->pc = RC_ADDR(0x00003c8cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x86cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3C90:
    /* 00003c90   4  muls.w #12,D0 */
    c->pc = RC_ADDR(0x00003c90u);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_3C94:
    /* 00003c94   4  lea (ffff85e6,A4),A0 */
    c->pc = RC_ADDR(0x00003c94u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a1au);

L_3C98:
    /* 00003c98   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00003c98u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3C9C:
    /* 00003c9c   4  jsr (00005468) */
    c->pc = RC_ADDR(0x00003c9cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00003ca0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005468u);
    return;

L_3CA0:
    /* 00003ca0   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00003ca0u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_3CA4:
    /* 00003ca4   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00003ca4u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3CA6:
    /* 00003ca6   4  move.w (fffff792,A4),D0 */
    c->pc = RC_ADDR(0x00003ca6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x86eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3CAA:
    /* 00003caa   2  addq.w #3,D0 */
    c->pc = RC_ADDR(0x00003caau);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000003u;
    rc_flags_add(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_3CAC:
    /* 00003cac   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00003cacu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3CAE:
    /* 00003cae   4  move.w #52,-(A7) */
    c->pc = RC_ADDR(0x00003caeu);
    rc_step(c, m, 12);
    t0 = 0x00000052u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3CB2:
    /* 00003cb2   4  jsr (00005bfc) */
    c->pc = RC_ADDR(0x00003cb2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00003cb6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005bfcu);
    return;

L_3CB6:
    /* 00003cb6   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00003cb6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_3CB8:
    /* 00003cb8   4  tst.w (fffff96e,A4) */
    c->pc = RC_ADDR(0x00003cb8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x692u));
    rc_set_nzvc(c, t0, RC_W);

L_3CBC:
    /* 00003cbc   2  beq 00003d10 */
    c->pc = RC_ADDR(0x00003cbcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_3D10;

L_3CBE:
    /* 00003cbe   4  move.w (fffff794,A4),D0 */
    c->pc = RC_ADDR(0x00003cbeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x86cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3CC2:
    /* 00003cc2   2  ext.l D0 */
    c->pc = RC_ADDR(0x00003cc2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_3CC4:
    /* 00003cc4   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00003cc4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_3CC6:
    /* 00003cc6   4  lea (fffff8aa,A4),A0 */
    c->pc = RC_ADDR(0x00003cc6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x756u);

L_3CCA:
    /* 00003cca   2  add.l A0,D0 */
    c->pc = RC_ADDR(0x00003ccau);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 0, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_3CCC:
    /* 00003ccc   4  move.l D0,(ffffffc6,A5) */
    c->pc = RC_ADDR(0x00003cccu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x3au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3CD0:
    /* 00003cd0   4  movea.l (ffffffc6,A5),A0 */
    c->pc = RC_ADDR(0x00003cd0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x3au));
    c->a[0] = t0;

L_3CD4:
    /* 00003cd4   4  move.b (3,A0),D0 */
    c->pc = RC_ADDR(0x00003cd4u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x3u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_3CD8:
    /* 00003cd8   2  ext.w D0 */
    c->pc = RC_ADDR(0x00003cd8u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_3CDA:
    /* 00003cda   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00003cdau);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3CDC:
    /* 00003cdc   4  movea.l (ffffffc6,A5),A0 */
    c->pc = RC_ADDR(0x00003cdcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x3au));
    c->a[0] = t0;

L_3CE0:
    /* 00003ce0   4  move.b (2,A0),D0 */
    c->pc = RC_ADDR(0x00003ce0u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_3CE4:
    /* 00003ce4   2  ext.w D0 */
    c->pc = RC_ADDR(0x00003ce4u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_3CE6:
    /* 00003ce6   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00003ce6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3CE8:
    /* 00003ce8   4  movea.l (ffffffc6,A5),A0 */
    c->pc = RC_ADDR(0x00003ce8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x3au));
    c->a[0] = t0;

L_3CEC:
    /* 00003cec   4  move.b (1,A0),D0 */
    c->pc = RC_ADDR(0x00003cecu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_3CF0:
    /* 00003cf0   2  ext.w D0 */
    c->pc = RC_ADDR(0x00003cf0u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_3CF2:
    /* 00003cf2   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00003cf2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3CF4:
    /* 00003cf4   4  movea.l (ffffffc6,A5),A0 */
    c->pc = RC_ADDR(0x00003cf4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x3au));
    c->a[0] = t0;

L_3CF8:
    /* 00003cf8   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00003cf8u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_3CFA:
    /* 00003cfa   2  ext.w D0 */
    c->pc = RC_ADDR(0x00003cfau);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_3CFC:
    /* 00003cfc   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00003cfcu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3CFE:
    /* 00003cfe   4  pea (00003d6e) */
    c->pc = RC_ADDR(0x00003cfeu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00003d6eu));

L_3D02:
    /* 00003d02   4  pea (ffffffca,A5) */
    c->pc = RC_ADDR(0x00003d02u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x36u));

L_3D06:
    /* 00003d06   4  jsr (ffff82f6,A4) */
    c->pc = RC_ADDR(0x00003d06u);
    rc_step(c, m, 18);
    /* vector 126 */
    rc_push32(c, m, RC_ADDR(0x00003d0au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023decu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022e58u);
    return;

L_3D0A:
    /* 00003d0a   4  lea (10,A7),A7 */
    c->pc = RC_ADDR(0x00003d0au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x10u);

L_3D0E:
    /* 00003d0e   2  bra 00003d3a */
    c->pc = RC_ADDR(0x00003d0eu);
    rc_step(c, m, 10);
    goto L_3D3A;

L_3D10:
    /* 00003d10   4  move.w (fffff796,A4),D0 */
    c->pc = RC_ADDR(0x00003d10u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x86au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3D14:
    /* 00003d14   2  ext.l D0 */
    c->pc = RC_ADDR(0x00003d14u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_3D16:
    /* 00003d16   4  divs.w #3c,D0 */
    c->pc = RC_ADDR(0x00003d16u);
    rc_step(c, m, 162);
    t0 = 0x0000003cu;
    rc_divs(c, m, 0, t0);

L_3D1A:
    /* 00003d1a   2  swap D0 */
    c->pc = RC_ADDR(0x00003d1au);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_3D1C:
    /* 00003d1c   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00003d1cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3D1E:
    /* 00003d1e   4  move.w (fffff796,A4),D0 */
    c->pc = RC_ADDR(0x00003d1eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x86au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3D22:
    /* 00003d22   2  ext.l D0 */
    c->pc = RC_ADDR(0x00003d22u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_3D24:
    /* 00003d24   4  divs.w #3c,D0 */
    c->pc = RC_ADDR(0x00003d24u);
    rc_step(c, m, 162);
    t0 = 0x0000003cu;
    rc_divs(c, m, 0, t0);

L_3D28:
    /* 00003d28   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00003d28u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3D2A:
    /* 00003d2a   4  pea (00003d82) */
    c->pc = RC_ADDR(0x00003d2au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00003d82u));

L_3D2E:
    /* 00003d2e   4  pea (ffffffca,A5) */
    c->pc = RC_ADDR(0x00003d2eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x36u));

L_3D32:
    /* 00003d32   4  jsr (ffff82f6,A4) */
    c->pc = RC_ADDR(0x00003d32u);
    rc_step(c, m, 18);
    /* vector 126 */
    rc_push32(c, m, RC_ADDR(0x00003d36u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023decu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022e58u);
    return;

L_3D36:
    /* 00003d36   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00003d36u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_3D3A:
    /* 00003d3a   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00003d3au);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3D3C:
    /* 00003d3c   4  move.w (fffff792,A4),D0 */
    c->pc = RC_ADDR(0x00003d3cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x86eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3D40:
    /* 00003d40   4  add.w #d,D0 */
    c->pc = RC_ADDR(0x00003d40u);
    rc_step(c, m, 10);
    t0 = 0x0000000du;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_3D44:
    /* 00003d44   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00003d44u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3D46:
    /* 00003d46   4  move.w #52,-(A7) */
    c->pc = RC_ADDR(0x00003d46u);
    rc_step(c, m, 12);
    t0 = 0x00000052u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3D4A:
    /* 00003d4a   4  pea (ffffffca,A5) */
    c->pc = RC_ADDR(0x00003d4au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x36u));

L_3D4E:
    /* 00003d4e   4  jsr (00005468) */
    c->pc = RC_ADDR(0x00003d4eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00003d52u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005468u);
    return;

L_3D52:
    /* 00003d52   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00003d52u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_3D56:
    /* 00003d56   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x00003d56u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3D5C:
    /* 00003d5c   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00003d5cu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3D5E:
    /* 00003d5e   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00003d5eu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_3D60:
    /* 00003d60   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x00003d60u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3D64:
    /* 00003d64   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00003d64u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00003d68u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_3D68:
    /* 00003d68   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00003d68u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_3D6A:
    /* 00003d6a   2  unlk A5 */
    c->pc = RC_ADDR(0x00003d6au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_3D6C:
    /* 00003d6c   2  rts */
    c->pc = RC_ADDR(0x00003d6cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
