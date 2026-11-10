/* fn_0000903a - 42 byte(s), 12 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000903a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000903au): goto L_903A;
    case RC_ADDR(0x0000903eu): goto L_903E;
    case RC_ADDR(0x00009042u): goto L_9042;
    case RC_ADDR(0x00009046u): goto L_9046;
    case RC_ADDR(0x0000904au): goto L_904A;
    case RC_ADDR(0x0000904eu): goto L_904E;
    case RC_ADDR(0x00009050u): goto L_9050;
    case RC_ADDR(0x00009054u): goto L_9054;
    case RC_ADDR(0x0000905au): goto L_905A;
    case RC_ADDR(0x0000905cu): goto L_905C;
    case RC_ADDR(0x00009060u): goto L_9060;
    case RC_ADDR(0x00009062u): goto L_9062;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_903A:
    /* 0000903a   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000903au);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_903E:
    /* 0000903e   4  move.w (8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000903eu);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9042:
    /* 00009042   4  muls.w #3,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009042u);
    t0 = 0x00000003u;
    rc_muls(c, 0, t0);

L_9046:
    /* 00009046   4  sub.w D0,(fffff0f8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009046u);
    t3 = (c->a[4] - 0xf08u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_904A:
    /* 0000904a   4  tst.w (fffff0f8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000904au);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf08u));
    rc_set_nzvc(c, t0, RC_W);

L_904E:
    /* 0000904e   2  bge 00009054 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000904eu);
    if (rc_cond(c, 12)) goto L_9054;

L_9050:
    /* 00009050   4  clr.w (fffff0f8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009050u);
    rc_wr16(c, m, (c->a[4] - 0xf08u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9054:
    /* 00009054   6  cmpi.w #12,(fffff0f8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009054u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf08u));
    rc_cmp(c, RC_W, t0, 0x00000012u);

L_905A:
    /* 0000905a   2  bge 00009060 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000905au);
    if (rc_cond(c, 12)) goto L_9060;

L_905C:
    /* 0000905c   4  clr.w (fffff0fc,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000905cu);
    rc_wr16(c, m, (c->a[4] - 0xf04u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9060:
    /* 00009060   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009060u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_9062:
    /* 00009062   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009062u);
    rc_ret(c, m);
    return;

}
