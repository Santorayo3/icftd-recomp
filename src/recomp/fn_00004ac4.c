/* fn_00004ac4 - 298 byte(s), 84 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00004ac4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00004ac4u): goto L_4AC4;
    case RC_ADDR(0x00004ac8u): goto L_4AC8;
    case RC_ADDR(0x00004accu): goto L_4ACC;
    case RC_ADDR(0x00004aceu): goto L_4ACE;
    case RC_ADDR(0x00004ad4u): goto L_4AD4;
    case RC_ADDR(0x00004ad6u): goto L_4AD6;
    case RC_ADDR(0x00004adcu): goto L_4ADC;
    case RC_ADDR(0x00004ae0u): goto L_4AE0;
    case RC_ADDR(0x00004ae2u): goto L_4AE2;
    case RC_ADDR(0x00004ae4u): goto L_4AE4;
    case RC_ADDR(0x00004ae8u): goto L_4AE8;
    case RC_ADDR(0x00004aeeu): goto L_4AEE;
    case RC_ADDR(0x00004af2u): goto L_4AF2;
    case RC_ADDR(0x00004af4u): goto L_4AF4;
    case RC_ADDR(0x00004af6u): goto L_4AF6;
    case RC_ADDR(0x00004afau): goto L_4AFA;
    case RC_ADDR(0x00004b00u): goto L_4B00;
    case RC_ADDR(0x00004b04u): goto L_4B04;
    case RC_ADDR(0x00004b08u): goto L_4B08;
    case RC_ADDR(0x00004b0cu): goto L_4B0C;
    case RC_ADDR(0x00004b10u): goto L_4B10;
    case RC_ADDR(0x00004b14u): goto L_4B14;
    case RC_ADDR(0x00004b18u): goto L_4B18;
    case RC_ADDR(0x00004b1cu): goto L_4B1C;
    case RC_ADDR(0x00004b20u): goto L_4B20;
    case RC_ADDR(0x00004b22u): goto L_4B22;
    case RC_ADDR(0x00004b24u): goto L_4B24;
    case RC_ADDR(0x00004b28u): goto L_4B28;
    case RC_ADDR(0x00004b2eu): goto L_4B2E;
    case RC_ADDR(0x00004b32u): goto L_4B32;
    case RC_ADDR(0x00004b36u): goto L_4B36;
    case RC_ADDR(0x00004b3au): goto L_4B3A;
    case RC_ADDR(0x00004b3eu): goto L_4B3E;
    case RC_ADDR(0x00004b42u): goto L_4B42;
    case RC_ADDR(0x00004b46u): goto L_4B46;
    case RC_ADDR(0x00004b4au): goto L_4B4A;
    case RC_ADDR(0x00004b4cu): goto L_4B4C;
    case RC_ADDR(0x00004b4eu): goto L_4B4E;
    case RC_ADDR(0x00004b52u): goto L_4B52;
    case RC_ADDR(0x00004b54u): goto L_4B54;
    case RC_ADDR(0x00004b56u): goto L_4B56;
    case RC_ADDR(0x00004b5au): goto L_4B5A;
    case RC_ADDR(0x00004b5eu): goto L_4B5E;
    case RC_ADDR(0x00004b60u): goto L_4B60;
    case RC_ADDR(0x00004b64u): goto L_4B64;
    case RC_ADDR(0x00004b68u): goto L_4B68;
    case RC_ADDR(0x00004b6au): goto L_4B6A;
    case RC_ADDR(0x00004b6eu): goto L_4B6E;
    case RC_ADDR(0x00004b72u): goto L_4B72;
    case RC_ADDR(0x00004b76u): goto L_4B76;
    case RC_ADDR(0x00004b78u): goto L_4B78;
    case RC_ADDR(0x00004b7cu): goto L_4B7C;
    case RC_ADDR(0x00004b80u): goto L_4B80;
    case RC_ADDR(0x00004b84u): goto L_4B84;
    case RC_ADDR(0x00004b86u): goto L_4B86;
    case RC_ADDR(0x00004b8au): goto L_4B8A;
    case RC_ADDR(0x00004b8eu): goto L_4B8E;
    case RC_ADDR(0x00004b90u): goto L_4B90;
    case RC_ADDR(0x00004b94u): goto L_4B94;
    case RC_ADDR(0x00004b96u): goto L_4B96;
    case RC_ADDR(0x00004b9au): goto L_4B9A;
    case RC_ADDR(0x00004b9eu): goto L_4B9E;
    case RC_ADDR(0x00004ba2u): goto L_4BA2;
    case RC_ADDR(0x00004ba4u): goto L_4BA4;
    case RC_ADDR(0x00004ba8u): goto L_4BA8;
    case RC_ADDR(0x00004baau): goto L_4BAA;
    case RC_ADDR(0x00004baeu): goto L_4BAE;
    case RC_ADDR(0x00004bb2u): goto L_4BB2;
    case RC_ADDR(0x00004bb6u): goto L_4BB6;
    case RC_ADDR(0x00004bbau): goto L_4BBA;
    case RC_ADDR(0x00004bbeu): goto L_4BBE;
    case RC_ADDR(0x00004bc0u): goto L_4BC0;
    case RC_ADDR(0x00004bc2u): goto L_4BC2;
    case RC_ADDR(0x00004bc6u): goto L_4BC6;
    case RC_ADDR(0x00004bc8u): goto L_4BC8;
    case RC_ADDR(0x00004bcau): goto L_4BCA;
    case RC_ADDR(0x00004bceu): goto L_4BCE;
    case RC_ADDR(0x00004bd4u): goto L_4BD4;
    case RC_ADDR(0x00004bd8u): goto L_4BD8;
    case RC_ADDR(0x00004bdeu): goto L_4BDE;
    case RC_ADDR(0x00004be2u): goto L_4BE2;
    case RC_ADDR(0x00004be6u): goto L_4BE6;
    case RC_ADDR(0x00004beau): goto L_4BEA;
    case RC_ADDR(0x00004becu): goto L_4BEC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_4AC4:
    /* 00004ac4   4  link.w A5,#ffffffee */
    c->pc = RC_ADDR(0x00004ac4u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x12u;

L_4AC8:
    /* 00004ac8   4  tst.w (ffff83c8,A4) */
    c->pc = RC_ADDR(0x00004ac8u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_set_nzvc(c, t0, RC_W);

L_4ACC:
    /* 00004acc   2  bne 00004ad6 */
    c->pc = RC_ADDR(0x00004accu);
    if (rc_cond(c, 6)) goto L_4AD6;

L_4ACE:
    /* 00004ace   6  move.w #1e,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00004aceu);
    t0 = 0x0000001eu;
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4AD4:
    /* 00004ad4   2  bra 00004adc */
    c->pc = RC_ADDR(0x00004ad4u);
    goto L_4ADC;

L_4AD6:
    /* 00004ad6   6  move.w #5,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00004ad6u);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4ADC:
    /* 00004adc   4  move.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x00004adcu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4AE0:
    /* 00004ae0   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004ae0u);
    rc_ext_l(c, 0);

L_4AE2:
    /* 00004ae2   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00004ae2u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_4AE4:
    /* 00004ae4   4  lea (ffff847c,A4),A0 */
    c->pc = RC_ADDR(0x00004ae4u);
    c->a[0] = (c->a[4] - 0x7b84u);

L_4AE8:
    /* 00004ae8   6  move.l (0,A0,D0.w),(fffffff2,A5) */
    c->pc = RC_ADDR(0x00004ae8u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4AEE:
    /* 00004aee   4  move.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x00004aeeu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4AF2:
    /* 00004af2   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004af2u);
    rc_ext_l(c, 0);

L_4AF4:
    /* 00004af4   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00004af4u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_4AF6:
    /* 00004af6   4  lea (ffff8440,A4),A0 */
    c->pc = RC_ADDR(0x00004af6u);
    c->a[0] = (c->a[4] - 0x7bc0u);

L_4AFA:
    /* 00004afa   6  move.l (0,A0,D0.w),(ffffffee,A5) */
    c->pc = RC_ADDR(0x00004afau);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4B00:
    /* 00004b00   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00004b00u);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4B04:
    /* 00004b04   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00004b04u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4B08:
    /* 00004b08   4  movea.l (ffffffee,A5),A0 */
    c->pc = RC_ADDR(0x00004b08u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x12u));
    c->a[0] = t0;

L_4B0C:
    /* 00004b0c   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00004b0cu);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_4B10:
    /* 00004b10   4  beq 00004bea */
    c->pc = RC_ADDR(0x00004b10u);
    if (rc_cond(c, 7)) goto L_4BEA;

L_4B14:
    /* 00004b14   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00004b14u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4B18:
    /* 00004b18   4  movea.l (ffffffee,A5),A0 */
    c->pc = RC_ADDR(0x00004b18u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x12u));
    c->a[0] = t0;

L_4B1C:
    /* 00004b1c   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00004b1cu);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_4B20:
    /* 00004b20   2  ext.w D1 */
    c->pc = RC_ADDR(0x00004b20u);
    rc_ext_w(c, 1);

L_4B22:
    /* 00004b22   2  subq.w #1,D1 */
    c->pc = RC_ADDR(0x00004b22u);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_4B24:
    /* 00004b24   4  move.w D1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00004b24u);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4B28:
    /* 00004b28   6  cmpi.w #27,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00004b28u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_cmp(c, RC_W, t0, 0x00000027u);

L_4B2E:
    /* 00004b2e   4  bge 00004be2 */
    c->pc = RC_ADDR(0x00004b2eu);
    if (rc_cond(c, 12)) goto L_4BE2;

L_4B32:
    /* 00004b32   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00004b32u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4B36:
    /* 00004b36   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x00004b36u);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_4B3A:
    /* 00004b3a   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00004b3au);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_4B3E:
    /* 00004b3e   4  beq 00004be2 */
    c->pc = RC_ADDR(0x00004b3eu);
    if (rc_cond(c, 7)) goto L_4BE2;

L_4B42:
    /* 00004b42   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00004b42u);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4B46:
    /* 00004b46   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00004b46u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4B4A:
    /* 00004b4a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004b4au);
    rc_ext_l(c, 0);

L_4B4C:
    /* 00004b4c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00004b4cu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_4B4E:
    /* 00004b4e   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x00004b4eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4B52:
    /* 00004b52   2  ext.l D1 */
    c->pc = RC_ADDR(0x00004b52u);
    rc_ext_l(c, 1);

L_4B54:
    /* 00004b54   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00004b54u);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_4B56:
    /* 00004b56   4  lea (fffff102,A4),A0 */
    c->pc = RC_ADDR(0x00004b56u);
    c->a[0] = (c->a[4] - 0xefeu);

L_4B5A:
    /* 00004b5a   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00004b5au);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_4B5E:
    /* 00004b5e   2  ext.w D1 */
    c->pc = RC_ADDR(0x00004b5eu);
    rc_ext_w(c, 1);

L_4B60:
    /* 00004b60   4  move.w D1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00004b60u);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4B64:
    /* 00004b64   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00004b64u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_4B68:
    /* 00004b68   2  beq 00004bd4 */
    c->pc = RC_ADDR(0x00004b68u);
    if (rc_cond(c, 7)) goto L_4BD4;

L_4B6A:
    /* 00004b6a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00004b6au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4B6E:
    /* 00004b6e   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x00004b6eu);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_4B72:
    /* 00004b72   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00004b72u);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_4B76:
    /* 00004b76   2  beq 00004bd4 */
    c->pc = RC_ADDR(0x00004b76u);
    if (rc_cond(c, 7)) goto L_4BD4;

L_4B78:
    /* 00004b78   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00004b78u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4B7C:
    /* 00004b7c   4  lea (ffff855a,A4),A0 */
    c->pc = RC_ADDR(0x00004b7cu);
    c->a[0] = (c->a[4] - 0x7aa6u);

L_4B80:
    /* 00004b80   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00004b80u);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_4B84:
    /* 00004b84   2  ext.w D1 */
    c->pc = RC_ADDR(0x00004b84u);
    rc_ext_w(c, 1);

L_4B86:
    /* 00004b86   4  sub.w D1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00004b86u);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 1, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_4B8A:
    /* 00004b8a   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00004b8au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_4B8E:
    /* 00004b8e   2  bge 00004b96 */
    c->pc = RC_ADDR(0x00004b8eu);
    if (rc_cond(c, 12)) goto L_4B96;

L_4B90:
    /* 00004b90   4  clr.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00004b90u);
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4B94:
    /* 00004b94   2  bra 00004bba */
    c->pc = RC_ADDR(0x00004b94u);
    goto L_4BBA;

L_4B96:
    /* 00004b96   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00004b96u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4B9A:
    /* 00004b9a   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x00004b9au);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_4B9E:
    /* 00004b9e   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00004b9eu);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_4BA2:
    /* 00004ba2   2  ext.w D1 */
    c->pc = RC_ADDR(0x00004ba2u);
    rc_ext_w(c, 1);

L_4BA4:
    /* 00004ba4   4  cmp.w (fffffff6,A5),D1 */
    c->pc = RC_ADDR(0x00004ba4u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_4BA8:
    /* 00004ba8   2  ble 00004bb6 */
    c->pc = RC_ADDR(0x00004ba8u);
    if (rc_cond(c, 15)) goto L_4BB6;

L_4BAA:
    /* 00004baa   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00004baau);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4BAE:
    /* 00004bae   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x00004baeu);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_4BB2:
    /* 00004bb2   4  subq.b #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00004bb2u);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_wr8(c, m, t3, t2);

L_4BB6:
    /* 00004bb6   4  addq.w #1,(fffffd82,A4) */
    c->pc = RC_ADDR(0x00004bb6u);
    t3 = (c->a[4] - 0x27eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4BBA:
    /* 00004bba   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00004bbau);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4BBE:
    /* 00004bbe   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004bbeu);
    rc_ext_l(c, 0);

L_4BC0:
    /* 00004bc0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00004bc0u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_4BC2:
    /* 00004bc2   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x00004bc2u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4BC6:
    /* 00004bc6   2  ext.l D1 */
    c->pc = RC_ADDR(0x00004bc6u);
    rc_ext_l(c, 1);

L_4BC8:
    /* 00004bc8   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00004bc8u);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_4BCA:
    /* 00004bca   4  lea (fffff102,A4),A0 */
    c->pc = RC_ADDR(0x00004bcau);
    c->a[0] = (c->a[4] - 0xefeu);

L_4BCE:
    /* 00004bce   6  move.b (fffffff9,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00004bceu);
    t0 = rc_rd8(c, m, (c->a[5] - 0x7u));
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_4BD4:
    /* 00004bd4   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00004bd4u);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4BD8:
    /* 00004bd8   6  cmpi.w #4,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00004bd8u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_4BDE:
    /* 00004bde   4  blt 00004b46 */
    c->pc = RC_ADDR(0x00004bdeu);
    if (rc_cond(c, 13)) { rc_tick(); goto L_4B46; }

L_4BE2:
    /* 00004be2   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00004be2u);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4BE6:
    /* 00004be6   4  bra 00004b04 */
    c->pc = RC_ADDR(0x00004be6u);
    rc_tick();
    goto L_4B04;

L_4BEA:
    /* 00004bea   2  unlk A5 */
    c->pc = RC_ADDR(0x00004beau);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_4BEC:
    /* 00004bec   2  rts */
    c->pc = RC_ADDR(0x00004becu);
    rc_ret(c, m);
    return;

}
