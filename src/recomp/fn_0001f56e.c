/* fn_0001f56e - 80 byte(s), 24 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f56e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f56eu): goto L_1F56E;
    case RC_ADDR(0x0001f572u): goto L_1F572;
    case RC_ADDR(0x0001f576u): goto L_1F576;
    case RC_ADDR(0x0001f57au): goto L_1F57A;
    case RC_ADDR(0x0001f57cu): goto L_1F57C;
    case RC_ADDR(0x0001f57eu): goto L_1F57E;
    case RC_ADDR(0x0001f582u): goto L_1F582;
    case RC_ADDR(0x0001f584u): goto L_1F584;
    case RC_ADDR(0x0001f588u): goto L_1F588;
    case RC_ADDR(0x0001f58au): goto L_1F58A;
    case RC_ADDR(0x0001f58cu): goto L_1F58C;
    case RC_ADDR(0x0001f590u): goto L_1F590;
    case RC_ADDR(0x0001f594u): goto L_1F594;
    case RC_ADDR(0x0001f596u): goto L_1F596;
    case RC_ADDR(0x0001f59cu): goto L_1F59C;
    case RC_ADDR(0x0001f5a2u): goto L_1F5A2;
    case RC_ADDR(0x0001f5a6u): goto L_1F5A6;
    case RC_ADDR(0x0001f5a8u): goto L_1F5A8;
    case RC_ADDR(0x0001f5aau): goto L_1F5AA;
    case RC_ADDR(0x0001f5aeu): goto L_1F5AE;
    case RC_ADDR(0x0001f5b2u): goto L_1F5B2;
    case RC_ADDR(0x0001f5b4u): goto L_1F5B4;
    case RC_ADDR(0x0001f5b6u): goto L_1F5B6;
    case RC_ADDR(0x0001f5bau): goto L_1F5BA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F56E:
    /* 0001f56e   4  movea.l (a,A5),A0 */
    c->pc = RC_ADDR(0x0001f56eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[0] = t0;

L_1F572:
    /* 0001f572   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0001f572u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1F576:
    /* 0001f576   4  movea.l (38,A1),A3 */
    c->pc = RC_ADDR(0x0001f576u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0x38u));
    c->a[3] = t0;

L_1F57A:
    /* 0001f57a   2  move.l A3,D0 */
    c->pc = RC_ADDR(0x0001f57au);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F57C:
    /* 0001f57c   2  beq 0001f58c */
    c->pc = RC_ADDR(0x0001f57cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F58C;

L_1F57E:
    /* 0001f57e   4  pea (ffffff0e,A4) */
    c->pc = RC_ADDR(0x0001f57eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0xf2u));

L_1F582:
    /* 0001f582   2  move.l A3,-(A7) */
    c->pc = RC_ADDR(0x0001f582u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F584:
    /* 0001f584   4  jsr (0001d87c) */
    c->pc = RC_ADDR(0x0001f584u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f588u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d87cu);
    return;

L_1F588:
    /* 0001f588   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f588u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F58A:
    /* 0001f58a   2  bra 0001f596 */
    c->pc = RC_ADDR(0x0001f58au);
    rc_step(c, m, 10);
    goto L_1F596;

L_1F58C:
    /* 0001f58c   4  pea (ffffff0e,A4) */
    c->pc = RC_ADDR(0x0001f58cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0xf2u));

L_1F590:
    /* 0001f590   4  jsr (0001d8d0) */
    c->pc = RC_ADDR(0x0001f590u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f594u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d8d0u);
    return;

L_1F594:
    /* 0001f594   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f594u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F596:
    /* 0001f596   6  move.w #1,(ffffff4e,A4) */
    c->pc = RC_ADDR(0x0001f596u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xb2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F59C:
    /* 0001f59c   6  move.w #1,(ffffff50,A4) */
    c->pc = RC_ADDR(0x0001f59cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xb0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F5A2:
    /* 0001f5a2   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x0001f5a2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F5A6:
    /* 0001f5a6   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001f5a6u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F5A8:
    /* 0001f5a8   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x0001f5a8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_1F5AA:
    /* 0001f5aa   4  move.w D0,(ffffff52,A4) */
    c->pc = RC_ADDR(0x0001f5aau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xaeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F5AE:
    /* 0001f5ae   4  move.l (14,A5),D0 */
    c->pc = RC_ADDR(0x0001f5aeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F5B2:
    /* 0001f5b2   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001f5b2u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F5B4:
    /* 0001f5b4   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x0001f5b4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_1F5B6:
    /* 0001f5b6   4  move.w D0,(ffffff54,A4) */
    c->pc = RC_ADDR(0x0001f5b6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xacu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F5BA:
    /* 0001f5ba   4  bra 0001f8ae */
    c->pc = RC_ADDR(0x0001f5bau);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001f8aeu);
    return;

}
