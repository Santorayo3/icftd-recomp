/* fn_00010c60 - 176 byte(s), 52 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00010c60(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00010c60u): goto L_10C60;
    case RC_ADDR(0x00010c62u): goto L_10C62;
    case RC_ADDR(0x00010c64u): goto L_10C64;
    case RC_ADDR(0x00010c68u): goto L_10C68;
    case RC_ADDR(0x00010c6cu): goto L_10C6C;
    case RC_ADDR(0x00010c70u): goto L_10C70;
    case RC_ADDR(0x00010c72u): goto L_10C72;
    case RC_ADDR(0x00010c78u): goto L_10C78;
    case RC_ADDR(0x00010c7au): goto L_10C7A;
    case RC_ADDR(0x00010c7eu): goto L_10C7E;
    case RC_ADDR(0x00010c80u): goto L_10C80;
    case RC_ADDR(0x00010c82u): goto L_10C82;
    case RC_ADDR(0x00010c86u): goto L_10C86;
    case RC_ADDR(0x00010c8au): goto L_10C8A;
    case RC_ADDR(0x00010c8eu): goto L_10C8E;
    case RC_ADDR(0x00010c92u): goto L_10C92;
    case RC_ADDR(0x00010c94u): goto L_10C94;
    case RC_ADDR(0x00010c96u): goto L_10C96;
    case RC_ADDR(0x00010c98u): goto L_10C98;
    case RC_ADDR(0x00010c9au): goto L_10C9A;
    case RC_ADDR(0x00010ca0u): goto L_10CA0;
    case RC_ADDR(0x00010ca2u): goto L_10CA2;
    case RC_ADDR(0x00010ca4u): goto L_10CA4;
    case RC_ADDR(0x00010caau): goto L_10CAA;
    case RC_ADDR(0x00010cacu): goto L_10CAC;
    case RC_ADDR(0x00010cb0u): goto L_10CB0;
    case RC_ADDR(0x00010cb4u): goto L_10CB4;
    case RC_ADDR(0x00010cb8u): goto L_10CB8;
    case RC_ADDR(0x00010cbau): goto L_10CBA;
    case RC_ADDR(0x00010cbeu): goto L_10CBE;
    case RC_ADDR(0x00010cc0u): goto L_10CC0;
    case RC_ADDR(0x00010cc6u): goto L_10CC6;
    case RC_ADDR(0x00010ccau): goto L_10CCA;
    case RC_ADDR(0x00010cccu): goto L_10CCC;
    case RC_ADDR(0x00010cd0u): goto L_10CD0;
    case RC_ADDR(0x00010cd6u): goto L_10CD6;
    case RC_ADDR(0x00010cdcu): goto L_10CDC;
    case RC_ADDR(0x00010cdeu): goto L_10CDE;
    case RC_ADDR(0x00010ce2u): goto L_10CE2;
    case RC_ADDR(0x00010ce6u): goto L_10CE6;
    case RC_ADDR(0x00010ceau): goto L_10CEA;
    case RC_ADDR(0x00010ceeu): goto L_10CEE;
    case RC_ADDR(0x00010cf2u): goto L_10CF2;
    case RC_ADDR(0x00010cf4u): goto L_10CF4;
    case RC_ADDR(0x00010cf6u): goto L_10CF6;
    case RC_ADDR(0x00010cf8u): goto L_10CF8;
    case RC_ADDR(0x00010cfcu): goto L_10CFC;
    case RC_ADDR(0x00010d00u): goto L_10D00;
    case RC_ADDR(0x00010d02u): goto L_10D02;
    case RC_ADDR(0x00010d06u): goto L_10D06;
    case RC_ADDR(0x00010d08u): goto L_10D08;
    case RC_ADDR(0x00010d0eu): goto L_10D0E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10C60:
    /* 00010c60   2  clr.w D6 */
    c->pc = RC_ADDR(0x00010c60u);
    rc_step(c, m, 4);
    rc_d_set(c, 6, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10C62:
    /* 00010c62   2  clr.l D7 */
    c->pc = RC_ADDR(0x00010c62u);
    rc_step(c, m, 6);
    rc_d_set(c, 7, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_10C64:
    /* 00010c64   4  movea.l (6,A6),A0 */
    c->pc = RC_ADDR(0x00010c64u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[6] + 0x6u));
    c->a[0] = t0;

L_10C68:
    /* 00010c68   4  lea (3e,A6),A1 */
    c->pc = RC_ADDR(0x00010c68u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[6] + 0x3eu);

L_10C6C:
    /* 00010c6c   4  tst.b (0,A1) */
    c->pc = RC_ADDR(0x00010c6cu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[1] + 0x0u));
    rc_set_nzvc(c, t0, RC_B);

L_10C70:
    /* 00010c70   2  bne 00010c7a */
    c->pc = RC_ADDR(0x00010c70u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_10C7A;

L_10C72:
    /* 00010c72   6  cmpi.b #0,(1,A1) */
    c->pc = RC_ADDR(0x00010c72u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u));
    rc_cmp(c, RC_B, t0, 0x00000000u);

L_10C78:
    /* 00010c78   2  beq 00010c98 */
    c->pc = RC_ADDR(0x00010c78u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10C98;

L_10C7A:
    /* 00010c7a   4  move.l (4,A1),D0 */
    c->pc = RC_ADDR(0x00010c7au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10C7E:
    /* 00010c7e   2  beq 00010cac */
    c->pc = RC_ADDR(0x00010c7eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10CAC;

L_10C80:
    /* 00010c80   2  movea.l D0,A4 */
    c->pc = RC_ADDR(0x00010c80u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[4] = t0;

L_10C82:
    /* 00010c82   4  movea.l (0,A4),A4 */
    c->pc = RC_ADDR(0x00010c82u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x0u));
    c->a[4] = t0;

L_10C86:
    /* 00010c86   4  movem.l { D1 D6 D7 A0 A1 },-(SP) */
    c->pc = RC_ADDR(0x00010c86u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    c->a[7] = t3;

L_10C8A:
    /* 00010c8a   4  jsr (0,A4) */
    c->pc = RC_ADDR(0x00010c8au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00010c8eu));
    rc_depth++;
    t3 = (c->a[4] + 0x0u);
    c->pc = t3;
    return;

L_10C8E:
    /* 00010c8e   4  movem.l (SP)+,{ D6 D7 A0 A1 A6 } */
    c->pc = RC_ADDR(0x00010c8eu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_10C92:
    /* 00010c92   2  tst.l D0 */
    c->pc = RC_ADDR(0x00010c92u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_10C94:
    /* 00010c94   2  beq 00010c98 */
    c->pc = RC_ADDR(0x00010c94u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10C98;

L_10C96:
    /* 00010c96   2  bset D7,D6 */
    c->pc = RC_ADDR(0x00010c96u);
    rc_step(c, m, 8);
    t4 = c->d[7] & 31u;
    t0 = rc_d_get(c, 6, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 6, RC_L, t2);

L_10C98:
    /* 00010c98   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00010c98u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10C9A:
    /* 00010c9a   6  cmpi.b #1,(0,A1) */
    c->pc = RC_ADDR(0x00010c9au);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[1] + 0x0u));
    rc_cmp(c, RC_B, t0, 0x00000001u);

L_10CA0:
    /* 00010ca0   2  beq 00010cac */
    c->pc = RC_ADDR(0x00010ca0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10CAC;

L_10CA2:
    /* 00010ca2   2  moveq #2,D0 */
    c->pc = RC_ADDR(0x00010ca2u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000002u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10CA4:
    /* 00010ca4   6  cmpi.b #2,(0,A1) */
    c->pc = RC_ADDR(0x00010ca4u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[1] + 0x0u));
    rc_cmp(c, RC_B, t0, 0x00000002u);

L_10CAA:
    /* 00010caa   2  bne 00010cb0 */
    c->pc = RC_ADDR(0x00010caau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_10CB0;

L_10CAC:
    /* 00010cac   4  move.b D0,(1,A1) */
    c->pc = RC_ADDR(0x00010cacu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_B);
    rc_wr8(c, m, (c->a[1] + 0x1u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_10CB0:
    /* 00010cb0   4  clr.b (0,A1) */
    c->pc = RC_ADDR(0x00010cb0u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[1] + 0x0u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_10CB4:
    /* 00010cb4   4  adda.w #16,A1 */
    c->pc = RC_ADDR(0x00010cb4u);
    rc_step(c, m, 14);
    t0 = 0x00000016u;
    c->a[1] += rc_ext(t0, RC_W);

L_10CB8:
    /* 00010cb8   2  addq.w #1,D7 */
    c->pc = RC_ADDR(0x00010cb8u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_10CBA:
    /* 00010cba   4  cmpi.w #4,D7 */
    c->pc = RC_ADDR(0x00010cbau);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_10CBE:
    /* 00010cbe   2  bne 00010c6c */
    c->pc = RC_ADDR(0x00010cbeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_10C6C; }

L_10CC0:
    /* 00010cc0   6  move.w D6,(00dff096).l */
    c->pc = RC_ADDR(0x00010cc0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 6, RC_W);
    rc_wr16(c, m, 0x00dff096u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10CC6:
    /* 00010cc6   4  move.w #8000,D6 */
    c->pc = RC_ADDR(0x00010cc6u);
    rc_step(c, m, 8);
    t0 = 0x00008000u;
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10CCA:
    /* 00010cca   2  clr.l D7 */
    c->pc = RC_ADDR(0x00010ccau);
    rc_step(c, m, 6);
    rc_d_set(c, 7, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_10CCC:
    /* 00010ccc   4  lea (3e,A6),A1 */
    c->pc = RC_ADDR(0x00010cccu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[6] + 0x3eu);

L_10CD0:
    /* 00010cd0   6  lea (00dff0a0).l,A2 */
    c->pc = RC_ADDR(0x00010cd0u);
    rc_step(c, m, 12);
    c->a[2] = 0x00dff0a0u;

L_10CD6:
    /* 00010cd6   6  cmpi.b #0,(1,A1) */
    c->pc = RC_ADDR(0x00010cd6u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u));
    rc_cmp(c, RC_B, t0, 0x00000000u);

L_10CDC:
    /* 00010cdc   2  beq 00010cf8 */
    c->pc = RC_ADDR(0x00010cdcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10CF8;

L_10CDE:
    /* 00010cde   4  movea.l (4,A1),A4 */
    c->pc = RC_ADDR(0x00010cdeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0x4u));
    c->a[4] = t0;

L_10CE2:
    /* 00010ce2   4  movea.l (0,A4),A4 */
    c->pc = RC_ADDR(0x00010ce2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x0u));
    c->a[4] = t0;

L_10CE6:
    /* 00010ce6   4  movem.l { D1 D5 D6 D7 A0 A1 },-(SP) */
    c->pc = RC_ADDR(0x00010ce6u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    c->a[7] = t3;

L_10CEA:
    /* 00010cea   4  jsr (4,A4) */
    c->pc = RC_ADDR(0x00010ceau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00010ceeu));
    rc_depth++;
    t3 = (c->a[4] + 0x4u);
    c->pc = t3;
    return;

L_10CEE:
    /* 00010cee   4  movem.l (SP)+,{ D6 D7 A0 A1 A2 A6 } */
    c->pc = RC_ADDR(0x00010ceeu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_10CF2:
    /* 00010cf2   2  tst.l D0 */
    c->pc = RC_ADDR(0x00010cf2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_10CF4:
    /* 00010cf4   2  beq 00010cf8 */
    c->pc = RC_ADDR(0x00010cf4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10CF8;

L_10CF6:
    /* 00010cf6   2  bset D7,D6 */
    c->pc = RC_ADDR(0x00010cf6u);
    rc_step(c, m, 8);
    t4 = c->d[7] & 31u;
    t0 = rc_d_get(c, 6, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 6, RC_L, t2);

L_10CF8:
    /* 00010cf8   4  adda.w #10,A2 */
    c->pc = RC_ADDR(0x00010cf8u);
    rc_step(c, m, 14);
    t0 = 0x00000010u;
    c->a[2] += rc_ext(t0, RC_W);

L_10CFC:
    /* 00010cfc   4  adda.w #16,A1 */
    c->pc = RC_ADDR(0x00010cfcu);
    rc_step(c, m, 14);
    t0 = 0x00000016u;
    c->a[1] += rc_ext(t0, RC_W);

L_10D00:
    /* 00010d00   2  addq.w #1,D7 */
    c->pc = RC_ADDR(0x00010d00u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_10D02:
    /* 00010d02   4  cmpi.w #4,D7 */
    c->pc = RC_ADDR(0x00010d02u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_10D06:
    /* 00010d06   2  bne 00010cd6 */
    c->pc = RC_ADDR(0x00010d06u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_10CD6; }

L_10D08:
    /* 00010d08   6  move.w D6,(00dff096).l */
    c->pc = RC_ADDR(0x00010d08u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 6, RC_W);
    rc_wr16(c, m, 0x00dff096u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10D0E:
    /* 00010d0e   2  rts */
    c->pc = RC_ADDR(0x00010d0eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
