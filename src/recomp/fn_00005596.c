/* fn_00005596 - 36 byte(s), 11 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00005596(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00005596u): goto L_5596;
    case RC_ADDR(0x0000559au): goto L_559A;
    case RC_ADDR(0x0000559eu): goto L_559E;
    case RC_ADDR(0x000055a2u): goto L_55A2;
    case RC_ADDR(0x000055a6u): goto L_55A6;
    case RC_ADDR(0x000055a8u): goto L_55A8;
    case RC_ADDR(0x000055acu): goto L_55AC;
    case RC_ADDR(0x000055b0u): goto L_55B0;
    case RC_ADDR(0x000055b4u): goto L_55B4;
    case RC_ADDR(0x000055b6u): goto L_55B6;
    case RC_ADDR(0x000055b8u): goto L_55B8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5596:
    /* 00005596   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00005596u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_559A:
    /* 0000559a   4  move.l (ffffce20,A4),-(A7) */
    c->pc = RC_ADDR(0x0000559au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x31e0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_559E:
    /* 0000559e   4  pea (00000005).l */
    c->pc = RC_ADDR(0x0000559eu);
    rc_step(c, m);
    rc_push32(c, m, 0x00000005u);

L_55A2:
    /* 000055a2   4  jsr (ffff8356,A4) */
    c->pc = RC_ADDR(0x000055a2u);
    rc_step(c, m);
    /* vector 142 */
    rc_push32(c, m, RC_ADDR(0x000055a6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021dacu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021744u);
    return;

L_55A6:
    /* 000055a6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000055a6u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_55A8:
    /* 000055a8   4  pea (00000016).l */
    c->pc = RC_ADDR(0x000055a8u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000016u);

L_55AC:
    /* 000055ac   4  move.l (ffffce20,A4),-(A7) */
    c->pc = RC_ADDR(0x000055acu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x31e0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_55B0:
    /* 000055b0   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x000055b0u);
    rc_step(c, m);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x000055b4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_55B4:
    /* 000055b4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000055b4u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_55B6:
    /* 000055b6   2  unlk A5 */
    c->pc = RC_ADDR(0x000055b6u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_55B8:
    /* 000055b8   2  rts */
    c->pc = RC_ADDR(0x000055b8u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
