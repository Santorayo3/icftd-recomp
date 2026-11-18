/* fn_0001d51a - 36 byte(s), 11 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001d51a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d51au): goto L_1D51A;
    case RC_ADDR(0x0001d51eu): goto L_1D51E;
    case RC_ADDR(0x0001d522u): goto L_1D522;
    case RC_ADDR(0x0001d526u): goto L_1D526;
    case RC_ADDR(0x0001d52au): goto L_1D52A;
    case RC_ADDR(0x0001d52cu): goto L_1D52C;
    case RC_ADDR(0x0001d530u): goto L_1D530;
    case RC_ADDR(0x0001d534u): goto L_1D534;
    case RC_ADDR(0x0001d538u): goto L_1D538;
    case RC_ADDR(0x0001d53au): goto L_1D53A;
    case RC_ADDR(0x0001d53cu): goto L_1D53C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D51A:
    /* 0001d51a   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0001d51au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1D51E:
    /* 0001d51e   4  move.l (1414,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d51eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1414u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D522:
    /* 0001d522   4  move.l (fffffaa0,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d522u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x560u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D526:
    /* 0001d526   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001d526u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001d52au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1D52A:
    /* 0001d52a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d52au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D52C:
    /* 0001d52c   4  move.l (fffffac4,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d52cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x53cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D530:
    /* 0001d530   4  move.l (fffffabc,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d530u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x544u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D534:
    /* 0001d534   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001d534u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001d538u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1D538:
    /* 0001d538   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d538u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D53A:
    /* 0001d53a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001d53au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D53C:
    /* 0001d53c   2  rts */
    c->pc = RC_ADDR(0x0001d53cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
