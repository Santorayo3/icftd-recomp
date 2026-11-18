/* fn_00021610 - 80 byte(s), 24 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00021610(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00021610u): goto L_21610;
    case RC_ADDR(0x00021614u): goto L_21614;
    case RC_ADDR(0x00021618u): goto L_21618;
    case RC_ADDR(0x0002161cu): goto L_2161C;
    case RC_ADDR(0x0002161eu): goto L_2161E;
    case RC_ADDR(0x00021620u): goto L_21620;
    case RC_ADDR(0x00021624u): goto L_21624;
    case RC_ADDR(0x00021626u): goto L_21626;
    case RC_ADDR(0x0002162au): goto L_2162A;
    case RC_ADDR(0x0002162cu): goto L_2162C;
    case RC_ADDR(0x0002162eu): goto L_2162E;
    case RC_ADDR(0x00021632u): goto L_21632;
    case RC_ADDR(0x00021636u): goto L_21636;
    case RC_ADDR(0x00021638u): goto L_21638;
    case RC_ADDR(0x0002163eu): goto L_2163E;
    case RC_ADDR(0x00021644u): goto L_21644;
    case RC_ADDR(0x00021648u): goto L_21648;
    case RC_ADDR(0x0002164au): goto L_2164A;
    case RC_ADDR(0x0002164cu): goto L_2164C;
    case RC_ADDR(0x00021650u): goto L_21650;
    case RC_ADDR(0x00021654u): goto L_21654;
    case RC_ADDR(0x00021656u): goto L_21656;
    case RC_ADDR(0x00021658u): goto L_21658;
    case RC_ADDR(0x0002165cu): goto L_2165C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21610:
    /* 00021610   4  movea.l (a,A5),A0 */
    c->pc = RC_ADDR(0x00021610u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[0] = t0;

L_21614:
    /* 00021614   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x00021614u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_21618:
    /* 00021618   4  movea.l (38,A1),A3 */
    c->pc = RC_ADDR(0x00021618u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0x38u));
    c->a[3] = t0;

L_2161C:
    /* 0002161c   2  move.l A3,D0 */
    c->pc = RC_ADDR(0x0002161cu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2161E:
    /* 0002161e   2  beq 0002162e */
    c->pc = RC_ADDR(0x0002161eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2162E;

L_21620:
    /* 00021620   4  pea (89c,A4) */
    c->pc = RC_ADDR(0x00021620u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x89cu));

L_21624:
    /* 00021624   2  move.l A3,-(A7) */
    c->pc = RC_ADDR(0x00021624u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21626:
    /* 00021626   4  jsr (0001f918) */
    c->pc = RC_ADDR(0x00021626u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0002162au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f918u);
    return;

L_2162A:
    /* 0002162a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0002162au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2162C:
    /* 0002162c   2  bra 00021638 */
    c->pc = RC_ADDR(0x0002162cu);
    rc_step(c, m, 10);
    goto L_21638;

L_2162E:
    /* 0002162e   4  pea (89c,A4) */
    c->pc = RC_ADDR(0x0002162eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x89cu));

L_21632:
    /* 00021632   4  jsr (0001f96c) */
    c->pc = RC_ADDR(0x00021632u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021636u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f96cu);
    return;

L_21636:
    /* 00021636   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00021636u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_21638:
    /* 00021638   6  move.w #1,(91c,A4) */
    c->pc = RC_ADDR(0x00021638u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x91cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2163E:
    /* 0002163e   6  move.w #1,(91e,A4) */
    c->pc = RC_ADDR(0x0002163eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x91eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21644:
    /* 00021644   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x00021644u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21648:
    /* 00021648   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00021648u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_2164A:
    /* 0002164a   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x0002164au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_2164C:
    /* 0002164c   4  move.w D0,(920,A4) */
    c->pc = RC_ADDR(0x0002164cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x920u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21650:
    /* 00021650   4  move.l (14,A5),D0 */
    c->pc = RC_ADDR(0x00021650u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21654:
    /* 00021654   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00021654u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_21656:
    /* 00021656   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x00021656u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_21658:
    /* 00021658   4  move.w D0,(922,A4) */
    c->pc = RC_ADDR(0x00021658u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x922u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2165C:
    /* 0002165c   4  bra 00021950 */
    c->pc = RC_ADDR(0x0002165cu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021950u);
    return;

}
