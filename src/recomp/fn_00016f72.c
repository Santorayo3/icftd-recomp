/* fn_00016f72 - 104 byte(s), 31 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00016f72(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00016f72u): goto L_16F72;
    case RC_ADDR(0x00016f76u): goto L_16F76;
    case RC_ADDR(0x00016f7au): goto L_16F7A;
    case RC_ADDR(0x00016f7eu): goto L_16F7E;
    case RC_ADDR(0x00016f80u): goto L_16F80;
    case RC_ADDR(0x00016f82u): goto L_16F82;
    case RC_ADDR(0x00016f86u): goto L_16F86;
    case RC_ADDR(0x00016f8eu): goto L_16F8E;
    case RC_ADDR(0x00016f90u): goto L_16F90;
    case RC_ADDR(0x00016f94u): goto L_16F94;
    case RC_ADDR(0x00016f98u): goto L_16F98;
    case RC_ADDR(0x00016f9au): goto L_16F9A;
    case RC_ADDR(0x00016f9cu): goto L_16F9C;
    case RC_ADDR(0x00016fa0u): goto L_16FA0;
    case RC_ADDR(0x00016fa4u): goto L_16FA4;
    case RC_ADDR(0x00016fa6u): goto L_16FA6;
    case RC_ADDR(0x00016faau): goto L_16FAA;
    case RC_ADDR(0x00016facu): goto L_16FAC;
    case RC_ADDR(0x00016faeu): goto L_16FAE;
    case RC_ADDR(0x00016fb2u): goto L_16FB2;
    case RC_ADDR(0x00016fb4u): goto L_16FB4;
    case RC_ADDR(0x00016fb6u): goto L_16FB6;
    case RC_ADDR(0x00016fbau): goto L_16FBA;
    case RC_ADDR(0x00016fbeu): goto L_16FBE;
    case RC_ADDR(0x00016fc2u): goto L_16FC2;
    case RC_ADDR(0x00016fc6u): goto L_16FC6;
    case RC_ADDR(0x00016fcau): goto L_16FCA;
    case RC_ADDR(0x00016fceu): goto L_16FCE;
    case RC_ADDR(0x00016fd2u): goto L_16FD2;
    case RC_ADDR(0x00016fd6u): goto L_16FD6;
    case RC_ADDR(0x00016fd8u): goto L_16FD8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16F72:
    /* 00016f72   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00016f72u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_16F76:
    /* 00016f76   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00016f76u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16F7A:
    /* 00016f7a   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x00016f7au);
    rc_step(c, m, 18);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x00016f7eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020820u);
    return;

L_16F7E:
    /* 00016f7e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00016f7eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_16F80:
    /* 00016f80   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016f80u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16F82:
    /* 00016f82   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00016f82u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_16F86:
    /* 00016f86   8  cmpi.l #2,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00016f86u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000002u);

L_16F8E:
    /* 00016f8e   2  bge 00016f94 */
    c->pc = RC_ADDR(0x00016f8eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_16F94;

L_16F90:
    /* 00016f90   4  addq.w #3,(c,A5) */
    c->pc = RC_ADDR(0x00016f90u);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000003u;
    rc_flags_add(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16F94:
    /* 00016f94   4  move.w (10,A5),D0 */
    c->pc = RC_ADDR(0x00016f94u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16F98:
    /* 00016f98   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016f98u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16F9A:
    /* 00016f9a   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00016f9au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16F9C:
    /* 00016f9c   4  pea (12e0,A4) */
    c->pc = RC_ADDR(0x00016f9cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x12e0u));

L_16FA0:
    /* 00016fa0   4  jsr (ffff838c,A4) */
    c->pc = RC_ADDR(0x00016fa0u);
    rc_step(c, m, 18);
    /* vector 151 */
    rc_push32(c, m, RC_ADDR(0x00016fa4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021de2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000218eau);
    return;

L_16FA4:
    /* 00016fa4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00016fa4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_16FA6:
    /* 00016fa6   4  move.w (e,A5),D0 */
    c->pc = RC_ADDR(0x00016fa6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16FAA:
    /* 00016faa   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016faau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16FAC:
    /* 00016fac   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00016facu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16FAE:
    /* 00016fae   4  move.w (c,A5),D0 */
    c->pc = RC_ADDR(0x00016faeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16FB2:
    /* 00016fb2   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016fb2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16FB4:
    /* 00016fb4   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00016fb4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16FB6:
    /* 00016fb6   4  pea (12e0,A4) */
    c->pc = RC_ADDR(0x00016fb6u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x12e0u));

L_16FBA:
    /* 00016fba   4  jsr (ffff837a,A4) */
    c->pc = RC_ADDR(0x00016fbau);
    rc_step(c, m, 18);
    /* vector 148 */
    rc_push32(c, m, RC_ADDR(0x00016fbeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021dd0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000218b2u);
    return;

L_16FBE:
    /* 00016fbe   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00016fbeu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_16FC2:
    /* 00016fc2   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00016fc2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16FC6:
    /* 00016fc6   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00016fc6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16FCA:
    /* 00016fca   4  pea (12e0,A4) */
    c->pc = RC_ADDR(0x00016fcau);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x12e0u));

L_16FCE:
    /* 00016fce   4  jsr (ffff839e,A4) */
    c->pc = RC_ADDR(0x00016fceu);
    rc_step(c, m, 18);
    /* vector 154 */
    rc_push32(c, m, RC_ADDR(0x00016fd2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021df4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002191au);
    return;

L_16FD2:
    /* 00016fd2   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00016fd2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_16FD6:
    /* 00016fd6   2  unlk A5 */
    c->pc = RC_ADDR(0x00016fd6u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16FD8:
    /* 00016fd8   2  rts */
    c->pc = RC_ADDR(0x00016fd8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
