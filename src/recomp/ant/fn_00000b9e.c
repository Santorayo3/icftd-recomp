/* fn_00000b9e - 226 byte(s), 62 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00000b9e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00000b9eu): goto L_B9E;
    case RC_ADDR(0x00000ba2u): goto L_BA2;
    case RC_ADDR(0x00000ba6u): goto L_BA6;
    case RC_ADDR(0x00000baau): goto L_BAA;
    case RC_ADDR(0x00000bacu): goto L_BAC;
    case RC_ADDR(0x00000bb0u): goto L_BB0;
    case RC_ADDR(0x00000bb2u): goto L_BB2;
    case RC_ADDR(0x00000bb6u): goto L_BB6;
    case RC_ADDR(0x00000bb8u): goto L_BB8;
    case RC_ADDR(0x00000bbcu): goto L_BBC;
    case RC_ADDR(0x00000bbeu): goto L_BBE;
    case RC_ADDR(0x00000bc2u): goto L_BC2;
    case RC_ADDR(0x00000bc4u): goto L_BC4;
    case RC_ADDR(0x00000bc8u): goto L_BC8;
    case RC_ADDR(0x00000bceu): goto L_BCE;
    case RC_ADDR(0x00000bd0u): goto L_BD0;
    case RC_ADDR(0x00000bd4u): goto L_BD4;
    case RC_ADDR(0x00000bd6u): goto L_BD6;
    case RC_ADDR(0x00000bdau): goto L_BDA;
    case RC_ADDR(0x00000bdcu): goto L_BDC;
    case RC_ADDR(0x00000be0u): goto L_BE0;
    case RC_ADDR(0x00000be2u): goto L_BE2;
    case RC_ADDR(0x00000be6u): goto L_BE6;
    case RC_ADDR(0x00000becu): goto L_BEC;
    case RC_ADDR(0x00000bf0u): goto L_BF0;
    case RC_ADDR(0x00000bf6u): goto L_BF6;
    case RC_ADDR(0x00000bf8u): goto L_BF8;
    case RC_ADDR(0x00000bfcu): goto L_BFC;
    case RC_ADDR(0x00000c00u): goto L_C00;
    case RC_ADDR(0x00000c04u): goto L_C04;
    case RC_ADDR(0x00000c06u): goto L_C06;
    case RC_ADDR(0x00000c0au): goto L_C0A;
    case RC_ADDR(0x00000c0eu): goto L_C0E;
    case RC_ADDR(0x00000c12u): goto L_C12;
    case RC_ADDR(0x00000c16u): goto L_C16;
    case RC_ADDR(0x00000c1au): goto L_C1A;
    case RC_ADDR(0x00000c1eu): goto L_C1E;
    case RC_ADDR(0x00000c22u): goto L_C22;
    case RC_ADDR(0x00000c26u): goto L_C26;
    case RC_ADDR(0x00000c2au): goto L_C2A;
    case RC_ADDR(0x00000c2eu): goto L_C2E;
    case RC_ADDR(0x00000c30u): goto L_C30;
    case RC_ADDR(0x00000c34u): goto L_C34;
    case RC_ADDR(0x00000c38u): goto L_C38;
    case RC_ADDR(0x00000c3cu): goto L_C3C;
    case RC_ADDR(0x00000c40u): goto L_C40;
    case RC_ADDR(0x00000c44u): goto L_C44;
    case RC_ADDR(0x00000c48u): goto L_C48;
    case RC_ADDR(0x00000c4cu): goto L_C4C;
    case RC_ADDR(0x00000c50u): goto L_C50;
    case RC_ADDR(0x00000c54u): goto L_C54;
    case RC_ADDR(0x00000c58u): goto L_C58;
    case RC_ADDR(0x00000c5au): goto L_C5A;
    case RC_ADDR(0x00000c5eu): goto L_C5E;
    case RC_ADDR(0x00000c62u): goto L_C62;
    case RC_ADDR(0x00000c66u): goto L_C66;
    case RC_ADDR(0x00000c6au): goto L_C6A;
    case RC_ADDR(0x00000c6eu): goto L_C6E;
    case RC_ADDR(0x00000c72u): goto L_C72;
    case RC_ADDR(0x00000c76u): goto L_C76;
    case RC_ADDR(0x00000c7cu): goto L_C7C;
    case RC_ADDR(0x00000c7eu): goto L_C7E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B9E:
    /* 00000b9e   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00000b9eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_BA2:
    /* 00000ba2   4  tst.w (ffff8572,A4) */
    c->pc = RC_ADDR(0x00000ba2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7a8eu));
    rc_set_nzvc(c, t0, RC_W);

L_BA6:
    /* 00000ba6   4  bne 00000c4c */
    c->pc = RC_ADDR(0x00000ba6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_C4C;

L_BAA:
    /* 00000baa   2  bsr 00000b5c */
    c->pc = RC_ADDR(0x00000baau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000bacu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000b5cu);
    return;

L_BAC:
    /* 00000bac   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00000bacu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BB0:
    /* 00000bb0   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00000bb0u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_BB2:
    /* 00000bb2   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00000bb2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BB6:
    /* 00000bb6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00000bb6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_BB8:
    /* 00000bb8   4  lea (7f6,A4),A0 */
    c->pc = RC_ADDR(0x00000bb8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x7f6u);

L_BBC:
    /* 00000bbc   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00000bbcu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_BBE:
    /* 00000bbe   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00000bbeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BC2:
    /* 00000bc2   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00000bc2u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_BC4:
    /* 00000bc4   4  lea (7bc,A4),A1 */
    c->pc = RC_ADDR(0x00000bc4u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x7bcu);

L_BC8:
    /* 00000bc8   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00000bc8u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BCE:
    /* 00000bce   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00000bceu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_BD0:
    /* 00000bd0   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00000bd0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BD4:
    /* 00000bd4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00000bd4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_BD6:
    /* 00000bd6   4  lea (ffff8568,A4),A0 */
    c->pc = RC_ADDR(0x00000bd6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a98u);

L_BDA:
    /* 00000bda   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00000bdau);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_BDC:
    /* 00000bdc   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00000bdcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BE0:
    /* 00000be0   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00000be0u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_BE2:
    /* 00000be2   4  lea (7f6,A4),A1 */
    c->pc = RC_ADDR(0x00000be2u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x7f6u);

L_BE6:
    /* 00000be6   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00000be6u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BEC:
    /* 00000bec   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00000becu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_BF0:
    /* 00000bf0   6  cmpi.w #5,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00000bf0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_BF6:
    /* 00000bf6   2  bcs 00000bb0 */
    c->pc = RC_ADDR(0x00000bf6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_BB0; }

L_BF8:
    /* 00000bf8   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00000bf8u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_BFC:
    /* 00000bfc   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00000bfcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C00:
    /* 00000c00   4  jsr (ffff83b0,A4) */
    c->pc = RC_ADDR(0x00000c00u);
    rc_step(c, m, 18);
    /* vector 157 */
    rc_push32(c, m, RC_ADDR(0x00000c04u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002398cu);
    return;

L_C04:
    /* 00000c04   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000c04u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_C06:
    /* 00000c06   4  pea (000000c5).l */
    c->pc = RC_ADDR(0x00000c06u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000000c5u);

L_C0A:
    /* 00000c0a   4  pea (0000013d).l */
    c->pc = RC_ADDR(0x00000c0au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000013du);

L_C0E:
    /* 00000c0e   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00000c0eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_C12:
    /* 00000c12   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00000c12u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_C16:
    /* 00000c16   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00000c16u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C1A:
    /* 00000c1a   4  jsr (ffff83aa,A4) */
    c->pc = RC_ADDR(0x00000c1au);
    rc_step(c, m, 18);
    /* vector 156 */
    rc_push32(c, m, RC_ADDR(0x00000c1eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002397au);
    return;

L_C1E:
    /* 00000c1e   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00000c1eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_C22:
    /* 00000c22   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00000c22u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_C26:
    /* 00000c26   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00000c26u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C2A:
    /* 00000c2a   4  jsr (ffff83b0,A4) */
    c->pc = RC_ADDR(0x00000c2au);
    rc_step(c, m, 18);
    /* vector 157 */
    rc_push32(c, m, RC_ADDR(0x00000c2eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002398cu);
    return;

L_C2E:
    /* 00000c2e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000c2eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_C30:
    /* 00000c30   4  pea (000000c3).l */
    c->pc = RC_ADDR(0x00000c30u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000000c3u);

L_C34:
    /* 00000c34   4  pea (0000013b).l */
    c->pc = RC_ADDR(0x00000c34u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000013bu);

L_C38:
    /* 00000c38   4  pea (00000004).l */
    c->pc = RC_ADDR(0x00000c38u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000004u);

L_C3C:
    /* 00000c3c   4  pea (00000004).l */
    c->pc = RC_ADDR(0x00000c3cu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000004u);

L_C40:
    /* 00000c40   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00000c40u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C44:
    /* 00000c44   4  jsr (ffff83aa,A4) */
    c->pc = RC_ADDR(0x00000c44u);
    rc_step(c, m, 18);
    /* vector 156 */
    rc_push32(c, m, RC_ADDR(0x00000c48u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002397au);
    return;

L_C48:
    /* 00000c48   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00000c48u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_C4C:
    /* 00000c4c   4  pea (00000003).l */
    c->pc = RC_ADDR(0x00000c4cu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000003u);

L_C50:
    /* 00000c50   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00000c50u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C54:
    /* 00000c54   4  jsr (ffff83b0,A4) */
    c->pc = RC_ADDR(0x00000c54u);
    rc_step(c, m, 18);
    /* vector 157 */
    rc_push32(c, m, RC_ADDR(0x00000c58u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002398cu);
    return;

L_C58:
    /* 00000c58   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000c58u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_C5A:
    /* 00000c5a   4  pea (000000c1).l */
    c->pc = RC_ADDR(0x00000c5au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000000c1u);

L_C5E:
    /* 00000c5e   4  pea (00000139).l */
    c->pc = RC_ADDR(0x00000c5eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000139u);

L_C62:
    /* 00000c62   4  pea (00000006).l */
    c->pc = RC_ADDR(0x00000c62u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000006u);

L_C66:
    /* 00000c66   4  pea (00000006).l */
    c->pc = RC_ADDR(0x00000c66u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000006u);

L_C6A:
    /* 00000c6a   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00000c6au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C6E:
    /* 00000c6e   4  jsr (ffff83aa,A4) */
    c->pc = RC_ADDR(0x00000c6eu);
    rc_step(c, m, 18);
    /* vector 156 */
    rc_push32(c, m, RC_ADDR(0x00000c72u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002397au);
    return;

L_C72:
    /* 00000c72   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00000c72u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_C76:
    /* 00000c76   6  move.w #1,(ffff8572,A4) */
    c->pc = RC_ADDR(0x00000c76u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7a8eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C7C:
    /* 00000c7c   2  unlk A5 */
    c->pc = RC_ADDR(0x00000c7cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_C7E:
    /* 00000c7e   2  rts */
    c->pc = RC_ADDR(0x00000c7eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
