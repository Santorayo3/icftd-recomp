/* fn_00011094 - 156 byte(s), 47 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00011094(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case 0x00011094u: goto L_11094;
    case 0x00011098u: goto L_11098;
    case 0x0001109eu: goto L_1109E;
    case 0x000110a4u: goto L_110A4;
    case 0x000110a6u: goto L_110A6;
    case 0x000110aau: goto L_110AA;
    case 0x000110acu: goto L_110AC;
    case 0x000110b0u: goto L_110B0;
    case 0x000110b4u: goto L_110B4;
    case 0x000110b6u: goto L_110B6;
    case 0x000110bau: goto L_110BA;
    case 0x000110bcu: goto L_110BC;
    case 0x000110c0u: goto L_110C0;
    case 0x000110c4u: goto L_110C4;
    case 0x000110c6u: goto L_110C6;
    case 0x000110cau: goto L_110CA;
    case 0x000110ccu: goto L_110CC;
    case 0x000110d0u: goto L_110D0;
    case 0x000110d4u: goto L_110D4;
    case 0x000110dcu: goto L_110DC;
    case 0x000110e0u: goto L_110E0;
    case 0x000110e2u: goto L_110E2;
    case 0x000110e6u: goto L_110E6;
    case 0x000110e8u: goto L_110E8;
    case 0x000110eau: goto L_110EA;
    case 0x000110eeu: goto L_110EE;
    case 0x000110f2u: goto L_110F2;
    case 0x000110f4u: goto L_110F4;
    case 0x000110f8u: goto L_110F8;
    case 0x000110fau: goto L_110FA;
    case 0x000110feu: goto L_110FE;
    case 0x00011102u: goto L_11102;
    case 0x00011104u: goto L_11104;
    case 0x00011106u: goto L_11106;
    case 0x00011108u: goto L_11108;
    case 0x0001110au: goto L_1110A;
    case 0x0001110eu: goto L_1110E;
    case 0x00011112u: goto L_11112;
    case 0x00011114u: goto L_11114;
    case 0x00011118u: goto L_11118;
    case 0x0001111au: goto L_1111A;
    case 0x0001111eu: goto L_1111E;
    case 0x00011122u: goto L_11122;
    case 0x00011124u: goto L_11124;
    case 0x00011128u: goto L_11128;
    case 0x0001112cu: goto L_1112C;
    case 0x0001112eu: goto L_1112E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11094:
    /* 00011094   4  link.w A5,#0 */
    c->pc = 0x00011094u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_11098:
    /* 00011098   6  move.w (74e,A4),(a16,A4) */
    c->pc = 0x00011098u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x74eu));
    rc_wr16(c, m, (c->a[4] + 0xa16u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1109E:
    /* 0001109e   6  move.w (750,A4),(a18,A4) */
    c->pc = 0x0001109eu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x750u));
    rc_wr16(c, m, (c->a[4] + 0xa18u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_110A4:
    /* 000110a4   2  moveq #0,D0 */
    c->pc = 0x000110a4u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_110A6:
    /* 000110a6   4  move.w D0,(fffff2d4,A4) */
    c->pc = 0x000110a6u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xd2cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_110AA:
    /* 000110aa   2  ext.l D0 */
    c->pc = 0x000110aau;
    rc_ext_l(c, 0);

L_110AC:
    /* 000110ac   4  move.l D0,(fffff2dc,A4) */
    c->pc = 0x000110acu;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xd24u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_110B0:
    /* 000110b0   4  move.w D0,(fffff2d2,A4) */
    c->pc = 0x000110b0u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xd2eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_110B4:
    /* 000110b4   2  moveq #0,D0 */
    c->pc = 0x000110b4u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_110B6:
    /* 000110b6   4  move.w D0,(fffff2d6,A4) */
    c->pc = 0x000110b6u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xd2au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_110BA:
    /* 000110ba   2  ext.l D0 */
    c->pc = 0x000110bau;
    rc_ext_l(c, 0);

L_110BC:
    /* 000110bc   4  move.l D0,(fffff2e0,A4) */
    c->pc = 0x000110bcu;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xd20u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_110C0:
    /* 000110c0   4  move.w D0,(fffff2d8,A4) */
    c->pc = 0x000110c0u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xd28u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_110C4:
    /* 000110c4   2  ext.l D0 */
    c->pc = 0x000110c4u;
    rc_ext_l(c, 0);

L_110C6:
    /* 000110c6   4  move.l D0,(fffff2e4,A4) */
    c->pc = 0x000110c6u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xd1cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_110CA:
    /* 000110ca   2  moveq #0,D0 */
    c->pc = 0x000110cau;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_110CC:
    /* 000110cc   4  move.w (8,A5),D0 */
    c->pc = 0x000110ccu;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_110D0:
    /* 000110d0   4  move.l D0,(fffff2e8,A4) */
    c->pc = 0x000110d0u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xd18u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_110D4:
    /* 000110d4   8  move.w #8400,(00dff096).l */
    c->pc = 0x000110d4u;
    t0 = 0x00008400u;
    rc_wr16(c, m, 0x00dff096u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_110DC:
    /* 000110dc   4  move.w (a,A5),D1 */
    c->pc = 0x000110dcu;
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_110E0:
    /* 000110e0   2  lsl.w #6,D1 */
    c->pc = 0x000110e0u;
    c->d[1] = rc_shift(c, 1, 1, 0x00000006u, rc_d_get(c, 1, RC_W), RC_W);

L_110E2:
    /* 000110e2   4  move.w (8,A5),D0 */
    c->pc = 0x000110e2u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_110E6:
    /* 000110e6   2  lsr.w #1,D0 */
    c->pc = 0x000110e6u;
    c->d[0] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_110E8:
    /* 000110e8   2  or.w D0,D1 */
    c->pc = 0x000110e8u;
    t0 = rc_d_get(c, 0, RC_W);
    t2 = t0 | rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 1, RC_W, t2);

L_110EA:
    /* 000110ea   4  move.w D1,(de8,A4) */
    c->pc = 0x000110eau;
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xde8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_110EE:
    /* 000110ee   4  move.w (fffff2d0,A4),D0 */
    c->pc = 0x000110eeu;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd30u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_110F2:
    /* 000110f2   2  ext.l D0 */
    c->pc = 0x000110f2u;
    rc_ext_l(c, 0);

L_110F4:
    /* 000110f4   4  divu.w (a,A5),D0 */
    c->pc = 0x000110f4u;
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_divu(c, m, 0, t0);

L_110F8:
    /* 000110f8   2  subq.w #1,D0 */
    c->pc = 0x000110f8u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_110FA:
    /* 000110fa   4  move.w D0,(dea,A4) */
    c->pc = 0x000110fau;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xdeau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_110FE:
    /* 000110fe   4  move.w (fffff2f2,A4),D1 */
    c->pc = 0x000110feu;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0eu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11102:
    /* 00011102   2  sub.w D0,D1 */
    c->pc = 0x00011102u;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_11104:
    /* 00011104   2  subq.w #1,D1 */
    c->pc = 0x00011104u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_11106:
    /* 00011106   2  lsl.w #1,D1 */
    c->pc = 0x00011106u;
    c->d[1] = rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W);

L_11108:
    /* 00011108   2  ext.l D1 */
    c->pc = 0x00011108u;
    rc_ext_l(c, 1);

L_1110A:
    /* 0001110a   4  move.l D1,(dee,A4) */
    c->pc = 0x0001110au;
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xdeeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1110E:
    /* 0001110e   4  move.w (fffff2ce,A4),D0 */
    c->pc = 0x0001110eu;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd32u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11112:
    /* 00011112   2  ext.l D0 */
    c->pc = 0x00011112u;
    rc_ext_l(c, 0);

L_11114:
    /* 00011114   4  divu.w (8,A5),D0 */
    c->pc = 0x00011114u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_divu(c, m, 0, t0);

L_11118:
    /* 00011118   2  subq.w #1,D0 */
    c->pc = 0x00011118u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1111A:
    /* 0001111a   4  move.w D0,(dec,A4) */
    c->pc = 0x0001111au;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xdecu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1111E:
    /* 0001111e   4  move.w (8,A5),D0 */
    c->pc = 0x0001111eu;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11122:
    /* 00011122   2  lsr.w #1,D0 */
    c->pc = 0x00011122u;
    c->d[0] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_11124:
    /* 00011124   4  mulu.w (dec,A4),D0 */
    c->pc = 0x00011124u;
    t0 = rc_rd16(c, m, (c->a[4] + 0xdecu));
    rc_mulu(c, 0, t0);

L_11128:
    /* 00011128   4  sub.w D0,(fffff2f0,A4) */
    c->pc = 0x00011128u;
    t3 = (c->a[4] - 0xd10u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1112C:
    /* 0001112c   2  unlk A5 */
    c->pc = 0x0001112cu;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1112E:
    /* 0001112e   2  rts */
    c->pc = 0x0001112eu;
    rc_ret(c, m);
    return;

}
