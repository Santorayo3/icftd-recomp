/* fn_00019c06 - 572 byte(s), 149 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00019c06(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00019c06u): goto L_19C06;
    case RC_ADDR(0x00019c0au): goto L_19C0A;
    case RC_ADDR(0x00019c0eu): goto L_19C0E;
    case RC_ADDR(0x00019c10u): goto L_19C10;
    case RC_ADDR(0x00019c16u): goto L_19C16;
    case RC_ADDR(0x00019c1cu): goto L_19C1C;
    case RC_ADDR(0x00019c22u): goto L_19C22;
    case RC_ADDR(0x00019c28u): goto L_19C28;
    case RC_ADDR(0x00019c2cu): goto L_19C2C;
    case RC_ADDR(0x00019c30u): goto L_19C30;
    case RC_ADDR(0x00019c34u): goto L_19C34;
    case RC_ADDR(0x00019c38u): goto L_19C38;
    case RC_ADDR(0x00019c3au): goto L_19C3A;
    case RC_ADDR(0x00019c3cu): goto L_19C3C;
    case RC_ADDR(0x00019c40u): goto L_19C40;
    case RC_ADDR(0x00019c44u): goto L_19C44;
    case RC_ADDR(0x00019c48u): goto L_19C48;
    case RC_ADDR(0x00019c4au): goto L_19C4A;
    case RC_ADDR(0x00019c4eu): goto L_19C4E;
    case RC_ADDR(0x00019c54u): goto L_19C54;
    case RC_ADDR(0x00019c56u): goto L_19C56;
    case RC_ADDR(0x00019c5au): goto L_19C5A;
    case RC_ADDR(0x00019c5cu): goto L_19C5C;
    case RC_ADDR(0x00019c5eu): goto L_19C5E;
    case RC_ADDR(0x00019c62u): goto L_19C62;
    case RC_ADDR(0x00019c68u): goto L_19C68;
    case RC_ADDR(0x00019c6eu): goto L_19C6E;
    case RC_ADDR(0x00019c70u): goto L_19C70;
    case RC_ADDR(0x00019c76u): goto L_19C76;
    case RC_ADDR(0x00019c78u): goto L_19C78;
    case RC_ADDR(0x00019c7cu): goto L_19C7C;
    case RC_ADDR(0x00019c7eu): goto L_19C7E;
    case RC_ADDR(0x00019c80u): goto L_19C80;
    case RC_ADDR(0x00019c84u): goto L_19C84;
    case RC_ADDR(0x00019c8au): goto L_19C8A;
    case RC_ADDR(0x00019c8eu): goto L_19C8E;
    case RC_ADDR(0x00019c90u): goto L_19C90;
    case RC_ADDR(0x00019c92u): goto L_19C92;
    case RC_ADDR(0x00019c96u): goto L_19C96;
    case RC_ADDR(0x00019c9cu): goto L_19C9C;
    case RC_ADDR(0x00019ca0u): goto L_19CA0;
    case RC_ADDR(0x00019ca2u): goto L_19CA2;
    case RC_ADDR(0x00019ca4u): goto L_19CA4;
    case RC_ADDR(0x00019ca8u): goto L_19CA8;
    case RC_ADDR(0x00019cacu): goto L_19CAC;
    case RC_ADDR(0x00019caeu): goto L_19CAE;
    case RC_ADDR(0x00019cb2u): goto L_19CB2;
    case RC_ADDR(0x00019cb6u): goto L_19CB6;
    case RC_ADDR(0x00019cbau): goto L_19CBA;
    case RC_ADDR(0x00019cbcu): goto L_19CBC;
    case RC_ADDR(0x00019cc0u): goto L_19CC0;
    case RC_ADDR(0x00019cc4u): goto L_19CC4;
    case RC_ADDR(0x00019cc8u): goto L_19CC8;
    case RC_ADDR(0x00019ccau): goto L_19CCA;
    case RC_ADDR(0x00019cccu): goto L_19CCC;
    case RC_ADDR(0x00019cd0u): goto L_19CD0;
    case RC_ADDR(0x00019cd4u): goto L_19CD4;
    case RC_ADDR(0x00019cd8u): goto L_19CD8;
    case RC_ADDR(0x00019cdcu): goto L_19CDC;
    case RC_ADDR(0x00019ce2u): goto L_19CE2;
    case RC_ADDR(0x00019ce8u): goto L_19CE8;
    case RC_ADDR(0x00019cecu): goto L_19CEC;
    case RC_ADDR(0x00019ceeu): goto L_19CEE;
    case RC_ADDR(0x00019cf0u): goto L_19CF0;
    case RC_ADDR(0x00019cf4u): goto L_19CF4;
    case RC_ADDR(0x00019cfau): goto L_19CFA;
    case RC_ADDR(0x00019cfeu): goto L_19CFE;
    case RC_ADDR(0x00019d04u): goto L_19D04;
    case RC_ADDR(0x00019d08u): goto L_19D08;
    case RC_ADDR(0x00019d0eu): goto L_19D0E;
    case RC_ADDR(0x00019d14u): goto L_19D14;
    case RC_ADDR(0x00019d18u): goto L_19D18;
    case RC_ADDR(0x00019d1eu): goto L_19D1E;
    case RC_ADDR(0x00019d24u): goto L_19D24;
    case RC_ADDR(0x00019d2au): goto L_19D2A;
    case RC_ADDR(0x00019d2eu): goto L_19D2E;
    case RC_ADDR(0x00019d32u): goto L_19D32;
    case RC_ADDR(0x00019d34u): goto L_19D34;
    case RC_ADDR(0x00019d36u): goto L_19D36;
    case RC_ADDR(0x00019d3au): goto L_19D3A;
    case RC_ADDR(0x00019d3eu): goto L_19D3E;
    case RC_ADDR(0x00019d42u): goto L_19D42;
    case RC_ADDR(0x00019d48u): goto L_19D48;
    case RC_ADDR(0x00019d4au): goto L_19D4A;
    case RC_ADDR(0x00019d4eu): goto L_19D4E;
    case RC_ADDR(0x00019d52u): goto L_19D52;
    case RC_ADDR(0x00019d56u): goto L_19D56;
    case RC_ADDR(0x00019d5au): goto L_19D5A;
    case RC_ADDR(0x00019d5eu): goto L_19D5E;
    case RC_ADDR(0x00019d60u): goto L_19D60;
    case RC_ADDR(0x00019d64u): goto L_19D64;
    case RC_ADDR(0x00019d68u): goto L_19D68;
    case RC_ADDR(0x00019d6eu): goto L_19D6E;
    case RC_ADDR(0x00019d74u): goto L_19D74;
    case RC_ADDR(0x00019d78u): goto L_19D78;
    case RC_ADDR(0x00019d7cu): goto L_19D7C;
    case RC_ADDR(0x00019d80u): goto L_19D80;
    case RC_ADDR(0x00019d82u): goto L_19D82;
    case RC_ADDR(0x00019d86u): goto L_19D86;
    case RC_ADDR(0x00019d88u): goto L_19D88;
    case RC_ADDR(0x00019d8cu): goto L_19D8C;
    case RC_ADDR(0x00019d90u): goto L_19D90;
    case RC_ADDR(0x00019d92u): goto L_19D92;
    case RC_ADDR(0x00019d96u): goto L_19D96;
    case RC_ADDR(0x00019d98u): goto L_19D98;
    case RC_ADDR(0x00019d9cu): goto L_19D9C;
    case RC_ADDR(0x00019da0u): goto L_19DA0;
    case RC_ADDR(0x00019da4u): goto L_19DA4;
    case RC_ADDR(0x00019da8u): goto L_19DA8;
    case RC_ADDR(0x00019daau): goto L_19DAA;
    case RC_ADDR(0x00019daeu): goto L_19DAE;
    case RC_ADDR(0x00019db4u): goto L_19DB4;
    case RC_ADDR(0x00019db6u): goto L_19DB6;
    case RC_ADDR(0x00019dbcu): goto L_19DBC;
    case RC_ADDR(0x00019dc0u): goto L_19DC0;
    case RC_ADDR(0x00019dc2u): goto L_19DC2;
    case RC_ADDR(0x00019dc6u): goto L_19DC6;
    case RC_ADDR(0x00019dccu): goto L_19DCC;
    case RC_ADDR(0x00019dceu): goto L_19DCE;
    case RC_ADDR(0x00019dd4u): goto L_19DD4;
    case RC_ADDR(0x00019dd8u): goto L_19DD8;
    case RC_ADDR(0x00019ddcu): goto L_19DDC;
    case RC_ADDR(0x00019ddeu): goto L_19DDE;
    case RC_ADDR(0x00019de2u): goto L_19DE2;
    case RC_ADDR(0x00019de6u): goto L_19DE6;
    case RC_ADDR(0x00019deau): goto L_19DEA;
    case RC_ADDR(0x00019deeu): goto L_19DEE;
    case RC_ADDR(0x00019df2u): goto L_19DF2;
    case RC_ADDR(0x00019df4u): goto L_19DF4;
    case RC_ADDR(0x00019df8u): goto L_19DF8;
    case RC_ADDR(0x00019dfcu): goto L_19DFC;
    case RC_ADDR(0x00019e00u): goto L_19E00;
    case RC_ADDR(0x00019e06u): goto L_19E06;
    case RC_ADDR(0x00019e0au): goto L_19E0A;
    case RC_ADDR(0x00019e0eu): goto L_19E0E;
    case RC_ADDR(0x00019e12u): goto L_19E12;
    case RC_ADDR(0x00019e16u): goto L_19E16;
    case RC_ADDR(0x00019e1au): goto L_19E1A;
    case RC_ADDR(0x00019e1cu): goto L_19E1C;
    case RC_ADDR(0x00019e1eu): goto L_19E1E;
    case RC_ADDR(0x00019e22u): goto L_19E22;
    case RC_ADDR(0x00019e26u): goto L_19E26;
    case RC_ADDR(0x00019e2au): goto L_19E2A;
    case RC_ADDR(0x00019e2eu): goto L_19E2E;
    case RC_ADDR(0x00019e32u): goto L_19E32;
    case RC_ADDR(0x00019e36u): goto L_19E36;
    case RC_ADDR(0x00019e3au): goto L_19E3A;
    case RC_ADDR(0x00019e3eu): goto L_19E3E;
    case RC_ADDR(0x00019e40u): goto L_19E40;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_19C06:
    /* 00019c06   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x00019c06u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_19C0A:
    /* 00019c0a   4  tst.w (7b6,A4) */
    c->pc = RC_ADDR(0x00019c0au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7b6u));
    rc_set_nzvc(c, t0, RC_W);

L_19C0E:
    /* 00019c0e   2  beq 00019c34 */
    c->pc = RC_ADDR(0x00019c0eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19C34;

L_19C10:
    /* 00019c10   6  move.w #168,(26da,A4) */
    c->pc = RC_ADDR(0x00019c10u);
    rc_step(c, m, 16);
    t0 = 0x00000168u;
    rc_wr16(c, m, (c->a[4] + 0x26dau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C16:
    /* 00019c16   6  move.w #168,(e76,A4) */
    c->pc = RC_ADDR(0x00019c16u);
    rc_step(c, m, 16);
    t0 = 0x00000168u;
    rc_wr16(c, m, (c->a[4] + 0xe76u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C1C:
    /* 00019c1c   6  move.w #1ae,(26dc,A4) */
    c->pc = RC_ADDR(0x00019c1cu);
    rc_step(c, m, 16);
    t0 = 0x000001aeu;
    rc_wr16(c, m, (c->a[4] + 0x26dcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C22:
    /* 00019c22   6  move.w #1ae,(e78,A4) */
    c->pc = RC_ADDR(0x00019c22u);
    rc_step(c, m, 16);
    t0 = 0x000001aeu;
    rc_wr16(c, m, (c->a[4] + 0xe78u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C28:
    /* 00019c28   4  clr.w (e74,A4) */
    c->pc = RC_ADDR(0x00019c28u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xe74u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19C2C:
    /* 00019c2c   4  clr.w (e7e,A4) */
    c->pc = RC_ADDR(0x00019c2cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xe7eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19C30:
    /* 00019c30   4  bra 00019cfa */
    c->pc = RC_ADDR(0x00019c30u);
    rc_step(c, m, 10);
    goto L_19CFA;

L_19C34:
    /* 00019c34   4  move.w (2968,A4),D0 */
    c->pc = RC_ADDR(0x00019c34u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2968u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C38:
    /* 00019c38   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019c38u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19C3A:
    /* 00019c3a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019c3au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19C3C:
    /* 00019c3c   4  lea (ffffcddc,A4),A0 */
    c->pc = RC_ADDR(0x00019c3cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3224u);

L_19C40:
    /* 00019c40   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00019c40u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C44:
    /* 00019c44   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x00019c44u);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x00019c48u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_19C48:
    /* 00019c48   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00019c48u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_19C4A:
    /* 00019c4a   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00019c4au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C4E:
    /* 00019c4e   6  cmpi.w #d,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00019c4eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000000du);

L_19C54:
    /* 00019c54   2  beq 00019c34 */
    c->pc = RC_ADDR(0x00019c54u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_19C34; }

L_19C56:
    /* 00019c56   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019c56u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C5A:
    /* 00019c5a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019c5au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19C5C:
    /* 00019c5c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019c5cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19C5E:
    /* 00019c5e   4  lea (2652,A4),A0 */
    c->pc = RC_ADDR(0x00019c5eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2652u);

L_19C62:
    /* 00019c62   6  move.w (0,A0,D0.w),(26de,A4) */
    c->pc = RC_ADDR(0x00019c62u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x26deu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C68:
    /* 00019c68   6  cmpi.w #2,(26de,A4) */
    c->pc = RC_ADDR(0x00019c68u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26deu));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_19C6E:
    /* 00019c6e   2  blt 00019c34 */
    c->pc = RC_ADDR(0x00019c6eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_19C34; }

L_19C70:
    /* 00019c70   6  cmpi.w #3,(26de,A4) */
    c->pc = RC_ADDR(0x00019c70u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26deu));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_19C76:
    /* 00019c76   2  bgt 00019c34 */
    c->pc = RC_ADDR(0x00019c76u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) { rc_tick(); goto L_19C34; }

L_19C78:
    /* 00019c78   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019c78u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C7C:
    /* 00019c7c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019c7cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19C7E:
    /* 00019c7e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019c7eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19C80:
    /* 00019c80   4  lea (267e,A4),A0 */
    c->pc = RC_ADDR(0x00019c80u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x267eu);

L_19C84:
    /* 00019c84   6  move.w (0,A0,D0.w),(26da,A4) */
    c->pc = RC_ADDR(0x00019c84u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x26dau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C8A:
    /* 00019c8a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019c8au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C8E:
    /* 00019c8e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019c8eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19C90:
    /* 00019c90   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019c90u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19C92:
    /* 00019c92   4  lea (26aa,A4),A0 */
    c->pc = RC_ADDR(0x00019c92u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x26aau);

L_19C96:
    /* 00019c96   6  move.w (0,A0,D0.w),(26dc,A4) */
    c->pc = RC_ADDR(0x00019c96u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x26dcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C9C:
    /* 00019c9c   4  move.w (26de,A4),D0 */
    c->pc = RC_ADDR(0x00019c9cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26deu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19CA0:
    /* 00019ca0   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019ca0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19CA2:
    /* 00019ca2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019ca2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19CA4:
    /* 00019ca4   4  lea (ffffcde2,A4),A0 */
    c->pc = RC_ADDR(0x00019ca4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x321eu);

L_19CA8:
    /* 00019ca8   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00019ca8u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19CAC:
    /* 00019cac   2  subq.w #8,D1 */
    c->pc = RC_ADDR(0x00019cacu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_19CAE:
    /* 00019cae   4  move.w (26de,A4),D0 */
    c->pc = RC_ADDR(0x00019caeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26deu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19CB2:
    /* 00019cb2   4  and.w #1,D0 */
    c->pc = RC_ADDR(0x00019cb2u);
    rc_step(c, m, 10);
    t0 = 0x00000001u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_19CB6:
    /* 00019cb6   4  bchg #0,D0 */
    c->pc = RC_ADDR(0x00019cb6u);
    rc_step(c, m, 12);
    t4 = 0x00000000u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 ^ (1u << t4);
    rc_d_set(c, 0, RC_L, t2);

L_19CBA:
    /* 00019cba   2  muls.w D0,D1 */
    c->pc = RC_ADDR(0x00019cbau);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 0, RC_W);
    rc_muls(c, 1, t0);

L_19CBC:
    /* 00019cbc   4  add.w (26da,A4),D1 */
    c->pc = RC_ADDR(0x00019cbcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26dau));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_19CC0:
    /* 00019cc0   4  move.w D1,(e76,A4) */
    c->pc = RC_ADDR(0x00019cc0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xe76u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19CC4:
    /* 00019cc4   4  move.w (26de,A4),D0 */
    c->pc = RC_ADDR(0x00019cc4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26deu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19CC8:
    /* 00019cc8   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019cc8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19CCA:
    /* 00019cca   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019ccau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19CCC:
    /* 00019ccc   4  lea (ffffcdf0,A4),A0 */
    c->pc = RC_ADDR(0x00019cccu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3210u);

L_19CD0:
    /* 00019cd0   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00019cd0u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19CD4:
    /* 00019cd4   4  add.w (26dc,A4),D1 */
    c->pc = RC_ADDR(0x00019cd4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26dcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_19CD8:
    /* 00019cd8   4  move.w D1,(e78,A4) */
    c->pc = RC_ADDR(0x00019cd8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xe78u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19CDC:
    /* 00019cdc   6  move.w #2,(e74,A4) */
    c->pc = RC_ADDR(0x00019cdcu);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0xe74u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19CE2:
    /* 00019ce2   6  move.w #1,(e88,A4) */
    c->pc = RC_ADDR(0x00019ce2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xe88u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19CE8:
    /* 00019ce8   4  move.w (26de,A4),D0 */
    c->pc = RC_ADDR(0x00019ce8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26deu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19CEC:
    /* 00019cec   2  asl.w #2,D0 */
    c->pc = RC_ADDR(0x00019cecu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_W), RC_W));

L_19CEE:
    /* 00019cee   2  subq.w #8,D0 */
    c->pc = RC_ADDR(0x00019ceeu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_19CF0:
    /* 00019cf0   4  move.w D0,(26e0,A4) */
    c->pc = RC_ADDR(0x00019cf0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x26e0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19CF4:
    /* 00019cf4   6  move.w #2,(e7e,A4) */
    c->pc = RC_ADDR(0x00019cf4u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0xe7eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19CFA:
    /* 00019cfa   4  clr.w (856,A4) */
    c->pc = RC_ADDR(0x00019cfau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x856u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19CFE:
    /* 00019cfe   6  move.w #1,(858,A4) */
    c->pc = RC_ADDR(0x00019cfeu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x858u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19D04:
    /* 00019d04   4  clr.w (2970,A4) */
    c->pc = RC_ADDR(0x00019d04u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x2970u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19D08:
    /* 00019d08   6  move.w #3,(e7a,A4) */
    c->pc = RC_ADDR(0x00019d08u);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0xe7au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19D0E:
    /* 00019d0e   6  move.w #2,(e7c,A4) */
    c->pc = RC_ADDR(0x00019d0eu);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0xe7cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19D14:
    /* 00019d14   4  clr.w (26d6,A4) */
    c->pc = RC_ADDR(0x00019d14u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x26d6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19D18:
    /* 00019d18   6  move.w #ffff,(26d8,A4) */
    c->pc = RC_ADDR(0x00019d18u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x26d8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19D1E:
    /* 00019d1e   6  move.w #1,(e82,A4) */
    c->pc = RC_ADDR(0x00019d1eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xe82u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19D24:
    /* 00019d24   6  move.w #4,(e86,A4) */
    c->pc = RC_ADDR(0x00019d24u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0xe86u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19D2A:
    /* 00019d2a   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00019d2au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19D2E:
    /* 00019d2e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019d2eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19D32:
    /* 00019d32   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019d32u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19D34:
    /* 00019d34   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019d34u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19D36:
    /* 00019d36   4  lea (2710,A4),A0 */
    c->pc = RC_ADDR(0x00019d36u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2710u);

L_19D3A:
    /* 00019d3a   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019d3au);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19D3E:
    /* 00019d3e   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00019d3eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_19D42:
    /* 00019d42   6  cmpi.w #c,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00019d42u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_19D48:
    /* 00019d48   2  blt 00019d2e */
    c->pc = RC_ADDR(0x00019d48u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_19D2E; }

L_19D4A:
    /* 00019d4a   4  clr.w (26f2,A4) */
    c->pc = RC_ADDR(0x00019d4au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x26f2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19D4E:
    /* 00019d4e   4  clr.w (7a4,A4) */
    c->pc = RC_ADDR(0x00019d4eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x7a4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19D52:
    /* 00019d52   4  clr.w (7a6,A4) */
    c->pc = RC_ADDR(0x00019d52u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x7a6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19D56:
    /* 00019d56   4  move.w #3c,-(A7) */
    c->pc = RC_ADDR(0x00019d56u);
    rc_step(c, m, 12);
    t0 = 0x0000003cu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19D5A:
    /* 00019d5a   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x00019d5au);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x00019d5eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_19D5E:
    /* 00019d5e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00019d5eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_19D60:
    /* 00019d60   4  move.w D0,(7a8,A4) */
    c->pc = RC_ADDR(0x00019d60u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x7a8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19D64:
    /* 00019d64   4  clr.w (7ac,A4) */
    c->pc = RC_ADDR(0x00019d64u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x7acu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19D68:
    /* 00019d68   6  move.w #8c,(7ae,A4) */
    c->pc = RC_ADDR(0x00019d68u);
    rc_step(c, m, 16);
    t0 = 0x0000008cu;
    rc_wr16(c, m, (c->a[4] + 0x7aeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19D6E:
    /* 00019d6e   6  move.w #50,(7b0,A4) */
    c->pc = RC_ADDR(0x00019d6eu);
    rc_step(c, m, 16);
    t0 = 0x00000050u;
    rc_wr16(c, m, (c->a[4] + 0x7b0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19D74:
    /* 00019d74   4  clr.w (2974,A4) */
    c->pc = RC_ADDR(0x00019d74u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x2974u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19D78:
    /* 00019d78   4  jsr (00019e42) */
    c->pc = RC_ADDR(0x00019d78u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00019d7cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00019e42u);
    return;

L_19D7C:
    /* 00019d7c   4  move.w (26da,A4),D0 */
    c->pc = RC_ADDR(0x00019d7cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26dau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19D80:
    /* 00019d80   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019d80u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19D82:
    /* 00019d82   4  divs.w #30,D0 */
    c->pc = RC_ADDR(0x00019d82u);
    rc_step(c, m, 162);
    t0 = 0x00000030u;
    rc_divs(c, m, 0, t0);

L_19D86:
    /* 00019d86   2  subq.w #3,D0 */
    c->pc = RC_ADDR(0x00019d86u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_19D88:
    /* 00019d88   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00019d88u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19D8C:
    /* 00019d8c   4  move.w (26dc,A4),D0 */
    c->pc = RC_ADDR(0x00019d8cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26dcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19D90:
    /* 00019d90   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019d90u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19D92:
    /* 00019d92   4  divs.w #28,D0 */
    c->pc = RC_ADDR(0x00019d92u);
    rc_step(c, m, 162);
    t0 = 0x00000028u;
    rc_divs(c, m, 0, t0);

L_19D96:
    /* 00019d96   2  subq.w #2,D0 */
    c->pc = RC_ADDR(0x00019d96u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_19D98:
    /* 00019d98   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00019d98u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19D9C:
    /* 00019d9c   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00019d9cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_19DA0:
    /* 00019da0   4  addq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00019da0u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_19DA4:
    /* 00019da4   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00019da4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_19DA8:
    /* 00019da8   2  bge 00019dae */
    c->pc = RC_ADDR(0x00019da8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_19DAE;

L_19DAA:
    /* 00019daa   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00019daau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19DAE:
    /* 00019dae   6  cmpi.w #a,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00019daeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_19DB4:
    /* 00019db4   2  ble 00019dbc */
    c->pc = RC_ADDR(0x00019db4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_19DBC;

L_19DB6:
    /* 00019db6   6  move.w #a,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00019db6u);
    rc_step(c, m, 16);
    t0 = 0x0000000au;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19DBC:
    /* 00019dbc   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00019dbcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_19DC0:
    /* 00019dc0   2  bge 00019dc6 */
    c->pc = RC_ADDR(0x00019dc0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_19DC6;

L_19DC2:
    /* 00019dc2   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00019dc2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19DC6:
    /* 00019dc6   6  cmpi.w #7,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00019dc6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_19DCC:
    /* 00019dcc   2  ble 00019dd4 */
    c->pc = RC_ADDR(0x00019dccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_19DD4;

L_19DCE:
    /* 00019dce   6  move.w #7,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00019dceu);
    rc_step(c, m, 16);
    t0 = 0x00000007u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19DD4:
    /* 00019dd4   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00019dd4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19DD8:
    /* 00019dd8   4  muls.w #30,D0 */
    c->pc = RC_ADDR(0x00019dd8u);
    rc_step(c, m, 42);
    t0 = 0x00000030u;
    rc_muls(c, 0, t0);

L_19DDC:
    /* 00019ddc   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019ddcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19DDE:
    /* 00019dde   4  divs.w #10,D0 */
    c->pc = RC_ADDR(0x00019ddeu);
    rc_step(c, m, 162);
    t0 = 0x00000010u;
    rc_divs(c, m, 0, t0);

L_19DE2:
    /* 00019de2   4  move.w D0,(1148,A4) */
    c->pc = RC_ADDR(0x00019de2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1148u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19DE6:
    /* 00019de6   4  move.w D0,(1410,A4) */
    c->pc = RC_ADDR(0x00019de6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1410u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19DEA:
    /* 00019dea   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00019deau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19DEE:
    /* 00019dee   4  muls.w #28,D0 */
    c->pc = RC_ADDR(0x00019deeu);
    rc_step(c, m, 42);
    t0 = 0x00000028u;
    rc_muls(c, 0, t0);

L_19DF2:
    /* 00019df2   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019df2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19DF4:
    /* 00019df4   4  divs.w #a,D0 */
    c->pc = RC_ADDR(0x00019df4u);
    rc_step(c, m, 162);
    t0 = 0x0000000au;
    rc_divs(c, m, 0, t0);

L_19DF8:
    /* 00019df8   4  move.w D0,(114a,A4) */
    c->pc = RC_ADDR(0x00019df8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x114au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19DFC:
    /* 00019dfc   4  move.w D0,(1412,A4) */
    c->pc = RC_ADDR(0x00019dfcu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1412u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19E00:
    /* 00019e00   6  move.w #f,(fffffa26,A4) */
    c->pc = RC_ADDR(0x00019e00u);
    rc_step(c, m, 16);
    t0 = 0x0000000fu;
    rc_wr16(c, m, (c->a[4] - 0x5dau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19E06:
    /* 00019e06   4  clr.w (fffffa28,A4) */
    c->pc = RC_ADDR(0x00019e06u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5d8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19E0A:
    /* 00019e0a   4  clr.l (fffffa2a,A4) */
    c->pc = RC_ADDR(0x00019e0au);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x5d6u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_19E0E:
    /* 00019e0e   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00019e0eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19E12:
    /* 00019e12   4  muls.w (fffffa9a,A4),D0 */
    c->pc = RC_ADDR(0x00019e12u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x566u));
    rc_muls(c, 0, t0);

L_19E16:
    /* 00019e16   4  add.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00019e16u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_19E1A:
    /* 00019e1a   2  asl.w #1,D0 */
    c->pc = RC_ADDR(0x00019e1au);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_19E1C:
    /* 00019e1c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019e1cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19E1E:
    /* 00019e1e   4  move.l D0,(fffffa8c,A4) */
    c->pc = RC_ADDR(0x00019e1eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x574u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_19E22:
    /* 00019e22   4  clr.l (fffffa88,A4) */
    c->pc = RC_ADDR(0x00019e22u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x578u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_19E26:
    /* 00019e26   4  clr.l (fffffa84,A4) */
    c->pc = RC_ADDR(0x00019e26u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x57cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_19E2A:
    /* 00019e2a   4  clr.w (fffffa80,A4) */
    c->pc = RC_ADDR(0x00019e2au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x580u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19E2E:
    /* 00019e2e   4  clr.w (fffffa7e,A4) */
    c->pc = RC_ADDR(0x00019e2eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x582u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19E32:
    /* 00019e32   4  clr.w (fffffa7c,A4) */
    c->pc = RC_ADDR(0x00019e32u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x584u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19E36:
    /* 00019e36   4  clr.w (fffffa7a,A4) */
    c->pc = RC_ADDR(0x00019e36u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x586u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19E3A:
    /* 00019e3a   4  jsr (ffff81b2,A4) */
    c->pc = RC_ADDR(0x00019e3au);
    rc_step(c, m, 18);
    /* vector 72 */
    rc_push32(c, m, RC_ADDR(0x00019e3eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ca8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00019716u);
    return;

L_19E3E:
    /* 00019e3e   2  unlk A5 */
    c->pc = RC_ADDR(0x00019e3eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_19E40:
    /* 00019e40   2  rts */
    c->pc = RC_ADDR(0x00019e40u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
