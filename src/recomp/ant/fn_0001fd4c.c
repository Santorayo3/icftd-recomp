/* fn_0001fd4c - 190 byte(s), 58 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001fd4c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001fd4cu): goto L_1FD4C;
    case RC_ADDR(0x0001fd50u): goto L_1FD50;
    case RC_ADDR(0x0001fd54u): goto L_1FD54;
    case RC_ADDR(0x0001fd5au): goto L_1FD5A;
    case RC_ADDR(0x0001fd5eu): goto L_1FD5E;
    case RC_ADDR(0x0001fd62u): goto L_1FD62;
    case RC_ADDR(0x0001fd64u): goto L_1FD64;
    case RC_ADDR(0x0001fd66u): goto L_1FD66;
    case RC_ADDR(0x0001fd68u): goto L_1FD68;
    case RC_ADDR(0x0001fd6au): goto L_1FD6A;
    case RC_ADDR(0x0001fd6cu): goto L_1FD6C;
    case RC_ADDR(0x0001fd70u): goto L_1FD70;
    case RC_ADDR(0x0001fd72u): goto L_1FD72;
    case RC_ADDR(0x0001fd74u): goto L_1FD74;
    case RC_ADDR(0x0001fd7au): goto L_1FD7A;
    case RC_ADDR(0x0001fd7cu): goto L_1FD7C;
    case RC_ADDR(0x0001fd80u): goto L_1FD80;
    case RC_ADDR(0x0001fd84u): goto L_1FD84;
    case RC_ADDR(0x0001fd8au): goto L_1FD8A;
    case RC_ADDR(0x0001fd8eu): goto L_1FD8E;
    case RC_ADDR(0x0001fd94u): goto L_1FD94;
    case RC_ADDR(0x0001fd96u): goto L_1FD96;
    case RC_ADDR(0x0001fd9au): goto L_1FD9A;
    case RC_ADDR(0x0001fd9eu): goto L_1FD9E;
    case RC_ADDR(0x0001fda2u): goto L_1FDA2;
    case RC_ADDR(0x0001fda6u): goto L_1FDA6;
    case RC_ADDR(0x0001fdaau): goto L_1FDAA;
    case RC_ADDR(0x0001fdb0u): goto L_1FDB0;
    case RC_ADDR(0x0001fdb4u): goto L_1FDB4;
    case RC_ADDR(0x0001fdb8u): goto L_1FDB8;
    case RC_ADDR(0x0001fdbeu): goto L_1FDBE;
    case RC_ADDR(0x0001fdc2u): goto L_1FDC2;
    case RC_ADDR(0x0001fdc4u): goto L_1FDC4;
    case RC_ADDR(0x0001fdc6u): goto L_1FDC6;
    case RC_ADDR(0x0001fdc8u): goto L_1FDC8;
    case RC_ADDR(0x0001fdccu): goto L_1FDCC;
    case RC_ADDR(0x0001fdd0u): goto L_1FDD0;
    case RC_ADDR(0x0001fdd2u): goto L_1FDD2;
    case RC_ADDR(0x0001fdd8u): goto L_1FDD8;
    case RC_ADDR(0x0001fddau): goto L_1FDDA;
    case RC_ADDR(0x0001fddcu): goto L_1FDDC;
    case RC_ADDR(0x0001fddeu): goto L_1FDDE;
    case RC_ADDR(0x0001fde0u): goto L_1FDE0;
    case RC_ADDR(0x0001fde4u): goto L_1FDE4;
    case RC_ADDR(0x0001fde8u): goto L_1FDE8;
    case RC_ADDR(0x0001fdeau): goto L_1FDEA;
    case RC_ADDR(0x0001fdecu): goto L_1FDEC;
    case RC_ADDR(0x0001fdeeu): goto L_1FDEE;
    case RC_ADDR(0x0001fdf0u): goto L_1FDF0;
    case RC_ADDR(0x0001fdf2u): goto L_1FDF2;
    case RC_ADDR(0x0001fdf4u): goto L_1FDF4;
    case RC_ADDR(0x0001fdf6u): goto L_1FDF6;
    case RC_ADDR(0x0001fdfau): goto L_1FDFA;
    case RC_ADDR(0x0001fdfcu): goto L_1FDFC;
    case RC_ADDR(0x0001fdfeu): goto L_1FDFE;
    case RC_ADDR(0x0001fe02u): goto L_1FE02;
    case RC_ADDR(0x0001fe04u): goto L_1FE04;
    case RC_ADDR(0x0001fe06u): goto L_1FE06;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1FD4C:
    /* 0001fd4c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001fd4cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1FD50:
    /* 0001fd50   4  movem.l { D4 D5 },-(SP) */
    c->pc = RC_ADDR(0x0001fd50u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    c->a[7] = t3;

L_1FD54:
    /* 0001fd54   6  pea (00010000).l */
    c->pc = RC_ADDR(0x0001fd54u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010000u);

L_1FD5A:
    /* 0001fd5a   4  pea (0000003e).l */
    c->pc = RC_ADDR(0x0001fd5au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000003eu);

L_1FD5E:
    /* 0001fd5e   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x0001fd5eu);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x0001fd62u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_1FD62:
    /* 0001fd62   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001fd62u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FD64:
    /* 0001fd64   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x0001fd64u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_1FD66:
    /* 0001fd66   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x0001fd66u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FD68:
    /* 0001fd68   2  bne 0001fd74 */
    c->pc = RC_ADDR(0x0001fd68u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1FD74;

L_1FD6A:
    /* 0001fd6a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001fd6au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FD6C:
    /* 0001fd6c   4  movem.l (SP)+,{ A2 A3 } */
    c->pc = RC_ADDR(0x0001fd6cu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1FD70:
    /* 0001fd70   2  unlk A5 */
    c->pc = RC_ADDR(0x0001fd70u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1FD72:
    /* 0001fd72   2  rts */
    c->pc = RC_ADDR(0x0001fd72u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1FD74:
    /* 0001fd74   6  move.l (c,A5),(4,A2) */
    c->pc = RC_ADDR(0x0001fd74u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_wr32(c, m, (c->a[2] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FD7A:
    /* 0001fd7a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001fd7au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FD7C:
    /* 0001fd7c   4  move.b (11,A5),D0 */
    c->pc = RC_ADDR(0x0001fd7cu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0x11u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1FD80:
    /* 0001fd80   4  move.w D0,(8,A2) */
    c->pc = RC_ADDR(0x0001fd80u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FD84:
    /* 0001fd84   6  move.w (12,A5),(a,A2) */
    c->pc = RC_ADDR(0x0001fd84u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    rc_wr16(c, m, (c->a[2] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FD8A:
    /* 0001fd8a   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x0001fd8au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1FD8E:
    /* 0001fd8e   6  btst #0,(b,A0) */
    c->pc = RC_ADDR(0x0001fd8eu);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0xbu);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1FD94:
    /* 0001fd94   2  beq 0001fdbe */
    c->pc = RC_ADDR(0x0001fd94u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1FDBE;

L_1FD96:
    /* 0001fd96   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x0001fd96u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1FD9A:
    /* 0001fd9a   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0001fd9au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1FD9E:
    /* 0001fd9e   4  move.w (A1),(34,A2) */
    c->pc = RC_ADDR(0x0001fd9eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, c->a[1]);
    rc_wr16(c, m, (c->a[2] + 0x34u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FDA2:
    /* 0001fda2   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x0001fda2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1FDA6:
    /* 0001fda6   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0001fda6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1FDAA:
    /* 0001fdaa   6  move.w (2,A1),(36,A2) */
    c->pc = RC_ADDR(0x0001fdaau);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[1] + 0x2u));
    rc_wr16(c, m, (c->a[2] + 0x36u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FDB0:
    /* 0001fdb0   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x0001fdb0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1FDB4:
    /* 0001fdb4   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0001fdb4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1FDB8:
    /* 0001fdb8   6  move.l (34,A1),(38,A2) */
    c->pc = RC_ADDR(0x0001fdb8u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[1] + 0x34u));
    rc_wr32(c, m, (c->a[2] + 0x38u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FDBE:
    /* 0001fdbe   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001fdbeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1FDC2:
    /* 0001fdc2   2  movea.l (A0),A3 */
    c->pc = RC_ADDR(0x0001fdc2u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[3] = t0;

L_1FDC4:
    /* 0001fdc4   2  move.l A3,D0 */
    c->pc = RC_ADDR(0x0001fdc4u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FDC6:
    /* 0001fdc6   2  beq 0001fdfe */
    c->pc = RC_ADDR(0x0001fdc6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1FDFE;

L_1FDC8:
    /* 0001fdc8   4  move.w (a,A3),D0 */
    c->pc = RC_ADDR(0x0001fdc8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FDCC:
    /* 0001fdcc   4  cmp.w (a,A2),D0 */
    c->pc = RC_ADDR(0x0001fdccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1FDD0:
    /* 0001fdd0   2  bgt 0001fdf4 */
    c->pc = RC_ADDR(0x0001fdd0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1FDF4;

L_1FDD2:
    /* 0001fdd2   6  cmpi.w #8000,(a,A2) */
    c->pc = RC_ADDR(0x0001fdd2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[2] + 0xau));
    rc_cmp(c, RC_W, t0, 0x00008000u);

L_1FDD8:
    /* 0001fdd8   2  ble 0001fdf4 */
    c->pc = RC_ADDR(0x0001fdd8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1FDF4;

L_1FDDA:
    /* 0001fdda   2  tst.l (A3) */
    c->pc = RC_ADDR(0x0001fddau);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[3]);
    rc_set_nzvc(c, t0, RC_L);

L_1FDDC:
    /* 0001fddc   2  beq 0001fdee */
    c->pc = RC_ADDR(0x0001fddcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1FDEE;

L_1FDDE:
    /* 0001fdde   2  movea.l (A3),A0 */
    c->pc = RC_ADDR(0x0001fddeu);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[3]);
    c->a[0] = t0;

L_1FDE0:
    /* 0001fde0   4  move.w (a,A0),D0 */
    c->pc = RC_ADDR(0x0001fde0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FDE4:
    /* 0001fde4   4  cmp.w (a,A2),D0 */
    c->pc = RC_ADDR(0x0001fde4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1FDE8:
    /* 0001fde8   2  bgt 0001fdee */
    c->pc = RC_ADDR(0x0001fde8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1FDEE;

L_1FDEA:
    /* 0001fdea   2  movea.l (A3),A3 */
    c->pc = RC_ADDR(0x0001fdeau);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[3]);
    c->a[3] = t0;

L_1FDEC:
    /* 0001fdec   2  bra 0001fdda */
    c->pc = RC_ADDR(0x0001fdecu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1FDDA;

L_1FDEE:
    /* 0001fdee   2  move.l (A3),(A2) */
    c->pc = RC_ADDR(0x0001fdeeu);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[3]);
    rc_wr32(c, m, c->a[2], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FDF0:
    /* 0001fdf0   2  move.l A2,(A3) */
    c->pc = RC_ADDR(0x0001fdf0u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, c->a[3], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FDF2:
    /* 0001fdf2   2  bra 0001fdfc */
    c->pc = RC_ADDR(0x0001fdf2u);
    rc_step(c, m, 10);
    goto L_1FDFC;

L_1FDF4:
    /* 0001fdf4   2  move.l A3,(A2) */
    c->pc = RC_ADDR(0x0001fdf4u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, c->a[2], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FDF6:
    /* 0001fdf6   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001fdf6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1FDFA:
    /* 0001fdfa   2  move.l A2,(A0) */
    c->pc = RC_ADDR(0x0001fdfau);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FDFC:
    /* 0001fdfc   2  bra 0001fe04 */
    c->pc = RC_ADDR(0x0001fdfcu);
    rc_step(c, m, 10);
    goto L_1FE04;

L_1FDFE:
    /* 0001fdfe   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001fdfeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1FE02:
    /* 0001fe02   2  move.l A2,(A0) */
    c->pc = RC_ADDR(0x0001fe02u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FE04:
    /* 0001fe04   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x0001fe04u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FE06:
    /* 0001fe06   4  bra 0001fd6c */
    c->pc = RC_ADDR(0x0001fe06u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1FD6C;

}
