/* fn_00005cce - 280 byte(s), 78 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00005cce(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00005cceu): goto L_5CCE;
    case RC_ADDR(0x00005cd2u): goto L_5CD2;
    case RC_ADDR(0x00005cd6u): goto L_5CD6;
    case RC_ADDR(0x00005cdau): goto L_5CDA;
    case RC_ADDR(0x00005cdeu): goto L_5CDE;
    case RC_ADDR(0x00005ce2u): goto L_5CE2;
    case RC_ADDR(0x00005ce6u): goto L_5CE6;
    case RC_ADDR(0x00005ceau): goto L_5CEA;
    case RC_ADDR(0x00005cecu): goto L_5CEC;
    case RC_ADDR(0x00005cf0u): goto L_5CF0;
    case RC_ADDR(0x00005cf2u): goto L_5CF2;
    case RC_ADDR(0x00005cf8u): goto L_5CF8;
    case RC_ADDR(0x00005cfau): goto L_5CFA;
    case RC_ADDR(0x00005cfeu): goto L_5CFE;
    case RC_ADDR(0x00005d02u): goto L_5D02;
    case RC_ADDR(0x00005d04u): goto L_5D04;
    case RC_ADDR(0x00005d08u): goto L_5D08;
    case RC_ADDR(0x00005d0cu): goto L_5D0C;
    case RC_ADDR(0x00005d0eu): goto L_5D0E;
    case RC_ADDR(0x00005d12u): goto L_5D12;
    case RC_ADDR(0x00005d16u): goto L_5D16;
    case RC_ADDR(0x00005d18u): goto L_5D18;
    case RC_ADDR(0x00005d1eu): goto L_5D1E;
    case RC_ADDR(0x00005d20u): goto L_5D20;
    case RC_ADDR(0x00005d24u): goto L_5D24;
    case RC_ADDR(0x00005d28u): goto L_5D28;
    case RC_ADDR(0x00005d2au): goto L_5D2A;
    case RC_ADDR(0x00005d2eu): goto L_5D2E;
    case RC_ADDR(0x00005d32u): goto L_5D32;
    case RC_ADDR(0x00005d36u): goto L_5D36;
    case RC_ADDR(0x00005d3au): goto L_5D3A;
    case RC_ADDR(0x00005d3eu): goto L_5D3E;
    case RC_ADDR(0x00005d42u): goto L_5D42;
    case RC_ADDR(0x00005d46u): goto L_5D46;
    case RC_ADDR(0x00005d48u): goto L_5D48;
    case RC_ADDR(0x00005d4cu): goto L_5D4C;
    case RC_ADDR(0x00005d50u): goto L_5D50;
    case RC_ADDR(0x00005d52u): goto L_5D52;
    case RC_ADDR(0x00005d56u): goto L_5D56;
    case RC_ADDR(0x00005d5au): goto L_5D5A;
    case RC_ADDR(0x00005d5eu): goto L_5D5E;
    case RC_ADDR(0x00005d62u): goto L_5D62;
    case RC_ADDR(0x00005d66u): goto L_5D66;
    case RC_ADDR(0x00005d68u): goto L_5D68;
    case RC_ADDR(0x00005d6au): goto L_5D6A;
    case RC_ADDR(0x00005d6eu): goto L_5D6E;
    case RC_ADDR(0x00005d72u): goto L_5D72;
    case RC_ADDR(0x00005d76u): goto L_5D76;
    case RC_ADDR(0x00005d7au): goto L_5D7A;
    case RC_ADDR(0x00005d7cu): goto L_5D7C;
    case RC_ADDR(0x00005d80u): goto L_5D80;
    case RC_ADDR(0x00005d84u): goto L_5D84;
    case RC_ADDR(0x00005d88u): goto L_5D88;
    case RC_ADDR(0x00005d8cu): goto L_5D8C;
    case RC_ADDR(0x00005d8eu): goto L_5D8E;
    case RC_ADDR(0x00005d94u): goto L_5D94;
    case RC_ADDR(0x00005d98u): goto L_5D98;
    case RC_ADDR(0x00005d9cu): goto L_5D9C;
    case RC_ADDR(0x00005d9eu): goto L_5D9E;
    case RC_ADDR(0x00005da2u): goto L_5DA2;
    case RC_ADDR(0x00005da6u): goto L_5DA6;
    case RC_ADDR(0x00005da8u): goto L_5DA8;
    case RC_ADDR(0x00005dacu): goto L_5DAC;
    case RC_ADDR(0x00005db0u): goto L_5DB0;
    case RC_ADDR(0x00005db4u): goto L_5DB4;
    case RC_ADDR(0x00005db8u): goto L_5DB8;
    case RC_ADDR(0x00005dbau): goto L_5DBA;
    case RC_ADDR(0x00005dbeu): goto L_5DBE;
    case RC_ADDR(0x00005dc2u): goto L_5DC2;
    case RC_ADDR(0x00005dc6u): goto L_5DC6;
    case RC_ADDR(0x00005dcau): goto L_5DCA;
    case RC_ADDR(0x00005dceu): goto L_5DCE;
    case RC_ADDR(0x00005dd0u): goto L_5DD0;
    case RC_ADDR(0x00005dd4u): goto L_5DD4;
    case RC_ADDR(0x00005ddau): goto L_5DDA;
    case RC_ADDR(0x00005ddeu): goto L_5DDE;
    case RC_ADDR(0x00005de2u): goto L_5DE2;
    case RC_ADDR(0x00005de4u): goto L_5DE4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5CCE:
    /* 00005cce   4  link.w A5,#fffffff4 */
    c->pc = RC_ADDR(0x00005cceu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xcu;

L_5CD2:
    /* 00005cd2   4  clr.w (fffff0c2,A4) */
    c->pc = RC_ADDR(0x00005cd2u);
    rc_wr16(c, m, (c->a[4] - 0xf3eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5CD6:
    /* 00005cd6   4  clr.w (ffffce2c,A4) */
    c->pc = RC_ADDR(0x00005cd6u);
    rc_wr16(c, m, (c->a[4] - 0x31d4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5CDA:
    /* 00005cda   4  clr.w (fffff0c0,A4) */
    c->pc = RC_ADDR(0x00005cdau);
    rc_wr16(c, m, (c->a[4] - 0xf40u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5CDE:
    /* 00005cde   4  jsr (0000334a) */
    c->pc = RC_ADDR(0x00005cdeu);
    rc_push32(c, m, RC_ADDR(0x00005ce2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000334au);
    return;

L_5CE2:
    /* 00005ce2   4  jsr (000069d2) */
    c->pc = RC_ADDR(0x00005ce2u);
    rc_push32(c, m, RC_ADDR(0x00005ce6u));
    rc_depth++;
    c->pc = RC_ADDR(0x000069d2u);
    return;

L_5CE6:
    /* 00005ce6   4  clr.b (fffff0ba,A4) */
    c->pc = RC_ADDR(0x00005ce6u);
    rc_wr8(c, m, (c->a[4] - 0xf46u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_5CEA:
    /* 00005cea   2  bsr 00005cb2 */
    c->pc = RC_ADDR(0x00005ceau);
    rc_push32(c, m, RC_ADDR(0x00005cecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00005cb2u);
    return;

L_5CEC:
    /* 00005cec   4  tst.w (fffff0fc,A4) */
    c->pc = RC_ADDR(0x00005cecu);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf04u));
    rc_set_nzvc(c, t0, RC_W);

L_5CF0:
    /* 00005cf0   2  beq 00005d04 */
    c->pc = RC_ADDR(0x00005cf0u);
    if (rc_cond(c, 7)) goto L_5D04;

L_5CF2:
    /* 00005cf2   6  cmpi.w #1d,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x00005cf2u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x0000001du);

L_5CF8:
    /* 00005cf8   2  beq 00005d04 */
    c->pc = RC_ADDR(0x00005cf8u);
    if (rc_cond(c, 7)) goto L_5D04;

L_5CFA:
    /* 00005cfa   4  move.w #fc,-(A7) */
    c->pc = RC_ADDR(0x00005cfau);
    t0 = 0x000000fcu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5CFE:
    /* 00005cfe   4  jsr (ffff8044,A4) */
    c->pc = RC_ADDR(0x00005cfeu);
    /* vector 11 */
    rc_push32(c, m, RC_ADDR(0x00005d02u));
    rc_depth++;
    c->pc = RC_ADDR(0x00002c92u);
    return;

L_5D02:
    /* 00005d02   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00005d02u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_5D04:
    /* 00005d04   4  jsr (0000913c) */
    c->pc = RC_ADDR(0x00005d04u);
    rc_push32(c, m, RC_ADDR(0x00005d08u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000913cu);
    return;

L_5D08:
    /* 00005d08   4  tst.w (ffff83c8,A4) */
    c->pc = RC_ADDR(0x00005d08u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_set_nzvc(c, t0, RC_W);

L_5D0C:
    /* 00005d0c   2  bne 00005d18 */
    c->pc = RC_ADDR(0x00005d0cu);
    if (rc_cond(c, 6)) goto L_5D18;

L_5D0E:
    /* 00005d0e   4  move.w #c5,-(A7) */
    c->pc = RC_ADDR(0x00005d0eu);
    t0 = 0x000000c5u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5D12:
    /* 00005d12   4  jsr (ffff8080,A4) */
    c->pc = RC_ADDR(0x00005d12u);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x00005d16u));
    rc_depth++;
    c->pc = RC_ADDR(0x000070cau);
    return;

L_5D16:
    /* 00005d16   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00005d16u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_5D18:
    /* 00005d18   6  cmpi.w #5,(ffff83c8,A4) */
    c->pc = RC_ADDR(0x00005d18u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_5D1E:
    /* 00005d1e   2  bcc 00005d2a */
    c->pc = RC_ADDR(0x00005d1eu);
    if (rc_cond(c, 4)) goto L_5D2A;

L_5D20:
    /* 00005d20   4  move.w #e9,-(A7) */
    c->pc = RC_ADDR(0x00005d20u);
    t0 = 0x000000e9u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5D24:
    /* 00005d24   4  jsr (ffff8080,A4) */
    c->pc = RC_ADDR(0x00005d24u);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x00005d28u));
    rc_depth++;
    c->pc = RC_ADDR(0x000070cau);
    return;

L_5D28:
    /* 00005d28   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00005d28u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_5D2A:
    /* 00005d2a   4  jsr (ffff8284,A4) */
    c->pc = RC_ADDR(0x00005d2au);
    /* vector 107 */
    rc_push32(c, m, RC_ADDR(0x00005d2eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00020266u);
    return;

L_5D2E:
    /* 00005d2e   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00005d2eu);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5D32:
    /* 00005d32   4  pea (00005def) */
    c->pc = RC_ADDR(0x00005d32u);
    rc_push32(c, m, RC_ADDR(0x00005defu));

L_5D36:
    /* 00005d36   4  pea (00005de6) */
    c->pc = RC_ADDR(0x00005d36u);
    rc_push32(c, m, RC_ADDR(0x00005de6u));

L_5D3A:
    /* 00005d3a   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x00005d3au);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x00005d3eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000002f4u);
    return;

L_5D3E:
    /* 00005d3e   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00005d3eu);
    c->a[7] = (c->a[7] + 0xau);

L_5D42:
    /* 00005d42   4  tst.w (ffff8b54,A4) */
    c->pc = RC_ADDR(0x00005d42u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x74acu));
    rc_set_nzvc(c, t0, RC_W);

L_5D46:
    /* 00005d46   2  beq 00005d6a */
    c->pc = RC_ADDR(0x00005d46u);
    if (rc_cond(c, 7)) goto L_5D6A;

L_5D48:
    /* 00005d48   4  move.w (ffff8b56,A4),-(A7) */
    c->pc = RC_ADDR(0x00005d48u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x74aau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5D4C:
    /* 00005d4c   4  jsr (0000737e) */
    c->pc = RC_ADDR(0x00005d4cu);
    rc_push32(c, m, RC_ADDR(0x00005d50u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000737eu);
    return;

L_5D50:
    /* 00005d50   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00005d50u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_5D52:
    /* 00005d52   4  move.l D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00005d52u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5D56:
    /* 00005d56   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00005d56u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_5D5A:
    /* 00005d5a   4  move.l (4,A0),-(A7) */
    c->pc = RC_ADDR(0x00005d5au);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5D5E:
    /* 00005d5e   4  pea (00005dfa) */
    c->pc = RC_ADDR(0x00005d5eu);
    rc_push32(c, m, RC_ADDR(0x00005dfau));

L_5D62:
    /* 00005d62   4  jsr (ffff802c,A4) */
    c->pc = RC_ADDR(0x00005d62u);
    /* vector 7 */
    rc_push32(c, m, RC_ADDR(0x00005d66u));
    rc_depth++;
    c->pc = RC_ADDR(0x000010beu);
    return;

L_5D66:
    /* 00005d66   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00005d66u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_5D68:
    /* 00005d68   2  bra 00005d8e */
    c->pc = RC_ADDR(0x00005d68u);
    goto L_5D8E;

L_5D6A:
    /* 00005d6a   4  move.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x00005d6au);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5D6E:
    /* 00005d6e   4  mulu.w #222,D0 */
    c->pc = RC_ADDR(0x00005d6eu);
    t0 = 0x00000222u;
    rc_mulu(c, 0, t0);

L_5D72:
    /* 00005d72   4  move.w (ffffefe4,A4),D1 */
    c->pc = RC_ADDR(0x00005d72u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5D76:
    /* 00005d76   4  mulu.w #e,D1 */
    c->pc = RC_ADDR(0x00005d76u);
    t0 = 0x0000000eu;
    rc_mulu(c, 1, t0);

L_5D7A:
    /* 00005d7a   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00005d7au);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_5D7C:
    /* 00005d7c   4  lea (ffffcf90,A4),A0 */
    c->pc = RC_ADDR(0x00005d7cu);
    c->a[0] = (c->a[4] - 0x3070u);

L_5D80:
    /* 00005d80   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00005d80u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5D84:
    /* 00005d84   4  pea (00005e05) */
    c->pc = RC_ADDR(0x00005d84u);
    rc_push32(c, m, RC_ADDR(0x00005e05u));

L_5D88:
    /* 00005d88   4  jsr (ffff802c,A4) */
    c->pc = RC_ADDR(0x00005d88u);
    /* vector 7 */
    rc_push32(c, m, RC_ADDR(0x00005d8cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000010beu);
    return;

L_5D8C:
    /* 00005d8c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00005d8cu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_5D8E:
    /* 00005d8e   6  move.w #1,(fffff0be,A4) */
    c->pc = RC_ADDR(0x00005d8eu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xf42u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5D94:
    /* 00005d94   4  pea (00005e10) */
    c->pc = RC_ADDR(0x00005d94u);
    rc_push32(c, m, RC_ADDR(0x00005e10u));

L_5D98:
    /* 00005d98   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00005d98u);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00005d9cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000202c4u);
    return;

L_5D9C:
    /* 00005d9c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00005d9cu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5D9E:
    /* 00005d9e   4  pea (00005e1e) */
    c->pc = RC_ADDR(0x00005d9eu);
    rc_push32(c, m, RC_ADDR(0x00005e1eu));

L_5DA2:
    /* 00005da2   4  jsr (ffff8230,A4) */
    c->pc = RC_ADDR(0x00005da2u);
    /* vector 93 */
    rc_push32(c, m, RC_ADDR(0x00005da6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001de7au);
    return;

L_5DA6:
    /* 00005da6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00005da6u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5DA8:
    /* 00005da8   4  move.l D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00005da8u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5DAC:
    /* 00005dac   4  pea (00005c9e) */
    c->pc = RC_ADDR(0x00005dacu);
    rc_push32(c, m, RC_ADDR(0x00005c9eu));

L_5DB0:
    /* 00005db0   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00005db0u);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5DB4:
    /* 00005db4   4  jsr (ffff81fa,A4) */
    c->pc = RC_ADDR(0x00005db4u);
    /* vector 84 */
    rc_push32(c, m, RC_ADDR(0x00005db8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d2c6u);
    return;

L_5DB8:
    /* 00005db8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00005db8u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_5DBA:
    /* 00005dba   4  jsr (ffff8260,A4) */
    c->pc = RC_ADDR(0x00005dbau);
    /* vector 101 */
    rc_push32(c, m, RC_ADDR(0x00005dbeu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f27eu);
    return;

L_5DBE:
    /* 00005dbe   4  clr.w (ffffcb20,A4) */
    c->pc = RC_ADDR(0x00005dbeu);
    rc_wr16(c, m, (c->a[4] - 0x34e0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5DC2:
    /* 00005dc2   4  jsr (ffff8032,A4) */
    c->pc = RC_ADDR(0x00005dc2u);
    /* vector 8 */
    rc_push32(c, m, RC_ADDR(0x00005dc6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000151au);
    return;

L_5DC6:
    /* 00005dc6   4  clr.w (fffff0be,A4) */
    c->pc = RC_ADDR(0x00005dc6u);
    rc_wr16(c, m, (c->a[4] - 0xf42u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5DCA:
    /* 00005dca   4  tst.w (ffff8402,A4) */
    c->pc = RC_ADDR(0x00005dcau);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7bfeu));
    rc_set_nzvc(c, t0, RC_W);

L_5DCE:
    /* 00005dce   2  bne 00005dde */
    c->pc = RC_ADDR(0x00005dceu);
    if (rc_cond(c, 6)) goto L_5DDE;

L_5DD0:
    /* 00005dd0   4  jsr (ffff8110,A4) */
    c->pc = RC_ADDR(0x00005dd0u);
    /* vector 45 */
    rc_push32(c, m, RC_ADDR(0x00005dd4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000ec8au);
    return;

L_5DD4:
    /* 00005dd4   6  move.w #1,(fffff00c,A4) */
    c->pc = RC_ADDR(0x00005dd4u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xff4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5DDA:
    /* 00005dda   4  jsr (ffff821e,A4) */
    c->pc = RC_ADDR(0x00005ddau);
    /* vector 90 */
    rc_push32(c, m, RC_ADDR(0x00005ddeu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d778u);
    return;

L_5DDE:
    /* 00005dde   4  jsr (ffff8284,A4) */
    c->pc = RC_ADDR(0x00005ddeu);
    /* vector 107 */
    rc_push32(c, m, RC_ADDR(0x00005de2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020266u);
    return;

L_5DE2:
    /* 00005de2   2  unlk A5 */
    c->pc = RC_ADDR(0x00005de2u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_5DE4:
    /* 00005de4   2  rts */
    c->pc = RC_ADDR(0x00005de4u);
    rc_ret(c, m);
    return;

}
