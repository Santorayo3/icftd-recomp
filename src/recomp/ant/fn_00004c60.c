/* fn_00004c60 - 278 byte(s), 75 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00004c60(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00004c60u): goto L_4C60;
    case RC_ADDR(0x00004c64u): goto L_4C64;
    case RC_ADDR(0x00004c68u): goto L_4C68;
    case RC_ADDR(0x00004c6eu): goto L_4C6E;
    case RC_ADDR(0x00004c72u): goto L_4C72;
    case RC_ADDR(0x00004c74u): goto L_4C74;
    case RC_ADDR(0x00004c76u): goto L_4C76;
    case RC_ADDR(0x00004c7au): goto L_4C7A;
    case RC_ADDR(0x00004c80u): goto L_4C80;
    case RC_ADDR(0x00004c86u): goto L_4C86;
    case RC_ADDR(0x00004c8eu): goto L_4C8E;
    case RC_ADDR(0x00004c96u): goto L_4C96;
    case RC_ADDR(0x00004c9cu): goto L_4C9C;
    case RC_ADDR(0x00004c9eu): goto L_4C9E;
    case RC_ADDR(0x00004ca2u): goto L_4CA2;
    case RC_ADDR(0x00004ca6u): goto L_4CA6;
    case RC_ADDR(0x00004caau): goto L_4CAA;
    case RC_ADDR(0x00004cacu): goto L_4CAC;
    case RC_ADDR(0x00004cb2u): goto L_4CB2;
    case RC_ADDR(0x00004cb6u): goto L_4CB6;
    case RC_ADDR(0x00004cbau): goto L_4CBA;
    case RC_ADDR(0x00004cbeu): goto L_4CBE;
    case RC_ADDR(0x00004cc2u): goto L_4CC2;
    case RC_ADDR(0x00004cc6u): goto L_4CC6;
    case RC_ADDR(0x00004cc8u): goto L_4CC8;
    case RC_ADDR(0x00004cccu): goto L_4CCC;
    case RC_ADDR(0x00004cd0u): goto L_4CD0;
    case RC_ADDR(0x00004cd4u): goto L_4CD4;
    case RC_ADDR(0x00004cd6u): goto L_4CD6;
    case RC_ADDR(0x00004cd8u): goto L_4CD8;
    case RC_ADDR(0x00004cdcu): goto L_4CDC;
    case RC_ADDR(0x00004ce0u): goto L_4CE0;
    case RC_ADDR(0x00004ce2u): goto L_4CE2;
    case RC_ADDR(0x00004ce4u): goto L_4CE4;
    case RC_ADDR(0x00004ce8u): goto L_4CE8;
    case RC_ADDR(0x00004cecu): goto L_4CEC;
    case RC_ADDR(0x00004cf0u): goto L_4CF0;
    case RC_ADDR(0x00004cf2u): goto L_4CF2;
    case RC_ADDR(0x00004cf6u): goto L_4CF6;
    case RC_ADDR(0x00004cfau): goto L_4CFA;
    case RC_ADDR(0x00004cfcu): goto L_4CFC;
    case RC_ADDR(0x00004d00u): goto L_4D00;
    case RC_ADDR(0x00004d04u): goto L_4D04;
    case RC_ADDR(0x00004d06u): goto L_4D06;
    case RC_ADDR(0x00004d08u): goto L_4D08;
    case RC_ADDR(0x00004d0cu): goto L_4D0C;
    case RC_ADDR(0x00004d10u): goto L_4D10;
    case RC_ADDR(0x00004d12u): goto L_4D12;
    case RC_ADDR(0x00004d16u): goto L_4D16;
    case RC_ADDR(0x00004d1au): goto L_4D1A;
    case RC_ADDR(0x00004d1cu): goto L_4D1C;
    case RC_ADDR(0x00004d1eu): goto L_4D1E;
    case RC_ADDR(0x00004d22u): goto L_4D22;
    case RC_ADDR(0x00004d28u): goto L_4D28;
    case RC_ADDR(0x00004d2au): goto L_4D2A;
    case RC_ADDR(0x00004d2eu): goto L_4D2E;
    case RC_ADDR(0x00004d32u): goto L_4D32;
    case RC_ADDR(0x00004d34u): goto L_4D34;
    case RC_ADDR(0x00004d36u): goto L_4D36;
    case RC_ADDR(0x00004d3au): goto L_4D3A;
    case RC_ADDR(0x00004d3eu): goto L_4D3E;
    case RC_ADDR(0x00004d42u): goto L_4D42;
    case RC_ADDR(0x00004d46u): goto L_4D46;
    case RC_ADDR(0x00004d4au): goto L_4D4A;
    case RC_ADDR(0x00004d4eu): goto L_4D4E;
    case RC_ADDR(0x00004d52u): goto L_4D52;
    case RC_ADDR(0x00004d56u): goto L_4D56;
    case RC_ADDR(0x00004d5au): goto L_4D5A;
    case RC_ADDR(0x00004d5eu): goto L_4D5E;
    case RC_ADDR(0x00004d62u): goto L_4D62;
    case RC_ADDR(0x00004d66u): goto L_4D66;
    case RC_ADDR(0x00004d6au): goto L_4D6A;
    case RC_ADDR(0x00004d70u): goto L_4D70;
    case RC_ADDR(0x00004d72u): goto L_4D72;
    case RC_ADDR(0x00004d74u): goto L_4D74;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_4C60:
    /* 00004c60   4  link.w A5,#ffffffe8 */
    c->pc = RC_ADDR(0x00004c60u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x18u;

L_4C64:
    /* 00004c64   4  movea.l (ffffd298,A4),A0 */
    c->pc = RC_ADDR(0x00004c64u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[0] = t0;

L_4C68:
    /* 00004c68   6  move.l (ffffd340,A4),(4,A0) */
    c->pc = RC_ADDR(0x00004c68u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4C6E:
    /* 00004c6e   4  move.w (fffff978,A4),D0 */
    c->pc = RC_ADDR(0x00004c6eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x688u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4C72:
    /* 00004c72   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004c72u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4C74:
    /* 00004c74   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00004c74u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_4C76:
    /* 00004c76   4  lea (ffff85ae,A4),A0 */
    c->pc = RC_ADDR(0x00004c76u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a52u);

L_4C7A:
    /* 00004c7a   6  move.w (0,A0,D0.w),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00004c7au);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4C80:
    /* 00004c80   6  move.w #e,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00004c80u);
    rc_step(c, m, 16);
    t0 = 0x0000000eu;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4C86:
    /* 00004c86   8  move.l #ba,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00004c86u);
    rc_step(c, m, 24);
    t0 = 0x000000bau;
    rc_wr32(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4C8E:
    /* 00004c8e   8  move.l #c3,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00004c8eu);
    rc_step(c, m, 24);
    t0 = 0x000000c3u;
    rc_wr32(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4C96:
    /* 00004c96   6  cmpi.w #4,(fffff978,A4) */
    c->pc = RC_ADDR(0x00004c96u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x688u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_4C9C:
    /* 00004c9c   2  bne 00004cba */
    c->pc = RC_ADDR(0x00004c9cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_4CBA;

L_4C9E:
    /* 00004c9e   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00004c9eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_4CA2:
    /* 00004ca2   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00004ca2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4CA6:
    /* 00004ca6   4  jsr (ffff83b6,A4) */
    c->pc = RC_ADDR(0x00004ca6u);
    rc_step(c, m, 18);
    /* vector 158 */
    rc_push32(c, m, RC_ADDR(0x00004caau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023eacu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002399cu);
    return;

L_4CAA:
    /* 00004caa   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00004caau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_4CAC:
    /* 00004cac   6  move.w #10,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00004cacu);
    rc_step(c, m, 16);
    t0 = 0x00000010u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4CB2:
    /* 00004cb2   4  addq.l #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00004cb2u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_4CB6:
    /* 00004cb6   4  subq.l #1,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00004cb6u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0xeu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_4CBA:
    /* 00004cba   4  pea (0000000e).l */
    c->pc = RC_ADDR(0x00004cbau);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000eu);

L_4CBE:
    /* 00004cbe   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00004cbeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4CC2:
    /* 00004cc2   4  jsr (ffff83b0,A4) */
    c->pc = RC_ADDR(0x00004cc2u);
    rc_step(c, m, 18);
    /* vector 157 */
    rc_push32(c, m, RC_ADDR(0x00004cc6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002398cu);
    return;

L_4CC6:
    /* 00004cc6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00004cc6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_4CC8:
    /* 00004cc8   4  move.l (fffffff2,A5),-(A7) */
    c->pc = RC_ADDR(0x00004cc8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4CCC:
    /* 00004ccc   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00004cccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4CD0:
    /* 00004cd0   4  add.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00004cd0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_4CD4:
    /* 00004cd4   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004cd4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4CD6:
    /* 00004cd6   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00004cd6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4CD8:
    /* 00004cd8   4  move.l (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x00004cd8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4CDC:
    /* 00004cdc   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00004cdcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4CE0:
    /* 00004ce0   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004ce0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4CE2:
    /* 00004ce2   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00004ce2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4CE4:
    /* 00004ce4   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00004ce4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4CE8:
    /* 00004ce8   4  jsr (ffff83aa,A4) */
    c->pc = RC_ADDR(0x00004ce8u);
    rc_step(c, m, 18);
    /* vector 156 */
    rc_push32(c, m, RC_ADDR(0x00004cecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002397au);
    return;

L_4CEC:
    /* 00004cec   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00004cecu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_4CF0:
    /* 00004cf0   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00004cf0u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_4CF2:
    /* 00004cf2   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00004cf2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4CF6:
    /* 00004cf6   4  jsr (ffff83b6,A4) */
    c->pc = RC_ADDR(0x00004cf6u);
    rc_step(c, m, 18);
    /* vector 158 */
    rc_push32(c, m, RC_ADDR(0x00004cfau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023eacu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002399cu);
    return;

L_4CFA:
    /* 00004cfa   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00004cfau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_4CFC:
    /* 00004cfc   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00004cfcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4D00:
    /* 00004d00   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00004d00u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4D04:
    /* 00004d04   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004d04u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4D06:
    /* 00004d06   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00004d06u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_4D08:
    /* 00004d08   4  lea (ffff85ae,A4),A0 */
    c->pc = RC_ADDR(0x00004d08u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a52u);

L_4D0C:
    /* 00004d0c   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00004d0cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4D10:
    /* 00004d10   2  addq.w #7,D1 */
    c->pc = RC_ADDR(0x00004d10u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000007u;
    rc_flags_add(c, RC_W, t1, 0x00000007u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_4D12:
    /* 00004d12   4  move.w D1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00004d12u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4D16:
    /* 00004d16   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00004d16u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4D1A:
    /* 00004d1a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004d1au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4D1C:
    /* 00004d1c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00004d1cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_4D1E:
    /* 00004d1e   4  lea (fffff970,A4),A0 */
    c->pc = RC_ADDR(0x00004d1eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x690u);

L_4D22:
    /* 00004d22   6  cmpi.w #9,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00004d22u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000009u);

L_4D28:
    /* 00004d28   2  ble 00004d2e */
    c->pc = RC_ADDR(0x00004d28u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_4D2E;

L_4D2A:
    /* 00004d2a   4  subq.w #5,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00004d2au);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000005u;
    rc_flags_sub(c, RC_W, t1, 0x00000005u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4D2E:
    /* 00004d2e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00004d2eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4D32:
    /* 00004d32   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004d32u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4D34:
    /* 00004d34   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00004d34u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_4D36:
    /* 00004d36   4  lea (fffff970,A4),A0 */
    c->pc = RC_ADDR(0x00004d36u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x690u);

L_4D3A:
    /* 00004d3a   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00004d3au);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4D3E:
    /* 00004d3e   4  pea (00004d76) */
    c->pc = RC_ADDR(0x00004d3eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00004d76u));

L_4D42:
    /* 00004d42   4  pea (ffffffe8,A5) */
    c->pc = RC_ADDR(0x00004d42u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x18u));

L_4D46:
    /* 00004d46   4  jsr (ffff82f6,A4) */
    c->pc = RC_ADDR(0x00004d46u);
    rc_step(c, m, 18);
    /* vector 126 */
    rc_push32(c, m, RC_ADDR(0x00004d4au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023decu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022e58u);
    return;

L_4D4A:
    /* 00004d4a   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00004d4au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_4D4E:
    /* 00004d4e   4  move.w #1b,-(A7) */
    c->pc = RC_ADDR(0x00004d4eu);
    rc_step(c, m, 12);
    t0 = 0x0000001bu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4D52:
    /* 00004d52   4  move.w #c2,-(A7) */
    c->pc = RC_ADDR(0x00004d52u);
    rc_step(c, m, 12);
    t0 = 0x000000c2u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4D56:
    /* 00004d56   4  move.w (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00004d56u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4D5A:
    /* 00004d5a   4  pea (ffffffe8,A5) */
    c->pc = RC_ADDR(0x00004d5au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x18u));

L_4D5E:
    /* 00004d5e   4  jsr (ffff8068,A4) */
    c->pc = RC_ADDR(0x00004d5eu);
    rc_step(c, m, 18);
    /* vector 17 */
    rc_push32(c, m, RC_ADDR(0x00004d62u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00005404u);
    return;

L_4D62:
    /* 00004d62   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00004d62u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_4D66:
    /* 00004d66   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00004d66u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4D6A:
    /* 00004d6a   6  cmpi.w #4,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00004d6au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_4D70:
    /* 00004d70   2  blt 00004d00 */
    c->pc = RC_ADDR(0x00004d70u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_4D00; }

L_4D72:
    /* 00004d72   2  unlk A5 */
    c->pc = RC_ADDR(0x00004d72u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_4D74:
    /* 00004d74   2  rts */
    c->pc = RC_ADDR(0x00004d74u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
