/* fn_0001f4dc - 32 byte(s), 10 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001f4dc(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f4dcu): goto L_1F4DC;
    case RC_ADDR(0x0001f4e0u): goto L_1F4E0;
    case RC_ADDR(0x0001f4e4u): goto L_1F4E4;
    case RC_ADDR(0x0001f4e8u): goto L_1F4E8;
    case RC_ADDR(0x0001f4eau): goto L_1F4EA;
    case RC_ADDR(0x0001f4eeu): goto L_1F4EE;
    case RC_ADDR(0x0001f4f2u): goto L_1F4F2;
    case RC_ADDR(0x0001f4f6u): goto L_1F4F6;
    case RC_ADDR(0x0001f4f8u): goto L_1F4F8;
    case RC_ADDR(0x0001f4fau): goto L_1F4FA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F4DC:
    /* 0001f4dc   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001f4dcu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1F4E0:
    /* 0001f4e0   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f4e0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F4E4:
    /* 0001f4e4   4  jsr (ffff82a2,A4) */
    c->pc = RC_ADDR(0x0001f4e4u);
    rc_step(c, m, 18);
    /* vector 112 */
    rc_push32(c, m, RC_ADDR(0x0001f4e8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d98u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022138u);
    return;

L_1F4E8:
    /* 0001f4e8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f4e8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F4EA:
    /* 0001f4ea   4  pea (00000028).l */
    c->pc = RC_ADDR(0x0001f4eau);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000028u);

L_1F4EE:
    /* 0001f4ee   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f4eeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F4F2:
    /* 0001f4f2   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001f4f2u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001f4f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1F4F6:
    /* 0001f4f6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f4f6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F4F8:
    /* 0001f4f8   2  unlk A5 */
    c->pc = RC_ADDR(0x0001f4f8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F4FA:
    /* 0001f4fa   2  rts */
    c->pc = RC_ADDR(0x0001f4fau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
