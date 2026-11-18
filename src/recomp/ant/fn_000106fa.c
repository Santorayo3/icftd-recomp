/* fn_000106fa - 26 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000106fa(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000106fau): goto L_106FA;
    case RC_ADDR(0x000106feu): goto L_106FE;
    case RC_ADDR(0x00010702u): goto L_10702;
    case RC_ADDR(0x00010706u): goto L_10706;
    case RC_ADDR(0x0001070au): goto L_1070A;
    case RC_ADDR(0x0001070eu): goto L_1070E;
    case RC_ADDR(0x00010712u): goto L_10712;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_106FA:
    /* 000106fa   4  movem.l { D1 D2 D3 D4 D5 D6 A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x000106fau);
    rc_step(c, m, 8);
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

L_106FE:
    /* 000106fe   4  movea.l (14da,A4),A3 */
    c->pc = RC_ADDR(0x000106feu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14dau));
    c->a[3] = t0;

L_10702:
    /* 00010702   4  movea.l (ffffa428,A4),A6 */
    c->pc = RC_ADDR(0x00010702u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bd8u));
    c->a[6] = t0;

L_10706:
    /* 00010706   4  movea.l (14d6,A4),A0 */
    c->pc = RC_ADDR(0x00010706u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14d6u));
    c->a[0] = t0;

L_1070A:
    /* 0001070a   4  jsr (00010896) */
    c->pc = RC_ADDR(0x0001070au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001070eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00010896u);
    return;

L_1070E:
    /* 0001070e   4  movem.l (SP)+,{ D4 D5 D6 D7 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x0001070eu);
    rc_step(c, m, 12);
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

L_10712:
    /* 00010712   2  rts */
    c->pc = RC_ADDR(0x00010712u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
