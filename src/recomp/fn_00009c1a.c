/* fn_00009c1a - 34 byte(s), 9 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00009c1a(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00009c1au): goto L_9C1A;
    case RC_ADDR(0x00009c1eu): goto L_9C1E;
    case RC_ADDR(0x00009c24u): goto L_9C24;
    case RC_ADDR(0x00009c26u): goto L_9C26;
    case RC_ADDR(0x00009c2au): goto L_9C2A;
    case RC_ADDR(0x00009c2cu): goto L_9C2C;
    case RC_ADDR(0x00009c32u): goto L_9C32;
    case RC_ADDR(0x00009c38u): goto L_9C38;
    case RC_ADDR(0x00009c3au): goto L_9C3A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9C1A:
    /* 00009c1a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00009c1au);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_9C1E:
    /* 00009c1e   6  movea.l #dff0a0,A0 */
    c->pc = RC_ADDR(0x00009c1eu);
    rc_step(c, m);
    t0 = 0x00dff0a0u;
    c->a[0] = t0;

L_9C24:
    /* 00009c24   2  clr.l D0 */
    c->pc = RC_ADDR(0x00009c24u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9C26:
    /* 00009c26   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00009c26u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9C2A:
    /* 00009c2a   2  lsl.w #4,D0 */
    c->pc = RC_ADDR(0x00009c2au);
    rc_step(c, m);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_9C2C:
    /* 00009c2c   6  move.w (a,A5),(6,A0,D0.w) */
    c->pc = RC_ADDR(0x00009c2cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x6u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9C32:
    /* 00009c32   6  move.w (c,A5),(8,A0,D0.w) */
    c->pc = RC_ADDR(0x00009c32u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x8u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9C38:
    /* 00009c38   2  unlk A5 */
    c->pc = RC_ADDR(0x00009c38u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_9C3A:
    /* 00009c3a   2  rts */
    c->pc = RC_ADDR(0x00009c3au);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
