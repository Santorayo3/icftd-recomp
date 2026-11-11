/* fn_00004f5c - 66 byte(s), 19 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00004f5c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00004f5cu): goto L_4F5C;
    case RC_ADDR(0x00004f60u): goto L_4F60;
    case RC_ADDR(0x00004f66u): goto L_4F66;
    case RC_ADDR(0x00004f6cu): goto L_4F6C;
    case RC_ADDR(0x00004f70u): goto L_4F70;
    case RC_ADDR(0x00004f72u): goto L_4F72;
    case RC_ADDR(0x00004f76u): goto L_4F76;
    case RC_ADDR(0x00004f7au): goto L_4F7A;
    case RC_ADDR(0x00004f7cu): goto L_4F7C;
    case RC_ADDR(0x00004f80u): goto L_4F80;
    case RC_ADDR(0x00004f84u): goto L_4F84;
    case RC_ADDR(0x00004f88u): goto L_4F88;
    case RC_ADDR(0x00004f8cu): goto L_4F8C;
    case RC_ADDR(0x00004f8eu): goto L_4F8E;
    case RC_ADDR(0x00004f92u): goto L_4F92;
    case RC_ADDR(0x00004f94u): goto L_4F94;
    case RC_ADDR(0x00004f98u): goto L_4F98;
    case RC_ADDR(0x00004f9au): goto L_4F9A;
    case RC_ADDR(0x00004f9cu): goto L_4F9C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_4F5C:
    /* 00004f5c   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00004f5cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_4F60:
    /* 00004f60   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00004f60u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4F66:
    /* 00004f66   6  move.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00004f66u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4F6C:
    /* 00004f6c   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00004f6cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_4F70:
    /* 00004f70   2  beq 00004f94 */
    c->pc = RC_ADDR(0x00004f70u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4F94;

L_4F72:
    /* 00004f72   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00004f72u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4F76:
    /* 00004f76   4  jsr (00004e84) */
    c->pc = RC_ADDR(0x00004f76u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00004f7au));
    rc_depth++;
    c->pc = RC_ADDR(0x00004e84u);
    return;

L_4F7A:
    /* 00004f7a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004f7au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4F7C:
    /* 00004f7c   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00004f7cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4F80:
    /* 00004f80   4  move.w (12,A4),D0 */
    c->pc = RC_ADDR(0x00004f80u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4F84:
    /* 00004f84   4  add.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00004f84u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_4F88:
    /* 00004f88   4  move.l (fffff274,A4),D0 */
    c->pc = RC_ADDR(0x00004f88u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd8cu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_4F8C:
    /* 00004f8c   2  addq.l #1,D0 */
    c->pc = RC_ADDR(0x00004f8cu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_4F8E:
    /* 00004f8e   4  add.l D0,(8,A5) */
    c->pc = RC_ADDR(0x00004f8eu);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_4F92:
    /* 00004f92   2  bra 00004f6c */
    c->pc = RC_ADDR(0x00004f92u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_4F6C;

L_4F94:
    /* 00004f94   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00004f94u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4F98:
    /* 00004f98   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00004f98u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_4F9A:
    /* 00004f9a   2  unlk A5 */
    c->pc = RC_ADDR(0x00004f9au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_4F9C:
    /* 00004f9c   2  rts */
    c->pc = RC_ADDR(0x00004f9cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
