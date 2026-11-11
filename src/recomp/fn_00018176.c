/* fn_00018176 - 36 byte(s), 11 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00018176(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00018176u): goto L_18176;
    case RC_ADDR(0x0001817au): goto L_1817A;
    case RC_ADDR(0x0001817eu): goto L_1817E;
    case RC_ADDR(0x00018182u): goto L_18182;
    case RC_ADDR(0x00018186u): goto L_18186;
    case RC_ADDR(0x00018188u): goto L_18188;
    case RC_ADDR(0x0001818cu): goto L_1818C;
    case RC_ADDR(0x00018190u): goto L_18190;
    case RC_ADDR(0x00018194u): goto L_18194;
    case RC_ADDR(0x00018196u): goto L_18196;
    case RC_ADDR(0x00018198u): goto L_18198;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_18176:
    /* 00018176   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00018176u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1817A:
    /* 0001817a   4  move.l (e00,A4),-(A7) */
    c->pc = RC_ADDR(0x0001817au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe00u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1817E:
    /* 0001817e   4  pea (00000005).l */
    c->pc = RC_ADDR(0x0001817eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000005u);

L_18182:
    /* 00018182   4  jsr (ffff8356,A4) */
    c->pc = RC_ADDR(0x00018182u);
    rc_step(c, m, 18);
    /* vector 142 */
    rc_push32(c, m, RC_ADDR(0x00018186u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021dacu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021744u);
    return;

L_18186:
    /* 00018186   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00018186u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_18188:
    /* 00018188   4  pea (00000016).l */
    c->pc = RC_ADDR(0x00018188u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000016u);

L_1818C:
    /* 0001818c   4  move.l (e00,A4),-(A7) */
    c->pc = RC_ADDR(0x0001818cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe00u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18190:
    /* 00018190   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00018190u);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x00018194u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_18194:
    /* 00018194   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00018194u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_18196:
    /* 00018196   2  unlk A5 */
    c->pc = RC_ADDR(0x00018196u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_18198:
    /* 00018198   2  rts */
    c->pc = RC_ADDR(0x00018198u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
