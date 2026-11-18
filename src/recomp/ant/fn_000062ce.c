/* fn_000062ce - 28 byte(s), 8 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000062ce(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x000062ceu): goto L_62CE;
    case RC_ADDR(0x000062d2u): goto L_62D2;
    case RC_ADDR(0x000062d6u): goto L_62D6;
    case RC_ADDR(0x000062dau): goto L_62DA;
    case RC_ADDR(0x000062deu): goto L_62DE;
    case RC_ADDR(0x000062e2u): goto L_62E2;
    case RC_ADDR(0x000062e6u): goto L_62E6;
    case RC_ADDR(0x000062e8u): goto L_62E8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_62CE:
    /* 000062ce   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000062ceu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_62D2:
    /* 000062d2   4  clr.l (fffff880,A4) */
    c->pc = RC_ADDR(0x000062d2u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x780u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_62D6:
    /* 000062d6   4  clr.l (fffff87c,A4) */
    c->pc = RC_ADDR(0x000062d6u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x784u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_62DA:
    /* 000062da   4  clr.l (fffff878,A4) */
    c->pc = RC_ADDR(0x000062dau);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x788u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_62DE:
    /* 000062de   4  clr.l (fffff870,A4) */
    c->pc = RC_ADDR(0x000062deu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x790u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_62E2:
    /* 000062e2   4  clr.l (fffff86c,A4) */
    c->pc = RC_ADDR(0x000062e2u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x794u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_62E6:
    /* 000062e6   2  unlk A5 */
    c->pc = RC_ADDR(0x000062e6u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_62E8:
    /* 000062e8   2  rts */
    c->pc = RC_ADDR(0x000062e8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
