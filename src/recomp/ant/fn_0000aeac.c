/* fn_0000aeac - 128 byte(s), 37 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000aeac(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x0000aeacu): goto L_AEAC;
    case RC_ADDR(0x0000aeb0u): goto L_AEB0;
    case RC_ADDR(0x0000aeb4u): goto L_AEB4;
    case RC_ADDR(0x0000aeb6u): goto L_AEB6;
    case RC_ADDR(0x0000aebau): goto L_AEBA;
    case RC_ADDR(0x0000aebeu): goto L_AEBE;
    case RC_ADDR(0x0000aec2u): goto L_AEC2;
    case RC_ADDR(0x0000aec6u): goto L_AEC6;
    case RC_ADDR(0x0000aecau): goto L_AECA;
    case RC_ADDR(0x0000aed0u): goto L_AED0;
    case RC_ADDR(0x0000aed2u): goto L_AED2;
    case RC_ADDR(0x0000aed6u): goto L_AED6;
    case RC_ADDR(0x0000aedau): goto L_AEDA;
    case RC_ADDR(0x0000aedeu): goto L_AEDE;
    case RC_ADDR(0x0000aee2u): goto L_AEE2;
    case RC_ADDR(0x0000aee6u): goto L_AEE6;
    case RC_ADDR(0x0000aee8u): goto L_AEE8;
    case RC_ADDR(0x0000aeeau): goto L_AEEA;
    case RC_ADDR(0x0000aeecu): goto L_AEEC;
    case RC_ADDR(0x0000aeeeu): goto L_AEEE;
    case RC_ADDR(0x0000aef0u): goto L_AEF0;
    case RC_ADDR(0x0000aef2u): goto L_AEF2;
    case RC_ADDR(0x0000aef6u): goto L_AEF6;
    case RC_ADDR(0x0000aefau): goto L_AEFA;
    case RC_ADDR(0x0000aefeu): goto L_AEFE;
    case RC_ADDR(0x0000af02u): goto L_AF02;
    case RC_ADDR(0x0000af06u): goto L_AF06;
    case RC_ADDR(0x0000af0cu): goto L_AF0C;
    case RC_ADDR(0x0000af0eu): goto L_AF0E;
    case RC_ADDR(0x0000af12u): goto L_AF12;
    case RC_ADDR(0x0000af16u): goto L_AF16;
    case RC_ADDR(0x0000af18u): goto L_AF18;
    case RC_ADDR(0x0000af1cu): goto L_AF1C;
    case RC_ADDR(0x0000af20u): goto L_AF20;
    case RC_ADDR(0x0000af24u): goto L_AF24;
    case RC_ADDR(0x0000af28u): goto L_AF28;
    case RC_ADDR(0x0000af2au): goto L_AF2A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_AEAC:
    /* 0000aeac   4  link.w A5,#fffffff2 */
    c->pc = RC_ADDR(0x0000aeacu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xeu;

L_AEB0:
    /* 0000aeb0   4  tst.w (fffffff2,A5) */
    c->pc = RC_ADDR(0x0000aeb0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_set_nzvc(c, t0, RC_W);

L_AEB4:
    /* 0000aeb4   2  beq 0000af2a */
    c->pc = RC_ADDR(0x0000aeb4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_AF2A;

L_AEB6:
    /* 0000aeb6   4  pea (00000004).l */
    c->pc = RC_ADDR(0x0000aeb6u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000004u);

L_AEBA:
    /* 0000aeba   4  move.l (ffff9578,A4),-(A7) */
    c->pc = RC_ADDR(0x0000aebau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x6a88u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AEBE:
    /* 0000aebe   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0000aebeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AEC2:
    /* 0000aec2   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0000aec2u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0000aec6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_AEC6:
    /* 0000aec6   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000aec6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_AECA:
    /* 0000aeca   6  cmp.l #4,D0 */
    c->pc = RC_ADDR(0x0000aecau);
    rc_step(c, m, 14);
    t0 = 0x00000004u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_AED0:
    /* 0000aed0   2  seq D0 */
    c->pc = RC_ADDR(0x0000aed0u);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_B, (rc_cond(c, 7) ? 0xFFu : 0u));

L_AED2:
    /* 0000aed2   4  and.w #1,D0 */
    c->pc = RC_ADDR(0x0000aed2u);
    rc_step(c, m, 10);
    t0 = 0x00000001u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_AED6:
    /* 0000aed6   4  move.w D0,(fffffff2,A5) */
    c->pc = RC_ADDR(0x0000aed6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_AEDA:
    /* 0000aeda   4  move.l (ffff9578,A4),-(A7) */
    c->pc = RC_ADDR(0x0000aedau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x6a88u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AEDE:
    /* 0000aede   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000aedeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AEE2:
    /* 0000aee2   4  jsr (ffff82de,A4) */
    c->pc = RC_ADDR(0x0000aee2u);
    rc_step(c, m, 18);
    /* vector 122 */
    rc_push32(c, m, RC_ADDR(0x0000aee6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dd4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002298au);
    return;

L_AEE6:
    /* 0000aee6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000aee6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_AEE8:
    /* 0000aee8   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000aee8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_AEEA:
    /* 0000aeea   2  bne 0000aef2 */
    c->pc = RC_ADDR(0x0000aeeau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_AEF2;

L_AEEC:
    /* 0000aeec   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0000aeecu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_AEEE:
    /* 0000aeee   2  unlk A5 */
    c->pc = RC_ADDR(0x0000aeeeu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_AEF0:
    /* 0000aef0   2  rts */
    c->pc = RC_ADDR(0x0000aef0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_AEF2:
    /* 0000aef2   4  pea (00000004).l */
    c->pc = RC_ADDR(0x0000aef2u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000004u);

L_AEF6:
    /* 0000aef6   4  pea (fffffffc,A5) */
    c->pc = RC_ADDR(0x0000aef6u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x4u));

L_AEFA:
    /* 0000aefa   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0000aefau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AEFE:
    /* 0000aefe   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0000aefeu);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0000af02u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_AF02:
    /* 0000af02   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000af02u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_AF06:
    /* 0000af06   6  cmp.l #4,D0 */
    c->pc = RC_ADDR(0x0000af06u);
    rc_step(c, m, 14);
    t0 = 0x00000004u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_AF0C:
    /* 0000af0c   2  seq D0 */
    c->pc = RC_ADDR(0x0000af0cu);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_B, (rc_cond(c, 7) ? 0xFFu : 0u));

L_AF0E:
    /* 0000af0e   4  and.w #1,D0 */
    c->pc = RC_ADDR(0x0000af0eu);
    rc_step(c, m, 10);
    t0 = 0x00000001u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_AF12:
    /* 0000af12   4  move.w D0,(fffffff2,A5) */
    c->pc = RC_ADDR(0x0000af12u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_AF16:
    /* 0000af16   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000af16u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_AF18:
    /* 0000af18   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000af18u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AF1C:
    /* 0000af1c   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0000af1cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AF20:
    /* 0000af20   4  jsr (ffff833e,A4) */
    c->pc = RC_ADDR(0x0000af20u);
    rc_step(c, m, 18);
    /* vector 138 */
    rc_push32(c, m, RC_ADDR(0x0000af24u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e34u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023526u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002352au);
    return;

L_AF24:
    /* 0000af24   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000af24u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_AF28:
    /* 0000af28   2  bra 0000aeb0 */
    c->pc = RC_ADDR(0x0000af28u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_AEB0;

L_AF2A:
    /* 0000af2a   2  bra 0000aeee */
    c->pc = RC_ADDR(0x0000af2au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_AEEE;

}
