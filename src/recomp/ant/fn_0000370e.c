/* fn_0000370e - 16 byte(s), 6 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000370e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000370eu): goto L_370E;
    case RC_ADDR(0x00003712u): goto L_3712;
    case RC_ADDR(0x00003716u): goto L_3716;
    case RC_ADDR(0x00003718u): goto L_3718;
    case RC_ADDR(0x0000371au): goto L_371A;
    case RC_ADDR(0x0000371cu): goto L_371C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_370E:
    /* 0000370e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000370eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_3712:
    /* 00003712   4  tst.w (ffffd5c8,A4) */
    /* a flag wait: rc_wait runs it natively and returns 1 when its exit branch is taken;
     * 0 means the three instructions below run instead (the reference path). */
    if (rc_wait(c, m, RC_ADDR(0x00003712u), 12,
                RC_ADDR(0x00003716u), 10, 7,
                RC_ADDR(0x00003718u), 10,
                (c->a[4] - 0x2a38u), RC_W))
        goto L_371A;
    c->pc = RC_ADDR(0x00003712u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a38u));
    rc_set_nzvc(c, t0, RC_W);

L_3716:
    /* 00003716   2  beq 0000371a */
    c->pc = RC_ADDR(0x00003716u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_371A;

L_3718:
    /* 00003718   2  bra 00003712 */
    c->pc = RC_ADDR(0x00003718u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_3712;

L_371A:
    /* 0000371a   2  unlk A5 */
    c->pc = RC_ADDR(0x0000371au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_371C:
    /* 0000371c   2  rts */
    c->pc = RC_ADDR(0x0000371cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
