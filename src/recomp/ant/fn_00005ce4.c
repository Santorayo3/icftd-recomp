/* fn_00005ce4 - 160 byte(s), 45 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00005ce4(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00005ce4u): goto L_5CE4;
    case RC_ADDR(0x00005ce8u): goto L_5CE8;
    case RC_ADDR(0x00005ceau): goto L_5CEA;
    case RC_ADDR(0x00005ceeu): goto L_5CEE;
    case RC_ADDR(0x00005cf0u): goto L_5CF0;
    case RC_ADDR(0x00005cf2u): goto L_5CF2;
    case RC_ADDR(0x00005cf4u): goto L_5CF4;
    case RC_ADDR(0x00005cf6u): goto L_5CF6;
    case RC_ADDR(0x00005cfau): goto L_5CFA;
    case RC_ADDR(0x00005cfcu): goto L_5CFC;
    case RC_ADDR(0x00005cfeu): goto L_5CFE;
    case RC_ADDR(0x00005d04u): goto L_5D04;
    case RC_ADDR(0x00005d0au): goto L_5D0A;
    case RC_ADDR(0x00005d0eu): goto L_5D0E;
    case RC_ADDR(0x00005d10u): goto L_5D10;
    case RC_ADDR(0x00005d16u): goto L_5D16;
    case RC_ADDR(0x00005d18u): goto L_5D18;
    case RC_ADDR(0x00005d1eu): goto L_5D1E;
    case RC_ADDR(0x00005d22u): goto L_5D22;
    case RC_ADDR(0x00005d28u): goto L_5D28;
    case RC_ADDR(0x00005d2cu): goto L_5D2C;
    case RC_ADDR(0x00005d30u): goto L_5D30;
    case RC_ADDR(0x00005d34u): goto L_5D34;
    case RC_ADDR(0x00005d36u): goto L_5D36;
    case RC_ADDR(0x00005d3au): goto L_5D3A;
    case RC_ADDR(0x00005d3eu): goto L_5D3E;
    case RC_ADDR(0x00005d40u): goto L_5D40;
    case RC_ADDR(0x00005d42u): goto L_5D42;
    case RC_ADDR(0x00005d46u): goto L_5D46;
    case RC_ADDR(0x00005d48u): goto L_5D48;
    case RC_ADDR(0x00005d4au): goto L_5D4A;
    case RC_ADDR(0x00005d4eu): goto L_5D4E;
    case RC_ADDR(0x00005d52u): goto L_5D52;
    case RC_ADDR(0x00005d58u): goto L_5D58;
    case RC_ADDR(0x00005d5au): goto L_5D5A;
    case RC_ADDR(0x00005d60u): goto L_5D60;
    case RC_ADDR(0x00005d64u): goto L_5D64;
    case RC_ADDR(0x00005d68u): goto L_5D68;
    case RC_ADDR(0x00005d6cu): goto L_5D6C;
    case RC_ADDR(0x00005d6eu): goto L_5D6E;
    case RC_ADDR(0x00005d72u): goto L_5D72;
    case RC_ADDR(0x00005d76u): goto L_5D76;
    case RC_ADDR(0x00005d7au): goto L_5D7A;
    case RC_ADDR(0x00005d7eu): goto L_5D7E;
    case RC_ADDR(0x00005d80u): goto L_5D80;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5CE4:
    /* 00005ce4   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x00005ce4u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_5CE8:
    /* 00005ce8   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00005ce8u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5CEA:
    /* 00005cea   4  tst.w (ffff8b8a,A4) */
    c->pc = RC_ADDR(0x00005ceau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7476u));
    rc_set_nzvc(c, t0, RC_W);

L_5CEE:
    /* 00005cee   2  beq 00005cf6 */
    c->pc = RC_ADDR(0x00005ceeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_5CF6;

L_5CF0:
    /* 00005cf0   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x00005cf0u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_5CF2:
    /* 00005cf2   2  unlk A5 */
    c->pc = RC_ADDR(0x00005cf2u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_5CF4:
    /* 00005cf4   2  rts */
    c->pc = RC_ADDR(0x00005cf4u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_5CF6:
    /* 00005cf6   4  tst.w (ffffd5b6,A4) */
    /* a flag wait: rc_wait runs it natively and returns 1 when its exit branch is taken;
     * 0 means the three instructions below run instead (the reference path). */
    if (rc_wait(c, m, RC_ADDR(0x00005cf6u), 12,
                RC_ADDR(0x00005cfau), 10, 7,
                RC_ADDR(0x00005cfcu), 10,
                (c->a[4] - 0x2a4au), RC_W))
        goto L_5CFE;
    c->pc = RC_ADDR(0x00005cf6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a4au));
    rc_set_nzvc(c, t0, RC_W);

L_5CFA:
    /* 00005cfa   2  beq 00005cfe */
    c->pc = RC_ADDR(0x00005cfau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_5CFE;

L_5CFC:
    /* 00005cfc   2  bra 00005cf6 */
    c->pc = RC_ADDR(0x00005cfcu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_5CF6;

L_5CFE:
    /* 00005cfe   6  move.w #1,(ffff83ea,A4) */
    c->pc = RC_ADDR(0x00005cfeu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c16u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5D04:
    /* 00005d04   6  move.l (fffffa20,A4),(fffffffa,A5) */
    c->pc = RC_ADDR(0x00005d04u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5e0u));
    rc_wr32(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5D0A:
    /* 00005d0a   4  tst.w (fffff866,A4) */
    c->pc = RC_ADDR(0x00005d0au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x79au));
    rc_set_nzvc(c, t0, RC_W);

L_5D0E:
    /* 00005d0e   2  beq 00005d18 */
    c->pc = RC_ADDR(0x00005d0eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_5D18;

L_5D10:
    /* 00005d10   6  move.w #8,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00005d10u);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5D16:
    /* 00005d16   2  bra 00005d1e */
    c->pc = RC_ADDR(0x00005d16u);
    rc_step(c, m, 10);
    goto L_5D1E;

L_5D18:
    /* 00005d18   6  move.w #1b,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00005d18u);
    rc_step(c, m, 16);
    t0 = 0x0000001bu;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5D1E:
    /* 00005d1e   4  movea.l (ffffd340,A4),A2 */
    c->pc = RC_ADDR(0x00005d1eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    c->a[2] = t0;

L_5D22:
    /* 00005d22   6  move.l (ffffd33c,A4),(ffffd340,A4) */
    c->pc = RC_ADDR(0x00005d22u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc4u));
    rc_wr32(c, m, (c->a[4] - 0x2cc0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5D28:
    /* 00005d28   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x00005d28u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5D2C:
    /* 00005d2c   4  pea (00005d84) */
    c->pc = RC_ADDR(0x00005d2cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00005d84u));

L_5D30:
    /* 00005d30   4  jsr (ffff8074,A4) */
    c->pc = RC_ADDR(0x00005d30u);
    rc_step(c, m, 18);
    /* vector 19 */
    rc_push32(c, m, RC_ADDR(0x00005d34u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b6au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000564cu);
    return;

L_5D34:
    /* 00005d34   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00005d34u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_5D36:
    /* 00005d36   4  move.l A2,(ffffd340,A4) */
    c->pc = RC_ADDR(0x00005d36u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2cc0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5D3A:
    /* 00005d3a   4  tst.w (ffffd5b6,A4) */
    /* a flag wait: rc_wait runs it natively and returns 1 when its exit branch is taken;
     * 0 means the three instructions below run instead (the reference path). */
    if (rc_wait(c, m, RC_ADDR(0x00005d3au), 12,
                RC_ADDR(0x00005d3eu), 10, 6,
                RC_ADDR(0x00005d40u), 10,
                (c->a[4] - 0x2a4au), RC_W))
        goto L_5D42;
    c->pc = RC_ADDR(0x00005d3au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a4au));
    rc_set_nzvc(c, t0, RC_W);

L_5D3E:
    /* 00005d3e   2  bne 00005d42 */
    c->pc = RC_ADDR(0x00005d3eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_5D42;

L_5D40:
    /* 00005d40   2  bra 00005d3a */
    c->pc = RC_ADDR(0x00005d40u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_5D3A;

L_5D42:
    /* 00005d42   4  tst.w (ffffd5b6,A4) */
    /* a flag wait: rc_wait runs it natively and returns 1 when its exit branch is taken;
     * 0 means the three instructions below run instead (the reference path). */
    if (rc_wait(c, m, RC_ADDR(0x00005d42u), 12,
                RC_ADDR(0x00005d46u), 10, 7,
                RC_ADDR(0x00005d48u), 10,
                (c->a[4] - 0x2a4au), RC_W))
        goto L_5D4A;
    c->pc = RC_ADDR(0x00005d42u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a4au));
    rc_set_nzvc(c, t0, RC_W);

L_5D46:
    /* 00005d46   2  beq 00005d4a */
    c->pc = RC_ADDR(0x00005d46u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_5D4A;

L_5D48:
    /* 00005d48   2  bra 00005d42 */
    c->pc = RC_ADDR(0x00005d48u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_5D42;

L_5D4A:
    /* 00005d4a   4  clr.w (ffff83ec,A4) */
    c->pc = RC_ADDR(0x00005d4au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c14u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5D4E:
    /* 00005d4e   4  clr.w (ffff83ea,A4) */
    c->pc = RC_ADDR(0x00005d4eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c16u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5D52:
    /* 00005d52   6  cmpi.w #c7,(ffffd346,A4) */
    c->pc = RC_ADDR(0x00005d52u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2cbau));
    rc_cmp(c, RC_W, t0, 0x000000c7u);

L_5D58:
    /* 00005d58   2  bge 00005d80 */
    c->pc = RC_ADDR(0x00005d58u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_5D80;

L_5D5A:
    /* 00005d5a   6  move.l (fffffffa,A5),(fffffa20,A4) */
    c->pc = RC_ADDR(0x00005d5au);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    rc_wr32(c, m, (c->a[4] - 0x5e0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5D60:
    /* 00005d60   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x00005d60u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5D64:
    /* 00005d64   4  move.l (fffffa20,A4),-(A7) */
    c->pc = RC_ADDR(0x00005d64u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5e0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5D68:
    /* 00005d68   4  jsr (ffff8074,A4) */
    c->pc = RC_ADDR(0x00005d68u);
    rc_step(c, m, 18);
    /* vector 19 */
    rc_push32(c, m, RC_ADDR(0x00005d6cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b6au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000564cu);
    return;

L_5D6C:
    /* 00005d6c   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00005d6cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_5D6E:
    /* 00005d6e   4  jsr (ffff820c,A4) */
    c->pc = RC_ADDR(0x00005d6eu);
    rc_step(c, m, 18);
    /* vector 87 */
    rc_push32(c, m, RC_ADDR(0x00005d72u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f260u);
    return;

L_5D72:
    /* 00005d72   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x00005d72u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5D76:
    /* 00005d76   4  move.l (fffffa20,A4),-(A7) */
    c->pc = RC_ADDR(0x00005d76u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5e0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5D7A:
    /* 00005d7a   4  jsr (ffff8074,A4) */
    c->pc = RC_ADDR(0x00005d7au);
    rc_step(c, m, 18);
    /* vector 19 */
    rc_push32(c, m, RC_ADDR(0x00005d7eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b6au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000564cu);
    return;

L_5D7E:
    /* 00005d7e   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00005d7eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_5D80:
    /* 00005d80   4  bra 00005cf0 */
    c->pc = RC_ADDR(0x00005d80u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_5CF0;

}
