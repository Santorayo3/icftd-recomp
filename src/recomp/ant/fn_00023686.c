/* fn_00023686 - 22 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023686(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00023686u): goto L_23686;
    case RC_ADDR(0x0002368au): goto L_2368A;
    case RC_ADDR(0x0002368eu): goto L_2368E;
    case RC_ADDR(0x00023692u): goto L_23692;
    case RC_ADDR(0x00023696u): goto L_23696;
    case RC_ADDR(0x00023698u): goto L_23698;
    case RC_ADDR(0x0002369au): goto L_2369A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23686:
    /* 00023686   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00023686u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_2368A:
    /* 0002368a   4  pea (00000030).l */
    c->pc = RC_ADDR(0x0002368au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000030u);

L_2368E:
    /* 0002368e   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0002368eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23692:
    /* 00023692   4  jsr (000236ae) */
    c->pc = RC_ADDR(0x00023692u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00023696u));
    rc_depth++;
    c->pc = RC_ADDR(0x000236aeu);
    return;

L_23696:
    /* 00023696   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00023696u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_23698:
    /* 00023698   2  unlk A5 */
    c->pc = RC_ADDR(0x00023698u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2369A:
    /* 0002369a   2  rts */
    c->pc = RC_ADDR(0x0002369au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
