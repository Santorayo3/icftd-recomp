/* fn_0000a4d6 - 42 byte(s), 14 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000a4d6(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000a4d6u): goto L_A4D6;
    case RC_ADDR(0x0000a4dau): goto L_A4DA;
    case RC_ADDR(0x0000a4deu): goto L_A4DE;
    case RC_ADDR(0x0000a4e0u): goto L_A4E0;
    case RC_ADDR(0x0000a4e6u): goto L_A4E6;
    case RC_ADDR(0x0000a4e8u): goto L_A4E8;
    case RC_ADDR(0x0000a4ecu): goto L_A4EC;
    case RC_ADDR(0x0000a4f0u): goto L_A4F0;
    case RC_ADDR(0x0000a4f2u): goto L_A4F2;
    case RC_ADDR(0x0000a4f4u): goto L_A4F4;
    case RC_ADDR(0x0000a4f6u): goto L_A4F6;
    case RC_ADDR(0x0000a4fau): goto L_A4FA;
    case RC_ADDR(0x0000a4fcu): goto L_A4FC;
    case RC_ADDR(0x0000a4feu): goto L_A4FE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_A4D6:
    /* 0000a4d6   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000a4d6u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_A4DA:
    /* 0000a4da   4  tst.w (ffff9312,A4) */
    c->pc = RC_ADDR(0x0000a4dau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x6ceeu));
    rc_set_nzvc(c, t0, RC_W);

L_A4DE:
    /* 0000a4de   2  beq 0000a4fc */
    c->pc = RC_ADDR(0x0000a4deu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_A4FC;

L_A4E0:
    /* 0000a4e0   6  cmpi.w #1,(ffff9312,A4) */
    c->pc = RC_ADDR(0x0000a4e0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x6ceeu));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_A4E6:
    /* 0000a4e6   2  bne 0000a4f4 */
    c->pc = RC_ADDR(0x0000a4e6u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_A4F4;

L_A4E8:
    /* 0000a4e8   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000a4e8u);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A4EC:
    /* 0000a4ec   4  jsr (0000a44a) */
    c->pc = RC_ADDR(0x0000a4ecu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000a4f0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000a44au);
    return;

L_A4F0:
    /* 0000a4f0   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000a4f0u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_A4F2:
    /* 0000a4f2   2  bra 0000a4fc */
    c->pc = RC_ADDR(0x0000a4f2u);
    rc_step(c, m);
    goto L_A4FC;

L_A4F4:
    /* 0000a4f4   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000a4f4u);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A4F6:
    /* 0000a4f6   4  jsr (0000a44a) */
    c->pc = RC_ADDR(0x0000a4f6u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000a4fau));
    rc_depth++;
    c->pc = RC_ADDR(0x0000a44au);
    return;

L_A4FA:
    /* 0000a4fa   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000a4fau);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_A4FC:
    /* 0000a4fc   2  unlk A5 */
    c->pc = RC_ADDR(0x0000a4fcu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_A4FE:
    /* 0000a4fe   2  rts */
    c->pc = RC_ADDR(0x0000a4feu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
