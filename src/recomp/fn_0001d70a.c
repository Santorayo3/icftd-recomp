/* fn_0001d70a - 36 byte(s), 13 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001d70a(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case 0x0001d70au: goto L_1D70A;
    case 0x0001d70eu: goto L_1D70E;
    case 0x0001d710u: goto L_1D710;
    case 0x0001d714u: goto L_1D714;
    case 0x0001d718u: goto L_1D718;
    case 0x0001d71au: goto L_1D71A;
    case 0x0001d71eu: goto L_1D71E;
    case 0x0001d720u: goto L_1D720;
    case 0x0001d722u: goto L_1D722;
    case 0x0001d726u: goto L_1D726;
    case 0x0001d728u: goto L_1D728;
    case 0x0001d72au: goto L_1D72A;
    case 0x0001d72cu: goto L_1D72C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D70A:
    /* 0001d70a   4  link.w A5,#0 */
    c->pc = 0x0001d70au;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1D70E:
    /* 0001d70e   2  move.l A2,-(A7) */
    c->pc = 0x0001d70eu;
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D710:
    /* 0001d710   4  movea.l (8,A5),A2 */
    c->pc = 0x0001d710u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_1D714:
    /* 0001d714   4  tst.l (c,A2) */
    c->pc = 0x0001d714u;
    t0 = rc_rd32(c, m, (c->a[2] + 0xcu));
    rc_set_nzvc(c, t0, RC_L);

L_1D718:
    /* 0001d718   2  beq 0001d726 */
    c->pc = 0x0001d718u;
    if (rc_cond(c, 7)) goto L_1D726;

L_1D71A:
    /* 0001d71a   4  move.l (c,A2),-(A7) */
    c->pc = 0x0001d71au;
    t0 = rc_rd32(c, m, (c->a[2] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D71E:
    /* 0001d71e   2  bsr 0001d6cc */
    c->pc = 0x0001d71eu;
    rc_push32(c, m, 0x0001d720u);
    rc_depth++;
    c->pc = 0x0001d6ccu;
    return;

L_1D720:
    /* 0001d720   2  addq.w #4,A7 */
    c->pc = 0x0001d720u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D722:
    /* 0001d722   4  clr.l (c,A2) */
    c->pc = 0x0001d722u;
    rc_wr32(c, m, (c->a[2] + 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1D726:
    /* 0001d726   2  move.l A2,D0 */
    c->pc = 0x0001d726u;
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D728:
    /* 0001d728   2  movea.l (A7)+,A2 */
    c->pc = 0x0001d728u;
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_1D72A:
    /* 0001d72a   2  unlk A5 */
    c->pc = 0x0001d72au;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D72C:
    /* 0001d72c   2  rts */
    c->pc = 0x0001d72cu;
    rc_ret(c, m);
    return;

}
