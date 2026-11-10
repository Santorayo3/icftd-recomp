/* fn_0000df1e - 22 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000df1e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000df1eu): goto L_DF1E;
    case RC_ADDR(0x0000df22u): goto L_DF22;
    case RC_ADDR(0x0000df26u): goto L_DF26;
    case RC_ADDR(0x0000df2au): goto L_DF2A;
    case RC_ADDR(0x0000df2eu): goto L_DF2E;
    case RC_ADDR(0x0000df30u): goto L_DF30;
    case RC_ADDR(0x0000df32u): goto L_DF32;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_DF1E:
    /* 0000df1e   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000df1eu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_DF22:
    /* 0000df22   4  move.l (a1a,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000df22u);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa1au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_DF26:
    /* 0000df26   4  move.l (fffff2f8,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000df26u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd08u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_DF2A:
    /* 0000df2a   4  jsr (ffff8344,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000df2au);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x0000df2eu);
    rc_os_call(c, m, 0, -210);

L_DF2E:
    /* 0000df2e   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000df2eu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_DF30:
    /* 0000df30   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000df30u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_DF32:
    /* 0000df32   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000df32u);
    rc_ret(c, m);
    return;

}
