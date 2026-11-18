/* fn_00005704 - 68 byte(s), 17 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00005704(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00005704u): goto L_5704;
    case RC_ADDR(0x00005708u): goto L_5708;
    case RC_ADDR(0x0000570eu): goto L_570E;
    case RC_ADDR(0x00005714u): goto L_5714;
    case RC_ADDR(0x00005718u): goto L_5718;
    case RC_ADDR(0x0000571cu): goto L_571C;
    case RC_ADDR(0x00005720u): goto L_5720;
    case RC_ADDR(0x00005722u): goto L_5722;
    case RC_ADDR(0x00005726u): goto L_5726;
    case RC_ADDR(0x0000572au): goto L_572A;
    case RC_ADDR(0x0000572eu): goto L_572E;
    case RC_ADDR(0x00005732u): goto L_5732;
    case RC_ADDR(0x00005734u): goto L_5734;
    case RC_ADDR(0x00005738u): goto L_5738;
    case RC_ADDR(0x0000573eu): goto L_573E;
    case RC_ADDR(0x00005744u): goto L_5744;
    case RC_ADDR(0x00005746u): goto L_5746;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5704:
    /* 00005704   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00005704u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_5708:
    /* 00005708   6  move.w #4,(850,A4) */
    c->pc = RC_ADDR(0x00005708u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x850u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_570E:
    /* 0000570e   6  move.w #139,(852,A4) */
    c->pc = RC_ADDR(0x0000570eu);
    rc_step(c, m, 16);
    t0 = 0x00000139u;
    rc_wr16(c, m, (c->a[4] + 0x852u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5714:
    /* 00005714   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00005714u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5718:
    /* 00005718   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00005718u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_571C:
    /* 0000571c   4  jsr (0000564c) */
    c->pc = RC_ADDR(0x0000571cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005720u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000564cu);
    return;

L_5720:
    /* 00005720   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00005720u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_5722:
    /* 00005722   4  jsr (ffff820c,A4) */
    c->pc = RC_ADDR(0x00005722u);
    rc_step(c, m, 18);
    /* vector 87 */
    rc_push32(c, m, RC_ADDR(0x00005726u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f260u);
    return;

L_5726:
    /* 00005726   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00005726u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_572A:
    /* 0000572a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000572au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_572E:
    /* 0000572e   4  jsr (0000564c) */
    c->pc = RC_ADDR(0x0000572eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005732u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000564cu);
    return;

L_5732:
    /* 00005732   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00005732u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_5734:
    /* 00005734   4  jsr (ffff804a,A4) */
    c->pc = RC_ADDR(0x00005734u);
    rc_step(c, m, 18);
    /* vector 12 */
    rc_push32(c, m, RC_ADDR(0x00005738u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b40u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000036d2u);
    return;

L_5738:
    /* 00005738   6  move.w #13,(850,A4) */
    c->pc = RC_ADDR(0x00005738u);
    rc_step(c, m, 16);
    t0 = 0x00000013u;
    rc_wr16(c, m, (c->a[4] + 0x850u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_573E:
    /* 0000573e   6  move.w #12c,(852,A4) */
    c->pc = RC_ADDR(0x0000573eu);
    rc_step(c, m, 16);
    t0 = 0x0000012cu;
    rc_wr16(c, m, (c->a[4] + 0x852u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5744:
    /* 00005744   2  unlk A5 */
    c->pc = RC_ADDR(0x00005744u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_5746:
    /* 00005746   2  rts */
    c->pc = RC_ADDR(0x00005746u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
