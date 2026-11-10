/* fn_00017b22 - 116 byte(s), 32 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00017b22(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case 0x00017b22u: goto L_17B22;
    case 0x00017b26u: goto L_17B26;
    case 0x00017b2au: goto L_17B2A;
    case 0x00017b2eu: goto L_17B2E;
    case 0x00017b32u: goto L_17B32;
    case 0x00017b36u: goto L_17B36;
    case 0x00017b3au: goto L_17B3A;
    case 0x00017b3eu: goto L_17B3E;
    case 0x00017b44u: goto L_17B44;
    case 0x00017b4au: goto L_17B4A;
    case 0x00017b4eu: goto L_17B4E;
    case 0x00017b52u: goto L_17B52;
    case 0x00017b58u: goto L_17B58;
    case 0x00017b5cu: goto L_17B5C;
    case 0x00017b60u: goto L_17B60;
    case 0x00017b62u: goto L_17B62;
    case 0x00017b64u: goto L_17B64;
    case 0x00017b66u: goto L_17B66;
    case 0x00017b6cu: goto L_17B6C;
    case 0x00017b6eu: goto L_17B6E;
    case 0x00017b72u: goto L_17B72;
    case 0x00017b76u: goto L_17B76;
    case 0x00017b78u: goto L_17B78;
    case 0x00017b7au: goto L_17B7A;
    case 0x00017b7eu: goto L_17B7E;
    case 0x00017b82u: goto L_17B82;
    case 0x00017b86u: goto L_17B86;
    case 0x00017b88u: goto L_17B88;
    case 0x00017b8au: goto L_17B8A;
    case 0x00017b8cu: goto L_17B8C;
    case 0x00017b92u: goto L_17B92;
    case 0x00017b94u: goto L_17B94;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_17B22:
    /* 00017b22   4  link.w A5,#0 */
    c->pc = 0x00017b22u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_17B26:
    /* 00017b26   4  pea (1398,A4) */
    c->pc = 0x00017b26u;
    rc_push32(c, m, (c->a[4] + 0x1398u));

L_17B2A:
    /* 00017b2a   4  move.w #8,-(A7) */
    c->pc = 0x00017b2au;
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B2E:
    /* 00017b2e   4  pea (00017b96) */
    c->pc = 0x00017b2eu;
    rc_push32(c, m, 0x00017b96u);

L_17B32:
    /* 00017b32   4  jsr (ffff817c,A4) */
    c->pc = 0x00017b32u;
    /* vector 63 */
    rc_push32(c, m, 0x00017b36u);
    rc_depth++;
    c->pc = 0x00016c00u;
    return;

L_17B36:
    /* 00017b36   4  lea (a,A7),A7 */
    c->pc = 0x00017b36u;
    c->a[7] = (c->a[7] + 0xau);

L_17B3A:
    /* 00017b3a   4  clr.w (13bc,A4) */
    c->pc = 0x00017b3au;
    rc_wr16(c, m, (c->a[4] + 0x13bcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17B3E:
    /* 00017b3e   6  move.w #14,(13c0,A4) */
    c->pc = 0x00017b3eu;
    t0 = 0x00000014u;
    rc_wr16(c, m, (c->a[4] + 0x13c0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B44:
    /* 00017b44   6  move.w #2,(13be,A4) */
    c->pc = 0x00017b44u;
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x13beu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B4A:
    /* 00017b4a   4  clr.w (13c6,A4) */
    c->pc = 0x00017b4au;
    rc_wr16(c, m, (c->a[4] + 0x13c6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17B4E:
    /* 00017b4e   4  clr.w (afc,A4) */
    c->pc = 0x00017b4eu;
    rc_wr16(c, m, (c->a[4] + 0xafcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17B52:
    /* 00017b52   6  move.w #1,(13c4,A4) */
    c->pc = 0x00017b52u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x13c4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B58:
    /* 00017b58   4  move.w #e9,-(A7) */
    c->pc = 0x00017b58u;
    t0 = 0x000000e9u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B5C:
    /* 00017b5c   4  jsr (ffff8086,A4) */
    c->pc = 0x00017b5cu;
    /* vector 22 */
    rc_push32(c, m, 0x00017b60u);
    rc_depth++;
    c->pc = 0x0000711cu;
    return;

L_17B60:
    /* 00017b60   2  addq.w #2,A7 */
    c->pc = 0x00017b60u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_17B62:
    /* 00017b62   2  tst.w D0 */
    c->pc = 0x00017b62u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_17B64:
    /* 00017b64   2  beq 00017b6e */
    c->pc = 0x00017b64u;
    if (rc_cond(c, 7)) goto L_17B6E;

L_17B66:
    /* 00017b66   6  move.w (fffffd82,A4),(13c2,A4) */
    c->pc = 0x00017b66u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x27eu));
    rc_wr16(c, m, (c->a[4] + 0x13c2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B6C:
    /* 00017b6c   2  bra 00017b72 */
    c->pc = 0x00017b6cu;
    goto L_17B72;

L_17B6E:
    /* 00017b6e   4  clr.w (13c2,A4) */
    c->pc = 0x00017b6eu;
    rc_wr16(c, m, (c->a[4] + 0x13c2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17B72:
    /* 00017b72   4  move.w (ffff83c8,A4),D0 */
    c->pc = 0x00017b72u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B76:
    /* 00017b76   2  ext.l D0 */
    c->pc = 0x00017b76u;
    rc_ext_l(c, 0);

L_17B78:
    /* 00017b78   2  asl.l #2,D0 */
    c->pc = 0x00017b78u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_17B7A:
    /* 00017b7a   4  lea (ffff8440,A4),A0 */
    c->pc = 0x00017b7au;
    c->a[0] = (c->a[4] - 0x7bc0u);

L_17B7E:
    /* 00017b7e   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = 0x00017b7eu;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17B82:
    /* 00017b82   4  jsr (ffff82ae,A4) */
    c->pc = 0x00017b82u;
    /* vector 114 */
    rc_push32(c, m, 0x00017b86u);
    rc_depth++;
    c->pc = 0x00020820u;
    return;

L_17B86:
    /* 00017b86   2  addq.w #4,A7 */
    c->pc = 0x00017b86u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_17B88:
    /* 00017b88   2  tst.w D0 */
    c->pc = 0x00017b88u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_17B8A:
    /* 00017b8a   2  bne 00017b92 */
    c->pc = 0x00017b8au;
    if (rc_cond(c, 6)) goto L_17B92;

L_17B8C:
    /* 00017b8c   6  move.w #1,(13c6,A4) */
    c->pc = 0x00017b8cu;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x13c6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B92:
    /* 00017b92   2  unlk A5 */
    c->pc = 0x00017b92u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_17B94:
    /* 00017b94   2  rts */
    c->pc = 0x00017b94u;
    rc_ret(c, m);
    return;

}
