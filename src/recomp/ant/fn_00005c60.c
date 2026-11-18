/* fn_00005c60 - 132 byte(s), 39 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00005c60(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00005c60u): goto L_5C60;
    case RC_ADDR(0x00005c64u): goto L_5C64;
    case RC_ADDR(0x00005c68u): goto L_5C68;
    case RC_ADDR(0x00005c6cu): goto L_5C6C;
    case RC_ADDR(0x00005c70u): goto L_5C70;
    case RC_ADDR(0x00005c76u): goto L_5C76;
    case RC_ADDR(0x00005c7au): goto L_5C7A;
    case RC_ADDR(0x00005c7eu): goto L_5C7E;
    case RC_ADDR(0x00005c82u): goto L_5C82;
    case RC_ADDR(0x00005c88u): goto L_5C88;
    case RC_ADDR(0x00005c8cu): goto L_5C8C;
    case RC_ADDR(0x00005c90u): goto L_5C90;
    case RC_ADDR(0x00005c94u): goto L_5C94;
    case RC_ADDR(0x00005c96u): goto L_5C96;
    case RC_ADDR(0x00005c9au): goto L_5C9A;
    case RC_ADDR(0x00005c9cu): goto L_5C9C;
    case RC_ADDR(0x00005ca0u): goto L_5CA0;
    case RC_ADDR(0x00005ca2u): goto L_5CA2;
    case RC_ADDR(0x00005ca4u): goto L_5CA4;
    case RC_ADDR(0x00005ca8u): goto L_5CA8;
    case RC_ADDR(0x00005caau): goto L_5CAA;
    case RC_ADDR(0x00005caeu): goto L_5CAE;
    case RC_ADDR(0x00005cb0u): goto L_5CB0;
    case RC_ADDR(0x00005cb2u): goto L_5CB2;
    case RC_ADDR(0x00005cb8u): goto L_5CB8;
    case RC_ADDR(0x00005cbau): goto L_5CBA;
    case RC_ADDR(0x00005cbeu): goto L_5CBE;
    case RC_ADDR(0x00005cc0u): goto L_5CC0;
    case RC_ADDR(0x00005cc4u): goto L_5CC4;
    case RC_ADDR(0x00005cc6u): goto L_5CC6;
    case RC_ADDR(0x00005cc8u): goto L_5CC8;
    case RC_ADDR(0x00005cccu): goto L_5CCC;
    case RC_ADDR(0x00005cceu): goto L_5CCE;
    case RC_ADDR(0x00005cd2u): goto L_5CD2;
    case RC_ADDR(0x00005cd4u): goto L_5CD4;
    case RC_ADDR(0x00005cd6u): goto L_5CD6;
    case RC_ADDR(0x00005cdcu): goto L_5CDC;
    case RC_ADDR(0x00005ce0u): goto L_5CE0;
    case RC_ADDR(0x00005ce2u): goto L_5CE2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5C60:
    /* 00005c60   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00005c60u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_5C64:
    /* 00005c64   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00005c64u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5C68:
    /* 00005c68   4  muls.w #12,D0 */
    c->pc = RC_ADDR(0x00005c68u);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_5C6C:
    /* 00005c6c   4  lea (ffff85f4,A4),A0 */
    c->pc = RC_ADDR(0x00005c6cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a0cu);

L_5C70:
    /* 00005c70   6  move.b (0,A0,D0.w),(ffffffff,A5) */
    c->pc = RC_ADDR(0x00005c70u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_wr8(c, m, (c->a[5] - 0x1u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_5C76:
    /* 00005c76   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00005c76u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5C7A:
    /* 00005c7a   4  muls.w #12,D0 */
    c->pc = RC_ADDR(0x00005c7au);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_5C7E:
    /* 00005c7e   4  lea (ffff85f5,A4),A0 */
    c->pc = RC_ADDR(0x00005c7eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a0bu);

L_5C82:
    /* 00005c82   6  move.b (0,A0,D0.w),(fffffffe,A5) */
    c->pc = RC_ADDR(0x00005c82u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_wr8(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_5C88:
    /* 00005c88   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00005c88u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5C8C:
    /* 00005c8c   4  move.b (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00005c8cu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_5C90:
    /* 00005c90   4  cmp.b (ffffffff,A5),D0 */
    c->pc = RC_ADDR(0x00005c90u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    t1 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t1, t0);

L_5C94:
    /* 00005c94   2  bge 00005cba */
    c->pc = RC_ADDR(0x00005c94u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_5CBA;

L_5C96:
    /* 00005c96   4  move.b (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00005c96u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_5C9A:
    /* 00005c9a   2  ext.w D0 */
    c->pc = RC_ADDR(0x00005c9au);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_5C9C:
    /* 00005c9c   4  move.w (ffff83e6,A4),D1 */
    c->pc = RC_ADDR(0x00005c9cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5CA0:
    /* 00005ca0   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00005ca0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_5CA2:
    /* 00005ca2   2  blt 00005cb8 */
    c->pc = RC_ADDR(0x00005ca2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_5CB8;

L_5CA4:
    /* 00005ca4   4  move.b (ffffffff,A5),D0 */
    c->pc = RC_ADDR(0x00005ca4u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_5CA8:
    /* 00005ca8   2  ext.w D0 */
    c->pc = RC_ADDR(0x00005ca8u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_5CAA:
    /* 00005caa   4  move.w (ffff83e6,A4),D1 */
    c->pc = RC_ADDR(0x00005caau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5CAE:
    /* 00005cae   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00005caeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_5CB0:
    /* 00005cb0   2  bge 00005cb8 */
    c->pc = RC_ADDR(0x00005cb0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_5CB8;

L_5CB2:
    /* 00005cb2   6  move.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00005cb2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5CB8:
    /* 00005cb8   2  bra 00005cdc */
    c->pc = RC_ADDR(0x00005cb8u);
    rc_step(c, m, 10);
    goto L_5CDC;

L_5CBA:
    /* 00005cba   4  move.b (ffffffff,A5),D0 */
    c->pc = RC_ADDR(0x00005cbau);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_5CBE:
    /* 00005cbe   2  ext.w D0 */
    c->pc = RC_ADDR(0x00005cbeu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_5CC0:
    /* 00005cc0   4  move.w (ffff83e6,A4),D1 */
    c->pc = RC_ADDR(0x00005cc0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5CC4:
    /* 00005cc4   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00005cc4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_5CC6:
    /* 00005cc6   2  blt 00005cd6 */
    c->pc = RC_ADDR(0x00005cc6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_5CD6;

L_5CC8:
    /* 00005cc8   4  move.b (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00005cc8u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_5CCC:
    /* 00005ccc   2  ext.w D0 */
    c->pc = RC_ADDR(0x00005cccu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_5CCE:
    /* 00005cce   4  move.w (ffff83e6,A4),D1 */
    c->pc = RC_ADDR(0x00005cceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5CD2:
    /* 00005cd2   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00005cd2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_5CD4:
    /* 00005cd4   2  blt 00005cdc */
    c->pc = RC_ADDR(0x00005cd4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_5CDC;

L_5CD6:
    /* 00005cd6   6  move.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00005cd6u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5CDC:
    /* 00005cdc   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00005cdcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5CE0:
    /* 00005ce0   2  unlk A5 */
    c->pc = RC_ADDR(0x00005ce0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_5CE2:
    /* 00005ce2   2  rts */
    c->pc = RC_ADDR(0x00005ce2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
