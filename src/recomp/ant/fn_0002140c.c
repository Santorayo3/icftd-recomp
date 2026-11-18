/* fn_0002140c - 32 byte(s), 9 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002140c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0002140cu): goto L_2140C;
    case RC_ADDR(0x0002140eu): goto L_2140E;
    case RC_ADDR(0x00021412u): goto L_21412;
    case RC_ADDR(0x00021414u): goto L_21414;
    case RC_ADDR(0x00021418u): goto L_21418;
    case RC_ADDR(0x0002141cu): goto L_2141C;
    case RC_ADDR(0x00021420u): goto L_21420;
    case RC_ADDR(0x00021424u): goto L_21424;
    case RC_ADDR(0x00021428u): goto L_21428;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2140C:
    /* 0002140c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0002140cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2140E:
    /* 0002140e   4  move.b (f,A5),D0 */
    c->pc = RC_ADDR(0x0002140eu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_21412:
    /* 00021412   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00021412u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_21414:
    /* 00021414   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x00021414u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21418:
    /* 00021418   4  movea.l (838,A4),A0 */
    c->pc = RC_ADDR(0x00021418u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x838u));
    c->a[0] = t0;

L_2141C:
    /* 0002141c   4  pea (2c,A0) */
    c->pc = RC_ADDR(0x0002141cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[0] + 0x2cu));

L_21420:
    /* 00021420   4  jsr (0001fe32) */
    c->pc = RC_ADDR(0x00021420u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021424u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fe32u);
    return;

L_21424:
    /* 00021424   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00021424u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_21428:
    /* 00021428   4  bra 00021950 */
    c->pc = RC_ADDR(0x00021428u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021950u);
    return;

}
