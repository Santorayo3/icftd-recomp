/* fn_0002379a - 18 byte(s), 6 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002379a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0002379au): goto L_2379A;
    case RC_ADDR(0x0002379eu): goto L_2379E;
    case RC_ADDR(0x000237a0u): goto L_237A0;
    case RC_ADDR(0x000237a2u): goto L_237A2;
    case RC_ADDR(0x000237a6u): goto L_237A6;
    case RC_ADDR(0x000237aau): goto L_237AA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2379A:
    /* 0002379a   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x0002379au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_2379E:
    /* 0002379e   2  move.l A0,(A0) */
    c->pc = RC_ADDR(0x0002379eu);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_237A0:
    /* 000237a0   2  addq.l #4,(A0) */
    c->pc = RC_ADDR(0x000237a0u);
    rc_step(c, m, 20);
    t3 = c->a[0];
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000004u;
    rc_flags_add(c, RC_L, t1, 0x00000004u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_237A2:
    /* 000237a2   4  clr.l (4,A0) */
    c->pc = RC_ADDR(0x000237a2u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[0] + 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_237A6:
    /* 000237a6   4  move.l A0,(8,A0) */
    c->pc = RC_ADDR(0x000237a6u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_237AA:
    /* 000237aa   2  rts */
    c->pc = RC_ADDR(0x000237aau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
