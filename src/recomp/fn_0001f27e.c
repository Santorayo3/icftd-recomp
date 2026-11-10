/* fn_0001f27e - 40 byte(s), 15 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f27e(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f27eu): goto L_1F27E;
    case RC_ADDR(0x0001f282u): goto L_1F282;
    case RC_ADDR(0x0001f286u): goto L_1F286;
    case RC_ADDR(0x0001f28au): goto L_1F28A;
    case RC_ADDR(0x0001f28cu): goto L_1F28C;
    case RC_ADDR(0x0001f28eu): goto L_1F28E;
    case RC_ADDR(0x0001f290u): goto L_1F290;
    case RC_ADDR(0x0001f292u): goto L_1F292;
    case RC_ADDR(0x0001f294u): goto L_1F294;
    case RC_ADDR(0x0001f296u): goto L_1F296;
    case RC_ADDR(0x0001f298u): goto L_1F298;
    case RC_ADDR(0x0001f29au): goto L_1F29A;
    case RC_ADDR(0x0001f29eu): goto L_1F29E;
    case RC_ADDR(0x0001f2a2u): goto L_1F2A2;
    case RC_ADDR(0x0001f2a4u): goto L_1F2A4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F27E:
    /* 0001f27e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001f27eu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1F282:
    /* 0001f282   4  movem.l { D4 D5 },-(SP) */
    c->pc = RC_ADDR(0x0001f282u);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    c->a[7] = t3;

L_1F286:
    /* 0001f286   4  movea.l (ffffcce6,A4),A2 */
    c->pc = RC_ADDR(0x0001f286u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x331au));
    c->a[2] = t0;

L_1F28A:
    /* 0001f28a   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x0001f28au);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F28C:
    /* 0001f28c   2  beq 0001f29a */
    c->pc = RC_ADDR(0x0001f28cu);
    if (rc_cond(c, 7)) goto L_1F29A;

L_1F28E:
    /* 0001f28e   2  movea.l (A2),A3 */
    c->pc = RC_ADDR(0x0001f28eu);
    t0 = rc_rd32(c, m, c->a[2]);
    c->a[3] = t0;

L_1F290:
    /* 0001f290   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001f290u);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F292:
    /* 0001f292   2  bsr 0001f236 */
    c->pc = RC_ADDR(0x0001f292u);
    rc_push32(c, m, RC_ADDR(0x0001f294u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f236u);
    return;

L_1F294:
    /* 0001f294   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f294u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F296:
    /* 0001f296   2  movea.l A3,A2 */
    c->pc = RC_ADDR(0x0001f296u);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[2] = t0;

L_1F298:
    /* 0001f298   2  bra 0001f28a */
    c->pc = RC_ADDR(0x0001f298u);
    rc_tick();
    goto L_1F28A;

L_1F29A:
    /* 0001f29a   4  clr.l (ffffcce6,A4) */
    c->pc = RC_ADDR(0x0001f29au);
    rc_wr32(c, m, (c->a[4] - 0x331au), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F29E:
    /* 0001f29e   4  movem.l (SP)+,{ A2 A3 } */
    c->pc = RC_ADDR(0x0001f29eu);
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

L_1F2A2:
    /* 0001f2a2   2  unlk A5 */
    c->pc = RC_ADDR(0x0001f2a2u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F2A4:
    /* 0001f2a4   2  rts */
    c->pc = RC_ADDR(0x0001f2a4u);
    rc_ret(c, m);
    return;

}
