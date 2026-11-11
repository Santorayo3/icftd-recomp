/* fn_00016ef6 - 124 byte(s), 34 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00016ef6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00016ef6u): goto L_16EF6;
    case RC_ADDR(0x00016efau): goto L_16EFA;
    case RC_ADDR(0x00016efeu): goto L_16EFE;
    case RC_ADDR(0x00016f02u): goto L_16F02;
    case RC_ADDR(0x00016f04u): goto L_16F04;
    case RC_ADDR(0x00016f08u): goto L_16F08;
    case RC_ADDR(0x00016f0cu): goto L_16F0C;
    case RC_ADDR(0x00016f0eu): goto L_16F0E;
    case RC_ADDR(0x00016f10u): goto L_16F10;
    case RC_ADDR(0x00016f14u): goto L_16F14;
    case RC_ADDR(0x00016f18u): goto L_16F18;
    case RC_ADDR(0x00016f1au): goto L_16F1A;
    case RC_ADDR(0x00016f1cu): goto L_16F1C;
    case RC_ADDR(0x00016f20u): goto L_16F20;
    case RC_ADDR(0x00016f26u): goto L_16F26;
    case RC_ADDR(0x00016f2au): goto L_16F2A;
    case RC_ADDR(0x00016f30u): goto L_16F30;
    case RC_ADDR(0x00016f32u): goto L_16F32;
    case RC_ADDR(0x00016f38u): goto L_16F38;
    case RC_ADDR(0x00016f3cu): goto L_16F3C;
    case RC_ADDR(0x00016f42u): goto L_16F42;
    case RC_ADDR(0x00016f46u): goto L_16F46;
    case RC_ADDR(0x00016f4cu): goto L_16F4C;
    case RC_ADDR(0x00016f50u): goto L_16F50;
    case RC_ADDR(0x00016f54u): goto L_16F54;
    case RC_ADDR(0x00016f58u): goto L_16F58;
    case RC_ADDR(0x00016f5cu): goto L_16F5C;
    case RC_ADDR(0x00016f60u): goto L_16F60;
    case RC_ADDR(0x00016f62u): goto L_16F62;
    case RC_ADDR(0x00016f64u): goto L_16F64;
    case RC_ADDR(0x00016f68u): goto L_16F68;
    case RC_ADDR(0x00016f6cu): goto L_16F6C;
    case RC_ADDR(0x00016f6eu): goto L_16F6E;
    case RC_ADDR(0x00016f70u): goto L_16F70;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16EF6:
    /* 00016ef6   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00016ef6u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_16EFA:
    /* 00016efa   4  pea (12e0,A4) */
    c->pc = RC_ADDR(0x00016efau);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x12e0u));

L_16EFE:
    /* 00016efe   4  jsr (ffff836e,A4) */
    c->pc = RC_ADDR(0x00016efeu);
    rc_step(c, m, 18);
    /* vector 146 */
    rc_push32(c, m, RC_ADDR(0x00016f02u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021dc4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021862u);
    return;

L_16F02:
    /* 00016f02   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00016f02u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_16F04:
    /* 00016f04   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00016f04u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16F08:
    /* 00016f08   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00016f08u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16F0C:
    /* 00016f0c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016f0cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16F0E:
    /* 00016f0e   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00016f0eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_16F10:
    /* 00016f10   4  lea (e38,A4),A0 */
    c->pc = RC_ADDR(0x00016f10u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xe38u);

L_16F14:
    /* 00016f14   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00016f14u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16F18:
    /* 00016f18   2  ext.l D1 */
    c->pc = RC_ADDR(0x00016f18u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_16F1A:
    /* 00016f1a   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00016f1au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_16F1C:
    /* 00016f1c   4  lea (136c,A4),A1 */
    c->pc = RC_ADDR(0x00016f1cu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x136cu);

L_16F20:
    /* 00016f20   6  move.l (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00016f20u);
    rc_step(c, m, 32);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_16F26:
    /* 00016f26   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00016f26u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16F2A:
    /* 00016f2a   6  cmpi.w #5,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00016f2au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_16F30:
    /* 00016f30   2  blt 00016f08 */
    c->pc = RC_ADDR(0x00016f30u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_16F08; }

L_16F32:
    /* 00016f32   6  move.w #28,(1364,A4) */
    c->pc = RC_ADDR(0x00016f32u);
    rc_step(c, m, 16);
    t0 = 0x00000028u;
    rc_wr16(c, m, (c->a[4] + 0x1364u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16F38:
    /* 00016f38   4  movea.l (12c6,A4),A0 */
    c->pc = RC_ADDR(0x00016f38u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x12c6u));
    c->a[0] = t0;

L_16F3C:
    /* 00016f3c   6  move.w (2,A0),(1366,A4) */
    c->pc = RC_ADDR(0x00016f3cu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_wr16(c, m, (c->a[4] + 0x1366u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16F42:
    /* 00016f42   4  movea.l (12c6,A4),A0 */
    c->pc = RC_ADDR(0x00016f42u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x12c6u));
    c->a[0] = t0;

L_16F46:
    /* 00016f46   6  move.b (5,A0),(1369,A4) */
    c->pc = RC_ADDR(0x00016f46u);
    rc_step(c, m, 20);
    t0 = rc_rd8(c, m, (c->a[0] + 0x5u));
    rc_wr8(c, m, (c->a[4] + 0x1369u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_16F4C:
    /* 00016f4c   4  lea (1364,A4),A0 */
    c->pc = RC_ADDR(0x00016f4cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1364u);

L_16F50:
    /* 00016f50   4  move.l A0,(12e4,A4) */
    c->pc = RC_ADDR(0x00016f50u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x12e4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_16F54:
    /* 00016f54   4  move.l (ffff8574,A4),-(A7) */
    c->pc = RC_ADDR(0x00016f54u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7a8cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16F58:
    /* 00016f58   4  pea (12e0,A4) */
    c->pc = RC_ADDR(0x00016f58u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x12e0u));

L_16F5C:
    /* 00016f5c   4  jsr (ffff8398,A4) */
    c->pc = RC_ADDR(0x00016f5cu);
    rc_step(c, m, 18);
    /* vector 153 */
    rc_push32(c, m, RC_ADDR(0x00016f60u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021deeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002190au);
    return;

L_16F60:
    /* 00016f60   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00016f60u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_16F62:
    /* 00016f62   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00016f62u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_16F64:
    /* 00016f64   4  pea (12e0,A4) */
    c->pc = RC_ADDR(0x00016f64u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x12e0u));

L_16F68:
    /* 00016f68   4  jsr (ffff8392,A4) */
    c->pc = RC_ADDR(0x00016f68u);
    rc_step(c, m, 18);
    /* vector 152 */
    rc_push32(c, m, RC_ADDR(0x00016f6cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021de8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000218fau);
    return;

L_16F6C:
    /* 00016f6c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00016f6cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_16F6E:
    /* 00016f6e   2  unlk A5 */
    c->pc = RC_ADDR(0x00016f6eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16F70:
    /* 00016f70   2  rts */
    c->pc = RC_ADDR(0x00016f70u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
