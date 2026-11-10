/* fn_00001c20 - 198 byte(s), 57 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00001c20(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00001c20u): goto L_1C20;
    case RC_ADDR(0x00001c24u): goto L_1C24;
    case RC_ADDR(0x00001c26u): goto L_1C26;
    case RC_ADDR(0x00001c2cu): goto L_1C2C;
    case RC_ADDR(0x00001c2eu): goto L_1C2E;
    case RC_ADDR(0x00001c32u): goto L_1C32;
    case RC_ADDR(0x00001c36u): goto L_1C36;
    case RC_ADDR(0x00001c38u): goto L_1C38;
    case RC_ADDR(0x00001c3au): goto L_1C3A;
    case RC_ADDR(0x00001c3cu): goto L_1C3C;
    case RC_ADDR(0x00001c40u): goto L_1C40;
    case RC_ADDR(0x00001c44u): goto L_1C44;
    case RC_ADDR(0x00001c46u): goto L_1C46;
    case RC_ADDR(0x00001c48u): goto L_1C48;
    case RC_ADDR(0x00001c4au): goto L_1C4A;
    case RC_ADDR(0x00001c4eu): goto L_1C4E;
    case RC_ADDR(0x00001c52u): goto L_1C52;
    case RC_ADDR(0x00001c54u): goto L_1C54;
    case RC_ADDR(0x00001c58u): goto L_1C58;
    case RC_ADDR(0x00001c5cu): goto L_1C5C;
    case RC_ADDR(0x00001c5eu): goto L_1C5E;
    case RC_ADDR(0x00001c62u): goto L_1C62;
    case RC_ADDR(0x00001c66u): goto L_1C66;
    case RC_ADDR(0x00001c6au): goto L_1C6A;
    case RC_ADDR(0x00001c6cu): goto L_1C6C;
    case RC_ADDR(0x00001c70u): goto L_1C70;
    case RC_ADDR(0x00001c76u): goto L_1C76;
    case RC_ADDR(0x00001c7au): goto L_1C7A;
    case RC_ADDR(0x00001c7eu): goto L_1C7E;
    case RC_ADDR(0x00001c82u): goto L_1C82;
    case RC_ADDR(0x00001c84u): goto L_1C84;
    case RC_ADDR(0x00001c88u): goto L_1C88;
    case RC_ADDR(0x00001c8eu): goto L_1C8E;
    case RC_ADDR(0x00001c90u): goto L_1C90;
    case RC_ADDR(0x00001c94u): goto L_1C94;
    case RC_ADDR(0x00001c98u): goto L_1C98;
    case RC_ADDR(0x00001c9cu): goto L_1C9C;
    case RC_ADDR(0x00001ca0u): goto L_1CA0;
    case RC_ADDR(0x00001ca4u): goto L_1CA4;
    case RC_ADDR(0x00001ca6u): goto L_1CA6;
    case RC_ADDR(0x00001caau): goto L_1CAA;
    case RC_ADDR(0x00001caeu): goto L_1CAE;
    case RC_ADDR(0x00001cb2u): goto L_1CB2;
    case RC_ADDR(0x00001cb4u): goto L_1CB4;
    case RC_ADDR(0x00001cb8u): goto L_1CB8;
    case RC_ADDR(0x00001cbcu): goto L_1CBC;
    case RC_ADDR(0x00001cc0u): goto L_1CC0;
    case RC_ADDR(0x00001cc2u): goto L_1CC2;
    case RC_ADDR(0x00001cc8u): goto L_1CC8;
    case RC_ADDR(0x00001cccu): goto L_1CCC;
    case RC_ADDR(0x00001cceu): goto L_1CCE;
    case RC_ADDR(0x00001cd2u): goto L_1CD2;
    case RC_ADDR(0x00001cd6u): goto L_1CD6;
    case RC_ADDR(0x00001cdau): goto L_1CDA;
    case RC_ADDR(0x00001ce0u): goto L_1CE0;
    case RC_ADDR(0x00001ce2u): goto L_1CE2;
    case RC_ADDR(0x00001ce4u): goto L_1CE4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1C20:
    /* 00001c20   4  ori.b #e4,(A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c20u);
    t3 = c->a[5];
    t1 = rc_rd8(c, m, t3);
    t2 = t1 | 0x000000e4u;
    rc_wr8(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_B);

L_1C24:
    /* 00001c24   2  bne 00001c5e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c24u);
    if (rc_cond(c, 6)) goto L_1C5E;

L_1C26:
    /* 00001c26   6  cmpi.w #8,(ffff83c8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c26u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_1C2C:
    /* 00001c2c   2  bne 00001c5e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c2cu);
    if (rc_cond(c, 6)) goto L_1C5E;

L_1C2E:
    /* 00001c2e   4  move.w #28,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c2eu);
    t0 = 0x00000028u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C32:
    /* 00001c32   4  jsr (ffff8086,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c32u);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x00001c36u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000711cu);
    return;

L_1C36:
    /* 00001c36   2  addq.w #2,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c36u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1C38:
    /* 00001c38   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c38u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1C3A:
    /* 00001c3a   2  beq 00001c5e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c3au);
    if (rc_cond(c, 7)) goto L_1C5E;

L_1C3C:
    /* 00001c3c   4  move.w #e9,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c3cu);
    t0 = 0x000000e9u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C40:
    /* 00001c40   4  jsr (ffff8086,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c40u);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x00001c44u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000711cu);
    return;

L_1C44:
    /* 00001c44   2  addq.w #2,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c44u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1C46:
    /* 00001c46   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c46u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1C48:
    /* 00001c48   2  bne 00001c5e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c48u);
    if (rc_cond(c, 6)) goto L_1C5E;

L_1C4A:
    /* 00001c4a   4  move.w #15,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c4au);
    t0 = 0x00000015u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C4E:
    /* 00001c4e   4  jsr (ffff8080,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c4eu);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x00001c52u));
    rc_depth++;
    c->pc = RC_ADDR(0x000070cau);
    return;

L_1C52:
    /* 00001c52   2  addq.w #2,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c52u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1C54:
    /* 00001c54   4  move.w #f7,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c54u);
    t0 = 0x000000f7u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C58:
    /* 00001c58   4  jsr (ffff8080,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c58u);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x00001c5cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000070cau);
    return;

L_1C5C:
    /* 00001c5c   2  addq.w #2,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c5cu);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1C5E:
    /* 00001c5e   4  move.w #1,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c5eu);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C62:
    /* 00001c62   4  move.l (ffffef9c,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c62u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1064u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C66:
    /* 00001c66   4  jsr (00001974) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c66u);
    rc_push32(c, m, RC_ADDR(0x00001c6au));
    rc_depth++;
    c->pc = RC_ADDR(0x00001974u);
    return;

L_1C6A:
    /* 00001c6a   2  addq.w #6,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c6au);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1C6C:
    /* 00001c6c   4  move.w D0,(fffffff6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c6cu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C70:
    /* 00001c70   6  cmpi.w #ff9a,(fffffff6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c70u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x0000ff9au);

L_1C76:
    /* 00001c76   4  beq 00001dba */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c76u);
    if (rc_cond(c, 7))
    {
        c->pc = RC_ADDR(0x00001dbau);
        return;
    }

L_1C7A:
    /* 00001c7a   4  move.w (fffffff6,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c7au);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C7E:
    /* 00001c7e   4  jsr (00001f44) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c7eu);
    rc_push32(c, m, RC_ADDR(0x00001c82u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001f44u);
    return;

L_1C82:
    /* 00001c82   2  addq.w #2,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c82u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1C84:
    /* 00001c84   4  move.l D0,(fffffff8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c84u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C88:
    /* 00001c88   6  cmpi.w #19,(ffffefe4,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c88u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000019u);

L_1C8E:
    /* 00001c8e   2  bne 00001c9c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c8eu);
    if (rc_cond(c, 6)) goto L_1C9C;

L_1C90:
    /* 00001c90   4  movea.l (fffffff8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c90u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_1C94:
    /* 00001c94   4  tst.b (1,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c94u);
    t0 = rc_rd8(c, m, (c->a[0] + 0x1u));
    rc_set_nzvc(c, t0, RC_B);

L_1C98:
    /* 00001c98   4  beq 00001dce */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c98u);
    if (rc_cond(c, 7))
    {
        c->pc = RC_ADDR(0x00001dceu);
        return;
    }

L_1C9C:
    /* 00001c9c   4  movea.l (fffffff8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001c9cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_1CA0:
    /* 00001ca0   4  move.b (24,A0),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001ca0u);
    t0 = rc_rd8(c, m, (c->a[0] + 0x24u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1CA4:
    /* 00001ca4   2  ext.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001ca4u);
    rc_ext_w(c, 0);

L_1CA6:
    /* 00001ca6   4  move.w D0,(ffffcf50,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001ca6u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x30b0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CAA:
    /* 00001caa   4  movea.l (fffffff8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001caau);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_1CAE:
    /* 00001cae   4  move.b (25,A0),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001caeu);
    t0 = rc_rd8(c, m, (c->a[0] + 0x25u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1CB2:
    /* 00001cb2   2  ext.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001cb2u);
    rc_ext_w(c, 0);

L_1CB4:
    /* 00001cb4   4  move.w D0,(ffffcf52,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001cb4u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x30aeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CB8:
    /* 00001cb8   4  clr.w (ffffcf4e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001cb8u);
    rc_wr16(c, m, (c->a[4] - 0x30b2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1CBC:
    /* 00001cbc   4  tst.w (ffff8b54,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001cbcu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x74acu));
    rc_set_nzvc(c, t0, RC_W);

L_1CC0:
    /* 00001cc0   2  beq 00001cd2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001cc0u);
    if (rc_cond(c, 7)) goto L_1CD2;

L_1CC2:
    /* 00001cc2   6  move.w #1,(ffffcf4e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001cc2u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x30b2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CC8:
    /* 00001cc8   4  move.w (ffff83cc,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001cc8u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c34u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CCC:
    /* 00001ccc   2  addq.w #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001cccu);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1CCE:
    /* 00001cce   4  move.w D0,(ffffcf52,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001cceu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x30aeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CD2:
    /* 00001cd2   4  clr.w (ffff8b54,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001cd2u);
    rc_wr16(c, m, (c->a[4] - 0x74acu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1CD6:
    /* 00001cd6   4  clr.w (ffff83d6,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001cd6u);
    rc_wr16(c, m, (c->a[4] - 0x7c2au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1CDA:
    /* 00001cda   6  cmpi.w #ff9b,(fffffff6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001cdau);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x0000ff9bu);

L_1CE0:
    /* 00001ce0   2  bne 00001ce6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001ce0u);
    if (rc_cond(c, 6))
    {
        c->pc = RC_ADDR(0x00001ce6u);
        return;
    }

L_1CE2:
    /* 00001ce2   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001ce2u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1CE4:
    /* 00001ce4   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001ce4u);
    rc_ret(c, m);
    return;

}
