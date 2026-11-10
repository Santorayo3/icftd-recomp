/* fn_00021254 - 30 byte(s), 10 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021254(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case 0x00021254u: goto L_21254;
    case 0x00021258u: goto L_21258;
    case 0x0002125cu: goto L_2125C;
    case 0x0002125eu: goto L_2125E;
    case 0x00021262u: goto L_21262;
    case 0x00021264u: goto L_21264;
    case 0x00021268u: goto L_21268;
    case 0x0002126cu: goto L_2126C;
    case 0x0002126eu: goto L_2126E;
    case 0x00021270u: goto L_21270;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21254:
    /* 00021254   4  link.w A5,#0 */
    c->pc = 0x00021254u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_21258:
    /* 00021258   4  tst.l (3b1a,A4) */
    c->pc = 0x00021258u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b1au));
    rc_set_nzvc(c, t0, RC_L);

L_2125C:
    /* 0002125c   2  beq 00021264 */
    c->pc = 0x0002125cu;
    if (rc_cond(c, 7)) goto L_21264;

L_2125E:
    /* 0002125e   4  movea.l (3b1a,A4),A0 */
    c->pc = 0x0002125eu;
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b1au));
    c->a[0] = t0;

L_21262:
    /* 00021262   2  jsr (A0) */
    c->pc = 0x00021262u;
    rc_push32(c, m, 0x00021264u);
    rc_depth++;
    t3 = c->a[0];
    c->pc = t3;
    return;

L_21264:
    /* 00021264   4  move.w (8,A5),-(A7) */
    c->pc = 0x00021264u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_21268:
    /* 00021268   4  jsr (00021272) */
    c->pc = 0x00021268u;
    rc_push32(c, m, 0x0002126cu);
    rc_depth++;
    c->pc = 0x00021272u;
    return;

L_2126C:
    /* 0002126c   2  addq.w #2,A7 */
    c->pc = 0x0002126cu;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_2126E:
    /* 0002126e   2  unlk A5 */
    c->pc = 0x0002126eu;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_21270:
    /* 00021270   2  rts */
    c->pc = 0x00021270u;
    rc_ret(c, m);
    return;

}
