/* fn_000067ac - 48 byte(s), 14 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000067ac(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000067acu): goto L_67AC;
    case RC_ADDR(0x000067b0u): goto L_67B0;
    case RC_ADDR(0x000067b4u): goto L_67B4;
    case RC_ADDR(0x000067b8u): goto L_67B8;
    case RC_ADDR(0x000067bcu): goto L_67BC;
    case RC_ADDR(0x000067beu): goto L_67BE;
    case RC_ADDR(0x000067c0u): goto L_67C0;
    case RC_ADDR(0x000067c4u): goto L_67C4;
    case RC_ADDR(0x000067c8u): goto L_67C8;
    case RC_ADDR(0x000067ccu): goto L_67CC;
    case RC_ADDR(0x000067d2u): goto L_67D2;
    case RC_ADDR(0x000067d4u): goto L_67D4;
    case RC_ADDR(0x000067d8u): goto L_67D8;
    case RC_ADDR(0x000067dau): goto L_67DA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_67AC:
    /* 000067ac   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000067acu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_67B0:
    /* 000067b0   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000067b0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_67B4:
    /* 000067b4   4  suba.l (fffff812,A4),A0 */
    c->pc = RC_ADDR(0x000067b4u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7eeu));
    c->a[0] -= t0;

L_67B8:
    /* 000067b8   4  move.w (fffff81a,A4),D0 */
    c->pc = RC_ADDR(0x000067b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7e6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_67BC:
    /* 000067bc   2  ext.l D0 */
    c->pc = RC_ADDR(0x000067bcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_67BE:
    /* 000067be   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000067beu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_67C0:
    /* 000067c0   4  lea (fffff81c,A4),A1 */
    c->pc = RC_ADDR(0x000067c0u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x7e4u);

L_67C4:
    /* 000067c4   4  move.w A0,(0,A1,D0.w) */
    c->pc = RC_ADDR(0x000067c4u);
    rc_step(c, m, 14);
    t0 = rc_a_get(c, 0, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_67C8:
    /* 000067c8   4  addq.w #1,(fffff81a,A4) */
    c->pc = RC_ADDR(0x000067c8u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x7e6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_67CC:
    /* 000067cc   6  cmpi.w #13,(fffff81a,A4) */
    c->pc = RC_ADDR(0x000067ccu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7e6u));
    rc_cmp(c, RC_W, t0, 0x00000013u);

L_67D2:
    /* 000067d2   2  ble 000067d8 */
    c->pc = RC_ADDR(0x000067d2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_67D8;

L_67D4:
    /* 000067d4   4  clr.w (fffff81a,A4) */
    c->pc = RC_ADDR(0x000067d4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7e6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_67D8:
    /* 000067d8   2  unlk A5 */
    c->pc = RC_ADDR(0x000067d8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_67DA:
    /* 000067da   2  rts */
    c->pc = RC_ADDR(0x000067dau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
