/* fn_00011bf0 - 212 byte(s), 55 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00011bf0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00011bf0u): goto L_11BF0;
    case RC_ADDR(0x00011bf4u): goto L_11BF4;
    case RC_ADDR(0x00011bf6u): goto L_11BF6;
    case RC_ADDR(0x00011bf8u): goto L_11BF8;
    case RC_ADDR(0x00011bfcu): goto L_11BFC;
    case RC_ADDR(0x00011c02u): goto L_11C02;
    case RC_ADDR(0x00011c06u): goto L_11C06;
    case RC_ADDR(0x00011c08u): goto L_11C08;
    case RC_ADDR(0x00011c0cu): goto L_11C0C;
    case RC_ADDR(0x00011c12u): goto L_11C12;
    case RC_ADDR(0x00011c16u): goto L_11C16;
    case RC_ADDR(0x00011c18u): goto L_11C18;
    case RC_ADDR(0x00011c1cu): goto L_11C1C;
    case RC_ADDR(0x00011c22u): goto L_11C22;
    case RC_ADDR(0x00011c24u): goto L_11C24;
    case RC_ADDR(0x00011c26u): goto L_11C26;
    case RC_ADDR(0x00011c28u): goto L_11C28;
    case RC_ADDR(0x00011c2cu): goto L_11C2C;
    case RC_ADDR(0x00011c2eu): goto L_11C2E;
    case RC_ADDR(0x00011c32u): goto L_11C32;
    case RC_ADDR(0x00011c38u): goto L_11C38;
    case RC_ADDR(0x00011c3cu): goto L_11C3C;
    case RC_ADDR(0x00011c3eu): goto L_11C3E;
    case RC_ADDR(0x00011c42u): goto L_11C42;
    case RC_ADDR(0x00011c48u): goto L_11C48;
    case RC_ADDR(0x00011c4eu): goto L_11C4E;
    case RC_ADDR(0x00011c52u): goto L_11C52;
    case RC_ADDR(0x00011c54u): goto L_11C54;
    case RC_ADDR(0x00011c58u): goto L_11C58;
    case RC_ADDR(0x00011c5au): goto L_11C5A;
    case RC_ADDR(0x00011c60u): goto L_11C60;
    case RC_ADDR(0x00011c64u): goto L_11C64;
    case RC_ADDR(0x00011c68u): goto L_11C68;
    case RC_ADDR(0x00011c6au): goto L_11C6A;
    case RC_ADDR(0x00011c70u): goto L_11C70;
    case RC_ADDR(0x00011c74u): goto L_11C74;
    case RC_ADDR(0x00011c78u): goto L_11C78;
    case RC_ADDR(0x00011c7cu): goto L_11C7C;
    case RC_ADDR(0x00011c7eu): goto L_11C7E;
    case RC_ADDR(0x00011c84u): goto L_11C84;
    case RC_ADDR(0x00011c86u): goto L_11C86;
    case RC_ADDR(0x00011c8au): goto L_11C8A;
    case RC_ADDR(0x00011c8eu): goto L_11C8E;
    case RC_ADDR(0x00011c92u): goto L_11C92;
    case RC_ADDR(0x00011c94u): goto L_11C94;
    case RC_ADDR(0x00011c9au): goto L_11C9A;
    case RC_ADDR(0x00011c9eu): goto L_11C9E;
    case RC_ADDR(0x00011ca4u): goto L_11CA4;
    case RC_ADDR(0x00011ca8u): goto L_11CA8;
    case RC_ADDR(0x00011caeu): goto L_11CAE;
    case RC_ADDR(0x00011cb2u): goto L_11CB2;
    case RC_ADDR(0x00011cb8u): goto L_11CB8;
    case RC_ADDR(0x00011cbcu): goto L_11CBC;
    case RC_ADDR(0x00011cc0u): goto L_11CC0;
    case RC_ADDR(0x00011cc2u): goto L_11CC2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11BF0:
    /* 00011bf0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00011bf0u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_11BF4:
    /* 00011bf4   2  clr.w D2 */
    c->pc = RC_ADDR(0x00011bf4u);
    rc_d_set(c, 2, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11BF6:
    /* 00011bf6   2  clr.w D3 */
    c->pc = RC_ADDR(0x00011bf6u);
    rc_d_set(c, 3, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11BF8:
    /* 00011bf8   4  clr.w (ffffb030,A4) */
    c->pc = RC_ADDR(0x00011bf8u);
    rc_wr16(c, m, (c->a[4] - 0x4fd0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11BFC:
    /* 00011bfc   6  move.w (00dff00c).l,D0 */
    c->pc = RC_ADDR(0x00011bfcu);
    t0 = rc_rd16(c, m, RC_ADDR(0x00dff00cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11C02:
    /* 00011c02   4  btst #1,D0 */
    c->pc = RC_ADDR(0x00011c02u);
    t4 = 0x00000001u;
    t0 = rc_d_get(c, 0, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_11C06:
    /* 00011c06   2  beq 00011c12 */
    c->pc = RC_ADDR(0x00011c06u);
    if (rc_cond(c, 7)) goto L_11C12;

L_11C08:
    /* 00011c08   4  move.w #1,D2 */
    c->pc = RC_ADDR(0x00011c08u);
    t0 = 0x00000001u;
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11C0C:
    /* 00011c0c   6  bset #0,(ffffb031,A4) */
    c->pc = RC_ADDR(0x00011c0cu);
    t4 = 0x00000000u;
    t3 = (c->a[4] - 0x4fcfu);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_11C12:
    /* 00011c12   4  btst #9,D0 */
    c->pc = RC_ADDR(0x00011c12u);
    t4 = 0x00000009u;
    t0 = rc_d_get(c, 0, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_11C16:
    /* 00011c16   2  beq 00011c22 */
    c->pc = RC_ADDR(0x00011c16u);
    if (rc_cond(c, 7)) goto L_11C22;

L_11C18:
    /* 00011c18   4  move.w #ffff,D2 */
    c->pc = RC_ADDR(0x00011c18u);
    t0 = 0x0000ffffu;
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11C1C:
    /* 00011c1c   6  bset #1,(ffffb031,A4) */
    c->pc = RC_ADDR(0x00011c1cu);
    t4 = 0x00000001u;
    t3 = (c->a[4] - 0x4fcfu);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_11C22:
    /* 00011c22   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x00011c22u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11C24:
    /* 00011c24   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x00011c24u);
    c->d[1] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W);

L_11C26:
    /* 00011c26   2  eor.w D1,D0 */
    c->pc = RC_ADDR(0x00011c26u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 ^ rc_d_get(c, 1, RC_W);
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_11C28:
    /* 00011c28   4  btst #0,D0 */
    c->pc = RC_ADDR(0x00011c28u);
    t4 = 0x00000000u;
    t0 = rc_d_get(c, 0, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_11C2C:
    /* 00011c2c   2  beq 00011c38 */
    c->pc = RC_ADDR(0x00011c2cu);
    if (rc_cond(c, 7)) goto L_11C38;

L_11C2E:
    /* 00011c2e   4  move.w #1,D3 */
    c->pc = RC_ADDR(0x00011c2eu);
    t0 = 0x00000001u;
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11C32:
    /* 00011c32   6  bset #2,(ffffb031,A4) */
    c->pc = RC_ADDR(0x00011c32u);
    t4 = 0x00000002u;
    t3 = (c->a[4] - 0x4fcfu);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_11C38:
    /* 00011c38   4  btst #8,D0 */
    c->pc = RC_ADDR(0x00011c38u);
    t4 = 0x00000008u;
    t0 = rc_d_get(c, 0, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_11C3C:
    /* 00011c3c   2  beq 00011c48 */
    c->pc = RC_ADDR(0x00011c3cu);
    if (rc_cond(c, 7)) goto L_11C48;

L_11C3E:
    /* 00011c3e   4  move.w #ffff,D3 */
    c->pc = RC_ADDR(0x00011c3eu);
    t0 = 0x0000ffffu;
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11C42:
    /* 00011c42   6  bset #3,(ffffb031,A4) */
    c->pc = RC_ADDR(0x00011c42u);
    t4 = 0x00000003u;
    t3 = (c->a[4] - 0x4fcfu);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_11C48:
    /* 00011c48   6  move.b (00bfe001).l,D0 */
    c->pc = RC_ADDR(0x00011c48u);
    t0 = rc_rd8(c, m, RC_ADDR(0x00bfe001u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_11C4E:
    /* 00011c4e   4  btst #7,D0 */
    c->pc = RC_ADDR(0x00011c4eu);
    t4 = 0x00000007u;
    t0 = rc_d_get(c, 0, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_11C52:
    /* 00011c52   2  beq 00011c6a */
    c->pc = RC_ADDR(0x00011c52u);
    if (rc_cond(c, 7)) goto L_11C6A;

L_11C54:
    /* 00011c54   4  tst.w (ffffb02e,A4) */
    c->pc = RC_ADDR(0x00011c54u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd2u));
    rc_set_nzvc(c, t0, RC_W);

L_11C58:
    /* 00011c58   2  beq 00011c60 */
    c->pc = RC_ADDR(0x00011c58u);
    if (rc_cond(c, 7)) goto L_11C60;

L_11C5A:
    /* 00011c5a   6  move.w #1,(ffffb038,A4) */
    c->pc = RC_ADDR(0x00011c5au);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x4fc8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11C60:
    /* 00011c60   4  clr.w (ffffb02e,A4) */
    c->pc = RC_ADDR(0x00011c60u);
    rc_wr16(c, m, (c->a[4] - 0x4fd2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11C64:
    /* 00011c64   4  clr.w (ffffb036,A4) */
    c->pc = RC_ADDR(0x00011c64u);
    rc_wr16(c, m, (c->a[4] - 0x4fcau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11C68:
    /* 00011c68   2  bra 00011c74 */
    c->pc = RC_ADDR(0x00011c68u);
    goto L_11C74;

L_11C6A:
    /* 00011c6a   6  move.w #1,(ffffb02e,A4) */
    c->pc = RC_ADDR(0x00011c6au);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x4fd2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11C70:
    /* 00011c70   4  addq.w #1,(ffffb036,A4) */
    c->pc = RC_ADDR(0x00011c70u);
    t3 = (c->a[4] - 0x4fcau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_11C74:
    /* 00011c74   4  clr.w (ffffb032,A4) */
    c->pc = RC_ADDR(0x00011c74u);
    rc_wr16(c, m, (c->a[4] - 0x4fceu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11C78:
    /* 00011c78   4  btst #6,D0 */
    c->pc = RC_ADDR(0x00011c78u);
    t4 = 0x00000006u;
    t0 = rc_d_get(c, 0, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_11C7C:
    /* 00011c7c   2  bne 00011c84 */
    c->pc = RC_ADDR(0x00011c7cu);
    if (rc_cond(c, 6)) goto L_11C84;

L_11C7E:
    /* 00011c7e   6  move.w #1,(ffffb032,A4) */
    c->pc = RC_ADDR(0x00011c7eu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x4fceu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11C84:
    /* 00011c84   2  clr.w D0 */
    c->pc = RC_ADDR(0x00011c84u);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11C86:
    /* 00011c86   4  move.w D2,(ffffb02a,A4) */
    c->pc = RC_ADDR(0x00011c86u);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x4fd6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11C8A:
    /* 00011c8a   4  move.w D3,(ffffb02c,A4) */
    c->pc = RC_ADDR(0x00011c8au);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x4fd4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11C8E:
    /* 00011c8e   4  tst.w (ffffb034,A4) */
    c->pc = RC_ADDR(0x00011c8eu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fccu));
    rc_set_nzvc(c, t0, RC_W);

L_11C92:
    /* 00011c92   2  beq 00011cc0 */
    c->pc = RC_ADDR(0x00011c92u);
    if (rc_cond(c, 7)) goto L_11CC0;

L_11C94:
    /* 00011c94   6  move.w (ffffb02a,A4),(df2,A4) */
    c->pc = RC_ADDR(0x00011c94u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd6u));
    rc_wr16(c, m, (c->a[4] + 0xdf2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11C9A:
    /* 00011c9a   4  clr.w (ffffb02a,A4) */
    c->pc = RC_ADDR(0x00011c9au);
    rc_wr16(c, m, (c->a[4] - 0x4fd6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11C9E:
    /* 00011c9e   6  move.w (ffffb02c,A4),(df4,A4) */
    c->pc = RC_ADDR(0x00011c9eu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd4u));
    rc_wr16(c, m, (c->a[4] + 0xdf4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11CA4:
    /* 00011ca4   4  clr.w (ffffb02c,A4) */
    c->pc = RC_ADDR(0x00011ca4u);
    rc_wr16(c, m, (c->a[4] - 0x4fd4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11CA8:
    /* 00011ca8   6  move.w (ffffb030,A4),(df6,A4) */
    c->pc = RC_ADDR(0x00011ca8u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd0u));
    rc_wr16(c, m, (c->a[4] + 0xdf6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11CAE:
    /* 00011cae   4  clr.w (ffffb030,A4) */
    c->pc = RC_ADDR(0x00011caeu);
    rc_wr16(c, m, (c->a[4] - 0x4fd0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11CB2:
    /* 00011cb2   6  move.w (ffffb02e,A4),(df8,A4) */
    c->pc = RC_ADDR(0x00011cb2u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd2u));
    rc_wr16(c, m, (c->a[4] + 0xdf8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11CB8:
    /* 00011cb8   4  clr.w (ffffb02e,A4) */
    c->pc = RC_ADDR(0x00011cb8u);
    rc_wr16(c, m, (c->a[4] - 0x4fd2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11CBC:
    /* 00011cbc   4  clr.w (ffffb038,A4) */
    c->pc = RC_ADDR(0x00011cbcu);
    rc_wr16(c, m, (c->a[4] - 0x4fc8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11CC0:
    /* 00011cc0   2  unlk A5 */
    c->pc = RC_ADDR(0x00011cc0u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_11CC2:
    /* 00011cc2   2  rts */
    c->pc = RC_ADDR(0x00011cc2u);
    rc_ret(c, m);
    return;

}
