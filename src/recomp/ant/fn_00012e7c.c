/* fn_00012e7c - 192 byte(s), 49 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00012e7c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00012e7cu): goto L_12E7C;
    case RC_ADDR(0x00012e80u): goto L_12E80;
    case RC_ADDR(0x00012e84u): goto L_12E84;
    case RC_ADDR(0x00012e88u): goto L_12E88;
    case RC_ADDR(0x00012e8au): goto L_12E8A;
    case RC_ADDR(0x00012e8cu): goto L_12E8C;
    case RC_ADDR(0x00012e8eu): goto L_12E8E;
    case RC_ADDR(0x00012e94u): goto L_12E94;
    case RC_ADDR(0x00012e9au): goto L_12E9A;
    case RC_ADDR(0x00012ea2u): goto L_12EA2;
    case RC_ADDR(0x00012eaau): goto L_12EAA;
    case RC_ADDR(0x00012eaeu): goto L_12EAE;
    case RC_ADDR(0x00012eb0u): goto L_12EB0;
    case RC_ADDR(0x00012eb2u): goto L_12EB2;
    case RC_ADDR(0x00012eb4u): goto L_12EB4;
    case RC_ADDR(0x00012eb8u): goto L_12EB8;
    case RC_ADDR(0x00012ebcu): goto L_12EBC;
    case RC_ADDR(0x00012ebeu): goto L_12EBE;
    case RC_ADDR(0x00012ec2u): goto L_12EC2;
    case RC_ADDR(0x00012ec4u): goto L_12EC4;
    case RC_ADDR(0x00012ec6u): goto L_12EC6;
    case RC_ADDR(0x00012ec8u): goto L_12EC8;
    case RC_ADDR(0x00012eccu): goto L_12ECC;
    case RC_ADDR(0x00012ed0u): goto L_12ED0;
    case RC_ADDR(0x00012ed2u): goto L_12ED2;
    case RC_ADDR(0x00012edau): goto L_12EDA;
    case RC_ADDR(0x00012ee2u): goto L_12EE2;
    case RC_ADDR(0x00012ee4u): goto L_12EE4;
    case RC_ADDR(0x00012ee6u): goto L_12EE6;
    case RC_ADDR(0x00012eecu): goto L_12EEC;
    case RC_ADDR(0x00012ef0u): goto L_12EF0;
    case RC_ADDR(0x00012ef2u): goto L_12EF2;
    case RC_ADDR(0x00012ef6u): goto L_12EF6;
    case RC_ADDR(0x00012efau): goto L_12EFA;
    case RC_ADDR(0x00012efcu): goto L_12EFC;
    case RC_ADDR(0x00012efeu): goto L_12EFE;
    case RC_ADDR(0x00012f02u): goto L_12F02;
    case RC_ADDR(0x00012f08u): goto L_12F08;
    case RC_ADDR(0x00012f0eu): goto L_12F0E;
    case RC_ADDR(0x00012f14u): goto L_12F14;
    case RC_ADDR(0x00012f16u): goto L_12F16;
    case RC_ADDR(0x00012f18u): goto L_12F18;
    case RC_ADDR(0x00012f1eu): goto L_12F1E;
    case RC_ADDR(0x00012f24u): goto L_12F24;
    case RC_ADDR(0x00012f2au): goto L_12F2A;
    case RC_ADDR(0x00012f32u): goto L_12F32;
    case RC_ADDR(0x00012f34u): goto L_12F34;
    case RC_ADDR(0x00012f38u): goto L_12F38;
    case RC_ADDR(0x00012f3au): goto L_12F3A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_12E7C:
    /* 00012e7c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00012e7cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_12E80:
    /* 00012e80   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00012e80u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_12E84:
    /* 00012e84   4  move.w #28,D0 */
    c->pc = RC_ADDR(0x00012e84u);
    rc_step(c, m, 8);
    t0 = 0x00000028u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12E88:
    /* 00012e88   2  move.w (A0),D1 */
    c->pc = RC_ADDR(0x00012e88u);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12E8A:
    /* 00012e8a   2  addq.w #2,D1 */
    c->pc = RC_ADDR(0x00012e8au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_12E8C:
    /* 00012e8c   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x00012e8cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12E8E:
    /* 00012e8e   6  move.w D0,(00dff066).l */
    c->pc = RC_ADDR(0x00012e8eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff066u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12E94:
    /* 00012e94   6  move.w D0,(00dff060).l */
    c->pc = RC_ADDR(0x00012e94u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff060u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12E9A:
    /* 00012e9a   8  move.w #ffff,(00dff062).l */
    c->pc = RC_ADDR(0x00012e9au);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff062u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12EA2:
    /* 00012ea2   8  move.w #ffff,(00dff064).l */
    c->pc = RC_ADDR(0x00012ea2u);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12EAA:
    /* 00012eaa   4  move.w (2,A0),D2 */
    c->pc = RC_ADDR(0x00012eaau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12EAE:
    /* 00012eae   2  lsl.w #6,D2 */
    c->pc = RC_ADDR(0x00012eaeu);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000006u, rc_d_get(c, 2, RC_W), RC_W));

L_12EB0:
    /* 00012eb0   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x00012eb0u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_12EB2:
    /* 00012eb2   2  or.w D1,D2 */
    c->pc = RC_ADDR(0x00012eb2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 | rc_d_get(c, 2, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 2, RC_W, t2);

L_12EB4:
    /* 00012eb4   4  movea.l (24,A0),A3 */
    c->pc = RC_ADDR(0x00012eb4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x24u));
    c->a[3] = t0;

L_12EB8:
    /* 00012eb8   4  lea (ffffface,A4),A1 */
    c->pc = RC_ADDR(0x00012eb8u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x532u);

L_12EBC:
    /* 00012ebc   2  clr.l D1 */
    c->pc = RC_ADDR(0x00012ebcu);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_12EBE:
    /* 00012ebe   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00012ebeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12EC2:
    /* 00012ec2   2  move.w D0,D3 */
    c->pc = RC_ADDR(0x00012ec2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12EC4:
    /* 00012ec4   2  lsr.w #4,D0 */
    c->pc = RC_ADDR(0x00012ec4u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_12EC6:
    /* 00012ec6   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x00012ec6u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_12EC8:
    /* 00012ec8   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x00012ec8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12ECC:
    /* 00012ecc   4  mulu.w #28,D1 */
    c->pc = RC_ADDR(0x00012eccu);
    rc_step(c, m, 42);
    t0 = 0x00000028u;
    rc_mulu(c, 1, t0);

L_12ED0:
    /* 00012ed0   2  add.w D0,D1 */
    c->pc = RC_ADDR(0x00012ed0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_12ED2:
    /* 00012ed2   8  move.w #ffff,(00dff044).l */
    c->pc = RC_ADDR(0x00012ed2u);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff044u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12EDA:
    /* 00012eda   8  move.w #0,(00dff046).l */
    c->pc = RC_ADDR(0x00012edau);
    rc_step(c, m, 20);
    t0 = 0x00000000u;
    rc_wr16(c, m, 0x00dff046u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12EE2:
    /* 00012ee2   2  asl.w #6,D3 */
    c->pc = RC_ADDR(0x00012ee2u);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_W, rc_shift(c, 0, 1, 0x00000006u, rc_d_get(c, 3, RC_W), RC_W));

L_12EE4:
    /* 00012ee4   2  asl.w #6,D3 */
    c->pc = RC_ADDR(0x00012ee4u);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_W, rc_shift(c, 0, 1, 0x00000006u, rc_d_get(c, 3, RC_W), RC_W));

L_12EE6:
    /* 00012ee6   6  move.w D3,(00dff042).l */
    c->pc = RC_ADDR(0x00012ee6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff042u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12EEC:
    /* 00012eec   4  move.w (10,A5),D4 */
    c->pc = RC_ADDR(0x00012eecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12EF0:
    /* 00012ef0   2  moveq #4,D0 */
    c->pc = RC_ADDR(0x00012ef0u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000004u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_12EF2:
    /* 00012ef2   4  ori.w #b0a,D3 */
    c->pc = RC_ADDR(0x00012ef2u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 | 0x00000b0au;
    rc_d_set(c, 3, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_12EF6:
    /* 00012ef6   4  and.w #fb0a,D3 */
    c->pc = RC_ADDR(0x00012ef6u);
    rc_step(c, m, 10);
    t0 = 0x0000fb0au;
    t2 = t0 & rc_d_get(c, 3, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 3, RC_W, t2);

L_12EFA:
    /* 00012efa   2  lsr.w #1,D4 */
    c->pc = RC_ADDR(0x00012efau);
    rc_step(c, m, 6);
    rc_d_set(c, 4, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 4, RC_W), RC_W));

L_12EFC:
    /* 00012efc   2  bcc 00012f02 */
    c->pc = RC_ADDR(0x00012efcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_12F02;

L_12EFE:
    /* 00012efe   4  ori.w #fca,D3 */
    c->pc = RC_ADDR(0x00012efeu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 | 0x00000fcau;
    rc_d_set(c, 3, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_12F02:
    /* 00012f02   6  move.w D3,(00dff040).l */
    c->pc = RC_ADDR(0x00012f02u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12F08:
    /* 00012f08   6  move.l A3,(00dff050).l */
    c->pc = RC_ADDR(0x00012f08u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12F0E:
    /* 00012f0e   6  move.l A3,(00dff04c).l */
    c->pc = RC_ADDR(0x00012f0eu);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff04cu, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12F14:
    /* 00012f14   2  movea.l (A1)+,A2 */
    c->pc = RC_ADDR(0x00012f14u);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_12F16:
    /* 00012f16   2  adda.l D1,A2 */
    c->pc = RC_ADDR(0x00012f16u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[2] += t0;

L_12F18:
    /* 00012f18   6  move.l A2,(00dff048).l */
    c->pc = RC_ADDR(0x00012f18u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff048u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12F1E:
    /* 00012f1e   6  move.l A2,(00dff054).l */
    c->pc = RC_ADDR(0x00012f1eu);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12F24:
    /* 00012f24   6  move.w D2,(00dff058).l */
    c->pc = RC_ADDR(0x00012f24u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12F2A:
    /* 00012f2a   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x00012f2au);
    rc_step(c, m, 20);
    t3 = 0x00dff002u;
    t4 = 0x00000006u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_12F32:
    /* 00012f32   2  bne 00012f2a */
    c->pc = RC_ADDR(0x00012f32u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_12F2A; }

L_12F34:
    /* 00012f34   4  dbf D0,00012ef6 */
    c->pc = RC_ADDR(0x00012f34u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_12EF6; }
    }

L_12F38:
    /* 00012f38   2  unlk A5 */
    c->pc = RC_ADDR(0x00012f38u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_12F3A:
    /* 00012f3a   2  rts */
    c->pc = RC_ADDR(0x00012f3au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
