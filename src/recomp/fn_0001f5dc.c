/* fn_0001f5dc - 40 byte(s), 11 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f5dc(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f5dcu): goto L_1F5DC;
    case RC_ADDR(0x0001f5deu): goto L_1F5DE;
    case RC_ADDR(0x0001f5e2u): goto L_1F5E2;
    case RC_ADDR(0x0001f5e4u): goto L_1F5E4;
    case RC_ADDR(0x0001f5e8u): goto L_1F5E8;
    case RC_ADDR(0x0001f5ecu): goto L_1F5EC;
    case RC_ADDR(0x0001f5f0u): goto L_1F5F0;
    case RC_ADDR(0x0001f5f4u): goto L_1F5F4;
    case RC_ADDR(0x0001f5f8u): goto L_1F5F8;
    case RC_ADDR(0x0001f5fau): goto L_1F5FA;
    case RC_ADDR(0x0001f600u): goto L_1F600;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F5DC:
    /* 0001f5dc   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f5dcu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F5DE:
    /* 0001f5de   4  move.b (f,A5),D0 */
    c->pc = RC_ADDR(0x0001f5deu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1F5E2:
    /* 0001f5e2   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001f5e2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F5E4:
    /* 0001f5e4   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f5e4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F5E8:
    /* 0001f5e8   4  movea.l (fffffebe,A4),A0 */
    c->pc = RC_ADDR(0x0001f5e8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x142u));
    c->a[0] = t0;

L_1F5EC:
    /* 0001f5ec   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0001f5ecu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F5F0:
    /* 0001f5f0   4  jsr (ffff822a,A4) */
    c->pc = RC_ADDR(0x0001f5f0u);
    rc_step(c, m, 18);
    /* vector 92 */
    rc_push32(c, m, RC_ADDR(0x0001f5f4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001dd6eu);
    return;

L_1F5F4:
    /* 0001f5f4   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001f5f4u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1F5F8:
    /* 0001f5f8   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x0001f5f8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_1F5FA:
    /* 0001f5fa   6  move.l (10,A5),(38,A2) */
    c->pc = RC_ADDR(0x0001f5fau);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_wr32(c, m, (c->a[2] + 0x38u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F600:
    /* 0001f600   4  bra 0001f8ae */
    c->pc = RC_ADDR(0x0001f600u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001f8aeu);
    return;

}
