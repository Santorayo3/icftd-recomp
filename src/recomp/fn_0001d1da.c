/* fn_0001d1da - 88 byte(s), 26 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001d1da(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d1dau): goto L_1D1DA;
    case RC_ADDR(0x0001d1deu): goto L_1D1DE;
    case RC_ADDR(0x0001d1e0u): goto L_1D1E0;
    case RC_ADDR(0x0001d1e4u): goto L_1D1E4;
    case RC_ADDR(0x0001d1e8u): goto L_1D1E8;
    case RC_ADDR(0x0001d1eeu): goto L_1D1EE;
    case RC_ADDR(0x0001d1f2u): goto L_1D1F2;
    case RC_ADDR(0x0001d1f6u): goto L_1D1F6;
    case RC_ADDR(0x0001d1fcu): goto L_1D1FC;
    case RC_ADDR(0x0001d200u): goto L_1D200;
    case RC_ADDR(0x0001d204u): goto L_1D204;
    case RC_ADDR(0x0001d206u): goto L_1D206;
    case RC_ADDR(0x0001d20au): goto L_1D20A;
    case RC_ADDR(0x0001d20cu): goto L_1D20C;
    case RC_ADDR(0x0001d210u): goto L_1D210;
    case RC_ADDR(0x0001d214u): goto L_1D214;
    case RC_ADDR(0x0001d216u): goto L_1D216;
    case RC_ADDR(0x0001d21au): goto L_1D21A;
    case RC_ADDR(0x0001d21cu): goto L_1D21C;
    case RC_ADDR(0x0001d220u): goto L_1D220;
    case RC_ADDR(0x0001d222u): goto L_1D222;
    case RC_ADDR(0x0001d226u): goto L_1D226;
    case RC_ADDR(0x0001d228u): goto L_1D228;
    case RC_ADDR(0x0001d22cu): goto L_1D22C;
    case RC_ADDR(0x0001d22eu): goto L_1D22E;
    case RC_ADDR(0x0001d230u): goto L_1D230;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D1DA:
    /* 0001d1da   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001d1dau);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1D1DE:
    /* 0001d1de   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001d1deu);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D1E0:
    /* 0001d1e0   4  jsr (ffff8224,A4) */
    c->pc = RC_ADDR(0x0001d1e0u);
    /* vector 91 */
    rc_push32(c, m, RC_ADDR(0x0001d1e4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d7c4u);
    return;

L_1D1E4:
    /* 0001d1e4   4  movea.l (ffffcbbc,A4),A2 */
    c->pc = RC_ADDR(0x0001d1e4u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    c->a[2] = t0;

L_1D1E8:
    /* 0001d1e8   6  move.l (ffffcbb8,A4),(ffffcbbc,A4) */
    c->pc = RC_ADDR(0x0001d1e8u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3448u));
    rc_wr32(c, m, (c->a[4] - 0x3444u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D1EE:
    /* 0001d1ee   4  move.l A2,(ffffcbb8,A4) */
    c->pc = RC_ADDR(0x0001d1eeu);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x3448u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D1F2:
    /* 0001d1f2   4  movea.l (ffffcb10,A4),A2 */
    c->pc = RC_ADDR(0x0001d1f2u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f0u));
    c->a[2] = t0;

L_1D1F6:
    /* 0001d1f6   6  move.l (ffffcb0c,A4),(ffffcb10,A4) */
    c->pc = RC_ADDR(0x0001d1f6u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f4u));
    rc_wr32(c, m, (c->a[4] - 0x34f0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D1FC:
    /* 0001d1fc   4  move.l A2,(ffffcb0c,A4) */
    c->pc = RC_ADDR(0x0001d1fcu);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x34f4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D200:
    /* 0001d200   4  tst.w (ffffcb2c,A4) */
    c->pc = RC_ADDR(0x0001d200u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34d4u));
    rc_set_nzvc(c, t0, RC_W);

L_1D204:
    /* 0001d204   2  beq 0001d20c */
    c->pc = RC_ADDR(0x0001d204u);
    if (rc_cond(c, 7)) goto L_1D20C;

L_1D206:
    /* 0001d206   4  jsr (ffff83b6,A4) */
    c->pc = RC_ADDR(0x0001d206u);
    /* vector 158 */
    rc_push32(c, m, RC_ADDR(0x0001d20au));
    rc_depth++;
    c->pc = RC_ADDR(0x0002195cu);
    return;

L_1D20A:
    /* 0001d20a   2  bra 0001d200 */
    c->pc = RC_ADDR(0x0001d20au);
    rc_tick();
    goto L_1D200;

L_1D20C:
    /* 0001d20c   4  move.l (ffffcb0c,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d20cu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D210:
    /* 0001d210   4  jsr (ffff8374,A4) */
    c->pc = RC_ADDR(0x0001d210u);
    /* vector 147 */
    rc_push32(c, m, RC_ADDR(0x0001d214u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021898u);
    return;

L_1D214:
    /* 0001d214   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001d214u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D216:
    /* 0001d216   4  movea.l (ffffcb10,A4),A0 */
    c->pc = RC_ADDR(0x0001d216u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f0u));
    c->a[0] = t0;

L_1D21A:
    /* 0001d21a   2  move.l (A0),-(A7) */
    c->pc = RC_ADDR(0x0001d21au);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D21C:
    /* 0001d21c   4  jsr (ffff83b0,A4) */
    c->pc = RC_ADDR(0x0001d21cu);
    /* vector 157 */
    rc_push32(c, m, RC_ADDR(0x0001d220u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021950u);
    return;

L_1D220:
    /* 0001d220   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001d220u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D222:
    /* 0001d222   4  tst.w (ffff83d2,A4) */
    c->pc = RC_ADDR(0x0001d222u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c2eu));
    rc_set_nzvc(c, t0, RC_W);

L_1D226:
    /* 0001d226   2  beq 0001d22c */
    c->pc = RC_ADDR(0x0001d226u);
    if (rc_cond(c, 7)) goto L_1D22C;

L_1D228:
    /* 0001d228   4  jsr (ffff8074,A4) */
    c->pc = RC_ADDR(0x0001d228u);
    /* vector 19 */
    rc_push32(c, m, RC_ADDR(0x0001d22cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000056a0u);
    return;

L_1D22C:
    /* 0001d22c   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x0001d22cu);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_1D22E:
    /* 0001d22e   2  unlk A5 */
    c->pc = RC_ADDR(0x0001d22eu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D230:
    /* 0001d230   2  rts */
    c->pc = RC_ADDR(0x0001d230u);
    rc_ret(c, m);
    return;

}
