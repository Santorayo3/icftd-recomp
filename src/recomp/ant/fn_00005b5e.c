/* fn_00005b5e - 112 byte(s), 28 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00005b5e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00005b5eu): goto L_5B5E;
    case RC_ADDR(0x00005b62u): goto L_5B62;
    case RC_ADDR(0x00005b66u): goto L_5B66;
    case RC_ADDR(0x00005b6cu): goto L_5B6C;
    case RC_ADDR(0x00005b70u): goto L_5B70;
    case RC_ADDR(0x00005b76u): goto L_5B76;
    case RC_ADDR(0x00005b7au): goto L_5B7A;
    case RC_ADDR(0x00005b7eu): goto L_5B7E;
    case RC_ADDR(0x00005b80u): goto L_5B80;
    case RC_ADDR(0x00005b84u): goto L_5B84;
    case RC_ADDR(0x00005b88u): goto L_5B88;
    case RC_ADDR(0x00005b8eu): goto L_5B8E;
    case RC_ADDR(0x00005b92u): goto L_5B92;
    case RC_ADDR(0x00005b98u): goto L_5B98;
    case RC_ADDR(0x00005b9cu): goto L_5B9C;
    case RC_ADDR(0x00005ba0u): goto L_5BA0;
    case RC_ADDR(0x00005ba4u): goto L_5BA4;
    case RC_ADDR(0x00005ba8u): goto L_5BA8;
    case RC_ADDR(0x00005bacu): goto L_5BAC;
    case RC_ADDR(0x00005bb0u): goto L_5BB0;
    case RC_ADDR(0x00005bb4u): goto L_5BB4;
    case RC_ADDR(0x00005bb8u): goto L_5BB8;
    case RC_ADDR(0x00005bbcu): goto L_5BBC;
    case RC_ADDR(0x00005bc0u): goto L_5BC0;
    case RC_ADDR(0x00005bc4u): goto L_5BC4;
    case RC_ADDR(0x00005bc8u): goto L_5BC8;
    case RC_ADDR(0x00005bcau): goto L_5BCA;
    case RC_ADDR(0x00005bccu): goto L_5BCC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5B5E:
    /* 00005b5e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00005b5eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_5B62:
    /* 00005b62   4  move.l A4,(ffffd5ac,A4) */
    c->pc = RC_ADDR(0x00005b62u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 4, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2a54u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5B66:
    /* 00005b66   6  move.w #50,(ffffd5b0,A4) */
    c->pc = RC_ADDR(0x00005b66u);
    rc_step(c, m, 16);
    t0 = 0x00000050u;
    rc_wr16(c, m, (c->a[4] - 0x2a50u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5B6C:
    /* 00005b6c   4  clr.w (ffffd5b2,A4) */
    c->pc = RC_ADDR(0x00005b6cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2a4eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5B70:
    /* 00005b70   6  pea (00010001).l */
    c->pc = RC_ADDR(0x00005b70u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_5B76:
    /* 00005b76   4  pea (00000016).l */
    c->pc = RC_ADDR(0x00005b76u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000016u);

L_5B7A:
    /* 00005b7a   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x00005b7au);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x00005b7eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_5B7E:
    /* 00005b7e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00005b7eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_5B80:
    /* 00005b80   4  move.l D0,(ffffd5a8,A4) */
    c->pc = RC_ADDR(0x00005b80u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2a58u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5B84:
    /* 00005b84   4  movea.l (ffffd5a8,A4),A0 */
    c->pc = RC_ADDR(0x00005b84u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2a58u));
    c->a[0] = t0;

L_5B88:
    /* 00005b88   6  move.b #2,(8,A0) */
    c->pc = RC_ADDR(0x00005b88u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr8(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_5B8E:
    /* 00005b8e   4  movea.l (ffffd5a8,A4),A0 */
    c->pc = RC_ADDR(0x00005b8eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2a58u));
    c->a[0] = t0;

L_5B92:
    /* 00005b92   6  move.b #c4,(9,A0) */
    c->pc = RC_ADDR(0x00005b92u);
    rc_step(c, m, 16);
    t0 = 0x000000c4u;
    rc_wr8(c, m, (c->a[0] + 0x9u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_5B98:
    /* 00005b98   4  movea.l (ffffd5a8,A4),A0 */
    c->pc = RC_ADDR(0x00005b98u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2a58u));
    c->a[0] = t0;

L_5B9C:
    /* 00005b9c   4  lea (00005bce),A1 */
    c->pc = RC_ADDR(0x00005b9cu);
    rc_step(c, m, 8);
    c->a[1] = RC_ADDR(0x00005bceu);

L_5BA0:
    /* 00005ba0   4  move.l A1,(a,A0) */
    c->pc = RC_ADDR(0x00005ba0u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[0] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5BA4:
    /* 00005ba4   4  lea (ffffd5ac,A4),A0 */
    c->pc = RC_ADDR(0x00005ba4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2a54u);

L_5BA8:
    /* 00005ba8   4  movea.l (ffffd5a8,A4),A1 */
    c->pc = RC_ADDR(0x00005ba8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2a58u));
    c->a[1] = t0;

L_5BAC:
    /* 00005bac   4  move.l A0,(e,A1) */
    c->pc = RC_ADDR(0x00005bacu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5BB0:
    /* 00005bb0   4  lea (00005b0e),A0 */
    c->pc = RC_ADDR(0x00005bb0u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x00005b0eu);

L_5BB4:
    /* 00005bb4   4  movea.l (ffffd5a8,A4),A1 */
    c->pc = RC_ADDR(0x00005bb4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2a58u));
    c->a[1] = t0;

L_5BB8:
    /* 00005bb8   4  move.l A0,(12,A1) */
    c->pc = RC_ADDR(0x00005bb8u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5BBC:
    /* 00005bbc   4  move.l (ffffd5a8,A4),-(A7) */
    c->pc = RC_ADDR(0x00005bbcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2a58u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5BC0:
    /* 00005bc0   4  pea (00000005).l */
    c->pc = RC_ADDR(0x00005bc0u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000005u);

L_5BC4:
    /* 00005bc4   4  jsr (ffff8350,A4) */
    c->pc = RC_ADDR(0x00005bc4u);
    rc_step(c, m, 18);
    /* vector 141 */
    rc_push32(c, m, RC_ADDR(0x00005bc8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e46u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002355au);
    return;

L_5BC8:
    /* 00005bc8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00005bc8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_5BCA:
    /* 00005bca   2  unlk A5 */
    c->pc = RC_ADDR(0x00005bcau);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_5BCC:
    /* 00005bcc   2  rts */
    c->pc = RC_ADDR(0x00005bccu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
