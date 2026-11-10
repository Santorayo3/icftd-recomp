/* fn_00020c98 - 36 byte(s), 13 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020c98(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00020c98u): goto L_20C98;
    case RC_ADDR(0x00020c9cu): goto L_20C9C;
    case RC_ADDR(0x00020ca0u): goto L_20CA0;
    case RC_ADDR(0x00020ca2u): goto L_20CA2;
    case RC_ADDR(0x00020ca4u): goto L_20CA4;
    case RC_ADDR(0x00020ca6u): goto L_20CA6;
    case RC_ADDR(0x00020caau): goto L_20CAA;
    case RC_ADDR(0x00020cacu): goto L_20CAC;
    case RC_ADDR(0x00020caeu): goto L_20CAE;
    case RC_ADDR(0x00020cb2u): goto L_20CB2;
    case RC_ADDR(0x00020cb4u): goto L_20CB4;
    case RC_ADDR(0x00020cb6u): goto L_20CB6;
    case RC_ADDR(0x00020cbau): goto L_20CBA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20C98:
    /* 00020c98   4  move.w (c,A7),D0 */
    c->pc = RC_ADDR(0x00020c98u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[7] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20C9C:
    /* 00020c9c   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x00020c9cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_20CA0:
    /* 00020ca0   2  tst.b (A0)+ */
    c->pc = RC_ADDR(0x00020ca0u);
    rc_step(c, m);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_set_nzvc(c, t0, RC_B);

L_20CA2:
    /* 00020ca2   2  bne 00020ca0 */
    c->pc = RC_ADDR(0x00020ca2u);
    rc_step(c, m);
    if (rc_cond(c, 6)) { rc_tick(); goto L_20CA0; }

L_20CA4:
    /* 00020ca4   2  subq.w #1,A0 */
    c->pc = RC_ADDR(0x00020ca4u);
    rc_step(c, m);
    c->a[0] -= rc_ext(0x00000001u, RC_W);

L_20CA6:
    /* 00020ca6   4  movea.l (8,A7),A1 */
    c->pc = RC_ADDR(0x00020ca6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[7] + 0x8u));
    c->a[1] = t0;

L_20CAA:
    /* 00020caa   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00020caau);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_20CAC:
    /* 00020cac   2  move.b (A1)+,(A0)+ */
    c->pc = RC_ADDR(0x00020cacu);
    rc_step(c, m);
    t3 = c->a[1];
    c->a[1] += 1u;
    t0 = rc_rd8(c, m, t3);
    t3 = c->a[0];
    c->a[0] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20CAE:
    /* 00020cae   4  dbeq D0,00020cac */
    c->pc = RC_ADDR(0x00020caeu);
    rc_step(c, m);
    if (!rc_cond(c, 7)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_20CAC; }
    }

L_20CB2:
    /* 00020cb2   2  beq 00020cb6 */
    c->pc = RC_ADDR(0x00020cb2u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_20CB6;

L_20CB4:
    /* 00020cb4   2  clr.b (A0) */
    c->pc = RC_ADDR(0x00020cb4u);
    rc_step(c, m);
    rc_wr8(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_20CB6:
    /* 00020cb6   4  move.l (4,A7),D0 */
    c->pc = RC_ADDR(0x00020cb6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20CBA:
    /* 00020cba   2  rts */
    c->pc = RC_ADDR(0x00020cbau);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
