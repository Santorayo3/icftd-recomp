/* fn_00006826 - 138 byte(s), 38 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00006826(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00006826u): goto L_6826;
    case RC_ADDR(0x0000682au): goto L_682A;
    case RC_ADDR(0x0000682eu): goto L_682E;
    case RC_ADDR(0x00006832u): goto L_6832;
    case RC_ADDR(0x00006836u): goto L_6836;
    case RC_ADDR(0x0000683au): goto L_683A;
    case RC_ADDR(0x0000683eu): goto L_683E;
    case RC_ADDR(0x00006842u): goto L_6842;
    case RC_ADDR(0x00006846u): goto L_6846;
    case RC_ADDR(0x0000684au): goto L_684A;
    case RC_ADDR(0x0000684cu): goto L_684C;
    case RC_ADDR(0x00006850u): goto L_6850;
    case RC_ADDR(0x00006852u): goto L_6852;
    case RC_ADDR(0x00006856u): goto L_6856;
    case RC_ADDR(0x00006858u): goto L_6858;
    case RC_ADDR(0x0000685cu): goto L_685C;
    case RC_ADDR(0x00006860u): goto L_6860;
    case RC_ADDR(0x00006864u): goto L_6864;
    case RC_ADDR(0x00006868u): goto L_6868;
    case RC_ADDR(0x0000686au): goto L_686A;
    case RC_ADDR(0x0000686eu): goto L_686E;
    case RC_ADDR(0x00006872u): goto L_6872;
    case RC_ADDR(0x00006876u): goto L_6876;
    case RC_ADDR(0x0000687au): goto L_687A;
    case RC_ADDR(0x00006880u): goto L_6880;
    case RC_ADDR(0x00006884u): goto L_6884;
    case RC_ADDR(0x00006888u): goto L_6888;
    case RC_ADDR(0x0000688au): goto L_688A;
    case RC_ADDR(0x0000688eu): goto L_688E;
    case RC_ADDR(0x00006892u): goto L_6892;
    case RC_ADDR(0x00006896u): goto L_6896;
    case RC_ADDR(0x0000689au): goto L_689A;
    case RC_ADDR(0x0000689eu): goto L_689E;
    case RC_ADDR(0x000068a2u): goto L_68A2;
    case RC_ADDR(0x000068a6u): goto L_68A6;
    case RC_ADDR(0x000068aau): goto L_68AA;
    case RC_ADDR(0x000068acu): goto L_68AC;
    case RC_ADDR(0x000068aeu): goto L_68AE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_6826:
    /* 00006826   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00006826u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_682A:
    /* 0000682a   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000682au);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_682E:
    /* 0000682e   4  pea (000068b9) */
    c->pc = RC_ADDR(0x0000682eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000068b9u));

L_6832:
    /* 00006832   4  pea (000068b0) */
    c->pc = RC_ADDR(0x00006832u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000068b0u));

L_6836:
    /* 00006836   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x00006836u);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x0000683au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000068au);
    return;

L_683A:
    /* 0000683a   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000683au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_683E:
    /* 0000683e   4  pea (000003ed).l */
    c->pc = RC_ADDR(0x0000683eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000003edu);

L_6842:
    /* 00006842   4  pea (000068c4) */
    c->pc = RC_ADDR(0x00006842u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000068c4u));

L_6846:
    /* 00006846   4  jsr (ffff82b4,A4) */
    c->pc = RC_ADDR(0x00006846u);
    rc_step(c, m, 18);
    /* vector 115 */
    rc_push32(c, m, RC_ADDR(0x0000684au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023daau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022518u);
    return;

L_684A:
    /* 0000684a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000684au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_684C:
    /* 0000684c   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000684cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6850:
    /* 00006850   2  beq 000068ac */
    c->pc = RC_ADDR(0x00006850u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_68AC;

L_6852:
    /* 00006852   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00006852u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_6856:
    /* 00006856   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00006856u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6858:
    /* 00006858   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00006858u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_685C:
    /* 0000685c   4  jsr (ffff833e,A4) */
    c->pc = RC_ADDR(0x0000685cu);
    rc_step(c, m, 18);
    /* vector 138 */
    rc_push32(c, m, RC_ADDR(0x00006860u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e34u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023526u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002352au);
    return;

L_6860:
    /* 00006860   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00006860u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_6864:
    /* 00006864   4  pea (ffffffff).l */
    c->pc = RC_ADDR(0x00006864u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xffffffffu);

L_6868:
    /* 00006868   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00006868u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_686A:
    /* 0000686a   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000686au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_686E:
    /* 0000686e   4  jsr (ffff833e,A4) */
    c->pc = RC_ADDR(0x0000686eu);
    rc_step(c, m, 18);
    /* vector 138 */
    rc_push32(c, m, RC_ADDR(0x00006872u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e34u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023526u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002352au);
    return;

L_6872:
    /* 00006872   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00006872u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_6876:
    /* 00006876   4  move.l D0,(fffff80e,A4) */
    c->pc = RC_ADDR(0x00006876u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x7f2u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_687A:
    /* 0000687a   6  pea (00010001).l */
    c->pc = RC_ADDR(0x0000687au);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_6880:
    /* 00006880   4  move.l (fffff80e,A4),-(A7) */
    c->pc = RC_ADDR(0x00006880u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7f2u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6884:
    /* 00006884   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x00006884u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x00006888u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_6888:
    /* 00006888   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00006888u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_688A:
    /* 0000688a   4  move.l D0,(fffff812,A4) */
    c->pc = RC_ADDR(0x0000688au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x7eeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_688E:
    /* 0000688e   4  move.l (fffff80e,A4),-(A7) */
    c->pc = RC_ADDR(0x0000688eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7f2u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6892:
    /* 00006892   4  move.l (fffff812,A4),-(A7) */
    c->pc = RC_ADDR(0x00006892u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7eeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6896:
    /* 00006896   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00006896u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_689A:
    /* 0000689a   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0000689au);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0000689eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_689E:
    /* 0000689e   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000689eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_68A2:
    /* 000068a2   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000068a2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_68A6:
    /* 000068a6   4  jsr (ffff82ba,A4) */
    c->pc = RC_ADDR(0x000068a6u);
    rc_step(c, m, 18);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x000068aau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023db0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022532u);
    return;

L_68AA:
    /* 000068aa   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000068aau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_68AC:
    /* 000068ac   2  unlk A5 */
    c->pc = RC_ADDR(0x000068acu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_68AE:
    /* 000068ae   2  rts */
    c->pc = RC_ADDR(0x000068aeu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
