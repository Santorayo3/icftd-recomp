/* fn_00013bfc - 248 byte(s), 67 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00013bfc(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00013bfcu): goto L_13BFC;
    case RC_ADDR(0x00013c00u): goto L_13C00;
    case RC_ADDR(0x00013c04u): goto L_13C04;
    case RC_ADDR(0x00013c06u): goto L_13C06;
    case RC_ADDR(0x00013c0cu): goto L_13C0C;
    case RC_ADDR(0x00013c10u): goto L_13C10;
    case RC_ADDR(0x00013c14u): goto L_13C14;
    case RC_ADDR(0x00013c18u): goto L_13C18;
    case RC_ADDR(0x00013c1au): goto L_13C1A;
    case RC_ADDR(0x00013c1eu): goto L_13C1E;
    case RC_ADDR(0x00013c22u): goto L_13C22;
    case RC_ADDR(0x00013c26u): goto L_13C26;
    case RC_ADDR(0x00013c2au): goto L_13C2A;
    case RC_ADDR(0x00013c2cu): goto L_13C2C;
    case RC_ADDR(0x00013c2eu): goto L_13C2E;
    case RC_ADDR(0x00013c34u): goto L_13C34;
    case RC_ADDR(0x00013c36u): goto L_13C36;
    case RC_ADDR(0x00013c38u): goto L_13C38;
    case RC_ADDR(0x00013c3eu): goto L_13C3E;
    case RC_ADDR(0x00013c40u): goto L_13C40;
    case RC_ADDR(0x00013c42u): goto L_13C42;
    case RC_ADDR(0x00013c48u): goto L_13C48;
    case RC_ADDR(0x00013c4au): goto L_13C4A;
    case RC_ADDR(0x00013c4cu): goto L_13C4C;
    case RC_ADDR(0x00013c52u): goto L_13C52;
    case RC_ADDR(0x00013c58u): goto L_13C58;
    case RC_ADDR(0x00013c5au): goto L_13C5A;
    case RC_ADDR(0x00013c5eu): goto L_13C5E;
    case RC_ADDR(0x00013c60u): goto L_13C60;
    case RC_ADDR(0x00013c64u): goto L_13C64;
    case RC_ADDR(0x00013c6au): goto L_13C6A;
    case RC_ADDR(0x00013c70u): goto L_13C70;
    case RC_ADDR(0x00013c72u): goto L_13C72;
    case RC_ADDR(0x00013c76u): goto L_13C76;
    case RC_ADDR(0x00013c78u): goto L_13C78;
    case RC_ADDR(0x00013c7cu): goto L_13C7C;
    case RC_ADDR(0x00013c82u): goto L_13C82;
    case RC_ADDR(0x00013c88u): goto L_13C88;
    case RC_ADDR(0x00013c8eu): goto L_13C8E;
    case RC_ADDR(0x00013c94u): goto L_13C94;
    case RC_ADDR(0x00013c98u): goto L_13C98;
    case RC_ADDR(0x00013c9au): goto L_13C9A;
    case RC_ADDR(0x00013c9eu): goto L_13C9E;
    case RC_ADDR(0x00013ca2u): goto L_13CA2;
    case RC_ADDR(0x00013ca6u): goto L_13CA6;
    case RC_ADDR(0x00013caau): goto L_13CAA;
    case RC_ADDR(0x00013caeu): goto L_13CAE;
    case RC_ADDR(0x00013cb2u): goto L_13CB2;
    case RC_ADDR(0x00013cb6u): goto L_13CB6;
    case RC_ADDR(0x00013cb8u): goto L_13CB8;
    case RC_ADDR(0x00013cbcu): goto L_13CBC;
    case RC_ADDR(0x00013cc0u): goto L_13CC0;
    case RC_ADDR(0x00013cc2u): goto L_13CC2;
    case RC_ADDR(0x00013cc6u): goto L_13CC6;
    case RC_ADDR(0x00013cc8u): goto L_13CC8;
    case RC_ADDR(0x00013cccu): goto L_13CCC;
    case RC_ADDR(0x00013cceu): goto L_13CCE;
    case RC_ADDR(0x00013cd2u): goto L_13CD2;
    case RC_ADDR(0x00013cd6u): goto L_13CD6;
    case RC_ADDR(0x00013cdau): goto L_13CDA;
    case RC_ADDR(0x00013cdcu): goto L_13CDC;
    case RC_ADDR(0x00013ce0u): goto L_13CE0;
    case RC_ADDR(0x00013ce4u): goto L_13CE4;
    case RC_ADDR(0x00013ce8u): goto L_13CE8;
    case RC_ADDR(0x00013cecu): goto L_13CEC;
    case RC_ADDR(0x00013cf0u): goto L_13CF0;
    case RC_ADDR(0x00013cf2u): goto L_13CF2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13BFC:
    /* 00013bfc   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00013bfcu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_13C00:
    /* 00013c00   4  tst.w (fffffa34,A4) */
    c->pc = RC_ADDR(0x00013c00u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5ccu));
    rc_set_nzvc(c, t0, RC_W);

L_13C04:
    /* 00013c04   2  bne 00013c0c */
    c->pc = RC_ADDR(0x00013c04u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_13C0C;

L_13C06:
    /* 00013c06   6  move.w #8,(fffffa34,A4) */
    c->pc = RC_ADDR(0x00013c06u);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[4] - 0x5ccu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C0C:
    /* 00013c0c   4  tst.w (70e,A4) */
    c->pc = RC_ADDR(0x00013c0cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70eu));
    rc_set_nzvc(c, t0, RC_W);

L_13C10:
    /* 00013c10   4  bne 00013c94 */
    c->pc = RC_ADDR(0x00013c10u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_13C94;

L_13C14:
    /* 00013c14   4  tst.w (ffffb258,A4) */
    c->pc = RC_ADDR(0x00013c14u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4da8u));
    rc_set_nzvc(c, t0, RC_W);

L_13C18:
    /* 00013c18   2  beq 00013c94 */
    c->pc = RC_ADDR(0x00013c18u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_13C94;

L_13C1A:
    /* 00013c1a   4  clr.w (ffffb258,A4) */
    c->pc = RC_ADDR(0x00013c1au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4da8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13C1E:
    /* 00013c1e   4  clr.w (706,A4) */
    c->pc = RC_ADDR(0x00013c1eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x706u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13C22:
    /* 00013c22   4  clr.w (708,A4) */
    c->pc = RC_ADDR(0x00013c22u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x708u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13C26:
    /* 00013c26   4  move.w (fffffa34,A4),D0 */
    c->pc = RC_ADDR(0x00013c26u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5ccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C2A:
    /* 00013c2a   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x00013c2au);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_13C2C:
    /* 00013c2c   2  bcc 00013c34 */
    c->pc = RC_ADDR(0x00013c2cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_13C34;

L_13C2E:
    /* 00013c2e   6  move.w #4,(706,A4) */
    c->pc = RC_ADDR(0x00013c2eu);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x706u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C34:
    /* 00013c34   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x00013c34u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_13C36:
    /* 00013c36   2  bcc 00013c3e */
    c->pc = RC_ADDR(0x00013c36u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_13C3E;

L_13C38:
    /* 00013c38   6  move.w #fffc,(706,A4) */
    c->pc = RC_ADDR(0x00013c38u);
    rc_step(c, m, 16);
    t0 = 0x0000fffcu;
    rc_wr16(c, m, (c->a[4] + 0x706u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C3E:
    /* 00013c3e   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x00013c3eu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_13C40:
    /* 00013c40   2  bcc 00013c48 */
    c->pc = RC_ADDR(0x00013c40u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_13C48;

L_13C42:
    /* 00013c42   6  move.w #3,(708,A4) */
    c->pc = RC_ADDR(0x00013c42u);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0x708u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C48:
    /* 00013c48   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x00013c48u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_13C4A:
    /* 00013c4a   2  bcc 00013c52 */
    c->pc = RC_ADDR(0x00013c4au);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_13C52;

L_13C4C:
    /* 00013c4c   6  move.w #fffd,(708,A4) */
    c->pc = RC_ADDR(0x00013c4cu);
    rc_step(c, m, 16);
    t0 = 0x0000fffdu;
    rc_wr16(c, m, (c->a[4] + 0x708u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C52:
    /* 00013c52   6  cmpi.w #1,(710,A4) */
    c->pc = RC_ADDR(0x00013c52u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x710u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_13C58:
    /* 00013c58   2  bne 00013c72 */
    c->pc = RC_ADDR(0x00013c58u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_13C72;

L_13C5A:
    /* 00013c5a   4  tst.w (716,A4) */
    c->pc = RC_ADDR(0x00013c5au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x716u));
    rc_set_nzvc(c, t0, RC_W);

L_13C5E:
    /* 00013c5e   2  beq 00013c72 */
    c->pc = RC_ADDR(0x00013c5eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_13C72;

L_13C60:
    /* 00013c60   4  subq.w #1,(716,A4) */
    c->pc = RC_ADDR(0x00013c60u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x716u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13C64:
    /* 00013c64   6  move.w #f,(70e,A4) */
    c->pc = RC_ADDR(0x00013c64u);
    rc_step(c, m, 16);
    t0 = 0x0000000fu;
    rc_wr16(c, m, (c->a[4] + 0x70eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C6A:
    /* 00013c6a   6  move.w #2,(ffffd578,A4) */
    c->pc = RC_ADDR(0x00013c6au);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] - 0x2a88u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C70:
    /* 00013c70   2  bra 00013c88 */
    c->pc = RC_ADDR(0x00013c70u);
    rc_step(c, m, 10);
    goto L_13C88;

L_13C72:
    /* 00013c72   4  tst.w (718,A4) */
    c->pc = RC_ADDR(0x00013c72u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x718u));
    rc_set_nzvc(c, t0, RC_W);

L_13C76:
    /* 00013c76   2  beq 00013c88 */
    c->pc = RC_ADDR(0x00013c76u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_13C88;

L_13C78:
    /* 00013c78   4  subq.w #1,(718,A4) */
    c->pc = RC_ADDR(0x00013c78u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x718u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13C7C:
    /* 00013c7c   6  move.w #c,(70e,A4) */
    c->pc = RC_ADDR(0x00013c7cu);
    rc_step(c, m, 16);
    t0 = 0x0000000cu;
    rc_wr16(c, m, (c->a[4] + 0x70eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C82:
    /* 00013c82   6  move.w #3,(ffffd578,A4) */
    c->pc = RC_ADDR(0x00013c82u);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] - 0x2a88u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C88:
    /* 00013c88   6  move.w (6ee,A4),(70a,A4) */
    c->pc = RC_ADDR(0x00013c88u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6eeu));
    rc_wr16(c, m, (c->a[4] + 0x70au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C8E:
    /* 00013c8e   6  move.w (6f0,A4),(70c,A4) */
    c->pc = RC_ADDR(0x00013c8eu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6f0u));
    rc_wr16(c, m, (c->a[4] + 0x70cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C94:
    /* 00013c94   4  tst.w (70e,A4) */
    c->pc = RC_ADDR(0x00013c94u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70eu));
    rc_set_nzvc(c, t0, RC_W);

L_13C98:
    /* 00013c98   2  beq 00013cf0 */
    c->pc = RC_ADDR(0x00013c98u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_13CF0;

L_13C9A:
    /* 00013c9a   4  move.w (706,A4),D0 */
    c->pc = RC_ADDR(0x00013c9au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x706u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C9E:
    /* 00013c9e   4  add.w D0,(70a,A4) */
    c->pc = RC_ADDR(0x00013c9eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x70au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_13CA2:
    /* 00013ca2   4  move.w (708,A4),D0 */
    c->pc = RC_ADDR(0x00013ca2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x708u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13CA6:
    /* 00013ca6   4  add.w D0,(70c,A4) */
    c->pc = RC_ADDR(0x00013ca6u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x70cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_13CAA:
    /* 00013caa   4  move.l (1848,A4),-(A7) */
    c->pc = RC_ADDR(0x00013caau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1848u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13CAE:
    /* 00013cae   4  move.w (70c,A4),D0 */
    c->pc = RC_ADDR(0x00013caeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13CB2:
    /* 00013cb2   4  sub.w (17f6,A4),D0 */
    c->pc = RC_ADDR(0x00013cb2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f6u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13CB6:
    /* 00013cb6   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00013cb6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13CB8:
    /* 00013cb8   4  move.w (70a,A4),D0 */
    c->pc = RC_ADDR(0x00013cb8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13CBC:
    /* 00013cbc   4  sub.w (17f4,A4),D0 */
    c->pc = RC_ADDR(0x00013cbcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13CC0:
    /* 00013cc0   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00013cc0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13CC2:
    /* 00013cc2   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x00013cc2u);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x00013cc6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_13CC6:
    /* 00013cc6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00013cc6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_13CC8:
    /* 00013cc8   4  subq.w #1,(70e,A4) */
    c->pc = RC_ADDR(0x00013cc8u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x70eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13CCC:
    /* 00013ccc   2  bne 00013cf0 */
    c->pc = RC_ADDR(0x00013cccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_13CF0;

L_13CCE:
    /* 00013cce   4  move.w #6,-(A7) */
    c->pc = RC_ADDR(0x00013cceu);
    rc_step(c, m, 12);
    t0 = 0x00000006u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13CD2:
    /* 00013cd2   4  move.w #6,-(A7) */
    c->pc = RC_ADDR(0x00013cd2u);
    rc_step(c, m, 12);
    t0 = 0x00000006u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13CD6:
    /* 00013cd6   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00013cd6u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13CDA:
    /* 00013cda   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00013cdau);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13CDC:
    /* 00013cdc   4  move.w (ffffd578,A4),-(A7) */
    c->pc = RC_ADDR(0x00013cdcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a88u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13CE0:
    /* 00013ce0   4  move.w (70c,A4),-(A7) */
    c->pc = RC_ADDR(0x00013ce0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70cu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13CE4:
    /* 00013ce4   4  move.w (70a,A4),-(A7) */
    c->pc = RC_ADDR(0x00013ce4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70au));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13CE8:
    /* 00013ce8   4  jsr (00013d4a) */
    c->pc = RC_ADDR(0x00013ce8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00013cecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00013d4au);
    return;

L_13CEC:
    /* 00013cec   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00013cecu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_13CF0:
    /* 00013cf0   2  unlk A5 */
    c->pc = RC_ADDR(0x00013cf0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_13CF2:
    /* 00013cf2   2  rts */
    c->pc = RC_ADDR(0x00013cf2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
