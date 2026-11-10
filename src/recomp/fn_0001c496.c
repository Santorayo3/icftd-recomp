/* fn_0001c496 - 60 byte(s), 13 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001c496(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001c496u): goto L_1C496;
    case RC_ADDR(0x0001c49au): goto L_1C49A;
    case RC_ADDR(0x0001c49eu): goto L_1C49E;
    case RC_ADDR(0x0001c4a6u): goto L_1C4A6;
    case RC_ADDR(0x0001c4aeu): goto L_1C4AE;
    case RC_ADDR(0x0001c4b6u): goto L_1C4B6;
    case RC_ADDR(0x0001c4b8u): goto L_1C4B8;
    case RC_ADDR(0x0001c4bcu): goto L_1C4BC;
    case RC_ADDR(0x0001c4beu): goto L_1C4BE;
    case RC_ADDR(0x0001c4c2u): goto L_1C4C2;
    case RC_ADDR(0x0001c4cau): goto L_1C4CA;
    case RC_ADDR(0x0001c4ceu): goto L_1C4CE;
    case RC_ADDR(0x0001c4d0u): goto L_1C4D0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1C496:
    /* 0001c496   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001c496u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1C49A:
    /* 0001c49a   4  clr.l (263a,A4) */
    c->pc = RC_ADDR(0x0001c49au);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] + 0x263au), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1C49E:
    /* 0001c49e   8  move.l #16f,(263e,A4) */
    c->pc = RC_ADDR(0x0001c49eu);
    rc_step(c, m);
    t0 = 0x0000016fu;
    rc_wr32(c, m, (c->a[4] + 0x263eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C4A6:
    /* 0001c4a6   8  move.l #28,(2632,A4) */
    c->pc = RC_ADDR(0x0001c4a6u);
    rc_step(c, m);
    t0 = 0x00000028u;
    rc_wr32(c, m, (c->a[4] + 0x2632u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C4AE:
    /* 0001c4ae   8  move.l #6f,(2636,A4) */
    c->pc = RC_ADDR(0x0001c4aeu);
    rc_step(c, m);
    t0 = 0x0000006fu;
    rc_wr32(c, m, (c->a[4] + 0x2636u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C4B6:
    /* 0001c4b6   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001c4b6u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1C4B8:
    /* 0001c4b8   4  move.w D0,(2630,A4) */
    c->pc = RC_ADDR(0x0001c4b8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x2630u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C4BC:
    /* 0001c4bc   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c4bcu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1C4BE:
    /* 0001c4be   4  move.l D0,(2642,A4) */
    c->pc = RC_ADDR(0x0001c4beu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2642u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C4C2:
    /* 0001c4c2   8  move.l #b8,(2646,A4) */
    c->pc = RC_ADDR(0x0001c4c2u);
    rc_step(c, m);
    t0 = 0x000000b8u;
    rc_wr32(c, m, (c->a[4] + 0x2646u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C4CA:
    /* 0001c4ca   4  clr.w (264a,A4) */
    c->pc = RC_ADDR(0x0001c4cau);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x264au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C4CE:
    /* 0001c4ce   2  unlk A5 */
    c->pc = RC_ADDR(0x0001c4ceu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1C4D0:
    /* 0001c4d0   2  rts */
    c->pc = RC_ADDR(0x0001c4d0u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
