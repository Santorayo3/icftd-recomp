/* fn_0001db9e - 22 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001db9e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001db9eu): goto L_1DB9E;
    case RC_ADDR(0x0001dba2u): goto L_1DBA2;
    case RC_ADDR(0x0001dba6u): goto L_1DBA6;
    case RC_ADDR(0x0001dba8u): goto L_1DBA8;
    case RC_ADDR(0x0001dbacu): goto L_1DBAC;
    case RC_ADDR(0x0001dbb0u): goto L_1DBB0;
    case RC_ADDR(0x0001dbb2u): goto L_1DBB2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1DB9E:
    /* 0001db9e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001db9eu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1DBA2:
    /* 0001dba2   4  tst.w (ffffcb22,A4) */
    c->pc = RC_ADDR(0x0001dba2u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34deu));
    rc_set_nzvc(c, t0, RC_W);

L_1DBA6:
    /* 0001dba6   2  bne 0001dbac */
    c->pc = RC_ADDR(0x0001dba6u);
    if (rc_cond(c, 6)) goto L_1DBAC;

L_1DBA8:
    /* 0001dba8   4  jsr (ffff8380,A4) */
    c->pc = RC_ADDR(0x0001dba8u);
    /* vector 149 */
    rc_push32(c, m, RC_ADDR(0x0001dbacu));
    rc_depth++;
    c->pc = RC_ADDR(0x000218d0u);
    return;

L_1DBAC:
    /* 0001dbac   4  addq.w #1,(ffffcb22,A4) */
    c->pc = RC_ADDR(0x0001dbacu);
    t3 = (c->a[4] - 0x34deu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1DBB0:
    /* 0001dbb0   2  unlk A5 */
    c->pc = RC_ADDR(0x0001dbb0u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1DBB2:
    /* 0001dbb2   2  rts */
    c->pc = RC_ADDR(0x0001dbb2u);
    rc_ret(c, m);
    return;

}
