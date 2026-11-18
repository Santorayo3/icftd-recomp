/* fn_00015a56 - 90 byte(s), 25 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00015a56(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00015a56u): goto L_15A56;
    case RC_ADDR(0x00015a5au): goto L_15A5A;
    case RC_ADDR(0x00015a5eu): goto L_15A5E;
    case RC_ADDR(0x00015a62u): goto L_15A62;
    case RC_ADDR(0x00015a66u): goto L_15A66;
    case RC_ADDR(0x00015a68u): goto L_15A68;
    case RC_ADDR(0x00015a6eu): goto L_15A6E;
    case RC_ADDR(0x00015a74u): goto L_15A74;
    case RC_ADDR(0x00015a76u): goto L_15A76;
    case RC_ADDR(0x00015a7au): goto L_15A7A;
    case RC_ADDR(0x00015a7eu): goto L_15A7E;
    case RC_ADDR(0x00015a80u): goto L_15A80;
    case RC_ADDR(0x00015a84u): goto L_15A84;
    case RC_ADDR(0x00015a88u): goto L_15A88;
    case RC_ADDR(0x00015a8au): goto L_15A8A;
    case RC_ADDR(0x00015a8eu): goto L_15A8E;
    case RC_ADDR(0x00015a94u): goto L_15A94;
    case RC_ADDR(0x00015a96u): goto L_15A96;
    case RC_ADDR(0x00015a9au): goto L_15A9A;
    case RC_ADDR(0x00015a9eu): goto L_15A9E;
    case RC_ADDR(0x00015aa2u): goto L_15AA2;
    case RC_ADDR(0x00015aa4u): goto L_15AA4;
    case RC_ADDR(0x00015aa8u): goto L_15AA8;
    case RC_ADDR(0x00015aacu): goto L_15AAC;
    case RC_ADDR(0x00015aaeu): goto L_15AAE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_15A56:
    /* 00015a56   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00015a56u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_15A5A:
    /* 00015a5a   4  move.w (1aca,A4),D0 */
    c->pc = RC_ADDR(0x00015a5au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1acau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15A5E:
    /* 00015a5e   4  subq.w #1,(1aca,A4) */
    c->pc = RC_ADDR(0x00015a5eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1acau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15A62:
    /* 00015a62   4  cmp.w #1,D0 */
    c->pc = RC_ADDR(0x00015a62u);
    rc_step(c, m, 8);
    t0 = 0x00000001u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15A66:
    /* 00015a66   2  bge 00015a8e */
    c->pc = RC_ADDR(0x00015a66u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_15A8E;

L_15A68:
    /* 00015a68   6  move.w (1b26,A4),(1aca,A4) */
    c->pc = RC_ADDR(0x00015a68u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b26u));
    rc_wr16(c, m, (c->a[4] + 0x1acau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15A6E:
    /* 00015a6e   6  cmpi.w #f,(1b26,A4) */
    c->pc = RC_ADDR(0x00015a6eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b26u));
    rc_cmp(c, RC_W, t0, 0x0000000fu);

L_15A74:
    /* 00015a74   2  bge 00015a7a */
    c->pc = RC_ADDR(0x00015a74u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_15A7A;

L_15A76:
    /* 00015a76   4  addq.w #1,(1b26,A4) */
    c->pc = RC_ADDR(0x00015a76u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1b26u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15A7A:
    /* 00015a7a   4  tst.w (fffffa2e,A4) */
    c->pc = RC_ADDR(0x00015a7au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5d2u));
    rc_set_nzvc(c, t0, RC_W);

L_15A7E:
    /* 00015a7e   2  beq 00015a84 */
    c->pc = RC_ADDR(0x00015a7eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15A84;

L_15A80:
    /* 00015a80   4  subq.w #1,(fffffa2e,A4) */
    c->pc = RC_ADDR(0x00015a80u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x5d2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15A84:
    /* 00015a84   4  tst.w (fffffa30,A4) */
    c->pc = RC_ADDR(0x00015a84u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5d0u));
    rc_set_nzvc(c, t0, RC_W);

L_15A88:
    /* 00015a88   2  beq 00015a8e */
    c->pc = RC_ADDR(0x00015a88u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15A8E;

L_15A8A:
    /* 00015a8a   4  subq.w #1,(fffffa30,A4) */
    c->pc = RC_ADDR(0x00015a8au);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x5d0u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15A8E:
    /* 00015a8e   6  cmpi.w #1,(14f2,A4) */
    c->pc = RC_ADDR(0x00015a8eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f2u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_15A94:
    /* 00015a94   2  ble 00015aac */
    c->pc = RC_ADDR(0x00015a94u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_15AAC;

L_15A96:
    /* 00015a96   4  move.w (1acc,A4),D0 */
    c->pc = RC_ADDR(0x00015a96u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1accu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15A9A:
    /* 00015a9a   4  addq.w #1,(1acc,A4) */
    c->pc = RC_ADDR(0x00015a9au);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1accu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15A9E:
    /* 00015a9e   4  cmp.w #1,D0 */
    c->pc = RC_ADDR(0x00015a9eu);
    rc_step(c, m, 8);
    t0 = 0x00000001u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15AA2:
    /* 00015aa2   2  ble 00015aac */
    c->pc = RC_ADDR(0x00015aa2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_15AAC;

L_15AA4:
    /* 00015aa4   4  clr.w (1acc,A4) */
    c->pc = RC_ADDR(0x00015aa4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1accu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15AA8:
    /* 00015aa8   4  subq.w #1,(14f2,A4) */
    c->pc = RC_ADDR(0x00015aa8u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x14f2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15AAC:
    /* 00015aac   2  unlk A5 */
    c->pc = RC_ADDR(0x00015aacu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_15AAE:
    /* 00015aae   2  rts */
    c->pc = RC_ADDR(0x00015aaeu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
