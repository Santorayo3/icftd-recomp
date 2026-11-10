/* fn_0001b220 - 36 byte(s), 10 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001b220(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001b220u): goto L_1B220;
    case RC_ADDR(0x0001b224u): goto L_1B224;
    case RC_ADDR(0x0001b228u): goto L_1B228;
    case RC_ADDR(0x0001b22cu): goto L_1B22C;
    case RC_ADDR(0x0001b230u): goto L_1B230;
    case RC_ADDR(0x0001b234u): goto L_1B234;
    case RC_ADDR(0x0001b238u): goto L_1B238;
    case RC_ADDR(0x0001b23cu): goto L_1B23C;
    case RC_ADDR(0x0001b240u): goto L_1B240;
    case RC_ADDR(0x0001b242u): goto L_1B242;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1B220:
    /* 0001b220   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b220u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1B224:
    /* 0001b224   4  move.w #40,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b224u);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B228:
    /* 0001b228   4  move.w #3,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b228u);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B22C:
    /* 0001b22c   4  move.l (226c,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b22cu);
    t0 = rc_rd32(c, m, (c->a[4] + 0x226cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B230:
    /* 0001b230   4  move.w #be,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b230u);
    t0 = 0x000000beu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B234:
    /* 0001b234   4  move.l (2248,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b234u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2248u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B238:
    /* 0001b238   4  jsr (ffff80d4,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b238u);
    /* vector 35 */
    rc_push32(c, m, RC_ADDR(0x0001b23cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00009c3cu);
    return;

L_1B23C:
    /* 0001b23c   4  lea (e,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b23cu);
    c->a[7] = (c->a[7] + 0xeu);

L_1B240:
    /* 0001b240   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b240u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1B242:
    /* 0001b242   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b242u);
    rc_ret(c, m);
    return;

}
