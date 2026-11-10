/* fn_000054cc - 80 byte(s), 22 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000054cc(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000054ccu): goto L_54CC;
    case RC_ADDR(0x000054d0u): goto L_54D0;
    case RC_ADDR(0x000054d4u): goto L_54D4;
    case RC_ADDR(0x000054d6u): goto L_54D6;
    case RC_ADDR(0x000054dau): goto L_54DA;
    case RC_ADDR(0x000054deu): goto L_54DE;
    case RC_ADDR(0x000054e0u): goto L_54E0;
    case RC_ADDR(0x000054e4u): goto L_54E4;
    case RC_ADDR(0x000054e8u): goto L_54E8;
    case RC_ADDR(0x000054ecu): goto L_54EC;
    case RC_ADDR(0x000054eeu): goto L_54EE;
    case RC_ADDR(0x000054f2u): goto L_54F2;
    case RC_ADDR(0x000054f6u): goto L_54F6;
    case RC_ADDR(0x000054fau): goto L_54FA;
    case RC_ADDR(0x00005500u): goto L_5500;
    case RC_ADDR(0x00005504u): goto L_5504;
    case RC_ADDR(0x00005506u): goto L_5506;
    case RC_ADDR(0x0000550cu): goto L_550C;
    case RC_ADDR(0x00005512u): goto L_5512;
    case RC_ADDR(0x00005516u): goto L_5516;
    case RC_ADDR(0x00005518u): goto L_5518;
    case RC_ADDR(0x0000551au): goto L_551A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_54CC:
    /* 000054cc   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000054ccu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_54D0:
    /* 000054d0   4  movem.l { D3 D4 D5 D6 D7 A4 A5 A6 },-(SP) */
    c->pc = RC_ADDR(0x000054d0u);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    c->a[7] = t3;

L_54D4:
    /* 000054d4   2  movea.l (A1),A4 */
    c->pc = RC_ADDR(0x000054d4u);
    t0 = rc_rd32(c, m, c->a[1]);
    c->a[4] = t0;

L_54D6:
    /* 000054d6   4  jsr (0000a500) */
    c->pc = RC_ADDR(0x000054d6u);
    rc_push32(c, m, RC_ADDR(0x000054dau));
    rc_depth++;
    c->pc = RC_ADDR(0x0000a500u);
    return;

L_54DA:
    /* 000054da   4  tst.w (ffff83d2,A4) */
    c->pc = RC_ADDR(0x000054dau);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c2eu));
    rc_set_nzvc(c, t0, RC_W);

L_54DE:
    /* 000054de   2  bne 000054f6 */
    c->pc = RC_ADDR(0x000054deu);
    if (rc_cond(c, 6)) goto L_54F6;

L_54E0:
    /* 000054e0   4  addq.w #1,(ffffce2a,A4) */
    c->pc = RC_ADDR(0x000054e0u);
    t3 = (c->a[4] - 0x31d6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_54E4:
    /* 000054e4   4  move.w (ffffce2a,A4),D0 */
    c->pc = RC_ADDR(0x000054e4u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31d6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_54E8:
    /* 000054e8   4  cmp.w (ffffce28,A4),D0 */
    c->pc = RC_ADDR(0x000054e8u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31d8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_54EC:
    /* 000054ec   2  bne 000054f6 */
    c->pc = RC_ADDR(0x000054ecu);
    if (rc_cond(c, 6)) goto L_54F6;

L_54EE:
    /* 000054ee   4  clr.w (ffffce2a,A4) */
    c->pc = RC_ADDR(0x000054eeu);
    rc_wr16(c, m, (c->a[4] - 0x31d6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_54F2:
    /* 000054f2   4  bsr 00005406 */
    c->pc = RC_ADDR(0x000054f2u);
    rc_push32(c, m, RC_ADDR(0x000054f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005406u);
    return;

L_54F6:
    /* 000054f6   4  clr.w (ffffce2e,A4) */
    c->pc = RC_ADDR(0x000054f6u);
    rc_wr16(c, m, (c->a[4] - 0x31d2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_54FA:
    /* 000054fa   6  move.b (00bfe001).l,D0 */
    c->pc = RC_ADDR(0x000054fau);
    t0 = rc_rd8(c, m, RC_ADDR(0x00bfe001u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_5500:
    /* 00005500   4  btst #6,D0 */
    c->pc = RC_ADDR(0x00005500u);
    t4 = 0x00000006u;
    t0 = rc_d_get(c, 0, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_5504:
    /* 00005504   2  bne 00005512 */
    c->pc = RC_ADDR(0x00005504u);
    if (rc_cond(c, 6)) goto L_5512;

L_5506:
    /* 00005506   6  move.w #1,(ffff83d2,A4) */
    c->pc = RC_ADDR(0x00005506u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c2eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_550C:
    /* 0000550c   6  move.w #1,(ffffce2e,A4) */
    c->pc = RC_ADDR(0x0000550cu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x31d2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5512:
    /* 00005512   4  movem.l (SP)+,{ D1 D2 D3 A0 A1 A2 A3 A4 } */
    c->pc = RC_ADDR(0x00005512u);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[4] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_5516:
    /* 00005516   2  clr.l D0 */
    c->pc = RC_ADDR(0x00005516u);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5518:
    /* 00005518   2  unlk A5 */
    c->pc = RC_ADDR(0x00005518u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_551A:
    /* 0000551a   2  rts */
    c->pc = RC_ADDR(0x0000551au);
    rc_ret(c, m);
    return;

}
