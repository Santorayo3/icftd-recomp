/* fn_0000f57e - 40 byte(s), 11 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f57e(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f57eu): goto L_F57E;
    case RC_ADDR(0x0000f582u): goto L_F582;
    case RC_ADDR(0x0000f586u): goto L_F586;
    case RC_ADDR(0x0000f588u): goto L_F588;
    case RC_ADDR(0x0000f58cu): goto L_F58C;
    case RC_ADDR(0x0000f58eu): goto L_F58E;
    case RC_ADDR(0x0000f592u): goto L_F592;
    case RC_ADDR(0x0000f598u): goto L_F598;
    case RC_ADDR(0x0000f59au): goto L_F59A;
    case RC_ADDR(0x0000f5a0u): goto L_F5A0;
    case RC_ADDR(0x0000f5a4u): goto L_F5A4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F57E:
    /* 0000f57e   4  movem.l { D6 A7 },-(SP) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f57eu);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_F582:
    /* 0000f582   4  lea (3e,A6),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f582u);
    c->a[1] = (c->a[6] + 0x3eu);

L_F586:
    /* 0000f586   2  ext.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f586u);
    rc_ext_w(c, 0);

L_F588:
    /* 0000f588   4  mulu.w #16,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f588u);
    t0 = 0x00000016u;
    rc_mulu(c, 0, t0);

L_F58C:
    /* 0000f58c   2  adda.w D0,A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f58cu);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[1] += rc_ext(t0, RC_W);

L_F58E:
    /* 0000f58e   4  clr.b (0,A1) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f58eu);
    rc_wr8(c, m, (c->a[1] + 0x0u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_F592:
    /* 0000f592   6  cmpi.b #1,(1,A1) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f592u);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u));
    rc_cmp(c, RC_B, t0, 0x00000001u);

L_F598:
    /* 0000f598   2  bne 0000f5a0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f598u);
    if (rc_cond(c, 6)) goto L_F5A0;

L_F59A:
    /* 0000f59a   6  move.b #2,(0,A1) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f59au);
    t0 = 0x00000002u;
    rc_wr8(c, m, (c->a[1] + 0x0u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_F5A0:
    /* 0000f5a0   4  movem.l (SP)+,{ D0 A1 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f5a0u);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_F5A4:
    /* 0000f5a4   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f5a4u);
    rc_ret(c, m);
    return;

}
