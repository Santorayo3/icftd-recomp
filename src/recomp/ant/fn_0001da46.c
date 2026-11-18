/* fn_0001da46 - 36 byte(s), 10 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001da46(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001da46u): goto L_1DA46;
    case RC_ADDR(0x0001da4au): goto L_1DA4A;
    case RC_ADDR(0x0001da4eu): goto L_1DA4E;
    case RC_ADDR(0x0001da52u): goto L_1DA52;
    case RC_ADDR(0x0001da56u): goto L_1DA56;
    case RC_ADDR(0x0001da5au): goto L_1DA5A;
    case RC_ADDR(0x0001da5eu): goto L_1DA5E;
    case RC_ADDR(0x0001da62u): goto L_1DA62;
    case RC_ADDR(0x0001da66u): goto L_1DA66;
    case RC_ADDR(0x0001da68u): goto L_1DA68;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1DA46:
    /* 0001da46   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001da46u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1DA4A:
    /* 0001da4a   4  move.w #20,-(A7) */
    c->pc = RC_ADDR(0x0001da4au);
    rc_step(c, m, 12);
    t0 = 0x00000020u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DA4E:
    /* 0001da4e   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0001da4eu);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DA52:
    /* 0001da52   4  pea (00000dac).l */
    c->pc = RC_ADDR(0x0001da52u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000dacu);

L_1DA56:
    /* 0001da56   4  move.w #12c,-(A7) */
    c->pc = RC_ADDR(0x0001da56u);
    rc_step(c, m, 12);
    t0 = 0x0000012cu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DA5A:
    /* 0001da5a   4  move.l (2c72,A4),-(A7) */
    c->pc = RC_ADDR(0x0001da5au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c72u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DA5E:
    /* 0001da5e   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0001da5eu);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0001da62u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_1DA62:
    /* 0001da62   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001da62u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_1DA66:
    /* 0001da66   2  unlk A5 */
    c->pc = RC_ADDR(0x0001da66u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1DA68:
    /* 0001da68   2  rts */
    c->pc = RC_ADDR(0x0001da68u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
