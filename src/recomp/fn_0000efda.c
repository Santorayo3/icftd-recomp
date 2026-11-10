/* fn_0000efda - 28 byte(s), 8 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000efda(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000efdau): goto L_EFDA;
    case RC_ADDR(0x0000efdeu): goto L_EFDE;
    case RC_ADDR(0x0000efe2u): goto L_EFE2;
    case RC_ADDR(0x0000efe6u): goto L_EFE6;
    case RC_ADDR(0x0000efeau): goto L_EFEA;
    case RC_ADDR(0x0000efeeu): goto L_EFEE;
    case RC_ADDR(0x0000eff0u): goto L_EFF0;
    case RC_ADDR(0x0000eff4u): goto L_EFF4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_EFDA:
    /* 0000efda   4  movem.l { D1 D2 D3 D4 D5 D6 A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0000efdau);
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

L_EFDE:
    /* 0000efde   4  movea.l (2c,A7),A0 */
    c->pc = RC_ADDR(0x0000efdeu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[7] + 0x2cu));
    c->a[0] = t0;

L_EFE2:
    /* 0000efe2   4  movea.l (30,A7),A1 */
    c->pc = RC_ADDR(0x0000efe2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[7] + 0x30u));
    c->a[1] = t0;

L_EFE6:
    /* 0000efe6   4  movea.l (ae0,A4),A3 */
    c->pc = RC_ADDR(0x0000efe6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0xae0u));
    c->a[3] = t0;

L_EFEA:
    /* 0000efea   4  movea.l (ffffa208,A4),A6 */
    c->pc = RC_ADDR(0x0000efeau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5df8u));
    c->a[6] = t0;

L_EFEE:
    /* 0000efee   2  bsr 0000f05e */
    c->pc = RC_ADDR(0x0000efeeu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000eff0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f05eu);
    return;

L_EFF0:
    /* 0000eff0   4  movem.l (SP)+,{ D4 D5 D6 D7 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x0000eff0u);
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

L_EFF4:
    /* 0000eff4   2  rts */
    c->pc = RC_ADDR(0x0000eff4u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
