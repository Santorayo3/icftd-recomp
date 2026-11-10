/* fn_00015fc6 - 16 byte(s), 5 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00015fc6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case 0x00015fc6u: goto L_15FC6;
    case 0x00015fc8u: goto L_15FC8;
    case 0x00015fccu: goto L_15FCC;
    case 0x00015fd0u: goto L_15FD0;
    case 0x00015fd4u: goto L_15FD4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_15FC6:
    /* 00015fc6   2  lsr.w #1,D2 */
    c->pc = 0x00015fc6u;
    c->d[2] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W);

L_15FC8:
    /* 00015fc8   4  movea.l (fffff318,A4),A2 */
    c->pc = 0x00015fc8u;
    t0 = rc_rd32(c, m, (c->a[4] - 0xce8u));
    c->a[2] = t0;

L_15FCC:
    /* 00015fcc   4  move.b (0,A2,D2.w),D3 */
    c->pc = 0x00015fccu;
    t4 = rc_ext(c->d[2], RC_W);
    t0 = rc_rd8(c, m, (c->a[2] + 0x0u + t4));
    rc_d_set(c, 3, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_15FD0:
    /* 00015fd0   4  andi.b #80,D3 */
    c->pc = 0x00015fd0u;
    t1 = rc_d_get(c, 3, RC_B);
    t2 = t1 & 0x00000080u;
    rc_d_set(c, 3, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_15FD4:
    /* 00015fd4   2  rts */
    c->pc = 0x00015fd4u;
    rc_ret(c, m);
    return;

}
