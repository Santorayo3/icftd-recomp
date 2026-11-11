/* fn_00021934 - 20 byte(s), 5 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021934(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00021934u): goto L_21934;
    case RC_ADDR(0x00021938u): goto L_21938;
    case RC_ADDR(0x0002193cu): goto L_2193C;
    case RC_ADDR(0x00021940u): goto L_21940;
    case RC_ADDR(0x00021944u): goto L_21944;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21934:
    /* 00021934   4  movea.l (4,A7),A1 */
    c->pc = RC_ADDR(0x00021934u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_21938:
    /* 00021938   4  movea.l (8,A7),A0 */
    c->pc = RC_ADDR(0x00021938u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x8u));
    c->a[0] = t0;

L_2193C:
    /* 0002193c   4  move.l (c,A7),D0 */
    c->pc = RC_ADDR(0x0002193cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21940:
    /* 00021940   4  movea.l (ffffcba0,A4),A6 */
    c->pc = RC_ADDR(0x00021940u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_21944:
    /* 00021944   4  jmp (ffffffca,A6) */
    c->pc = RC_ADDR(0x00021944u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -54);
    return;

}
