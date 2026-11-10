/* fn_00017f34 - 168 byte(s), 46 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00017f34(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00017f34u): goto L_17F34;
    case RC_ADDR(0x00017f38u): goto L_17F38;
    case RC_ADDR(0x00017f3cu): goto L_17F3C;
    case RC_ADDR(0x00017f42u): goto L_17F42;
    case RC_ADDR(0x00017f46u): goto L_17F46;
    case RC_ADDR(0x00017f4au): goto L_17F4A;
    case RC_ADDR(0x00017f4cu): goto L_17F4C;
    case RC_ADDR(0x00017f50u): goto L_17F50;
    case RC_ADDR(0x00017f54u): goto L_17F54;
    case RC_ADDR(0x00017f56u): goto L_17F56;
    case RC_ADDR(0x00017f58u): goto L_17F58;
    case RC_ADDR(0x00017f5cu): goto L_17F5C;
    case RC_ADDR(0x00017f62u): goto L_17F62;
    case RC_ADDR(0x00017f64u): goto L_17F64;
    case RC_ADDR(0x00017f68u): goto L_17F68;
    case RC_ADDR(0x00017f6au): goto L_17F6A;
    case RC_ADDR(0x00017f6cu): goto L_17F6C;
    case RC_ADDR(0x00017f70u): goto L_17F70;
    case RC_ADDR(0x00017f74u): goto L_17F74;
    case RC_ADDR(0x00017f76u): goto L_17F76;
    case RC_ADDR(0x00017f78u): goto L_17F78;
    case RC_ADDR(0x00017f7cu): goto L_17F7C;
    case RC_ADDR(0x00017f82u): goto L_17F82;
    case RC_ADDR(0x00017f86u): goto L_17F86;
    case RC_ADDR(0x00017f88u): goto L_17F88;
    case RC_ADDR(0x00017f8cu): goto L_17F8C;
    case RC_ADDR(0x00017f92u): goto L_17F92;
    case RC_ADDR(0x00017f96u): goto L_17F96;
    case RC_ADDR(0x00017f98u): goto L_17F98;
    case RC_ADDR(0x00017f9cu): goto L_17F9C;
    case RC_ADDR(0x00017fa2u): goto L_17FA2;
    case RC_ADDR(0x00017fa6u): goto L_17FA6;
    case RC_ADDR(0x00017facu): goto L_17FAC;
    case RC_ADDR(0x00017fb0u): goto L_17FB0;
    case RC_ADDR(0x00017fb6u): goto L_17FB6;
    case RC_ADDR(0x00017fbau): goto L_17FBA;
    case RC_ADDR(0x00017fbeu): goto L_17FBE;
    case RC_ADDR(0x00017fc0u): goto L_17FC0;
    case RC_ADDR(0x00017fc4u): goto L_17FC4;
    case RC_ADDR(0x00017fc8u): goto L_17FC8;
    case RC_ADDR(0x00017fcau): goto L_17FCA;
    case RC_ADDR(0x00017fceu): goto L_17FCE;
    case RC_ADDR(0x00017fd2u): goto L_17FD2;
    case RC_ADDR(0x00017fd4u): goto L_17FD4;
    case RC_ADDR(0x00017fd8u): goto L_17FD8;
    case RC_ADDR(0x00017fdau): goto L_17FDA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_17F34:
    /* 00017f34   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x00017f34u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_17F38:
    /* 00017f38   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00017f38u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17F3C:
    /* 00017f3c   6  pea (00010002).l */
    c->pc = RC_ADDR(0x00017f3cu);
    rc_step(c, m);
    rc_push32(c, m, 0x00010002u);

L_17F42:
    /* 00017f42   4  pea (00000190).l */
    c->pc = RC_ADDR(0x00017f42u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000190u);

L_17F46:
    /* 00017f46   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00017f46u);
    rc_step(c, m);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x00017f4au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d8eu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002168cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021690u);
    return;

L_17F4A:
    /* 00017f4a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00017f4au);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_17F4C:
    /* 00017f4c   4  move.l D0,(a12,A4) */
    c->pc = RC_ADDR(0x00017f4cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xa12u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_17F50:
    /* 00017f50   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00017f50u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17F54:
    /* 00017f54   2  ext.l D0 */
    c->pc = RC_ADDR(0x00017f54u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_17F56:
    /* 00017f56   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00017f56u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_17F58:
    /* 00017f58   4  lea (ffffb45c,A4),A0 */
    c->pc = RC_ADDR(0x00017f58u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x4ba4u);

L_17F5C:
    /* 00017f5c   6  cmpi.w #face,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00017f5cu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000faceu);

L_17F62:
    /* 00017f62   2  beq 00017f88 */
    c->pc = RC_ADDR(0x00017f62u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_17F88;

L_17F64:
    /* 00017f64   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00017f64u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17F68:
    /* 00017f68   2  ext.l D0 */
    c->pc = RC_ADDR(0x00017f68u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_17F6A:
    /* 00017f6a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00017f6au);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_17F6C:
    /* 00017f6c   4  lea (ffffb45c,A4),A0 */
    c->pc = RC_ADDR(0x00017f6cu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x4ba4u);

L_17F70:
    /* 00017f70   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00017f70u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17F74:
    /* 00017f74   2  ext.l D1 */
    c->pc = RC_ADDR(0x00017f74u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_17F76:
    /* 00017f76   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00017f76u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_17F78:
    /* 00017f78   4  movea.l (a12,A4),A1 */
    c->pc = RC_ADDR(0x00017f78u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa12u));
    c->a[1] = t0;

L_17F7C:
    /* 00017f7c   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00017f7cu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17F82:
    /* 00017f82   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00017f82u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17F86:
    /* 00017f86   2  bra 00017f50 */
    c->pc = RC_ADDR(0x00017f86u);
    rc_step(c, m);
    rc_tick();
    goto L_17F50;

L_17F88:
    /* 00017f88   4  movea.l (ffffcb0c,A4),A0 */
    c->pc = RC_ADDR(0x00017f88u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f4u));
    c->a[0] = t0;

L_17F8C:
    /* 00017f8c   6  move.l (4,A0),(fffffffa,A5) */
    c->pc = RC_ADDR(0x00017f8cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    rc_wr32(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_17F92:
    /* 00017f92   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x00017f92u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_17F96:
    /* 00017f96   2  clr.l (A0) */
    c->pc = RC_ADDR(0x00017f96u);
    rc_step(c, m);
    rc_wr32(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_17F98:
    /* 00017f98   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x00017f98u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_17F9C:
    /* 00017f9c   6  move.l (4,A0),(e32,A4) */
    c->pc = RC_ADDR(0x00017f9cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    rc_wr32(c, m, (c->a[4] + 0xe32u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_17FA2:
    /* 00017fa2   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x00017fa2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_17FA6:
    /* 00017fa6   6  move.w (8,A0),(e36,A4) */
    c->pc = RC_ADDR(0x00017fa6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[0] + 0x8u));
    rc_wr16(c, m, (c->a[4] + 0xe36u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17FAC:
    /* 00017fac   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x00017facu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_17FB0:
    /* 00017fb0   6  move.l (a12,A4),(4,A0) */
    c->pc = RC_ADDR(0x00017fb0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa12u));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_17FB6:
    /* 00017fb6   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x00017fb6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_17FBA:
    /* 00017fba   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00017fbau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17FBE:
    /* 00017fbe   2  ext.l D0 */
    c->pc = RC_ADDR(0x00017fbeu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_17FC0:
    /* 00017fc0   4  divs.w #2,D0 */
    c->pc = RC_ADDR(0x00017fc0u);
    rc_step(c, m);
    t0 = 0x00000002u;
    rc_divs(c, m, 0, t0);

L_17FC4:
    /* 00017fc4   4  move.w D0,(8,A0) */
    c->pc = RC_ADDR(0x00017fc4u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17FC8:
    /* 00017fc8   2  bsr 00017fdc */
    c->pc = RC_ADDR(0x00017fc8u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00017fcau));
    rc_depth++;
    c->pc = RC_ADDR(0x00017fdcu);
    return;

L_17FCA:
    /* 00017fca   4  move.l (ffffcb0c,A4),-(A7) */
    c->pc = RC_ADDR(0x00017fcau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17FCE:
    /* 00017fce   4  jsr (ffff8374,A4) */
    c->pc = RC_ADDR(0x00017fceu);
    rc_step(c, m);
    /* vector 147 */
    rc_push32(c, m, RC_ADDR(0x00017fd2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021dcau);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021898u);
    return;

L_17FD2:
    /* 00017fd2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00017fd2u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_17FD4:
    /* 00017fd4   4  jsr (00018108) */
    c->pc = RC_ADDR(0x00017fd4u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00017fd8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00018108u);
    return;

L_17FD8:
    /* 00017fd8   2  unlk A5 */
    c->pc = RC_ADDR(0x00017fd8u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_17FDA:
    /* 00017fda   2  rts */
    c->pc = RC_ADDR(0x00017fdau);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
