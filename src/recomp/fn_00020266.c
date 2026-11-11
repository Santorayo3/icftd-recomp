/* fn_00020266 - 68 byte(s), 20 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020266(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00020266u): goto L_20266;
    case RC_ADDR(0x0002026au): goto L_2026A;
    case RC_ADDR(0x0002026eu): goto L_2026E;
    case RC_ADDR(0x00020272u): goto L_20272;
    case RC_ADDR(0x00020274u): goto L_20274;
    case RC_ADDR(0x00020278u): goto L_20278;
    case RC_ADDR(0x0002027cu): goto L_2027C;
    case RC_ADDR(0x0002027eu): goto L_2027E;
    case RC_ADDR(0x00020282u): goto L_20282;
    case RC_ADDR(0x00020286u): goto L_20286;
    case RC_ADDR(0x00020288u): goto L_20288;
    case RC_ADDR(0x0002028cu): goto L_2028C;
    case RC_ADDR(0x00020290u): goto L_20290;
    case RC_ADDR(0x00020294u): goto L_20294;
    case RC_ADDR(0x00020296u): goto L_20296;
    case RC_ADDR(0x0002029au): goto L_2029A;
    case RC_ADDR(0x0002029eu): goto L_2029E;
    case RC_ADDR(0x000202a2u): goto L_202A2;
    case RC_ADDR(0x000202a6u): goto L_202A6;
    case RC_ADDR(0x000202a8u): goto L_202A8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20266:
    /* 00020266   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00020266u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_2026A:
    /* 0002026a   4  clr.w (2ad8,A4) */
    c->pc = RC_ADDR(0x0002026au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x2ad8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2026E:
    /* 0002026e   4  tst.l (2ada,A4) */
    c->pc = RC_ADDR(0x0002026eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2adau));
    rc_set_nzvc(c, t0, RC_L);

L_20272:
    /* 00020272   2  beq 00020282 */
    c->pc = RC_ADDR(0x00020272u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20282;

L_20274:
    /* 00020274   4  move.l (2ada,A4),-(A7) */
    c->pc = RC_ADDR(0x00020274u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2adau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20278:
    /* 00020278   4  jsr (00020490) */
    c->pc = RC_ADDR(0x00020278u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0002027cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00020490u);
    return;

L_2027C:
    /* 0002027c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0002027cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2027E:
    /* 0002027e   4  clr.l (2ada,A4) */
    c->pc = RC_ADDR(0x0002027eu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x2adau), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20282:
    /* 00020282   4  tst.l (2ade,A4) */
    c->pc = RC_ADDR(0x00020282u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2adeu));
    rc_set_nzvc(c, t0, RC_L);

L_20286:
    /* 00020286   2  beq 0002029a */
    c->pc = RC_ADDR(0x00020286u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2029A;

L_20288:
    /* 00020288   4  move.l (2b14,A4),-(A7) */
    c->pc = RC_ADDR(0x00020288u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2b14u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2028C:
    /* 0002028c   4  move.l (2ade,A4),-(A7) */
    c->pc = RC_ADDR(0x0002028cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2adeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20290:
    /* 00020290   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00020290u);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x00020294u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_20294:
    /* 00020294   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020294u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20296:
    /* 00020296   4  clr.l (2ade,A4) */
    c->pc = RC_ADDR(0x00020296u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x2adeu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2029A:
    /* 0002029a   4  clr.b (2ae2,A4) */
    c->pc = RC_ADDR(0x0002029au);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[4] + 0x2ae2u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_2029E:
    /* 0002029e   4  clr.l (ac2,A4) */
    c->pc = RC_ADDR(0x0002029eu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0xac2u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_202A2:
    /* 000202a2   4  clr.w (2b18,A4) */
    c->pc = RC_ADDR(0x000202a2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x2b18u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_202A6:
    /* 000202a6   2  unlk A5 */
    c->pc = RC_ADDR(0x000202a6u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_202A8:
    /* 000202a8   2  rts */
    c->pc = RC_ADDR(0x000202a8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
