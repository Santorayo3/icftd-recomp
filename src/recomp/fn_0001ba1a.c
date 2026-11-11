/* fn_0001ba1a - 36 byte(s), 9 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001ba1a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001ba1au): goto L_1BA1A;
    case RC_ADDR(0x0001ba1eu): goto L_1BA1E;
    case RC_ADDR(0x0001ba24u): goto L_1BA24;
    case RC_ADDR(0x0001ba2au): goto L_1BA2A;
    case RC_ADDR(0x0001ba2eu): goto L_1BA2E;
    case RC_ADDR(0x0001ba32u): goto L_1BA32;
    case RC_ADDR(0x0001ba36u): goto L_1BA36;
    case RC_ADDR(0x0001ba3au): goto L_1BA3A;
    case RC_ADDR(0x0001ba3cu): goto L_1BA3C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1BA1A:
    /* 0001ba1a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001ba1au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1BA1E:
    /* 0001ba1e   6  move.l (b00,A4),(ffffcbbc,A4) */
    c->pc = RC_ADDR(0x0001ba1eu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0xb00u));
    rc_wr32(c, m, (c->a[4] - 0x3444u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BA24:
    /* 0001ba24   6  move.l (b04,A4),(ffffcbb8,A4) */
    c->pc = RC_ADDR(0x0001ba24u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0xb04u));
    rc_wr32(c, m, (c->a[4] - 0x3448u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BA2A:
    /* 0001ba2a   4  movea.l (ffffcbbc,A4),A0 */
    c->pc = RC_ADDR(0x0001ba2au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    c->a[0] = t0;

L_1BA2E:
    /* 0001ba2e   4  move.w #2a,(A0) */
    c->pc = RC_ADDR(0x0001ba2eu);
    rc_step(c, m, 12);
    t0 = 0x0000002au;
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BA32:
    /* 0001ba32   4  movea.l (ffffcbb8,A4),A0 */
    c->pc = RC_ADDR(0x0001ba32u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3448u));
    c->a[0] = t0;

L_1BA36:
    /* 0001ba36   4  move.w #2a,(A0) */
    c->pc = RC_ADDR(0x0001ba36u);
    rc_step(c, m, 12);
    t0 = 0x0000002au;
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BA3A:
    /* 0001ba3a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001ba3au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1BA3C:
    /* 0001ba3c   2  rts */
    c->pc = RC_ADDR(0x0001ba3cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
