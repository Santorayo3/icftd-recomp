/* fn_00021320 - 40 byte(s), 15 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00021320(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00021320u): goto L_21320;
    case RC_ADDR(0x00021324u): goto L_21324;
    case RC_ADDR(0x00021328u): goto L_21328;
    case RC_ADDR(0x0002132cu): goto L_2132C;
    case RC_ADDR(0x0002132eu): goto L_2132E;
    case RC_ADDR(0x00021330u): goto L_21330;
    case RC_ADDR(0x00021332u): goto L_21332;
    case RC_ADDR(0x00021334u): goto L_21334;
    case RC_ADDR(0x00021336u): goto L_21336;
    case RC_ADDR(0x00021338u): goto L_21338;
    case RC_ADDR(0x0002133au): goto L_2133A;
    case RC_ADDR(0x0002133cu): goto L_2133C;
    case RC_ADDR(0x00021340u): goto L_21340;
    case RC_ADDR(0x00021344u): goto L_21344;
    case RC_ADDR(0x00021346u): goto L_21346;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21320:
    /* 00021320   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00021320u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_21324:
    /* 00021324   4  movem.l { D4 D5 },-(SP) */
    c->pc = RC_ADDR(0x00021324u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    c->a[7] = t3;

L_21328:
    /* 00021328   4  movea.l (ffffd46a,A4),A2 */
    c->pc = RC_ADDR(0x00021328u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2b96u));
    c->a[2] = t0;

L_2132C:
    /* 0002132c   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x0002132cu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2132E:
    /* 0002132e   2  beq 0002133c */
    c->pc = RC_ADDR(0x0002132eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2133C;

L_21330:
    /* 00021330   2  movea.l (A2),A3 */
    c->pc = RC_ADDR(0x00021330u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[2]);
    c->a[3] = t0;

L_21332:
    /* 00021332   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00021332u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21334:
    /* 00021334   2  bsr 000212c8 */
    c->pc = RC_ADDR(0x00021334u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021336u));
    rc_depth++;
    c->pc = RC_ADDR(0x000212c8u);
    return;

L_21336:
    /* 00021336   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00021336u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_21338:
    /* 00021338   2  movea.l A3,A2 */
    c->pc = RC_ADDR(0x00021338u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[2] = t0;

L_2133A:
    /* 0002133a   2  bra 0002132c */
    c->pc = RC_ADDR(0x0002133au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2132C;

L_2133C:
    /* 0002133c   4  clr.l (ffffd46a,A4) */
    c->pc = RC_ADDR(0x0002133cu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x2b96u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_21340:
    /* 00021340   4  movem.l (SP)+,{ A2 A3 } */
    c->pc = RC_ADDR(0x00021340u);
    rc_step(c, m, 12);
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

L_21344:
    /* 00021344   2  unlk A5 */
    c->pc = RC_ADDR(0x00021344u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_21346:
    /* 00021346   2  rts */
    c->pc = RC_ADDR(0x00021346u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
