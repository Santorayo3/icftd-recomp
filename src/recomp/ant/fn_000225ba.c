/* fn_000225ba - 52 byte(s), 13 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000225ba(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x000225bau): goto L_225BA;
    case RC_ADDR(0x000225beu): goto L_225BE;
    case RC_ADDR(0x000225c4u): goto L_225C4;
    case RC_ADDR(0x000225cau): goto L_225CA;
    case RC_ADDR(0x000225d0u): goto L_225D0;
    case RC_ADDR(0x000225d4u): goto L_225D4;
    case RC_ADDR(0x000225d6u): goto L_225D6;
    case RC_ADDR(0x000225dau): goto L_225DA;
    case RC_ADDR(0x000225deu): goto L_225DE;
    case RC_ADDR(0x000225e0u): goto L_225E0;
    case RC_ADDR(0x000225e4u): goto L_225E4;
    case RC_ADDR(0x000225eau): goto L_225EA;
    case RC_ADDR(0x000225ecu): goto L_225EC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_225BA:
    /* 000225ba   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000225bau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_225BE:
    /* 000225be   6  move.w #9,(354a,A4) */
    c->pc = RC_ADDR(0x000225beu);
    rc_step(c, m, 16);
    t0 = 0x00000009u;
    rc_wr16(c, m, (c->a[4] + 0x354au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_225C4:
    /* 000225c4   6  move.w #1,(354c,A4) */
    c->pc = RC_ADDR(0x000225c4u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x354cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_225CA:
    /* 000225ca   6  move.w #1ff,(354e,A4) */
    c->pc = RC_ADDR(0x000225cau);
    rc_step(c, m, 16);
    t0 = 0x000001ffu;
    rc_wr16(c, m, (c->a[4] + 0x354eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_225D0:
    /* 000225d0   4  move.w (354e,A4),D0 */
    c->pc = RC_ADDR(0x000225d0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x354eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_225D4:
    /* 000225d4   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x000225d4u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_225D6:
    /* 000225d6   4  move.w D0,(3552,A4) */
    c->pc = RC_ADDR(0x000225d6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x3552u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_225DA:
    /* 000225da   4  move.w (354e,A4),D0 */
    c->pc = RC_ADDR(0x000225dau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x354eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_225DE:
    /* 000225de   2  subq.w #2,D0 */
    c->pc = RC_ADDR(0x000225deu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_225E0:
    /* 000225e0   4  move.w D0,(3550,A4) */
    c->pc = RC_ADDR(0x000225e0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x3550u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_225E4:
    /* 000225e4   6  move.w #100,(3554,A4) */
    c->pc = RC_ADDR(0x000225e4u);
    rc_step(c, m, 16);
    t0 = 0x00000100u;
    rc_wr16(c, m, (c->a[4] + 0x3554u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_225EA:
    /* 000225ea   2  unlk A5 */
    c->pc = RC_ADDR(0x000225eau);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_225EC:
    /* 000225ec   2  rts */
    c->pc = RC_ADDR(0x000225ecu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
