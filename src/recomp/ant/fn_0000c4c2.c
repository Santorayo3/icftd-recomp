/* fn_0000c4c2 - 142 byte(s), 43 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000c4c2(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000c4c2u): goto L_C4C2;
    case RC_ADDR(0x0000c4c6u): goto L_C4C6;
    case RC_ADDR(0x0000c4c8u): goto L_C4C8;
    case RC_ADDR(0x0000c4ccu): goto L_C4CC;
    case RC_ADDR(0x0000c4ceu): goto L_C4CE;
    case RC_ADDR(0x0000c4d0u): goto L_C4D0;
    case RC_ADDR(0x0000c4d4u): goto L_C4D4;
    case RC_ADDR(0x0000c4d8u): goto L_C4D8;
    case RC_ADDR(0x0000c4dcu): goto L_C4DC;
    case RC_ADDR(0x0000c4e0u): goto L_C4E0;
    case RC_ADDR(0x0000c4e2u): goto L_C4E2;
    case RC_ADDR(0x0000c4e6u): goto L_C4E6;
    case RC_ADDR(0x0000c4e8u): goto L_C4E8;
    case RC_ADDR(0x0000c4ecu): goto L_C4EC;
    case RC_ADDR(0x0000c4eeu): goto L_C4EE;
    case RC_ADDR(0x0000c4f0u): goto L_C4F0;
    case RC_ADDR(0x0000c4f4u): goto L_C4F4;
    case RC_ADDR(0x0000c4fau): goto L_C4FA;
    case RC_ADDR(0x0000c4feu): goto L_C4FE;
    case RC_ADDR(0x0000c500u): goto L_C500;
    case RC_ADDR(0x0000c506u): goto L_C506;
    case RC_ADDR(0x0000c50au): goto L_C50A;
    case RC_ADDR(0x0000c50eu): goto L_C50E;
    case RC_ADDR(0x0000c512u): goto L_C512;
    case RC_ADDR(0x0000c514u): goto L_C514;
    case RC_ADDR(0x0000c516u): goto L_C516;
    case RC_ADDR(0x0000c51au): goto L_C51A;
    case RC_ADDR(0x0000c51eu): goto L_C51E;
    case RC_ADDR(0x0000c522u): goto L_C522;
    case RC_ADDR(0x0000c524u): goto L_C524;
    case RC_ADDR(0x0000c526u): goto L_C526;
    case RC_ADDR(0x0000c52au): goto L_C52A;
    case RC_ADDR(0x0000c52eu): goto L_C52E;
    case RC_ADDR(0x0000c530u): goto L_C530;
    case RC_ADDR(0x0000c534u): goto L_C534;
    case RC_ADDR(0x0000c536u): goto L_C536;
    case RC_ADDR(0x0000c538u): goto L_C538;
    case RC_ADDR(0x0000c53cu): goto L_C53C;
    case RC_ADDR(0x0000c540u): goto L_C540;
    case RC_ADDR(0x0000c544u): goto L_C544;
    case RC_ADDR(0x0000c548u): goto L_C548;
    case RC_ADDR(0x0000c54cu): goto L_C54C;
    case RC_ADDR(0x0000c54eu): goto L_C54E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_C4C2:
    /* 0000c4c2   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000c4c2u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_C4C6:
    /* 0000c4c6   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000c4c6u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C4C8:
    /* 0000c4c8   4  move.w (dcc,A4),D0 */
    c->pc = RC_ADDR(0x0000c4c8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C4CC:
    /* 0000c4cc   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c4ccu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C4CE:
    /* 0000c4ce   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000c4ceu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_C4D0:
    /* 0000c4d0   4  lea (d08,A4),A0 */
    c->pc = RC_ADDR(0x0000c4d0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd08u);

L_C4D4:
    /* 0000c4d4   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000c4d4u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C4D8:
    /* 0000c4d8   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000c4d8u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C4DC:
    /* 0000c4dc   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000c4dcu);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000c4e0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_C4E0:
    /* 0000c4e0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000c4e0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_C4E2:
    /* 0000c4e2   4  tst.w (dde,A4) */
    c->pc = RC_ADDR(0x0000c4e2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xddeu));
    rc_set_nzvc(c, t0, RC_W);

L_C4E6:
    /* 0000c4e6   2  ble 0000c500 */
    c->pc = RC_ADDR(0x0000c4e6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_C500;

L_C4E8:
    /* 0000c4e8   4  move.w (dce,A4),D0 */
    c->pc = RC_ADDR(0x0000c4e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C4EC:
    /* 0000c4ec   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c4ecu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C4EE:
    /* 0000c4ee   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c4eeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_C4F0:
    /* 0000c4f0   4  lea (ffff98d0,A4),A0 */
    c->pc = RC_ADDR(0x0000c4f0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6730u);

L_C4F4:
    /* 0000c4f4   6  move.w (0,A0,D0.w),(dcc,A4) */
    c->pc = RC_ADDR(0x0000c4f4u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0xdccu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C4FA:
    /* 0000c4fa   4  jsr (0000c62e) */
    c->pc = RC_ADDR(0x0000c4fau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c4feu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c62eu);
    return;

L_C4FE:
    /* 0000c4fe   2  bra 0000c50a */
    c->pc = RC_ADDR(0x0000c4feu);
    rc_step(c, m, 10);
    goto L_C50A;

L_C500:
    /* 0000c500   6  move.w #8,(dcc,A4) */
    c->pc = RC_ADDR(0x0000c500u);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[4] + 0xdccu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C506:
    /* 0000c506   4  clr.w (dde,A4) */
    c->pc = RC_ADDR(0x0000c506u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xddeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C50A:
    /* 0000c50a   4  move.w #14,-(A7) */
    c->pc = RC_ADDR(0x0000c50au);
    rc_step(c, m, 12);
    t0 = 0x00000014u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C50E:
    /* 0000c50e   4  move.w (dcc,A4),D0 */
    c->pc = RC_ADDR(0x0000c50eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C512:
    /* 0000c512   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c512u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C514:
    /* 0000c514   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000c514u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_C516:
    /* 0000c516   4  lea (ffff96d2,A4),A0 */
    c->pc = RC_ADDR(0x0000c516u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x692eu);

L_C51A:
    /* 0000c51a   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000c51au);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C51E:
    /* 0000c51e   4  move.w (dcc,A4),D0 */
    c->pc = RC_ADDR(0x0000c51eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C522:
    /* 0000c522   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c522u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C524:
    /* 0000c524   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000c524u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_C526:
    /* 0000c526   4  lea (ffff96d0,A4),A0 */
    c->pc = RC_ADDR(0x0000c526u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6930u);

L_C52A:
    /* 0000c52a   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000c52au);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C52E:
    /* 0000c52e   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000c52eu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C530:
    /* 0000c530   4  move.w (dcc,A4),D0 */
    c->pc = RC_ADDR(0x0000c530u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C534:
    /* 0000c534   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c534u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C536:
    /* 0000c536   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000c536u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_C538:
    /* 0000c538   4  lea (d08,A4),A0 */
    c->pc = RC_ADDR(0x0000c538u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd08u);

L_C53C:
    /* 0000c53c   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000c53cu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C540:
    /* 0000c540   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000c540u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C544:
    /* 0000c544   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000c544u);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000c548u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_C548:
    /* 0000c548   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000c548u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_C54C:
    /* 0000c54c   2  unlk A5 */
    c->pc = RC_ADDR(0x0000c54cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_C54E:
    /* 0000c54e   2  rts */
    c->pc = RC_ADDR(0x0000c54eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
