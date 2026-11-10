/* fn_0000c176 - 54 byte(s), 13 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000c176(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000c176u): goto L_C176;
    case RC_ADDR(0x0000c17au): goto L_C17A;
    case RC_ADDR(0x0000c17eu): goto L_C17E;
    case RC_ADDR(0x0000c182u): goto L_C182;
    case RC_ADDR(0x0000c186u): goto L_C186;
    case RC_ADDR(0x0000c18cu): goto L_C18C;
    case RC_ADDR(0x0000c190u): goto L_C190;
    case RC_ADDR(0x0000c194u): goto L_C194;
    case RC_ADDR(0x0000c19au): goto L_C19A;
    case RC_ADDR(0x0000c1a0u): goto L_C1A0;
    case RC_ADDR(0x0000c1a6u): goto L_C1A6;
    case RC_ADDR(0x0000c1a8u): goto L_C1A8;
    case RC_ADDR(0x0000c1aau): goto L_C1AA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_C176:
    /* 0000c176   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000c176u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_C17A:
    /* 0000c17a   4  clr.w (71a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000c17au);
    rc_wr16(c, m, (c->a[4] + 0x71au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C17E:
    /* 0000c17e   4  clr.w (71c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000c17eu);
    rc_wr16(c, m, (c->a[4] + 0x71cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C182:
    /* 0000c182   4  clr.w (fffffec8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000c182u);
    rc_wr16(c, m, (c->a[4] - 0x138u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C186:
    /* 0000c186   6  move.w (73c,A4),(738,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000c186u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x73cu));
    rc_wr16(c, m, (c->a[4] + 0x738u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C18C:
    /* 0000c18c   4  clr.w (71e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000c18cu);
    rc_wr16(c, m, (c->a[4] + 0x71eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C190:
    /* 0000c190   4  clr.w (716,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000c190u);
    rc_wr16(c, m, (c->a[4] + 0x716u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C194:
    /* 0000c194   6  move.w #1,(718,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000c194u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x718u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C19A:
    /* 0000c19a   6  move.w #1,(478,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000c19au);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x478u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C1A0:
    /* 0000c1a0   6  move.w #64,(720,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000c1a0u);
    t0 = 0x00000064u;
    rc_wr16(c, m, (c->a[4] + 0x720u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C1A6:
    /* 0000c1a6   2  bsr 0000c1ac */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000c1a6u);
    rc_push32(c, m, RC_ADDR(0x0000c1a8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c1acu);
    return;

L_C1A8:
    /* 0000c1a8   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000c1a8u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_C1AA:
    /* 0000c1aa   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000c1aau);
    rc_ret(c, m);
    return;

}
