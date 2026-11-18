/* fn_00012f9e - 176 byte(s), 45 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00012f9e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00012f9eu): goto L_12F9E;
    case RC_ADDR(0x00012fa2u): goto L_12FA2;
    case RC_ADDR(0x00012fa6u): goto L_12FA6;
    case RC_ADDR(0x00012faau): goto L_12FAA;
    case RC_ADDR(0x00012faeu): goto L_12FAE;
    case RC_ADDR(0x00012fb0u): goto L_12FB0;
    case RC_ADDR(0x00012fb2u): goto L_12FB2;
    case RC_ADDR(0x00012fb8u): goto L_12FB8;
    case RC_ADDR(0x00012fbcu): goto L_12FBC;
    case RC_ADDR(0x00012fbeu): goto L_12FBE;
    case RC_ADDR(0x00012fc4u): goto L_12FC4;
    case RC_ADDR(0x00012fccu): goto L_12FCC;
    case RC_ADDR(0x00012fd2u): goto L_12FD2;
    case RC_ADDR(0x00012fdau): goto L_12FDA;
    case RC_ADDR(0x00012fe2u): goto L_12FE2;
    case RC_ADDR(0x00012fe6u): goto L_12FE6;
    case RC_ADDR(0x00012fe8u): goto L_12FE8;
    case RC_ADDR(0x00012fecu): goto L_12FEC;
    case RC_ADDR(0x00012feeu): goto L_12FEE;
    case RC_ADDR(0x00012ff2u): goto L_12FF2;
    case RC_ADDR(0x00012ff4u): goto L_12FF4;
    case RC_ADDR(0x00012ff8u): goto L_12FF8;
    case RC_ADDR(0x00012ffau): goto L_12FFA;
    case RC_ADDR(0x00012ffeu): goto L_12FFE;
    case RC_ADDR(0x00013002u): goto L_13002;
    case RC_ADDR(0x00013006u): goto L_13006;
    case RC_ADDR(0x0001300au): goto L_1300A;
    case RC_ADDR(0x0001300eu): goto L_1300E;
    case RC_ADDR(0x00013014u): goto L_13014;
    case RC_ADDR(0x00013016u): goto L_13016;
    case RC_ADDR(0x00013018u): goto L_13018;
    case RC_ADDR(0x0001301cu): goto L_1301C;
    case RC_ADDR(0x0001301eu): goto L_1301E;
    case RC_ADDR(0x00013024u): goto L_13024;
    case RC_ADDR(0x0001302au): goto L_1302A;
    case RC_ADDR(0x00013032u): goto L_13032;
    case RC_ADDR(0x00013034u): goto L_13034;
    case RC_ADDR(0x00013038u): goto L_13038;
    case RC_ADDR(0x0001303au): goto L_1303A;
    case RC_ADDR(0x0001303eu): goto L_1303E;
    case RC_ADDR(0x00013040u): goto L_13040;
    case RC_ADDR(0x00013042u): goto L_13042;
    case RC_ADDR(0x00013046u): goto L_13046;
    case RC_ADDR(0x0001304au): goto L_1304A;
    case RC_ADDR(0x0001304cu): goto L_1304C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_12F9E:
    /* 00012f9e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00012f9eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_12FA2:
    /* 00012fa2   4  movem.l { D1 D2 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x00012fa2u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_12FA6:
    /* 00012fa6   4  move.w #28,D0 */
    c->pc = RC_ADDR(0x00012fa6u);
    rc_step(c, m, 8);
    t0 = 0x00000028u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12FAA:
    /* 00012faa   4  move.w (fffffa94,A4),D1 */
    c->pc = RC_ADDR(0x00012faau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x56cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12FAE:
    /* 00012fae   2  lsl.w #1,D1 */
    c->pc = RC_ADDR(0x00012faeu);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_12FB0:
    /* 00012fb0   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x00012fb0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12FB2:
    /* 00012fb2   6  move.w D0,(00dff066).l */
    c->pc = RC_ADDR(0x00012fb2u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff066u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12FB8:
    /* 00012fb8   4  move.w (fffffa9c,A4),D0 */
    c->pc = RC_ADDR(0x00012fb8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x564u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12FBC:
    /* 00012fbc   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x00012fbcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12FBE:
    /* 00012fbe   6  move.w D0,(00dff064).l */
    c->pc = RC_ADDR(0x00012fbeu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12FC4:
    /* 00012fc4   8  move.w #9f0,(00dff040).l */
    c->pc = RC_ADDR(0x00012fc4u);
    rc_step(c, m, 20);
    t0 = 0x000009f0u;
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12FCC:
    /* 00012fcc   6  clr.w (00dff042).l */
    c->pc = RC_ADDR(0x00012fccu);
    rc_step(c, m, 20);
    rc_wr16(c, m, 0x00dff042u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12FD2:
    /* 00012fd2   8  move.w #ffff,(00dff044).l */
    c->pc = RC_ADDR(0x00012fd2u);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff044u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12FDA:
    /* 00012fda   8  move.w #ffff,(00dff046).l */
    c->pc = RC_ADDR(0x00012fdau);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff046u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12FE2:
    /* 00012fe2   4  lea (fffffaa8,A4),A3 */
    c->pc = RC_ADDR(0x00012fe2u);
    rc_step(c, m, 8);
    c->a[3] = (c->a[4] - 0x558u);

L_12FE6:
    /* 00012fe6   2  movea.l (A3)+,A1 */
    c->pc = RC_ADDR(0x00012fe6u);
    rc_step(c, m, 12);
    t3 = c->a[3];
    c->a[3] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;

L_12FE8:
    /* 00012fe8   4  lea (fffffaf6,A4),A6 */
    c->pc = RC_ADDR(0x00012fe8u);
    rc_step(c, m, 8);
    c->a[6] = (c->a[4] - 0x50au);

L_12FEC:
    /* 00012fec   2  movea.l (A6)+,A2 */
    c->pc = RC_ADDR(0x00012fecu);
    rc_step(c, m, 12);
    t3 = c->a[6];
    c->a[6] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_12FEE:
    /* 00012fee   4  move.w (17e2,A4),D5 */
    c->pc = RC_ADDR(0x00012feeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17e2u));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12FF2:
    /* 00012ff2   2  clr.l D3 */
    c->pc = RC_ADDR(0x00012ff2u);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_12FF4:
    /* 00012ff4   4  move.w (fffffa94,A4),D3 */
    c->pc = RC_ADDR(0x00012ff4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x56cu));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12FF8:
    /* 00012ff8   2  lsl.w #1,D3 */
    c->pc = RC_ADDR(0x00012ff8u);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 3, RC_W), RC_W));

L_12FFA:
    /* 00012ffa   4  move.w #4,D2 */
    c->pc = RC_ADDR(0x00012ffau);
    rc_step(c, m, 8);
    t0 = 0x00000004u;
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12FFE:
    /* 00012ffe   4  movea.l (fffffabc,A4),A5 */
    c->pc = RC_ADDR(0x00012ffeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x544u));
    c->a[5] = t0;

L_13002:
    /* 00013002   4  movea.l (fffffaa0,A4),A0 */
    c->pc = RC_ADDR(0x00013002u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x560u));
    c->a[0] = t0;

L_13006:
    /* 00013006   4  move.w (17e6,A4),D7 */
    c->pc = RC_ADDR(0x00013006u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17e6u));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1300A:
    /* 0001300a   4  move.w (17e4,A4),D6 */
    c->pc = RC_ADDR(0x0001300au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17e4u));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1300E:
    /* 0001300e   6  move.l A2,(00dff054).l */
    c->pc = RC_ADDR(0x0001300eu);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_13014:
    /* 00013014   2  clr.l D0 */
    c->pc = RC_ADDR(0x00013014u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_13016:
    /* 00013016   2  move.w (A0)+,D0 */
    c->pc = RC_ADDR(0x00013016u);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13018:
    /* 00013018   4  move.w (0,A5,D0.w),D0 */
    c->pc = RC_ADDR(0x00013018u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[5] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1301C:
    /* 0001301c   2  add.l A1,D0 */
    c->pc = RC_ADDR(0x0001301cu);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1301E:
    /* 0001301e   6  move.l D0,(00dff050).l */
    c->pc = RC_ADDR(0x0001301eu);
    rc_step(c, m, 20);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_13024:
    /* 00013024   6  move.w D5,(00dff058).l */
    c->pc = RC_ADDR(0x00013024u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 5, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1302A:
    /* 0001302a   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x0001302au);
    rc_step(c, m, 20);
    t3 = 0x00dff002u;
    t4 = 0x00000006u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_13032:
    /* 00013032   2  bne 0001302a */
    c->pc = RC_ADDR(0x00013032u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_1302A; }

L_13034:
    /* 00013034   4  dbf D6,00013014 */
    c->pc = RC_ADDR(0x00013034u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 6, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 6, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_13014; }
    }

L_13038:
    /* 00013038   2  adda.l D3,A2 */
    c->pc = RC_ADDR(0x00013038u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 3, RC_L);
    c->a[2] += t0;

L_1303A:
    /* 0001303a   4  dbf D7,0001300a */
    c->pc = RC_ADDR(0x0001303au);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 7, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 7, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1300A; }
    }

L_1303E:
    /* 0001303e   2  movea.l (A3)+,A1 */
    c->pc = RC_ADDR(0x0001303eu);
    rc_step(c, m, 12);
    t3 = c->a[3];
    c->a[3] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;

L_13040:
    /* 00013040   2  movea.l (A6)+,A2 */
    c->pc = RC_ADDR(0x00013040u);
    rc_step(c, m, 12);
    t3 = c->a[6];
    c->a[6] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_13042:
    /* 00013042   4  dbf D2,00013002 */
    c->pc = RC_ADDR(0x00013042u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 2, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 2, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_13002; }
    }

L_13046:
    /* 00013046   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A5 A6 } */
    c->pc = RC_ADDR(0x00013046u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
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
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1304A:
    /* 0001304a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001304au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1304C:
    /* 0001304c   2  rts */
    c->pc = RC_ADDR(0x0001304cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
