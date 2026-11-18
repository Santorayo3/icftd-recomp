/* fn_00010af2 - 366 byte(s), 121 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00010af2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00010af2u): goto L_10AF2;
    case RC_ADDR(0x00010af6u): goto L_10AF6;
    case RC_ADDR(0x00010af8u): goto L_10AF8;
    case RC_ADDR(0x00010afcu): goto L_10AFC;
    case RC_ADDR(0x00010b00u): goto L_10B00;
    case RC_ADDR(0x00010b04u): goto L_10B04;
    case RC_ADDR(0x00010b06u): goto L_10B06;
    case RC_ADDR(0x00010b0au): goto L_10B0A;
    case RC_ADDR(0x00010b0cu): goto L_10B0C;
    case RC_ADDR(0x00010b10u): goto L_10B10;
    case RC_ADDR(0x00010b12u): goto L_10B12;
    case RC_ADDR(0x00010b16u): goto L_10B16;
    case RC_ADDR(0x00010b1au): goto L_10B1A;
    case RC_ADDR(0x00010b1cu): goto L_10B1C;
    case RC_ADDR(0x00010b1eu): goto L_10B1E;
    case RC_ADDR(0x00010b20u): goto L_10B20;
    case RC_ADDR(0x00010b24u): goto L_10B24;
    case RC_ADDR(0x00010b26u): goto L_10B26;
    case RC_ADDR(0x00010b28u): goto L_10B28;
    case RC_ADDR(0x00010b2au): goto L_10B2A;
    case RC_ADDR(0x00010b2cu): goto L_10B2C;
    case RC_ADDR(0x00010b2eu): goto L_10B2E;
    case RC_ADDR(0x00010b32u): goto L_10B32;
    case RC_ADDR(0x00010b36u): goto L_10B36;
    case RC_ADDR(0x00010b38u): goto L_10B38;
    case RC_ADDR(0x00010b3au): goto L_10B3A;
    case RC_ADDR(0x00010b40u): goto L_10B40;
    case RC_ADDR(0x00010b42u): goto L_10B42;
    case RC_ADDR(0x00010b48u): goto L_10B48;
    case RC_ADDR(0x00010b50u): goto L_10B50;
    case RC_ADDR(0x00010b54u): goto L_10B54;
    case RC_ADDR(0x00010b58u): goto L_10B58;
    case RC_ADDR(0x00010b5eu): goto L_10B5E;
    case RC_ADDR(0x00010b62u): goto L_10B62;
    case RC_ADDR(0x00010b64u): goto L_10B64;
    case RC_ADDR(0x00010b66u): goto L_10B66;
    case RC_ADDR(0x00010b68u): goto L_10B68;
    case RC_ADDR(0x00010b6au): goto L_10B6A;
    case RC_ADDR(0x00010b6eu): goto L_10B6E;
    case RC_ADDR(0x00010b70u): goto L_10B70;
    case RC_ADDR(0x00010b74u): goto L_10B74;
    case RC_ADDR(0x00010b76u): goto L_10B76;
    case RC_ADDR(0x00010b7au): goto L_10B7A;
    case RC_ADDR(0x00010b7cu): goto L_10B7C;
    case RC_ADDR(0x00010b7eu): goto L_10B7E;
    case RC_ADDR(0x00010b82u): goto L_10B82;
    case RC_ADDR(0x00010b86u): goto L_10B86;
    case RC_ADDR(0x00010b8au): goto L_10B8A;
    case RC_ADDR(0x00010b8cu): goto L_10B8C;
    case RC_ADDR(0x00010b90u): goto L_10B90;
    case RC_ADDR(0x00010b92u): goto L_10B92;
    case RC_ADDR(0x00010b96u): goto L_10B96;
    case RC_ADDR(0x00010b98u): goto L_10B98;
    case RC_ADDR(0x00010b9au): goto L_10B9A;
    case RC_ADDR(0x00010b9cu): goto L_10B9C;
    case RC_ADDR(0x00010b9eu): goto L_10B9E;
    case RC_ADDR(0x00010ba0u): goto L_10BA0;
    case RC_ADDR(0x00010ba2u): goto L_10BA2;
    case RC_ADDR(0x00010ba6u): goto L_10BA6;
    case RC_ADDR(0x00010ba8u): goto L_10BA8;
    case RC_ADDR(0x00010bacu): goto L_10BAC;
    case RC_ADDR(0x00010baeu): goto L_10BAE;
    case RC_ADDR(0x00010bb0u): goto L_10BB0;
    case RC_ADDR(0x00010bb4u): goto L_10BB4;
    case RC_ADDR(0x00010bb6u): goto L_10BB6;
    case RC_ADDR(0x00010bb8u): goto L_10BB8;
    case RC_ADDR(0x00010bbcu): goto L_10BBC;
    case RC_ADDR(0x00010bc0u): goto L_10BC0;
    case RC_ADDR(0x00010bc4u): goto L_10BC4;
    case RC_ADDR(0x00010bc6u): goto L_10BC6;
    case RC_ADDR(0x00010bc8u): goto L_10BC8;
    case RC_ADDR(0x00010bccu): goto L_10BCC;
    case RC_ADDR(0x00010bceu): goto L_10BCE;
    case RC_ADDR(0x00010bd2u): goto L_10BD2;
    case RC_ADDR(0x00010bd6u): goto L_10BD6;
    case RC_ADDR(0x00010bd8u): goto L_10BD8;
    case RC_ADDR(0x00010bdcu): goto L_10BDC;
    case RC_ADDR(0x00010bdeu): goto L_10BDE;
    case RC_ADDR(0x00010be2u): goto L_10BE2;
    case RC_ADDR(0x00010be4u): goto L_10BE4;
    case RC_ADDR(0x00010be8u): goto L_10BE8;
    case RC_ADDR(0x00010beau): goto L_10BEA;
    case RC_ADDR(0x00010becu): goto L_10BEC;
    case RC_ADDR(0x00010bf0u): goto L_10BF0;
    case RC_ADDR(0x00010bf2u): goto L_10BF2;
    case RC_ADDR(0x00010bf6u): goto L_10BF6;
    case RC_ADDR(0x00010bf8u): goto L_10BF8;
    case RC_ADDR(0x00010bfau): goto L_10BFA;
    case RC_ADDR(0x00010bfeu): goto L_10BFE;
    case RC_ADDR(0x00010c04u): goto L_10C04;
    case RC_ADDR(0x00010c06u): goto L_10C06;
    case RC_ADDR(0x00010c08u): goto L_10C08;
    case RC_ADDR(0x00010c0cu): goto L_10C0C;
    case RC_ADDR(0x00010c0eu): goto L_10C0E;
    case RC_ADDR(0x00010c12u): goto L_10C12;
    case RC_ADDR(0x00010c14u): goto L_10C14;
    case RC_ADDR(0x00010c18u): goto L_10C18;
    case RC_ADDR(0x00010c1au): goto L_10C1A;
    case RC_ADDR(0x00010c1eu): goto L_10C1E;
    case RC_ADDR(0x00010c20u): goto L_10C20;
    case RC_ADDR(0x00010c22u): goto L_10C22;
    case RC_ADDR(0x00010c24u): goto L_10C24;
    case RC_ADDR(0x00010c28u): goto L_10C28;
    case RC_ADDR(0x00010c2cu): goto L_10C2C;
    case RC_ADDR(0x00010c30u): goto L_10C30;
    case RC_ADDR(0x00010c34u): goto L_10C34;
    case RC_ADDR(0x00010c38u): goto L_10C38;
    case RC_ADDR(0x00010c3au): goto L_10C3A;
    case RC_ADDR(0x00010c3eu): goto L_10C3E;
    case RC_ADDR(0x00010c40u): goto L_10C40;
    case RC_ADDR(0x00010c42u): goto L_10C42;
    case RC_ADDR(0x00010c44u): goto L_10C44;
    case RC_ADDR(0x00010c46u): goto L_10C46;
    case RC_ADDR(0x00010c4au): goto L_10C4A;
    case RC_ADDR(0x00010c4cu): goto L_10C4C;
    case RC_ADDR(0x00010c50u): goto L_10C50;
    case RC_ADDR(0x00010c52u): goto L_10C52;
    case RC_ADDR(0x00010c54u): goto L_10C54;
    case RC_ADDR(0x00010c58u): goto L_10C58;
    case RC_ADDR(0x00010c5au): goto L_10C5A;
    case RC_ADDR(0x00010c5eu): goto L_10C5E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10AF2:
    /* 00010af2   4  tst.w (1e,A6) */
    c->pc = RC_ADDR(0x00010af2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0x1eu));
    rc_set_nzvc(c, t0, RC_W);

L_10AF6:
    /* 00010af6   2  beq 00010b00 */
    c->pc = RC_ADDR(0x00010af6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10B00;

L_10AF8:
    /* 00010af8   4  subq.w #1,(1e,A6) */
    c->pc = RC_ADDR(0x00010af8u);
    rc_step(c, m, 16);
    t3 = (c->a[6] + 0x1eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_10AFC:
    /* 00010afc   4  bne 00010c5e */
    c->pc = RC_ADDR(0x00010afcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_10C5E;

L_10B00:
    /* 00010b00   4  move.w (2,A6),D0 */
    c->pc = RC_ADDR(0x00010b00u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10B04:
    /* 00010b04   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x00010b04u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_10B06:
    /* 00010b06   4  cmp.w (20,A6),D0 */
    c->pc = RC_ADDR(0x00010b06u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0x20u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_10B0A:
    /* 00010b0a   2  beq 00010b50 */
    c->pc = RC_ADDR(0x00010b0au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10B50;

L_10B0C:
    /* 00010b0c   4  move.w D0,(20,A6) */
    c->pc = RC_ADDR(0x00010b0cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[6] + 0x20u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10B10:
    /* 00010b10   2  asl.w #1,D0 */
    c->pc = RC_ADDR(0x00010b10u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_10B12:
    /* 00010b12   4  lea (00010f4e),A0 */
    c->pc = RC_ADDR(0x00010b12u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x00010f4eu);

L_10B16:
    /* 00010b16   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00010b16u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10B1A:
    /* 00010b1a   2  move.w D1,D2 */
    c->pc = RC_ADDR(0x00010b1au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10B1C:
    /* 00010b1c   2  moveq #c,D7 */
    c->pc = RC_ADDR(0x00010b1cu);
    rc_step(c, m, 4);
    c->d[7] = 0x0000000cu;
    rc_set_nzvc(c, c->d[7], RC_L);

L_10B1E:
    /* 00010b1e   2  lsr.w D7,D2 */
    c->pc = RC_ADDR(0x00010b1eu);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 0, (c->d[7] & 63u), rc_d_get(c, 2, RC_W), RC_W));

L_10B20:
    /* 00010b20   4  move.w D2,(24,A6) */
    c->pc = RC_ADDR(0x00010b20u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[6] + 0x24u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10B24:
    /* 00010b24   2  asl.w D7,D2 */
    c->pc = RC_ADDR(0x00010b24u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 0, 1, (c->d[7] & 63u), rc_d_get(c, 2, RC_W), RC_W));

L_10B26:
    /* 00010b26   2  swap D1 */
    c->pc = RC_ADDR(0x00010b26u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_10B28:
    /* 00010b28   2  clr.w D1 */
    c->pc = RC_ADDR(0x00010b28u);
    rc_step(c, m, 4);
    rc_d_set(c, 1, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10B2A:
    /* 00010b2a   2  lsr.l #1,D1 */
    c->pc = RC_ADDR(0x00010b2au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_10B2C:
    /* 00010b2c   2  divu.w D2,D1 */
    c->pc = RC_ADDR(0x00010b2cu);
    rc_step(c, m, 140);
    t0 = rc_d_get(c, 2, RC_W);
    rc_divu(c, m, 1, t0);

L_10B2E:
    /* 00010b2e   4  move.w D1,(22,A6) */
    c->pc = RC_ADDR(0x00010b2eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[6] + 0x22u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10B32:
    /* 00010b32   4  mulu.w #2e9c,D1 */
    c->pc = RC_ADDR(0x00010b32u);
    rc_step(c, m, 42);
    t0 = 0x00002e9cu;
    rc_mulu(c, 1, t0);

L_10B36:
    /* 00010b36   2  moveq #f,D7 */
    c->pc = RC_ADDR(0x00010b36u);
    rc_step(c, m, 4);
    c->d[7] = 0x0000000fu;
    rc_set_nzvc(c, c->d[7], RC_L);

L_10B38:
    /* 00010b38   2  lsr.l D7,D1 */
    c->pc = RC_ADDR(0x00010b38u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 1, 0, (c->d[7] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_10B3A:
    /* 00010b3a   6  move.b D1,(00bfe401).l */
    c->pc = RC_ADDR(0x00010b3au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_B);
    rc_wr8(c, m, 0x00bfe401u, t0);
    rc_set_nzvc(c, t0, RC_B);

L_10B40:
    /* 00010b40   2  lsr.w #8,D1 */
    c->pc = RC_ADDR(0x00010b40u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000008u, rc_d_get(c, 1, RC_W), RC_W));

L_10B42:
    /* 00010b42   6  move.b D1,(00bfe501).l */
    c->pc = RC_ADDR(0x00010b42u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_B);
    rc_wr8(c, m, 0x00bfe501u, t0);
    rc_set_nzvc(c, t0, RC_B);

L_10B48:
    /* 00010b48   8  move.b #11,(00bfee01).l */
    c->pc = RC_ADDR(0x00010b48u);
    rc_step(c, m, 20);
    t0 = 0x00000011u;
    rc_wr8(c, m, 0x00bfee01u, t0);
    rc_set_nzvc(c, t0, RC_B);

L_10B50:
    /* 00010b50   4  tst.w (a,A6) */
    c->pc = RC_ADDR(0x00010b50u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_10B54:
    /* 00010b54   4  beq 00010c5e */
    c->pc = RC_ADDR(0x00010b54u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10C5E;

L_10B58:
    /* 00010b58   6  move.w (24,A6),(1e,A6) */
    c->pc = RC_ADDR(0x00010b58u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[6] + 0x24u));
    rc_wr16(c, m, (c->a[6] + 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10B5E:
    /* 00010b5e   4  movea.l (6,A6),A2 */
    c->pc = RC_ADDR(0x00010b5eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[6] + 0x6u));
    c->a[2] = t0;

L_10B62:
    /* 00010b62   2  clr.w D6 */
    c->pc = RC_ADDR(0x00010b62u);
    rc_step(c, m, 4);
    rc_d_set(c, 6, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10B64:
    /* 00010b64   2  movea.l A2,A1 */
    c->pc = RC_ADDR(0x00010b64u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[1] = t0;

L_10B66:
    /* 00010b66   2  movea.l A6,A5 */
    c->pc = RC_ADDR(0x00010b66u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 6, RC_L);
    c->a[5] = t0;

L_10B68:
    /* 00010b68   2  clr.b D7 */
    c->pc = RC_ADDR(0x00010b68u);
    rc_step(c, m, 4);
    rc_d_set(c, 7, RC_B, 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_10B6A:
    /* 00010b6a   4  tst.l (a6,A5) */
    c->pc = RC_ADDR(0x00010b6au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xa6u));
    rc_set_nzvc(c, t0, RC_L);

L_10B6E:
    /* 00010b6e   2  beq 00010b86 */
    c->pc = RC_ADDR(0x00010b6eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10B86;

L_10B70:
    /* 00010b70   4  subq.l #1,(a6,A5) */
    c->pc = RC_ADDR(0x00010b70u);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0xa6u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_10B74:
    /* 00010b74   2  bne 00010b82 */
    c->pc = RC_ADDR(0x00010b74u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_10B82;

L_10B76:
    /* 00010b76   4  tst.l (26,A5) */
    c->pc = RC_ADDR(0x00010b76u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x26u));
    rc_set_nzvc(c, t0, RC_L);

L_10B7A:
    /* 00010b7a   2  beq 00010b82 */
    c->pc = RC_ADDR(0x00010b7au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10B82;

L_10B7C:
    /* 00010b7c   2  move.b D7,D0 */
    c->pc = RC_ADDR(0x00010b7cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_B);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_10B7E:
    /* 00010b7e   4  bsr 00010dea */
    c->pc = RC_ADDR(0x00010b7eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00010b82u));
    rc_depth++;
    c->pc = RC_ADDR(0x00010deau);
    return;

L_10B82:
    /* 00010b82   4  bra 00010c1e */
    c->pc = RC_ADDR(0x00010b82u);
    rc_step(c, m, 10);
    goto L_10C1E;

L_10B86:
    /* 00010b86   4  tst.l (b6,A5) */
    c->pc = RC_ADDR(0x00010b86u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xb6u));
    rc_set_nzvc(c, t0, RC_L);

L_10B8A:
    /* 00010b8a   2  beq 00010b92 */
    c->pc = RC_ADDR(0x00010b8au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10B92;

L_10B8C:
    /* 00010b8c   4  subq.l #1,(b6,A5) */
    c->pc = RC_ADDR(0x00010b8cu);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0xb6u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_10B90:
    /* 00010b90   2  bne 00010b82 */
    c->pc = RC_ADDR(0x00010b90u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_10B82; }

L_10B92:
    /* 00010b92   4  move.l (e6,A5),D0 */
    c->pc = RC_ADDR(0x00010b92u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xe6u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10B96:
    /* 00010b96   2  bne 00010b9c */
    c->pc = RC_ADDR(0x00010b96u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_10B9C;

L_10B98:
    /* 00010b98   2  addq.w #1,D6 */
    c->pc = RC_ADDR(0x00010b98u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_10B9A:
    /* 00010b9a   2  bra 00010b82 */
    c->pc = RC_ADDR(0x00010b9au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_10B82;

L_10B9C:
    /* 00010b9c   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00010b9cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_10B9E:
    /* 00010b9e   2  move.w (A0)+,D2 */
    c->pc = RC_ADDR(0x00010b9eu);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10BA0:
    /* 00010ba0   2  beq 00010b9e */
    c->pc = RC_ADDR(0x00010ba0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_10B9E; }

L_10BA2:
    /* 00010ba2   4  cmpi.w #ffff,D2 */
    c->pc = RC_ADDR(0x00010ba2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_10BA6:
    /* 00010ba6   2  beq 00010b98 */
    c->pc = RC_ADDR(0x00010ba6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_10B98; }

L_10BA8:
    /* 00010ba8   4  move.l A0,(e6,A5) */
    c->pc = RC_ADDR(0x00010ba8u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] + 0xe6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10BAC:
    /* 00010bac   2  move.w D2,D3 */
    c->pc = RC_ADDR(0x00010bacu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10BAE:
    /* 00010bae   2  lsr.w #8,D2 */
    c->pc = RC_ADDR(0x00010baeu);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 0, 0x00000008u, rc_d_get(c, 2, RC_W), RC_W));

L_10BB0:
    /* 00010bb0   4  andi.w #ff,D3 */
    c->pc = RC_ADDR(0x00010bb0u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 & 0x000000ffu;
    rc_d_set(c, 3, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_10BB4:
    /* 00010bb4   2  tst.b D2 */
    c->pc = RC_ADDR(0x00010bb4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_B);
    rc_set_nzvc(c, t0, RC_B);

L_10BB6:
    /* 00010bb6   2  bpl 00010bd8 */
    c->pc = RC_ADDR(0x00010bb6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_10BD8;

L_10BB8:
    /* 00010bb8   4  cmpi.b #80,D2 */
    c->pc = RC_ADDR(0x00010bb8u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000080u);

L_10BBC:
    /* 00010bbc   4  beq 00010c1a */
    c->pc = RC_ADDR(0x00010bbcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10C1A;

L_10BC0:
    /* 00010bc0   4  cmpi.b #81,D2 */
    c->pc = RC_ADDR(0x00010bc0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000081u);

L_10BC4:
    /* 00010bc4   2  bne 00010b9e */
    c->pc = RC_ADDR(0x00010bc4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_10B9E; }

L_10BC6:
    /* 00010bc6   2  clr.l D0 */
    c->pc = RC_ADDR(0x00010bc6u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_10BC8:
    /* 00010bc8   4  lea (40,A2),A3 */
    c->pc = RC_ADDR(0x00010bc8u);
    rc_step(c, m, 8);
    c->a[3] = (c->a[2] + 0x40u);

L_10BCC:
    /* 00010bcc   2  asl.w #2,D3 */
    c->pc = RC_ADDR(0x00010bccu);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_W, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 3, RC_W), RC_W));

L_10BCE:
    /* 00010bce   4  move.l (0,A3,D3.w),D0 */
    c->pc = RC_ADDR(0x00010bceu);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd32(c, m, (c->a[3] + 0x0u + t4));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10BD2:
    /* 00010bd2   4  move.l D0,(96,A5) */
    c->pc = RC_ADDR(0x00010bd2u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] + 0x96u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10BD6:
    /* 00010bd6   2  bra 00010b9e */
    c->pc = RC_ADDR(0x00010bd6u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_10B9E;

L_10BD8:
    /* 00010bd8   4  tst.l (26,A5) */
    c->pc = RC_ADDR(0x00010bd8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x26u));
    rc_set_nzvc(c, t0, RC_L);

L_10BDC:
    /* 00010bdc   2  beq 00010c1a */
    c->pc = RC_ADDR(0x00010bdcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10C1A;

L_10BDE:
    /* 00010bde   4  move.l (96,A5),D0 */
    c->pc = RC_ADDR(0x00010bdeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x96u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10BE2:
    /* 00010be2   2  bne 00010bea */
    c->pc = RC_ADDR(0x00010be2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_10BEA;

L_10BE4:
    /* 00010be4   4  move.l (c,A2),D0 */
    c->pc = RC_ADDR(0x00010be4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10BE8:
    /* 00010be8   2  beq 00010c1a */
    c->pc = RC_ADDR(0x00010be8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10C1A;

L_10BEA:
    /* 00010bea   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00010beau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_10BEC:
    /* 00010bec   4  move.w (4,A2),D1 */
    c->pc = RC_ADDR(0x00010becu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10BF0:
    /* 00010bf0   2  asr.w #4,D1 */
    c->pc = RC_ADDR(0x00010bf0u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 0, 0x00000004u, rc_d_get(c, 1, RC_W), RC_W));

L_10BF2:
    /* 00010bf2   4  subi.w #8,D1 */
    c->pc = RC_ADDR(0x00010bf2u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_10BF6:
    /* 00010bf6   2  add.w D2,D1 */
    c->pc = RC_ADDR(0x00010bf6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_10BF8:
    /* 00010bf8   2  move.b D7,D0 */
    c->pc = RC_ADDR(0x00010bf8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_B);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_10BFA:
    /* 00010bfa   4  move.w (12,A1),D2 */
    c->pc = RC_ADDR(0x00010bfau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x12u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10BFE:
    /* 00010bfe   6  cmpi.w #1,(28,A5) */
    c->pc = RC_ADDR(0x00010bfeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x28u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_10C04:
    /* 00010c04   2  beq 00010c08 */
    c->pc = RC_ADDR(0x00010c04u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10C08;

L_10C06:
    /* 00010c06   2  lsr.w #1,D2 */
    c->pc = RC_ADDR(0x00010c06u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W));

L_10C08:
    /* 00010c08   4  bsr 00010d2c */
    c->pc = RC_ADDR(0x00010c08u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00010c0cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00010d2cu);
    return;

L_10C0C:
    /* 00010c0c   2  move.w D3,D0 */
    c->pc = RC_ADDR(0x00010c0cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10C0E:
    /* 00010c0e   4  mulu.w #c000,D0 */
    c->pc = RC_ADDR(0x00010c0eu);
    rc_step(c, m, 42);
    t0 = 0x0000c000u;
    rc_mulu(c, 0, t0);

L_10C12:
    /* 00010c12   2  swap D0 */
    c->pc = RC_ADDR(0x00010c12u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_10C14:
    /* 00010c14   4  move.w D0,(a8,A5) */
    c->pc = RC_ADDR(0x00010c14u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] + 0xa8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10C18:
    /* 00010c18   2  sub.w D0,D3 */
    c->pc = RC_ADDR(0x00010c18u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_10C1A:
    /* 00010c1a   4  move.w D3,(b8,A5) */
    c->pc = RC_ADDR(0x00010c1au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, (c->a[5] + 0xb8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10C1E:
    /* 00010c1e   2  addq.l #4,A1 */
    c->pc = RC_ADDR(0x00010c1eu);
    rc_step(c, m, 8);
    c->a[1] += 0x00000004u;

L_10C20:
    /* 00010c20   2  addq.l #4,A5 */
    c->pc = RC_ADDR(0x00010c20u);
    rc_step(c, m, 8);
    c->a[5] += 0x00000004u;

L_10C22:
    /* 00010c22   2  addq.b #1,D7 */
    c->pc = RC_ADDR(0x00010c22u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 7, RC_B);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 7, RC_B, t2);

L_10C24:
    /* 00010c24   4  cmpi.b #4,D7 */
    c->pc = RC_ADDR(0x00010c24u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 7, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000004u);

L_10C28:
    /* 00010c28   4  bne 00010b6a */
    c->pc = RC_ADDR(0x00010c28u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_10B6A; }

L_10C2C:
    /* 00010c2c   4  move.l (10,A6),D0 */
    c->pc = RC_ADDR(0x00010c2cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[6] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10C30:
    /* 00010c30   4  addq.l #1,(10,A6) */
    c->pc = RC_ADDR(0x00010c30u);
    rc_step(c, m, 24);
    t3 = (c->a[6] + 0x10u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_10C34:
    /* 00010c34   4  move.l (14,A6),D1 */
    c->pc = RC_ADDR(0x00010c34u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[6] + 0x14u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10C38:
    /* 00010c38   2  bpl 00010c42 */
    c->pc = RC_ADDR(0x00010c38u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_10C42;

L_10C3A:
    /* 00010c3a   4  cmpi.w #4,D6 */
    c->pc = RC_ADDR(0x00010c3au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_10C3E:
    /* 00010c3e   2  bne 00010c5e */
    c->pc = RC_ADDR(0x00010c3eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_10C5E;

L_10C40:
    /* 00010c40   2  bra 00010c46 */
    c->pc = RC_ADDR(0x00010c40u);
    rc_step(c, m, 10);
    goto L_10C46;

L_10C42:
    /* 00010c42   2  cmp.l D1,D0 */
    c->pc = RC_ADDR(0x00010c42u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_10C44:
    /* 00010c44   2  bne 00010c5e */
    c->pc = RC_ADDR(0x00010c44u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_10C5E;

L_10C46:
    /* 00010c46   4  tst.w (a,A6) */
    c->pc = RC_ADDR(0x00010c46u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_10C4A:
    /* 00010c4a   2  bmi 00010c52 */
    c->pc = RC_ADDR(0x00010c4au);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_10C52;

L_10C4C:
    /* 00010c4c   4  subq.w #1,(a,A6) */
    c->pc = RC_ADDR(0x00010c4cu);
    rc_step(c, m, 16);
    t3 = (c->a[6] + 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_10C50:
    /* 00010c50   2  beq 00010c5e */
    c->pc = RC_ADDR(0x00010c50u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10C5E;

L_10C52:
    /* 00010c52   2  movea.l A2,A0 */
    c->pc = RC_ADDR(0x00010c52u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[0] = t0;

L_10C54:
    /* 00010c54   4  bsr 00010a6e */
    c->pc = RC_ADDR(0x00010c54u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00010c58u));
    rc_depth++;
    c->pc = RC_ADDR(0x00010a6eu);
    return;

L_10C58:
    /* 00010c58   2  addq.w #1,D6 */
    c->pc = RC_ADDR(0x00010c58u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_10C5A:
    /* 00010c5a   4  bra 00010b64 */
    c->pc = RC_ADDR(0x00010c5au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_10B64;

L_10C5E:
    /* 00010c5e   2  rts */
    c->pc = RC_ADDR(0x00010c5eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
