/* fn_00021a2c - 38 byte(s), 11 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021a2c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00021a2cu): goto L_21A2C;
    case RC_ADDR(0x00021a30u): goto L_21A30;
    case RC_ADDR(0x00021a34u): goto L_21A34;
    case RC_ADDR(0x00021a38u): goto L_21A38;
    case RC_ADDR(0x00021a3cu): goto L_21A3C;
    case RC_ADDR(0x00021a3eu): goto L_21A3E;
    case RC_ADDR(0x00021a42u): goto L_21A42;
    case RC_ADDR(0x00021a46u): goto L_21A46;
    case RC_ADDR(0x00021a4au): goto L_21A4A;
    case RC_ADDR(0x00021a4eu): goto L_21A4E;
    case RC_ADDR(0x00021a50u): goto L_21A50;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21A2C:
    /* 00021a2c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00021a2cu);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_21A30:
    /* 00021a30   4  pea (00000004).l */
    c->pc = RC_ADDR(0x00021a30u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000004u);

L_21A34:
    /* 00021a34   4  pea (00021a52) */
    c->pc = RC_ADDR(0x00021a34u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00021a52u));

L_21A38:
    /* 00021a38   4  jsr (0002146a) */
    c->pc = RC_ADDR(0x00021a38u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00021a3cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0002146au);
    return;

L_21A3C:
    /* 00021a3c   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00021a3cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21A3E:
    /* 00021a3e   4  jsr (000214aa) */
    c->pc = RC_ADDR(0x00021a3eu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00021a42u));
    rc_depth++;
    c->pc = RC_ADDR(0x000214aau);
    return;

L_21A42:
    /* 00021a42   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00021a42u);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_21A46:
    /* 00021a46   4  jsr (00021254) */
    c->pc = RC_ADDR(0x00021a46u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00021a4au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021254u);
    return;

L_21A4A:
    /* 00021a4a   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00021a4au);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xeu);

L_21A4E:
    /* 00021a4e   2  unlk A5 */
    c->pc = RC_ADDR(0x00021a4eu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_21A50:
    /* 00021a50   2  rts */
    c->pc = RC_ADDR(0x00021a50u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
