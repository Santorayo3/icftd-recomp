/* fn_00006cd4 - 200 byte(s), 55 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00006cd4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00006cd4u): goto L_6CD4;
    case RC_ADDR(0x00006cd8u): goto L_6CD8;
    case RC_ADDR(0x00006cdcu): goto L_6CDC;
    case RC_ADDR(0x00006cdeu): goto L_6CDE;
    case RC_ADDR(0x00006ce2u): goto L_6CE2;
    case RC_ADDR(0x00006ce6u): goto L_6CE6;
    case RC_ADDR(0x00006cecu): goto L_6CEC;
    case RC_ADDR(0x00006cf0u): goto L_6CF0;
    case RC_ADDR(0x00006cf4u): goto L_6CF4;
    case RC_ADDR(0x00006cf8u): goto L_6CF8;
    case RC_ADDR(0x00006cfcu): goto L_6CFC;
    case RC_ADDR(0x00006d00u): goto L_6D00;
    case RC_ADDR(0x00006d04u): goto L_6D04;
    case RC_ADDR(0x00006d0au): goto L_6D0A;
    case RC_ADDR(0x00006d0eu): goto L_6D0E;
    case RC_ADDR(0x00006d10u): goto L_6D10;
    case RC_ADDR(0x00006d12u): goto L_6D12;
    case RC_ADDR(0x00006d14u): goto L_6D14;
    case RC_ADDR(0x00006d18u): goto L_6D18;
    case RC_ADDR(0x00006d1cu): goto L_6D1C;
    case RC_ADDR(0x00006d1eu): goto L_6D1E;
    case RC_ADDR(0x00006d24u): goto L_6D24;
    case RC_ADDR(0x00006d26u): goto L_6D26;
    case RC_ADDR(0x00006d2au): goto L_6D2A;
    case RC_ADDR(0x00006d2cu): goto L_6D2C;
    case RC_ADDR(0x00006d2eu): goto L_6D2E;
    case RC_ADDR(0x00006d32u): goto L_6D32;
    case RC_ADDR(0x00006d38u): goto L_6D38;
    case RC_ADDR(0x00006d3cu): goto L_6D3C;
    case RC_ADDR(0x00006d40u): goto L_6D40;
    case RC_ADDR(0x00006d44u): goto L_6D44;
    case RC_ADDR(0x00006d46u): goto L_6D46;
    case RC_ADDR(0x00006d48u): goto L_6D48;
    case RC_ADDR(0x00006d4au): goto L_6D4A;
    case RC_ADDR(0x00006d4eu): goto L_6D4E;
    case RC_ADDR(0x00006d52u): goto L_6D52;
    case RC_ADDR(0x00006d56u): goto L_6D56;
    case RC_ADDR(0x00006d5au): goto L_6D5A;
    case RC_ADDR(0x00006d5cu): goto L_6D5C;
    case RC_ADDR(0x00006d60u): goto L_6D60;
    case RC_ADDR(0x00006d64u): goto L_6D64;
    case RC_ADDR(0x00006d66u): goto L_6D66;
    case RC_ADDR(0x00006d6au): goto L_6D6A;
    case RC_ADDR(0x00006d6cu): goto L_6D6C;
    case RC_ADDR(0x00006d74u): goto L_6D74;
    case RC_ADDR(0x00006d78u): goto L_6D78;
    case RC_ADDR(0x00006d7cu): goto L_6D7C;
    case RC_ADDR(0x00006d80u): goto L_6D80;
    case RC_ADDR(0x00006d82u): goto L_6D82;
    case RC_ADDR(0x00006d86u): goto L_6D86;
    case RC_ADDR(0x00006d8au): goto L_6D8A;
    case RC_ADDR(0x00006d8eu): goto L_6D8E;
    case RC_ADDR(0x00006d92u): goto L_6D92;
    case RC_ADDR(0x00006d98u): goto L_6D98;
    case RC_ADDR(0x00006d9au): goto L_6D9A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_6CD4:
    /* 00006cd4   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x00006cd4u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_6CD8:
    /* 00006cd8   4  tst.w (fffff26c,A4) */
    c->pc = RC_ADDR(0x00006cd8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd94u));
    rc_set_nzvc(c, t0, RC_W);

L_6CDC:
    /* 00006cdc   2  beq 00006ce6 */
    c->pc = RC_ADDR(0x00006cdcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6CE6;

L_6CDE:
    /* 00006cde   4  clr.w (fffff26c,A4) */
    c->pc = RC_ADDR(0x00006cdeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0xd94u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6CE2:
    /* 00006ce2   4  bra 00006d98 */
    c->pc = RC_ADDR(0x00006ce2u);
    rc_step(c, m, 10);
    goto L_6D98;

L_6CE6:
    /* 00006ce6   6  move.w (fffff262,A4),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00006ce6u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd9eu));
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6CEC:
    /* 00006cec   4  tst.l (8,A5) */
    c->pc = RC_ADDR(0x00006cecu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_6CF0:
    /* 00006cf0   4  beq 00006d92 */
    c->pc = RC_ADDR(0x00006cf0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6D92;

L_6CF4:
    /* 00006cf4   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00006cf4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_6CF8:
    /* 00006cf8   4  tst.b (12,A0) */
    c->pc = RC_ADDR(0x00006cf8u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x12u));
    rc_set_nzvc(c, t0, RC_B);

L_6CFC:
    /* 00006cfc   4  beq 00006d92 */
    c->pc = RC_ADDR(0x00006cfcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6D92;

L_6D00:
    /* 00006d00   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00006d00u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6D04:
    /* 00006d04   6  move.w #1,(fffff26e,A4) */
    c->pc = RC_ADDR(0x00006d04u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xd92u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6D0A:
    /* 00006d0a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00006d0au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6D0E:
    /* 00006d0e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00006d0eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_6D10:
    /* 00006d10   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00006d10u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_6D12:
    /* 00006d12   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00006d12u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_6D14:
    /* 00006d14   4  adda.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00006d14u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] += t0;

L_6D18:
    /* 00006d18   4  tst.b (12,A0) */
    c->pc = RC_ADDR(0x00006d18u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x12u));
    rc_set_nzvc(c, t0, RC_B);

L_6D1C:
    /* 00006d1c   2  beq 00006d8e */
    c->pc = RC_ADDR(0x00006d1cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6D8E;

L_6D1E:
    /* 00006d1e   6  cmpi.w #a,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00006d1eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_6D24:
    /* 00006d24   2  bge 00006d8e */
    c->pc = RC_ADDR(0x00006d24u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_6D8E;

L_6D26:
    /* 00006d26   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00006d26u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6D2A:
    /* 00006d2a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00006d2au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_6D2C:
    /* 00006d2c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00006d2cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_6D2E:
    /* 00006d2e   4  add.l (8,A5),D0 */
    c->pc = RC_ADDR(0x00006d2eu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_6D32:
    /* 00006d32   6  add.l #12,D0 */
    c->pc = RC_ADDR(0x00006d32u);
    rc_step(c, m, 16);
    t0 = 0x00000012u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_6D38:
    /* 00006d38   4  move.l D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00006d38u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6D3C:
    /* 00006d3c   4  movea.l (10,A5),A0 */
    c->pc = RC_ADDR(0x00006d3cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[0] = t0;

L_6D40:
    /* 00006d40   4  movea.l (fffffff6,A5),A1 */
    c->pc = RC_ADDR(0x00006d40u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[1] = t0;

L_6D44:
    /* 00006d44   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00006d44u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_6D46:
    /* 00006d46   2  cmp.b (A1),D0 */
    c->pc = RC_ADDR(0x00006d46u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[1]);
    t1 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t1, t0);

L_6D48:
    /* 00006d48   2  bne 00006d5c */
    c->pc = RC_ADDR(0x00006d48u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6D5C;

L_6D4A:
    /* 00006d4a   4  movea.l (10,A5),A0 */
    c->pc = RC_ADDR(0x00006d4au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[0] = t0;

L_6D4E:
    /* 00006d4e   4  movea.l (fffffff6,A5),A1 */
    c->pc = RC_ADDR(0x00006d4eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[1] = t0;

L_6D52:
    /* 00006d52   4  move.b (1,A0),D0 */
    c->pc = RC_ADDR(0x00006d52u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_6D56:
    /* 00006d56   4  cmp.b (1,A1),D0 */
    c->pc = RC_ADDR(0x00006d56u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u));
    t1 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t1, t0);

L_6D5A:
    /* 00006d5a   2  beq 00006d86 */
    c->pc = RC_ADDR(0x00006d5au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6D86;

L_6D5C:
    /* 00006d5c   4  movea.l (fffffff6,A5),A0 */
    c->pc = RC_ADDR(0x00006d5cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[0] = t0;

L_6D60:
    /* 00006d60   4  cmpi.b #4a,(A0) */
    c->pc = RC_ADDR(0x00006d60u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000004au);

L_6D64:
    /* 00006d64   2  bne 00006d74 */
    c->pc = RC_ADDR(0x00006d64u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6D74;

L_6D66:
    /* 00006d66   4  tst.w (fffff270,A4) */
    c->pc = RC_ADDR(0x00006d66u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd90u));
    rc_set_nzvc(c, t0, RC_W);

L_6D6A:
    /* 00006d6a   2  beq 00006d74 */
    c->pc = RC_ADDR(0x00006d6au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6D74;

L_6D6C:
    /* 00006d6c   8  move.l #ffffffba,(fffff264,A4) */
    c->pc = RC_ADDR(0x00006d6cu);
    rc_step(c, m, 24);
    t0 = 0xffffffbau;
    rc_wr32(c, m, (c->a[4] - 0xd9cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6D74:
    /* 00006d74   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00006d74u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6D78:
    /* 00006d78   4  move.l (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x00006d78u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6D7C:
    /* 00006d7c   4  jsr (00006b18) */
    c->pc = RC_ADDR(0x00006d7cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006d80u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006b18u);
    return;

L_6D80:
    /* 00006d80   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00006d80u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_6D82:
    /* 00006d82   4  clr.l (fffff264,A4) */
    c->pc = RC_ADDR(0x00006d82u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0xd9cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6D86:
    /* 00006d86   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00006d86u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_6D8A:
    /* 00006d8a   4  bra 00006d0a */
    c->pc = RC_ADDR(0x00006d8au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_6D0A;

L_6D8E:
    /* 00006d8e   4  clr.w (fffff26e,A4) */
    c->pc = RC_ADDR(0x00006d8eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0xd92u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6D92:
    /* 00006d92   6  move.w (fffffffc,A5),(fffff262,A4) */
    c->pc = RC_ADDR(0x00006d92u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_wr16(c, m, (c->a[4] - 0xd9eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6D98:
    /* 00006d98   2  unlk A5 */
    c->pc = RC_ADDR(0x00006d98u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_6D9A:
    /* 00006d9a   2  rts */
    c->pc = RC_ADDR(0x00006d9au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
