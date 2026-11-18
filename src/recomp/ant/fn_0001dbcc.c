/* fn_0001dbcc - 24 byte(s), 8 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001dbcc(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001dbccu): goto L_1DBCC;
    case RC_ADDR(0x0001dbd0u): goto L_1DBD0;
    case RC_ADDR(0x0001dbd4u): goto L_1DBD4;
    case RC_ADDR(0x0001dbd6u): goto L_1DBD6;
    case RC_ADDR(0x0001dbdau): goto L_1DBDA;
    case RC_ADDR(0x0001dbdeu): goto L_1DBDE;
    case RC_ADDR(0x0001dbe0u): goto L_1DBE0;
    case RC_ADDR(0x0001dbe2u): goto L_1DBE2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1DBCC:
    /* 0001dbcc   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001dbccu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1DBD0:
    /* 0001dbd0   4  movem.l { D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x0001dbd0u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_1DBD4:
    /* 0001dbd4   2  movea.l (A1),A4 */
    c->pc = RC_ADDR(0x0001dbd4u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[1]);
    c->a[4] = t0;

L_1DBD6:
    /* 0001dbd6   4  bsr 0001dc80 */
    c->pc = RC_ADDR(0x0001dbd6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001dbdau));
    rc_depth++;
    c->pc = RC_ADDR(0x0001dc80u);
    return;

L_1DBDA:
    /* 0001dbda   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 } */
    c->pc = RC_ADDR(0x0001dbdau);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
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
    c->a[0] = t0;
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
    c->a[7] = t3;

L_1DBDE:
    /* 0001dbde   2  clr.l D0 */
    c->pc = RC_ADDR(0x0001dbdeu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1DBE0:
    /* 0001dbe0   2  unlk A5 */
    c->pc = RC_ADDR(0x0001dbe0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1DBE2:
    /* 0001dbe2   2  rts */
    c->pc = RC_ADDR(0x0001dbe2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
