/* fn_0002298a - 44 byte(s), 18 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002298a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0002298au): goto L_2298A;
    case RC_ADDR(0x0002298eu): goto L_2298E;
    case RC_ADDR(0x00022994u): goto L_22994;
    case RC_ADDR(0x00022996u): goto L_22996;
    case RC_ADDR(0x00022998u): goto L_22998;
    case RC_ADDR(0x0002299cu): goto L_2299C;
    case RC_ADDR(0x000229a0u): goto L_229A0;
    case RC_ADDR(0x000229a2u): goto L_229A2;
    case RC_ADDR(0x000229a4u): goto L_229A4;
    case RC_ADDR(0x000229a6u): goto L_229A6;
    case RC_ADDR(0x000229a8u): goto L_229A8;
    case RC_ADDR(0x000229acu): goto L_229AC;
    case RC_ADDR(0x000229aeu): goto L_229AE;
    case RC_ADDR(0x000229b0u): goto L_229B0;
    case RC_ADDR(0x000229b2u): goto L_229B2;
    case RC_ADDR(0x000229b4u): goto L_229B4;
    case RC_ADDR(0x000229b6u): goto L_229B6;
    case RC_ADDR(0x000229b8u): goto L_229B8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2298A:
    /* 0002298a   4  move.w #7fff,D0 */
    c->pc = RC_ADDR(0x0002298au);
    rc_step(c, m, 8);
    t0 = 0x00007fffu;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2298E:
    /* 0002298e   2  bra 00022994 */
    c->pc = RC_ADDR(0x0002298eu);
    rc_step(c, m, 10);
    goto L_22994;

L_22994:
    /* 00022994   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00022994u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_22996:
    /* 00022996   2  bmi 000229ac */
    c->pc = RC_ADDR(0x00022996u);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_229AC;

L_22998:
    /* 00022998   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x00022998u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_2299C:
    /* 0002299c   4  movea.l (8,A7),A1 */
    c->pc = RC_ADDR(0x0002299cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x8u));
    c->a[1] = t0;

L_229A0:
    /* 000229a0   2  cmpm.b (A1)+,(A0)+ */
    c->pc = RC_ADDR(0x000229a0u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    c->a[0] += 1u;
    t1 = rc_rd8(c, m, c->a[1]);
    c->a[1] += 1u;
    rc_cmp(c, RC_B, t0, t1);

L_229A2:
    /* 000229a2   2  bne 000229b0 */
    c->pc = RC_ADDR(0x000229a2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_229B0;

L_229A4:
    /* 000229a4   2  subq.w #1,A0 */
    c->pc = RC_ADDR(0x000229a4u);
    rc_step(c, m, 8);
    c->a[0] -= rc_ext(0x00000001u, RC_W);

L_229A6:
    /* 000229a6   2  tst.b (A0)+ */
    c->pc = RC_ADDR(0x000229a6u);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_set_nzvc(c, t0, RC_B);

L_229A8:
    /* 000229a8   4  dbeq D0,000229a0 */
    c->pc = RC_ADDR(0x000229a8u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 7)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_229A0; }
    }

L_229AC:
    /* 000229ac   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000229acu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_229AE:
    /* 000229ae   2  rts */
    c->pc = RC_ADDR(0x000229aeu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_229B0:
    /* 000229b0   2  bls 000229b6 */
    c->pc = RC_ADDR(0x000229b0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_229B6;

L_229B2:
    /* 000229b2   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x000229b2u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_229B4:
    /* 000229b4   2  rts */
    c->pc = RC_ADDR(0x000229b4u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_229B6:
    /* 000229b6   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x000229b6u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_229B8:
    /* 000229b8   2  rts */
    c->pc = RC_ADDR(0x000229b8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
