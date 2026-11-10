/* fn_000208a4 - 20 byte(s), 6 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000208a4(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000208a4u): goto L_208A4;
    case RC_ADDR(0x000208a8u): goto L_208A8;
    case RC_ADDR(0x000208aeu): goto L_208AE;
    case RC_ADDR(0x000208b0u): goto L_208B0;
    case RC_ADDR(0x000208b2u): goto L_208B2;
    case RC_ADDR(0x000208b6u): goto L_208B6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_208A4:
    /* 000208a4   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x000208a4u);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_208A8:
    /* 000208a8   6  movem.w (SP)+,{ D0 D1 } */
    c->pc = RC_ADDR(0x000208a8u);
    t3 = (c->a[7] + 0x8u);
    t0 = rc_rd16(c, m, t3);
    t0 = rc_ext(t0, RC_W);
    c->d[0] = t0;
    t3 += 2u;
    t0 = rc_rd16(c, m, t3);
    t0 = rc_ext(t0, RC_W);
    c->d[1] = t0;
    t3 += 2u;

L_208AE:
    /* 000208ae   2  bra 000208b2 */
    c->pc = RC_ADDR(0x000208aeu);
    goto L_208B2;

L_208B0:
    /* 000208b0   2  move.b D1,(A0)+ */
    c->pc = RC_ADDR(0x000208b0u);
    t0 = rc_d_get(c, 1, RC_B);
    t3 = c->a[0];
    c->a[0] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_208B2:
    /* 000208b2   4  dbf D0,000208b0 */
    c->pc = RC_ADDR(0x000208b2u);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_208B0; }
    }

L_208B6:
    /* 000208b6   2  rts */
    c->pc = RC_ADDR(0x000208b6u);
    rc_ret(c, m);
    return;

}
