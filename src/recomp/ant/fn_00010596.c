/* fn_00010596 - 102 byte(s), 30 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00010596(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00010596u): goto L_10596;
    case RC_ADDR(0x0001059au): goto L_1059A;
    case RC_ADDR(0x0001059eu): goto L_1059E;
    case RC_ADDR(0x000105a0u): goto L_105A0;
    case RC_ADDR(0x000105a4u): goto L_105A4;
    case RC_ADDR(0x000105a8u): goto L_105A8;
    case RC_ADDR(0x000105acu): goto L_105AC;
    case RC_ADDR(0x000105aeu): goto L_105AE;
    case RC_ADDR(0x000105b2u): goto L_105B2;
    case RC_ADDR(0x000105b4u): goto L_105B4;
    case RC_ADDR(0x000105b8u): goto L_105B8;
    case RC_ADDR(0x000105bcu): goto L_105BC;
    case RC_ADDR(0x000105c0u): goto L_105C0;
    case RC_ADDR(0x000105c4u): goto L_105C4;
    case RC_ADDR(0x000105c8u): goto L_105C8;
    case RC_ADDR(0x000105ccu): goto L_105CC;
    case RC_ADDR(0x000105ceu): goto L_105CE;
    case RC_ADDR(0x000105d2u): goto L_105D2;
    case RC_ADDR(0x000105d6u): goto L_105D6;
    case RC_ADDR(0x000105dau): goto L_105DA;
    case RC_ADDR(0x000105dcu): goto L_105DC;
    case RC_ADDR(0x000105e0u): goto L_105E0;
    case RC_ADDR(0x000105e4u): goto L_105E4;
    case RC_ADDR(0x000105e6u): goto L_105E6;
    case RC_ADDR(0x000105eau): goto L_105EA;
    case RC_ADDR(0x000105eeu): goto L_105EE;
    case RC_ADDR(0x000105f2u): goto L_105F2;
    case RC_ADDR(0x000105f4u): goto L_105F4;
    case RC_ADDR(0x000105f8u): goto L_105F8;
    case RC_ADDR(0x000105fau): goto L_105FA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10596:
    /* 00010596   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00010596u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1059A:
    /* 0001059a   4  tst.l (14da,A4) */
    c->pc = RC_ADDR(0x0001059au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14dau));
    rc_set_nzvc(c, t0, RC_L);

L_1059E:
    /* 0001059e   2  beq 000105c8 */
    c->pc = RC_ADDR(0x0001059eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_105C8;

L_105A0:
    /* 000105a0   4  pea (00000001).l */
    c->pc = RC_ADDR(0x000105a0u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_105A4:
    /* 000105a4   4  move.l (14de,A4),-(A7) */
    c->pc = RC_ADDR(0x000105a4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14deu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_105A8:
    /* 000105a8   4  jsr (ffff8308,A4) */
    c->pc = RC_ADDR(0x000105a8u);
    rc_step(c, m, 18);
    /* vector 129 */
    rc_push32(c, m, RC_ADDR(0x000105acu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dfeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002347cu);
    return;

L_105AC:
    /* 000105ac   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000105acu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_105AE:
    /* 000105ae   4  pea (14c0,A4) */
    c->pc = RC_ADDR(0x000105aeu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x14c0u));

L_105B2:
    /* 000105b2   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000105b2u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_105B4:
    /* 000105b4   4  move.l (14de,A4),-(A7) */
    c->pc = RC_ADDR(0x000105b4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14deu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_105B8:
    /* 000105b8   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x000105b8u);
    rc_step(c, m, 18);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x000105bcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e0au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023496u);
    return;

L_105BC:
    /* 000105bc   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000105bcu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_105C0:
    /* 000105c0   4  jsr (000106e4) */
    c->pc = RC_ADDR(0x000105c0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000105c4u));
    rc_depth++;
    c->pc = RC_ADDR(0x000106e4u);
    return;

L_105C4:
    /* 000105c4   4  clr.l (14da,A4) */
    c->pc = RC_ADDR(0x000105c4u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x14dau), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_105C8:
    /* 000105c8   4  tst.l (ffffa428,A4) */
    c->pc = RC_ADDR(0x000105c8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bd8u));
    rc_set_nzvc(c, t0, RC_L);

L_105CC:
    /* 000105cc   2  beq 000105e0 */
    c->pc = RC_ADDR(0x000105ccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_105E0;

L_105CE:
    /* 000105ce   4  pea (000001ea).l */
    c->pc = RC_ADDR(0x000105ceu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000001eau);

L_105D2:
    /* 000105d2   4  move.l (ffffa428,A4),-(A7) */
    c->pc = RC_ADDR(0x000105d2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bd8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_105D6:
    /* 000105d6   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x000105d6u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x000105dau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_105DA:
    /* 000105da   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000105dau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_105DC:
    /* 000105dc   4  clr.l (ffffa428,A4) */
    c->pc = RC_ADDR(0x000105dcu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x5bd8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_105E0:
    /* 000105e0   4  tst.l (14d6,A4) */
    c->pc = RC_ADDR(0x000105e0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14d6u));
    rc_set_nzvc(c, t0, RC_L);

L_105E4:
    /* 000105e4   2  beq 000105f8 */
    c->pc = RC_ADDR(0x000105e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_105F8;

L_105E6:
    /* 000105e6   4  pea (00000408).l */
    c->pc = RC_ADDR(0x000105e6u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000408u);

L_105EA:
    /* 000105ea   4  move.l (14d6,A4),-(A7) */
    c->pc = RC_ADDR(0x000105eau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14d6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_105EE:
    /* 000105ee   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x000105eeu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x000105f2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_105F2:
    /* 000105f2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000105f2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_105F4:
    /* 000105f4   4  clr.l (14d6,A4) */
    c->pc = RC_ADDR(0x000105f4u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x14d6u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_105F8:
    /* 000105f8   2  unlk A5 */
    c->pc = RC_ADDR(0x000105f8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_105FA:
    /* 000105fa   2  rts */
    c->pc = RC_ADDR(0x000105fau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
