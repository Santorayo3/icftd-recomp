/* fn_000236ae - 68 byte(s), 22 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000236ae(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000236aeu): goto L_236AE;
    case RC_ADDR(0x000236b2u): goto L_236B2;
    case RC_ADDR(0x000236b4u): goto L_236B4;
    case RC_ADDR(0x000236b8u): goto L_236B8;
    case RC_ADDR(0x000236bau): goto L_236BA;
    case RC_ADDR(0x000236bcu): goto L_236BC;
    case RC_ADDR(0x000236beu): goto L_236BE;
    case RC_ADDR(0x000236c0u): goto L_236C0;
    case RC_ADDR(0x000236c2u): goto L_236C2;
    case RC_ADDR(0x000236c8u): goto L_236C8;
    case RC_ADDR(0x000236ccu): goto L_236CC;
    case RC_ADDR(0x000236d0u): goto L_236D0;
    case RC_ADDR(0x000236d2u): goto L_236D2;
    case RC_ADDR(0x000236d4u): goto L_236D4;
    case RC_ADDR(0x000236d6u): goto L_236D6;
    case RC_ADDR(0x000236d8u): goto L_236D8;
    case RC_ADDR(0x000236dau): goto L_236DA;
    case RC_ADDR(0x000236dcu): goto L_236DC;
    case RC_ADDR(0x000236e2u): goto L_236E2;
    case RC_ADDR(0x000236e8u): goto L_236E8;
    case RC_ADDR(0x000236eeu): goto L_236EE;
    case RC_ADDR(0x000236f0u): goto L_236F0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_236AE:
    /* 000236ae   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000236aeu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_236B2:
    /* 000236b2   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x000236b2u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_236B4:
    /* 000236b4   4  tst.l (8,A5) */
    c->pc = RC_ADDR(0x000236b4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_236B8:
    /* 000236b8   2  bne 000236c2 */
    c->pc = RC_ADDR(0x000236b8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_236C2;

L_236BA:
    /* 000236ba   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000236bau);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_236BC:
    /* 000236bc   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x000236bcu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_236BE:
    /* 000236be   2  unlk A5 */
    c->pc = RC_ADDR(0x000236beu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_236C0:
    /* 000236c0   2  rts */
    c->pc = RC_ADDR(0x000236c0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_236C2:
    /* 000236c2   6  pea (00010001).l */
    c->pc = RC_ADDR(0x000236c2u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_236C8:
    /* 000236c8   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x000236c8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_236CC:
    /* 000236cc   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x000236ccu);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x000236d0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_236D0:
    /* 000236d0   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x000236d0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_236D2:
    /* 000236d2   2  tst.l D0 */
    c->pc = RC_ADDR(0x000236d2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_236D4:
    /* 000236d4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000236d4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_236D6:
    /* 000236d6   2  bne 000236dc */
    c->pc = RC_ADDR(0x000236d6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_236DC;

L_236D8:
    /* 000236d8   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000236d8u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_236DA:
    /* 000236da   2  bra 000236bc */
    c->pc = RC_ADDR(0x000236dau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_236BC;

L_236DC:
    /* 000236dc   6  move.b #5,(8,A2) */
    c->pc = RC_ADDR(0x000236dcu);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr8(c, m, (c->a[2] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_236E2:
    /* 000236e2   6  move.w (e,A5),(12,A2) */
    c->pc = RC_ADDR(0x000236e2u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    rc_wr16(c, m, (c->a[2] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_236E8:
    /* 000236e8   6  move.l (8,A5),(e,A2) */
    c->pc = RC_ADDR(0x000236e8u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[2] + 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_236EE:
    /* 000236ee   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x000236eeu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_236F0:
    /* 000236f0   2  bra 000236bc */
    c->pc = RC_ADDR(0x000236f0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_236BC;

}
