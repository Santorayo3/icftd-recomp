/* fn_00009bca - 34 byte(s), 9 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00009bca(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case 0x00009bcau: goto L_9BCA;
    case 0x00009bceu: goto L_9BCE;
    case 0x00009bd2u: goto L_9BD2;
    case 0x00009bd6u: goto L_9BD6;
    case 0x00009bd8u: goto L_9BD8;
    case 0x00009bdeu: goto L_9BDE;
    case 0x00009be2u: goto L_9BE2;
    case 0x00009be8u: goto L_9BE8;
    case 0x00009beau: goto L_9BEA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9BCA:
    /* 00009bca   4  link.w A5,#0 */
    c->pc = 0x00009bcau;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_9BCE:
    /* 00009bce   4  move.l (2ec,A4),D1 */
    c->pc = 0x00009bceu;
    t0 = rc_rd32(c, m, (c->a[4] + 0x2ecu));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9BD2:
    /* 00009bd2   4  move.w (8,A5),D0 */
    c->pc = 0x00009bd2u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9BD6:
    /* 00009bd6   2  lsl.w #4,D0 */
    c->pc = 0x00009bd6u;
    c->d[0] = rc_shift(c, 1, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W);

L_9BD8:
    /* 00009bd8   6  movea.l #dff0a0,A0 */
    c->pc = 0x00009bd8u;
    t0 = 0x00dff0a0u;
    c->a[0] = t0;

L_9BDE:
    /* 00009bde   4  move.l D1,(0,A0,D0.w) */
    c->pc = 0x00009bdeu;
    t0 = rc_d_get(c, 1, RC_L);
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9BE2:
    /* 00009be2   6  move.w #2,(4,A0,D0.w) */
    c->pc = 0x00009be2u;
    t0 = 0x00000002u;
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x4u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9BE8:
    /* 00009be8   2  unlk A5 */
    c->pc = 0x00009be8u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_9BEA:
    /* 00009bea   2  rts */
    c->pc = 0x00009beau;
    rc_ret(c, m);
    return;

}
