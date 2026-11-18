/* fn_00004b34 - 280 byte(s), 75 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00004b34(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00004b34u): goto L_4B34;
    case RC_ADDR(0x00004b38u): goto L_4B38;
    case RC_ADDR(0x00004b3cu): goto L_4B3C;
    case RC_ADDR(0x00004b40u): goto L_4B40;
    case RC_ADDR(0x00004b46u): goto L_4B46;
    case RC_ADDR(0x00004b4au): goto L_4B4A;
    case RC_ADDR(0x00004b50u): goto L_4B50;
    case RC_ADDR(0x00004b56u): goto L_4B56;
    case RC_ADDR(0x00004b5eu): goto L_4B5E;
    case RC_ADDR(0x00004b62u): goto L_4B62;
    case RC_ADDR(0x00004b66u): goto L_4B66;
    case RC_ADDR(0x00004b6au): goto L_4B6A;
    case RC_ADDR(0x00004b6eu): goto L_4B6E;
    case RC_ADDR(0x00004b70u): goto L_4B70;
    case RC_ADDR(0x00004b74u): goto L_4B74;
    case RC_ADDR(0x00004b78u): goto L_4B78;
    case RC_ADDR(0x00004b7au): goto L_4B7A;
    case RC_ADDR(0x00004b7cu): goto L_4B7C;
    case RC_ADDR(0x00004b80u): goto L_4B80;
    case RC_ADDR(0x00004b84u): goto L_4B84;
    case RC_ADDR(0x00004b88u): goto L_4B88;
    case RC_ADDR(0x00004b8au): goto L_4B8A;
    case RC_ADDR(0x00004b8eu): goto L_4B8E;
    case RC_ADDR(0x00004b90u): goto L_4B90;
    case RC_ADDR(0x00004b92u): goto L_4B92;
    case RC_ADDR(0x00004b96u): goto L_4B96;
    case RC_ADDR(0x00004b9au): goto L_4B9A;
    case RC_ADDR(0x00004b9eu): goto L_4B9E;
    case RC_ADDR(0x00004ba0u): goto L_4BA0;
    case RC_ADDR(0x00004ba2u): goto L_4BA2;
    case RC_ADDR(0x00004ba6u): goto L_4BA6;
    case RC_ADDR(0x00004baau): goto L_4BAA;
    case RC_ADDR(0x00004baeu): goto L_4BAE;
    case RC_ADDR(0x00004bb0u): goto L_4BB0;
    case RC_ADDR(0x00004bb4u): goto L_4BB4;
    case RC_ADDR(0x00004bbau): goto L_4BBA;
    case RC_ADDR(0x00004bbcu): goto L_4BBC;
    case RC_ADDR(0x00004bc0u): goto L_4BC0;
    case RC_ADDR(0x00004bc4u): goto L_4BC4;
    case RC_ADDR(0x00004bc6u): goto L_4BC6;
    case RC_ADDR(0x00004bcau): goto L_4BCA;
    case RC_ADDR(0x00004bceu): goto L_4BCE;
    case RC_ADDR(0x00004bd2u): goto L_4BD2;
    case RC_ADDR(0x00004bd4u): goto L_4BD4;
    case RC_ADDR(0x00004bd8u): goto L_4BD8;
    case RC_ADDR(0x00004bdcu): goto L_4BDC;
    case RC_ADDR(0x00004bdeu): goto L_4BDE;
    case RC_ADDR(0x00004be2u): goto L_4BE2;
    case RC_ADDR(0x00004be6u): goto L_4BE6;
    case RC_ADDR(0x00004beau): goto L_4BEA;
    case RC_ADDR(0x00004becu): goto L_4BEC;
    case RC_ADDR(0x00004bf0u): goto L_4BF0;
    case RC_ADDR(0x00004bf4u): goto L_4BF4;
    case RC_ADDR(0x00004bf8u): goto L_4BF8;
    case RC_ADDR(0x00004bfau): goto L_4BFA;
    case RC_ADDR(0x00004bfcu): goto L_4BFC;
    case RC_ADDR(0x00004c00u): goto L_4C00;
    case RC_ADDR(0x00004c04u): goto L_4C04;
    case RC_ADDR(0x00004c08u): goto L_4C08;
    case RC_ADDR(0x00004c0au): goto L_4C0A;
    case RC_ADDR(0x00004c0eu): goto L_4C0E;
    case RC_ADDR(0x00004c14u): goto L_4C14;
    case RC_ADDR(0x00004c16u): goto L_4C16;
    case RC_ADDR(0x00004c1au): goto L_4C1A;
    case RC_ADDR(0x00004c1eu): goto L_4C1E;
    case RC_ADDR(0x00004c20u): goto L_4C20;
    case RC_ADDR(0x00004c24u): goto L_4C24;
    case RC_ADDR(0x00004c28u): goto L_4C28;
    case RC_ADDR(0x00004c2au): goto L_4C2A;
    case RC_ADDR(0x00004c32u): goto L_4C32;
    case RC_ADDR(0x00004c38u): goto L_4C38;
    case RC_ADDR(0x00004c3eu): goto L_4C3E;
    case RC_ADDR(0x00004c42u): goto L_4C42;
    case RC_ADDR(0x00004c48u): goto L_4C48;
    case RC_ADDR(0x00004c4au): goto L_4C4A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_4B34:
    /* 00004b34   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00004b34u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_4B38:
    /* 00004b38   4  jsr (ffff812e,A4) */
    c->pc = RC_ADDR(0x00004b38u);
    rc_step(c, m, 18);
    /* vector 50 */
    rc_push32(c, m, RC_ADDR(0x00004b3cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c24u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000104f6u);
    return;

L_4B3C:
    /* 00004b3c   4  jsr (00004a9c) */
    c->pc = RC_ADDR(0x00004b3cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00004b40u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004a9cu);
    return;

L_4B40:
    /* 00004b40   6  move.w #1,(fffff96e,A4) */
    c->pc = RC_ADDR(0x00004b40u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x692u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4B46:
    /* 00004b46   4  clr.w (ffffd2a4,A4) */
    c->pc = RC_ADDR(0x00004b46u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2d5cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4B4A:
    /* 00004b4a   6  subi.w #14,(fffff79a,A4) */
    c->pc = RC_ADDR(0x00004b4au);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x866u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000014u;
    rc_flags_sub(c, RC_W, t1, 0x00000014u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4B50:
    /* 00004b50   6  subi.w #14,(fffff79c,A4) */
    c->pc = RC_ADDR(0x00004b50u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x864u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000014u;
    rc_flags_sub(c, RC_W, t1, 0x00000014u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4B56:
    /* 00004b56   8  subi.l #14,(fffff7ae,A4) */
    c->pc = RC_ADDR(0x00004b56u);
    rc_step(c, m, 32);
    t3 = (c->a[4] - 0x852u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - 0x00000014u;
    rc_flags_sub(c, RC_L, t1, 0x00000014u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_4B5E:
    /* 00004b5e   4  clr.w (9c8,A4) */
    c->pc = RC_ADDR(0x00004b5eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x9c8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4B62:
    /* 00004b62   4  clr.w (fffff978,A4) */
    c->pc = RC_ADDR(0x00004b62u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x688u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4B66:
    /* 00004b66   4  pea (00004c4c) */
    c->pc = RC_ADDR(0x00004b66u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00004c4cu));

L_4B6A:
    /* 00004b6a   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x00004b6au);
    rc_step(c, m, 18);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x00004b6eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023da4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022366u);
    return;

L_4B6E:
    /* 00004b6e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004b6eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4B70:
    /* 00004b70   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00004b70u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4B74:
    /* 00004b74   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00004b74u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4B78:
    /* 00004b78   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004b78u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4B7A:
    /* 00004b7a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00004b7au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_4B7C:
    /* 00004b7c   4  lea (ffff85cc,A4),A0 */
    c->pc = RC_ADDR(0x00004b7cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a34u);

L_4B80:
    /* 00004b80   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00004b80u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4B84:
    /* 00004b84   4  jsr (ffff821e,A4) */
    c->pc = RC_ADDR(0x00004b84u);
    rc_step(c, m, 18);
    /* vector 90 */
    rc_push32(c, m, RC_ADDR(0x00004b88u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d14u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f4fcu);
    return;

L_4B88:
    /* 00004b88   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004b88u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4B8A:
    /* 00004b8a   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00004b8au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4B8E:
    /* 00004b8e   2  ext.l D1 */
    c->pc = RC_ADDR(0x00004b8eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_4B90:
    /* 00004b90   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00004b90u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_4B92:
    /* 00004b92   4  lea (9ca,A4),A0 */
    c->pc = RC_ADDR(0x00004b92u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x9cau);

L_4B96:
    /* 00004b96   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00004b96u);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4B9A:
    /* 00004b9a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00004b9au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4B9E:
    /* 00004b9e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004b9eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4BA0:
    /* 00004ba0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00004ba0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_4BA2:
    /* 00004ba2   4  lea (9ca,A4),A0 */
    c->pc = RC_ADDR(0x00004ba2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x9cau);

L_4BA6:
    /* 00004ba6   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00004ba6u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4BAA:
    /* 00004baa   4  jsr (ffff8230,A4) */
    c->pc = RC_ADDR(0x00004baau);
    rc_step(c, m, 18);
    /* vector 93 */
    rc_push32(c, m, RC_ADDR(0x00004baeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d26u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f6ccu);
    return;

L_4BAE:
    /* 00004bae   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004baeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4BB0:
    /* 00004bb0   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00004bb0u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4BB4:
    /* 00004bb4   6  cmpi.w #4,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00004bb4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_4BBA:
    /* 00004bba   2  blt 00004b74 */
    c->pc = RC_ADDR(0x00004bbau);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_4B74; }

L_4BBC:
    /* 00004bbc   4  pea (00004c55) */
    c->pc = RC_ADDR(0x00004bbcu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00004c55u));

L_4BC0:
    /* 00004bc0   4  jsr (ffff821e,A4) */
    c->pc = RC_ADDR(0x00004bc0u);
    rc_step(c, m, 18);
    /* vector 90 */
    rc_push32(c, m, RC_ADDR(0x00004bc4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d14u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f4fcu);
    return;

L_4BC4:
    /* 00004bc4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004bc4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4BC6:
    /* 00004bc6   4  move.l D0,(9da,A4) */
    c->pc = RC_ADDR(0x00004bc6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x9dau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4BCA:
    /* 00004bca   4  move.l (9da,A4),-(A7) */
    c->pc = RC_ADDR(0x00004bcau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x9dau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4BCE:
    /* 00004bce   4  jsr (ffff8230,A4) */
    c->pc = RC_ADDR(0x00004bceu);
    rc_step(c, m, 18);
    /* vector 93 */
    rc_push32(c, m, RC_ADDR(0x00004bd2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d26u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f6ccu);
    return;

L_4BD2:
    /* 00004bd2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004bd2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4BD4:
    /* 00004bd4   4  pea (00004c5a) */
    c->pc = RC_ADDR(0x00004bd4u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00004c5au));

L_4BD8:
    /* 00004bd8   4  jsr (ffff821e,A4) */
    c->pc = RC_ADDR(0x00004bd8u);
    rc_step(c, m, 18);
    /* vector 90 */
    rc_push32(c, m, RC_ADDR(0x00004bdcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d14u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f4fcu);
    return;

L_4BDC:
    /* 00004bdc   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004bdcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4BDE:
    /* 00004bde   4  move.l D0,(9de,A4) */
    c->pc = RC_ADDR(0x00004bdeu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x9deu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4BE2:
    /* 00004be2   4  move.l (9de,A4),-(A7) */
    c->pc = RC_ADDR(0x00004be2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x9deu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4BE6:
    /* 00004be6   4  jsr (ffff8230,A4) */
    c->pc = RC_ADDR(0x00004be6u);
    rc_step(c, m, 18);
    /* vector 93 */
    rc_push32(c, m, RC_ADDR(0x00004beau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d26u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f6ccu);
    return;

L_4BEA:
    /* 00004bea   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004beau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4BEC:
    /* 00004bec   4  jsr (00004952) */
    c->pc = RC_ADDR(0x00004becu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00004bf0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004952u);
    return;

L_4BF0:
    /* 00004bf0   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00004bf0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4BF4:
    /* 00004bf4   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00004bf4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4BF8:
    /* 00004bf8   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004bf8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4BFA:
    /* 00004bfa   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00004bfau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_4BFC:
    /* 00004bfc   4  lea (9ca,A4),A0 */
    c->pc = RC_ADDR(0x00004bfcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x9cau);

L_4C00:
    /* 00004c00   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00004c00u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4C04:
    /* 00004c04   4  jsr (ffff8236,A4) */
    c->pc = RC_ADDR(0x00004c04u);
    rc_step(c, m, 18);
    /* vector 94 */
    rc_push32(c, m, RC_ADDR(0x00004c08u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d2cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f7bcu);
    return;

L_4C08:
    /* 00004c08   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004c08u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4C0A:
    /* 00004c0a   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00004c0au);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4C0E:
    /* 00004c0e   6  cmpi.w #4,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00004c0eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_4C14:
    /* 00004c14   2  blt 00004bf4 */
    c->pc = RC_ADDR(0x00004c14u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_4BF4; }

L_4C16:
    /* 00004c16   4  move.l (9da,A4),-(A7) */
    c->pc = RC_ADDR(0x00004c16u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x9dau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4C1A:
    /* 00004c1a   4  jsr (ffff8236,A4) */
    c->pc = RC_ADDR(0x00004c1au);
    rc_step(c, m, 18);
    /* vector 94 */
    rc_push32(c, m, RC_ADDR(0x00004c1eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d2cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f7bcu);
    return;

L_4C1E:
    /* 00004c1e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004c1eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4C20:
    /* 00004c20   4  move.l (9de,A4),-(A7) */
    c->pc = RC_ADDR(0x00004c20u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x9deu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4C24:
    /* 00004c24   4  jsr (ffff8236,A4) */
    c->pc = RC_ADDR(0x00004c24u);
    rc_step(c, m, 18);
    /* vector 94 */
    rc_push32(c, m, RC_ADDR(0x00004c28u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d2cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f7bcu);
    return;

L_4C28:
    /* 00004c28   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004c28u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4C2A:
    /* 00004c2a   8  addi.l #14,(fffff7ae,A4) */
    c->pc = RC_ADDR(0x00004c2au);
    rc_step(c, m, 32);
    t3 = (c->a[4] - 0x852u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000014u;
    rc_flags_add(c, RC_L, t1, 0x00000014u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_4C32:
    /* 00004c32   6  addi.w #14,(fffff79a,A4) */
    c->pc = RC_ADDR(0x00004c32u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x866u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000014u;
    rc_flags_add(c, RC_W, t1, 0x00000014u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4C38:
    /* 00004c38   6  addi.w #14,(fffff79c,A4) */
    c->pc = RC_ADDR(0x00004c38u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x864u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000014u;
    rc_flags_add(c, RC_W, t1, 0x00000014u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4C3E:
    /* 00004c3e   4  clr.w (fffff96e,A4) */
    c->pc = RC_ADDR(0x00004c3eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x692u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4C42:
    /* 00004c42   6  move.w #1,(ffffd2a4,A4) */
    c->pc = RC_ADDR(0x00004c42u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x2d5cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4C48:
    /* 00004c48   2  unlk A5 */
    c->pc = RC_ADDR(0x00004c48u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_4C4A:
    /* 00004c4a   2  rts */
    c->pc = RC_ADDR(0x00004c4au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
