/* fn_0002160c - 68 byte(s), 22 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0002160c(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0002160cu): goto L_2160C;
    case RC_ADDR(0x00021610u): goto L_21610;
    case RC_ADDR(0x00021612u): goto L_21612;
    case RC_ADDR(0x00021616u): goto L_21616;
    case RC_ADDR(0x00021618u): goto L_21618;
    case RC_ADDR(0x0002161au): goto L_2161A;
    case RC_ADDR(0x0002161cu): goto L_2161C;
    case RC_ADDR(0x0002161eu): goto L_2161E;
    case RC_ADDR(0x00021620u): goto L_21620;
    case RC_ADDR(0x00021626u): goto L_21626;
    case RC_ADDR(0x0002162au): goto L_2162A;
    case RC_ADDR(0x0002162eu): goto L_2162E;
    case RC_ADDR(0x00021630u): goto L_21630;
    case RC_ADDR(0x00021632u): goto L_21632;
    case RC_ADDR(0x00021634u): goto L_21634;
    case RC_ADDR(0x00021636u): goto L_21636;
    case RC_ADDR(0x00021638u): goto L_21638;
    case RC_ADDR(0x0002163au): goto L_2163A;
    case RC_ADDR(0x00021640u): goto L_21640;
    case RC_ADDR(0x00021646u): goto L_21646;
    case RC_ADDR(0x0002164cu): goto L_2164C;
    case RC_ADDR(0x0002164eu): goto L_2164E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2160C:
    /* 0002160c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0002160cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_21610:
    /* 00021610   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00021610u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21612:
    /* 00021612   4  tst.l (8,A5) */
    c->pc = RC_ADDR(0x00021612u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_21616:
    /* 00021616   2  bne 00021620 */
    c->pc = RC_ADDR(0x00021616u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_21620;

L_21618:
    /* 00021618   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021618u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2161A:
    /* 0002161a   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x0002161au);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_2161C:
    /* 0002161c   2  unlk A5 */
    c->pc = RC_ADDR(0x0002161cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2161E:
    /* 0002161e   2  rts */
    c->pc = RC_ADDR(0x0002161eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_21620:
    /* 00021620   6  pea (00010001).l */
    c->pc = RC_ADDR(0x00021620u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_21626:
    /* 00021626   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00021626u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2162A:
    /* 0002162a   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0002162au);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0002162eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d8eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002168cu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021690u);
    return;

L_2162E:
    /* 0002162e   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x0002162eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_21630:
    /* 00021630   2  tst.l D0 */
    c->pc = RC_ADDR(0x00021630u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_21632:
    /* 00021632   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00021632u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_21634:
    /* 00021634   2  bne 0002163a */
    c->pc = RC_ADDR(0x00021634u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2163A;

L_21636:
    /* 00021636   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021636u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21638:
    /* 00021638   2  bra 0002161a */
    c->pc = RC_ADDR(0x00021638u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2161A;

L_2163A:
    /* 0002163a   6  move.b #5,(8,A2) */
    c->pc = RC_ADDR(0x0002163au);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr8(c, m, (c->a[2] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_21640:
    /* 00021640   6  move.w (e,A5),(12,A2) */
    c->pc = RC_ADDR(0x00021640u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    rc_wr16(c, m, (c->a[2] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21646:
    /* 00021646   6  move.l (8,A5),(e,A2) */
    c->pc = RC_ADDR(0x00021646u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[2] + 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2164C:
    /* 0002164c   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x0002164cu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2164E:
    /* 0002164e   2  bra 0002161a */
    c->pc = RC_ADDR(0x0002164eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2161A;

}
