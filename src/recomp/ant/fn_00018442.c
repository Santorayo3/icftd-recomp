/* fn_00018442 - 68 byte(s), 19 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00018442(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00018442u): goto L_18442;
    case RC_ADDR(0x00018446u): goto L_18446;
    case RC_ADDR(0x0001844au): goto L_1844A;
    case RC_ADDR(0x0001844cu): goto L_1844C;
    case RC_ADDR(0x00018450u): goto L_18450;
    case RC_ADDR(0x00018454u): goto L_18454;
    case RC_ADDR(0x00018458u): goto L_18458;
    case RC_ADDR(0x0001845cu): goto L_1845C;
    case RC_ADDR(0x0001845eu): goto L_1845E;
    case RC_ADDR(0x00018464u): goto L_18464;
    case RC_ADDR(0x00018468u): goto L_18468;
    case RC_ADDR(0x0001846eu): goto L_1846E;
    case RC_ADDR(0x00018472u): goto L_18472;
    case RC_ADDR(0x00018476u): goto L_18476;
    case RC_ADDR(0x0001847au): goto L_1847A;
    case RC_ADDR(0x0001847cu): goto L_1847C;
    case RC_ADDR(0x0001847eu): goto L_1847E;
    case RC_ADDR(0x00018482u): goto L_18482;
    case RC_ADDR(0x00018484u): goto L_18484;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_18442:
    /* 00018442   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00018442u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_18446:
    /* 00018446   4  tst.l (ffffb5d4,A4) */
    c->pc = RC_ADDR(0x00018446u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4a2cu));
    rc_set_nzvc(c, t0, RC_L);

L_1844A:
    /* 0001844a   2  beq 0001847e */
    c->pc = RC_ADDR(0x0001844au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1847E;

L_1844C:
    /* 0001844c   4  movea.l (ffffb5d4,A4),A0 */
    c->pc = RC_ADDR(0x0001844cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4a2cu));
    c->a[0] = t0;

L_18450:
    /* 00018450   4  clr.l (20,A0) */
    c->pc = RC_ADDR(0x00018450u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[0] + 0x20u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_18454:
    /* 00018454   4  move.l (ffffb5d4,A4),-(A7) */
    c->pc = RC_ADDR(0x00018454u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4a2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18458:
    /* 00018458   4  jsr (ffff82a2,A4) */
    c->pc = RC_ADDR(0x00018458u);
    rc_step(c, m, 18);
    /* vector 112 */
    rc_push32(c, m, RC_ADDR(0x0001845cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d98u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022138u);
    return;

L_1845C:
    /* 0001845c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001845cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1845E:
    /* 0001845e   6  move.l (ffffb5d4,A4),(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001845eu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4a2cu));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18464:
    /* 00018464   4  movea.l (ffffb5d4,A4),A0 */
    c->pc = RC_ADDR(0x00018464u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4a2cu));
    c->a[0] = t0;

L_18468:
    /* 00018468   6  move.l (28,A0),(ffffb5d4,A4) */
    c->pc = RC_ADDR(0x00018468u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x28u));
    rc_wr32(c, m, (c->a[4] - 0x4a2cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1846E:
    /* 0001846e   4  pea (0000002c).l */
    c->pc = RC_ADDR(0x0001846eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000002cu);

L_18472:
    /* 00018472   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00018472u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18476:
    /* 00018476   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00018476u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001847au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1847A:
    /* 0001847a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001847au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1847C:
    /* 0001847c   2  bra 00018446 */
    c->pc = RC_ADDR(0x0001847cu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_18446;

L_1847E:
    /* 0001847e   4  clr.l (ffffb5d4,A4) */
    c->pc = RC_ADDR(0x0001847eu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x4a2cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_18482:
    /* 00018482   2  unlk A5 */
    c->pc = RC_ADDR(0x00018482u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_18484:
    /* 00018484   2  rts */
    c->pc = RC_ADDR(0x00018484u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
