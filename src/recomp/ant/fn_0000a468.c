/* fn_0000a468 - 72 byte(s), 20 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000a468(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x0000a468u): goto L_A468;
    case RC_ADDR(0x0000a46cu): goto L_A46C;
    case RC_ADDR(0x0000a472u): goto L_A472;
    case RC_ADDR(0x0000a476u): goto L_A476;
    case RC_ADDR(0x0000a47au): goto L_A47A;
    case RC_ADDR(0x0000a47cu): goto L_A47C;
    case RC_ADDR(0x0000a480u): goto L_A480;
    case RC_ADDR(0x0000a482u): goto L_A482;
    case RC_ADDR(0x0000a486u): goto L_A486;
    case RC_ADDR(0x0000a48au): goto L_A48A;
    case RC_ADDR(0x0000a48eu): goto L_A48E;
    case RC_ADDR(0x0000a492u): goto L_A492;
    case RC_ADDR(0x0000a494u): goto L_A494;
    case RC_ADDR(0x0000a498u): goto L_A498;
    case RC_ADDR(0x0000a49cu): goto L_A49C;
    case RC_ADDR(0x0000a4a0u): goto L_A4A0;
    case RC_ADDR(0x0000a4a4u): goto L_A4A4;
    case RC_ADDR(0x0000a4a6u): goto L_A4A6;
    case RC_ADDR(0x0000a4acu): goto L_A4AC;
    case RC_ADDR(0x0000a4aeu): goto L_A4AE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_A468:
    /* 0000a468   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000a468u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_A46C:
    /* 0000a46c   6  move.w #136,(fffffa24,A4) */
    c->pc = RC_ADDR(0x0000a46cu);
    rc_step(c, m, 16);
    t0 = 0x00000136u;
    rc_wr16(c, m, (c->a[4] - 0x5dcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A472:
    /* 0000a472   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000a472u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A476:
    /* 0000a476   4  jsr (00005596) */
    c->pc = RC_ADDR(0x0000a476u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000a47au));
    rc_depth++;
    c->pc = RC_ADDR(0x00005596u);
    return;

L_A47A:
    /* 0000a47a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000a47au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_A47C:
    /* 0000a47c   4  move.w #c5,D1 */
    c->pc = RC_ADDR(0x0000a47cu);
    rc_step(c, m, 8);
    t0 = 0x000000c5u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A480:
    /* 0000a480   2  sub.w D0,D1 */
    c->pc = RC_ADDR(0x0000a480u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_A482:
    /* 0000a482   4  move.w D1,(ffffd346,A4) */
    c->pc = RC_ADDR(0x0000a482u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x2cbau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A486:
    /* 0000a486   4  move.w #8,-(A7) */
    c->pc = RC_ADDR(0x0000a486u);
    rc_step(c, m, 12);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A48A:
    /* 0000a48a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000a48au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A48E:
    /* 0000a48e   4  jsr (ffff8074,A4) */
    c->pc = RC_ADDR(0x0000a48eu);
    rc_step(c, m, 18);
    /* vector 19 */
    rc_push32(c, m, RC_ADDR(0x0000a492u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b6au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000564cu);
    return;

L_A492:
    /* 0000a492   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0000a492u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_A494:
    /* 0000a494   4  jsr (ffff820c,A4) */
    c->pc = RC_ADDR(0x0000a494u);
    rc_step(c, m, 18);
    /* vector 87 */
    rc_push32(c, m, RC_ADDR(0x0000a498u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f260u);
    return;

L_A498:
    /* 0000a498   4  move.w #8,-(A7) */
    c->pc = RC_ADDR(0x0000a498u);
    rc_step(c, m, 12);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A49C:
    /* 0000a49c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000a49cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A4A0:
    /* 0000a4a0   4  jsr (ffff8074,A4) */
    c->pc = RC_ADDR(0x0000a4a0u);
    rc_step(c, m, 18);
    /* vector 19 */
    rc_push32(c, m, RC_ADDR(0x0000a4a4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b6au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000564cu);
    return;

L_A4A4:
    /* 0000a4a4   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0000a4a4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_A4A6:
    /* 0000a4a6   6  move.w #118,(fffffa24,A4) */
    c->pc = RC_ADDR(0x0000a4a6u);
    rc_step(c, m, 16);
    t0 = 0x00000118u;
    rc_wr16(c, m, (c->a[4] - 0x5dcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A4AC:
    /* 0000a4ac   2  unlk A5 */
    c->pc = RC_ADDR(0x0000a4acu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_A4AE:
    /* 0000a4ae   2  rts */
    c->pc = RC_ADDR(0x0000a4aeu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
