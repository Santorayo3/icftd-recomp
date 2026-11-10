/* fn_0001c1c6 - 106 byte(s), 30 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001c1c6(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001c1c6u): goto L_1C1C6;
    case RC_ADDR(0x0001c1cau): goto L_1C1CA;
    case RC_ADDR(0x0001c1ccu): goto L_1C1CC;
    case RC_ADDR(0x0001c1d0u): goto L_1C1D0;
    case RC_ADDR(0x0001c1d4u): goto L_1C1D4;
    case RC_ADDR(0x0001c1d6u): goto L_1C1D6;
    case RC_ADDR(0x0001c1dau): goto L_1C1DA;
    case RC_ADDR(0x0001c1deu): goto L_1C1DE;
    case RC_ADDR(0x0001c1e2u): goto L_1C1E2;
    case RC_ADDR(0x0001c1e6u): goto L_1C1E6;
    case RC_ADDR(0x0001c1eau): goto L_1C1EA;
    case RC_ADDR(0x0001c1eeu): goto L_1C1EE;
    case RC_ADDR(0x0001c1f2u): goto L_1C1F2;
    case RC_ADDR(0x0001c1f6u): goto L_1C1F6;
    case RC_ADDR(0x0001c1fau): goto L_1C1FA;
    case RC_ADDR(0x0001c1feu): goto L_1C1FE;
    case RC_ADDR(0x0001c202u): goto L_1C202;
    case RC_ADDR(0x0001c206u): goto L_1C206;
    case RC_ADDR(0x0001c20au): goto L_1C20A;
    case RC_ADDR(0x0001c20eu): goto L_1C20E;
    case RC_ADDR(0x0001c212u): goto L_1C212;
    case RC_ADDR(0x0001c216u): goto L_1C216;
    case RC_ADDR(0x0001c218u): goto L_1C218;
    case RC_ADDR(0x0001c21cu): goto L_1C21C;
    case RC_ADDR(0x0001c220u): goto L_1C220;
    case RC_ADDR(0x0001c222u): goto L_1C222;
    case RC_ADDR(0x0001c226u): goto L_1C226;
    case RC_ADDR(0x0001c22au): goto L_1C22A;
    case RC_ADDR(0x0001c22cu): goto L_1C22C;
    case RC_ADDR(0x0001c22eu): goto L_1C22E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1C1C6:
    /* 0001c1c6   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c1c6u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1C1CA:
    /* 0001c1ca   2  bsr 0001c174 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c1cau);
    rc_push32(c, m, RC_ADDR(0x0001c1ccu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c174u);
    return;

L_1C1CC:
    /* 0001c1cc   4  pea (00000032).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c1ccu);
    rc_push32(c, m, 0x00000032u);

L_1C1D0:
    /* 0001c1d0   4  jsr (ffff8302,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c1d0u);
    /* vector 128 */
    rc_push32(c, m, RC_ADDR(0x0001c1d4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021428u);
    return;

L_1C1D4:
    /* 0001c1d4   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c1d4u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1C1D6:
    /* 0001c1d6   4  move.w #40,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c1d6u);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C1DA:
    /* 0001c1da   4  move.w #2,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c1dau);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C1DE:
    /* 0001c1de   4  move.l (23a6,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c1deu);
    t0 = rc_rd32(c, m, (c->a[4] + 0x23a6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C1E2:
    /* 0001c1e2   4  move.w (23a0,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c1e2u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x23a0u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C1E6:
    /* 0001c1e6   4  move.l (2394,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c1e6u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2394u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C1EA:
    /* 0001c1ea   4  jsr (ffff80b6,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c1eau);
    /* vector 30 */
    rc_push32(c, m, RC_ADDR(0x0001c1eeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00009b60u);
    return;

L_1C1EE:
    /* 0001c1ee   4  lea (e,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c1eeu);
    c->a[7] = (c->a[7] + 0xeu);

L_1C1F2:
    /* 0001c1f2   4  move.w #40,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c1f2u);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C1F6:
    /* 0001c1f6   4  move.w #3,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c1f6u);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C1FA:
    /* 0001c1fa   4  move.l (23a6,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c1fau);
    t0 = rc_rd32(c, m, (c->a[4] + 0x23a6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C1FE:
    /* 0001c1fe   4  move.w (23a0,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c1feu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x23a0u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C202:
    /* 0001c202   4  move.l (2394,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c202u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2394u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C206:
    /* 0001c206   4  jsr (ffff80b6,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c206u);
    /* vector 30 */
    rc_push32(c, m, RC_ADDR(0x0001c20au));
    rc_depth++;
    c->pc = RC_ADDR(0x00009b60u);
    return;

L_1C20A:
    /* 0001c20a   4  lea (e,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c20au);
    c->a[7] = (c->a[7] + 0xeu);

L_1C20E:
    /* 0001c20e   4  pea (00000064).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c20eu);
    rc_push32(c, m, 0x00000064u);

L_1C212:
    /* 0001c212   4  jsr (ffff8302,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c212u);
    /* vector 128 */
    rc_push32(c, m, RC_ADDR(0x0001c216u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021428u);
    return;

L_1C216:
    /* 0001c216   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c216u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1C218:
    /* 0001c218   4  move.w #2,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c218u);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C21C:
    /* 0001c21c   4  jsr (ffff80c2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c21cu);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0001c220u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009bcau);
    return;

L_1C220:
    /* 0001c220   2  addq.w #2,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c220u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1C222:
    /* 0001c222   4  move.w #3,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c222u);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C226:
    /* 0001c226   4  jsr (ffff80c2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c226u);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0001c22au));
    rc_depth++;
    c->pc = RC_ADDR(0x00009bcau);
    return;

L_1C22A:
    /* 0001c22a   2  addq.w #2,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c22au);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1C22C:
    /* 0001c22c   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c22cu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1C22E:
    /* 0001c22e   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c22eu);
    rc_ret(c, m);
    return;

}
