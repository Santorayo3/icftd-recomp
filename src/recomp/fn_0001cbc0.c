/* fn_0001cbc0 - 60 byte(s), 17 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001cbc0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001cbc0u): goto L_1CBC0;
    case RC_ADDR(0x0001cbc4u): goto L_1CBC4;
    case RC_ADDR(0x0001cbc6u): goto L_1CBC6;
    case RC_ADDR(0x0001cbc8u): goto L_1CBC8;
    case RC_ADDR(0x0001cbccu): goto L_1CBCC;
    case RC_ADDR(0x0001cbd0u): goto L_1CBD0;
    case RC_ADDR(0x0001cbd4u): goto L_1CBD4;
    case RC_ADDR(0x0001cbd8u): goto L_1CBD8;
    case RC_ADDR(0x0001cbdcu): goto L_1CBDC;
    case RC_ADDR(0x0001cbe0u): goto L_1CBE0;
    case RC_ADDR(0x0001cbe6u): goto L_1CBE6;
    case RC_ADDR(0x0001cbe8u): goto L_1CBE8;
    case RC_ADDR(0x0001cbecu): goto L_1CBEC;
    case RC_ADDR(0x0001cbf0u): goto L_1CBF0;
    case RC_ADDR(0x0001cbf4u): goto L_1CBF4;
    case RC_ADDR(0x0001cbf8u): goto L_1CBF8;
    case RC_ADDR(0x0001cbfau): goto L_1CBFA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1CBC0:
    /* 0001cbc0   4  cmpi.b #12,(A0) */
    c->pc = RC_ADDR(0x0001cbc0u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000012u);

L_1CBC4:
    /* 0001cbc4   2  move.b (A4),-(A1) */
    c->pc = RC_ADDR(0x0001cbc4u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[4]);
    c->a[1] -= 1u;
    rc_wr8(c, m, c->a[1], t0);
    rc_set_nzvc(c, t0, RC_B);

L_1CBC6:
    /* 0001cbc6   2  btst D3,D0 */
    c->pc = RC_ADDR(0x0001cbc6u);
    rc_step(c, m);
    t4 = c->d[3] & 31u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1CBC8:
    /* 0001cbc8   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0001cbc8u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1CBCC:
    /* 0001cbcc   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001cbccu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1CBD0:
    /* 0001cbd0   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001cbd0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CBD4:
    /* 0001cbd4   4  lea (26ae,A4),A0 */
    c->pc = RC_ADDR(0x0001cbd4u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x26aeu);

L_1CBD8:
    /* 0001cbd8   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001cbd8u);
    rc_step(c, m);
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_1CBDC:
    /* 0001cbdc   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001cbdcu);
    rc_step(c, m);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1CBE0:
    /* 0001cbe0   6  cmpi.w #6,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001cbe0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000006u);

L_1CBE6:
    /* 0001cbe6   2  blt 0001cbd0 */
    c->pc = RC_ADDR(0x0001cbe6u);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1CBD0; }

L_1CBE8:
    /* 0001cbe8   4  clr.w (fffffdb0,A4) */
    c->pc = RC_ADDR(0x0001cbe8u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x250u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1CBEC:
    /* 0001cbec   4  clr.w (fffffec6,A4) */
    c->pc = RC_ADDR(0x0001cbecu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x13au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1CBF0:
    /* 0001cbf0   4  clr.w (fffffe38,A4) */
    c->pc = RC_ADDR(0x0001cbf0u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x1c8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1CBF4:
    /* 0001cbf4   4  clr.w (fffffe36,A4) */
    c->pc = RC_ADDR(0x0001cbf4u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x1cau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1CBF8:
    /* 0001cbf8   2  unlk A5 */
    c->pc = RC_ADDR(0x0001cbf8u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1CBFA:
    /* 0001cbfa   2  rts */
    c->pc = RC_ADDR(0x0001cbfau);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
