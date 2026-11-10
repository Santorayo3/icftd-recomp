/* fn_0001dbb4 - 28 byte(s), 9 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001dbb4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001dbb4u): goto L_1DBB4;
    case RC_ADDR(0x0001dbb8u): goto L_1DBB8;
    case RC_ADDR(0x0001dbbcu): goto L_1DBBC;
    case RC_ADDR(0x0001dbbeu): goto L_1DBBE;
    case RC_ADDR(0x0001dbc2u): goto L_1DBC2;
    case RC_ADDR(0x0001dbc6u): goto L_1DBC6;
    case RC_ADDR(0x0001dbc8u): goto L_1DBC8;
    case RC_ADDR(0x0001dbccu): goto L_1DBCC;
    case RC_ADDR(0x0001dbceu): goto L_1DBCE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1DBB4:
    /* 0001dbb4   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dbb4u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1DBB8:
    /* 0001dbb8   4  subq.w #1,(ffffcb22,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dbb8u);
    t3 = (c->a[4] - 0x34deu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1DBBC:
    /* 0001dbbc   2  bne 0001dbc2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dbbcu);
    if (rc_cond(c, 6)) goto L_1DBC2;

L_1DBBE:
    /* 0001dbbe   4  jsr (ffff8362,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dbbeu);
    /* vector 144 */
    rc_push32(c, m, RC_ADDR(0x0001dbc2u));
    rc_depth++;
    c->pc = RC_ADDR(0x000217f4u);
    return;

L_1DBC2:
    /* 0001dbc2   4  tst.w (ffffcb22,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dbc2u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34deu));
    rc_set_nzvc(c, t0, RC_W);

L_1DBC6:
    /* 0001dbc6   2  bge 0001dbcc */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dbc6u);
    if (rc_cond(c, 12)) goto L_1DBCC;

L_1DBC8:
    /* 0001dbc8   4  clr.w (ffffcb22,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dbc8u);
    rc_wr16(c, m, (c->a[4] - 0x34deu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DBCC:
    /* 0001dbcc   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dbccu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1DBCE:
    /* 0001dbce   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dbceu);
    rc_ret(c, m);
    return;

}
