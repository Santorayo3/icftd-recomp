/* fn_0000f0de - 32 byte(s), 10 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f0de(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f0deu): goto L_F0DE;
    case RC_ADDR(0x0000f0e2u): goto L_F0E2;
    case RC_ADDR(0x0000f0e6u): goto L_F0E6;
    case RC_ADDR(0x0000f0ecu): goto L_F0EC;
    case RC_ADDR(0x0000f0eeu): goto L_F0EE;
    case RC_ADDR(0x0000f0f0u): goto L_F0F0;
    case RC_ADDR(0x0000f0f2u): goto L_F0F2;
    case RC_ADDR(0x0000f0f4u): goto L_F0F4;
    case RC_ADDR(0x0000f0f8u): goto L_F0F8;
    case RC_ADDR(0x0000f0fcu): goto L_F0FC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F0DE:
    /* 0000f0de   4  movem.l { A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x0000f0deu);
    rc_step(c, m);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_F0E2:
    /* 0000f0e2   4  clr.w (3c,A6) */
    c->pc = RC_ADDR(0x0000f0e2u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[6] + 0x3cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F0E6:
    /* 0000f0e6   6  bset #0,(1c,A6) */
    c->pc = RC_ADDR(0x0000f0e6u);
    rc_step(c, m);
    t4 = 0x00000000u;
    t3 = (c->a[6] + 0x1cu);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_F0EC:
    /* 0000f0ec   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000f0ecu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_F0EE:
    /* 0000f0ee   2  bne 0000f0f2 */
    c->pc = RC_ADDR(0x0000f0eeu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_F0F2;

L_F0F0:
    /* 0000f0f0   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0000f0f0u);
    rc_step(c, m);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_F0F2:
    /* 0000f0f2   2  clr.w D1 */
    c->pc = RC_ADDR(0x0000f0f2u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F0F4:
    /* 0000f0f4   4  bsr 0000f608 */
    c->pc = RC_ADDR(0x0000f0f4u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000f0f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f608u);
    return;

L_F0F8:
    /* 0000f0f8   4  movem.l (SP)+,{ D0 D1 } */
    c->pc = RC_ADDR(0x0000f0f8u);
    rc_step(c, m);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_F0FC:
    /* 0000f0fc   2  rts */
    c->pc = RC_ADDR(0x0000f0fcu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
