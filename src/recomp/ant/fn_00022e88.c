/* fn_00022e88 - 28 byte(s), 9 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00022e88(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00022e88u): goto L_22E88;
    case RC_ADDR(0x00022e8cu): goto L_22E8C;
    case RC_ADDR(0x00022e90u): goto L_22E90;
    case RC_ADDR(0x00022e94u): goto L_22E94;
    case RC_ADDR(0x00022e98u): goto L_22E98;
    case RC_ADDR(0x00022e9au): goto L_22E9A;
    case RC_ADDR(0x00022e9cu): goto L_22E9C;
    case RC_ADDR(0x00022ea0u): goto L_22EA0;
    case RC_ADDR(0x00022ea2u): goto L_22EA2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22E88:
    /* 00022e88   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00022e88u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_22E8C:
    /* 00022e8c   4  movea.l (ffffd59a,A4),A0 */
    c->pc = RC_ADDR(0x00022e8cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2a66u));
    c->a[0] = t0;

L_22E90:
    /* 00022e90   4  addq.l #1,(ffffd59a,A4) */
    c->pc = RC_ADDR(0x00022e90u);
    rc_step(c, m, 24);
    t3 = (c->a[4] - 0x2a66u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_22E94:
    /* 00022e94   4  move.b (9,A5),D0 */
    c->pc = RC_ADDR(0x00022e94u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0x9u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_22E98:
    /* 00022e98   2  move.b D0,(A0) */
    c->pc = RC_ADDR(0x00022e98u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_wr8(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_B);

L_22E9A:
    /* 00022e9a   2  ext.w D0 */
    c->pc = RC_ADDR(0x00022e9au);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_22E9C:
    /* 00022e9c   4  and.w #ff,D0 */
    c->pc = RC_ADDR(0x00022e9cu);
    rc_step(c, m, 10);
    t0 = 0x000000ffu;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_22EA0:
    /* 00022ea0   2  unlk A5 */
    c->pc = RC_ADDR(0x00022ea0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_22EA2:
    /* 00022ea2   2  rts */
    c->pc = RC_ADDR(0x00022ea2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
