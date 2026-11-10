/* fn_0001f0d8 - 174 byte(s), 49 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f0d8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f0d8u): goto L_1F0D8;
    case RC_ADDR(0x0001f0dcu): goto L_1F0DC;
    case RC_ADDR(0x0001f0e2u): goto L_1F0E2;
    case RC_ADDR(0x0001f0e6u): goto L_1F0E6;
    case RC_ADDR(0x0001f0eau): goto L_1F0EA;
    case RC_ADDR(0x0001f0ecu): goto L_1F0EC;
    case RC_ADDR(0x0001f0f0u): goto L_1F0F0;
    case RC_ADDR(0x0001f0f2u): goto L_1F0F2;
    case RC_ADDR(0x0001f0f4u): goto L_1F0F4;
    case RC_ADDR(0x0001f0f6u): goto L_1F0F6;
    case RC_ADDR(0x0001f0f8u): goto L_1F0F8;
    case RC_ADDR(0x0001f0fau): goto L_1F0FA;
    case RC_ADDR(0x0001f0feu): goto L_1F0FE;
    case RC_ADDR(0x0001f102u): goto L_1F102;
    case RC_ADDR(0x0001f104u): goto L_1F104;
    case RC_ADDR(0x0001f106u): goto L_1F106;
    case RC_ADDR(0x0001f108u): goto L_1F108;
    case RC_ADDR(0x0001f10au): goto L_1F10A;
    case RC_ADDR(0x0001f10eu): goto L_1F10E;
    case RC_ADDR(0x0001f110u): goto L_1F110;
    case RC_ADDR(0x0001f114u): goto L_1F114;
    case RC_ADDR(0x0001f118u): goto L_1F118;
    case RC_ADDR(0x0001f11au): goto L_1F11A;
    case RC_ADDR(0x0001f11eu): goto L_1F11E;
    case RC_ADDR(0x0001f122u): goto L_1F122;
    case RC_ADDR(0x0001f126u): goto L_1F126;
    case RC_ADDR(0x0001f128u): goto L_1F128;
    case RC_ADDR(0x0001f12au): goto L_1F12A;
    case RC_ADDR(0x0001f12cu): goto L_1F12C;
    case RC_ADDR(0x0001f130u): goto L_1F130;
    case RC_ADDR(0x0001f134u): goto L_1F134;
    case RC_ADDR(0x0001f138u): goto L_1F138;
    case RC_ADDR(0x0001f13cu): goto L_1F13C;
    case RC_ADDR(0x0001f13eu): goto L_1F13E;
    case RC_ADDR(0x0001f142u): goto L_1F142;
    case RC_ADDR(0x0001f146u): goto L_1F146;
    case RC_ADDR(0x0001f14au): goto L_1F14A;
    case RC_ADDR(0x0001f14cu): goto L_1F14C;
    case RC_ADDR(0x0001f150u): goto L_1F150;
    case RC_ADDR(0x0001f156u): goto L_1F156;
    case RC_ADDR(0x0001f15au): goto L_1F15A;
    case RC_ADDR(0x0001f160u): goto L_1F160;
    case RC_ADDR(0x0001f164u): goto L_1F164;
    case RC_ADDR(0x0001f16au): goto L_1F16A;
    case RC_ADDR(0x0001f16eu): goto L_1F16E;
    case RC_ADDR(0x0001f174u): goto L_1F174;
    case RC_ADDR(0x0001f178u): goto L_1F178;
    case RC_ADDR(0x0001f17eu): goto L_1F17E;
    case RC_ADDR(0x0001f182u): goto L_1F182;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F0D8:
    /* 0001f0d8   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0001f0d8u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1F0DC:
    /* 0001f0dc   6  pea (00010000).l */
    c->pc = RC_ADDR(0x0001f0dcu);
    rc_step(c, m);
    rc_push32(c, m, 0x00010000u);

L_1F0E2:
    /* 0001f0e2   4  pea (00000026).l */
    c->pc = RC_ADDR(0x0001f0e2u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000026u);

L_1F0E6:
    /* 0001f0e6   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0001f0e6u);
    rc_step(c, m);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0001f0eau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d8eu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002168cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021690u);
    return;

L_1F0EA:
    /* 0001f0ea   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f0eau);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F0EC:
    /* 0001f0ec   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001f0ecu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F0F0:
    /* 0001f0f0   2  bne 0001f0f8 */
    c->pc = RC_ADDR(0x0001f0f0u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1F0F8;

L_1F0F2:
    /* 0001f0f2   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f0f2u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F0F4:
    /* 0001f0f4   2  unlk A5 */
    c->pc = RC_ADDR(0x0001f0f4u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F0F6:
    /* 0001f0f6   2  rts */
    c->pc = RC_ADDR(0x0001f0f6u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_1F0F8:
    /* 0001f0f8   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001f0f8u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F0FA:
    /* 0001f0fa   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f0fau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F0FE:
    /* 0001f0fe   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x0001f0feu);
    rc_step(c, m);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x0001f102u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d04u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020820u);
    return;

L_1F102:
    /* 0001f102   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f102u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F104:
    /* 0001f104   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001f104u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1F106:
    /* 0001f106   2  addq.l #1,D0 */
    c->pc = RC_ADDR(0x0001f106u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1F108:
    /* 0001f108   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001f108u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F10A:
    /* 0001f10a   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0001f10au);
    rc_step(c, m);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0001f10eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d8eu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002168cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021690u);
    return;

L_1F10E:
    /* 0001f10e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f10eu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F110:
    /* 0001f110   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001f110u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1F114:
    /* 0001f114   4  move.l D0,(4,A0) */
    c->pc = RC_ADDR(0x0001f114u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F118:
    /* 0001f118   2  bne 0001f12c */
    c->pc = RC_ADDR(0x0001f118u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1F12C;

L_1F11A:
    /* 0001f11a   4  pea (00000026).l */
    c->pc = RC_ADDR(0x0001f11au);
    rc_step(c, m);
    rc_push32(c, m, 0x00000026u);

L_1F11E:
    /* 0001f11e   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f11eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F122:
    /* 0001f122   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0001f122u);
    rc_step(c, m);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x0001f126u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_1F126:
    /* 0001f126   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f126u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F128:
    /* 0001f128   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f128u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F12A:
    /* 0001f12a   2  bra 0001f0f4 */
    c->pc = RC_ADDR(0x0001f12au);
    rc_step(c, m);
    rc_tick();
    goto L_1F0F4;

L_1F12C:
    /* 0001f12c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f12cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F130:
    /* 0001f130   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001f130u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1F134:
    /* 0001f134   4  move.l (4,A0),-(A7) */
    c->pc = RC_ADDR(0x0001f134u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F138:
    /* 0001f138   4  jsr (ffff82a8,A4) */
    c->pc = RC_ADDR(0x0001f138u);
    rc_step(c, m);
    /* vector 113 */
    rc_push32(c, m, RC_ADDR(0x0001f13cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cfeu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020810u);
    return;

L_1F13C:
    /* 0001f13c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f13cu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F13E:
    /* 0001f13e   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f13eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F142:
    /* 0001f142   4  pea (ffffcce6,A4) */
    c->pc = RC_ADDR(0x0001f142u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] - 0x331au));

L_1F146:
    /* 0001f146   4  jsr (0001e49c) */
    c->pc = RC_ADDR(0x0001f146u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001f14au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e49cu);
    return;

L_1F14A:
    /* 0001f14a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f14au);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F14C:
    /* 0001f14c   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001f14cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1F150:
    /* 0001f150   6  move.w #28,(12,A0) */
    c->pc = RC_ADDR(0x0001f150u);
    rc_step(c, m);
    t0 = 0x00000028u;
    rc_wr16(c, m, (c->a[0] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F156:
    /* 0001f156   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001f156u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1F15A:
    /* 0001f15a   6  move.w #4b,(14,A0) */
    c->pc = RC_ADDR(0x0001f15au);
    rc_step(c, m);
    t0 = 0x0000004bu;
    rc_wr16(c, m, (c->a[0] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F160:
    /* 0001f160   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001f160u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1F164:
    /* 0001f164   6  move.w #230,(16,A0) */
    c->pc = RC_ADDR(0x0001f164u);
    rc_step(c, m);
    t0 = 0x00000230u;
    rc_wr16(c, m, (c->a[0] + 0x16u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F16A:
    /* 0001f16a   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001f16au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1F16E:
    /* 0001f16e   6  move.w #64,(18,A0) */
    c->pc = RC_ADDR(0x0001f16eu);
    rc_step(c, m);
    t0 = 0x00000064u;
    rc_wr16(c, m, (c->a[0] + 0x18u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F174:
    /* 0001f174   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001f174u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1F178:
    /* 0001f178   6  move.w #ffff,(24,A0) */
    c->pc = RC_ADDR(0x0001f178u);
    rc_step(c, m);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[0] + 0x24u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F17E:
    /* 0001f17e   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001f17eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F182:
    /* 0001f182   4  bra 0001f0f4 */
    c->pc = RC_ADDR(0x0001f182u);
    rc_step(c, m);
    rc_tick();
    goto L_1F0F4;

}
