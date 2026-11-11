/* fn_00020490 - 22 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020490(cpu_t *c, rt_machine *m)
{
    u32 t0, t1;

    switch (c->pc)
    {
    case RC_ADDR(0x00020490u): goto L_20490;
    case RC_ADDR(0x00020494u): goto L_20494;
    case RC_ADDR(0x00020496u): goto L_20496;
    case RC_ADDR(0x0002049au): goto L_2049A;
    case RC_ADDR(0x0002049eu): goto L_2049E;
    case RC_ADDR(0x000204a0u): goto L_204A0;
    case RC_ADDR(0x000204a2u): goto L_204A2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20490:
    /* 00020490   4  tst.w (2ad8,A4) */
    c->pc = RC_ADDR(0x00020490u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2ad8u));
    rc_set_nzvc(c, t0, RC_W);

L_20494:
    /* 00020494   2  beq 000204a2 */
    c->pc = RC_ADDR(0x00020494u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_204A2;

L_20496:
    /* 00020496   4  move.l (2ada,A4),D0 */
    c->pc = RC_ADDR(0x00020496u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2adau));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2049A:
    /* 0002049a   4  cmp.l (4,A7),D0 */
    c->pc = RC_ADDR(0x0002049au);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_2049E:
    /* 0002049e   2  bne 000204a2 */
    c->pc = RC_ADDR(0x0002049eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_204A2;

L_204A0:
    /* 000204a0   2  rts */
    c->pc = RC_ADDR(0x000204a0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_204A2:
    /* 000204a2   4  jmp (00021400) */
    c->pc = RC_ADDR(0x000204a2u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021400u);
    return;

}
