/* fn_00007c6e - 86 byte(s), 28 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00007c6e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00007c6eu): goto L_7C6E;
    case RC_ADDR(0x00007c72u): goto L_7C72;
    case RC_ADDR(0x00007c76u): goto L_7C76;
    case RC_ADDR(0x00007c78u): goto L_7C78;
    case RC_ADDR(0x00007c7cu): goto L_7C7C;
    case RC_ADDR(0x00007c80u): goto L_7C80;
    case RC_ADDR(0x00007c82u): goto L_7C82;
    case RC_ADDR(0x00007c86u): goto L_7C86;
    case RC_ADDR(0x00007c8au): goto L_7C8A;
    case RC_ADDR(0x00007c8cu): goto L_7C8C;
    case RC_ADDR(0x00007c8eu): goto L_7C8E;
    case RC_ADDR(0x00007c90u): goto L_7C90;
    case RC_ADDR(0x00007c94u): goto L_7C94;
    case RC_ADDR(0x00007c98u): goto L_7C98;
    case RC_ADDR(0x00007c9au): goto L_7C9A;
    case RC_ADDR(0x00007ca0u): goto L_7CA0;
    case RC_ADDR(0x00007ca2u): goto L_7CA2;
    case RC_ADDR(0x00007ca6u): goto L_7CA6;
    case RC_ADDR(0x00007ca8u): goto L_7CA8;
    case RC_ADDR(0x00007caau): goto L_7CAA;
    case RC_ADDR(0x00007cacu): goto L_7CAC;
    case RC_ADDR(0x00007cb0u): goto L_7CB0;
    case RC_ADDR(0x00007cb4u): goto L_7CB4;
    case RC_ADDR(0x00007cb8u): goto L_7CB8;
    case RC_ADDR(0x00007cbau): goto L_7CBA;
    case RC_ADDR(0x00007cbeu): goto L_7CBE;
    case RC_ADDR(0x00007cc0u): goto L_7CC0;
    case RC_ADDR(0x00007cc2u): goto L_7CC2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_7C6E:
    /* 00007c6e   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00007c6eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_7C72:
    /* 00007c72   4  tst.l (8,A5) */
    c->pc = RC_ADDR(0x00007c72u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_7C76:
    /* 00007c76   2  beq 00007cc0 */
    c->pc = RC_ADDR(0x00007c76u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_7CC0;

L_7C78:
    /* 00007c78   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00007c78u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_7C7C:
    /* 00007c7c   4  tst.b (12,A0) */
    c->pc = RC_ADDR(0x00007c7cu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x12u));
    rc_set_nzvc(c, t0, RC_B);

L_7C80:
    /* 00007c80   2  beq 00007cc0 */
    c->pc = RC_ADDR(0x00007c80u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_7CC0;

L_7C82:
    /* 00007c82   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00007c82u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7C86:
    /* 00007c86   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00007c86u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7C8A:
    /* 00007c8a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007c8au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7C8C:
    /* 00007c8c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00007c8cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_7C8E:
    /* 00007c8e   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00007c8eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_7C90:
    /* 00007c90   4  adda.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00007c90u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] += t0;

L_7C94:
    /* 00007c94   4  tst.b (12,A0) */
    c->pc = RC_ADDR(0x00007c94u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x12u));
    rc_set_nzvc(c, t0, RC_B);

L_7C98:
    /* 00007c98   2  beq 00007cc0 */
    c->pc = RC_ADDR(0x00007c98u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_7CC0;

L_7C9A:
    /* 00007c9a   6  cmpi.w #a,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00007c9au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_7CA0:
    /* 00007ca0   2  bge 00007cc0 */
    c->pc = RC_ADDR(0x00007ca0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_7CC0;

L_7CA2:
    /* 00007ca2   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00007ca2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7CA6:
    /* 00007ca6   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007ca6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7CA8:
    /* 00007ca8   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00007ca8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_7CAA:
    /* 00007caa   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00007caau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_7CAC:
    /* 00007cac   4  adda.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00007cacu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] += t0;

L_7CB0:
    /* 00007cb0   4  pea (12,A0) */
    c->pc = RC_ADDR(0x00007cb0u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[0] + 0x12u));

L_7CB4:
    /* 00007cb4   4  jsr (00007790) */
    c->pc = RC_ADDR(0x00007cb4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00007cb8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00007790u);
    return;

L_7CB8:
    /* 00007cb8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00007cb8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_7CBA:
    /* 00007cba   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00007cbau);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_7CBE:
    /* 00007cbe   2  bra 00007c86 */
    c->pc = RC_ADDR(0x00007cbeu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_7C86;

L_7CC0:
    /* 00007cc0   2  unlk A5 */
    c->pc = RC_ADDR(0x00007cc0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_7CC2:
    /* 00007cc2   2  rts */
    c->pc = RC_ADDR(0x00007cc2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
