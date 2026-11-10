/* fn_00009ba6 - 36 byte(s), 11 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00009ba6(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00009ba6u): goto L_9BA6;
    case RC_ADDR(0x00009baau): goto L_9BAA;
    case RC_ADDR(0x00009baeu): goto L_9BAE;
    case RC_ADDR(0x00009bb0u): goto L_9BB0;
    case RC_ADDR(0x00009bb2u): goto L_9BB2;
    case RC_ADDR(0x00009bb8u): goto L_9BB8;
    case RC_ADDR(0x00009bbau): goto L_9BBA;
    case RC_ADDR(0x00009bbeu): goto L_9BBE;
    case RC_ADDR(0x00009bc0u): goto L_9BC0;
    case RC_ADDR(0x00009bc6u): goto L_9BC6;
    case RC_ADDR(0x00009bc8u): goto L_9BC8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9BA6:
    /* 00009ba6   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00009ba6u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_9BAA:
    /* 00009baa   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00009baau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9BAE:
    /* 00009bae   2  bsr 00009bca */
    c->pc = RC_ADDR(0x00009baeu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00009bb0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009bcau);
    return;

L_9BB0:
    /* 00009bb0   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00009bb0u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_9BB2:
    /* 00009bb2   6  movea.l #dff0a0,A0 */
    c->pc = RC_ADDR(0x00009bb2u);
    rc_step(c, m);
    t0 = 0x00dff0a0u;
    c->a[0] = t0;

L_9BB8:
    /* 00009bb8   2  clr.l D0 */
    c->pc = RC_ADDR(0x00009bb8u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9BBA:
    /* 00009bba   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00009bbau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9BBE:
    /* 00009bbe   2  lsl.w #4,D0 */
    c->pc = RC_ADDR(0x00009bbeu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_9BC0:
    /* 00009bc0   6  move.w #0,(8,A0,D0.w) */
    c->pc = RC_ADDR(0x00009bc0u);
    rc_step(c, m);
    t0 = 0x00000000u;
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x8u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9BC6:
    /* 00009bc6   2  unlk A5 */
    c->pc = RC_ADDR(0x00009bc6u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_9BC8:
    /* 00009bc8   2  rts */
    c->pc = RC_ADDR(0x00009bc8u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
