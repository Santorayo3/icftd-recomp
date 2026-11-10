/* fn_00020592 - 76 byte(s), 27 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020592(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00020592u): goto L_20592;
    case RC_ADDR(0x00020596u): goto L_20596;
    case RC_ADDR(0x0002059au): goto L_2059A;
    case RC_ADDR(0x0002059eu): goto L_2059E;
    case RC_ADDR(0x000205a2u): goto L_205A2;
    case RC_ADDR(0x000205a4u): goto L_205A4;
    case RC_ADDR(0x000205a6u): goto L_205A6;
    case RC_ADDR(0x000205a8u): goto L_205A8;
    case RC_ADDR(0x000205aau): goto L_205AA;
    case RC_ADDR(0x000205acu): goto L_205AC;
    case RC_ADDR(0x000205aeu): goto L_205AE;
    case RC_ADDR(0x000205b2u): goto L_205B2;
    case RC_ADDR(0x000205b4u): goto L_205B4;
    case RC_ADDR(0x000205b6u): goto L_205B6;
    case RC_ADDR(0x000205bau): goto L_205BA;
    case RC_ADDR(0x000205bcu): goto L_205BC;
    case RC_ADDR(0x000205c0u): goto L_205C0;
    case RC_ADDR(0x000205c2u): goto L_205C2;
    case RC_ADDR(0x000205c6u): goto L_205C6;
    case RC_ADDR(0x000205c8u): goto L_205C8;
    case RC_ADDR(0x000205cau): goto L_205CA;
    case RC_ADDR(0x000205ceu): goto L_205CE;
    case RC_ADDR(0x000205d0u): goto L_205D0;
    case RC_ADDR(0x000205d4u): goto L_205D4;
    case RC_ADDR(0x000205d6u): goto L_205D6;
    case RC_ADDR(0x000205dau): goto L_205DA;
    case RC_ADDR(0x000205dcu): goto L_205DC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20592:
    /* 00020592   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00020592u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_20596:
    /* 00020596   4  move.w (3ad6,A4),D0 */
    c->pc = RC_ADDR(0x00020596u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ad6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2059A:
    /* 0002059a   4  movea.l (3ae4,A4),A0 */
    c->pc = RC_ADDR(0x0002059au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3ae4u));
    c->a[0] = t0;

L_2059E:
    /* 0002059e   4  cmpi.w #18,D0 */
    c->pc = RC_ADDR(0x0002059eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000018u);

L_205A2:
    /* 000205a2   2  bgt 000205b6 */
    c->pc = RC_ADDR(0x000205a2u);
    rc_step(c, m);
    if (rc_cond(c, 14)) goto L_205B6;

L_205A4:
    /* 000205a4   2  clr.l D1 */
    c->pc = RC_ADDR(0x000205a4u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_205A6:
    /* 000205a6   2  move.b (A0)+,D1 */
    c->pc = RC_ADDR(0x000205a6u);
    rc_step(c, m);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_205A8:
    /* 000205a8   2  moveq #18,D2 */
    c->pc = RC_ADDR(0x000205a8u);
    rc_step(c, m);
    c->d[2] = 0x00000018u;
    rc_set_nzvc(c, c->d[2], RC_L);

L_205AA:
    /* 000205aa   2  sub.w D0,D2 */
    c->pc = RC_ADDR(0x000205aau);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_205AC:
    /* 000205ac   2  lsl.l D2,D1 */
    c->pc = RC_ADDR(0x000205acu);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 1, 1, (c->d[2] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_205AE:
    /* 000205ae   4  or.l D1,(3ad8,A4) */
    c->pc = RC_ADDR(0x000205aeu);
    rc_step(c, m);
    t3 = (c->a[4] + 0x3ad8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 | rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_L);

L_205B2:
    /* 000205b2   2  addq.w #8,D0 */
    c->pc = RC_ADDR(0x000205b2u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_205B4:
    /* 000205b4   2  bra 0002059e */
    c->pc = RC_ADDR(0x000205b4u);
    rc_step(c, m);
    rc_tick();
    goto L_2059E;

L_205B6:
    /* 000205b6   4  move.l A0,(3ae4,A4) */
    c->pc = RC_ADDR(0x000205b6u);
    rc_step(c, m);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x3ae4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_205BA:
    /* 000205ba   2  clr.l D2 */
    c->pc = RC_ADDR(0x000205bau);
    rc_step(c, m);
    rc_d_set(c, 2, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_205BC:
    /* 000205bc   4  move.w (2b1a,A4),D2 */
    c->pc = RC_ADDR(0x000205bcu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2b1au));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_205C0:
    /* 000205c0   2  sub.w D2,D0 */
    c->pc = RC_ADDR(0x000205c0u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_205C2:
    /* 000205c2   4  move.w D0,(3ad6,A4) */
    c->pc = RC_ADDR(0x000205c2u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x3ad6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_205C6:
    /* 000205c6   2  moveq #20,D1 */
    c->pc = RC_ADDR(0x000205c6u);
    rc_step(c, m);
    c->d[1] = 0x00000020u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_205C8:
    /* 000205c8   2  sub.w D2,D1 */
    c->pc = RC_ADDR(0x000205c8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_205CA:
    /* 000205ca   4  move.l (3ad8,A4),D0 */
    c->pc = RC_ADDR(0x000205cau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3ad8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_205CE:
    /* 000205ce   2  lsr.l D1,D0 */
    c->pc = RC_ADDR(0x000205ceu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_205D0:
    /* 000205d0   4  move.l (3ad8,A4),D1 */
    c->pc = RC_ADDR(0x000205d0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3ad8u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_205D4:
    /* 000205d4   2  lsl.l D2,D1 */
    c->pc = RC_ADDR(0x000205d4u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 1, 1, (c->d[2] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_205D6:
    /* 000205d6   4  move.l D1,(3ad8,A4) */
    c->pc = RC_ADDR(0x000205d6u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x3ad8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_205DA:
    /* 000205da   2  unlk A5 */
    c->pc = RC_ADDR(0x000205dau);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_205DC:
    /* 000205dc   2  rts */
    c->pc = RC_ADDR(0x000205dcu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
