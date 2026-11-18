/* fn_0000ad36 - 26 byte(s), 8 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000ad36(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000ad36u): goto L_AD36;
    case RC_ADDR(0x0000ad3au): goto L_AD3A;
    case RC_ADDR(0x0000ad3eu): goto L_AD3E;
    case RC_ADDR(0x0000ad42u): goto L_AD42;
    case RC_ADDR(0x0000ad46u): goto L_AD46;
    case RC_ADDR(0x0000ad48u): goto L_AD48;
    case RC_ADDR(0x0000ad4cu): goto L_AD4C;
    case RC_ADDR(0x0000ad4eu): goto L_AD4E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_AD36:
    /* 0000ad36   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000ad36u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_AD3A:
    /* 0000ad3a   4  pea (00000008).l */
    c->pc = RC_ADDR(0x0000ad3au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000008u);

L_AD3E:
    /* 0000ad3e   4  move.l (cea,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ad3eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xceau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AD42:
    /* 0000ad42   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0000ad42u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0000ad46u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_AD46:
    /* 0000ad46   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000ad46u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_AD48:
    /* 0000ad48   4  jsr (0000afb8) */
    c->pc = RC_ADDR(0x0000ad48u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000ad4cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000afb8u);
    return;

L_AD4C:
    /* 0000ad4c   2  unlk A5 */
    c->pc = RC_ADDR(0x0000ad4cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_AD4E:
    /* 0000ad4e   2  rts */
    c->pc = RC_ADDR(0x0000ad4eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
