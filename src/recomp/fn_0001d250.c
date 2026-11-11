/* fn_0001d250 - 118 byte(s), 35 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001d250(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d250u): goto L_1D250;
    case RC_ADDR(0x0001d254u): goto L_1D254;
    case RC_ADDR(0x0001d258u): goto L_1D258;
    case RC_ADDR(0x0001d25eu): goto L_1D25E;
    case RC_ADDR(0x0001d262u): goto L_1D262;
    case RC_ADDR(0x0001d266u): goto L_1D266;
    case RC_ADDR(0x0001d268u): goto L_1D268;
    case RC_ADDR(0x0001d26cu): goto L_1D26C;
    case RC_ADDR(0x0001d270u): goto L_1D270;
    case RC_ADDR(0x0001d274u): goto L_1D274;
    case RC_ADDR(0x0001d276u): goto L_1D276;
    case RC_ADDR(0x0001d27au): goto L_1D27A;
    case RC_ADDR(0x0001d27cu): goto L_1D27C;
    case RC_ADDR(0x0001d280u): goto L_1D280;
    case RC_ADDR(0x0001d284u): goto L_1D284;
    case RC_ADDR(0x0001d286u): goto L_1D286;
    case RC_ADDR(0x0001d28au): goto L_1D28A;
    case RC_ADDR(0x0001d28cu): goto L_1D28C;
    case RC_ADDR(0x0001d290u): goto L_1D290;
    case RC_ADDR(0x0001d294u): goto L_1D294;
    case RC_ADDR(0x0001d296u): goto L_1D296;
    case RC_ADDR(0x0001d29au): goto L_1D29A;
    case RC_ADDR(0x0001d29cu): goto L_1D29C;
    case RC_ADDR(0x0001d2a0u): goto L_1D2A0;
    case RC_ADDR(0x0001d2a4u): goto L_1D2A4;
    case RC_ADDR(0x0001d2a6u): goto L_1D2A6;
    case RC_ADDR(0x0001d2aau): goto L_1D2AA;
    case RC_ADDR(0x0001d2acu): goto L_1D2AC;
    case RC_ADDR(0x0001d2b0u): goto L_1D2B0;
    case RC_ADDR(0x0001d2b4u): goto L_1D2B4;
    case RC_ADDR(0x0001d2b6u): goto L_1D2B6;
    case RC_ADDR(0x0001d2bau): goto L_1D2BA;
    case RC_ADDR(0x0001d2beu): goto L_1D2BE;
    case RC_ADDR(0x0001d2c2u): goto L_1D2C2;
    case RC_ADDR(0x0001d2c4u): goto L_1D2C4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D250:
    /* 0001d250   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001d250u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1D254:
    /* 0001d254   4  jsr (0002198a) */
    c->pc = RC_ADDR(0x0001d254u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d258u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002198au);
    return;

L_1D258:
    /* 0001d258   6  move.w #1,(ffffcb2c,A4) */
    c->pc = RC_ADDR(0x0001d258u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x34d4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D25E:
    /* 0001d25e   4  clr.w (ffffcb2a,A4) */
    c->pc = RC_ADDR(0x0001d25eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x34d6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D262:
    /* 0001d262   4  tst.l (ffffcb14,A4) */
    c->pc = RC_ADDR(0x0001d262u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    rc_set_nzvc(c, t0, RC_L);

L_1D266:
    /* 0001d266   2  beq 0001d276 */
    c->pc = RC_ADDR(0x0001d266u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D276;

L_1D268:
    /* 0001d268   4  pea (00000064).l */
    c->pc = RC_ADDR(0x0001d268u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000064u);

L_1D26C:
    /* 0001d26c   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d26cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D270:
    /* 0001d270   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0001d270u);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x0001d274u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_1D274:
    /* 0001d274   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d274u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D276:
    /* 0001d276   4  tst.l (ffffcb0c,A4) */
    c->pc = RC_ADDR(0x0001d276u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f4u));
    rc_set_nzvc(c, t0, RC_L);

L_1D27A:
    /* 0001d27a   2  beq 0001d286 */
    c->pc = RC_ADDR(0x0001d27au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D286;

L_1D27C:
    /* 0001d27c   4  pea (ffffcb0c,A4) */
    c->pc = RC_ADDR(0x0001d27cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x34f4u));

L_1D280:
    /* 0001d280   4  jsr (0001fcce) */
    c->pc = RC_ADDR(0x0001d280u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d284u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fcceu);
    return;

L_1D284:
    /* 0001d284   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001d284u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D286:
    /* 0001d286   4  tst.l (ffffcb10,A4) */
    c->pc = RC_ADDR(0x0001d286u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f0u));
    rc_set_nzvc(c, t0, RC_L);

L_1D28A:
    /* 0001d28a   2  beq 0001d296 */
    c->pc = RC_ADDR(0x0001d28au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D296;

L_1D28C:
    /* 0001d28c   4  pea (ffffcb10,A4) */
    c->pc = RC_ADDR(0x0001d28cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x34f0u));

L_1D290:
    /* 0001d290   4  jsr (0001fcce) */
    c->pc = RC_ADDR(0x0001d290u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d294u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fcceu);
    return;

L_1D294:
    /* 0001d294   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001d294u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D296:
    /* 0001d296   4  tst.l (ffffcbb8,A4) */
    c->pc = RC_ADDR(0x0001d296u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3448u));
    rc_set_nzvc(c, t0, RC_L);

L_1D29A:
    /* 0001d29a   2  beq 0001d2a6 */
    c->pc = RC_ADDR(0x0001d29au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D2A6;

L_1D29C:
    /* 0001d29c   4  move.l (ffffcbb8,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d29cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3448u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D2A0:
    /* 0001d2a0   4  jsr (0001d456) */
    c->pc = RC_ADDR(0x0001d2a0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d2a4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d456u);
    return;

L_1D2A4:
    /* 0001d2a4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001d2a4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D2A6:
    /* 0001d2a6   4  tst.l (ffffcbbc,A4) */
    c->pc = RC_ADDR(0x0001d2a6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    rc_set_nzvc(c, t0, RC_L);

L_1D2AA:
    /* 0001d2aa   2  beq 0001d2b6 */
    c->pc = RC_ADDR(0x0001d2aau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D2B6;

L_1D2AC:
    /* 0001d2ac   4  move.l (ffffcbbc,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d2acu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D2B0:
    /* 0001d2b0   4  jsr (0001d456) */
    c->pc = RC_ADDR(0x0001d2b0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d2b4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d456u);
    return;

L_1D2B4:
    /* 0001d2b4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001d2b4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D2B6:
    /* 0001d2b6   4  clr.l (ffffcbbc,A4) */
    c->pc = RC_ADDR(0x0001d2b6u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x3444u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1D2BA:
    /* 0001d2ba   4  clr.l (ffffcbb8,A4) */
    c->pc = RC_ADDR(0x0001d2bau);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x3448u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1D2BE:
    /* 0001d2be   4  clr.l (ffffcb14,A4) */
    c->pc = RC_ADDR(0x0001d2beu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x34ecu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1D2C2:
    /* 0001d2c2   2  unlk A5 */
    c->pc = RC_ADDR(0x0001d2c2u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D2C4:
    /* 0001d2c4   2  rts */
    c->pc = RC_ADDR(0x0001d2c4u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
