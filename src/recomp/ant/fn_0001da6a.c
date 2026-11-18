/* fn_0001da6a - 70 byte(s), 19 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001da6a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x0001da6au): goto L_1DA6A;
    case RC_ADDR(0x0001da6eu): goto L_1DA6E;
    case RC_ADDR(0x0001da72u): goto L_1DA72;
    case RC_ADDR(0x0001da76u): goto L_1DA76;
    case RC_ADDR(0x0001da7au): goto L_1DA7A;
    case RC_ADDR(0x0001da7eu): goto L_1DA7E;
    case RC_ADDR(0x0001da82u): goto L_1DA82;
    case RC_ADDR(0x0001da86u): goto L_1DA86;
    case RC_ADDR(0x0001da8au): goto L_1DA8A;
    case RC_ADDR(0x0001da8eu): goto L_1DA8E;
    case RC_ADDR(0x0001da92u): goto L_1DA92;
    case RC_ADDR(0x0001da96u): goto L_1DA96;
    case RC_ADDR(0x0001da9au): goto L_1DA9A;
    case RC_ADDR(0x0001da9eu): goto L_1DA9E;
    case RC_ADDR(0x0001daa0u): goto L_1DAA0;
    case RC_ADDR(0x0001daa4u): goto L_1DAA4;
    case RC_ADDR(0x0001daa8u): goto L_1DAA8;
    case RC_ADDR(0x0001daacu): goto L_1DAAC;
    case RC_ADDR(0x0001daaeu): goto L_1DAAE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1DA6A:
    /* 0001da6a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001da6au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1DA6E:
    /* 0001da6e   4  move.w #20,-(A7) */
    c->pc = RC_ADDR(0x0001da6eu);
    rc_step(c, m, 12);
    t0 = 0x00000020u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DA72:
    /* 0001da72   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0001da72u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DA76:
    /* 0001da76   4  pea (000009c4).l */
    c->pc = RC_ADDR(0x0001da76u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000009c4u);

L_1DA7A:
    /* 0001da7a   4  move.w #190,-(A7) */
    c->pc = RC_ADDR(0x0001da7au);
    rc_step(c, m, 12);
    t0 = 0x00000190u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DA7E:
    /* 0001da7e   4  move.l (2c72,A4),-(A7) */
    c->pc = RC_ADDR(0x0001da7eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c72u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DA82:
    /* 0001da82   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0001da82u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0001da86u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_1DA86:
    /* 0001da86   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001da86u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_1DA8A:
    /* 0001da8a   4  move.w #3c,-(A7) */
    c->pc = RC_ADDR(0x0001da8au);
    rc_step(c, m, 12);
    t0 = 0x0000003cu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DA8E:
    /* 0001da8e   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0001da8eu);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DA92:
    /* 0001da92   4  move.l (2c8a,A4),-(A7) */
    c->pc = RC_ADDR(0x0001da92u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c8au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DA96:
    /* 0001da96   4  move.w (2c7c,A4),D0 */
    c->pc = RC_ADDR(0x0001da96u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2c7cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DA9A:
    /* 0001da9a   4  add.w #190,D0 */
    c->pc = RC_ADDR(0x0001da9au);
    rc_step(c, m, 10);
    t0 = 0x00000190u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1DA9E:
    /* 0001da9e   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001da9eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DAA0:
    /* 0001daa0   4  move.l (2c66,A4),-(A7) */
    c->pc = RC_ADDR(0x0001daa0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c66u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DAA4:
    /* 0001daa4   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0001daa4u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0001daa8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_1DAA8:
    /* 0001daa8   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001daa8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_1DAAC:
    /* 0001daac   2  unlk A5 */
    c->pc = RC_ADDR(0x0001daacu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1DAAE:
    /* 0001daae   2  rts */
    c->pc = RC_ADDR(0x0001daaeu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
