/* fn_0000c926 - 78 byte(s), 23 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000c926(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000c926u): goto L_C926;
    case RC_ADDR(0x0000c92au): goto L_C92A;
    case RC_ADDR(0x0000c92eu): goto L_C92E;
    case RC_ADDR(0x0000c932u): goto L_C932;
    case RC_ADDR(0x0000c936u): goto L_C936;
    case RC_ADDR(0x0000c938u): goto L_C938;
    case RC_ADDR(0x0000c93cu): goto L_C93C;
    case RC_ADDR(0x0000c940u): goto L_C940;
    case RC_ADDR(0x0000c944u): goto L_C944;
    case RC_ADDR(0x0000c946u): goto L_C946;
    case RC_ADDR(0x0000c94au): goto L_C94A;
    case RC_ADDR(0x0000c94eu): goto L_C94E;
    case RC_ADDR(0x0000c952u): goto L_C952;
    case RC_ADDR(0x0000c954u): goto L_C954;
    case RC_ADDR(0x0000c958u): goto L_C958;
    case RC_ADDR(0x0000c95cu): goto L_C95C;
    case RC_ADDR(0x0000c960u): goto L_C960;
    case RC_ADDR(0x0000c962u): goto L_C962;
    case RC_ADDR(0x0000c966u): goto L_C966;
    case RC_ADDR(0x0000c96au): goto L_C96A;
    case RC_ADDR(0x0000c96eu): goto L_C96E;
    case RC_ADDR(0x0000c970u): goto L_C970;
    case RC_ADDR(0x0000c972u): goto L_C972;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_C926:
    /* 0000c926   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000c926u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_C92A:
    /* 0000c92a   4  move.l (e00,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c92au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe00u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C92E:
    /* 0000c92e   4  move.l (de2,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c92eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xde2u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C932:
    /* 0000c932   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0000c932u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0000c936u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_C936:
    /* 0000c936   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000c936u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_C938:
    /* 0000c938   4  move.l (e04,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c938u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe04u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C93C:
    /* 0000c93c   4  move.l (de6,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c93cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xde6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C940:
    /* 0000c940   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0000c940u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0000c944u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_C944:
    /* 0000c944   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000c944u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_C946:
    /* 0000c946   4  move.l (e08,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c946u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe08u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C94A:
    /* 0000c94a   4  move.l (dea,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c94au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xdeau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C94E:
    /* 0000c94e   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0000c94eu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0000c952u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_C952:
    /* 0000c952   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000c952u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_C954:
    /* 0000c954   4  move.l (e0c,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c954u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe0cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C958:
    /* 0000c958   4  move.l (dee,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c958u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xdeeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C95C:
    /* 0000c95c   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0000c95cu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0000c960u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_C960:
    /* 0000c960   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000c960u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_C962:
    /* 0000c962   4  move.l (e10,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c962u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C966:
    /* 0000c966   4  move.l (df2,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c966u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xdf2u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C96A:
    /* 0000c96a   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0000c96au);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0000c96eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_C96E:
    /* 0000c96e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000c96eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_C970:
    /* 0000c970   2  unlk A5 */
    c->pc = RC_ADDR(0x0000c970u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_C972:
    /* 0000c972   2  rts */
    c->pc = RC_ADDR(0x0000c972u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
