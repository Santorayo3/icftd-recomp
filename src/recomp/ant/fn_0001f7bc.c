/* fn_0001f7bc - 36 byte(s), 13 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001f7bc(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f7bcu): goto L_1F7BC;
    case RC_ADDR(0x0001f7c0u): goto L_1F7C0;
    case RC_ADDR(0x0001f7c2u): goto L_1F7C2;
    case RC_ADDR(0x0001f7c6u): goto L_1F7C6;
    case RC_ADDR(0x0001f7c8u): goto L_1F7C8;
    case RC_ADDR(0x0001f7cau): goto L_1F7CA;
    case RC_ADDR(0x0001f7ceu): goto L_1F7CE;
    case RC_ADDR(0x0001f7d0u): goto L_1F7D0;
    case RC_ADDR(0x0001f7d2u): goto L_1F7D2;
    case RC_ADDR(0x0001f7d6u): goto L_1F7D6;
    case RC_ADDR(0x0001f7dau): goto L_1F7DA;
    case RC_ADDR(0x0001f7dcu): goto L_1F7DC;
    case RC_ADDR(0x0001f7deu): goto L_1F7DE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F7BC:
    /* 0001f7bc   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001f7bcu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1F7C0:
    /* 0001f7c0   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001f7c0u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F7C2:
    /* 0001f7c2   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x0001f7c2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_1F7C6:
    /* 0001f7c6   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x0001f7c6u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F7C8:
    /* 0001f7c8   2  beq 0001f812 */
    c->pc = RC_ADDR(0x0001f7c8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7))
    {
        c->pc = RC_ADDR(0x0001f812u);
        return;
    }

L_1F7CA:
    /* 0001f7ca   4  tst.l (ffffd29c,A4) */
    c->pc = RC_ADDR(0x0001f7cau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d64u));
    rc_set_nzvc(c, t0, RC_L);

L_1F7CE:
    /* 0001f7ce   2  beq 0001f812 */
    c->pc = RC_ADDR(0x0001f7ceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7))
    {
        c->pc = RC_ADDR(0x0001f812u);
        return;
    }

L_1F7D0:
    /* 0001f7d0   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001f7d0u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F7D2:
    /* 0001f7d2   4  pea (ffffd29c,A4) */
    c->pc = RC_ADDR(0x0001f7d2u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x2d64u));

L_1F7D6:
    /* 0001f7d6   4  jsr (000204f0) */
    c->pc = RC_ADDR(0x0001f7d6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f7dau));
    rc_depth++;
    c->pc = RC_ADDR(0x000204f0u);
    return;

L_1F7DA:
    /* 0001f7da   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f7dau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F7DC:
    /* 0001f7dc   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001f7dcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1F7DE:
    /* 0001f7de   2  bne 0001f7e6 */
    c->pc = RC_ADDR(0x0001f7deu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6))
    {
        c->pc = RC_ADDR(0x0001f7e6u);
        return;
    }

    /* falls through into 0001f7e0 */
    c->pc = RC_ADDR(0x0001f7e0u);
    return;
}
