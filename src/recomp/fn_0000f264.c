/* fn_0000f264 - 34 byte(s), 11 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f264(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f264u): goto L_F264;
    case RC_ADDR(0x0000f268u): goto L_F268;
    case RC_ADDR(0x0000f26cu): goto L_F26C;
    case RC_ADDR(0x0000f270u): goto L_F270;
    case RC_ADDR(0x0000f272u): goto L_F272;
    case RC_ADDR(0x0000f274u): goto L_F274;
    case RC_ADDR(0x0000f276u): goto L_F276;
    case RC_ADDR(0x0000f27au): goto L_F27A;
    case RC_ADDR(0x0000f27cu): goto L_F27C;
    case RC_ADDR(0x0000f280u): goto L_F280;
    case RC_ADDR(0x0000f284u): goto L_F284;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F264:
    /* 0000f264   4  movem.l { D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f264u);
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

L_F268:
    /* 0000f268   4  movea.l (000101da),A6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f268u);
    t0 = rc_rd32(c, m, RC_ADDR(0x000101dau));
    c->a[6] = t0;

L_F26C:
    /* 0000f26c   4  move.l (18,A6),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f26cu);
    t0 = rc_rd32(c, m, (c->a[6] + 0x18u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F270:
    /* 0000f270   2  beq 0000f276 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f270u);
    if (rc_cond(c, 7)) goto L_F276;

L_F272:
    /* 0000f272   2  movea.l D0,A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f272u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_F274:
    /* 0000f274   2  jsr (A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f274u);
    rc_push32(c, m, RC_ADDR(0x0000f276u));
    rc_depth++;
    t3 = c->a[0];
    c->pc = t3;
    return;

L_F276:
    /* 0000f276   4  bsr 0000f646 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f276u);
    rc_push32(c, m, RC_ADDR(0x0000f27au));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f646u);
    return;

L_F27A:
    /* 0000f27a   2  bsr 0000f286 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f27au);
    rc_push32(c, m, RC_ADDR(0x0000f27cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f286u);
    return;

L_F27C:
    /* 0000f27c   4  bsr 0000f3f4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f27cu);
    rc_push32(c, m, RC_ADDR(0x0000f280u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f3f4u);
    return;

L_F280:
    /* 0000f280   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f280u);
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
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_F284:
    /* 0000f284   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f284u);
    rc_ret(c, m);
    return;

}
