/* fn_0001b60a - 36 byte(s), 11 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001b60a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001b60au): goto L_1B60A;
    case RC_ADDR(0x0001b60eu): goto L_1B60E;
    case RC_ADDR(0x0001b612u): goto L_1B612;
    case RC_ADDR(0x0001b616u): goto L_1B616;
    case RC_ADDR(0x0001b618u): goto L_1B618;
    case RC_ADDR(0x0001b61cu): goto L_1B61C;
    case RC_ADDR(0x0001b620u): goto L_1B620;
    case RC_ADDR(0x0001b622u): goto L_1B622;
    case RC_ADDR(0x0001b626u): goto L_1B626;
    case RC_ADDR(0x0001b62au): goto L_1B62A;
    case RC_ADDR(0x0001b62cu): goto L_1B62C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1B60A:
    /* 0001b60a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001b60au);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1B60E:
    /* 0001b60e   4  pea (ffffffff).l */
    c->pc = RC_ADDR(0x0001b60eu);
    rc_push32(c, m, RC_ADDR(0xffffffffu));

L_1B612:
    /* 0001b612   4  jsr (ffff80e6,A4) */
    c->pc = RC_ADDR(0x0001b612u);
    /* vector 38 */
    rc_push32(c, m, RC_ADDR(0x0001b616u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009cc4u);
    return;

L_1B616:
    /* 0001b616   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001b616u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1B618:
    /* 0001b618   4  pea (00000003).l */
    c->pc = RC_ADDR(0x0001b618u);
    rc_push32(c, m, RC_ADDR(0x00000003u));

L_1B61C:
    /* 0001b61c   4  jsr (ffff8122,A4) */
    c->pc = RC_ADDR(0x0001b61cu);
    /* vector 48 */
    rc_push32(c, m, RC_ADDR(0x0001b620u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000efa6u);
    return;

L_1B620:
    /* 0001b620   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001b620u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1B622:
    /* 0001b622   4  movea.l (ffffa208,A4),A0 */
    c->pc = RC_ADDR(0x0001b622u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5df8u));
    c->a[0] = t0;

L_1B626:
    /* 0001b626   4  move.w #40,(A0) */
    c->pc = RC_ADDR(0x0001b626u);
    t0 = 0x00000040u;
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B62A:
    /* 0001b62a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001b62au);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1B62C:
    /* 0001b62c   2  rts */
    c->pc = RC_ADDR(0x0001b62cu);
    rc_ret(c, m);
    return;

}
