/* fn_00013cca - 148 byte(s), 43 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00013cca(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00013ccau): goto L_13CCA;
    case RC_ADDR(0x00013cceu): goto L_13CCE;
    case RC_ADDR(0x00013cd2u): goto L_13CD2;
    case RC_ADDR(0x00013cd6u): goto L_13CD6;
    case RC_ADDR(0x00013cdau): goto L_13CDA;
    case RC_ADDR(0x00013cdeu): goto L_13CDE;
    case RC_ADDR(0x00013ce0u): goto L_13CE0;
    case RC_ADDR(0x00013ce4u): goto L_13CE4;
    case RC_ADDR(0x00013ce8u): goto L_13CE8;
    case RC_ADDR(0x00013cecu): goto L_13CEC;
    case RC_ADDR(0x00013ceeu): goto L_13CEE;
    case RC_ADDR(0x00013cf0u): goto L_13CF0;
    case RC_ADDR(0x00013cf4u): goto L_13CF4;
    case RC_ADDR(0x00013cf8u): goto L_13CF8;
    case RC_ADDR(0x00013cfcu): goto L_13CFC;
    case RC_ADDR(0x00013cfeu): goto L_13CFE;
    case RC_ADDR(0x00013d02u): goto L_13D02;
    case RC_ADDR(0x00013d06u): goto L_13D06;
    case RC_ADDR(0x00013d0au): goto L_13D0A;
    case RC_ADDR(0x00013d0cu): goto L_13D0C;
    case RC_ADDR(0x00013d0eu): goto L_13D0E;
    case RC_ADDR(0x00013d12u): goto L_13D12;
    case RC_ADDR(0x00013d16u): goto L_13D16;
    case RC_ADDR(0x00013d1au): goto L_13D1A;
    case RC_ADDR(0x00013d1cu): goto L_13D1C;
    case RC_ADDR(0x00013d20u): goto L_13D20;
    case RC_ADDR(0x00013d24u): goto L_13D24;
    case RC_ADDR(0x00013d28u): goto L_13D28;
    case RC_ADDR(0x00013d2au): goto L_13D2A;
    case RC_ADDR(0x00013d2cu): goto L_13D2C;
    case RC_ADDR(0x00013d32u): goto L_13D32;
    case RC_ADDR(0x00013d36u): goto L_13D36;
    case RC_ADDR(0x00013d3au): goto L_13D3A;
    case RC_ADDR(0x00013d3eu): goto L_13D3E;
    case RC_ADDR(0x00013d40u): goto L_13D40;
    case RC_ADDR(0x00013d44u): goto L_13D44;
    case RC_ADDR(0x00013d48u): goto L_13D48;
    case RC_ADDR(0x00013d4cu): goto L_13D4C;
    case RC_ADDR(0x00013d4eu): goto L_13D4E;
    case RC_ADDR(0x00013d50u): goto L_13D50;
    case RC_ADDR(0x00013d56u): goto L_13D56;
    case RC_ADDR(0x00013d5au): goto L_13D5A;
    case RC_ADDR(0x00013d5cu): goto L_13D5C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13CCA:
    /* 00013cca   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00013ccau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_13CCE:
    /* 00013cce   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00013cceu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13CD2:
    /* 00013cd2   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00013cd2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13CD6:
    /* 00013cd6   4  add.w (c,A5),D0 */
    c->pc = RC_ADDR(0x00013cd6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13CDA:
    /* 00013cda   4  cmp.w (10,A5),D0 */
    c->pc = RC_ADDR(0x00013cdau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13CDE:
    /* 00013cde   2  ble 00013d56 */
    c->pc = RC_ADDR(0x00013cdeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_13D56;

L_13CE0:
    /* 00013ce0   4  move.w (10,A5),D0 */
    c->pc = RC_ADDR(0x00013ce0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13CE4:
    /* 00013ce4   4  add.w (c,A5),D0 */
    c->pc = RC_ADDR(0x00013ce4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13CE8:
    /* 00013ce8   4  move.w (8,A5),D1 */
    c->pc = RC_ADDR(0x00013ce8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13CEC:
    /* 00013cec   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00013cecu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13CEE:
    /* 00013cee   2  bge 00013d56 */
    c->pc = RC_ADDR(0x00013ceeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_13D56;

L_13CF0:
    /* 00013cf0   4  move.w (a,A5),D0 */
    c->pc = RC_ADDR(0x00013cf0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13CF4:
    /* 00013cf4   4  add.w (e,A5),D0 */
    c->pc = RC_ADDR(0x00013cf4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13CF8:
    /* 00013cf8   4  cmp.w (12,A5),D0 */
    c->pc = RC_ADDR(0x00013cf8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13CFC:
    /* 00013cfc   2  ble 00013d56 */
    c->pc = RC_ADDR(0x00013cfcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_13D56;

L_13CFE:
    /* 00013cfe   4  move.w (12,A5),D0 */
    c->pc = RC_ADDR(0x00013cfeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13D02:
    /* 00013d02   4  add.w (e,A5),D0 */
    c->pc = RC_ADDR(0x00013d02u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13D06:
    /* 00013d06   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x00013d06u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13D0A:
    /* 00013d0a   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00013d0au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13D0C:
    /* 00013d0c   2  bge 00013d56 */
    c->pc = RC_ADDR(0x00013d0cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_13D56;

L_13D0E:
    /* 00013d0e   4  move.w (14,A5),D0 */
    c->pc = RC_ADDR(0x00013d0eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13D12:
    /* 00013d12   4  add.w (c,A5),D0 */
    c->pc = RC_ADDR(0x00013d12u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13D16:
    /* 00013d16   4  cmp.w (10,A5),D0 */
    c->pc = RC_ADDR(0x00013d16u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13D1A:
    /* 00013d1a   2  ble 00013d32 */
    c->pc = RC_ADDR(0x00013d1au);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_13D32;

L_13D1C:
    /* 00013d1c   4  move.w (10,A5),D0 */
    c->pc = RC_ADDR(0x00013d1cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13D20:
    /* 00013d20   4  add.w (c,A5),D0 */
    c->pc = RC_ADDR(0x00013d20u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13D24:
    /* 00013d24   4  move.w (14,A5),D1 */
    c->pc = RC_ADDR(0x00013d24u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13D28:
    /* 00013d28   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00013d28u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13D2A:
    /* 00013d2a   2  bge 00013d32 */
    c->pc = RC_ADDR(0x00013d2au);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_13D32;

L_13D2C:
    /* 00013d2c   6  bset #1,(ffffffff,A5) */
    c->pc = RC_ADDR(0x00013d2cu);
    rc_step(c, m, 20);
    t3 = (c->a[5] - 0x1u);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_13D32:
    /* 00013d32   4  move.w (16,A5),D0 */
    c->pc = RC_ADDR(0x00013d32u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x16u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13D36:
    /* 00013d36   4  add.w (e,A5),D0 */
    c->pc = RC_ADDR(0x00013d36u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13D3A:
    /* 00013d3a   4  cmp.w (12,A5),D0 */
    c->pc = RC_ADDR(0x00013d3au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13D3E:
    /* 00013d3e   2  ble 00013d56 */
    c->pc = RC_ADDR(0x00013d3eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_13D56;

L_13D40:
    /* 00013d40   4  move.w (12,A5),D0 */
    c->pc = RC_ADDR(0x00013d40u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13D44:
    /* 00013d44   4  add.w (e,A5),D0 */
    c->pc = RC_ADDR(0x00013d44u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13D48:
    /* 00013d48   4  move.w (16,A5),D1 */
    c->pc = RC_ADDR(0x00013d48u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x16u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13D4C:
    /* 00013d4c   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00013d4cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13D4E:
    /* 00013d4e   2  bge 00013d56 */
    c->pc = RC_ADDR(0x00013d4eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_13D56;

L_13D50:
    /* 00013d50   6  bset #0,(ffffffff,A5) */
    c->pc = RC_ADDR(0x00013d50u);
    rc_step(c, m, 20);
    t3 = (c->a[5] - 0x1u);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_13D56:
    /* 00013d56   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00013d56u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13D5A:
    /* 00013d5a   2  unlk A5 */
    c->pc = RC_ADDR(0x00013d5au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_13D5C:
    /* 00013d5c   2  rts */
    c->pc = RC_ADDR(0x00013d5cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
