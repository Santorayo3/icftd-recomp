/* fn_00022688 - 178 byte(s), 47 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00022688(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00022688u): goto L_22688;
    case RC_ADDR(0x0002268cu): goto L_2268C;
    case RC_ADDR(0x00022690u): goto L_22690;
    case RC_ADDR(0x00022692u): goto L_22692;
    case RC_ADDR(0x00022698u): goto L_22698;
    case RC_ADDR(0x0002269au): goto L_2269A;
    case RC_ADDR(0x0002269eu): goto L_2269E;
    case RC_ADDR(0x000226a0u): goto L_226A0;
    case RC_ADDR(0x000226a4u): goto L_226A4;
    case RC_ADDR(0x000226a8u): goto L_226A8;
    case RC_ADDR(0x000226acu): goto L_226AC;
    case RC_ADDR(0x000226b0u): goto L_226B0;
    case RC_ADDR(0x000226b2u): goto L_226B2;
    case RC_ADDR(0x000226b6u): goto L_226B6;
    case RC_ADDR(0x000226bau): goto L_226BA;
    case RC_ADDR(0x000226beu): goto L_226BE;
    case RC_ADDR(0x000226c2u): goto L_226C2;
    case RC_ADDR(0x000226c6u): goto L_226C6;
    case RC_ADDR(0x000226cau): goto L_226CA;
    case RC_ADDR(0x000226ceu): goto L_226CE;
    case RC_ADDR(0x000226d0u): goto L_226D0;
    case RC_ADDR(0x000226d4u): goto L_226D4;
    case RC_ADDR(0x000226d8u): goto L_226D8;
    case RC_ADDR(0x000226dcu): goto L_226DC;
    case RC_ADDR(0x000226e0u): goto L_226E0;
    case RC_ADDR(0x000226e4u): goto L_226E4;
    case RC_ADDR(0x000226e8u): goto L_226E8;
    case RC_ADDR(0x000226ecu): goto L_226EC;
    case RC_ADDR(0x000226f0u): goto L_226F0;
    case RC_ADDR(0x000226f4u): goto L_226F4;
    case RC_ADDR(0x000226f8u): goto L_226F8;
    case RC_ADDR(0x000226fcu): goto L_226FC;
    case RC_ADDR(0x000226feu): goto L_226FE;
    case RC_ADDR(0x00022700u): goto L_22700;
    case RC_ADDR(0x00022702u): goto L_22702;
    case RC_ADDR(0x00022708u): goto L_22708;
    case RC_ADDR(0x0002270eu): goto L_2270E;
    case RC_ADDR(0x00022714u): goto L_22714;
    case RC_ADDR(0x00022716u): goto L_22716;
    case RC_ADDR(0x0002271au): goto L_2271A;
    case RC_ADDR(0x0002271eu): goto L_2271E;
    case RC_ADDR(0x00022722u): goto L_22722;
    case RC_ADDR(0x00022726u): goto L_22726;
    case RC_ADDR(0x0002272au): goto L_2272A;
    case RC_ADDR(0x0002272eu): goto L_2272E;
    case RC_ADDR(0x00022732u): goto L_22732;
    case RC_ADDR(0x00022736u): goto L_22736;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22688:
    /* 00022688   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00022688u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_2268C:
    /* 0002268c   4  tst.l (14bc,A4) */
    c->pc = RC_ADDR(0x0002268cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14bcu));
    rc_set_nzvc(c, t0, RC_L);

L_22690:
    /* 00022690   2  beq 0002269a */
    c->pc = RC_ADDR(0x00022690u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2269A;

L_22692:
    /* 00022692   6  move.l (14bc,A4),(450c,A4) */
    c->pc = RC_ADDR(0x00022692u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14bcu));
    rc_wr32(c, m, (c->a[4] + 0x450cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22698:
    /* 00022698   2  bra 000226c2 */
    c->pc = RC_ADDR(0x00022698u);
    rc_step(c, m, 10);
    goto L_226C2;

L_2269A:
    /* 0002269a   4  pea (00000001).l */
    c->pc = RC_ADDR(0x0002269au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_2269E:
    /* 0002269e   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0002269eu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_226A0:
    /* 000226a0   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000226a0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_226A4:
    /* 000226a4   4  jsr (ffff833e,A4) */
    c->pc = RC_ADDR(0x000226a4u);
    rc_step(c, m, 18);
    /* vector 138 */
    rc_push32(c, m, RC_ADDR(0x000226a8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e34u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023526u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002352au);
    return;

L_226A8:
    /* 000226a8   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000226a8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_226AC:
    /* 000226ac   4  pea (ffffffff).l */
    c->pc = RC_ADDR(0x000226acu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xffffffffu);

L_226B0:
    /* 000226b0   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000226b0u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_226B2:
    /* 000226b2   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000226b2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_226B6:
    /* 000226b6   4  jsr (ffff833e,A4) */
    c->pc = RC_ADDR(0x000226b6u);
    rc_step(c, m, 18);
    /* vector 138 */
    rc_push32(c, m, RC_ADDR(0x000226bau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e34u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023526u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002352au);
    return;

L_226BA:
    /* 000226ba   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000226bau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_226BE:
    /* 000226be   4  move.l D0,(450c,A4) */
    c->pc = RC_ADDR(0x000226beu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x450cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_226C2:
    /* 000226c2   4  pea (00000001).l */
    c->pc = RC_ADDR(0x000226c2u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_226C6:
    /* 000226c6   4  move.l (450c,A4),-(A7) */
    c->pc = RC_ADDR(0x000226c6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x450cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_226CA:
    /* 000226ca   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x000226cau);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x000226ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_226CE:
    /* 000226ce   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000226ceu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_226D0:
    /* 000226d0   4  move.l D0,(4518,A4) */
    c->pc = RC_ADDR(0x000226d0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x4518u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_226D4:
    /* 000226d4   4  move.l D0,(4514,A4) */
    c->pc = RC_ADDR(0x000226d4u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x4514u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_226D8:
    /* 000226d8   4  pea (00000002).l */
    c->pc = RC_ADDR(0x000226d8u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_226DC:
    /* 000226dc   4  pea (fffffffd,A5) */
    c->pc = RC_ADDR(0x000226dcu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x3u));

L_226E0:
    /* 000226e0   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000226e0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_226E4:
    /* 000226e4   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x000226e4u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x000226e8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_226E8:
    /* 000226e8   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000226e8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_226EC:
    /* 000226ec   4  clr.b (ffffffff,A5) */
    c->pc = RC_ADDR(0x000226ecu);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[5] - 0x1u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_226F0:
    /* 000226f0   4  pea (fffffffd,A5) */
    c->pc = RC_ADDR(0x000226f0u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x3u));

L_226F4:
    /* 000226f4   4  pea (0002288e) */
    c->pc = RC_ADDR(0x000226f4u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0002288eu));

L_226F8:
    /* 000226f8   4  jsr (ffff82de,A4) */
    c->pc = RC_ADDR(0x000226f8u);
    rc_step(c, m, 18);
    /* vector 122 */
    rc_push32(c, m, RC_ADDR(0x000226fcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dd4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002298au);
    return;

L_226FC:
    /* 000226fc   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000226fcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_226FE:
    /* 000226fe   2  tst.w D0 */
    c->pc = RC_ADDR(0x000226feu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_22700:
    /* 00022700   2  beq 0002273e */
    c->pc = RC_ADDR(0x00022700u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7))
    {
        c->pc = RC_ADDR(0x0002273eu);
        return;
    }

L_22702:
    /* 00022702   6  move.l (4514,A4),(ffffd4aa,A4) */
    c->pc = RC_ADDR(0x00022702u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4514u));
    rc_wr32(c, m, (c->a[4] - 0x2b56u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22708:
    /* 00022708   6  move.l (4514,A4),(34b2,A4) */
    c->pc = RC_ADDR(0x00022708u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4514u));
    rc_wr32(c, m, (c->a[4] + 0x34b2u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2270E:
    /* 0002270e   6  move.l (450c,A4),(4510,A4) */
    c->pc = RC_ADDR(0x0002270eu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x450cu));
    rc_wr32(c, m, (c->a[4] + 0x4510u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22714:
    /* 00022714   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00022714u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_22716:
    /* 00022716   4  pea (fffffffe).l */
    c->pc = RC_ADDR(0x00022716u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xfffffffeu);

L_2271A:
    /* 0002271a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0002271au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2271E:
    /* 0002271e   4  jsr (ffff833e,A4) */
    c->pc = RC_ADDR(0x0002271eu);
    rc_step(c, m, 18);
    /* vector 138 */
    rc_push32(c, m, RC_ADDR(0x00022722u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e34u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023526u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002352au);
    return;

L_22722:
    /* 00022722   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00022722u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_22726:
    /* 00022726   4  move.l (450c,A4),-(A7) */
    c->pc = RC_ADDR(0x00022726u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x450cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2272A:
    /* 0002272a   4  move.l (4514,A4),-(A7) */
    c->pc = RC_ADDR(0x0002272au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4514u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2272E:
    /* 0002272e   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0002272eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22732:
    /* 00022732   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00022732u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x00022736u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_22736:
    /* 00022736   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00022736u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

    /* falls through into 0002273a */
    c->pc = RC_ADDR(0x0002273au);
    return;
}
