/* fn_00000440 - 46 byte(s), 13 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00000440(cpu_t *c, rt_machine *m)
{
    u32 t0, t1;

    switch (c->pc)
    {
    case RC_ADDR(0x00000440u): goto L_440;
    case RC_ADDR(0x00000446u): goto L_446;
    case RC_ADDR(0x0000044au): goto L_44A;
    case RC_ADDR(0x0000044eu): goto L_44E;
    case RC_ADDR(0x00000450u): goto L_450;
    case RC_ADDR(0x00000454u): goto L_454;
    case RC_ADDR(0x00000458u): goto L_458;
    case RC_ADDR(0x0000045au): goto L_45A;
    case RC_ADDR(0x0000045eu): goto L_45E;
    case RC_ADDR(0x00000462u): goto L_462;
    case RC_ADDR(0x00000464u): goto L_464;
    case RC_ADDR(0x00000468u): goto L_468;
    case RC_ADDR(0x0000046cu): goto L_46C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_440:
    /* 00000440   6  move.w (7a0,A4),(7a2,A4) */
    c->pc = RC_ADDR(0x00000440u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7a0u));
    rc_wr16(c, m, (c->a[4] + 0x7a2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_446:
    /* 00000446   4  move.w (7a2,A4),D0 */
    c->pc = RC_ADDR(0x00000446u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7a2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_44A:
    /* 0000044a   4  cmp.w (79e,A4),D0 */
    c->pc = RC_ADDR(0x0000044au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x79eu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_44E:
    /* 0000044e   2  beq 0000045a */
    c->pc = RC_ADDR(0x0000044eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_45A;

L_450:
    /* 00000450   4  move.w (7a2,A4),D0 */
    c->pc = RC_ADDR(0x00000450u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7a2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_454:
    /* 00000454   4  cmp.w (7a0,A4),D0 */
    c->pc = RC_ADDR(0x00000454u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7a0u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_458:
    /* 00000458   2  bne 0000046e */
    c->pc = RC_ADDR(0x00000458u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6))
    {
        c->pc = RC_ADDR(0x0000046eu);
        return;
    }

L_45A:
    /* 0000045a   4  move.w #c,-(A7) */
    c->pc = RC_ADDR(0x0000045au);
    rc_step(c, m, 12);
    t0 = 0x0000000cu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_45E:
    /* 0000045e   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x0000045eu);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x00000462u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_462:
    /* 00000462   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00000462u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_464:
    /* 00000464   4  muls.w #5,D0 */
    c->pc = RC_ADDR(0x00000464u);
    rc_step(c, m, 42);
    t0 = 0x00000005u;
    rc_muls(c, 0, t0);

L_468:
    /* 00000468   4  move.w D0,(7a2,A4) */
    c->pc = RC_ADDR(0x00000468u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x7a2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_46C:
    /* 0000046c   2  bra 00000446 */
    c->pc = RC_ADDR(0x0000046cu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_446;

}
