/* fn_0001e508 - 60 byte(s), 13 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001e508(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001e508u): goto L_1E508;
    case RC_ADDR(0x0001e50cu): goto L_1E50C;
    case RC_ADDR(0x0001e510u): goto L_1E510;
    case RC_ADDR(0x0001e518u): goto L_1E518;
    case RC_ADDR(0x0001e520u): goto L_1E520;
    case RC_ADDR(0x0001e528u): goto L_1E528;
    case RC_ADDR(0x0001e52au): goto L_1E52A;
    case RC_ADDR(0x0001e52eu): goto L_1E52E;
    case RC_ADDR(0x0001e530u): goto L_1E530;
    case RC_ADDR(0x0001e534u): goto L_1E534;
    case RC_ADDR(0x0001e53cu): goto L_1E53C;
    case RC_ADDR(0x0001e540u): goto L_1E540;
    case RC_ADDR(0x0001e542u): goto L_1E542;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E508:
    /* 0001e508   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001e508u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1E50C:
    /* 0001e50c   4  clr.l (3068,A4) */
    c->pc = RC_ADDR(0x0001e50cu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x3068u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E510:
    /* 0001e510   8  move.l #16f,(306c,A4) */
    c->pc = RC_ADDR(0x0001e510u);
    rc_step(c, m, 24);
    t0 = 0x0000016fu;
    rc_wr32(c, m, (c->a[4] + 0x306cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E518:
    /* 0001e518   8  move.l #28,(3060,A4) */
    c->pc = RC_ADDR(0x0001e518u);
    rc_step(c, m, 24);
    t0 = 0x00000028u;
    rc_wr32(c, m, (c->a[4] + 0x3060u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E520:
    /* 0001e520   8  move.l #6f,(3064,A4) */
    c->pc = RC_ADDR(0x0001e520u);
    rc_step(c, m, 24);
    t0 = 0x0000006fu;
    rc_wr32(c, m, (c->a[4] + 0x3064u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E528:
    /* 0001e528   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001e528u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1E52A:
    /* 0001e52a   4  move.w D0,(305e,A4) */
    c->pc = RC_ADDR(0x0001e52au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x305eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E52E:
    /* 0001e52e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001e52eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1E530:
    /* 0001e530   4  move.l D0,(3070,A4) */
    c->pc = RC_ADDR(0x0001e530u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x3070u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E534:
    /* 0001e534   8  move.l #b8,(3074,A4) */
    c->pc = RC_ADDR(0x0001e534u);
    rc_step(c, m, 24);
    t0 = 0x000000b8u;
    rc_wr32(c, m, (c->a[4] + 0x3074u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E53C:
    /* 0001e53c   4  clr.w (3078,A4) */
    c->pc = RC_ADDR(0x0001e53cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x3078u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1E540:
    /* 0001e540   2  unlk A5 */
    c->pc = RC_ADDR(0x0001e540u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1E542:
    /* 0001e542   2  rts */
    c->pc = RC_ADDR(0x0001e542u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
