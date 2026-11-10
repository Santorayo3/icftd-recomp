/* fn_0001d232 - 30 byte(s), 11 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001d232(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d232u): goto L_1D232;
    case RC_ADDR(0x0001d236u): goto L_1D236;
    case RC_ADDR(0x0001d23au): goto L_1D23A;
    case RC_ADDR(0x0001d23cu): goto L_1D23C;
    case RC_ADDR(0x0001d23eu): goto L_1D23E;
    case RC_ADDR(0x0001d240u): goto L_1D240;
    case RC_ADDR(0x0001d244u): goto L_1D244;
    case RC_ADDR(0x0001d248u): goto L_1D248;
    case RC_ADDR(0x0001d24au): goto L_1D24A;
    case RC_ADDR(0x0001d24cu): goto L_1D24C;
    case RC_ADDR(0x0001d24eu): goto L_1D24E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D232:
    /* 0001d232   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001d232u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1D236:
    /* 0001d236   4  tst.w (ffffcb00,A4) */
    c->pc = RC_ADDR(0x0001d236u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3500u));
    rc_set_nzvc(c, t0, RC_W);

L_1D23A:
    /* 0001d23a   2  bne 0001d240 */
    c->pc = RC_ADDR(0x0001d23au);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1D240;

L_1D23C:
    /* 0001d23c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001d23cu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D23E:
    /* 0001d23e   2  rts */
    c->pc = RC_ADDR(0x0001d23eu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_1D240:
    /* 0001d240   4  subq.w #1,(ffffcb00,A4) */
    c->pc = RC_ADDR(0x0001d240u);
    rc_step(c, m);
    t3 = (c->a[4] - 0x3500u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D244:
    /* 0001d244   4  tst.w (ffffcb00,A4) */
    c->pc = RC_ADDR(0x0001d244u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3500u));
    rc_set_nzvc(c, t0, RC_W);

L_1D248:
    /* 0001d248   2  beq 0001d24c */
    c->pc = RC_ADDR(0x0001d248u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1D24C;

L_1D24A:
    /* 0001d24a   2  bra 0001d23c */
    c->pc = RC_ADDR(0x0001d24au);
    rc_step(c, m);
    rc_tick();
    goto L_1D23C;

L_1D24C:
    /* 0001d24c   2  bsr 0001d250 */
    c->pc = RC_ADDR(0x0001d24cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001d24eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d250u);
    return;

L_1D24E:
    /* 0001d24e   2  bra 0001d23c */
    c->pc = RC_ADDR(0x0001d24eu);
    rc_step(c, m);
    rc_tick();
    goto L_1D23C;

}
