/* fn_000168ac - 44 byte(s), 14 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000168ac(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000168acu): goto L_168AC;
    case RC_ADDR(0x000168b0u): goto L_168B0;
    case RC_ADDR(0x000168b4u): goto L_168B4;
    case RC_ADDR(0x000168b6u): goto L_168B6;
    case RC_ADDR(0x000168bau): goto L_168BA;
    case RC_ADDR(0x000168bcu): goto L_168BC;
    case RC_ADDR(0x000168beu): goto L_168BE;
    case RC_ADDR(0x000168c2u): goto L_168C2;
    case RC_ADDR(0x000168c6u): goto L_168C6;
    case RC_ADDR(0x000168cau): goto L_168CA;
    case RC_ADDR(0x000168ceu): goto L_168CE;
    case RC_ADDR(0x000168d2u): goto L_168D2;
    case RC_ADDR(0x000168d4u): goto L_168D4;
    case RC_ADDR(0x000168d6u): goto L_168D6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_168AC:
    /* 000168ac   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x000168acu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_168B0:
    /* 000168b0   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000168b0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_168B4:
    /* 000168b4   2  bra 000168ca */
    c->pc = RC_ADDR(0x000168b4u);
    rc_step(c, m, 10);
    goto L_168CA;

L_168B6:
    /* 000168b6   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000168b6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_168BA:
    /* 000168ba   2  ext.l D0 */
    c->pc = RC_ADDR(0x000168bau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_168BC:
    /* 000168bc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000168bcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_168BE:
    /* 000168be   4  lea (1c84,A4),A0 */
    c->pc = RC_ADDR(0x000168beu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c84u);

L_168C2:
    /* 000168c2   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000168c2u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_168C6:
    /* 000168c6   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000168c6u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_168CA:
    /* 000168ca   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000168cau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_168CE:
    /* 000168ce   4  cmp.w (1ca0,A4),D0 */
    c->pc = RC_ADDR(0x000168ceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ca0u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_168D2:
    /* 000168d2   2  blt 000168b6 */
    c->pc = RC_ADDR(0x000168d2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_168B6; }

L_168D4:
    /* 000168d4   2  unlk A5 */
    c->pc = RC_ADDR(0x000168d4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_168D6:
    /* 000168d6   2  rts */
    c->pc = RC_ADDR(0x000168d6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
