/* fn_0001f89c - 22 byte(s), 6 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f89c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f89cu): goto L_1F89C;
    case RC_ADDR(0x0001f8a2u): goto L_1F8A2;
    case RC_ADDR(0x0001f8a4u): goto L_1F8A4;
    case RC_ADDR(0x0001f8a6u): goto L_1F8A6;
    case RC_ADDR(0x0001f8aau): goto L_1F8AA;
    case RC_ADDR(0x0001f8aeu): goto L_1F8AE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F89C:
    /* 0001f89c   6  cmp.l #1c,D0 */
    c->pc = RC_ADDR(0x0001f89cu);
    t0 = 0x0000001cu;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1F8A2:
    /* 0001f8a2   2  bcc 0001f8ae */
    c->pc = RC_ADDR(0x0001f8a2u);
    if (rc_cond(c, 4)) goto L_1F8AE;

L_1F8A4:
    /* 0001f8a4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001f8a4u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1F8A6:
    /* 0001f8a6   4  move.w (0001f864),D0 */
    c->pc = RC_ADDR(0x0001f8a6u);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x0001f864u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F8AA:
    /* 0001f8aa   4  jmp (0001f8ac) */
    c->pc = RC_ADDR(0x0001f8aau);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x0001f8acu) + t4);
    c->pc = t3;
    return;

L_1F8AE:
    /* 0001f8ae   4  bra 0001f2ca */
    c->pc = RC_ADDR(0x0001f8aeu);
    c->pc = RC_ADDR(0x0001f2cau);
    return;

}
