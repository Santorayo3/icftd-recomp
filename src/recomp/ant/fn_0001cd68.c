/* fn_0001cd68 - 22 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001cd68(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001cd68u): goto L_1CD68;
    case RC_ADDR(0x0001cd6cu): goto L_1CD6C;
    case RC_ADDR(0x0001cd70u): goto L_1CD70;
    case RC_ADDR(0x0001cd74u): goto L_1CD74;
    case RC_ADDR(0x0001cd78u): goto L_1CD78;
    case RC_ADDR(0x0001cd7au): goto L_1CD7A;
    case RC_ADDR(0x0001cd7cu): goto L_1CD7C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1CD68:
    /* 0001cd68   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001cd68u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1CD6C:
    /* 0001cd6c   4  move.l (1414,A4),-(A7) */
    c->pc = RC_ADDR(0x0001cd6cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1414u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CD70:
    /* 0001cd70   4  move.l (fffffaa0,A4),-(A7) */
    c->pc = RC_ADDR(0x0001cd70u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x560u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CD74:
    /* 0001cd74   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001cd74u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001cd78u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1CD78:
    /* 0001cd78   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001cd78u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1CD7A:
    /* 0001cd7a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001cd7au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1CD7C:
    /* 0001cd7c   2  rts */
    c->pc = RC_ADDR(0x0001cd7cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
