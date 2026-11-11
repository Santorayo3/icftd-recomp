/* fn_00011f64 - 168 byte(s), 46 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00011f64(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00011f64u): goto L_11F64;
    case RC_ADDR(0x00011f68u): goto L_11F68;
    case RC_ADDR(0x00011f6cu): goto L_11F6C;
    case RC_ADDR(0x00011f70u): goto L_11F70;
    case RC_ADDR(0x00011f76u): goto L_11F76;
    case RC_ADDR(0x00011f7au): goto L_11F7A;
    case RC_ADDR(0x00011f7eu): goto L_11F7E;
    case RC_ADDR(0x00011f80u): goto L_11F80;
    case RC_ADDR(0x00011f84u): goto L_11F84;
    case RC_ADDR(0x00011f88u): goto L_11F88;
    case RC_ADDR(0x00011f8au): goto L_11F8A;
    case RC_ADDR(0x00011f8cu): goto L_11F8C;
    case RC_ADDR(0x00011f90u): goto L_11F90;
    case RC_ADDR(0x00011f96u): goto L_11F96;
    case RC_ADDR(0x00011f98u): goto L_11F98;
    case RC_ADDR(0x00011f9cu): goto L_11F9C;
    case RC_ADDR(0x00011f9eu): goto L_11F9E;
    case RC_ADDR(0x00011fa0u): goto L_11FA0;
    case RC_ADDR(0x00011fa4u): goto L_11FA4;
    case RC_ADDR(0x00011fa8u): goto L_11FA8;
    case RC_ADDR(0x00011faau): goto L_11FAA;
    case RC_ADDR(0x00011facu): goto L_11FAC;
    case RC_ADDR(0x00011fb0u): goto L_11FB0;
    case RC_ADDR(0x00011fb6u): goto L_11FB6;
    case RC_ADDR(0x00011fbau): goto L_11FBA;
    case RC_ADDR(0x00011fbcu): goto L_11FBC;
    case RC_ADDR(0x00011fc0u): goto L_11FC0;
    case RC_ADDR(0x00011fc6u): goto L_11FC6;
    case RC_ADDR(0x00011fcau): goto L_11FCA;
    case RC_ADDR(0x00011fccu): goto L_11FCC;
    case RC_ADDR(0x00011fd0u): goto L_11FD0;
    case RC_ADDR(0x00011fd6u): goto L_11FD6;
    case RC_ADDR(0x00011fdau): goto L_11FDA;
    case RC_ADDR(0x00011fe0u): goto L_11FE0;
    case RC_ADDR(0x00011fe4u): goto L_11FE4;
    case RC_ADDR(0x00011feau): goto L_11FEA;
    case RC_ADDR(0x00011feeu): goto L_11FEE;
    case RC_ADDR(0x00011ff2u): goto L_11FF2;
    case RC_ADDR(0x00011ff4u): goto L_11FF4;
    case RC_ADDR(0x00011ff8u): goto L_11FF8;
    case RC_ADDR(0x00011ffcu): goto L_11FFC;
    case RC_ADDR(0x00011ffeu): goto L_11FFE;
    case RC_ADDR(0x00012002u): goto L_12002;
    case RC_ADDR(0x00012006u): goto L_12006;
    case RC_ADDR(0x00012008u): goto L_12008;
    case RC_ADDR(0x0001200au): goto L_1200A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11F64:
    /* 00011f64   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x00011f64u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_11F68:
    /* 00011f68   4  clr.w (e30,A4) */
    c->pc = RC_ADDR(0x00011f68u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xe30u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11F6C:
    /* 00011f6c   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00011f6cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11F70:
    /* 00011f70   6  pea (00010002).l */
    c->pc = RC_ADDR(0x00011f70u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010002u);

L_11F76:
    /* 00011f76   4  pea (00000190).l */
    c->pc = RC_ADDR(0x00011f76u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000190u);

L_11F7A:
    /* 00011f7a   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00011f7au);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x00011f7eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d8eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002168cu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021690u);
    return;

L_11F7E:
    /* 00011f7e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00011f7eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_11F80:
    /* 00011f80   4  move.l D0,(e04,A4) */
    c->pc = RC_ADDR(0x00011f80u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xe04u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11F84:
    /* 00011f84   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00011f84u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11F88:
    /* 00011f88   2  ext.l D0 */
    c->pc = RC_ADDR(0x00011f88u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_11F8A:
    /* 00011f8a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00011f8au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_11F8C:
    /* 00011f8c   4  lea (ffffb03a,A4),A0 */
    c->pc = RC_ADDR(0x00011f8cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4fc6u);

L_11F90:
    /* 00011f90   6  cmpi.w #face,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00011f90u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000faceu);

L_11F96:
    /* 00011f96   2  beq 00011fbc */
    c->pc = RC_ADDR(0x00011f96u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_11FBC;

L_11F98:
    /* 00011f98   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00011f98u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11F9C:
    /* 00011f9c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00011f9cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_11F9E:
    /* 00011f9e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00011f9eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_11FA0:
    /* 00011fa0   4  lea (ffffb03a,A4),A0 */
    c->pc = RC_ADDR(0x00011fa0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4fc6u);

L_11FA4:
    /* 00011fa4   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00011fa4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11FA8:
    /* 00011fa8   2  ext.l D1 */
    c->pc = RC_ADDR(0x00011fa8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_11FAA:
    /* 00011faa   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00011faau);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_11FAC:
    /* 00011fac   4  movea.l (e04,A4),A1 */
    c->pc = RC_ADDR(0x00011facu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe04u));
    c->a[1] = t0;

L_11FB0:
    /* 00011fb0   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00011fb0u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11FB6:
    /* 00011fb6   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00011fb6u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_11FBA:
    /* 00011fba   2  bra 00011f84 */
    c->pc = RC_ADDR(0x00011fbau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_11F84;

L_11FBC:
    /* 00011fbc   4  movea.l (ffffcb0c,A4),A0 */
    c->pc = RC_ADDR(0x00011fbcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f4u));
    c->a[0] = t0;

L_11FC0:
    /* 00011fc0   6  move.l (4,A0),(fffffffa,A5) */
    c->pc = RC_ADDR(0x00011fc0u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    rc_wr32(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11FC6:
    /* 00011fc6   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x00011fc6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_11FCA:
    /* 00011fca   2  clr.l (A0) */
    c->pc = RC_ADDR(0x00011fcau);
    rc_step(c, m, 20);
    rc_wr32(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_11FCC:
    /* 00011fcc   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x00011fccu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_11FD0:
    /* 00011fd0   6  move.l (4,A0),(e32,A4) */
    c->pc = RC_ADDR(0x00011fd0u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    rc_wr32(c, m, (c->a[4] + 0xe32u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11FD6:
    /* 00011fd6   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x00011fd6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_11FDA:
    /* 00011fda   6  move.w (8,A0),(e36,A4) */
    c->pc = RC_ADDR(0x00011fdau);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0x8u));
    rc_wr16(c, m, (c->a[4] + 0xe36u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11FE0:
    /* 00011fe0   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x00011fe0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_11FE4:
    /* 00011fe4   6  move.l (e04,A4),(4,A0) */
    c->pc = RC_ADDR(0x00011fe4u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe04u));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11FEA:
    /* 00011fea   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x00011feau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_11FEE:
    /* 00011fee   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00011feeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11FF2:
    /* 00011ff2   2  ext.l D0 */
    c->pc = RC_ADDR(0x00011ff2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_11FF4:
    /* 00011ff4   4  divs.w #2,D0 */
    c->pc = RC_ADDR(0x00011ff4u);
    rc_step(c, m, 162);
    t0 = 0x00000002u;
    rc_divs(c, m, 0, t0);

L_11FF8:
    /* 00011ff8   4  move.w D0,(8,A0) */
    c->pc = RC_ADDR(0x00011ff8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11FFC:
    /* 00011ffc   2  bsr 0001200c */
    c->pc = RC_ADDR(0x00011ffcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00011ffeu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001200cu);
    return;

L_11FFE:
    /* 00011ffe   4  move.l (ffffcb0c,A4),-(A7) */
    c->pc = RC_ADDR(0x00011ffeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_12002:
    /* 00012002   4  jsr (ffff8374,A4) */
    c->pc = RC_ADDR(0x00012002u);
    rc_step(c, m, 18);
    /* vector 147 */
    rc_push32(c, m, RC_ADDR(0x00012006u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021dcau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021898u);
    return;

L_12006:
    /* 00012006   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00012006u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_12008:
    /* 00012008   2  unlk A5 */
    c->pc = RC_ADDR(0x00012008u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1200A:
    /* 0001200a   2  rts */
    c->pc = RC_ADDR(0x0001200au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
