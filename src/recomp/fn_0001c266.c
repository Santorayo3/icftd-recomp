/* fn_0001c266 - 204 byte(s), 64 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001c266(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001c266u): goto L_1C266;
    case RC_ADDR(0x0001c26au): goto L_1C26A;
    case RC_ADDR(0x0001c26eu): goto L_1C26E;
    case RC_ADDR(0x0001c272u): goto L_1C272;
    case RC_ADDR(0x0001c278u): goto L_1C278;
    case RC_ADDR(0x0001c27cu): goto L_1C27C;
    case RC_ADDR(0x0001c27eu): goto L_1C27E;
    case RC_ADDR(0x0001c282u): goto L_1C282;
    case RC_ADDR(0x0001c284u): goto L_1C284;
    case RC_ADDR(0x0001c288u): goto L_1C288;
    case RC_ADDR(0x0001c28au): goto L_1C28A;
    case RC_ADDR(0x0001c28eu): goto L_1C28E;
    case RC_ADDR(0x0001c290u): goto L_1C290;
    case RC_ADDR(0x0001c294u): goto L_1C294;
    case RC_ADDR(0x0001c298u): goto L_1C298;
    case RC_ADDR(0x0001c29au): goto L_1C29A;
    case RC_ADDR(0x0001c29cu): goto L_1C29C;
    case RC_ADDR(0x0001c2a0u): goto L_1C2A0;
    case RC_ADDR(0x0001c2a4u): goto L_1C2A4;
    case RC_ADDR(0x0001c2a8u): goto L_1C2A8;
    case RC_ADDR(0x0001c2acu): goto L_1C2AC;
    case RC_ADDR(0x0001c2aeu): goto L_1C2AE;
    case RC_ADDR(0x0001c2b0u): goto L_1C2B0;
    case RC_ADDR(0x0001c2b4u): goto L_1C2B4;
    case RC_ADDR(0x0001c2b6u): goto L_1C2B6;
    case RC_ADDR(0x0001c2bcu): goto L_1C2BC;
    case RC_ADDR(0x0001c2c0u): goto L_1C2C0;
    case RC_ADDR(0x0001c2c2u): goto L_1C2C2;
    case RC_ADDR(0x0001c2c4u): goto L_1C2C4;
    case RC_ADDR(0x0001c2c6u): goto L_1C2C6;
    case RC_ADDR(0x0001c2cau): goto L_1C2CA;
    case RC_ADDR(0x0001c2ccu): goto L_1C2CC;
    case RC_ADDR(0x0001c2d2u): goto L_1C2D2;
    case RC_ADDR(0x0001c2d6u): goto L_1C2D6;
    case RC_ADDR(0x0001c2d8u): goto L_1C2D8;
    case RC_ADDR(0x0001c2dau): goto L_1C2DA;
    case RC_ADDR(0x0001c2dcu): goto L_1C2DC;
    case RC_ADDR(0x0001c2deu): goto L_1C2DE;
    case RC_ADDR(0x0001c2e4u): goto L_1C2E4;
    case RC_ADDR(0x0001c2e8u): goto L_1C2E8;
    case RC_ADDR(0x0001c2eau): goto L_1C2EA;
    case RC_ADDR(0x0001c2ecu): goto L_1C2EC;
    case RC_ADDR(0x0001c2eeu): goto L_1C2EE;
    case RC_ADDR(0x0001c2f2u): goto L_1C2F2;
    case RC_ADDR(0x0001c2f4u): goto L_1C2F4;
    case RC_ADDR(0x0001c2f6u): goto L_1C2F6;
    case RC_ADDR(0x0001c2fau): goto L_1C2FA;
    case RC_ADDR(0x0001c2feu): goto L_1C2FE;
    case RC_ADDR(0x0001c302u): goto L_1C302;
    case RC_ADDR(0x0001c306u): goto L_1C306;
    case RC_ADDR(0x0001c308u): goto L_1C308;
    case RC_ADDR(0x0001c30cu): goto L_1C30C;
    case RC_ADDR(0x0001c30eu): goto L_1C30E;
    case RC_ADDR(0x0001c312u): goto L_1C312;
    case RC_ADDR(0x0001c316u): goto L_1C316;
    case RC_ADDR(0x0001c318u): goto L_1C318;
    case RC_ADDR(0x0001c31cu): goto L_1C31C;
    case RC_ADDR(0x0001c31eu): goto L_1C31E;
    case RC_ADDR(0x0001c322u): goto L_1C322;
    case RC_ADDR(0x0001c324u): goto L_1C324;
    case RC_ADDR(0x0001c328u): goto L_1C328;
    case RC_ADDR(0x0001c32au): goto L_1C32A;
    case RC_ADDR(0x0001c32eu): goto L_1C32E;
    case RC_ADDR(0x0001c330u): goto L_1C330;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1C266:
    /* 0001c266   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001c266u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1C26A:
    /* 0001c26a   4  lea (ffffc7c8,A4),A0 */
    c->pc = RC_ADDR(0x0001c26au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3838u);

L_1C26E:
    /* 0001c26e   4  move.l A0,(2390,A4) */
    c->pc = RC_ADDR(0x0001c26eu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2390u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C272:
    /* 0001c272   6  adda.l #24,A0 */
    c->pc = RC_ADDR(0x0001c272u);
    rc_step(c, m, 16);
    t0 = 0x00000024u;
    c->a[0] += t0;

L_1C278:
    /* 0001c278   4  cmpi.w #e0,(A0)+ */
    c->pc = RC_ADDR(0x0001c278u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_cmp(c, RC_W, t0, 0x000000e0u);

L_1C27C:
    /* 0001c27c   2  bne 0001c278 */
    c->pc = RC_ADDR(0x0001c27cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_1C278; }

L_1C27E:
    /* 0001c27e   4  movea.l (2384,A4),A1 */
    c->pc = RC_ADDR(0x0001c27eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2384u));
    c->a[1] = t0;

L_1C282:
    /* 0001c282   2  addq.l #8,A1 */
    c->pc = RC_ADDR(0x0001c282u);
    rc_step(c, m, 8);
    c->a[1] += 0x00000008u;

L_1C284:
    /* 0001c284   4  move.w #3,D0 */
    c->pc = RC_ADDR(0x0001c284u);
    rc_step(c, m, 8);
    t0 = 0x00000003u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C288:
    /* 0001c288   2  move.w (A1)+,(A0) */
    c->pc = RC_ADDR(0x0001c288u);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C28A:
    /* 0001c28a   4  move.w (A1)+,(4,A0) */
    c->pc = RC_ADDR(0x0001c28au);
    rc_step(c, m, 16);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_wr16(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C28E:
    /* 0001c28e   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x0001c28eu);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_1C290:
    /* 0001c290   4  dbf D0,0001c288 */
    c->pc = RC_ADDR(0x0001c290u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1C288; }
    }

L_1C294:
    /* 0001c294   4  cmpi.w #e0,(A0)+ */
    c->pc = RC_ADDR(0x0001c294u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_cmp(c, RC_W, t0, 0x000000e0u);

L_1C298:
    /* 0001c298   2  bne 0001c294 */
    c->pc = RC_ADDR(0x0001c298u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_1C294; }

L_1C29A:
    /* 0001c29a   2  move.l A0,D0 */
    c->pc = RC_ADDR(0x0001c29au);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C29C:
    /* 0001c29c   4  sub.l (2390,A4),D0 */
    c->pc = RC_ADDR(0x0001c29cu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2390u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1C2A0:
    /* 0001c2a0   4  move.l D0,(228e,A4) */
    c->pc = RC_ADDR(0x0001c2a0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x228eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C2A4:
    /* 0001c2a4   4  movea.l (2292,A4),A1 */
    c->pc = RC_ADDR(0x0001c2a4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2292u));
    c->a[1] = t0;

L_1C2A8:
    /* 0001c2a8   4  movea.l (2296,A4),A2 */
    c->pc = RC_ADDR(0x0001c2a8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2296u));
    c->a[2] = t0;

L_1C2AC:
    /* 0001c2ac   2  addq.l #8,A1 */
    c->pc = RC_ADDR(0x0001c2acu);
    rc_step(c, m, 8);
    c->a[1] += 0x00000008u;

L_1C2AE:
    /* 0001c2ae   2  addq.l #8,A2 */
    c->pc = RC_ADDR(0x0001c2aeu);
    rc_step(c, m, 8);
    c->a[2] += 0x00000008u;

L_1C2B0:
    /* 0001c2b0   4  move.w #2,D0 */
    c->pc = RC_ADDR(0x0001c2b0u);
    rc_step(c, m, 8);
    t0 = 0x00000002u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C2B4:
    /* 0001c2b4   2  move.l (A1)+,D1 */
    c->pc = RC_ADDR(0x0001c2b4u);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C2B6:
    /* 0001c2b6   6  addi.l #190,D1 */
    c->pc = RC_ADDR(0x0001c2b6u);
    rc_step(c, m, 16);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + 0x00000190u;
    rc_flags_add(c, RC_L, t1, 0x00000190u, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1C2BC:
    /* 0001c2bc   4  move.w D1,(4,A0) */
    c->pc = RC_ADDR(0x0001c2bcu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C2C0:
    /* 0001c2c0   2  swap D1 */
    c->pc = RC_ADDR(0x0001c2c0u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_1C2C2:
    /* 0001c2c2   2  move.w D1,(A0) */
    c->pc = RC_ADDR(0x0001c2c2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C2C4:
    /* 0001c2c4   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x0001c2c4u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_1C2C6:
    /* 0001c2c6   4  dbf D0,0001c2b4 */
    c->pc = RC_ADDR(0x0001c2c6u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1C2B4; }
    }

L_1C2CA:
    /* 0001c2ca   2  move.l (A2)+,D1 */
    c->pc = RC_ADDR(0x0001c2cau);
    rc_step(c, m, 12);
    t3 = c->a[2];
    c->a[2] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C2CC:
    /* 0001c2cc   6  addi.l #190,D1 */
    c->pc = RC_ADDR(0x0001c2ccu);
    rc_step(c, m, 16);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + 0x00000190u;
    rc_flags_add(c, RC_L, t1, 0x00000190u, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1C2D2:
    /* 0001c2d2   4  move.w D1,(4,A0) */
    c->pc = RC_ADDR(0x0001c2d2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C2D6:
    /* 0001c2d6   2  swap D1 */
    c->pc = RC_ADDR(0x0001c2d6u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_1C2D8:
    /* 0001c2d8   2  move.w D1,(A0) */
    c->pc = RC_ADDR(0x0001c2d8u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C2DA:
    /* 0001c2da   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x0001c2dau);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_1C2DC:
    /* 0001c2dc   2  move.l (A2)+,D1 */
    c->pc = RC_ADDR(0x0001c2dcu);
    rc_step(c, m, 12);
    t3 = c->a[2];
    c->a[2] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C2DE:
    /* 0001c2de   6  addi.l #190,D1 */
    c->pc = RC_ADDR(0x0001c2deu);
    rc_step(c, m, 16);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + 0x00000190u;
    rc_flags_add(c, RC_L, t1, 0x00000190u, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1C2E4:
    /* 0001c2e4   4  move.w D1,(4,A0) */
    c->pc = RC_ADDR(0x0001c2e4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C2E8:
    /* 0001c2e8   2  swap D1 */
    c->pc = RC_ADDR(0x0001c2e8u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_1C2EA:
    /* 0001c2ea   2  move.w D1,(A0) */
    c->pc = RC_ADDR(0x0001c2eau);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C2EC:
    /* 0001c2ec   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x0001c2ecu);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_1C2EE:
    /* 0001c2ee   4  cmpi.w #e0,(A0)+ */
    c->pc = RC_ADDR(0x0001c2eeu);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_cmp(c, RC_W, t0, 0x000000e0u);

L_1C2F2:
    /* 0001c2f2   2  bne 0001c2ee */
    c->pc = RC_ADDR(0x0001c2f2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_1C2EE; }

L_1C2F4:
    /* 0001c2f4   2  move.l A0,D0 */
    c->pc = RC_ADDR(0x0001c2f4u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C2F6:
    /* 0001c2f6   4  sub.l (2390,A4),D0 */
    c->pc = RC_ADDR(0x0001c2f6u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2390u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1C2FA:
    /* 0001c2fa   4  move.l D0,(228a,A4) */
    c->pc = RC_ADDR(0x0001c2fau);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x228au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C2FE:
    /* 0001c2fe   4  lea (fffff326,A4),A1 */
    c->pc = RC_ADDR(0x0001c2feu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0xcdau);

L_1C302:
    /* 0001c302   4  move.w #4,D0 */
    c->pc = RC_ADDR(0x0001c302u);
    rc_step(c, m, 8);
    t0 = 0x00000004u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C306:
    /* 0001c306   2  move.w (A1)+,(A0) */
    c->pc = RC_ADDR(0x0001c306u);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C308:
    /* 0001c308   4  move.w (A1)+,(4,A0) */
    c->pc = RC_ADDR(0x0001c308u);
    rc_step(c, m, 16);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_wr16(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C30C:
    /* 0001c30c   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x0001c30cu);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_1C30E:
    /* 0001c30e   4  dbf D0,0001c306 */
    c->pc = RC_ADDR(0x0001c30eu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1C306; }
    }

L_1C312:
    /* 0001c312   4  cmpi.w #e0,(A0)+ */
    c->pc = RC_ADDR(0x0001c312u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_cmp(c, RC_W, t0, 0x000000e0u);

L_1C316:
    /* 0001c316   2  bne 0001c312 */
    c->pc = RC_ADDR(0x0001c316u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_1C312; }

L_1C318:
    /* 0001c318   4  movea.l (238c,A4),A1 */
    c->pc = RC_ADDR(0x0001c318u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x238cu));
    c->a[1] = t0;

L_1C31C:
    /* 0001c31c   2  addq.l #8,A1 */
    c->pc = RC_ADDR(0x0001c31cu);
    rc_step(c, m, 8);
    c->a[1] += 0x00000008u;

L_1C31E:
    /* 0001c31e   4  move.w #4,D0 */
    c->pc = RC_ADDR(0x0001c31eu);
    rc_step(c, m, 8);
    t0 = 0x00000004u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C322:
    /* 0001c322   2  move.w (A1)+,(A0) */
    c->pc = RC_ADDR(0x0001c322u);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C324:
    /* 0001c324   4  move.w (A1)+,(4,A0) */
    c->pc = RC_ADDR(0x0001c324u);
    rc_step(c, m, 16);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_wr16(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C328:
    /* 0001c328   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x0001c328u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_1C32A:
    /* 0001c32a   4  dbf D0,0001c322 */
    c->pc = RC_ADDR(0x0001c32au);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1C322; }
    }

L_1C32E:
    /* 0001c32e   2  unlk A5 */
    c->pc = RC_ADDR(0x0001c32eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1C330:
    /* 0001c330   2  rts */
    c->pc = RC_ADDR(0x0001c330u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
