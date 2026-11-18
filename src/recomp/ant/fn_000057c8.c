/* fn_000057c8 - 40 byte(s), 12 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000057c8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000057c8u): goto L_57C8;
    case RC_ADDR(0x000057ccu): goto L_57CC;
    case RC_ADDR(0x000057d0u): goto L_57D0;
    case RC_ADDR(0x000057d4u): goto L_57D4;
    case RC_ADDR(0x000057d6u): goto L_57D6;
    case RC_ADDR(0x000057d8u): goto L_57D8;
    case RC_ADDR(0x000057dcu): goto L_57DC;
    case RC_ADDR(0x000057e0u): goto L_57E0;
    case RC_ADDR(0x000057e4u): goto L_57E4;
    case RC_ADDR(0x000057e8u): goto L_57E8;
    case RC_ADDR(0x000057ecu): goto L_57EC;
    case RC_ADDR(0x000057eeu): goto L_57EE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_57C8:
    /* 000057c8   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000057c8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_57CC:
    /* 000057cc   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000057ccu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_57D0:
    /* 000057d0   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x000057d0u);
    rc_step(c, m, 18);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x000057d4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228c2u);
    return;

L_57D4:
    /* 000057d4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000057d4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_57D6:
    /* 000057d6   2  ext.l D0 */
    c->pc = RC_ADDR(0x000057d6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_57D8:
    /* 000057d8   4  add.l D0,(8,A5) */
    c->pc = RC_ADDR(0x000057d8u);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_57DC:
    /* 000057dc   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000057dcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_57E0:
    /* 000057e0   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x000057e0u);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_57E4:
    /* 000057e4   4  move.b #20,(A0) */
    c->pc = RC_ADDR(0x000057e4u);
    rc_step(c, m, 12);
    t0 = 0x00000020u;
    rc_wr8(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_B);

L_57E8:
    /* 000057e8   4  move.l (8,A5),D0 */
    c->pc = RC_ADDR(0x000057e8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_57EC:
    /* 000057ec   2  unlk A5 */
    c->pc = RC_ADDR(0x000057ecu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_57EE:
    /* 000057ee   2  rts */
    c->pc = RC_ADDR(0x000057eeu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
