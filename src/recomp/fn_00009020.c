/* fn_00009020 - 26 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00009020(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00009020u): goto L_9020;
    case RC_ADDR(0x00009024u): goto L_9024;
    case RC_ADDR(0x00009028u): goto L_9028;
    case RC_ADDR(0x0000902eu): goto L_902E;
    case RC_ADDR(0x00009030u): goto L_9030;
    case RC_ADDR(0x00009036u): goto L_9036;
    case RC_ADDR(0x00009038u): goto L_9038;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9020:
    /* 00009020   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009020u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_9024:
    /* 00009024   4  addq.w #1,(fffff0f8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009024u);
    t3 = (c->a[4] - 0xf08u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_9028:
    /* 00009028   6  cmpi.w #18,(fffff0f8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009028u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf08u));
    rc_cmp(c, RC_W, t0, 0x00000018u);

L_902E:
    /* 0000902e   2  ble 00009036 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000902eu);
    if (rc_cond(c, 15)) goto L_9036;

L_9030:
    /* 00009030   6  move.w #1,(fffff0fc,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009030u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xf04u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9036:
    /* 00009036   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009036u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_9038:
    /* 00009038   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009038u);
    rc_ret(c, m);
    return;

}
