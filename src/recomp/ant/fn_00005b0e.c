/* fn_00005b0e - 80 byte(s), 22 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00005b0e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00005b0eu): goto L_5B0E;
    case RC_ADDR(0x00005b12u): goto L_5B12;
    case RC_ADDR(0x00005b16u): goto L_5B16;
    case RC_ADDR(0x00005b18u): goto L_5B18;
    case RC_ADDR(0x00005b1cu): goto L_5B1C;
    case RC_ADDR(0x00005b20u): goto L_5B20;
    case RC_ADDR(0x00005b22u): goto L_5B22;
    case RC_ADDR(0x00005b26u): goto L_5B26;
    case RC_ADDR(0x00005b2au): goto L_5B2A;
    case RC_ADDR(0x00005b2eu): goto L_5B2E;
    case RC_ADDR(0x00005b30u): goto L_5B30;
    case RC_ADDR(0x00005b34u): goto L_5B34;
    case RC_ADDR(0x00005b38u): goto L_5B38;
    case RC_ADDR(0x00005b3cu): goto L_5B3C;
    case RC_ADDR(0x00005b42u): goto L_5B42;
    case RC_ADDR(0x00005b46u): goto L_5B46;
    case RC_ADDR(0x00005b48u): goto L_5B48;
    case RC_ADDR(0x00005b4eu): goto L_5B4E;
    case RC_ADDR(0x00005b54u): goto L_5B54;
    case RC_ADDR(0x00005b58u): goto L_5B58;
    case RC_ADDR(0x00005b5au): goto L_5B5A;
    case RC_ADDR(0x00005b5cu): goto L_5B5C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5B0E:
    /* 00005b0e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00005b0eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_5B12:
    /* 00005b12   4  movem.l { D3 D4 D5 D6 D7 A4 A5 A6 },-(SP) */
    c->pc = RC_ADDR(0x00005b12u);
    rc_step(c, m, 8);
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

L_5B16:
    /* 00005b16   2  movea.l (A1),A4 */
    c->pc = RC_ADDR(0x00005b16u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[1]);
    c->a[4] = t0;

L_5B18:
    /* 00005b18   4  jsr (0000ba08) */
    c->pc = RC_ADDR(0x00005b18u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005b1cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000ba08u);
    return;

L_5B1C:
    /* 00005b1c   4  tst.w (ffff83ec,A4) */
    c->pc = RC_ADDR(0x00005b1cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c14u));
    rc_set_nzvc(c, t0, RC_W);

L_5B20:
    /* 00005b20   2  bne 00005b38 */
    c->pc = RC_ADDR(0x00005b20u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_5B38;

L_5B22:
    /* 00005b22   4  addq.w #1,(ffffd5b2,A4) */
    c->pc = RC_ADDR(0x00005b22u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x2a4eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_5B26:
    /* 00005b26   4  move.w (ffffd5b2,A4),D0 */
    c->pc = RC_ADDR(0x00005b26u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a4eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5B2A:
    /* 00005b2a   4  cmp.w (ffffd5b0,A4),D0 */
    c->pc = RC_ADDR(0x00005b2au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a50u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_5B2E:
    /* 00005b2e   2  bne 00005b38 */
    c->pc = RC_ADDR(0x00005b2eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_5B38;

L_5B30:
    /* 00005b30   4  clr.w (ffffd5b2,A4) */
    c->pc = RC_ADDR(0x00005b30u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2a4eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5B34:
    /* 00005b34   4  bsr 00005a40 */
    c->pc = RC_ADDR(0x00005b34u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005b38u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005a40u);
    return;

L_5B38:
    /* 00005b38   4  clr.w (ffffd5b6,A4) */
    c->pc = RC_ADDR(0x00005b38u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2a4au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5B3C:
    /* 00005b3c   6  move.b (00bfe001).l,D0 */
    c->pc = RC_ADDR(0x00005b3cu);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, 0x00bfe001u);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_5B42:
    /* 00005b42   4  btst #6,D0 */
    c->pc = RC_ADDR(0x00005b42u);
    rc_step(c, m, 10);
    t4 = 0x00000006u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_5B46:
    /* 00005b46   2  bne 00005b54 */
    c->pc = RC_ADDR(0x00005b46u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_5B54;

L_5B48:
    /* 00005b48   6  move.w #1,(ffff83ec,A4) */
    c->pc = RC_ADDR(0x00005b48u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5B4E:
    /* 00005b4e   6  move.w #1,(ffffd5b6,A4) */
    c->pc = RC_ADDR(0x00005b4eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x2a4au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5B54:
    /* 00005b54   4  movem.l (SP)+,{ D1 D2 D3 A0 A1 A2 A3 A4 } */
    c->pc = RC_ADDR(0x00005b54u);
    rc_step(c, m, 12);
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

L_5B58:
    /* 00005b58   2  clr.l D0 */
    c->pc = RC_ADDR(0x00005b58u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5B5A:
    /* 00005b5a   2  unlk A5 */
    c->pc = RC_ADDR(0x00005b5au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_5B5C:
    /* 00005b5c   2  rts */
    c->pc = RC_ADDR(0x00005b5cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
