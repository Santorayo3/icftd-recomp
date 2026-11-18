/* fn_00005bd8 - 36 byte(s), 11 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00005bd8(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00005bd8u): goto L_5BD8;
    case RC_ADDR(0x00005bdcu): goto L_5BDC;
    case RC_ADDR(0x00005be0u): goto L_5BE0;
    case RC_ADDR(0x00005be4u): goto L_5BE4;
    case RC_ADDR(0x00005be8u): goto L_5BE8;
    case RC_ADDR(0x00005beau): goto L_5BEA;
    case RC_ADDR(0x00005beeu): goto L_5BEE;
    case RC_ADDR(0x00005bf2u): goto L_5BF2;
    case RC_ADDR(0x00005bf6u): goto L_5BF6;
    case RC_ADDR(0x00005bf8u): goto L_5BF8;
    case RC_ADDR(0x00005bfau): goto L_5BFA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5BD8:
    /* 00005bd8   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00005bd8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_5BDC:
    /* 00005bdc   4  move.l (ffffd5a8,A4),-(A7) */
    c->pc = RC_ADDR(0x00005bdcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2a58u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5BE0:
    /* 00005be0   4  pea (00000005).l */
    c->pc = RC_ADDR(0x00005be0u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000005u);

L_5BE4:
    /* 00005be4   4  jsr (ffff837a,A4) */
    c->pc = RC_ADDR(0x00005be4u);
    rc_step(c, m, 18);
    /* vector 148 */
    rc_push32(c, m, RC_ADDR(0x00005be8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e70u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000237e6u);
    return;

L_5BE8:
    /* 00005be8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00005be8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_5BEA:
    /* 00005bea   4  pea (00000016).l */
    c->pc = RC_ADDR(0x00005beau);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000016u);

L_5BEE:
    /* 00005bee   4  move.l (ffffd5a8,A4),-(A7) */
    c->pc = RC_ADDR(0x00005beeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2a58u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5BF2:
    /* 00005bf2   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00005bf2u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00005bf6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_5BF6:
    /* 00005bf6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00005bf6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_5BF8:
    /* 00005bf8   2  unlk A5 */
    c->pc = RC_ADDR(0x00005bf8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_5BFA:
    /* 00005bfa   2  rts */
    c->pc = RC_ADDR(0x00005bfau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
