/* fn_00016bb6 - 248 byte(s), 76 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00016bb6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00016bb6u): goto L_16BB6;
    case RC_ADDR(0x00016bbau): goto L_16BBA;
    case RC_ADDR(0x00016bbeu): goto L_16BBE;
    case RC_ADDR(0x00016bc0u): goto L_16BC0;
    case RC_ADDR(0x00016bc2u): goto L_16BC2;
    case RC_ADDR(0x00016bc6u): goto L_16BC6;
    case RC_ADDR(0x00016bcau): goto L_16BCA;
    case RC_ADDR(0x00016bceu): goto L_16BCE;
    case RC_ADDR(0x00016bd2u): goto L_16BD2;
    case RC_ADDR(0x00016bd4u): goto L_16BD4;
    case RC_ADDR(0x00016bd6u): goto L_16BD6;
    case RC_ADDR(0x00016bdau): goto L_16BDA;
    case RC_ADDR(0x00016be0u): goto L_16BE0;
    case RC_ADDR(0x00016be4u): goto L_16BE4;
    case RC_ADDR(0x00016be6u): goto L_16BE6;
    case RC_ADDR(0x00016be8u): goto L_16BE8;
    case RC_ADDR(0x00016becu): goto L_16BEC;
    case RC_ADDR(0x00016bf2u): goto L_16BF2;
    case RC_ADDR(0x00016bf6u): goto L_16BF6;
    case RC_ADDR(0x00016bfau): goto L_16BFA;
    case RC_ADDR(0x00016bfeu): goto L_16BFE;
    case RC_ADDR(0x00016c00u): goto L_16C00;
    case RC_ADDR(0x00016c02u): goto L_16C02;
    case RC_ADDR(0x00016c06u): goto L_16C06;
    case RC_ADDR(0x00016c08u): goto L_16C08;
    case RC_ADDR(0x00016c0cu): goto L_16C0C;
    case RC_ADDR(0x00016c0eu): goto L_16C0E;
    case RC_ADDR(0x00016c12u): goto L_16C12;
    case RC_ADDR(0x00016c14u): goto L_16C14;
    case RC_ADDR(0x00016c16u): goto L_16C16;
    case RC_ADDR(0x00016c1au): goto L_16C1A;
    case RC_ADDR(0x00016c20u): goto L_16C20;
    case RC_ADDR(0x00016c22u): goto L_16C22;
    case RC_ADDR(0x00016c26u): goto L_16C26;
    case RC_ADDR(0x00016c28u): goto L_16C28;
    case RC_ADDR(0x00016c2au): goto L_16C2A;
    case RC_ADDR(0x00016c2eu): goto L_16C2E;
    case RC_ADDR(0x00016c34u): goto L_16C34;
    case RC_ADDR(0x00016c36u): goto L_16C36;
    case RC_ADDR(0x00016c3au): goto L_16C3A;
    case RC_ADDR(0x00016c3cu): goto L_16C3C;
    case RC_ADDR(0x00016c3eu): goto L_16C3E;
    case RC_ADDR(0x00016c42u): goto L_16C42;
    case RC_ADDR(0x00016c44u): goto L_16C44;
    case RC_ADDR(0x00016c48u): goto L_16C48;
    case RC_ADDR(0x00016c4au): goto L_16C4A;
    case RC_ADDR(0x00016c4cu): goto L_16C4C;
    case RC_ADDR(0x00016c4eu): goto L_16C4E;
    case RC_ADDR(0x00016c50u): goto L_16C50;
    case RC_ADDR(0x00016c54u): goto L_16C54;
    case RC_ADDR(0x00016c56u): goto L_16C56;
    case RC_ADDR(0x00016c5cu): goto L_16C5C;
    case RC_ADDR(0x00016c62u): goto L_16C62;
    case RC_ADDR(0x00016c64u): goto L_16C64;
    case RC_ADDR(0x00016c68u): goto L_16C68;
    case RC_ADDR(0x00016c6cu): goto L_16C6C;
    case RC_ADDR(0x00016c6eu): goto L_16C6E;
    case RC_ADDR(0x00016c70u): goto L_16C70;
    case RC_ADDR(0x00016c74u): goto L_16C74;
    case RC_ADDR(0x00016c7au): goto L_16C7A;
    case RC_ADDR(0x00016c7eu): goto L_16C7E;
    case RC_ADDR(0x00016c80u): goto L_16C80;
    case RC_ADDR(0x00016c82u): goto L_16C82;
    case RC_ADDR(0x00016c86u): goto L_16C86;
    case RC_ADDR(0x00016c8au): goto L_16C8A;
    case RC_ADDR(0x00016c8cu): goto L_16C8C;
    case RC_ADDR(0x00016c8eu): goto L_16C8E;
    case RC_ADDR(0x00016c92u): goto L_16C92;
    case RC_ADDR(0x00016c98u): goto L_16C98;
    case RC_ADDR(0x00016c9au): goto L_16C9A;
    case RC_ADDR(0x00016c9cu): goto L_16C9C;
    case RC_ADDR(0x00016ca0u): goto L_16CA0;
    case RC_ADDR(0x00016ca2u): goto L_16CA2;
    case RC_ADDR(0x00016ca4u): goto L_16CA4;
    case RC_ADDR(0x00016ca8u): goto L_16CA8;
    case RC_ADDR(0x00016cacu): goto L_16CAC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16BB6:
    /* 00016bb6   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00016bb6u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_16BBA:
    /* 00016bba   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016bbau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16BBE:
    /* 00016bbe   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016bbeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16BC0:
    /* 00016bc0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016bc0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16BC2:
    /* 00016bc2   4  lea (1c42,A4),A0 */
    c->pc = RC_ADDR(0x00016bc2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c42u);

L_16BC6:
    /* 00016bc6   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016bc6u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_16BCA:
    /* 00016bca   4  bne 00016c9c */
    c->pc = RC_ADDR(0x00016bcau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_16C9C;

L_16BCE:
    /* 00016bce   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016bceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16BD2:
    /* 00016bd2   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016bd2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16BD4:
    /* 00016bd4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016bd4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16BD6:
    /* 00016bd6   4  lea (1c42,A4),A0 */
    c->pc = RC_ADDR(0x00016bd6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c42u);

L_16BDA:
    /* 00016bda   6  move.w #2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016bdau);
    rc_step(c, m, 18);
    t0 = 0x00000002u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16BE0:
    /* 00016be0   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016be0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16BE4:
    /* 00016be4   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016be4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16BE6:
    /* 00016be6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016be6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16BE8:
    /* 00016be8   4  lea (1c36,A4),A0 */
    c->pc = RC_ADDR(0x00016be8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c36u);

L_16BEC:
    /* 00016bec   6  move.w (0,A0,D0.w),(fffffffe,A5) */
    c->pc = RC_ADDR(0x00016becu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16BF2:
    /* 00016bf2   4  move.w (a,A5),D0 */
    c->pc = RC_ADDR(0x00016bf2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16BF6:
    /* 00016bf6   4  add.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00016bf6u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_16BFA:
    /* 00016bfa   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016bfau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16BFE:
    /* 00016bfe   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016bfeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16C00:
    /* 00016c00   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016c00u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16C02:
    /* 00016c02   4  lea (1c74,A4),A0 */
    c->pc = RC_ADDR(0x00016c02u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c74u);

L_16C06:
    /* 00016c06   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x00016c06u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_16C08:
    /* 00016c08   4  move.w (a,A5),D0 */
    c->pc = RC_ADDR(0x00016c08u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16C0C:
    /* 00016c0c   2  add.w D0,(A0) */
    c->pc = RC_ADDR(0x00016c0cu);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_16C0E:
    /* 00016c0e   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016c0eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16C12:
    /* 00016c12   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016c12u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16C14:
    /* 00016c14   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016c14u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16C16:
    /* 00016c16   4  lea (1c74,A4),A0 */
    c->pc = RC_ADDR(0x00016c16u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c74u);

L_16C1A:
    /* 00016c1a   6  cmpi.w #2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016c1au);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_16C20:
    /* 00016c20   2  bgt 00016c36 */
    c->pc = RC_ADDR(0x00016c20u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_16C36;

L_16C22:
    /* 00016c22   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016c22u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16C26:
    /* 00016c26   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016c26u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16C28:
    /* 00016c28   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016c28u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16C2A:
    /* 00016c2a   4  lea (1c74,A4),A0 */
    c->pc = RC_ADDR(0x00016c2au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c74u);

L_16C2E:
    /* 00016c2e   6  cmpi.w #fffe,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016c2eu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000fffeu);

L_16C34:
    /* 00016c34   2  bge 00016c50 */
    c->pc = RC_ADDR(0x00016c34u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_16C50;

L_16C36:
    /* 00016c36   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016c36u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16C3A:
    /* 00016c3a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016c3au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16C3C:
    /* 00016c3c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016c3cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16C3E:
    /* 00016c3e   4  lea (1c74,A4),A0 */
    c->pc = RC_ADDR(0x00016c3eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c74u);

L_16C42:
    /* 00016c42   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x00016c42u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_16C44:
    /* 00016c44   4  move.w (a,A5),D0 */
    c->pc = RC_ADDR(0x00016c44u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16C48:
    /* 00016c48   2  sub.w D0,(A0) */
    c->pc = RC_ADDR(0x00016c48u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_16C4A:
    /* 00016c4a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00016c4au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_16C4C:
    /* 00016c4c   2  unlk A5 */
    c->pc = RC_ADDR(0x00016c4cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16C4E:
    /* 00016c4e   2  rts */
    c->pc = RC_ADDR(0x00016c4eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_16C50:
    /* 00016c50   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00016c50u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_16C54:
    /* 00016c54   2  bge 00016c5c */
    c->pc = RC_ADDR(0x00016c54u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_16C5C;

L_16C56:
    /* 00016c56   6  move.w #7,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00016c56u);
    rc_step(c, m, 16);
    t0 = 0x00000007u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16C5C:
    /* 00016c5c   6  cmpi.w #7,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00016c5cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_16C62:
    /* 00016c62   2  ble 00016c68 */
    c->pc = RC_ADDR(0x00016c62u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_16C68;

L_16C64:
    /* 00016c64   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00016c64u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16C68:
    /* 00016c68   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016c68u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16C6C:
    /* 00016c6c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016c6cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16C6E:
    /* 00016c6e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016c6eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16C70:
    /* 00016c70   4  lea (1c36,A4),A0 */
    c->pc = RC_ADDR(0x00016c70u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c36u);

L_16C74:
    /* 00016c74   6  move.w (fffffffe,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016c74u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16C7A:
    /* 00016c7a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00016c7au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16C7E:
    /* 00016c7e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016c7eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16C80:
    /* 00016c80   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016c80u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16C82:
    /* 00016c82   4  lea (ffffb43a,A4),A0 */
    c->pc = RC_ADDR(0x00016c82u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4bc6u);

L_16C86:
    /* 00016c86   4  move.w (8,A5),D1 */
    c->pc = RC_ADDR(0x00016c86u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16C8A:
    /* 00016c8a   2  ext.l D1 */
    c->pc = RC_ADDR(0x00016c8au);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_16C8C:
    /* 00016c8c   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00016c8cu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_16C8E:
    /* 00016c8e   4  lea (1c2e,A4),A1 */
    c->pc = RC_ADDR(0x00016c8eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1c2eu);

L_16C92:
    /* 00016c92   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00016c92u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16C98:
    /* 00016c98   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00016c98u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_16C9A:
    /* 00016c9a   2  bra 00016c4c */
    c->pc = RC_ADDR(0x00016c9au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_16C4C;

L_16C9C:
    /* 00016c9c   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016c9cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16CA0:
    /* 00016ca0   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016ca0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16CA2:
    /* 00016ca2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016ca2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16CA4:
    /* 00016ca4   4  lea (1c42,A4),A0 */
    c->pc = RC_ADDR(0x00016ca4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c42u);

L_16CA8:
    /* 00016ca8   4  subq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016ca8u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16CAC:
    /* 00016cac   2  bra 00016c4c */
    c->pc = RC_ADDR(0x00016cacu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_16C4C;

}
