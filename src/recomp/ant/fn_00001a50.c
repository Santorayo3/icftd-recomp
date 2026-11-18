/* fn_00001a50 - 38 byte(s), 11 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00001a50(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00001a50u): goto L_1A50;
    case RC_ADDR(0x00001a54u): goto L_1A54;
    case RC_ADDR(0x00001a58u): goto L_1A58;
    case RC_ADDR(0x00001a5au): goto L_1A5A;
    case RC_ADDR(0x00001a5cu): goto L_1A5C;
    case RC_ADDR(0x00001a60u): goto L_1A60;
    case RC_ADDR(0x00001a66u): goto L_1A66;
    case RC_ADDR(0x00001a68u): goto L_1A68;
    case RC_ADDR(0x00001a6eu): goto L_1A6E;
    case RC_ADDR(0x00001a72u): goto L_1A72;
    case RC_ADDR(0x00001a74u): goto L_1A74;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1A50:
    /* 00001a50   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00001a50u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1A54:
    /* 00001a54   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00001a54u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1A58:
    /* 00001a58   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00001a58u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1A5A:
    /* 00001a5a   2  ext.w D0 */
    c->pc = RC_ADDR(0x00001a5au);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_1A5C:
    /* 00001a5c   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00001a5cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A60:
    /* 00001a60   6  cmpi.w #ffff,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00001a60u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1A66:
    /* 00001a66   2  bne 00001a6e */
    c->pc = RC_ADDR(0x00001a66u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1A6E;

L_1A68:
    /* 00001a68   6  move.w #ff9c,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00001a68u);
    rc_step(c, m, 16);
    t0 = 0x0000ff9cu;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A6E:
    /* 00001a6e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00001a6eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A72:
    /* 00001a72   2  unlk A5 */
    c->pc = RC_ADDR(0x00001a72u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1A74:
    /* 00001a74   2  rts */
    c->pc = RC_ADDR(0x00001a74u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
