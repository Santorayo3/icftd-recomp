/* fn_000212c8 - 42 byte(s), 16 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000212c8(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000212c8u): goto L_212C8;
    case RC_ADDR(0x000212ccu): goto L_212CC;
    case RC_ADDR(0x000212ceu): goto L_212CE;
    case RC_ADDR(0x000212d2u): goto L_212D2;
    case RC_ADDR(0x000212d4u): goto L_212D4;
    case RC_ADDR(0x000212d6u): goto L_212D6;
    case RC_ADDR(0x000212dau): goto L_212DA;
    case RC_ADDR(0x000212dcu): goto L_212DC;
    case RC_ADDR(0x000212deu): goto L_212DE;
    case RC_ADDR(0x000212e2u): goto L_212E2;
    case RC_ADDR(0x000212e6u): goto L_212E6;
    case RC_ADDR(0x000212e8u): goto L_212E8;
    case RC_ADDR(0x000212eau): goto L_212EA;
    case RC_ADDR(0x000212ecu): goto L_212EC;
    case RC_ADDR(0x000212eeu): goto L_212EE;
    case RC_ADDR(0x000212f0u): goto L_212F0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_212C8:
    /* 000212c8   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000212c8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_212CC:
    /* 000212cc   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x000212ccu);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_212CE:
    /* 000212ce   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x000212ceu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_212D2:
    /* 000212d2   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x000212d2u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_212D4:
    /* 000212d4   2  beq 0002131e */
    c->pc = RC_ADDR(0x000212d4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7))
    {
        c->pc = RC_ADDR(0x0002131eu);
        return;
    }

L_212D6:
    /* 000212d6   4  tst.l (ffffd46a,A4) */
    c->pc = RC_ADDR(0x000212d6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2b96u));
    rc_set_nzvc(c, t0, RC_L);

L_212DA:
    /* 000212da   2  beq 0002131e */
    c->pc = RC_ADDR(0x000212dau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7))
    {
        c->pc = RC_ADDR(0x0002131eu);
        return;
    }

L_212DC:
    /* 000212dc   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x000212dcu);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_212DE:
    /* 000212de   4  pea (ffffd46a,A4) */
    c->pc = RC_ADDR(0x000212deu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x2b96u));

L_212E2:
    /* 000212e2   4  jsr (000204f0) */
    c->pc = RC_ADDR(0x000212e2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000212e6u));
    rc_depth++;
    c->pc = RC_ADDR(0x000204f0u);
    return;

L_212E6:
    /* 000212e6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000212e6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_212E8:
    /* 000212e8   2  tst.w D0 */
    c->pc = RC_ADDR(0x000212e8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_212EA:
    /* 000212ea   2  bne 000212f2 */
    c->pc = RC_ADDR(0x000212eau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6))
    {
        c->pc = RC_ADDR(0x000212f2u);
        return;
    }

L_212EC:
    /* 000212ec   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x000212ecu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_212EE:
    /* 000212ee   2  unlk A5 */
    c->pc = RC_ADDR(0x000212eeu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_212F0:
    /* 000212f0   2  rts */
    c->pc = RC_ADDR(0x000212f0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
