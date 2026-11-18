/* fn_0001f798 - 36 byte(s), 13 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001f798(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f798u): goto L_1F798;
    case RC_ADDR(0x0001f79cu): goto L_1F79C;
    case RC_ADDR(0x0001f79eu): goto L_1F79E;
    case RC_ADDR(0x0001f7a2u): goto L_1F7A2;
    case RC_ADDR(0x0001f7a6u): goto L_1F7A6;
    case RC_ADDR(0x0001f7a8u): goto L_1F7A8;
    case RC_ADDR(0x0001f7acu): goto L_1F7AC;
    case RC_ADDR(0x0001f7aeu): goto L_1F7AE;
    case RC_ADDR(0x0001f7b0u): goto L_1F7B0;
    case RC_ADDR(0x0001f7b4u): goto L_1F7B4;
    case RC_ADDR(0x0001f7b6u): goto L_1F7B6;
    case RC_ADDR(0x0001f7b8u): goto L_1F7B8;
    case RC_ADDR(0x0001f7bau): goto L_1F7BA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F798:
    /* 0001f798   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001f798u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1F79C:
    /* 0001f79c   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001f79cu);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F79E:
    /* 0001f79e   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x0001f79eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_1F7A2:
    /* 0001f7a2   4  tst.l (c,A2) */
    c->pc = RC_ADDR(0x0001f7a2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0xcu));
    rc_set_nzvc(c, t0, RC_L);

L_1F7A6:
    /* 0001f7a6   2  beq 0001f7b4 */
    c->pc = RC_ADDR(0x0001f7a6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F7B4;

L_1F7A8:
    /* 0001f7a8   4  move.l (c,A2),-(A7) */
    c->pc = RC_ADDR(0x0001f7a8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[2] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F7AC:
    /* 0001f7ac   2  bsr 0001f756 */
    c->pc = RC_ADDR(0x0001f7acu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f7aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f756u);
    return;

L_1F7AE:
    /* 0001f7ae   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f7aeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F7B0:
    /* 0001f7b0   4  clr.l (c,A2) */
    c->pc = RC_ADDR(0x0001f7b0u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[2] + 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F7B4:
    /* 0001f7b4   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x0001f7b4u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F7B6:
    /* 0001f7b6   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x0001f7b6u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_1F7B8:
    /* 0001f7b8   2  unlk A5 */
    c->pc = RC_ADDR(0x0001f7b8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F7BA:
    /* 0001f7ba   2  rts */
    c->pc = RC_ADDR(0x0001f7bau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
