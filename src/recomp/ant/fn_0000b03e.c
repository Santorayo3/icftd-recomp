/* fn_0000b03e - 60 byte(s), 23 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000b03e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000b03eu): goto L_B03E;
    case RC_ADDR(0x0000b042u): goto L_B042;
    case RC_ADDR(0x0000b044u): goto L_B044;
    case RC_ADDR(0x0000b046u): goto L_B046;
    case RC_ADDR(0x0000b048u): goto L_B048;
    case RC_ADDR(0x0000b04au): goto L_B04A;
    case RC_ADDR(0x0000b04cu): goto L_B04C;
    case RC_ADDR(0x0000b050u): goto L_B050;
    case RC_ADDR(0x0000b054u): goto L_B054;
    case RC_ADDR(0x0000b056u): goto L_B056;
    case RC_ADDR(0x0000b058u): goto L_B058;
    case RC_ADDR(0x0000b05au): goto L_B05A;
    case RC_ADDR(0x0000b05cu): goto L_B05C;
    case RC_ADDR(0x0000b060u): goto L_B060;
    case RC_ADDR(0x0000b064u): goto L_B064;
    case RC_ADDR(0x0000b066u): goto L_B066;
    case RC_ADDR(0x0000b06au): goto L_B06A;
    case RC_ADDR(0x0000b06cu): goto L_B06C;
    case RC_ADDR(0x0000b06eu): goto L_B06E;
    case RC_ADDR(0x0000b072u): goto L_B072;
    case RC_ADDR(0x0000b074u): goto L_B074;
    case RC_ADDR(0x0000b076u): goto L_B076;
    case RC_ADDR(0x0000b078u): goto L_B078;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B03E:
    /* 0000b03e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000b03eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_B042:
    /* 0000b042   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x0000b042u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B044:
    /* 0000b044   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0000b044u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_B046:
    /* 0000b046   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x0000b046u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B048:
    /* 0000b048   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000b048u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_B04A:
    /* 0000b04a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000b04au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_B04C:
    /* 0000b04c   4  lea (ce2,A4),A0 */
    c->pc = RC_ADDR(0x0000b04cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xce2u);

L_B050:
    /* 0000b050   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000b050u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_B054:
    /* 0000b054   2  beq 0000b06c */
    c->pc = RC_ADDR(0x0000b054u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_B06C;

L_B056:
    /* 0000b056   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x0000b056u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B058:
    /* 0000b058   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000b058u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_B05A:
    /* 0000b05a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000b05au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_B05C:
    /* 0000b05c   4  lea (ce2,A4),A0 */
    c->pc = RC_ADDR(0x0000b05cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xce2u);

L_B060:
    /* 0000b060   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000b060u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B064:
    /* 0000b064   2  move.w D4,-(A7) */
    c->pc = RC_ADDR(0x0000b064u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 4, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B066:
    /* 0000b066   4  jsr (0000af96) */
    c->pc = RC_ADDR(0x0000b066u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000b06au));
    rc_depth++;
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_B06A:
    /* 0000b06a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000b06au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_B06C:
    /* 0000b06c   2  addq.w #1,D4 */
    c->pc = RC_ADDR(0x0000b06cu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_B06E:
    /* 0000b06e   4  cmp.w #4,D4 */
    c->pc = RC_ADDR(0x0000b06eu);
    rc_step(c, m, 8);
    t0 = 0x00000004u;
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_B072:
    /* 0000b072   2  blt 0000b046 */
    c->pc = RC_ADDR(0x0000b072u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_B046; }

L_B074:
    /* 0000b074   2  move.l (A7)+,D4 */
    c->pc = RC_ADDR(0x0000b074u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_B076:
    /* 0000b076   2  unlk A5 */
    c->pc = RC_ADDR(0x0000b076u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B078:
    /* 0000b078   2  rts */
    c->pc = RC_ADDR(0x0000b078u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
