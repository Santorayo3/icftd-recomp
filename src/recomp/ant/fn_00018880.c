/* fn_00018880 - 104 byte(s), 31 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00018880(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00018880u): goto L_18880;
    case RC_ADDR(0x00018884u): goto L_18884;
    case RC_ADDR(0x00018888u): goto L_18888;
    case RC_ADDR(0x0001888cu): goto L_1888C;
    case RC_ADDR(0x0001888eu): goto L_1888E;
    case RC_ADDR(0x00018890u): goto L_18890;
    case RC_ADDR(0x00018894u): goto L_18894;
    case RC_ADDR(0x0001889cu): goto L_1889C;
    case RC_ADDR(0x0001889eu): goto L_1889E;
    case RC_ADDR(0x000188a2u): goto L_188A2;
    case RC_ADDR(0x000188a6u): goto L_188A6;
    case RC_ADDR(0x000188a8u): goto L_188A8;
    case RC_ADDR(0x000188aau): goto L_188AA;
    case RC_ADDR(0x000188aeu): goto L_188AE;
    case RC_ADDR(0x000188b2u): goto L_188B2;
    case RC_ADDR(0x000188b4u): goto L_188B4;
    case RC_ADDR(0x000188b8u): goto L_188B8;
    case RC_ADDR(0x000188bau): goto L_188BA;
    case RC_ADDR(0x000188bcu): goto L_188BC;
    case RC_ADDR(0x000188c0u): goto L_188C0;
    case RC_ADDR(0x000188c2u): goto L_188C2;
    case RC_ADDR(0x000188c4u): goto L_188C4;
    case RC_ADDR(0x000188c8u): goto L_188C8;
    case RC_ADDR(0x000188ccu): goto L_188CC;
    case RC_ADDR(0x000188d0u): goto L_188D0;
    case RC_ADDR(0x000188d4u): goto L_188D4;
    case RC_ADDR(0x000188d8u): goto L_188D8;
    case RC_ADDR(0x000188dcu): goto L_188DC;
    case RC_ADDR(0x000188e0u): goto L_188E0;
    case RC_ADDR(0x000188e4u): goto L_188E4;
    case RC_ADDR(0x000188e6u): goto L_188E6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_18880:
    /* 00018880   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00018880u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_18884:
    /* 00018884   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00018884u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18888:
    /* 00018888   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x00018888u);
    rc_step(c, m, 18);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x0001888cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228c2u);
    return;

L_1888C:
    /* 0001888c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001888cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1888E:
    /* 0001888e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001888eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_18890:
    /* 00018890   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00018890u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18894:
    /* 00018894   8  cmpi.l #2,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00018894u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000002u);

L_1889C:
    /* 0001889c   2  bge 000188a2 */
    c->pc = RC_ADDR(0x0001889cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_188A2;

L_1889E:
    /* 0001889e   4  addq.w #3,(c,A5) */
    c->pc = RC_ADDR(0x0001889eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000003u;
    rc_flags_add(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_188A2:
    /* 000188a2   4  move.w (10,A5),D0 */
    c->pc = RC_ADDR(0x000188a2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_188A6:
    /* 000188a6   2  ext.l D0 */
    c->pc = RC_ADDR(0x000188a6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_188A8:
    /* 000188a8   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000188a8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_188AA:
    /* 000188aa   4  pea (1cda,A4) */
    c->pc = RC_ADDR(0x000188aau);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1cdau));

L_188AE:
    /* 000188ae   4  jsr (ffff83b0,A4) */
    c->pc = RC_ADDR(0x000188aeu);
    rc_step(c, m, 18);
    /* vector 157 */
    rc_push32(c, m, RC_ADDR(0x000188b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002398cu);
    return;

L_188B2:
    /* 000188b2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000188b2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_188B4:
    /* 000188b4   4  move.w (e,A5),D0 */
    c->pc = RC_ADDR(0x000188b4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_188B8:
    /* 000188b8   2  ext.l D0 */
    c->pc = RC_ADDR(0x000188b8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_188BA:
    /* 000188ba   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000188bau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_188BC:
    /* 000188bc   4  move.w (c,A5),D0 */
    c->pc = RC_ADDR(0x000188bcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_188C0:
    /* 000188c0   2  ext.l D0 */
    c->pc = RC_ADDR(0x000188c0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_188C2:
    /* 000188c2   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000188c2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_188C4:
    /* 000188c4   4  pea (1cda,A4) */
    c->pc = RC_ADDR(0x000188c4u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1cdau));

L_188C8:
    /* 000188c8   4  jsr (ffff839e,A4) */
    c->pc = RC_ADDR(0x000188c8u);
    rc_step(c, m, 18);
    /* vector 154 */
    rc_push32(c, m, RC_ADDR(0x000188ccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e94u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023954u);
    return;

L_188CC:
    /* 000188cc   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000188ccu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_188D0:
    /* 000188d0   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000188d0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_188D4:
    /* 000188d4   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000188d4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_188D8:
    /* 000188d8   4  pea (1cda,A4) */
    c->pc = RC_ADDR(0x000188d8u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1cdau));

L_188DC:
    /* 000188dc   4  jsr (ffff83c2,A4) */
    c->pc = RC_ADDR(0x000188dcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000188e0u));
    rc_depth++;
    t3 = (c->a[4] - 0x7c3eu);
    c->pc = t3;
    return;

L_188E0:
    /* 000188e0   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000188e0u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_188E4:
    /* 000188e4   2  unlk A5 */
    c->pc = RC_ADDR(0x000188e4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_188E6:
    /* 000188e6   2  rts */
    c->pc = RC_ADDR(0x000188e6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
