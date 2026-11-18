/* fn_00003a52 - 62 byte(s), 16 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00003a52(cpu_t *c, rt_machine *m)
{
    u32 t0, t1;

    switch (c->pc)
    {
    case RC_ADDR(0x00003a52u): goto L_3A52;
    case RC_ADDR(0x00003a56u): goto L_3A56;
    case RC_ADDR(0x00003a5eu): goto L_3A5E;
    case RC_ADDR(0x00003a60u): goto L_3A60;
    case RC_ADDR(0x00003a68u): goto L_3A68;
    case RC_ADDR(0x00003a6cu): goto L_3A6C;
    case RC_ADDR(0x00003a6eu): goto L_3A6E;
    case RC_ADDR(0x00003a72u): goto L_3A72;
    case RC_ADDR(0x00003a76u): goto L_3A76;
    case RC_ADDR(0x00003a7au): goto L_3A7A;
    case RC_ADDR(0x00003a7cu): goto L_3A7C;
    case RC_ADDR(0x00003a82u): goto L_3A82;
    case RC_ADDR(0x00003a86u): goto L_3A86;
    case RC_ADDR(0x00003a88u): goto L_3A88;
    case RC_ADDR(0x00003a8cu): goto L_3A8C;
    case RC_ADDR(0x00003a8eu): goto L_3A8E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_3A52:
    /* 00003a52   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00003a52u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_3A56:
    /* 00003a56   8  cmpi.l #fffffec1,(fffff79e,A4) */
    c->pc = RC_ADDR(0x00003a56u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x862u));
    rc_cmp(c, RC_L, t0, 0xfffffec1u);

L_3A5E:
    /* 00003a5e   2  bge 00003a68 */
    c->pc = RC_ADDR(0x00003a5eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_3A68;

L_3A60:
    /* 00003a60   8  move.l #fffffec1,(fffff79e,A4) */
    c->pc = RC_ADDR(0x00003a60u);
    rc_step(c, m, 24);
    t0 = 0xfffffec1u;
    rc_wr32(c, m, (c->a[4] - 0x862u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3A68:
    /* 00003a68   4  tst.l (fffff79e,A4) */
    c->pc = RC_ADDR(0x00003a68u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x862u));
    rc_set_nzvc(c, t0, RC_L);

L_3A6C:
    /* 00003a6c   2  ble 00003a72 */
    c->pc = RC_ADDR(0x00003a6cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_3A72;

L_3A6E:
    /* 00003a6e   4  clr.l (fffff79e,A4) */
    c->pc = RC_ADDR(0x00003a6eu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x862u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_3A72:
    /* 00003a72   4  move.l (fffff7a2,A4),D0 */
    c->pc = RC_ADDR(0x00003a72u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x85eu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_3A76:
    /* 00003a76   4  cmp.l (fffff7ae,A4),D0 */
    c->pc = RC_ADDR(0x00003a76u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x852u));
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_3A7A:
    /* 00003a7a   2  bge 00003a82 */
    c->pc = RC_ADDR(0x00003a7au);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_3A82;

L_3A7C:
    /* 00003a7c   6  move.l (fffff7ae,A4),(fffff7a2,A4) */
    c->pc = RC_ADDR(0x00003a7cu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x852u));
    rc_wr32(c, m, (c->a[4] - 0x85eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3A82:
    /* 00003a82   4  tst.l (fffff7a2,A4) */
    c->pc = RC_ADDR(0x00003a82u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x85eu));
    rc_set_nzvc(c, t0, RC_L);

L_3A86:
    /* 00003a86   2  ble 00003a8c */
    c->pc = RC_ADDR(0x00003a86u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_3A8C;

L_3A88:
    /* 00003a88   4  clr.l (fffff7a2,A4) */
    c->pc = RC_ADDR(0x00003a88u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x85eu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_3A8C:
    /* 00003a8c   2  unlk A5 */
    c->pc = RC_ADDR(0x00003a8cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_3A8E:
    /* 00003a8e   2  rts */
    c->pc = RC_ADDR(0x00003a8eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
