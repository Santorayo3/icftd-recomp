/* fn_0000d800 - 60 byte(s), 19 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000d800(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x0000d800u): goto L_D800;
    case RC_ADDR(0x0000d804u): goto L_D804;
    case RC_ADDR(0x0000d808u): goto L_D808;
    case RC_ADDR(0x0000d80cu): goto L_D80C;
    case RC_ADDR(0x0000d80eu): goto L_D80E;
    case RC_ADDR(0x0000d812u): goto L_D812;
    case RC_ADDR(0x0000d816u): goto L_D816;
    case RC_ADDR(0x0000d81au): goto L_D81A;
    case RC_ADDR(0x0000d81cu): goto L_D81C;
    case RC_ADDR(0x0000d820u): goto L_D820;
    case RC_ADDR(0x0000d824u): goto L_D824;
    case RC_ADDR(0x0000d826u): goto L_D826;
    case RC_ADDR(0x0000d828u): goto L_D828;
    case RC_ADDR(0x0000d82cu): goto L_D82C;
    case RC_ADDR(0x0000d830u): goto L_D830;
    case RC_ADDR(0x0000d832u): goto L_D832;
    case RC_ADDR(0x0000d834u): goto L_D834;
    case RC_ADDR(0x0000d838u): goto L_D838;
    case RC_ADDR(0x0000d83au): goto L_D83A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_D800:
    /* 0000d800   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000d800u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_D804:
    /* 0000d804   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x0000d804u);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D808:
    /* 0000d808   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x0000d808u);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x0000d80cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_D80C:
    /* 0000d80c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000d80cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_D80E:
    /* 0000d80e   4  move.w D0,(fffffb1e,A4) */
    c->pc = RC_ADDR(0x0000d80eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x4e2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D812:
    /* 0000d812   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x0000d812u);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D816:
    /* 0000d816   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x0000d816u);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x0000d81au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_D81A:
    /* 0000d81a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000d81au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_D81C:
    /* 0000d81c   4  move.w D0,(fffffb20,A4) */
    c->pc = RC_ADDR(0x0000d81cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x4e0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D820:
    /* 0000d820   4  cmp.w (fffffb1e,A4),D0 */
    c->pc = RC_ADDR(0x0000d820u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4e2u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_D824:
    /* 0000d824   2  bne 0000d828 */
    c->pc = RC_ADDR(0x0000d824u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_D828;

L_D826:
    /* 0000d826   2  bra 0000d812 */
    c->pc = RC_ADDR(0x0000d826u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_D812;

L_D828:
    /* 0000d828   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000d828u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D82C:
    /* 0000d82c   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x0000d82cu);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x0000d830u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_D830:
    /* 0000d830   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000d830u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_D832:
    /* 0000d832   2  addq.w #4,D0 */
    c->pc = RC_ADDR(0x0000d832u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000004u;
    rc_flags_add(c, RC_W, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_D834:
    /* 0000d834   4  move.w D0,(fffffb22,A4) */
    c->pc = RC_ADDR(0x0000d834u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x4deu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D838:
    /* 0000d838   2  unlk A5 */
    c->pc = RC_ADDR(0x0000d838u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_D83A:
    /* 0000d83a   2  rts */
    c->pc = RC_ADDR(0x0000d83au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
