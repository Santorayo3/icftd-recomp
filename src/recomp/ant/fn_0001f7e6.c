/* fn_0001f7e6 - 46 byte(s), 17 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001f7e6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f7e6u): goto L_1F7E6;
    case RC_ADDR(0x0001f7e8u): goto L_1F7E8;
    case RC_ADDR(0x0001f7eau): goto L_1F7EA;
    case RC_ADDR(0x0001f7ecu): goto L_1F7EC;
    case RC_ADDR(0x0001f7f0u): goto L_1F7F0;
    case RC_ADDR(0x0001f7f4u): goto L_1F7F4;
    case RC_ADDR(0x0001f7f6u): goto L_1F7F6;
    case RC_ADDR(0x0001f7f8u): goto L_1F7F8;
    case RC_ADDR(0x0001f7fau): goto L_1F7FA;
    case RC_ADDR(0x0001f7fcu): goto L_1F7FC;
    case RC_ADDR(0x0001f800u): goto L_1F800;
    case RC_ADDR(0x0001f804u): goto L_1F804;
    case RC_ADDR(0x0001f806u): goto L_1F806;
    case RC_ADDR(0x0001f80au): goto L_1F80A;
    case RC_ADDR(0x0001f80cu): goto L_1F80C;
    case RC_ADDR(0x0001f810u): goto L_1F810;
    case RC_ADDR(0x0001f812u): goto L_1F812;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F7E6:
    /* 0001f7e6   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001f7e6u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F7E8:
    /* 0001f7e8   2  bsr 0001f798 */
    c->pc = RC_ADDR(0x0001f7e8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f7eau));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f798u);
    return;

L_1F7EA:
    /* 0001f7ea   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f7eau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F7EC:
    /* 0001f7ec   4  move.l (4,A2),-(A7) */
    c->pc = RC_ADDR(0x0001f7ecu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F7F0:
    /* 0001f7f0   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x0001f7f0u);
    rc_step(c, m, 18);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x0001f7f4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228c2u);
    return;

L_1F7F4:
    /* 0001f7f4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f7f4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F7F6:
    /* 0001f7f6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001f7f6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1F7F8:
    /* 0001f7f8   2  addq.l #1,D0 */
    c->pc = RC_ADDR(0x0001f7f8u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1F7FA:
    /* 0001f7fa   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001f7fau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F7FC:
    /* 0001f7fc   4  move.l (4,A2),-(A7) */
    c->pc = RC_ADDR(0x0001f7fcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F800:
    /* 0001f800   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001f800u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001f804u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1F804:
    /* 0001f804   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f804u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F806:
    /* 0001f806   4  pea (00000010).l */
    c->pc = RC_ADDR(0x0001f806u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000010u);

L_1F80A:
    /* 0001f80a   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001f80au);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F80C:
    /* 0001f80c   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001f80cu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001f810u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1F810:
    /* 0001f810   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f810u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F812:
    /* 0001f812   2  bra 0001f7e0 */
    c->pc = RC_ADDR(0x0001f812u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001f7e0u);
    return;

}
