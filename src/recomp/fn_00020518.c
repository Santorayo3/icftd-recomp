/* fn_00020518 - 52 byte(s), 13 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020518(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x00020518u): goto L_20518;
    case RC_ADDR(0x0002051cu): goto L_2051C;
    case RC_ADDR(0x00020522u): goto L_20522;
    case RC_ADDR(0x00020528u): goto L_20528;
    case RC_ADDR(0x0002052eu): goto L_2052E;
    case RC_ADDR(0x00020532u): goto L_20532;
    case RC_ADDR(0x00020534u): goto L_20534;
    case RC_ADDR(0x00020538u): goto L_20538;
    case RC_ADDR(0x0002053cu): goto L_2053C;
    case RC_ADDR(0x0002053eu): goto L_2053E;
    case RC_ADDR(0x00020542u): goto L_20542;
    case RC_ADDR(0x00020548u): goto L_20548;
    case RC_ADDR(0x0002054au): goto L_2054A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20518:
    /* 00020518   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020518u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_2051C:
    /* 0002051c   6  move.w #9,(2b1a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002051cu);
    t0 = 0x00000009u;
    rc_wr16(c, m, (c->a[4] + 0x2b1au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20522:
    /* 00020522   6  move.w #1,(2b1c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020522u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x2b1cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20528:
    /* 00020528   6  move.w #1ff,(2b1e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020528u);
    t0 = 0x000001ffu;
    rc_wr16(c, m, (c->a[4] + 0x2b1eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2052E:
    /* 0002052e   4  move.w (2b1e,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002052eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2b1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20532:
    /* 00020532   2  subq.w #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020532u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_20534:
    /* 00020534   4  move.w D0,(2b22,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020534u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x2b22u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20538:
    /* 00020538   4  move.w (2b1e,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020538u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2b1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2053C:
    /* 0002053c   2  subq.w #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002053cu);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_2053E:
    /* 0002053e   4  move.w D0,(2b20,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002053eu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x2b20u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20542:
    /* 00020542   6  move.w #100,(2b24,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020542u);
    t0 = 0x00000100u;
    rc_wr16(c, m, (c->a[4] + 0x2b24u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20548:
    /* 00020548   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020548u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2054A:
    /* 0002054a   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002054au);
    rc_ret(c, m);
    return;

}
