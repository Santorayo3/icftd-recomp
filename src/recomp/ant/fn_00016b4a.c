/* fn_00016b4a - 108 byte(s), 38 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00016b4a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00016b4au): goto L_16B4A;
    case RC_ADDR(0x00016b4eu): goto L_16B4E;
    case RC_ADDR(0x00016b50u): goto L_16B50;
    case RC_ADDR(0x00016b54u): goto L_16B54;
    case RC_ADDR(0x00016b56u): goto L_16B56;
    case RC_ADDR(0x00016b58u): goto L_16B58;
    case RC_ADDR(0x00016b5cu): goto L_16B5C;
    case RC_ADDR(0x00016b60u): goto L_16B60;
    case RC_ADDR(0x00016b62u): goto L_16B62;
    case RC_ADDR(0x00016b64u): goto L_16B64;
    case RC_ADDR(0x00016b68u): goto L_16B68;
    case RC_ADDR(0x00016b6cu): goto L_16B6C;
    case RC_ADDR(0x00016b6eu): goto L_16B6E;
    case RC_ADDR(0x00016b70u): goto L_16B70;
    case RC_ADDR(0x00016b74u): goto L_16B74;
    case RC_ADDR(0x00016b78u): goto L_16B78;
    case RC_ADDR(0x00016b7cu): goto L_16B7C;
    case RC_ADDR(0x00016b80u): goto L_16B80;
    case RC_ADDR(0x00016b82u): goto L_16B82;
    case RC_ADDR(0x00016b86u): goto L_16B86;
    case RC_ADDR(0x00016b88u): goto L_16B88;
    case RC_ADDR(0x00016b8au): goto L_16B8A;
    case RC_ADDR(0x00016b8cu): goto L_16B8C;
    case RC_ADDR(0x00016b8eu): goto L_16B8E;
    case RC_ADDR(0x00016b90u): goto L_16B90;
    case RC_ADDR(0x00016b94u): goto L_16B94;
    case RC_ADDR(0x00016b96u): goto L_16B96;
    case RC_ADDR(0x00016b98u): goto L_16B98;
    case RC_ADDR(0x00016b9cu): goto L_16B9C;
    case RC_ADDR(0x00016ba0u): goto L_16BA0;
    case RC_ADDR(0x00016ba2u): goto L_16BA2;
    case RC_ADDR(0x00016ba4u): goto L_16BA4;
    case RC_ADDR(0x00016ba6u): goto L_16BA6;
    case RC_ADDR(0x00016baau): goto L_16BAA;
    case RC_ADDR(0x00016bacu): goto L_16BAC;
    case RC_ADDR(0x00016bb0u): goto L_16BB0;
    case RC_ADDR(0x00016bb2u): goto L_16BB2;
    case RC_ADDR(0x00016bb4u): goto L_16BB4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16B4A:
    /* 00016b4a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00016b4au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_16B4E:
    /* 00016b4e   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x00016b4eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16B50:
    /* 00016b50   4  move.w (1c3e,A4),D0 */
    c->pc = RC_ADDR(0x00016b50u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c3eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16B54:
    /* 00016b54   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016b54u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16B56:
    /* 00016b56   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016b56u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16B58:
    /* 00016b58   4  lea (1c36,A4),A0 */
    c->pc = RC_ADDR(0x00016b58u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c36u);

L_16B5C:
    /* 00016b5c   4  move.w (8,A5),D1 */
    c->pc = RC_ADDR(0x00016b5cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16B60:
    /* 00016b60   2  ext.l D1 */
    c->pc = RC_ADDR(0x00016b60u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_16B62:
    /* 00016b62   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00016b62u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_16B64:
    /* 00016b64   4  lea (ffffb460,A4),A1 */
    c->pc = RC_ADDR(0x00016b64u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4ba0u);

L_16B68:
    /* 00016b68   4  move.w (a,A5),D2 */
    c->pc = RC_ADDR(0x00016b68u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16B6C:
    /* 00016b6c   2  ext.l D2 */
    c->pc = RC_ADDR(0x00016b6cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_16B6E:
    /* 00016b6e   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x00016b6eu);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_16B70:
    /* 00016b70   4  lea (ffffb460,A4),A6 */
    c->pc = RC_ADDR(0x00016b70u);
    rc_step(c, m, 8);
    c->a[6] = (c->a[4] - 0x4ba0u);

L_16B74:
    /* 00016b74   4  move.w (0,A1,D1.w),D3 */
    c->pc = RC_ADDR(0x00016b74u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16B78:
    /* 00016b78   4  sub.w (0,A6,D2.w),D3 */
    c->pc = RC_ADDR(0x00016b78u);
    rc_step(c, m, 14);
    t4 = c->d[2];
    t0 = rc_rd16(c, m, (c->a[6] + 0x0u + t4));
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_16B7C:
    /* 00016b7c   4  move.w (0,A0,D0.w),D4 */
    c->pc = RC_ADDR(0x00016b7cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16B80:
    /* 00016b80   2  sub.w D3,D4 */
    c->pc = RC_ADDR(0x00016b80u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_16B82:
    /* 00016b82   4  cmp.w #7,D4 */
    c->pc = RC_ADDR(0x00016b82u);
    rc_step(c, m, 8);
    t0 = 0x00000007u;
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_16B86:
    /* 00016b86   2  ble 00016b8a */
    c->pc = RC_ADDR(0x00016b86u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_16B8A;

L_16B88:
    /* 00016b88   2  subq.w #8,D4 */
    c->pc = RC_ADDR(0x00016b88u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_16B8A:
    /* 00016b8a   2  tst.w D4 */
    c->pc = RC_ADDR(0x00016b8au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_16B8C:
    /* 00016b8c   2  bge 00016b90 */
    c->pc = RC_ADDR(0x00016b8cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_16B90;

L_16B8E:
    /* 00016b8e   2  addq.w #8,D4 */
    c->pc = RC_ADDR(0x00016b8eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_16B90:
    /* 00016b90   4  move.w (1c3e,A4),D0 */
    c->pc = RC_ADDR(0x00016b90u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c3eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16B94:
    /* 00016b94   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016b94u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16B96:
    /* 00016b96   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016b96u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16B98:
    /* 00016b98   4  lea (1c36,A4),A0 */
    c->pc = RC_ADDR(0x00016b98u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c36u);

L_16B9C:
    /* 00016b9c   4  move.w D4,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016b9cu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 4, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16BA0:
    /* 00016ba0   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00016ba0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16BA2:
    /* 00016ba2   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016ba2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16BA4:
    /* 00016ba4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016ba4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16BA6:
    /* 00016ba6   4  lea (ffffb43a,A4),A0 */
    c->pc = RC_ADDR(0x00016ba6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4bc6u);

L_16BAA:
    /* 00016baa   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x00016baau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_16BAC:
    /* 00016bac   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x00016bacu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16BB0:
    /* 00016bb0   2  move.l (A7)+,D4 */
    c->pc = RC_ADDR(0x00016bb0u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_16BB2:
    /* 00016bb2   2  unlk A5 */
    c->pc = RC_ADDR(0x00016bb2u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16BB4:
    /* 00016bb4   2  rts */
    c->pc = RC_ADDR(0x00016bb4u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
