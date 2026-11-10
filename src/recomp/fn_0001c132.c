/* fn_0001c132 - 66 byte(s), 21 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001c132(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case 0x0001c132u: goto L_1C132;
    case 0x0001c136u: goto L_1C136;
    case 0x0001c13au: goto L_1C13A;
    case 0x0001c13eu: goto L_1C13E;
    case 0x0001c142u: goto L_1C142;
    case 0x0001c146u: goto L_1C146;
    case 0x0001c148u: goto L_1C148;
    case 0x0001c14au: goto L_1C14A;
    case 0x0001c14cu: goto L_1C14C;
    case 0x0001c150u: goto L_1C150;
    case 0x0001c152u: goto L_1C152;
    case 0x0001c156u: goto L_1C156;
    case 0x0001c15au: goto L_1C15A;
    case 0x0001c15eu: goto L_1C15E;
    case 0x0001c162u: goto L_1C162;
    case 0x0001c164u: goto L_1C164;
    case 0x0001c166u: goto L_1C166;
    case 0x0001c16au: goto L_1C16A;
    case 0x0001c16eu: goto L_1C16E;
    case 0x0001c170u: goto L_1C170;
    case 0x0001c172u: goto L_1C172;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1C132:
    /* 0001c132   4  link.w A5,#0 */
    c->pc = 0x0001c132u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1C136:
    /* 0001c136   4  move.w #40,-(A7) */
    c->pc = 0x0001c136u;
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C13A:
    /* 0001c13a   4  move.w (2288,A4),D0 */
    c->pc = 0x0001c13au;
    t0 = rc_rd16(c, m, (c->a[4] + 0x2288u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C13E:
    /* 0001c13e   4  muls.w #14,D0 */
    c->pc = 0x0001c13eu;
    t0 = 0x00000014u;
    rc_muls(c, 0, t0);

L_1C142:
    /* 0001c142   4  move.w (23a2,A4),D1 */
    c->pc = 0x0001c142u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x23a2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C146:
    /* 0001c146   2  sub.w D0,D1 */
    c->pc = 0x0001c146u;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1C148:
    /* 0001c148   2  move.w D1,-(A7) */
    c->pc = 0x0001c148u;
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C14A:
    /* 0001c14a   2  clr.w -(A7) */
    c->pc = 0x0001c14au;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C14C:
    /* 0001c14c   4  jsr (ffff80ce,A4) */
    c->pc = 0x0001c14cu;
    /* vector 34 */
    rc_push32(c, m, 0x0001c150u);
    rc_depth++;
    c->pc = 0x00009c1au;
    return;

L_1C150:
    /* 0001c150   2  addq.w #6,A7 */
    c->pc = 0x0001c150u;
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1C152:
    /* 0001c152   4  move.w #40,-(A7) */
    c->pc = 0x0001c152u;
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C156:
    /* 0001c156   4  move.w (2288,A4),D0 */
    c->pc = 0x0001c156u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x2288u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C15A:
    /* 0001c15a   4  muls.w #14,D0 */
    c->pc = 0x0001c15au;
    t0 = 0x00000014u;
    rc_muls(c, 0, t0);

L_1C15E:
    /* 0001c15e   4  move.w (23a2,A4),D1 */
    c->pc = 0x0001c15eu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x23a2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C162:
    /* 0001c162   2  sub.w D0,D1 */
    c->pc = 0x0001c162u;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1C164:
    /* 0001c164   2  move.w D1,-(A7) */
    c->pc = 0x0001c164u;
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C166:
    /* 0001c166   4  move.w #1,-(A7) */
    c->pc = 0x0001c166u;
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C16A:
    /* 0001c16a   4  jsr (ffff80ce,A4) */
    c->pc = 0x0001c16au;
    /* vector 34 */
    rc_push32(c, m, 0x0001c16eu);
    rc_depth++;
    c->pc = 0x00009c1au;
    return;

L_1C16E:
    /* 0001c16e   2  addq.w #6,A7 */
    c->pc = 0x0001c16eu;
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1C170:
    /* 0001c170   2  unlk A5 */
    c->pc = 0x0001c170u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1C172:
    /* 0001c172   2  rts */
    c->pc = 0x0001c172u;
    rc_ret(c, m);
    return;

}
