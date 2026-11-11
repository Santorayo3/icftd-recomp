/* fn_00013c56 - 116 byte(s), 35 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00013c56(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00013c56u): goto L_13C56;
    case RC_ADDR(0x00013c5au): goto L_13C5A;
    case RC_ADDR(0x00013c5eu): goto L_13C5E;
    case RC_ADDR(0x00013c62u): goto L_13C62;
    case RC_ADDR(0x00013c66u): goto L_13C66;
    case RC_ADDR(0x00013c6cu): goto L_13C6C;
    case RC_ADDR(0x00013c6eu): goto L_13C6E;
    case RC_ADDR(0x00013c72u): goto L_13C72;
    case RC_ADDR(0x00013c76u): goto L_13C76;
    case RC_ADDR(0x00013c7au): goto L_13C7A;
    case RC_ADDR(0x00013c7cu): goto L_13C7C;
    case RC_ADDR(0x00013c7eu): goto L_13C7E;
    case RC_ADDR(0x00013c80u): goto L_13C80;
    case RC_ADDR(0x00013c84u): goto L_13C84;
    case RC_ADDR(0x00013c88u): goto L_13C88;
    case RC_ADDR(0x00013c8cu): goto L_13C8C;
    case RC_ADDR(0x00013c8eu): goto L_13C8E;
    case RC_ADDR(0x00013c90u): goto L_13C90;
    case RC_ADDR(0x00013c94u): goto L_13C94;
    case RC_ADDR(0x00013c98u): goto L_13C98;
    case RC_ADDR(0x00013c9cu): goto L_13C9C;
    case RC_ADDR(0x00013c9eu): goto L_13C9E;
    case RC_ADDR(0x00013ca2u): goto L_13CA2;
    case RC_ADDR(0x00013ca4u): goto L_13CA4;
    case RC_ADDR(0x00013ca6u): goto L_13CA6;
    case RC_ADDR(0x00013caau): goto L_13CAA;
    case RC_ADDR(0x00013caeu): goto L_13CAE;
    case RC_ADDR(0x00013cb2u): goto L_13CB2;
    case RC_ADDR(0x00013cb4u): goto L_13CB4;
    case RC_ADDR(0x00013cb8u): goto L_13CB8;
    case RC_ADDR(0x00013cbau): goto L_13CBA;
    case RC_ADDR(0x00013cbeu): goto L_13CBE;
    case RC_ADDR(0x00013cc4u): goto L_13CC4;
    case RC_ADDR(0x00013cc6u): goto L_13CC6;
    case RC_ADDR(0x00013cc8u): goto L_13CC8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13C56:
    /* 00013c56   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00013c56u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_13C5A:
    /* 00013c5a   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00013c5au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13C5E:
    /* 00013c5e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00013c5eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C62:
    /* 00013c62   4  lea (fffffd2c,A4),A0 */
    c->pc = RC_ADDR(0x00013c62u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2d4u);

L_13C66:
    /* 00013c66   6  cmpi.b #ff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013c66u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_B, t0, 0x000000ffu);

L_13C6C:
    /* 00013c6c   2  ble 00013cba */
    c->pc = RC_ADDR(0x00013c6cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_13CBA;

L_13C6E:
    /* 00013c6e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00013c6eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C72:
    /* 00013c72   4  lea (fffffd2c,A4),A0 */
    c->pc = RC_ADDR(0x00013c72u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2d4u);

L_13C76:
    /* 00013c76   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00013c76u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_13C7A:
    /* 00013c7a   2  ext.w D1 */
    c->pc = RC_ADDR(0x00013c7au);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_13C7C:
    /* 00013c7c   2  ext.l D1 */
    c->pc = RC_ADDR(0x00013c7cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_13C7E:
    /* 00013c7e   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00013c7eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_13C80:
    /* 00013c80   4  lea (fffffc94,A4),A0 */
    c->pc = RC_ADDR(0x00013c80u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x36cu);

L_13C84:
    /* 00013c84   4  move.l (0,A0,D1.w),-(A7) */
    c->pc = RC_ADDR(0x00013c84u);
    rc_step(c, m, 26);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13C88:
    /* 00013c88   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00013c88u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C8C:
    /* 00013c8c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013c8cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13C8E:
    /* 00013c8e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00013c8eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13C90:
    /* 00013c90   4  lea (fffffcf0,A4),A0 */
    c->pc = RC_ADDR(0x00013c90u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x310u);

L_13C94:
    /* 00013c94   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00013c94u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C98:
    /* 00013c98   4  sub.w (dfc,A4),D1 */
    c->pc = RC_ADDR(0x00013c98u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_13C9C:
    /* 00013c9c   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x00013c9cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C9E:
    /* 00013c9e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00013c9eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13CA2:
    /* 00013ca2   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013ca2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13CA4:
    /* 00013ca4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00013ca4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13CA6:
    /* 00013ca6   4  lea (fffffcb4,A4),A0 */
    c->pc = RC_ADDR(0x00013ca6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x34cu);

L_13CAA:
    /* 00013caa   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00013caau);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13CAE:
    /* 00013cae   4  sub.w (dfa,A4),D1 */
    c->pc = RC_ADDR(0x00013caeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfau));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_13CB2:
    /* 00013cb2   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x00013cb2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13CB4:
    /* 00013cb4   4  jsr (ffff8158,A4) */
    c->pc = RC_ADDR(0x00013cb4u);
    rc_step(c, m, 18);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x00013cb8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021baeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011208u);
    return;

L_13CB8:
    /* 00013cb8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00013cb8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_13CBA:
    /* 00013cba   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00013cbau);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13CBE:
    /* 00013cbe   6  cmpi.w #1e,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00013cbeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000001eu);

L_13CC4:
    /* 00013cc4   2  blt 00013c5e */
    c->pc = RC_ADDR(0x00013cc4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_13C5E; }

L_13CC6:
    /* 00013cc6   2  unlk A5 */
    c->pc = RC_ADDR(0x00013cc6u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_13CC8:
    /* 00013cc8   2  rts */
    c->pc = RC_ADDR(0x00013cc8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
