/* fn_0000ee78 - 22 byte(s), 6 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000ee78(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000ee78u): goto L_EE78;
    case RC_ADDR(0x0000ee7cu): goto L_EE7C;
    case RC_ADDR(0x0000ee80u): goto L_EE80;
    case RC_ADDR(0x0000ee84u): goto L_EE84;
    case RC_ADDR(0x0000ee88u): goto L_EE88;
    case RC_ADDR(0x0000ee8cu): goto L_EE8C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_EE78:
    /* 0000ee78   4  movem.l { D1 D2 D3 D4 D5 D6 A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0000ee78u);
    rc_step(c, m);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_EE7C:
    /* 0000ee7c   4  movea.l (ae0,A4),A3 */
    c->pc = RC_ADDR(0x0000ee7cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0xae0u));
    c->a[3] = t0;

L_EE80:
    /* 0000ee80   4  movea.l (ffffa208,A4),A6 */
    c->pc = RC_ADDR(0x0000ee80u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5df8u));
    c->a[6] = t0;

L_EE84:
    /* 0000ee84   4  jsr (0000f02e) */
    c->pc = RC_ADDR(0x0000ee84u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000ee88u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f02eu);
    return;

L_EE88:
    /* 0000ee88   4  movem.l (SP)+,{ D4 D5 D6 D7 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x0000ee88u);
    rc_step(c, m);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_EE8C:
    /* 0000ee8c   2  rts */
    c->pc = RC_ADDR(0x0000ee8cu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
