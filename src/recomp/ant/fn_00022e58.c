/* fn_00022e58 - 48 byte(s), 15 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00022e58(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00022e58u): goto L_22E58;
    case RC_ADDR(0x00022e5cu): goto L_22E5C;
    case RC_ADDR(0x00022e5eu): goto L_22E5E;
    case RC_ADDR(0x00022e64u): goto L_22E64;
    case RC_ADDR(0x00022e68u): goto L_22E68;
    case RC_ADDR(0x00022e6cu): goto L_22E6C;
    case RC_ADDR(0x00022e70u): goto L_22E70;
    case RC_ADDR(0x00022e74u): goto L_22E74;
    case RC_ADDR(0x00022e76u): goto L_22E76;
    case RC_ADDR(0x00022e7au): goto L_22E7A;
    case RC_ADDR(0x00022e7cu): goto L_22E7C;
    case RC_ADDR(0x00022e7eu): goto L_22E7E;
    case RC_ADDR(0x00022e82u): goto L_22E82;
    case RC_ADDR(0x00022e84u): goto L_22E84;
    case RC_ADDR(0x00022e86u): goto L_22E86;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22E58:
    /* 00022e58   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00022e58u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_22E5C:
    /* 00022e5c   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x00022e5cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22E5E:
    /* 00022e5e   6  move.l (8,A5),(ffffd59a,A4) */
    c->pc = RC_ADDR(0x00022e5eu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x2a66u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22E64:
    /* 00022e64   4  pea (10,A5) */
    c->pc = RC_ADDR(0x00022e64u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] + 0x10u));

L_22E68:
    /* 00022e68   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00022e68u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22E6C:
    /* 00022e6c   4  pea (00022e88) */
    c->pc = RC_ADDR(0x00022e6cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00022e88u));

L_22E70:
    /* 00022e70   4  jsr (00022f32) */
    c->pc = RC_ADDR(0x00022e70u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022e74u));
    rc_depth++;
    c->pc = RC_ADDR(0x00022f32u);
    return;

L_22E74:
    /* 00022e74   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x00022e74u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22E76:
    /* 00022e76   4  movea.l (ffffd59a,A4),A0 */
    c->pc = RC_ADDR(0x00022e76u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2a66u));
    c->a[0] = t0;

L_22E7A:
    /* 00022e7a   2  clr.b (A0) */
    c->pc = RC_ADDR(0x00022e7au);
    rc_step(c, m, 12);
    rc_wr8(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_22E7C:
    /* 00022e7c   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00022e7cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22E7E:
    /* 00022e7e   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00022e7eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_22E82:
    /* 00022e82   2  move.l (A7)+,D4 */
    c->pc = RC_ADDR(0x00022e82u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_22E84:
    /* 00022e84   2  unlk A5 */
    c->pc = RC_ADDR(0x00022e84u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_22E86:
    /* 00022e86   2  rts */
    c->pc = RC_ADDR(0x00022e86u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
