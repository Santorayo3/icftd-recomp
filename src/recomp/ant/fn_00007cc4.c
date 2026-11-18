/* fn_00007cc4 - 58 byte(s), 17 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00007cc4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00007cc4u): goto L_7CC4;
    case RC_ADDR(0x00007cc8u): goto L_7CC8;
    case RC_ADDR(0x00007cccu): goto L_7CCC;
    case RC_ADDR(0x00007cd0u): goto L_7CD0;
    case RC_ADDR(0x00007cd2u): goto L_7CD2;
    case RC_ADDR(0x00007cd6u): goto L_7CD6;
    case RC_ADDR(0x00007cdau): goto L_7CDA;
    case RC_ADDR(0x00007cdeu): goto L_7CDE;
    case RC_ADDR(0x00007ce0u): goto L_7CE0;
    case RC_ADDR(0x00007ce4u): goto L_7CE4;
    case RC_ADDR(0x00007ce8u): goto L_7CE8;
    case RC_ADDR(0x00007ceau): goto L_7CEA;
    case RC_ADDR(0x00007ceeu): goto L_7CEE;
    case RC_ADDR(0x00007cf2u): goto L_7CF2;
    case RC_ADDR(0x00007cf6u): goto L_7CF6;
    case RC_ADDR(0x00007cf8u): goto L_7CF8;
    case RC_ADDR(0x00007cfau): goto L_7CFA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_7CC4:
    /* 00007cc4   4  link.w A5,#ffffffee */
    c->pc = RC_ADDR(0x00007cc4u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x12u;

L_7CC8:
    /* 00007cc8   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00007cc8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7CCC:
    /* 00007ccc   4  jsr (0000226a) */
    c->pc = RC_ADDR(0x00007cccu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00007cd0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000226au);
    return;

L_7CD0:
    /* 00007cd0   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00007cd0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_7CD2:
    /* 00007cd2   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00007cd2u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7CD6:
    /* 00007cd6   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00007cd6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_7CDA:
    /* 00007cda   4  move.b (1,A0),D0 */
    c->pc = RC_ADDR(0x00007cdau);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_7CDE:
    /* 00007cde   2  ext.w D0 */
    c->pc = RC_ADDR(0x00007cdeu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_7CE0:
    /* 00007ce0   4  move.w D0,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00007ce0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7CE4:
    /* 00007ce4   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00007ce4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_7CE8:
    /* 00007ce8   2  addq.l #2,A0 */
    c->pc = RC_ADDR(0x00007ce8u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000002u;

L_7CEA:
    /* 00007cea   4  move.l A0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00007ceau);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7CEE:
    /* 00007cee   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00007ceeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7CF2:
    /* 00007cf2   4  subq.w #1,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00007cf2u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x12u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_7CF6:
    /* 00007cf6   2  tst.w D0 */
    c->pc = RC_ADDR(0x00007cf6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_7CF8:
    /* 00007cf8   2  beq 00007d2e */
    c->pc = RC_ADDR(0x00007cf8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7))
    {
        c->pc = RC_ADDR(0x00007d2eu);
        return;
    }

L_7CFA:
    /* 00007cfa   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00007cfau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

    /* falls through into 00007cfe */
    c->pc = RC_ADDR(0x00007cfeu);
    return;
}
