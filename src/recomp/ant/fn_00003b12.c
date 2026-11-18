/* fn_00003b12 - 116 byte(s), 32 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00003b12(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00003b12u): goto L_3B12;
    case RC_ADDR(0x00003b16u): goto L_3B16;
    case RC_ADDR(0x00003b1au): goto L_3B1A;
    case RC_ADDR(0x00003b1eu): goto L_3B1E;
    case RC_ADDR(0x00003b24u): goto L_3B24;
    case RC_ADDR(0x00003b26u): goto L_3B26;
    case RC_ADDR(0x00003b2au): goto L_3B2A;
    case RC_ADDR(0x00003b2cu): goto L_3B2C;
    case RC_ADDR(0x00003b30u): goto L_3B30;
    case RC_ADDR(0x00003b34u): goto L_3B34;
    case RC_ADDR(0x00003b36u): goto L_3B36;
    case RC_ADDR(0x00003b38u): goto L_3B38;
    case RC_ADDR(0x00003b3au): goto L_3B3A;
    case RC_ADDR(0x00003b3cu): goto L_3B3C;
    case RC_ADDR(0x00003b40u): goto L_3B40;
    case RC_ADDR(0x00003b42u): goto L_3B42;
    case RC_ADDR(0x00003b46u): goto L_3B46;
    case RC_ADDR(0x00003b48u): goto L_3B48;
    case RC_ADDR(0x00003b4au): goto L_3B4A;
    case RC_ADDR(0x00003b4eu): goto L_3B4E;
    case RC_ADDR(0x00003b50u): goto L_3B50;
    case RC_ADDR(0x00003b54u): goto L_3B54;
    case RC_ADDR(0x00003b58u): goto L_3B58;
    case RC_ADDR(0x00003b5eu): goto L_3B5E;
    case RC_ADDR(0x00003b60u): goto L_3B60;
    case RC_ADDR(0x00003b64u): goto L_3B64;
    case RC_ADDR(0x00003b68u): goto L_3B68;
    case RC_ADDR(0x00003b6eu): goto L_3B6E;
    case RC_ADDR(0x00003b74u): goto L_3B74;
    case RC_ADDR(0x00003b7cu): goto L_3B7C;
    case RC_ADDR(0x00003b82u): goto L_3B82;
    case RC_ADDR(0x00003b84u): goto L_3B84;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_3B12:
    /* 00003b12   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00003b12u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_3B16:
    /* 00003b16   4  lea (ffff88a4,A4),A0 */
    c->pc = RC_ADDR(0x00003b16u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x775cu);

L_3B1A:
    /* 00003b1a   4  move.l A0,(92a,A4) */
    c->pc = RC_ADDR(0x00003b1au);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x92au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3B1E:
    /* 00003b1e   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00003b1eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3B24:
    /* 00003b24   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00003b24u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_3B26:
    /* 00003b26   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00003b26u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3B2A:
    /* 00003b2a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00003b2au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_3B2C:
    /* 00003b2c   4  lea (92a,A4),A0 */
    c->pc = RC_ADDR(0x00003b2cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x92au);

L_3B30:
    /* 00003b30   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00003b30u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3B34:
    /* 00003b34   2  subq.w #1,D1 */
    c->pc = RC_ADDR(0x00003b34u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_3B36:
    /* 00003b36   2  moveq #0,D2 */
    c->pc = RC_ADDR(0x00003b36u);
    rc_step(c, m, 4);
    c->d[2] = 0x00000000u;
    rc_set_nzvc(c, c->d[2], RC_L);

L_3B38:
    /* 00003b38   2  move.w D1,D2 */
    c->pc = RC_ADDR(0x00003b38u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3B3A:
    /* 00003b3a   2  asl.l #2,D2 */
    c->pc = RC_ADDR(0x00003b3au);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 2, RC_L), RC_L));

L_3B3C:
    /* 00003b3c   4  lea (92a,A4),A1 */
    c->pc = RC_ADDR(0x00003b3cu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x92au);

L_3B40:
    /* 00003b40   2  moveq #27,D1 */
    c->pc = RC_ADDR(0x00003b40u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000027u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_3B42:
    /* 00003b42   4  sub.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00003b42u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_3B46:
    /* 00003b46   2  moveq #0,D3 */
    c->pc = RC_ADDR(0x00003b46u);
    rc_step(c, m, 4);
    c->d[3] = 0x00000000u;
    rc_set_nzvc(c, c->d[3], RC_L);

L_3B48:
    /* 00003b48   2  move.w D1,D3 */
    c->pc = RC_ADDR(0x00003b48u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3B4A:
    /* 00003b4a   4  movea.l (0,A1,D2.w),A6 */
    c->pc = RC_ADDR(0x00003b4au);
    rc_step(c, m, 18);
    t4 = c->d[2];
    t0 = rc_rd32(c, m, (c->a[1] + 0x0u + t4));
    c->a[6] = t0;

L_3B4E:
    /* 00003b4e   2  adda.l D3,A6 */
    c->pc = RC_ADDR(0x00003b4eu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 3, RC_L);
    c->a[6] += t0;

L_3B50:
    /* 00003b50   4  move.l A6,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00003b50u);
    rc_step(c, m, 18);
    t0 = rc_a_get(c, 6, RC_L);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3B54:
    /* 00003b54   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00003b54u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_3B58:
    /* 00003b58   6  cmpi.w #27,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00003b58u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000027u);

L_3B5E:
    /* 00003b5e   2  bcs 00003b24 */
    c->pc = RC_ADDR(0x00003b5eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_3B24; }

L_3B60:
    /* 00003b60   4  clr.w (fffff798,A4) */
    c->pc = RC_ADDR(0x00003b60u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x868u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3B64:
    /* 00003b64   4  clr.w (fffff7b2,A4) */
    c->pc = RC_ADDR(0x00003b64u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x84eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3B68:
    /* 00003b68   6  move.w #c4,(fffff79a,A4) */
    c->pc = RC_ADDR(0x00003b68u);
    rc_step(c, m, 16);
    t0 = 0x000000c4u;
    rc_wr16(c, m, (c->a[4] - 0x866u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3B6E:
    /* 00003b6e   6  move.w #b1,(fffff79c,A4) */
    c->pc = RC_ADDR(0x00003b6eu);
    rc_step(c, m, 16);
    t0 = 0x000000b1u;
    rc_wr16(c, m, (c->a[4] - 0x864u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3B74:
    /* 00003b74   8  move.l #ffffff39,(fffff7ae,A4) */
    c->pc = RC_ADDR(0x00003b74u);
    rc_step(c, m, 24);
    t0 = 0xffffff39u;
    rc_wr32(c, m, (c->a[4] - 0x852u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3B7C:
    /* 00003b7c   6  move.w #1,(fffff7b4,A4) */
    c->pc = RC_ADDR(0x00003b7cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x84cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3B82:
    /* 00003b82   2  unlk A5 */
    c->pc = RC_ADDR(0x00003b82u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_3B84:
    /* 00003b84   2  rts */
    c->pc = RC_ADDR(0x00003b84u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
