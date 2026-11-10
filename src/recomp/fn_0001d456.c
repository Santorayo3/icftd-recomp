/* fn_0001d456 - 32 byte(s), 10 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001d456(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d456u): goto L_1D456;
    case RC_ADDR(0x0001d45au): goto L_1D45A;
    case RC_ADDR(0x0001d45eu): goto L_1D45E;
    case RC_ADDR(0x0001d462u): goto L_1D462;
    case RC_ADDR(0x0001d464u): goto L_1D464;
    case RC_ADDR(0x0001d468u): goto L_1D468;
    case RC_ADDR(0x0001d46cu): goto L_1D46C;
    case RC_ADDR(0x0001d470u): goto L_1D470;
    case RC_ADDR(0x0001d472u): goto L_1D472;
    case RC_ADDR(0x0001d474u): goto L_1D474;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D456:
    /* 0001d456   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d456u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1D45A:
    /* 0001d45a   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d45au);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D45E:
    /* 0001d45e   4  jsr (ffff827e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d45eu);
    /* vector 106 */
    rc_push32(c, m, RC_ADDR(0x0001d462u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020096u);
    return;

L_1D462:
    /* 0001d462   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d462u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D464:
    /* 0001d464   4  pea (00000028).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d464u);
    rc_push32(c, m, 0x00000028u);

L_1D468:
    /* 0001d468   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d468u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D46C:
    /* 0001d46c   4  jsr (ffff8344,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d46cu);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x0001d470u);
    rc_os_call(c, m, 0, -210);

L_1D470:
    /* 0001d470   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d470u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D472:
    /* 0001d472   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d472u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D474:
    /* 0001d474   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d474u);
    rc_ret(c, m);
    return;

}
