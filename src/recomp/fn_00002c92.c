/* fn_00002c92 - 50 byte(s), 13 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00002c92(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00002c92u): goto L_2C92;
    case RC_ADDR(0x00002c96u): goto L_2C96;
    case RC_ADDR(0x00002c9au): goto L_2C9A;
    case RC_ADDR(0x00002c9eu): goto L_2C9E;
    case RC_ADDR(0x00002ca0u): goto L_2CA0;
    case RC_ADDR(0x00002ca4u): goto L_2CA4;
    case RC_ADDR(0x00002ca8u): goto L_2CA8;
    case RC_ADDR(0x00002caau): goto L_2CAA;
    case RC_ADDR(0x00002caeu): goto L_2CAE;
    case RC_ADDR(0x00002cb4u): goto L_2CB4;
    case RC_ADDR(0x00002cbau): goto L_2CBA;
    case RC_ADDR(0x00002cc0u): goto L_2CC0;
    case RC_ADDR(0x00002cc2u): goto L_2CC2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2C92:
    /* 00002c92   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002c92u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_2C96:
    /* 00002c96   4  move.w (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002c96u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2C9A:
    /* 00002c9a   4  jsr (ffff8080,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002c9au);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x00002c9eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000070cau);
    return;

L_2C9E:
    /* 00002c9e   2  addq.w #2,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002c9eu);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_2CA0:
    /* 00002ca0   4  pea (00002cc4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002ca0u);
    rc_push32(c, m, RC_ADDR(0x00002cc4u));

L_2CA4:
    /* 00002ca4   4  jsr (00007338) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002ca4u);
    rc_push32(c, m, RC_ADDR(0x00002ca8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00007338u);
    return;

L_2CA8:
    /* 00002ca8   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002ca8u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2CAA:
    /* 00002caa   4  move.w D0,(ffff8b56,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002caau);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x74aau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2CAE:
    /* 00002cae   6  move.w #1,(ffff83d6,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002caeu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c2au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2CB4:
    /* 00002cb4   6  move.w #1,(ffff8b54,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002cb4u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x74acu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2CBA:
    /* 00002cba   6  move.w #1d,(ffffefe4,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002cbau);
    t0 = 0x0000001du;
    rc_wr16(c, m, (c->a[4] - 0x101cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2CC0:
    /* 00002cc0   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002cc0u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2CC2:
    /* 00002cc2   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002cc2u);
    rc_ret(c, m);
    return;

}
