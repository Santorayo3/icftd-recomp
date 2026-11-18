/* fn_0000d606 - 154 byte(s), 45 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000d606(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000d606u): goto L_D606;
    case RC_ADDR(0x0000d60au): goto L_D60A;
    case RC_ADDR(0x0000d60eu): goto L_D60E;
    case RC_ADDR(0x0000d610u): goto L_D610;
    case RC_ADDR(0x0000d612u): goto L_D612;
    case RC_ADDR(0x0000d618u): goto L_D618;
    case RC_ADDR(0x0000d61au): goto L_D61A;
    case RC_ADDR(0x0000d620u): goto L_D620;
    case RC_ADDR(0x0000d622u): goto L_D622;
    case RC_ADDR(0x0000d628u): goto L_D628;
    case RC_ADDR(0x0000d62au): goto L_D62A;
    case RC_ADDR(0x0000d630u): goto L_D630;
    case RC_ADDR(0x0000d632u): goto L_D632;
    case RC_ADDR(0x0000d634u): goto L_D634;
    case RC_ADDR(0x0000d636u): goto L_D636;
    case RC_ADDR(0x0000d638u): goto L_D638;
    case RC_ADDR(0x0000d63au): goto L_D63A;
    case RC_ADDR(0x0000d63cu): goto L_D63C;
    case RC_ADDR(0x0000d63eu): goto L_D63E;
    case RC_ADDR(0x0000d640u): goto L_D640;
    case RC_ADDR(0x0000d646u): goto L_D646;
    case RC_ADDR(0x0000d648u): goto L_D648;
    case RC_ADDR(0x0000d64cu): goto L_D64C;
    case RC_ADDR(0x0000d650u): goto L_D650;
    case RC_ADDR(0x0000d654u): goto L_D654;
    case RC_ADDR(0x0000d658u): goto L_D658;
    case RC_ADDR(0x0000d65cu): goto L_D65C;
    case RC_ADDR(0x0000d65eu): goto L_D65E;
    case RC_ADDR(0x0000d662u): goto L_D662;
    case RC_ADDR(0x0000d666u): goto L_D666;
    case RC_ADDR(0x0000d66au): goto L_D66A;
    case RC_ADDR(0x0000d66eu): goto L_D66E;
    case RC_ADDR(0x0000d672u): goto L_D672;
    case RC_ADDR(0x0000d676u): goto L_D676;
    case RC_ADDR(0x0000d67au): goto L_D67A;
    case RC_ADDR(0x0000d67eu): goto L_D67E;
    case RC_ADDR(0x0000d682u): goto L_D682;
    case RC_ADDR(0x0000d686u): goto L_D686;
    case RC_ADDR(0x0000d68au): goto L_D68A;
    case RC_ADDR(0x0000d68eu): goto L_D68E;
    case RC_ADDR(0x0000d692u): goto L_D692;
    case RC_ADDR(0x0000d694u): goto L_D694;
    case RC_ADDR(0x0000d698u): goto L_D698;
    case RC_ADDR(0x0000d69cu): goto L_D69C;
    case RC_ADDR(0x0000d69eu): goto L_D69E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_D606:
    /* 0000d606   4  link.w A5,#ffffff68 */
    c->pc = RC_ADDR(0x0000d606u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x98u;

L_D60A:
    /* 0000d60a   4  move.w (ffff83f4,A4),D0 */
    c->pc = RC_ADDR(0x0000d60au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c0cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D60E:
    /* 0000d60e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000d60eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_D610:
    /* 0000d610   2  bra 0000d632 */
    c->pc = RC_ADDR(0x0000d610u);
    rc_step(c, m, 10);
    goto L_D632;

L_D612:
    /* 0000d612   6  move.w (79e,A4),(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000d612u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x79eu));
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D618:
    /* 0000d618   2  bra 0000d640 */
    c->pc = RC_ADDR(0x0000d618u);
    rc_step(c, m, 10);
    goto L_D640;

L_D61A:
    /* 0000d61a   6  move.w (7a0,A4),(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000d61au);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7a0u));
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D620:
    /* 0000d620   2  bra 0000d640 */
    c->pc = RC_ADDR(0x0000d620u);
    rc_step(c, m, 10);
    goto L_D640;

L_D622:
    /* 0000d622   6  move.w (7a2,A4),(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000d622u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7a2u));
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D628:
    /* 0000d628   2  bra 0000d640 */
    c->pc = RC_ADDR(0x0000d628u);
    rc_step(c, m, 10);
    goto L_D640;

L_D62A:
    /* 0000d62a   6  move.w #3,(ffff83f4,A4) */
    c->pc = RC_ADDR(0x0000d62au);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] - 0x7c0cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D630:
    /* 0000d630   2  bra 0000d640 */
    c->pc = RC_ADDR(0x0000d630u);
    rc_step(c, m, 10);
    goto L_D640;

L_D632:
    /* 0000d632   2  tst.l D0 */
    c->pc = RC_ADDR(0x0000d632u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_D634:
    /* 0000d634   2  beq 0000d612 */
    c->pc = RC_ADDR(0x0000d634u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_D612; }

L_D636:
    /* 0000d636   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000d636u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_D638:
    /* 0000d638   2  beq 0000d61a */
    c->pc = RC_ADDR(0x0000d638u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_D61A; }

L_D63A:
    /* 0000d63a   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000d63au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_D63C:
    /* 0000d63c   2  beq 0000d622 */
    c->pc = RC_ADDR(0x0000d63cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_D622; }

L_D63E:
    /* 0000d63e   2  bra 0000d62a */
    c->pc = RC_ADDR(0x0000d63eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_D62A;

L_D640:
    /* 0000d640   6  cmpi.w #3,(ffff83f4,A4) */
    c->pc = RC_ADDR(0x0000d640u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c0cu));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_D646:
    /* 0000d646   2  bge 0000d694 */
    c->pc = RC_ADDR(0x0000d646u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_D694;

L_D648:
    /* 0000d648   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x0000d648u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D64C:
    /* 0000d64c   4  pea (0000d6a0) */
    c->pc = RC_ADDR(0x0000d64cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000d6a0u));

L_D650:
    /* 0000d650   4  pea (ffffff68,A5) */
    c->pc = RC_ADDR(0x0000d650u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x98u));

L_D654:
    /* 0000d654   4  jsr (ffff82f6,A4) */
    c->pc = RC_ADDR(0x0000d654u);
    rc_step(c, m, 18);
    /* vector 126 */
    rc_push32(c, m, RC_ADDR(0x0000d658u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023decu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022e58u);
    return;

L_D658:
    /* 0000d658   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000d658u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_D65C:
    /* 0000d65c   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000d65cu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_D65E:
    /* 0000d65e   4  pea (ffffff68,A5) */
    c->pc = RC_ADDR(0x0000d65eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x98u));

L_D662:
    /* 0000d662   4  pea (e64,A4) */
    c->pc = RC_ADDR(0x0000d662u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xe64u));

L_D666:
    /* 0000d666   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000d666u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D66A:
    /* 0000d66a   4  jsr (ffff8032,A4) */
    c->pc = RC_ADDR(0x0000d66au);
    rc_step(c, m, 18);
    /* vector 8 */
    rc_push32(c, m, RC_ADDR(0x0000d66eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b28u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000022d0u);
    return;

L_D66E:
    /* 0000d66e   4  lea (10,A7),A7 */
    c->pc = RC_ADDR(0x0000d66eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x10u);

L_D672:
    /* 0000d672   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x0000d672u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D676:
    /* 0000d676   4  pea (0000d712) */
    c->pc = RC_ADDR(0x0000d676u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000d712u));

L_D67A:
    /* 0000d67a   4  pea (ffffff68,A5) */
    c->pc = RC_ADDR(0x0000d67au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x98u));

L_D67E:
    /* 0000d67e   4  jsr (ffff82f6,A4) */
    c->pc = RC_ADDR(0x0000d67eu);
    rc_step(c, m, 18);
    /* vector 126 */
    rc_push32(c, m, RC_ADDR(0x0000d682u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023decu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022e58u);
    return;

L_D682:
    /* 0000d682   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000d682u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_D686:
    /* 0000d686   4  pea (ffffff68,A5) */
    c->pc = RC_ADDR(0x0000d686u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x98u));

L_D68A:
    /* 0000d68a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000d68au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D68E:
    /* 0000d68e   4  jsr (ffff8038,A4) */
    c->pc = RC_ADDR(0x0000d68eu);
    rc_step(c, m, 18);
    /* vector 9 */
    rc_push32(c, m, RC_ADDR(0x0000d692u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000024acu);
    return;

L_D692:
    /* 0000d692   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000d692u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_D694:
    /* 0000d694   4  addq.w #1,(ffff83f4,A4) */
    c->pc = RC_ADDR(0x0000d694u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x7c0cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_D698:
    /* 0000d698   4  clr.w (ffff9916,A4) */
    c->pc = RC_ADDR(0x0000d698u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x66eau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D69C:
    /* 0000d69c   2  unlk A5 */
    c->pc = RC_ADDR(0x0000d69cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_D69E:
    /* 0000d69e   2  rts */
    c->pc = RC_ADDR(0x0000d69eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
