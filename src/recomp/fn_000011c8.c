/* fn_000011c8 - 34 byte(s), 10 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000011c8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1;

    switch (c->pc)
    {
    case RC_ADDR(0x000011c8u): goto L_11C8;
    case RC_ADDR(0x000011ccu): goto L_11CC;
    case RC_ADDR(0x000011ceu): goto L_11CE;
    case RC_ADDR(0x000011d2u): goto L_11D2;
    case RC_ADDR(0x000011d4u): goto L_11D4;
    case RC_ADDR(0x000011d6u): goto L_11D6;
    case RC_ADDR(0x000011dau): goto L_11DA;
    case RC_ADDR(0x000011deu): goto L_11DE;
    case RC_ADDR(0x000011e2u): goto L_11E2;
    case RC_ADDR(0x000011e6u): goto L_11E6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11C8:
    /* 000011c8   4  move.b (ffffffcf,A5),D0 */
    c->pc = RC_ADDR(0x000011c8u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x31u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_11CC:
    /* 000011cc   2  ext.w D0 */
    c->pc = RC_ADDR(0x000011ccu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_11CE:
    /* 000011ce   4  move.w (ffffffd8,A5),D1 */
    c->pc = RC_ADDR(0x000011ceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x28u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11D2:
    /* 000011d2   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x000011d2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_11D4:
    /* 000011d4   2  bcs 000011a8 */
    c->pc = RC_ADDR(0x000011d4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5))
    {
        c->pc = RC_ADDR(0x000011a8u);
        return;
    }

L_11D6:
    /* 000011d6   4  pea (00000001).l */
    c->pc = RC_ADDR(0x000011d6u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_11DA:
    /* 000011da   4  pea (ffffffcf,A5) */
    c->pc = RC_ADDR(0x000011dau);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x31u));

L_11DE:
    /* 000011de   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000011deu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11E2:
    /* 000011e2   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x000011e2u);
    rc_step(c, m, 18);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x000011e6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d6au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021472u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021476u);
    return;

L_11E6:
    /* 000011e6   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000011e6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

    /* falls through into 000011ea */
    c->pc = RC_ADDR(0x000011eau);
    return;
}
