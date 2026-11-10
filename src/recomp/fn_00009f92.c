/* fn_00009f92 - 28 byte(s), 9 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00009f92(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00009f92u): goto L_9F92;
    case RC_ADDR(0x00009f96u): goto L_9F96;
    case RC_ADDR(0x00009f9au): goto L_9F9A;
    case RC_ADDR(0x00009f9cu): goto L_9F9C;
    case RC_ADDR(0x00009fa0u): goto L_9FA0;
    case RC_ADDR(0x00009fa4u): goto L_9FA4;
    case RC_ADDR(0x00009fa8u): goto L_9FA8;
    case RC_ADDR(0x00009faau): goto L_9FAA;
    case RC_ADDR(0x00009facu): goto L_9FAC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9F92:
    /* 00009f92   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00009f92u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_9F96:
    /* 00009f96   4  tst.l (fffff0ee,A4) */
    c->pc = RC_ADDR(0x00009f96u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf12u));
    rc_set_nzvc(c, t0, RC_L);

L_9F9A:
    /* 00009f9a   2  beq 00009faa */
    c->pc = RC_ADDR(0x00009f9au);
    if (rc_cond(c, 7)) goto L_9FAA;

L_9F9C:
    /* 00009f9c   4  move.l (fffff0f2,A4),-(A7) */
    c->pc = RC_ADDR(0x00009f9cu);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf0eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9FA0:
    /* 00009fa0   4  move.l (fffff0ee,A4),-(A7) */
    c->pc = RC_ADDR(0x00009fa0u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf12u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9FA4:
    /* 00009fa4   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00009fa4u);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x00009fa8u);
    rc_os_call(c, m, 0, -210);

L_9FA8:
    /* 00009fa8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00009fa8u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_9FAA:
    /* 00009faa   2  unlk A5 */
    c->pc = RC_ADDR(0x00009faau);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_9FAC:
    /* 00009fac   2  rts */
    c->pc = RC_ADDR(0x00009facu);
    rc_ret(c, m);
    return;

}
