/* fn_000177c2 - 32 byte(s), 10 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000177c2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000177c2u): goto L_177C2;
    case RC_ADDR(0x000177c4u): goto L_177C4;
    case RC_ADDR(0x000177c8u): goto L_177C8;
    case RC_ADDR(0x000177ceu): goto L_177CE;
    case RC_ADDR(0x000177d2u): goto L_177D2;
    case RC_ADDR(0x000177d4u): goto L_177D4;
    case RC_ADDR(0x000177d6u): goto L_177D6;
    case RC_ADDR(0x000177dau): goto L_177DA;
    case RC_ADDR(0x000177deu): goto L_177DE;
    case RC_ADDR(0x000177e0u): goto L_177E0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_177C2:
    /* 000177c2   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x000177c2u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_177C4:
    /* 000177c4   4  jsr (0001879c) */
    c->pc = RC_ADDR(0x000177c4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000177c8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001879cu);
    return;

L_177C8:
    /* 000177c8   6  andi.l #ffff,D0 */
    c->pc = RC_ADDR(0x000177c8u);
    rc_step(c, m, 14);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 & 0x0000ffffu;
    rc_d_set(c, 0, RC_L, t2);
    rc_set_nzvc(c, t2, RC_L);

L_177CE:
    /* 000177ce   4  divu.w #f,D0 */
    c->pc = RC_ADDR(0x000177ceu);
    rc_step(c, m, 144);
    t0 = 0x0000000fu;
    rc_divu(c, m, 0, t0);

L_177D2:
    /* 000177d2   2  swap D0 */
    c->pc = RC_ADDR(0x000177d2u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_177D4:
    /* 000177d4   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x000177d4u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_177D6:
    /* 000177d6   4  lea (ffffb52a,A4),A0 */
    c->pc = RC_ADDR(0x000177d6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4ad6u);

L_177DA:
    /* 000177da   4  move.w (0,A0,D0.w),D0 */
    c->pc = RC_ADDR(0x000177dau);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_177DE:
    /* 000177de   2  movea.l (A7)+,A0 */
    c->pc = RC_ADDR(0x000177deu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;

L_177E0:
    /* 000177e0   2  rts */
    c->pc = RC_ADDR(0x000177e0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
