/* fn_00013c56 - 116 byte(s), 35 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00013c56(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x00013c56u: goto L_13C56;
    case 0x00013c5au: goto L_13C5A;
    case 0x00013c5eu: goto L_13C5E;
    case 0x00013c62u: goto L_13C62;
    case 0x00013c66u: goto L_13C66;
    case 0x00013c6cu: goto L_13C6C;
    case 0x00013c6eu: goto L_13C6E;
    case 0x00013c72u: goto L_13C72;
    case 0x00013c76u: goto L_13C76;
    case 0x00013c7au: goto L_13C7A;
    case 0x00013c7cu: goto L_13C7C;
    case 0x00013c7eu: goto L_13C7E;
    case 0x00013c80u: goto L_13C80;
    case 0x00013c84u: goto L_13C84;
    case 0x00013c88u: goto L_13C88;
    case 0x00013c8cu: goto L_13C8C;
    case 0x00013c8eu: goto L_13C8E;
    case 0x00013c90u: goto L_13C90;
    case 0x00013c94u: goto L_13C94;
    case 0x00013c98u: goto L_13C98;
    case 0x00013c9cu: goto L_13C9C;
    case 0x00013c9eu: goto L_13C9E;
    case 0x00013ca2u: goto L_13CA2;
    case 0x00013ca4u: goto L_13CA4;
    case 0x00013ca6u: goto L_13CA6;
    case 0x00013caau: goto L_13CAA;
    case 0x00013caeu: goto L_13CAE;
    case 0x00013cb2u: goto L_13CB2;
    case 0x00013cb4u: goto L_13CB4;
    case 0x00013cb8u: goto L_13CB8;
    case 0x00013cbau: goto L_13CBA;
    case 0x00013cbeu: goto L_13CBE;
    case 0x00013cc4u: goto L_13CC4;
    case 0x00013cc6u: goto L_13CC6;
    case 0x00013cc8u: goto L_13CC8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13C56:
    /* 00013c56   4  link.w A5,#fffffffe */
    c->pc = 0x00013c56u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_13C5A:
    /* 00013c5a   4  clr.w (fffffffe,A5) */
    c->pc = 0x00013c5au;
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13C5E:
    /* 00013c5e   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x00013c5eu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C62:
    /* 00013c62   4  lea (fffffd2c,A4),A0 */
    c->pc = 0x00013c62u;
    c->a[0] = (c->a[4] - 0x2d4u);

L_13C66:
    /* 00013c66   6  cmpi.b #ff,(0,A0,D0.w) */
    c->pc = 0x00013c66u;
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_B, t0, 0x000000ffu);

L_13C6C:
    /* 00013c6c   2  ble 00013cba */
    c->pc = 0x00013c6cu;
    if (rc_cond(c, 15)) goto L_13CBA;

L_13C6E:
    /* 00013c6e   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x00013c6eu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C72:
    /* 00013c72   4  lea (fffffd2c,A4),A0 */
    c->pc = 0x00013c72u;
    c->a[0] = (c->a[4] - 0x2d4u);

L_13C76:
    /* 00013c76   4  move.b (0,A0,D0.w),D1 */
    c->pc = 0x00013c76u;
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_13C7A:
    /* 00013c7a   2  ext.w D1 */
    c->pc = 0x00013c7au;
    rc_ext_w(c, 1);

L_13C7C:
    /* 00013c7c   2  ext.l D1 */
    c->pc = 0x00013c7cu;
    rc_ext_l(c, 1);

L_13C7E:
    /* 00013c7e   2  asl.l #2,D1 */
    c->pc = 0x00013c7eu;
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_13C80:
    /* 00013c80   4  lea (fffffc94,A4),A0 */
    c->pc = 0x00013c80u;
    c->a[0] = (c->a[4] - 0x36cu);

L_13C84:
    /* 00013c84   4  move.l (0,A0,D1.w),-(A7) */
    c->pc = 0x00013c84u;
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13C88:
    /* 00013c88   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x00013c88u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C8C:
    /* 00013c8c   2  ext.l D0 */
    c->pc = 0x00013c8cu;
    rc_ext_l(c, 0);

L_13C8E:
    /* 00013c8e   2  asl.l #1,D0 */
    c->pc = 0x00013c8eu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_13C90:
    /* 00013c90   4  lea (fffffcf0,A4),A0 */
    c->pc = 0x00013c90u;
    c->a[0] = (c->a[4] - 0x310u);

L_13C94:
    /* 00013c94   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x00013c94u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C98:
    /* 00013c98   4  sub.w (dfc,A4),D1 */
    c->pc = 0x00013c98u;
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_13C9C:
    /* 00013c9c   2  move.w D1,-(A7) */
    c->pc = 0x00013c9cu;
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C9E:
    /* 00013c9e   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x00013c9eu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13CA2:
    /* 00013ca2   2  ext.l D0 */
    c->pc = 0x00013ca2u;
    rc_ext_l(c, 0);

L_13CA4:
    /* 00013ca4   2  asl.l #1,D0 */
    c->pc = 0x00013ca4u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_13CA6:
    /* 00013ca6   4  lea (fffffcb4,A4),A0 */
    c->pc = 0x00013ca6u;
    c->a[0] = (c->a[4] - 0x34cu);

L_13CAA:
    /* 00013caa   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x00013caau;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13CAE:
    /* 00013cae   4  sub.w (dfa,A4),D1 */
    c->pc = 0x00013caeu;
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfau));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_13CB2:
    /* 00013cb2   2  move.w D1,-(A7) */
    c->pc = 0x00013cb2u;
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13CB4:
    /* 00013cb4   4  jsr (ffff8158,A4) */
    c->pc = 0x00013cb4u;
    /* vector 57 */
    rc_push32(c, m, 0x00013cb8u);
    rc_depth++;
    c->pc = 0x00011208u;
    return;

L_13CB8:
    /* 00013cb8   2  addq.w #8,A7 */
    c->pc = 0x00013cb8u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_13CBA:
    /* 00013cba   4  addq.w #1,(fffffffe,A5) */
    c->pc = 0x00013cbau;
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13CBE:
    /* 00013cbe   6  cmpi.w #1e,(fffffffe,A5) */
    c->pc = 0x00013cbeu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000001eu);

L_13CC4:
    /* 00013cc4   2  blt 00013c5e */
    c->pc = 0x00013cc4u;
    if (rc_cond(c, 13)) { rc_tick(); goto L_13C5E; }

L_13CC6:
    /* 00013cc6   2  unlk A5 */
    c->pc = 0x00013cc6u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_13CC8:
    /* 00013cc8   2  rts */
    c->pc = 0x00013cc8u;
    rc_ret(c, m);
    return;

}
