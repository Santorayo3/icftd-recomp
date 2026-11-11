/* fn_0000c1ac - 356 byte(s), 92 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000c1ac(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000c1acu): goto L_C1AC;
    case RC_ADDR(0x0000c1b0u): goto L_C1B0;
    case RC_ADDR(0x0000c1b6u): goto L_C1B6;
    case RC_ADDR(0x0000c1b8u): goto L_C1B8;
    case RC_ADDR(0x0000c1bcu): goto L_C1BC;
    case RC_ADDR(0x0000c1beu): goto L_C1BE;
    case RC_ADDR(0x0000c1c0u): goto L_C1C0;
    case RC_ADDR(0x0000c1c4u): goto L_C1C4;
    case RC_ADDR(0x0000c1cau): goto L_C1CA;
    case RC_ADDR(0x0000c1ceu): goto L_C1CE;
    case RC_ADDR(0x0000c1d0u): goto L_C1D0;
    case RC_ADDR(0x0000c1d2u): goto L_C1D2;
    case RC_ADDR(0x0000c1d6u): goto L_C1D6;
    case RC_ADDR(0x0000c1dcu): goto L_C1DC;
    case RC_ADDR(0x0000c1deu): goto L_C1DE;
    case RC_ADDR(0x0000c1e2u): goto L_C1E2;
    case RC_ADDR(0x0000c1e4u): goto L_C1E4;
    case RC_ADDR(0x0000c1e6u): goto L_C1E6;
    case RC_ADDR(0x0000c1eau): goto L_C1EA;
    case RC_ADDR(0x0000c1f0u): goto L_C1F0;
    case RC_ADDR(0x0000c1f4u): goto L_C1F4;
    case RC_ADDR(0x0000c1f6u): goto L_C1F6;
    case RC_ADDR(0x0000c1f8u): goto L_C1F8;
    case RC_ADDR(0x0000c1fcu): goto L_C1FC;
    case RC_ADDR(0x0000c200u): goto L_C200;
    case RC_ADDR(0x0000c204u): goto L_C204;
    case RC_ADDR(0x0000c208u): goto L_C208;
    case RC_ADDR(0x0000c20eu): goto L_C20E;
    case RC_ADDR(0x0000c212u): goto L_C212;
    case RC_ADDR(0x0000c216u): goto L_C216;
    case RC_ADDR(0x0000c21cu): goto L_C21C;
    case RC_ADDR(0x0000c222u): goto L_C222;
    case RC_ADDR(0x0000c228u): goto L_C228;
    case RC_ADDR(0x0000c22cu): goto L_C22C;
    case RC_ADDR(0x0000c232u): goto L_C232;
    case RC_ADDR(0x0000c236u): goto L_C236;
    case RC_ADDR(0x0000c23au): goto L_C23A;
    case RC_ADDR(0x0000c23eu): goto L_C23E;
    case RC_ADDR(0x0000c242u): goto L_C242;
    case RC_ADDR(0x0000c246u): goto L_C246;
    case RC_ADDR(0x0000c24au): goto L_C24A;
    case RC_ADDR(0x0000c24cu): goto L_C24C;
    case RC_ADDR(0x0000c250u): goto L_C250;
    case RC_ADDR(0x0000c254u): goto L_C254;
    case RC_ADDR(0x0000c258u): goto L_C258;
    case RC_ADDR(0x0000c260u): goto L_C260;
    case RC_ADDR(0x0000c262u): goto L_C262;
    case RC_ADDR(0x0000c266u): goto L_C266;
    case RC_ADDR(0x0000c26au): goto L_C26A;
    case RC_ADDR(0x0000c26eu): goto L_C26E;
    case RC_ADDR(0x0000c270u): goto L_C270;
    case RC_ADDR(0x0000c274u): goto L_C274;
    case RC_ADDR(0x0000c278u): goto L_C278;
    case RC_ADDR(0x0000c27cu): goto L_C27C;
    case RC_ADDR(0x0000c284u): goto L_C284;
    case RC_ADDR(0x0000c286u): goto L_C286;
    case RC_ADDR(0x0000c28au): goto L_C28A;
    case RC_ADDR(0x0000c28eu): goto L_C28E;
    case RC_ADDR(0x0000c290u): goto L_C290;
    case RC_ADDR(0x0000c294u): goto L_C294;
    case RC_ADDR(0x0000c298u): goto L_C298;
    case RC_ADDR(0x0000c29cu): goto L_C29C;
    case RC_ADDR(0x0000c29eu): goto L_C29E;
    case RC_ADDR(0x0000c2a2u): goto L_C2A2;
    case RC_ADDR(0x0000c2a6u): goto L_C2A6;
    case RC_ADDR(0x0000c2aau): goto L_C2AA;
    case RC_ADDR(0x0000c2acu): goto L_C2AC;
    case RC_ADDR(0x0000c2b0u): goto L_C2B0;
    case RC_ADDR(0x0000c2b4u): goto L_C2B4;
    case RC_ADDR(0x0000c2b8u): goto L_C2B8;
    case RC_ADDR(0x0000c2bau): goto L_C2BA;
    case RC_ADDR(0x0000c2beu): goto L_C2BE;
    case RC_ADDR(0x0000c2c2u): goto L_C2C2;
    case RC_ADDR(0x0000c2c6u): goto L_C2C6;
    case RC_ADDR(0x0000c2c8u): goto L_C2C8;
    case RC_ADDR(0x0000c2ccu): goto L_C2CC;
    case RC_ADDR(0x0000c2d0u): goto L_C2D0;
    case RC_ADDR(0x0000c2d4u): goto L_C2D4;
    case RC_ADDR(0x0000c2d6u): goto L_C2D6;
    case RC_ADDR(0x0000c2dau): goto L_C2DA;
    case RC_ADDR(0x0000c2e0u): goto L_C2E0;
    case RC_ADDR(0x0000c2e4u): goto L_C2E4;
    case RC_ADDR(0x0000c2e6u): goto L_C2E6;
    case RC_ADDR(0x0000c2eau): goto L_C2EA;
    case RC_ADDR(0x0000c2f0u): goto L_C2F0;
    case RC_ADDR(0x0000c2f4u): goto L_C2F4;
    case RC_ADDR(0x0000c2fcu): goto L_C2FC;
    case RC_ADDR(0x0000c2feu): goto L_C2FE;
    case RC_ADDR(0x0000c302u): goto L_C302;
    case RC_ADDR(0x0000c308u): goto L_C308;
    case RC_ADDR(0x0000c30cu): goto L_C30C;
    case RC_ADDR(0x0000c30eu): goto L_C30E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_C1AC:
    /* 0000c1ac   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x0000c1acu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_C1B0:
    /* 0000c1b0   6  cmpi.w #1,(478,A4) */
    c->pc = RC_ADDR(0x0000c1b0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x478u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_C1B6:
    /* 0000c1b6   2  bne 0000c1de */
    c->pc = RC_ADDR(0x0000c1b6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_C1DE;

L_C1B8:
    /* 0000c1b8   4  move.w (710,A4),D0 */
    c->pc = RC_ADDR(0x0000c1b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x710u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C1BC:
    /* 0000c1bc   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c1bcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C1BE:
    /* 0000c1be   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c1beu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_C1C0:
    /* 0000c1c0   4  lea (ffff96f8,A4),A0 */
    c->pc = RC_ADDR(0x0000c1c0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6908u);

L_C1C4:
    /* 0000c1c4   6  move.w (0,A0,D0.w),(47a,A4) */
    c->pc = RC_ADDR(0x0000c1c4u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x47au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C1CA:
    /* 0000c1ca   4  move.w (710,A4),D0 */
    c->pc = RC_ADDR(0x0000c1cau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x710u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C1CE:
    /* 0000c1ce   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c1ceu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C1D0:
    /* 0000c1d0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c1d0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_C1D2:
    /* 0000c1d2   4  lea (ffff9704,A4),A0 */
    c->pc = RC_ADDR(0x0000c1d2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x68fcu);

L_C1D6:
    /* 0000c1d6   6  move.w (0,A0,D0.w),(47c,A4) */
    c->pc = RC_ADDR(0x0000c1d6u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x47cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C1DC:
    /* 0000c1dc   2  bra 0000c208 */
    c->pc = RC_ADDR(0x0000c1dcu);
    rc_step(c, m, 10);
    goto L_C208;

L_C1DE:
    /* 0000c1de   4  move.w (710,A4),D0 */
    c->pc = RC_ADDR(0x0000c1deu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x710u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C1E2:
    /* 0000c1e2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c1e2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C1E4:
    /* 0000c1e4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c1e4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_C1E6:
    /* 0000c1e6   4  lea (ffff9710,A4),A0 */
    c->pc = RC_ADDR(0x0000c1e6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x68f0u);

L_C1EA:
    /* 0000c1ea   6  move.w (0,A0,D0.w),(47a,A4) */
    c->pc = RC_ADDR(0x0000c1eau);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x47au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C1F0:
    /* 0000c1f0   4  move.w (710,A4),D0 */
    c->pc = RC_ADDR(0x0000c1f0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x710u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C1F4:
    /* 0000c1f4   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c1f4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C1F6:
    /* 0000c1f6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c1f6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_C1F8:
    /* 0000c1f8   4  lea (ffff971c,A4),A0 */
    c->pc = RC_ADDR(0x0000c1f8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x68e4u);

L_C1FC:
    /* 0000c1fc   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000c1fcu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C200:
    /* 0000c200   4  sub.w #10,D1 */
    c->pc = RC_ADDR(0x0000c200u);
    rc_step(c, m, 10);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_C204:
    /* 0000c204   4  move.w D1,(47c,A4) */
    c->pc = RC_ADDR(0x0000c204u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x47cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C208:
    /* 0000c208   6  move.w #1,(48c,A4) */
    c->pc = RC_ADDR(0x0000c208u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x48cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C20E:
    /* 0000c20e   4  clr.w (482,A4) */
    c->pc = RC_ADDR(0x0000c20eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x482u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C212:
    /* 0000c212   4  clr.w (478,A4) */
    c->pc = RC_ADDR(0x0000c212u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x478u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C216:
    /* 0000c216   6  move.w #4,(47e,A4) */
    c->pc = RC_ADDR(0x0000c216u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x47eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C21C:
    /* 0000c21c   6  move.w #3,(480,A4) */
    c->pc = RC_ADDR(0x0000c21cu);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0x480u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C222:
    /* 0000c222   6  move.w #1,(484,A4) */
    c->pc = RC_ADDR(0x0000c222u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x484u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C228:
    /* 0000c228   4  clr.w (486,A4) */
    c->pc = RC_ADDR(0x0000c228u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x486u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C22C:
    /* 0000c22c   6  move.w #1,(488,A4) */
    c->pc = RC_ADDR(0x0000c22cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x488u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C232:
    /* 0000c232   4  clr.w (48a,A4) */
    c->pc = RC_ADDR(0x0000c232u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x48au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C236:
    /* 0000c236   4  clr.w (48e,A4) */
    c->pc = RC_ADDR(0x0000c236u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x48eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C23A:
    /* 0000c23a   4  clr.w (4e6,A4) */
    c->pc = RC_ADDR(0x0000c23au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x4e6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C23E:
    /* 0000c23e   4  clr.w (4e8,A4) */
    c->pc = RC_ADDR(0x0000c23eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x4e8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C242:
    /* 0000c242   4  clr.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x0000c242u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_C246:
    /* 0000c246   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000c246u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C24A:
    /* 0000c24a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c24au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_C24C:
    /* 0000c24c   4  lea (4ea,A4),A0 */
    c->pc = RC_ADDR(0x0000c24cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4eau);

L_C250:
    /* 0000c250   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000c250u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C254:
    /* 0000c254   4  addq.l #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000c254u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_C258:
    /* 0000c258   8  cmpi.l #4,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000c258u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_L, t0, 0x00000004u);

L_C260:
    /* 0000c260   2  blt 0000c246 */
    c->pc = RC_ADDR(0x0000c260u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_C246; }

L_C262:
    /* 0000c262   4  clr.w (50a,A4) */
    c->pc = RC_ADDR(0x0000c262u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x50au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C266:
    /* 0000c266   4  clr.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x0000c266u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_C26A:
    /* 0000c26a   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000c26au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C26E:
    /* 0000c26e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c26eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_C270:
    /* 0000c270   4  lea (50c,A4),A0 */
    c->pc = RC_ADDR(0x0000c270u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x50cu);

L_C274:
    /* 0000c274   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000c274u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C278:
    /* 0000c278   4  addq.l #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000c278u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_C27C:
    /* 0000c27c   8  cmpi.l #40,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000c27cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_L, t0, 0x00000040u);

L_C284:
    /* 0000c284   2  blt 0000c26a */
    c->pc = RC_ADDR(0x0000c284u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_C26A; }

L_C286:
    /* 0000c286   4  clr.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x0000c286u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_C28A:
    /* 0000c28a   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000c28au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C28E:
    /* 0000c28e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c28eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_C290:
    /* 0000c290   4  lea (256,A4),A0 */
    c->pc = RC_ADDR(0x0000c290u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x256u);

L_C294:
    /* 0000c294   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000c294u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C298:
    /* 0000c298   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000c298u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C29C:
    /* 0000c29c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c29cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_C29E:
    /* 0000c29e   4  lea (c4,A4),A0 */
    c->pc = RC_ADDR(0x0000c29eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc4u);

L_C2A2:
    /* 0000c2a2   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000c2a2u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C2A6:
    /* 0000c2a6   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000c2a6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C2AA:
    /* 0000c2aa   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c2aau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_C2AC:
    /* 0000c2ac   4  lea (d4,A4),A0 */
    c->pc = RC_ADDR(0x0000c2acu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd4u);

L_C2B0:
    /* 0000c2b0   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000c2b0u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C2B4:
    /* 0000c2b4   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000c2b4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C2B8:
    /* 0000c2b8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c2b8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_C2BA:
    /* 0000c2ba   4  lea (4b0,A4),A0 */
    c->pc = RC_ADDR(0x0000c2bau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4b0u);

L_C2BE:
    /* 0000c2be   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000c2beu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C2C2:
    /* 0000c2c2   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000c2c2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C2C6:
    /* 0000c2c6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c2c6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_C2C8:
    /* 0000c2c8   4  lea (4c0,A4),A0 */
    c->pc = RC_ADDR(0x0000c2c8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4c0u);

L_C2CC:
    /* 0000c2cc   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000c2ccu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C2D0:
    /* 0000c2d0   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000c2d0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C2D4:
    /* 0000c2d4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c2d4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_C2D6:
    /* 0000c2d6   4  lea (4d0,A4),A0 */
    c->pc = RC_ADDR(0x0000c2d6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4d0u);

L_C2DA:
    /* 0000c2da   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000c2dau);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C2E0:
    /* 0000c2e0   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000c2e0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C2E4:
    /* 0000c2e4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c2e4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_C2E6:
    /* 0000c2e6   4  lea (e6,A4),A0 */
    c->pc = RC_ADDR(0x0000c2e6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xe6u);

L_C2EA:
    /* 0000c2ea   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000c2eau);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C2F0:
    /* 0000c2f0   4  addq.l #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000c2f0u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_C2F4:
    /* 0000c2f4   8  cmpi.l #8,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000c2f4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_L, t0, 0x00000008u);

L_C2FC:
    /* 0000c2fc   2  blt 0000c28a */
    c->pc = RC_ADDR(0x0000c2fcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_C28A; }

L_C2FE:
    /* 0000c2fe   4  clr.w (4e0,A4) */
    c->pc = RC_ADDR(0x0000c2feu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x4e0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C302:
    /* 0000c302   6  move.w #1,(4e2,A4) */
    c->pc = RC_ADDR(0x0000c302u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x4e2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C308:
    /* 0000c308   4  jsr (0000d2ae) */
    c->pc = RC_ADDR(0x0000c308u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c30cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000d2aeu);
    return;

L_C30C:
    /* 0000c30c   2  unlk A5 */
    c->pc = RC_ADDR(0x0000c30cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_C30E:
    /* 0000c30e   2  rts */
    c->pc = RC_ADDR(0x0000c30eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
