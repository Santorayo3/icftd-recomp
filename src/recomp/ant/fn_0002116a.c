/* fn_0002116a - 174 byte(s), 49 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002116a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x0002116au): goto L_2116A;
    case RC_ADDR(0x0002116eu): goto L_2116E;
    case RC_ADDR(0x00021174u): goto L_21174;
    case RC_ADDR(0x00021178u): goto L_21178;
    case RC_ADDR(0x0002117cu): goto L_2117C;
    case RC_ADDR(0x0002117eu): goto L_2117E;
    case RC_ADDR(0x00021182u): goto L_21182;
    case RC_ADDR(0x00021184u): goto L_21184;
    case RC_ADDR(0x00021186u): goto L_21186;
    case RC_ADDR(0x00021188u): goto L_21188;
    case RC_ADDR(0x0002118au): goto L_2118A;
    case RC_ADDR(0x0002118cu): goto L_2118C;
    case RC_ADDR(0x00021190u): goto L_21190;
    case RC_ADDR(0x00021194u): goto L_21194;
    case RC_ADDR(0x00021196u): goto L_21196;
    case RC_ADDR(0x00021198u): goto L_21198;
    case RC_ADDR(0x0002119au): goto L_2119A;
    case RC_ADDR(0x0002119cu): goto L_2119C;
    case RC_ADDR(0x000211a0u): goto L_211A0;
    case RC_ADDR(0x000211a2u): goto L_211A2;
    case RC_ADDR(0x000211a6u): goto L_211A6;
    case RC_ADDR(0x000211aau): goto L_211AA;
    case RC_ADDR(0x000211acu): goto L_211AC;
    case RC_ADDR(0x000211b0u): goto L_211B0;
    case RC_ADDR(0x000211b4u): goto L_211B4;
    case RC_ADDR(0x000211b8u): goto L_211B8;
    case RC_ADDR(0x000211bau): goto L_211BA;
    case RC_ADDR(0x000211bcu): goto L_211BC;
    case RC_ADDR(0x000211beu): goto L_211BE;
    case RC_ADDR(0x000211c2u): goto L_211C2;
    case RC_ADDR(0x000211c6u): goto L_211C6;
    case RC_ADDR(0x000211cau): goto L_211CA;
    case RC_ADDR(0x000211ceu): goto L_211CE;
    case RC_ADDR(0x000211d0u): goto L_211D0;
    case RC_ADDR(0x000211d4u): goto L_211D4;
    case RC_ADDR(0x000211d8u): goto L_211D8;
    case RC_ADDR(0x000211dcu): goto L_211DC;
    case RC_ADDR(0x000211deu): goto L_211DE;
    case RC_ADDR(0x000211e2u): goto L_211E2;
    case RC_ADDR(0x000211e8u): goto L_211E8;
    case RC_ADDR(0x000211ecu): goto L_211EC;
    case RC_ADDR(0x000211f2u): goto L_211F2;
    case RC_ADDR(0x000211f6u): goto L_211F6;
    case RC_ADDR(0x000211fcu): goto L_211FC;
    case RC_ADDR(0x00021200u): goto L_21200;
    case RC_ADDR(0x00021206u): goto L_21206;
    case RC_ADDR(0x0002120au): goto L_2120A;
    case RC_ADDR(0x00021210u): goto L_21210;
    case RC_ADDR(0x00021214u): goto L_21214;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2116A:
    /* 0002116a   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0002116au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_2116E:
    /* 0002116e   6  pea (00010000).l */
    c->pc = RC_ADDR(0x0002116eu);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010000u);

L_21174:
    /* 00021174   4  pea (00000026).l */
    c->pc = RC_ADDR(0x00021174u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000026u);

L_21178:
    /* 00021178   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x00021178u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x0002117cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_2117C:
    /* 0002117c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0002117cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2117E:
    /* 0002117e   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0002117eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21182:
    /* 00021182   2  bne 0002118a */
    c->pc = RC_ADDR(0x00021182u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2118A;

L_21184:
    /* 00021184   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021184u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21186:
    /* 00021186   2  unlk A5 */
    c->pc = RC_ADDR(0x00021186u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_21188:
    /* 00021188   2  rts */
    c->pc = RC_ADDR(0x00021188u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_2118A:
    /* 0002118a   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0002118au);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2118C:
    /* 0002118c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0002118cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21190:
    /* 00021190   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x00021190u);
    rc_step(c, m, 18);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x00021194u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228c2u);
    return;

L_21194:
    /* 00021194   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00021194u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_21196:
    /* 00021196   2  ext.l D0 */
    c->pc = RC_ADDR(0x00021196u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_21198:
    /* 00021198   2  addq.l #1,D0 */
    c->pc = RC_ADDR(0x00021198u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2119A:
    /* 0002119a   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0002119au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2119C:
    /* 0002119c   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x0002119cu);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x000211a0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_211A0:
    /* 000211a0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000211a0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_211A2:
    /* 000211a2   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000211a2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_211A6:
    /* 000211a6   4  move.l D0,(4,A0) */
    c->pc = RC_ADDR(0x000211a6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_211AA:
    /* 000211aa   2  bne 000211be */
    c->pc = RC_ADDR(0x000211aau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_211BE;

L_211AC:
    /* 000211ac   4  pea (00000026).l */
    c->pc = RC_ADDR(0x000211acu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000026u);

L_211B0:
    /* 000211b0   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000211b0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_211B4:
    /* 000211b4   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x000211b4u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x000211b8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_211B8:
    /* 000211b8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000211b8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_211BA:
    /* 000211ba   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000211bau);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_211BC:
    /* 000211bc   2  bra 00021186 */
    c->pc = RC_ADDR(0x000211bcu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_21186;

L_211BE:
    /* 000211be   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000211beu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_211C2:
    /* 000211c2   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000211c2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_211C6:
    /* 000211c6   4  move.l (4,A0),-(A7) */
    c->pc = RC_ADDR(0x000211c6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_211CA:
    /* 000211ca   4  jsr (ffff82cc,A4) */
    c->pc = RC_ADDR(0x000211cau);
    rc_step(c, m, 18);
    /* vector 119 */
    rc_push32(c, m, RC_ADDR(0x000211ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228b2u);
    return;

L_211CE:
    /* 000211ce   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000211ceu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_211D0:
    /* 000211d0   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000211d0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_211D4:
    /* 000211d4   4  pea (ffffd46a,A4) */
    c->pc = RC_ADDR(0x000211d4u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x2b96u));

L_211D8:
    /* 000211d8   4  jsr (00020542) */
    c->pc = RC_ADDR(0x000211d8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000211dcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00020542u);
    return;

L_211DC:
    /* 000211dc   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000211dcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_211DE:
    /* 000211de   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000211deu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_211E2:
    /* 000211e2   6  move.w #28,(12,A0) */
    c->pc = RC_ADDR(0x000211e2u);
    rc_step(c, m, 16);
    t0 = 0x00000028u;
    rc_wr16(c, m, (c->a[0] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_211E8:
    /* 000211e8   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000211e8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_211EC:
    /* 000211ec   6  move.w #4b,(14,A0) */
    c->pc = RC_ADDR(0x000211ecu);
    rc_step(c, m, 16);
    t0 = 0x0000004bu;
    rc_wr16(c, m, (c->a[0] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_211F2:
    /* 000211f2   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000211f2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_211F6:
    /* 000211f6   6  move.w #230,(16,A0) */
    c->pc = RC_ADDR(0x000211f6u);
    rc_step(c, m, 16);
    t0 = 0x00000230u;
    rc_wr16(c, m, (c->a[0] + 0x16u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_211FC:
    /* 000211fc   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000211fcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_21200:
    /* 00021200   6  move.w #64,(18,A0) */
    c->pc = RC_ADDR(0x00021200u);
    rc_step(c, m, 16);
    t0 = 0x00000064u;
    rc_wr16(c, m, (c->a[0] + 0x18u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21206:
    /* 00021206   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00021206u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_2120A:
    /* 0002120a   6  move.w #ffff,(24,A0) */
    c->pc = RC_ADDR(0x0002120au);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[0] + 0x24u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21210:
    /* 00021210   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00021210u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21214:
    /* 00021214   4  bra 00021186 */
    c->pc = RC_ADDR(0x00021214u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_21186;

}
