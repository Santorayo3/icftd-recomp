/* fn_000014d6 - 28 byte(s), 9 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000014d6(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000014d6u): goto L_14D6;
    case RC_ADDR(0x000014dau): goto L_14DA;
    case RC_ADDR(0x000014deu): goto L_14DE;
    case RC_ADDR(0x000014e2u): goto L_14E2;
    case RC_ADDR(0x000014e4u): goto L_14E4;
    case RC_ADDR(0x000014e8u): goto L_14E8;
    case RC_ADDR(0x000014ecu): goto L_14EC;
    case RC_ADDR(0x000014eeu): goto L_14EE;
    case RC_ADDR(0x000014f0u): goto L_14F0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_14D6:
    /* 000014d6   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000014d6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_14DA:
    /* 000014da   4  pea (ffffefa0,A4) */
    c->pc = RC_ADDR(0x000014dau);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x1060u));

L_14DE:
    /* 000014de   4  jsr (00001042) */
    c->pc = RC_ADDR(0x000014deu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000014e2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001042u);
    return;

L_14E2:
    /* 000014e2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000014e2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_14E4:
    /* 000014e4   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000014e4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_14E8:
    /* 000014e8   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x000014e8u);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x000014ecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cecu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020490u);
    return;

L_14EC:
    /* 000014ec   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000014ecu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_14EE:
    /* 000014ee   2  unlk A5 */
    c->pc = RC_ADDR(0x000014eeu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_14F0:
    /* 000014f0   2  rts */
    c->pc = RC_ADDR(0x000014f0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
