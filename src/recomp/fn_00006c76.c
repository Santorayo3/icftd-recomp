/* fn_00006c76 - 94 byte(s), 31 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00006c76(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00006c76u): goto L_6C76;
    case RC_ADDR(0x00006c7au): goto L_6C7A;
    case RC_ADDR(0x00006c7eu): goto L_6C7E;
    case RC_ADDR(0x00006c84u): goto L_6C84;
    case RC_ADDR(0x00006c88u): goto L_6C88;
    case RC_ADDR(0x00006c8au): goto L_6C8A;
    case RC_ADDR(0x00006c8cu): goto L_6C8C;
    case RC_ADDR(0x00006c90u): goto L_6C90;
    case RC_ADDR(0x00006c94u): goto L_6C94;
    case RC_ADDR(0x00006c96u): goto L_6C96;
    case RC_ADDR(0x00006c9au): goto L_6C9A;
    case RC_ADDR(0x00006c9eu): goto L_6C9E;
    case RC_ADDR(0x00006ca2u): goto L_6CA2;
    case RC_ADDR(0x00006ca4u): goto L_6CA4;
    case RC_ADDR(0x00006ca6u): goto L_6CA6;
    case RC_ADDR(0x00006ca8u): goto L_6CA8;
    case RC_ADDR(0x00006caau): goto L_6CAA;
    case RC_ADDR(0x00006cacu): goto L_6CAC;
    case RC_ADDR(0x00006caeu): goto L_6CAE;
    case RC_ADDR(0x00006cb0u): goto L_6CB0;
    case RC_ADDR(0x00006cb4u): goto L_6CB4;
    case RC_ADDR(0x00006cb6u): goto L_6CB6;
    case RC_ADDR(0x00006cb8u): goto L_6CB8;
    case RC_ADDR(0x00006cbcu): goto L_6CBC;
    case RC_ADDR(0x00006cc0u): goto L_6CC0;
    case RC_ADDR(0x00006cc4u): goto L_6CC4;
    case RC_ADDR(0x00006cc8u): goto L_6CC8;
    case RC_ADDR(0x00006ccau): goto L_6CCA;
    case RC_ADDR(0x00006cceu): goto L_6CCE;
    case RC_ADDR(0x00006cd0u): goto L_6CD0;
    case RC_ADDR(0x00006cd2u): goto L_6CD2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_6C76:
    /* 00006c76   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00006c76u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_6C7A:
    /* 00006c7a   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00006c7au);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6C7E:
    /* 00006c7e   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = RC_ADDR(0x00006c7eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6C84:
    /* 00006c84   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00006c84u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6C88:
    /* 00006c88   2  ext.l D0 */
    c->pc = RC_ADDR(0x00006c88u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_6C8A:
    /* 00006c8a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00006c8au);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_6C8C:
    /* 00006c8c   4  lea (fffff1d2,A4),A0 */
    c->pc = RC_ADDR(0x00006c8cu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0xe2eu);

L_6C90:
    /* 00006c90   4  tst.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00006c90u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_L);

L_6C94:
    /* 00006c94   2  beq 00006cd0 */
    c->pc = RC_ADDR(0x00006c94u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_6CD0;

L_6C96:
    /* 00006c96   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00006c96u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6C9A:
    /* 00006c9a   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x00006c9au);
    rc_step(c, m);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_6C9E:
    /* 00006c9e   4  lea (fffff1fa,A4),A0 */
    c->pc = RC_ADDR(0x00006c9eu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0xe06u);

L_6CA2:
    /* 00006ca2   2  add.l A0,D0 */
    c->pc = RC_ADDR(0x00006ca2u);
    rc_step(c, m);
    t0 = rc_a_get(c, 0, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_6CA4:
    /* 00006ca4   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00006ca4u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6CA6:
    /* 00006ca6   2  bsr 00006c4c */
    c->pc = RC_ADDR(0x00006ca6u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00006ca8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006c4cu);
    return;

L_6CA8:
    /* 00006ca8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006ca8u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6CAA:
    /* 00006caa   2  tst.w D0 */
    c->pc = RC_ADDR(0x00006caau);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_6CAC:
    /* 00006cac   2  beq 00006cca */
    c->pc = RC_ADDR(0x00006cacu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_6CCA;

L_6CAE:
    /* 00006cae   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00006caeu);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6CB0:
    /* 00006cb0   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00006cb0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6CB4:
    /* 00006cb4   2  ext.l D0 */
    c->pc = RC_ADDR(0x00006cb4u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_6CB6:
    /* 00006cb6   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00006cb6u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_6CB8:
    /* 00006cb8   4  lea (fffff1d2,A4),A0 */
    c->pc = RC_ADDR(0x00006cb8u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0xe2eu);

L_6CBC:
    /* 00006cbc   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00006cbcu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6CC0:
    /* 00006cc0   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00006cc0u);
    rc_step(c, m);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6CC4:
    /* 00006cc4   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00006cc4u);
    rc_step(c, m);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00006cc8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_6CC8:
    /* 00006cc8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00006cc8u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_6CCA:
    /* 00006cca   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00006ccau);
    rc_step(c, m);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_6CCE:
    /* 00006cce   2  bra 00006c84 */
    c->pc = RC_ADDR(0x00006cceu);
    rc_step(c, m);
    rc_tick();
    goto L_6C84;

L_6CD0:
    /* 00006cd0   2  unlk A5 */
    c->pc = RC_ADDR(0x00006cd0u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_6CD2:
    /* 00006cd2   2  rts */
    c->pc = RC_ADDR(0x00006cd2u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
