/* fn_0001e452 - 74 byte(s), 29 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001e452(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001e452u): goto L_1E452;
    case RC_ADDR(0x0001e456u): goto L_1E456;
    case RC_ADDR(0x0001e45au): goto L_1E45A;
    case RC_ADDR(0x0001e45eu): goto L_1E45E;
    case RC_ADDR(0x0001e462u): goto L_1E462;
    case RC_ADDR(0x0001e464u): goto L_1E464;
    case RC_ADDR(0x0001e466u): goto L_1E466;
    case RC_ADDR(0x0001e46au): goto L_1E46A;
    case RC_ADDR(0x0001e46cu): goto L_1E46C;
    case RC_ADDR(0x0001e46eu): goto L_1E46E;
    case RC_ADDR(0x0001e472u): goto L_1E472;
    case RC_ADDR(0x0001e474u): goto L_1E474;
    case RC_ADDR(0x0001e478u): goto L_1E478;
    case RC_ADDR(0x0001e47au): goto L_1E47A;
    case RC_ADDR(0x0001e47cu): goto L_1E47C;
    case RC_ADDR(0x0001e47eu): goto L_1E47E;
    case RC_ADDR(0x0001e482u): goto L_1E482;
    case RC_ADDR(0x0001e484u): goto L_1E484;
    case RC_ADDR(0x0001e486u): goto L_1E486;
    case RC_ADDR(0x0001e488u): goto L_1E488;
    case RC_ADDR(0x0001e48au): goto L_1E48A;
    case RC_ADDR(0x0001e48cu): goto L_1E48C;
    case RC_ADDR(0x0001e48eu): goto L_1E48E;
    case RC_ADDR(0x0001e490u): goto L_1E490;
    case RC_ADDR(0x0001e492u): goto L_1E492;
    case RC_ADDR(0x0001e494u): goto L_1E494;
    case RC_ADDR(0x0001e496u): goto L_1E496;
    case RC_ADDR(0x0001e498u): goto L_1E498;
    case RC_ADDR(0x0001e49au): goto L_1E49A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E452:
    /* 0001e452   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001e452u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1E456:
    /* 0001e456   4  movem.l { D4 D5 },-(SP) */
    c->pc = RC_ADDR(0x0001e456u);
    rc_step(c, m);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    c->a[7] = t3;

L_1E45A:
    /* 0001e45a   4  movea.l (c,A5),A2 */
    c->pc = RC_ADDR(0x0001e45au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[2] = t0;

L_1E45E:
    /* 0001e45e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001e45eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1E462:
    /* 0001e462   2  tst.l (A0) */
    c->pc = RC_ADDR(0x0001e462u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_L);

L_1E464:
    /* 0001e464   2  bne 0001e46e */
    c->pc = RC_ADDR(0x0001e464u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1E46E;

L_1E466:
    /* 0001e466   4  movem.l (SP)+,{ A2 A3 } */
    c->pc = RC_ADDR(0x0001e466u);
    rc_step(c, m);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1E46A:
    /* 0001e46a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001e46au);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1E46C:
    /* 0001e46c   2  rts */
    c->pc = RC_ADDR(0x0001e46cu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_1E46E:
    /* 0001e46e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001e46eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1E472:
    /* 0001e472   2  movea.l (A0),A3 */
    c->pc = RC_ADDR(0x0001e472u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[3] = t0;

L_1E474:
    /* 0001e474   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001e474u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1E478:
    /* 0001e478   2  movea.l (A0),A1 */
    c->pc = RC_ADDR(0x0001e478u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[1] = t0;

L_1E47A:
    /* 0001e47a   2  cmpa.l A2,A1 */
    c->pc = RC_ADDR(0x0001e47au);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    rc_cmp(c, RC_L, c->a[1], t0);

L_1E47C:
    /* 0001e47c   2  bne 0001e486 */
    c->pc = RC_ADDR(0x0001e47cu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1E486;

L_1E47E:
    /* 0001e47e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001e47eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1E482:
    /* 0001e482   2  move.l (A3),(A0) */
    c->pc = RC_ADDR(0x0001e482u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, c->a[3]);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E484:
    /* 0001e484   2  bra 0001e466 */
    c->pc = RC_ADDR(0x0001e484u);
    rc_step(c, m);
    rc_tick();
    goto L_1E466;

L_1E486:
    /* 0001e486   2  tst.l (A3) */
    c->pc = RC_ADDR(0x0001e486u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, c->a[3]);
    rc_set_nzvc(c, t0, RC_L);

L_1E488:
    /* 0001e488   2  beq 0001e49a */
    c->pc = RC_ADDR(0x0001e488u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1E49A;

L_1E48A:
    /* 0001e48a   2  movea.l (A3),A0 */
    c->pc = RC_ADDR(0x0001e48au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, c->a[3]);
    c->a[0] = t0;

L_1E48C:
    /* 0001e48c   2  cmpa.l A2,A0 */
    c->pc = RC_ADDR(0x0001e48cu);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    rc_cmp(c, RC_L, c->a[0], t0);

L_1E48E:
    /* 0001e48e   2  bne 0001e496 */
    c->pc = RC_ADDR(0x0001e48eu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1E496;

L_1E490:
    /* 0001e490   2  movea.l (A3),A0 */
    c->pc = RC_ADDR(0x0001e490u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, c->a[3]);
    c->a[0] = t0;

L_1E492:
    /* 0001e492   2  move.l (A0),(A3) */
    c->pc = RC_ADDR(0x0001e492u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, c->a[3], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E494:
    /* 0001e494   2  bra 0001e466 */
    c->pc = RC_ADDR(0x0001e494u);
    rc_step(c, m);
    rc_tick();
    goto L_1E466;

L_1E496:
    /* 0001e496   2  movea.l (A3),A3 */
    c->pc = RC_ADDR(0x0001e496u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, c->a[3]);
    c->a[3] = t0;

L_1E498:
    /* 0001e498   2  bra 0001e486 */
    c->pc = RC_ADDR(0x0001e498u);
    rc_step(c, m);
    rc_tick();
    goto L_1E486;

L_1E49A:
    /* 0001e49a   2  bra 0001e466 */
    c->pc = RC_ADDR(0x0001e49au);
    rc_step(c, m);
    rc_tick();
    goto L_1E466;

}
