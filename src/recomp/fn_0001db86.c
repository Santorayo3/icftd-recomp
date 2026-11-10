/* fn_0001db86 - 24 byte(s), 8 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001db86(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001db86u): goto L_1DB86;
    case RC_ADDR(0x0001db8au): goto L_1DB8A;
    case RC_ADDR(0x0001db8cu): goto L_1DB8C;
    case RC_ADDR(0x0001db90u): goto L_1DB90;
    case RC_ADDR(0x0001db94u): goto L_1DB94;
    case RC_ADDR(0x0001db98u): goto L_1DB98;
    case RC_ADDR(0x0001db9au): goto L_1DB9A;
    case RC_ADDR(0x0001db9cu): goto L_1DB9C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1DB86:
    /* 0001db86   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001db86u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1DB8A:
    /* 0001db8a   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0001db8au);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DB8C:
    /* 0001db8c   4  move.w #20,-(A7) */
    c->pc = RC_ADDR(0x0001db8cu);
    rc_step(c, m);
    t0 = 0x00000020u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DB90:
    /* 0001db90   4  pea (28ea,A4) */
    c->pc = RC_ADDR(0x0001db90u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x28eau));

L_1DB94:
    /* 0001db94   4  jsr (000208a4) */
    c->pc = RC_ADDR(0x0001db94u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001db98u));
    rc_depth++;
    c->pc = RC_ADDR(0x000208a4u);
    return;

L_1DB98:
    /* 0001db98   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001db98u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1DB9A:
    /* 0001db9a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001db9au);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1DB9C:
    /* 0001db9c   2  rts */
    c->pc = RC_ADDR(0x0001db9cu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
