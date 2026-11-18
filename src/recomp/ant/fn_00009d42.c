/* fn_00009d42 - 166 byte(s), 51 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00009d42(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00009d42u): goto L_9D42;
    case RC_ADDR(0x00009d46u): goto L_9D46;
    case RC_ADDR(0x00009d48u): goto L_9D48;
    case RC_ADDR(0x00009d4eu): goto L_9D4E;
    case RC_ADDR(0x00009d50u): goto L_9D50;
    case RC_ADDR(0x00009d52u): goto L_9D52;
    case RC_ADDR(0x00009d54u): goto L_9D54;
    case RC_ADDR(0x00009d56u): goto L_9D56;
    case RC_ADDR(0x00009d5au): goto L_9D5A;
    case RC_ADDR(0x00009d5cu): goto L_9D5C;
    case RC_ADDR(0x00009d5eu): goto L_9D5E;
    case RC_ADDR(0x00009d60u): goto L_9D60;
    case RC_ADDR(0x00009d64u): goto L_9D64;
    case RC_ADDR(0x00009d68u): goto L_9D68;
    case RC_ADDR(0x00009d6au): goto L_9D6A;
    case RC_ADDR(0x00009d6cu): goto L_9D6C;
    case RC_ADDR(0x00009d6eu): goto L_9D6E;
    case RC_ADDR(0x00009d70u): goto L_9D70;
    case RC_ADDR(0x00009d74u): goto L_9D74;
    case RC_ADDR(0x00009d78u): goto L_9D78;
    case RC_ADDR(0x00009d7cu): goto L_9D7C;
    case RC_ADDR(0x00009d80u): goto L_9D80;
    case RC_ADDR(0x00009d86u): goto L_9D86;
    case RC_ADDR(0x00009d8au): goto L_9D8A;
    case RC_ADDR(0x00009d8eu): goto L_9D8E;
    case RC_ADDR(0x00009d92u): goto L_9D92;
    case RC_ADDR(0x00009d94u): goto L_9D94;
    case RC_ADDR(0x00009d96u): goto L_9D96;
    case RC_ADDR(0x00009d9au): goto L_9D9A;
    case RC_ADDR(0x00009d9eu): goto L_9D9E;
    case RC_ADDR(0x00009da0u): goto L_9DA0;
    case RC_ADDR(0x00009da2u): goto L_9DA2;
    case RC_ADDR(0x00009da6u): goto L_9DA6;
    case RC_ADDR(0x00009daau): goto L_9DAA;
    case RC_ADDR(0x00009daeu): goto L_9DAE;
    case RC_ADDR(0x00009db0u): goto L_9DB0;
    case RC_ADDR(0x00009db2u): goto L_9DB2;
    case RC_ADDR(0x00009db4u): goto L_9DB4;
    case RC_ADDR(0x00009db6u): goto L_9DB6;
    case RC_ADDR(0x00009dbau): goto L_9DBA;
    case RC_ADDR(0x00009dbeu): goto L_9DBE;
    case RC_ADDR(0x00009dc2u): goto L_9DC2;
    case RC_ADDR(0x00009dc6u): goto L_9DC6;
    case RC_ADDR(0x00009dcau): goto L_9DCA;
    case RC_ADDR(0x00009dceu): goto L_9DCE;
    case RC_ADDR(0x00009dd2u): goto L_9DD2;
    case RC_ADDR(0x00009dd4u): goto L_9DD4;
    case RC_ADDR(0x00009ddau): goto L_9DDA;
    case RC_ADDR(0x00009ddcu): goto L_9DDC;
    case RC_ADDR(0x00009de0u): goto L_9DE0;
    case RC_ADDR(0x00009de4u): goto L_9DE4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9D42:
    /* 00009d42   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00009d42u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_9D46:
    /* 00009d46   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x00009d46u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9D48:
    /* 00009d48   6  cmpi.w #2,(fffff8a8,A4) */
    c->pc = RC_ADDR(0x00009d48u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x758u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_9D4E:
    /* 00009d4e   2  bne 00009d56 */
    c->pc = RC_ADDR(0x00009d4eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_9D56;

L_9D50:
    /* 00009d50   2  move.l (A7)+,D4 */
    c->pc = RC_ADDR(0x00009d50u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9D52:
    /* 00009d52   2  unlk A5 */
    c->pc = RC_ADDR(0x00009d52u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_9D54:
    /* 00009d54   2  rts */
    c->pc = RC_ADDR(0x00009d54u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_9D56:
    /* 00009d56   4  jsr (ffff83a4,A4) */
    c->pc = RC_ADDR(0x00009d56u);
    rc_step(c, m, 18);
    /* vector 155 */
    rc_push32(c, m, RC_ADDR(0x00009d5au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023972u);
    return;

L_9D5A:
    /* 00009d5a   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x00009d5au);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_9D5C:
    /* 00009d5c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00009d5cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9D5E:
    /* 00009d5e   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00009d5eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_9D60:
    /* 00009d60   4  lea (a64,A4),A0 */
    c->pc = RC_ADDR(0x00009d60u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xa64u);

L_9D64:
    /* 00009d64   4  tst.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00009d64u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_L);

L_9D68:
    /* 00009d68   2  beq 00009dd2 */
    c->pc = RC_ADDR(0x00009d68u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_9DD2;

L_9D6A:
    /* 00009d6a   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00009d6au);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9D6C:
    /* 00009d6c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00009d6cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9D6E:
    /* 00009d6e   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00009d6eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_9D70:
    /* 00009d70   4  lea (a64,A4),A0 */
    c->pc = RC_ADDR(0x00009d70u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xa64u);

L_9D74:
    /* 00009d74   4  movea.l (0,A0,D0.w),A1 */
    c->pc = RC_ADDR(0x00009d74u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_9D78:
    /* 00009d78   4  movea.l (c,A1),A0 */
    c->pc = RC_ADDR(0x00009d78u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0xcu));
    c->a[0] = t0;

L_9D7C:
    /* 00009d7c   4  move.l (30,A0),-(A7) */
    c->pc = RC_ADDR(0x00009d7cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x30u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9D80:
    /* 00009d80   6  pea (00043210).l */
    c->pc = RC_ADDR(0x00009d80u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00043210u);

L_9D86:
    /* 00009d86   4  pea (000000ca).l */
    c->pc = RC_ADDR(0x00009d86u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000000cau);

L_9D8A:
    /* 00009d8a   4  pea (000000c8).l */
    c->pc = RC_ADDR(0x00009d8au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000000c8u);

L_9D8E:
    /* 00009d8e   4  pea (0000012c).l */
    c->pc = RC_ADDR(0x00009d8eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000012cu);

L_9D92:
    /* 00009d92   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00009d92u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9D94:
    /* 00009d94   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00009d94u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_9D96:
    /* 00009d96   4  lea (a9c,A4),A0 */
    c->pc = RC_ADDR(0x00009d96u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xa9cu);

L_9D9A:
    /* 00009d9a   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00009d9au);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9D9E:
    /* 00009d9e   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00009d9eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9DA0:
    /* 00009da0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00009da0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_9DA2:
    /* 00009da2   4  lea (a80,A4),A0 */
    c->pc = RC_ADDR(0x00009da2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xa80u);

L_9DA6:
    /* 00009da6   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00009da6u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9DAA:
    /* 00009daa   4  move.l (ffffd340,A4),-(A7) */
    c->pc = RC_ADDR(0x00009daau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9DAE:
    /* 00009dae   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00009daeu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9DB0:
    /* 00009db0   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00009db0u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9DB2:
    /* 00009db2   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00009db2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9DB4:
    /* 00009db4   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00009db4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_9DB6:
    /* 00009db6   4  lea (a64,A4),A0 */
    c->pc = RC_ADDR(0x00009db6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xa64u);

L_9DBA:
    /* 00009dba   4  movea.l (0,A0,D0.w),A1 */
    c->pc = RC_ADDR(0x00009dbau);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_9DBE:
    /* 00009dbe   4  movea.l (c,A1),A0 */
    c->pc = RC_ADDR(0x00009dbeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0xcu));
    c->a[0] = t0;

L_9DC2:
    /* 00009dc2   4  pea (c,A0) */
    c->pc = RC_ADDR(0x00009dc2u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[0] + 0xcu));

L_9DC6:
    /* 00009dc6   4  jsr (ffff8260,A4) */
    c->pc = RC_ADDR(0x00009dc6u);
    rc_step(c, m, 18);
    /* vector 101 */
    rc_push32(c, m, RC_ADDR(0x00009dcau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d56u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020940u);
    return;

L_9DCA:
    /* 00009dca   4  lea (30,A7),A7 */
    c->pc = RC_ADDR(0x00009dcau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x30u);

L_9DCE:
    /* 00009dce   4  jsr (ffff83ce,A4) */
    c->pc = RC_ADDR(0x00009dceu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00009dd2u));
    rc_depth++;
    t3 = (c->a[4] - 0x7c32u);
    c->pc = t3;
    return;

L_9DD2:
    /* 00009dd2   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x00009dd2u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_9DD4:
    /* 00009dd4   6  cmp.l #7,D4 */
    c->pc = RC_ADDR(0x00009dd4u);
    rc_step(c, m, 14);
    t0 = 0x00000007u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_9DDA:
    /* 00009dda   2  blt 00009d5c */
    c->pc = RC_ADDR(0x00009ddau);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_9D5C; }

L_9DDC:
    /* 00009ddc   4  jsr (ffff83ce,A4) */
    c->pc = RC_ADDR(0x00009ddcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00009de0u));
    rc_depth++;
    t3 = (c->a[4] - 0x7c32u);
    c->pc = t3;
    return;

L_9DE0:
    /* 00009de0   4  jsr (ffff8386,A4) */
    c->pc = RC_ADDR(0x00009de0u);
    rc_step(c, m, 18);
    /* vector 150 */
    rc_push32(c, m, RC_ADDR(0x00009de4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e7cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023896u);
    return;

L_9DE4:
    /* 00009de4   4  bra 00009d50 */
    c->pc = RC_ADDR(0x00009de4u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_9D50;

}
