/* fn_00016550 - 56 byte(s), 16 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00016550(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case 0x00016550u: goto L_16550;
    case 0x00016554u: goto L_16554;
    case 0x00016558u: goto L_16558;
    case 0x0001655cu: goto L_1655C;
    case 0x00016560u: goto L_16560;
    case 0x00016562u: goto L_16562;
    case 0x00016566u: goto L_16566;
    case 0x0001656au: goto L_1656A;
    case 0x0001656eu: goto L_1656E;
    case 0x00016570u: goto L_16570;
    case 0x00016574u: goto L_16574;
    case 0x00016578u: goto L_16578;
    case 0x0001657cu: goto L_1657C;
    case 0x00016580u: goto L_16580;
    case 0x00016584u: goto L_16584;
    case 0x00016586u: goto L_16586;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16550:
    /* 00016550   4  link.w A5,#0 */
    c->pc = 0x00016550u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_16554:
    /* 00016554   4  move.l (c,A5),-(A7) */
    c->pc = 0x00016554u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16558:
    /* 00016558   4  pea (12e0,A4) */
    c->pc = 0x00016558u;
    rc_push32(c, m, (c->a[4] + 0x12e0u));

L_1655C:
    /* 0001655c   4  jsr (ffff838c,A4) */
    c->pc = 0x0001655cu;
    /* vector 151 */
    rc_push32(c, m, 0x00016560u);
    rc_depth++;
    c->pc = 0x000218eau;
    return;

L_16560:
    /* 00016560   2  addq.w #8,A7 */
    c->pc = 0x00016560u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_16562:
    /* 00016562   4  pea (00000011).l */
    c->pc = 0x00016562u;
    rc_push32(c, m, 0x00000011u);

L_16566:
    /* 00016566   4  move.l (8,A5),D0 */
    c->pc = 0x00016566u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1656A:
    /* 0001656a   4  add.l (10,A5),D0 */
    c->pc = 0x0001656au;
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1656E:
    /* 0001656e   2  move.l D0,-(A7) */
    c->pc = 0x0001656eu;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16570:
    /* 00016570   4  pea (00000007).l */
    c->pc = 0x00016570u;
    rc_push32(c, m, 0x00000007u);

L_16574:
    /* 00016574   4  move.l (8,A5),-(A7) */
    c->pc = 0x00016574u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16578:
    /* 00016578   4  pea (12e0,A4) */
    c->pc = 0x00016578u;
    rc_push32(c, m, (c->a[4] + 0x12e0u));

L_1657C:
    /* 0001657c   4  jsr (ffff8386,A4) */
    c->pc = 0x0001657cu;
    /* vector 150 */
    rc_push32(c, m, 0x00016580u);
    rc_depth++;
    c->pc = 0x000218d8u;
    return;

L_16580:
    /* 00016580   4  lea (14,A7),A7 */
    c->pc = 0x00016580u;
    c->a[7] = (c->a[7] + 0x14u);

L_16584:
    /* 00016584   2  unlk A5 */
    c->pc = 0x00016584u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16586:
    /* 00016586   2  rts */
    c->pc = 0x00016586u;
    rc_ret(c, m);
    return;

}
