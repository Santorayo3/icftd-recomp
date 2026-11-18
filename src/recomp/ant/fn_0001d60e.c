/* fn_0001d60e - 36 byte(s), 9 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001d60e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d60eu): goto L_1D60E;
    case RC_ADDR(0x0001d612u): goto L_1D612;
    case RC_ADDR(0x0001d618u): goto L_1D618;
    case RC_ADDR(0x0001d61eu): goto L_1D61E;
    case RC_ADDR(0x0001d622u): goto L_1D622;
    case RC_ADDR(0x0001d626u): goto L_1D626;
    case RC_ADDR(0x0001d62au): goto L_1D62A;
    case RC_ADDR(0x0001d62eu): goto L_1D62E;
    case RC_ADDR(0x0001d630u): goto L_1D630;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D60E:
    /* 0001d60e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001d60eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1D612:
    /* 0001d612   6  move.l (14fa,A4),(ffffd340,A4) */
    c->pc = RC_ADDR(0x0001d612u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14fau));
    rc_wr32(c, m, (c->a[4] - 0x2cc0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D618:
    /* 0001d618   6  move.l (14fe,A4),(ffffd33c,A4) */
    c->pc = RC_ADDR(0x0001d618u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14feu));
    rc_wr32(c, m, (c->a[4] - 0x2cc4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D61E:
    /* 0001d61e   4  movea.l (ffffd340,A4),A0 */
    c->pc = RC_ADDR(0x0001d61eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    c->a[0] = t0;

L_1D622:
    /* 0001d622   4  move.w #2a,(A0) */
    c->pc = RC_ADDR(0x0001d622u);
    rc_step(c, m, 12);
    t0 = 0x0000002au;
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D626:
    /* 0001d626   4  movea.l (ffffd33c,A4),A0 */
    c->pc = RC_ADDR(0x0001d626u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc4u));
    c->a[0] = t0;

L_1D62A:
    /* 0001d62a   4  move.w #2a,(A0) */
    c->pc = RC_ADDR(0x0001d62au);
    rc_step(c, m, 12);
    t0 = 0x0000002au;
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D62E:
    /* 0001d62e   2  unlk A5 */
    c->pc = RC_ADDR(0x0001d62eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D630:
    /* 0001d630   2  rts */
    c->pc = RC_ADDR(0x0001d630u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
