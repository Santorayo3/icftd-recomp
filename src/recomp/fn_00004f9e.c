/* fn_00004f9e - 116 byte(s), 35 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00004f9e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x00004f9eu): goto L_4F9E;
    case RC_ADDR(0x00004fa2u): goto L_4FA2;
    case RC_ADDR(0x00004fa6u): goto L_4FA6;
    case RC_ADDR(0x00004facu): goto L_4FAC;
    case RC_ADDR(0x00004fb0u): goto L_4FB0;
    case RC_ADDR(0x00004fb4u): goto L_4FB4;
    case RC_ADDR(0x00004fb8u): goto L_4FB8;
    case RC_ADDR(0x00004fbau): goto L_4FBA;
    case RC_ADDR(0x00004fbeu): goto L_4FBE;
    case RC_ADDR(0x00004fc2u): goto L_4FC2;
    case RC_ADDR(0x00004fc6u): goto L_4FC6;
    case RC_ADDR(0x00004fcau): goto L_4FCA;
    case RC_ADDR(0x00004fceu): goto L_4FCE;
    case RC_ADDR(0x00004fd2u): goto L_4FD2;
    case RC_ADDR(0x00004fd6u): goto L_4FD6;
    case RC_ADDR(0x00004fd8u): goto L_4FD8;
    case RC_ADDR(0x00004fdcu): goto L_4FDC;
    case RC_ADDR(0x00004fe0u): goto L_4FE0;
    case RC_ADDR(0x00004fe2u): goto L_4FE2;
    case RC_ADDR(0x00004fe6u): goto L_4FE6;
    case RC_ADDR(0x00004fe8u): goto L_4FE8;
    case RC_ADDR(0x00004feau): goto L_4FEA;
    case RC_ADDR(0x00004feeu): goto L_4FEE;
    case RC_ADDR(0x00004ff0u): goto L_4FF0;
    case RC_ADDR(0x00004ff2u): goto L_4FF2;
    case RC_ADDR(0x00004ff6u): goto L_4FF6;
    case RC_ADDR(0x00004ff8u): goto L_4FF8;
    case RC_ADDR(0x00004ffau): goto L_4FFA;
    case RC_ADDR(0x00004ffeu): goto L_4FFE;
    case RC_ADDR(0x00005000u): goto L_5000;
    case RC_ADDR(0x00005002u): goto L_5002;
    case RC_ADDR(0x00005006u): goto L_5006;
    case RC_ADDR(0x0000500au): goto L_500A;
    case RC_ADDR(0x0000500eu): goto L_500E;
    case RC_ADDR(0x00005010u): goto L_5010;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_4F9E:
    /* 00004f9e   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004f9eu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_4FA2:
    /* 00004fa2   4  movea.l (ffffcb14,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004fa2u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[0] = t0;

L_4FA6:
    /* 00004fa6   6  move.l (ffffcbbc,A4),(4,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004fa6u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4FAC:
    /* 00004fac   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004facu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4FB0:
    /* 00004fb0   4  move.l (ffffcb14,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004fb0u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4FB4:
    /* 00004fb4   4  jsr (ffff838c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004fb4u);
    /* vector 151 */
    rc_push32(c, m, RC_ADDR(0x00004fb8u));
    rc_depth++;
    c->pc = RC_ADDR(0x000218eau);
    return;

L_4FB8:
    /* 00004fb8   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004fb8u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_4FBA:
    /* 00004fba   4  move.l (18,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004fbau);
    t0 = rc_rd32(c, m, (c->a[5] + 0x18u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4FBE:
    /* 00004fbe   4  move.l (14,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004fbeu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4FC2:
    /* 00004fc2   4  move.l (10,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004fc2u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4FC6:
    /* 00004fc6   4  move.l (c,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004fc6u);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4FCA:
    /* 00004fca   4  move.l (ffffcb14,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004fcau);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4FCE:
    /* 00004fce   4  jsr (ffff8386,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004fceu);
    /* vector 150 */
    rc_push32(c, m, RC_ADDR(0x00004fd2u));
    rc_depth++;
    c->pc = RC_ADDR(0x000218d8u);
    return;

L_4FD2:
    /* 00004fd2   4  lea (14,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004fd2u);
    c->a[7] = (c->a[7] + 0x14u);

L_4FD6:
    /* 00004fd6   2  clr.l -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004fd6u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_4FD8:
    /* 00004fd8   4  move.l (ffffcb14,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004fd8u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4FDC:
    /* 00004fdc   4  jsr (ffff838c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004fdcu);
    /* vector 151 */
    rc_push32(c, m, RC_ADDR(0x00004fe0u));
    rc_depth++;
    c->pc = RC_ADDR(0x000218eau);
    return;

L_4FE0:
    /* 00004fe0   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004fe0u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_4FE2:
    /* 00004fe2   4  move.l (18,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004fe2u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x18u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_4FE6:
    /* 00004fe6   2  subq.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004fe6u);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_4FE8:
    /* 00004fe8   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004fe8u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4FEA:
    /* 00004fea   4  move.l (14,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004feau);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_4FEE:
    /* 00004fee   2  subq.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004feeu);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_4FF0:
    /* 00004ff0   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004ff0u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4FF2:
    /* 00004ff2   4  move.l (10,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004ff2u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_4FF6:
    /* 00004ff6   2  addq.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004ff6u);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_4FF8:
    /* 00004ff8   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004ff8u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4FFA:
    /* 00004ffa   4  move.l (c,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004ffau);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_4FFE:
    /* 00004ffe   2  addq.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004ffeu);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_5000:
    /* 00005000   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005000u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5002:
    /* 00005002   4  move.l (ffffcb14,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005002u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5006:
    /* 00005006   4  jsr (ffff8386,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005006u);
    /* vector 150 */
    rc_push32(c, m, RC_ADDR(0x0000500au));
    rc_depth++;
    c->pc = RC_ADDR(0x000218d8u);
    return;

L_500A:
    /* 0000500a   4  lea (14,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000500au);
    c->a[7] = (c->a[7] + 0x14u);

L_500E:
    /* 0000500e   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000500eu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_5010:
    /* 00005010   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005010u);
    rc_ret(c, m);
    return;

}
