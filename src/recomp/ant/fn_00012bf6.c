/* fn_00012bf6 - 370 byte(s), 109 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00012bf6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00012bf6u): goto L_12BF6;
    case RC_ADDR(0x00012bfau): goto L_12BFA;
    case RC_ADDR(0x00012bfcu): goto L_12BFC;
    case RC_ADDR(0x00012bfeu): goto L_12BFE;
    case RC_ADDR(0x00012c00u): goto L_12C00;
    case RC_ADDR(0x00012c04u): goto L_12C04;
    case RC_ADDR(0x00012c06u): goto L_12C06;
    case RC_ADDR(0x00012c0au): goto L_12C0A;
    case RC_ADDR(0x00012c0eu): goto L_12C0E;
    case RC_ADDR(0x00012c12u): goto L_12C12;
    case RC_ADDR(0x00012c16u): goto L_12C16;
    case RC_ADDR(0x00012c1au): goto L_12C1A;
    case RC_ADDR(0x00012c1eu): goto L_12C1E;
    case RC_ADDR(0x00012c22u): goto L_12C22;
    case RC_ADDR(0x00012c24u): goto L_12C24;
    case RC_ADDR(0x00012c28u): goto L_12C28;
    case RC_ADDR(0x00012c2au): goto L_12C2A;
    case RC_ADDR(0x00012c2cu): goto L_12C2C;
    case RC_ADDR(0x00012c30u): goto L_12C30;
    case RC_ADDR(0x00012c32u): goto L_12C32;
    case RC_ADDR(0x00012c34u): goto L_12C34;
    case RC_ADDR(0x00012c36u): goto L_12C36;
    case RC_ADDR(0x00012c38u): goto L_12C38;
    case RC_ADDR(0x00012c3au): goto L_12C3A;
    case RC_ADDR(0x00012c3eu): goto L_12C3E;
    case RC_ADDR(0x00012c42u): goto L_12C42;
    case RC_ADDR(0x00012c44u): goto L_12C44;
    case RC_ADDR(0x00012c46u): goto L_12C46;
    case RC_ADDR(0x00012c48u): goto L_12C48;
    case RC_ADDR(0x00012c4au): goto L_12C4A;
    case RC_ADDR(0x00012c4cu): goto L_12C4C;
    case RC_ADDR(0x00012c4eu): goto L_12C4E;
    case RC_ADDR(0x00012c52u): goto L_12C52;
    case RC_ADDR(0x00012c54u): goto L_12C54;
    case RC_ADDR(0x00012c56u): goto L_12C56;
    case RC_ADDR(0x00012c58u): goto L_12C58;
    case RC_ADDR(0x00012c5eu): goto L_12C5E;
    case RC_ADDR(0x00012c64u): goto L_12C64;
    case RC_ADDR(0x00012c68u): goto L_12C68;
    case RC_ADDR(0x00012c6au): goto L_12C6A;
    case RC_ADDR(0x00012c6eu): goto L_12C6E;
    case RC_ADDR(0x00012c70u): goto L_12C70;
    case RC_ADDR(0x00012c72u): goto L_12C72;
    case RC_ADDR(0x00012c78u): goto L_12C78;
    case RC_ADDR(0x00012c7cu): goto L_12C7C;
    case RC_ADDR(0x00012c7eu): goto L_12C7E;
    case RC_ADDR(0x00012c82u): goto L_12C82;
    case RC_ADDR(0x00012c86u): goto L_12C86;
    case RC_ADDR(0x00012c88u): goto L_12C88;
    case RC_ADDR(0x00012c8au): goto L_12C8A;
    case RC_ADDR(0x00012c8cu): goto L_12C8C;
    case RC_ADDR(0x00012c90u): goto L_12C90;
    case RC_ADDR(0x00012c92u): goto L_12C92;
    case RC_ADDR(0x00012c94u): goto L_12C94;
    case RC_ADDR(0x00012c98u): goto L_12C98;
    case RC_ADDR(0x00012c9au): goto L_12C9A;
    case RC_ADDR(0x00012c9cu): goto L_12C9C;
    case RC_ADDR(0x00012ca2u): goto L_12CA2;
    case RC_ADDR(0x00012ca8u): goto L_12CA8;
    case RC_ADDR(0x00012caau): goto L_12CAA;
    case RC_ADDR(0x00012cacu): goto L_12CAC;
    case RC_ADDR(0x00012cb4u): goto L_12CB4;
    case RC_ADDR(0x00012cbcu): goto L_12CBC;
    case RC_ADDR(0x00012cbeu): goto L_12CBE;
    case RC_ADDR(0x00012cc2u): goto L_12CC2;
    case RC_ADDR(0x00012cc4u): goto L_12CC4;
    case RC_ADDR(0x00012ccau): goto L_12CCA;
    case RC_ADDR(0x00012cd0u): goto L_12CD0;
    case RC_ADDR(0x00012cd4u): goto L_12CD4;
    case RC_ADDR(0x00012cd6u): goto L_12CD6;
    case RC_ADDR(0x00012cd8u): goto L_12CD8;
    case RC_ADDR(0x00012cdau): goto L_12CDA;
    case RC_ADDR(0x00012cdcu): goto L_12CDC;
    case RC_ADDR(0x00012ce0u): goto L_12CE0;
    case RC_ADDR(0x00012ce2u): goto L_12CE2;
    case RC_ADDR(0x00012ce6u): goto L_12CE6;
    case RC_ADDR(0x00012ce8u): goto L_12CE8;
    case RC_ADDR(0x00012cecu): goto L_12CEC;
    case RC_ADDR(0x00012ceeu): goto L_12CEE;
    case RC_ADDR(0x00012cf0u): goto L_12CF0;
    case RC_ADDR(0x00012cf2u): goto L_12CF2;
    case RC_ADDR(0x00012cf6u): goto L_12CF6;
    case RC_ADDR(0x00012cfau): goto L_12CFA;
    case RC_ADDR(0x00012cfcu): goto L_12CFC;
    case RC_ADDR(0x00012cfeu): goto L_12CFE;
    case RC_ADDR(0x00012d06u): goto L_12D06;
    case RC_ADDR(0x00012d0eu): goto L_12D0E;
    case RC_ADDR(0x00012d10u): goto L_12D10;
    case RC_ADDR(0x00012d12u): goto L_12D12;
    case RC_ADDR(0x00012d18u): goto L_12D18;
    case RC_ADDR(0x00012d1cu): goto L_12D1C;
    case RC_ADDR(0x00012d1eu): goto L_12D1E;
    case RC_ADDR(0x00012d22u): goto L_12D22;
    case RC_ADDR(0x00012d26u): goto L_12D26;
    case RC_ADDR(0x00012d28u): goto L_12D28;
    case RC_ADDR(0x00012d2au): goto L_12D2A;
    case RC_ADDR(0x00012d2eu): goto L_12D2E;
    case RC_ADDR(0x00012d34u): goto L_12D34;
    case RC_ADDR(0x00012d3au): goto L_12D3A;
    case RC_ADDR(0x00012d40u): goto L_12D40;
    case RC_ADDR(0x00012d42u): goto L_12D42;
    case RC_ADDR(0x00012d44u): goto L_12D44;
    case RC_ADDR(0x00012d4au): goto L_12D4A;
    case RC_ADDR(0x00012d50u): goto L_12D50;
    case RC_ADDR(0x00012d56u): goto L_12D56;
    case RC_ADDR(0x00012d5eu): goto L_12D5E;
    case RC_ADDR(0x00012d60u): goto L_12D60;
    case RC_ADDR(0x00012d64u): goto L_12D64;
    case RC_ADDR(0x00012d66u): goto L_12D66;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_12BF6:
    /* 00012bf6   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00012bf6u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_12BFA:
    /* 00012bfa   2  clr.l D4 */
    c->pc = RC_ADDR(0x00012bfau);
    rc_step(c, m, 6);
    rc_d_set(c, 4, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_12BFC:
    /* 00012bfc   2  clr.l D5 */
    c->pc = RC_ADDR(0x00012bfcu);
    rc_step(c, m, 6);
    rc_d_set(c, 5, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_12BFE:
    /* 00012bfe   2  clr.l D6 */
    c->pc = RC_ADDR(0x00012bfeu);
    rc_step(c, m, 6);
    rc_d_set(c, 6, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_12C00:
    /* 00012c00   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00012c00u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_12C04:
    /* 00012c04   2  move.w (A0),D1 */
    c->pc = RC_ADDR(0x00012c04u);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12C06:
    /* 00012c06   4  move.w (a,A5),D0 */
    c->pc = RC_ADDR(0x00012c06u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12C0A:
    /* 00012c0a   4  cmpi.w #c7,D0 */
    c->pc = RC_ADDR(0x00012c0au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t0, 0x000000c7u);

L_12C0E:
    /* 00012c0e   4  bgt 00012d64 */
    c->pc = RC_ADDR(0x00012c0eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_12D64;

L_12C12:
    /* 00012c12   4  add.w (2,A0),D0 */
    c->pc = RC_ADDR(0x00012c12u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12C16:
    /* 00012c16   4  beq 00012d64 */
    c->pc = RC_ADDR(0x00012c16u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_12D64;

L_12C1A:
    /* 00012c1a   4  bmi 00012d64 */
    c->pc = RC_ADDR(0x00012c1au);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_12D64;

L_12C1E:
    /* 00012c1e   4  cmp.w (fffffa78,A4),D0 */
    c->pc = RC_ADDR(0x00012c1eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x588u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_12C22:
    /* 00012c22   2  blt 00012c2c */
    c->pc = RC_ADDR(0x00012c22u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_12C2C;

L_12C24:
    /* 00012c24   4  sub.w (fffffa78,A4),D0 */
    c->pc = RC_ADDR(0x00012c24u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x588u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12C28:
    /* 00012c28   2  move.w D0,D6 */
    c->pc = RC_ADDR(0x00012c28u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12C2A:
    /* 00012c2a   2  bra 00012c3e */
    c->pc = RC_ADDR(0x00012c2au);
    rc_step(c, m, 10);
    goto L_12C3E;

L_12C2C:
    /* 00012c2c   4  move.w (a,A5),D0 */
    c->pc = RC_ADDR(0x00012c2cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12C30:
    /* 00012c30   2  bpl 00012c3e */
    c->pc = RC_ADDR(0x00012c30u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_12C3E;

L_12C32:
    /* 00012c32   2  neg.w D0 */
    c->pc = RC_ADDR(0x00012c32u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12C34:
    /* 00012c34   2  move.w D0,D6 */
    c->pc = RC_ADDR(0x00012c34u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12C36:
    /* 00012c36   2  mulu.w D1,D0 */
    c->pc = RC_ADDR(0x00012c36u);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 1, RC_W);
    rc_mulu(c, 0, t0);

L_12C38:
    /* 00012c38   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x00012c38u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12C3A:
    /* 00012c3a   4  clr.w (a,A5) */
    c->pc = RC_ADDR(0x00012c3au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] + 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12C3E:
    /* 00012c3e   4  move.w (8,A5),D2 */
    c->pc = RC_ADDR(0x00012c3eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12C42:
    /* 00012c42   2  bpl 00012c7e */
    c->pc = RC_ADDR(0x00012c42u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_12C7E;

L_12C44:
    /* 00012c44   2  neg.w D2 */
    c->pc = RC_ADDR(0x00012c44u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_12C46:
    /* 00012c46   2  move.w D2,D0 */
    c->pc = RC_ADDR(0x00012c46u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12C48:
    /* 00012c48   2  lsr.w #4,D2 */
    c->pc = RC_ADDR(0x00012c48u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 2, RC_W), RC_W));

L_12C4A:
    /* 00012c4a   2  lsl.w #1,D2 */
    c->pc = RC_ADDR(0x00012c4au);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W));

L_12C4C:
    /* 00012c4c   2  cmp.w D1,D2 */
    c->pc = RC_ADDR(0x00012c4cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_12C4E:
    /* 00012c4e   4  bge 00012d64 */
    c->pc = RC_ADDR(0x00012c4eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_12D64;

L_12C52:
    /* 00012c52   2  sub.w D2,D1 */
    c->pc = RC_ADDR(0x00012c52u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_12C54:
    /* 00012c54   2  add.w D2,D4 */
    c->pc = RC_ADDR(0x00012c54u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_12C56:
    /* 00012c56   2  subq.w #2,D2 */
    c->pc = RC_ADDR(0x00012c56u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_12C58:
    /* 00012c58   6  move.w D2,(00dff062).l */
    c->pc = RC_ADDR(0x00012c58u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, 0x00dff062u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12C5E:
    /* 00012c5e   6  move.w D2,(00dff064).l */
    c->pc = RC_ADDR(0x00012c5eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12C64:
    /* 00012c64   4  andi.w #f,D0 */
    c->pc = RC_ADDR(0x00012c64u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 & 0x0000000fu;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_12C68:
    /* 00012c68   2  bne 00012c70 */
    c->pc = RC_ADDR(0x00012c68u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_12C70;

L_12C6A:
    /* 00012c6a   4  clr.w (8,A5) */
    c->pc = RC_ADDR(0x00012c6au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] + 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12C6E:
    /* 00012c6e   2  bra 00012cbc */
    c->pc = RC_ADDR(0x00012c6eu);
    rc_step(c, m, 10);
    goto L_12CBC;

L_12C70:
    /* 00012c70   2  moveq #fffffffe,D5 */
    c->pc = RC_ADDR(0x00012c70u);
    rc_step(c, m, 4);
    c->d[5] = 0xfffffffeu;
    rc_set_nzvc(c, c->d[5], RC_L);

L_12C72:
    /* 00012c72   6  move.w #10,(8,A5) */
    c->pc = RC_ADDR(0x00012c72u);
    rc_step(c, m, 16);
    t0 = 0x00000010u;
    rc_wr16(c, m, (c->a[5] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12C78:
    /* 00012c78   4  sub.w D0,(8,A5) */
    c->pc = RC_ADDR(0x00012c78u);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_12C7C:
    /* 00012c7c   2  bra 00012cbc */
    c->pc = RC_ADDR(0x00012c7cu);
    rc_step(c, m, 10);
    goto L_12CBC;

L_12C7E:
    /* 00012c7e   4  cmpi.w #13f,D2 */
    c->pc = RC_ADDR(0x00012c7eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x0000013fu);

L_12C82:
    /* 00012c82   4  bgt 00012d64 */
    c->pc = RC_ADDR(0x00012c82u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_12D64;

L_12C86:
    /* 00012c86   2  lsr.w #4,D2 */
    c->pc = RC_ADDR(0x00012c86u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 2, RC_W), RC_W));

L_12C88:
    /* 00012c88   2  lsl.w #1,D2 */
    c->pc = RC_ADDR(0x00012c88u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W));

L_12C8A:
    /* 00012c8a   2  add.w D1,D2 */
    c->pc = RC_ADDR(0x00012c8au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_12C8C:
    /* 00012c8c   4  cmpi.w #26,D2 */
    c->pc = RC_ADDR(0x00012c8cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000026u);

L_12C90:
    /* 00012c90   2  ble 00012cac */
    c->pc = RC_ADDR(0x00012c90u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_12CAC;

L_12C92:
    /* 00012c92   2  sub.w D1,D2 */
    c->pc = RC_ADDR(0x00012c92u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_12C94:
    /* 00012c94   4  sub.w (fffffa76,A4),D2 */
    c->pc = RC_ADDR(0x00012c94u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x58au));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_12C98:
    /* 00012c98   2  neg.w D2 */
    c->pc = RC_ADDR(0x00012c98u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_12C9A:
    /* 00012c9a   2  sub.w D2,D1 */
    c->pc = RC_ADDR(0x00012c9au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_12C9C:
    /* 00012c9c   6  move.w D1,(00dff062).l */
    c->pc = RC_ADDR(0x00012c9cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, 0x00dff062u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12CA2:
    /* 00012ca2   6  move.w D1,(00dff064).l */
    c->pc = RC_ADDR(0x00012ca2u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12CA8:
    /* 00012ca8   2  move.w D2,D1 */
    c->pc = RC_ADDR(0x00012ca8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12CAA:
    /* 00012caa   2  bra 00012cbe */
    c->pc = RC_ADDR(0x00012caau);
    rc_step(c, m, 10);
    goto L_12CBE;

L_12CAC:
    /* 00012cac   8  move.w #ffff,(00dff062).l */
    c->pc = RC_ADDR(0x00012cacu);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff062u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12CB4:
    /* 00012cb4   8  move.w #ffff,(00dff064).l */
    c->pc = RC_ADDR(0x00012cb4u);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12CBC:
    /* 00012cbc   2  addq.w #2,D1 */
    c->pc = RC_ADDR(0x00012cbcu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_12CBE:
    /* 00012cbe   4  move.w (fffffa76,A4),D0 */
    c->pc = RC_ADDR(0x00012cbeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x58au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12CC2:
    /* 00012cc2   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x00012cc2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12CC4:
    /* 00012cc4   6  move.w D0,(00dff066).l */
    c->pc = RC_ADDR(0x00012cc4u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff066u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12CCA:
    /* 00012cca   6  move.w D0,(00dff060).l */
    c->pc = RC_ADDR(0x00012ccau);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff060u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12CD0:
    /* 00012cd0   4  move.w (2,A0),D2 */
    c->pc = RC_ADDR(0x00012cd0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12CD4:
    /* 00012cd4   2  sub.w D6,D2 */
    c->pc = RC_ADDR(0x00012cd4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_12CD6:
    /* 00012cd6   2  lsl.w #6,D2 */
    c->pc = RC_ADDR(0x00012cd6u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000006u, rc_d_get(c, 2, RC_W), RC_W));

L_12CD8:
    /* 00012cd8   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x00012cd8u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_12CDA:
    /* 00012cda   2  or.w D1,D2 */
    c->pc = RC_ADDR(0x00012cdau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 | rc_d_get(c, 2, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 2, RC_W, t2);

L_12CDC:
    /* 00012cdc   4  movea.l (24,A0),A3 */
    c->pc = RC_ADDR(0x00012cdcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x24u));
    c->a[3] = t0;

L_12CE0:
    /* 00012ce0   2  adda.l D4,A3 */
    c->pc = RC_ADDR(0x00012ce0u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[3] += t0;

L_12CE2:
    /* 00012ce2   4  lea (ffffface,A4),A1 */
    c->pc = RC_ADDR(0x00012ce2u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x532u);

L_12CE6:
    /* 00012ce6   2  clr.l D1 */
    c->pc = RC_ADDR(0x00012ce6u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_12CE8:
    /* 00012ce8   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00012ce8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12CEC:
    /* 00012cec   2  move.w D0,D3 */
    c->pc = RC_ADDR(0x00012cecu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12CEE:
    /* 00012cee   2  lsr.w #4,D0 */
    c->pc = RC_ADDR(0x00012ceeu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_12CF0:
    /* 00012cf0   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x00012cf0u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_12CF2:
    /* 00012cf2   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x00012cf2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12CF6:
    /* 00012cf6   4  mulu.w (fffffa76,A4),D1 */
    c->pc = RC_ADDR(0x00012cf6u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x58au));
    rc_mulu(c, 1, t0);

L_12CFA:
    /* 00012cfa   2  add.w D0,D1 */
    c->pc = RC_ADDR(0x00012cfau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_12CFC:
    /* 00012cfc   2  add.l D5,D1 */
    c->pc = RC_ADDR(0x00012cfcu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 5, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_12CFE:
    /* 00012cfe   8  move.w #ffff,(00dff044).l */
    c->pc = RC_ADDR(0x00012cfeu);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff044u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12D06:
    /* 00012d06   8  move.w #0,(00dff046).l */
    c->pc = RC_ADDR(0x00012d06u);
    rc_step(c, m, 20);
    t0 = 0x00000000u;
    rc_wr16(c, m, 0x00dff046u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12D0E:
    /* 00012d0e   2  asl.w #6,D3 */
    c->pc = RC_ADDR(0x00012d0eu);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_W, rc_shift(c, 0, 1, 0x00000006u, rc_d_get(c, 3, RC_W), RC_W));

L_12D10:
    /* 00012d10   2  asl.w #6,D3 */
    c->pc = RC_ADDR(0x00012d10u);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_W, rc_shift(c, 0, 1, 0x00000006u, rc_d_get(c, 3, RC_W), RC_W));

L_12D12:
    /* 00012d12   6  move.w D3,(00dff042).l */
    c->pc = RC_ADDR(0x00012d12u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff042u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12D18:
    /* 00012d18   4  move.w (10,A5),D4 */
    c->pc = RC_ADDR(0x00012d18u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12D1C:
    /* 00012d1c   2  moveq #4,D0 */
    c->pc = RC_ADDR(0x00012d1cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000004u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_12D1E:
    /* 00012d1e   4  ori.w #b0a,D3 */
    c->pc = RC_ADDR(0x00012d1eu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 | 0x00000b0au;
    rc_d_set(c, 3, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_12D22:
    /* 00012d22   4  and.w #fb0a,D3 */
    c->pc = RC_ADDR(0x00012d22u);
    rc_step(c, m, 10);
    t0 = 0x0000fb0au;
    t2 = t0 & rc_d_get(c, 3, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 3, RC_W, t2);

L_12D26:
    /* 00012d26   2  lsr.w #1,D4 */
    c->pc = RC_ADDR(0x00012d26u);
    rc_step(c, m, 6);
    rc_d_set(c, 4, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 4, RC_W), RC_W));

L_12D28:
    /* 00012d28   2  bcc 00012d2e */
    c->pc = RC_ADDR(0x00012d28u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_12D2E;

L_12D2A:
    /* 00012d2a   4  ori.w #fca,D3 */
    c->pc = RC_ADDR(0x00012d2au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 | 0x00000fcau;
    rc_d_set(c, 3, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_12D2E:
    /* 00012d2e   6  move.w D3,(00dff040).l */
    c->pc = RC_ADDR(0x00012d2eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12D34:
    /* 00012d34   6  move.l A3,(00dff050).l */
    c->pc = RC_ADDR(0x00012d34u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12D3A:
    /* 00012d3a   6  move.l A3,(00dff04c).l */
    c->pc = RC_ADDR(0x00012d3au);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff04cu, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12D40:
    /* 00012d40   2  movea.l (A1)+,A2 */
    c->pc = RC_ADDR(0x00012d40u);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_12D42:
    /* 00012d42   2  adda.l D1,A2 */
    c->pc = RC_ADDR(0x00012d42u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[2] += t0;

L_12D44:
    /* 00012d44   6  move.l A2,(00dff048).l */
    c->pc = RC_ADDR(0x00012d44u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff048u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12D4A:
    /* 00012d4a   6  move.l A2,(00dff054).l */
    c->pc = RC_ADDR(0x00012d4au);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12D50:
    /* 00012d50   6  move.w D2,(00dff058).l */
    c->pc = RC_ADDR(0x00012d50u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12D56:
    /* 00012d56   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x00012d56u);
    rc_step(c, m, 20);
    t3 = 0x00dff002u;
    t4 = 0x00000006u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_12D5E:
    /* 00012d5e   2  bne 00012d56 */
    c->pc = RC_ADDR(0x00012d5eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_12D56; }

L_12D60:
    /* 00012d60   4  dbf D0,00012d22 */
    c->pc = RC_ADDR(0x00012d60u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_12D22; }
    }

L_12D64:
    /* 00012d64   2  unlk A5 */
    c->pc = RC_ADDR(0x00012d64u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_12D66:
    /* 00012d66   2  rts */
    c->pc = RC_ADDR(0x00012d66u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
