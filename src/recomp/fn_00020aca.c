/* fn_00020aca - 454 byte(s), 170 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020aca(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00020acau): goto L_20ACA;
    case RC_ADDR(0x00020aceu): goto L_20ACE;
    case RC_ADDR(0x00020ad2u): goto L_20AD2;
    case RC_ADDR(0x00020ad6u): goto L_20AD6;
    case RC_ADDR(0x00020adau): goto L_20ADA;
    case RC_ADDR(0x00020adeu): goto L_20ADE;
    case RC_ADDR(0x00020ae0u): goto L_20AE0;
    case RC_ADDR(0x00020ae4u): goto L_20AE4;
    case RC_ADDR(0x00020ae8u): goto L_20AE8;
    case RC_ADDR(0x00020aeau): goto L_20AEA;
    case RC_ADDR(0x00020aecu): goto L_20AEC;
    case RC_ADDR(0x00020aeeu): goto L_20AEE;
    case RC_ADDR(0x00020af2u): goto L_20AF2;
    case RC_ADDR(0x00020af4u): goto L_20AF4;
    case RC_ADDR(0x00020af6u): goto L_20AF6;
    case RC_ADDR(0x00020af8u): goto L_20AF8;
    case RC_ADDR(0x00020afcu): goto L_20AFC;
    case RC_ADDR(0x00020afeu): goto L_20AFE;
    case RC_ADDR(0x00020b00u): goto L_20B00;
    case RC_ADDR(0x00020b02u): goto L_20B02;
    case RC_ADDR(0x00020b06u): goto L_20B06;
    case RC_ADDR(0x00020b08u): goto L_20B08;
    case RC_ADDR(0x00020b0cu): goto L_20B0C;
    case RC_ADDR(0x00020b0eu): goto L_20B0E;
    case RC_ADDR(0x00020b12u): goto L_20B12;
    case RC_ADDR(0x00020b14u): goto L_20B14;
    case RC_ADDR(0x00020b16u): goto L_20B16;
    case RC_ADDR(0x00020b1au): goto L_20B1A;
    case RC_ADDR(0x00020b1eu): goto L_20B1E;
    case RC_ADDR(0x00020b20u): goto L_20B20;
    case RC_ADDR(0x00020b22u): goto L_20B22;
    case RC_ADDR(0x00020b26u): goto L_20B26;
    case RC_ADDR(0x00020b28u): goto L_20B28;
    case RC_ADDR(0x00020b2au): goto L_20B2A;
    case RC_ADDR(0x00020b2cu): goto L_20B2C;
    case RC_ADDR(0x00020b2eu): goto L_20B2E;
    case RC_ADDR(0x00020b30u): goto L_20B30;
    case RC_ADDR(0x00020b32u): goto L_20B32;
    case RC_ADDR(0x00020b34u): goto L_20B34;
    case RC_ADDR(0x00020b36u): goto L_20B36;
    case RC_ADDR(0x00020b38u): goto L_20B38;
    case RC_ADDR(0x00020b3cu): goto L_20B3C;
    case RC_ADDR(0x00020b40u): goto L_20B40;
    case RC_ADDR(0x00020b42u): goto L_20B42;
    case RC_ADDR(0x00020b44u): goto L_20B44;
    case RC_ADDR(0x00020b46u): goto L_20B46;
    case RC_ADDR(0x00020b4au): goto L_20B4A;
    case RC_ADDR(0x00020b4eu): goto L_20B4E;
    case RC_ADDR(0x00020b50u): goto L_20B50;
    case RC_ADDR(0x00020b52u): goto L_20B52;
    case RC_ADDR(0x00020b56u): goto L_20B56;
    case RC_ADDR(0x00020b58u): goto L_20B58;
    case RC_ADDR(0x00020b5cu): goto L_20B5C;
    case RC_ADDR(0x00020b60u): goto L_20B60;
    case RC_ADDR(0x00020b64u): goto L_20B64;
    case RC_ADDR(0x00020b68u): goto L_20B68;
    case RC_ADDR(0x00020b6eu): goto L_20B6E;
    case RC_ADDR(0x00020b70u): goto L_20B70;
    case RC_ADDR(0x00020b72u): goto L_20B72;
    case RC_ADDR(0x00020b76u): goto L_20B76;
    case RC_ADDR(0x00020b78u): goto L_20B78;
    case RC_ADDR(0x00020b7au): goto L_20B7A;
    case RC_ADDR(0x00020b7cu): goto L_20B7C;
    case RC_ADDR(0x00020b80u): goto L_20B80;
    case RC_ADDR(0x00020b82u): goto L_20B82;
    case RC_ADDR(0x00020b84u): goto L_20B84;
    case RC_ADDR(0x00020b86u): goto L_20B86;
    case RC_ADDR(0x00020b8au): goto L_20B8A;
    case RC_ADDR(0x00020b8cu): goto L_20B8C;
    case RC_ADDR(0x00020b90u): goto L_20B90;
    case RC_ADDR(0x00020b92u): goto L_20B92;
    case RC_ADDR(0x00020b96u): goto L_20B96;
    case RC_ADDR(0x00020b98u): goto L_20B98;
    case RC_ADDR(0x00020b9cu): goto L_20B9C;
    case RC_ADDR(0x00020b9eu): goto L_20B9E;
    case RC_ADDR(0x00020ba2u): goto L_20BA2;
    case RC_ADDR(0x00020ba4u): goto L_20BA4;
    case RC_ADDR(0x00020ba6u): goto L_20BA6;
    case RC_ADDR(0x00020ba8u): goto L_20BA8;
    case RC_ADDR(0x00020bacu): goto L_20BAC;
    case RC_ADDR(0x00020baeu): goto L_20BAE;
    case RC_ADDR(0x00020bb2u): goto L_20BB2;
    case RC_ADDR(0x00020bb4u): goto L_20BB4;
    case RC_ADDR(0x00020bb6u): goto L_20BB6;
    case RC_ADDR(0x00020bb8u): goto L_20BB8;
    case RC_ADDR(0x00020bbau): goto L_20BBA;
    case RC_ADDR(0x00020bbcu): goto L_20BBC;
    case RC_ADDR(0x00020bbeu): goto L_20BBE;
    case RC_ADDR(0x00020bc0u): goto L_20BC0;
    case RC_ADDR(0x00020bc2u): goto L_20BC2;
    case RC_ADDR(0x00020bc4u): goto L_20BC4;
    case RC_ADDR(0x00020bc6u): goto L_20BC6;
    case RC_ADDR(0x00020bc8u): goto L_20BC8;
    case RC_ADDR(0x00020bccu): goto L_20BCC;
    case RC_ADDR(0x00020bceu): goto L_20BCE;
    case RC_ADDR(0x00020bd2u): goto L_20BD2;
    case RC_ADDR(0x00020bd4u): goto L_20BD4;
    case RC_ADDR(0x00020bd6u): goto L_20BD6;
    case RC_ADDR(0x00020bd8u): goto L_20BD8;
    case RC_ADDR(0x00020bdcu): goto L_20BDC;
    case RC_ADDR(0x00020bdeu): goto L_20BDE;
    case RC_ADDR(0x00020be0u): goto L_20BE0;
    case RC_ADDR(0x00020be2u): goto L_20BE2;
    case RC_ADDR(0x00020be4u): goto L_20BE4;
    case RC_ADDR(0x00020be6u): goto L_20BE6;
    case RC_ADDR(0x00020be8u): goto L_20BE8;
    case RC_ADDR(0x00020beau): goto L_20BEA;
    case RC_ADDR(0x00020becu): goto L_20BEC;
    case RC_ADDR(0x00020beeu): goto L_20BEE;
    case RC_ADDR(0x00020bf2u): goto L_20BF2;
    case RC_ADDR(0x00020bf4u): goto L_20BF4;
    case RC_ADDR(0x00020bf8u): goto L_20BF8;
    case RC_ADDR(0x00020bfau): goto L_20BFA;
    case RC_ADDR(0x00020bfeu): goto L_20BFE;
    case RC_ADDR(0x00020c00u): goto L_20C00;
    case RC_ADDR(0x00020c04u): goto L_20C04;
    case RC_ADDR(0x00020c06u): goto L_20C06;
    case RC_ADDR(0x00020c0au): goto L_20C0A;
    case RC_ADDR(0x00020c0cu): goto L_20C0C;
    case RC_ADDR(0x00020c0eu): goto L_20C0E;
    case RC_ADDR(0x00020c10u): goto L_20C10;
    case RC_ADDR(0x00020c12u): goto L_20C12;
    case RC_ADDR(0x00020c14u): goto L_20C14;
    case RC_ADDR(0x00020c16u): goto L_20C16;
    case RC_ADDR(0x00020c18u): goto L_20C18;
    case RC_ADDR(0x00020c1au): goto L_20C1A;
    case RC_ADDR(0x00020c1cu): goto L_20C1C;
    case RC_ADDR(0x00020c1eu): goto L_20C1E;
    case RC_ADDR(0x00020c20u): goto L_20C20;
    case RC_ADDR(0x00020c24u): goto L_20C24;
    case RC_ADDR(0x00020c28u): goto L_20C28;
    case RC_ADDR(0x00020c2au): goto L_20C2A;
    case RC_ADDR(0x00020c2cu): goto L_20C2C;
    case RC_ADDR(0x00020c30u): goto L_20C30;
    case RC_ADDR(0x00020c32u): goto L_20C32;
    case RC_ADDR(0x00020c34u): goto L_20C34;
    case RC_ADDR(0x00020c36u): goto L_20C36;
    case RC_ADDR(0x00020c38u): goto L_20C38;
    case RC_ADDR(0x00020c3cu): goto L_20C3C;
    case RC_ADDR(0x00020c40u): goto L_20C40;
    case RC_ADDR(0x00020c42u): goto L_20C42;
    case RC_ADDR(0x00020c44u): goto L_20C44;
    case RC_ADDR(0x00020c48u): goto L_20C48;
    case RC_ADDR(0x00020c4cu): goto L_20C4C;
    case RC_ADDR(0x00020c4eu): goto L_20C4E;
    case RC_ADDR(0x00020c52u): goto L_20C52;
    case RC_ADDR(0x00020c54u): goto L_20C54;
    case RC_ADDR(0x00020c56u): goto L_20C56;
    case RC_ADDR(0x00020c58u): goto L_20C58;
    case RC_ADDR(0x00020c5au): goto L_20C5A;
    case RC_ADDR(0x00020c5eu): goto L_20C5E;
    case RC_ADDR(0x00020c62u): goto L_20C62;
    case RC_ADDR(0x00020c64u): goto L_20C64;
    case RC_ADDR(0x00020c66u): goto L_20C66;
    case RC_ADDR(0x00020c68u): goto L_20C68;
    case RC_ADDR(0x00020c6au): goto L_20C6A;
    case RC_ADDR(0x00020c6cu): goto L_20C6C;
    case RC_ADDR(0x00020c6eu): goto L_20C6E;
    case RC_ADDR(0x00020c70u): goto L_20C70;
    case RC_ADDR(0x00020c72u): goto L_20C72;
    case RC_ADDR(0x00020c74u): goto L_20C74;
    case RC_ADDR(0x00020c76u): goto L_20C76;
    case RC_ADDR(0x00020c78u): goto L_20C78;
    case RC_ADDR(0x00020c7cu): goto L_20C7C;
    case RC_ADDR(0x00020c7eu): goto L_20C7E;
    case RC_ADDR(0x00020c80u): goto L_20C80;
    case RC_ADDR(0x00020c82u): goto L_20C82;
    case RC_ADDR(0x00020c84u): goto L_20C84;
    case RC_ADDR(0x00020c88u): goto L_20C88;
    case RC_ADDR(0x00020c8cu): goto L_20C8C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20ACA:
    /* 00020aca   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00020acau);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_20ACE:
    /* 00020ace   4  movem.l { D4 D5 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x00020aceu);
    rc_step(c, m);
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

L_20AD2:
    /* 00020ad2   4  movea.l (10,A5),A2 */
    c->pc = RC_ADDR(0x00020ad2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[2] = t0;

L_20AD6:
    /* 00020ad6   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00020ad6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_20ADA:
    /* 00020ada   4  tst.l (ac,A0) */
    c->pc = RC_ADDR(0x00020adau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0xacu));
    rc_set_nzvc(c, t0, RC_L);

L_20ADE:
    /* 00020ade   2  beq 00020af8 */
    c->pc = RC_ADDR(0x00020adeu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_20AF8;

L_20AE0:
    /* 00020ae0   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00020ae0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_20AE4:
    /* 00020ae4   4  move.l (ac,A0),D0 */
    c->pc = RC_ADDR(0x00020ae4u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0xacu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20AE8:
    /* 00020ae8   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00020ae8u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_20AEA:
    /* 00020aea   2  move.l D0,D4 */
    c->pc = RC_ADDR(0x00020aeau);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20AEC:
    /* 00020aec   2  movea.l D4,A0 */
    c->pc = RC_ADDR(0x00020aecu);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[0] = t0;

L_20AEE:
    /* 00020aee   4  move.l (10,A0),D0 */
    c->pc = RC_ADDR(0x00020aeeu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20AF2:
    /* 00020af2   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00020af2u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_20AF4:
    /* 00020af4   2  movea.l D0,A3 */
    c->pc = RC_ADDR(0x00020af4u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[3] = t0;

L_20AF6:
    /* 00020af6   2  bra 00020afc */
    c->pc = RC_ADDR(0x00020af6u);
    rc_step(c, m);
    goto L_20AFC;

L_20AF8:
    /* 00020af8   4  movea.l (ffffcdc0,A4),A3 */
    c->pc = RC_ADDR(0x00020af8u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3240u));
    c->a[3] = t0;

L_20AFC:
    /* 00020afc   2  move.b (A3),D0 */
    c->pc = RC_ADDR(0x00020afcu);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[3]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20AFE:
    /* 00020afe   2  ext.w D0 */
    c->pc = RC_ADDR(0x00020afeu);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_20B00:
    /* 00020b00   2  ext.l D0 */
    c->pc = RC_ADDR(0x00020b00u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_20B02:
    /* 00020b02   4  add.l (c,A5),D0 */
    c->pc = RC_ADDR(0x00020b02u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_20B06:
    /* 00020b06   2  addq.l #2,D0 */
    c->pc = RC_ADDR(0x00020b06u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_20B08:
    /* 00020b08   4  move.w D0,(3b10,A4) */
    c->pc = RC_ADDR(0x00020b08u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x3b10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20B0C:
    /* 00020b0c   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00020b0cu);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20B0E:
    /* 00020b0e   4  move.w (3b10,A4),D0 */
    c->pc = RC_ADDR(0x00020b0eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3b10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20B12:
    /* 00020b12   2  ext.l D0 */
    c->pc = RC_ADDR(0x00020b12u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_20B14:
    /* 00020b14   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00020b14u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20B16:
    /* 00020b16   4  jsr (00021690) */
    c->pc = RC_ADDR(0x00020b16u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00020b1au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021690u);
    return;

L_20B1A:
    /* 00020b1a   4  move.l D0,(3b12,A4) */
    c->pc = RC_ADDR(0x00020b1au);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x3b12u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20B1E:
    /* 00020b1e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020b1eu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20B20:
    /* 00020b20   2  bne 00020b2a */
    c->pc = RC_ADDR(0x00020b20u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_20B2A;

L_20B22:
    /* 00020b22   4  movem.l (SP)+,{ D4 D5 A2 A3 } */
    c->pc = RC_ADDR(0x00020b22u);
    rc_step(c, m);
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

L_20B26:
    /* 00020b26   2  unlk A5 */
    c->pc = RC_ADDR(0x00020b26u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_20B28:
    /* 00020b28   2  rts */
    c->pc = RC_ADDR(0x00020b28u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_20B2A:
    /* 00020b2a   2  move.b (A3),D0 */
    c->pc = RC_ADDR(0x00020b2au);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[3]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20B2C:
    /* 00020b2c   2  ext.w D0 */
    c->pc = RC_ADDR(0x00020b2cu);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_20B2E:
    /* 00020b2e   2  move.w D0,D5 */
    c->pc = RC_ADDR(0x00020b2eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20B30:
    /* 00020b30   2  move.w D5,-(A7) */
    c->pc = RC_ADDR(0x00020b30u);
    rc_step(c, m);
    t0 = rc_d_get(c, 5, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_20B32:
    /* 00020b32   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00020b32u);
    rc_step(c, m);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_20B34:
    /* 00020b34   2  addq.l #1,A0 */
    c->pc = RC_ADDR(0x00020b34u);
    rc_step(c, m);
    c->a[0] += 0x00000001u;

L_20B36:
    /* 00020b36   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x00020b36u);
    rc_step(c, m);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20B38:
    /* 00020b38   4  move.l (3b12,A4),-(A7) */
    c->pc = RC_ADDR(0x00020b38u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b12u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20B3C:
    /* 00020b3c   4  jsr (00020cbc) */
    c->pc = RC_ADDR(0x00020b3cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00020b40u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020cbcu);
    return;

L_20B40:
    /* 00020b40   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x00020b40u);
    rc_step(c, m);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20B42:
    /* 00020b42   2  ext.l D0 */
    c->pc = RC_ADDR(0x00020b42u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_20B44:
    /* 00020b44   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00020b44u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_20B46:
    /* 00020b46   4  adda.l (3b12,A4),A0 */
    c->pc = RC_ADDR(0x00020b46u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b12u));
    c->a[0] += t0;

L_20B4A:
    /* 00020b4a   4  lea (00020c90),A1 */
    c->pc = RC_ADDR(0x00020b4au);
    rc_step(c, m);
    c->a[1] = RC_ADDR(0x00020c90u);

L_20B4E:
    /* 00020b4e   2  move.b (A1)+,(A0)+ */
    c->pc = RC_ADDR(0x00020b4eu);
    rc_step(c, m);
    t3 = c->a[1];
    c->a[1] += 1u;
    t0 = rc_rd8(c, m, t3);
    t3 = c->a[0];
    c->a[0] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20B50:
    /* 00020b50   2  bne 00020b4e */
    c->pc = RC_ADDR(0x00020b50u);
    rc_step(c, m);
    if (rc_cond(c, 6)) { rc_tick(); goto L_20B4E; }

L_20B52:
    /* 00020b52   4  move.w (e,A5),-(A7) */
    c->pc = RC_ADDR(0x00020b52u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_20B56:
    /* 00020b56   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00020b56u);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20B58:
    /* 00020b58   4  move.l (3b12,A4),-(A7) */
    c->pc = RC_ADDR(0x00020b58u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b12u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20B5C:
    /* 00020b5c   4  jsr (00020c98) */
    c->pc = RC_ADDR(0x00020b5cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00020b60u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020c98u);
    return;

L_20B60:
    /* 00020b60   4  movea.l (3b12,A4),A0 */
    c->pc = RC_ADDR(0x00020b60u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b12u));
    c->a[0] = t0;

L_20B64:
    /* 00020b64   4  clr.b (0,A0,D5.w) */
    c->pc = RC_ADDR(0x00020b64u);
    rc_step(c, m);
    t4 = rc_ext(c->d[5], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_20B68:
    /* 00020b68   6  move.w #1,(3b0e,A4) */
    c->pc = RC_ADDR(0x00020b68u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x3b0eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20B6E:
    /* 00020b6e   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x00020b6eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20B70:
    /* 00020b70   2  ext.l D0 */
    c->pc = RC_ADDR(0x00020b70u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_20B72:
    /* 00020b72   4  add.l (3b12,A4),D0 */
    c->pc = RC_ADDR(0x00020b72u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b12u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_20B76:
    /* 00020b76   2  movea.l D0,A3 */
    c->pc = RC_ADDR(0x00020b76u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[3] = t0;

L_20B78:
    /* 00020b78   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00020b78u);
    rc_step(c, m);
    c->a[3] += 0x00000001u;

L_20B7A:
    /* 00020b7a   2  movea.l A3,A2 */
    c->pc = RC_ADDR(0x00020b7au);
    rc_step(c, m);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[2] = t0;

L_20B7C:
    /* 00020b7c   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00020b7cu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0x14u);

L_20B80:
    /* 00020b80   2  move.b (A3),D0 */
    c->pc = RC_ADDR(0x00020b80u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[3]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20B82:
    /* 00020b82   2  ext.w D0 */
    c->pc = RC_ADDR(0x00020b82u);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_20B84:
    /* 00020b84   2  move.w D0,D5 */
    c->pc = RC_ADDR(0x00020b84u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20B86:
    /* 00020b86   4  cmp.w #20,D0 */
    c->pc = RC_ADDR(0x00020b86u);
    rc_step(c, m);
    t0 = 0x00000020u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20B8A:
    /* 00020b8a   2  beq 00020ba4 */
    c->pc = RC_ADDR(0x00020b8au);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_20BA4;

L_20B8C:
    /* 00020b8c   4  cmp.w #9,D5 */
    c->pc = RC_ADDR(0x00020b8cu);
    rc_step(c, m);
    t0 = 0x00000009u;
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20B90:
    /* 00020b90   2  beq 00020ba4 */
    c->pc = RC_ADDR(0x00020b90u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_20BA4;

L_20B92:
    /* 00020b92   4  cmp.w #c,D5 */
    c->pc = RC_ADDR(0x00020b92u);
    rc_step(c, m);
    t0 = 0x0000000cu;
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20B96:
    /* 00020b96   2  beq 00020ba4 */
    c->pc = RC_ADDR(0x00020b96u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_20BA4;

L_20B98:
    /* 00020b98   4  cmp.w #d,D5 */
    c->pc = RC_ADDR(0x00020b98u);
    rc_step(c, m);
    t0 = 0x0000000du;
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20B9C:
    /* 00020b9c   2  beq 00020ba4 */
    c->pc = RC_ADDR(0x00020b9cu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_20BA4;

L_20B9E:
    /* 00020b9e   4  cmp.w #a,D5 */
    c->pc = RC_ADDR(0x00020b9eu);
    rc_step(c, m);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20BA2:
    /* 00020ba2   2  bne 00020ba8 */
    c->pc = RC_ADDR(0x00020ba2u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_20BA8;

L_20BA4:
    /* 00020ba4   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00020ba4u);
    rc_step(c, m);
    c->a[3] += 0x00000001u;

L_20BA6:
    /* 00020ba6   2  bra 00020b80 */
    c->pc = RC_ADDR(0x00020ba6u);
    rc_step(c, m);
    rc_tick();
    goto L_20B80;

L_20BA8:
    /* 00020ba8   4  cmpi.b #20,(A3) */
    c->pc = RC_ADDR(0x00020ba8u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[3]);
    rc_cmp(c, RC_B, t0, 0x00000020u);

L_20BAC:
    /* 00020bac   2  blt 00020c28 */
    c->pc = RC_ADDR(0x00020bacu);
    rc_step(c, m);
    if (rc_cond(c, 13)) goto L_20C28;

L_20BAE:
    /* 00020bae   4  cmpi.b #22,(A3) */
    c->pc = RC_ADDR(0x00020baeu);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[3]);
    rc_cmp(c, RC_B, t0, 0x00000022u);

L_20BB2:
    /* 00020bb2   2  bne 00020be2 */
    c->pc = RC_ADDR(0x00020bb2u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_20BE2;

L_20BB4:
    /* 00020bb4   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00020bb4u);
    rc_step(c, m);
    c->a[3] += 0x00000001u;

L_20BB6:
    /* 00020bb6   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00020bb6u);
    rc_step(c, m);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_20BB8:
    /* 00020bb8   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00020bb8u);
    rc_step(c, m);
    c->a[3] += 0x00000001u;

L_20BBA:
    /* 00020bba   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00020bbau);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20BBC:
    /* 00020bbc   2  ext.w D0 */
    c->pc = RC_ADDR(0x00020bbcu);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_20BBE:
    /* 00020bbe   2  move.w D0,D5 */
    c->pc = RC_ADDR(0x00020bbeu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20BC0:
    /* 00020bc0   2  beq 00020be0 */
    c->pc = RC_ADDR(0x00020bc0u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_20BE0;

L_20BC2:
    /* 00020bc2   2  movea.l A2,A0 */
    c->pc = RC_ADDR(0x00020bc2u);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[0] = t0;

L_20BC4:
    /* 00020bc4   2  addq.l #1,A2 */
    c->pc = RC_ADDR(0x00020bc4u);
    rc_step(c, m);
    c->a[2] += 0x00000001u;

L_20BC6:
    /* 00020bc6   2  move.b D5,(A0) */
    c->pc = RC_ADDR(0x00020bc6u);
    rc_step(c, m);
    t0 = rc_d_get(c, 5, RC_B);
    rc_wr8(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_B);

L_20BC8:
    /* 00020bc8   4  cmp.w #22,D5 */
    c->pc = RC_ADDR(0x00020bc8u);
    rc_step(c, m);
    t0 = 0x00000022u;
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20BCC:
    /* 00020bcc   2  bne 00020bde */
    c->pc = RC_ADDR(0x00020bccu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_20BDE;

L_20BCE:
    /* 00020bce   4  cmpi.b #22,(A3) */
    c->pc = RC_ADDR(0x00020bceu);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[3]);
    rc_cmp(c, RC_B, t0, 0x00000022u);

L_20BD2:
    /* 00020bd2   2  bne 00020bd8 */
    c->pc = RC_ADDR(0x00020bd2u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_20BD8;

L_20BD4:
    /* 00020bd4   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00020bd4u);
    rc_step(c, m);
    c->a[3] += 0x00000001u;

L_20BD6:
    /* 00020bd6   2  bra 00020bde */
    c->pc = RC_ADDR(0x00020bd6u);
    rc_step(c, m);
    goto L_20BDE;

L_20BD8:
    /* 00020bd8   4  clr.b (ffffffff,A2) */
    c->pc = RC_ADDR(0x00020bd8u);
    rc_step(c, m);
    rc_wr8(c, m, (c->a[2] - 0x1u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_20BDC:
    /* 00020bdc   2  bra 00020be0 */
    c->pc = RC_ADDR(0x00020bdcu);
    rc_step(c, m);
    goto L_20BE0;

L_20BDE:
    /* 00020bde   2  bra 00020bb6 */
    c->pc = RC_ADDR(0x00020bdeu);
    rc_step(c, m);
    rc_tick();
    goto L_20BB6;

L_20BE0:
    /* 00020be0   2  bra 00020c1a */
    c->pc = RC_ADDR(0x00020be0u);
    rc_step(c, m);
    goto L_20C1A;

L_20BE2:
    /* 00020be2   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00020be2u);
    rc_step(c, m);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_20BE4:
    /* 00020be4   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00020be4u);
    rc_step(c, m);
    c->a[3] += 0x00000001u;

L_20BE6:
    /* 00020be6   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00020be6u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20BE8:
    /* 00020be8   2  ext.w D0 */
    c->pc = RC_ADDR(0x00020be8u);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_20BEA:
    /* 00020bea   2  move.w D0,D5 */
    c->pc = RC_ADDR(0x00020beau);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20BEC:
    /* 00020bec   2  beq 00020c14 */
    c->pc = RC_ADDR(0x00020becu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_20C14;

L_20BEE:
    /* 00020bee   4  cmp.w #20,D5 */
    c->pc = RC_ADDR(0x00020beeu);
    rc_step(c, m);
    t0 = 0x00000020u;
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20BF2:
    /* 00020bf2   2  beq 00020c14 */
    c->pc = RC_ADDR(0x00020bf2u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_20C14;

L_20BF4:
    /* 00020bf4   4  cmp.w #9,D5 */
    c->pc = RC_ADDR(0x00020bf4u);
    rc_step(c, m);
    t0 = 0x00000009u;
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20BF8:
    /* 00020bf8   2  beq 00020c14 */
    c->pc = RC_ADDR(0x00020bf8u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_20C14;

L_20BFA:
    /* 00020bfa   4  cmp.w #c,D5 */
    c->pc = RC_ADDR(0x00020bfau);
    rc_step(c, m);
    t0 = 0x0000000cu;
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20BFE:
    /* 00020bfe   2  beq 00020c14 */
    c->pc = RC_ADDR(0x00020bfeu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_20C14;

L_20C00:
    /* 00020c00   4  cmp.w #d,D5 */
    c->pc = RC_ADDR(0x00020c00u);
    rc_step(c, m);
    t0 = 0x0000000du;
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20C04:
    /* 00020c04   2  beq 00020c14 */
    c->pc = RC_ADDR(0x00020c04u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_20C14;

L_20C06:
    /* 00020c06   4  cmp.w #a,D5 */
    c->pc = RC_ADDR(0x00020c06u);
    rc_step(c, m);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20C0A:
    /* 00020c0a   2  beq 00020c14 */
    c->pc = RC_ADDR(0x00020c0au);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_20C14;

L_20C0C:
    /* 00020c0c   2  movea.l A2,A0 */
    c->pc = RC_ADDR(0x00020c0cu);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[0] = t0;

L_20C0E:
    /* 00020c0e   2  addq.l #1,A2 */
    c->pc = RC_ADDR(0x00020c0eu);
    rc_step(c, m);
    c->a[2] += 0x00000001u;

L_20C10:
    /* 00020c10   2  move.b D5,(A0) */
    c->pc = RC_ADDR(0x00020c10u);
    rc_step(c, m);
    t0 = rc_d_get(c, 5, RC_B);
    rc_wr8(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_B);

L_20C12:
    /* 00020c12   2  bra 00020be2 */
    c->pc = RC_ADDR(0x00020c12u);
    rc_step(c, m);
    rc_tick();
    goto L_20BE2;

L_20C14:
    /* 00020c14   2  movea.l A2,A0 */
    c->pc = RC_ADDR(0x00020c14u);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[0] = t0;

L_20C16:
    /* 00020c16   2  addq.l #1,A2 */
    c->pc = RC_ADDR(0x00020c16u);
    rc_step(c, m);
    c->a[2] += 0x00000001u;

L_20C18:
    /* 00020c18   2  clr.b (A0) */
    c->pc = RC_ADDR(0x00020c18u);
    rc_step(c, m);
    rc_wr8(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_20C1A:
    /* 00020c1a   2  tst.w D5 */
    c->pc = RC_ADDR(0x00020c1au);
    rc_step(c, m);
    t0 = rc_d_get(c, 5, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_20C1C:
    /* 00020c1c   2  bne 00020c20 */
    c->pc = RC_ADDR(0x00020c1cu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_20C20;

L_20C1E:
    /* 00020c1e   2  subq.l #1,A3 */
    c->pc = RC_ADDR(0x00020c1eu);
    rc_step(c, m);
    c->a[3] -= 0x00000001u;

L_20C20:
    /* 00020c20   4  addq.w #1,(3b0e,A4) */
    c->pc = RC_ADDR(0x00020c20u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x3b0eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_20C24:
    /* 00020c24   4  bra 00020b80 */
    c->pc = RC_ADDR(0x00020c24u);
    rc_step(c, m);
    rc_tick();
    goto L_20B80;

L_20C28:
    /* 00020c28   2  clr.b (A2) */
    c->pc = RC_ADDR(0x00020c28u);
    rc_step(c, m);
    rc_wr8(c, m, c->a[2], 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_20C2A:
    /* 00020c2a   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00020c2au);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20C2C:
    /* 00020c2c   4  move.w (3b0e,A4),D0 */
    c->pc = RC_ADDR(0x00020c2cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3b0eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20C30:
    /* 00020c30   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00020c30u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_20C32:
    /* 00020c32   2  ext.l D0 */
    c->pc = RC_ADDR(0x00020c32u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_20C34:
    /* 00020c34   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00020c34u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_20C36:
    /* 00020c36   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00020c36u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20C38:
    /* 00020c38   4  jsr (00021690) */
    c->pc = RC_ADDR(0x00020c38u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00020c3cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021690u);
    return;

L_20C3C:
    /* 00020c3c   4  move.l D0,(3b0a,A4) */
    c->pc = RC_ADDR(0x00020c3cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x3b0au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20C40:
    /* 00020c40   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020c40u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20C42:
    /* 00020c42   2  bne 00020c4c */
    c->pc = RC_ADDR(0x00020c42u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_20C4C;

L_20C44:
    /* 00020c44   4  clr.w (3b0e,A4) */
    c->pc = RC_ADDR(0x00020c44u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x3b0eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20C48:
    /* 00020c48   4  bra 00020b22 */
    c->pc = RC_ADDR(0x00020c48u);
    rc_step(c, m);
    rc_tick();
    goto L_20B22;

L_20C4C:
    /* 00020c4c   2  moveq #0,D5 */
    c->pc = RC_ADDR(0x00020c4cu);
    rc_step(c, m);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_20C4E:
    /* 00020c4e   4  movea.l (3b12,A4),A3 */
    c->pc = RC_ADDR(0x00020c4eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b12u));
    c->a[3] = t0;

L_20C52:
    /* 00020c52   2  bra 00020c78 */
    c->pc = RC_ADDR(0x00020c52u);
    rc_step(c, m);
    goto L_20C78;

L_20C54:
    /* 00020c54   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x00020c54u);
    rc_step(c, m);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20C56:
    /* 00020c56   2  ext.l D0 */
    c->pc = RC_ADDR(0x00020c56u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_20C58:
    /* 00020c58   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00020c58u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_20C5A:
    /* 00020c5a   4  movea.l (3b0a,A4),A0 */
    c->pc = RC_ADDR(0x00020c5au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b0au));
    c->a[0] = t0;

L_20C5E:
    /* 00020c5e   4  move.l A3,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00020c5eu);
    rc_step(c, m);
    t0 = rc_a_get(c, 3, RC_L);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20C62:
    /* 00020c62   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00020c62u);
    rc_step(c, m);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_20C64:
    /* 00020c64   2  move.l A0,D0 */
    c->pc = RC_ADDR(0x00020c64u);
    rc_step(c, m);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20C66:
    /* 00020c66   2  tst.b (A0)+ */
    c->pc = RC_ADDR(0x00020c66u);
    rc_step(c, m);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_set_nzvc(c, t0, RC_B);

L_20C68:
    /* 00020c68   2  bne 00020c66 */
    c->pc = RC_ADDR(0x00020c68u);
    rc_step(c, m);
    if (rc_cond(c, 6)) { rc_tick(); goto L_20C66; }

L_20C6A:
    /* 00020c6a   2  suba.l D0,A0 */
    c->pc = RC_ADDR(0x00020c6au);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] -= t0;

L_20C6C:
    /* 00020c6c   2  subq.l #1,A0 */
    c->pc = RC_ADDR(0x00020c6cu);
    rc_step(c, m);
    c->a[0] -= 0x00000001u;

L_20C6E:
    /* 00020c6e   2  move.w A0,D0 */
    c->pc = RC_ADDR(0x00020c6eu);
    rc_step(c, m);
    t0 = rc_a_get(c, 0, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20C70:
    /* 00020c70   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00020c70u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_20C72:
    /* 00020c72   2  ext.l D0 */
    c->pc = RC_ADDR(0x00020c72u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_20C74:
    /* 00020c74   2  adda.l D0,A3 */
    c->pc = RC_ADDR(0x00020c74u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[3] += t0;

L_20C76:
    /* 00020c76   2  addq.w #1,D5 */
    c->pc = RC_ADDR(0x00020c76u);
    rc_step(c, m);
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_20C78:
    /* 00020c78   4  cmp.w (3b0e,A4),D5 */
    c->pc = RC_ADDR(0x00020c78u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3b0eu));
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20C7C:
    /* 00020c7c   2  blt 00020c54 */
    c->pc = RC_ADDR(0x00020c7cu);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_20C54; }

L_20C7E:
    /* 00020c7e   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x00020c7eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20C80:
    /* 00020c80   2  ext.l D0 */
    c->pc = RC_ADDR(0x00020c80u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_20C82:
    /* 00020c82   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00020c82u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_20C84:
    /* 00020c84   4  movea.l (3b0a,A4),A0 */
    c->pc = RC_ADDR(0x00020c84u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b0au));
    c->a[0] = t0;

L_20C88:
    /* 00020c88   4  clr.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00020c88u);
    rc_step(c, m);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20C8C:
    /* 00020c8c   4  bra 00020b22 */
    c->pc = RC_ADDR(0x00020c8cu);
    rc_step(c, m);
    rc_tick();
    goto L_20B22;

}
