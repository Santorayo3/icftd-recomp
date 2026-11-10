/* fn_0001d9c8 - 64 byte(s), 20 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001d9c8(cpu_t *c, rt_machine *m)
{
    u32 t0, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d9c8u): goto L_1D9C8;
    case RC_ADDR(0x0001d9ccu): goto L_1D9CC;
    case RC_ADDR(0x0001d9ceu): goto L_1D9CE;
    case RC_ADDR(0x0001d9d2u): goto L_1D9D2;
    case RC_ADDR(0x0001d9d4u): goto L_1D9D4;
    case RC_ADDR(0x0001d9d6u): goto L_1D9D6;
    case RC_ADDR(0x0001d9dau): goto L_1D9DA;
    case RC_ADDR(0x0001d9deu): goto L_1D9DE;
    case RC_ADDR(0x0001d9e2u): goto L_1D9E2;
    case RC_ADDR(0x0001d9e4u): goto L_1D9E4;
    case RC_ADDR(0x0001d9e8u): goto L_1D9E8;
    case RC_ADDR(0x0001d9eeu): goto L_1D9EE;
    case RC_ADDR(0x0001d9f0u): goto L_1D9F0;
    case RC_ADDR(0x0001d9f4u): goto L_1D9F4;
    case RC_ADDR(0x0001d9f8u): goto L_1D9F8;
    case RC_ADDR(0x0001d9fcu): goto L_1D9FC;
    case RC_ADDR(0x0001d9feu): goto L_1D9FE;
    case RC_ADDR(0x0001da02u): goto L_1DA02;
    case RC_ADDR(0x0001da04u): goto L_1DA04;
    case RC_ADDR(0x0001da06u): goto L_1DA06;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D9C8:
    /* 0001d9c8   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001d9c8u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1D9CC:
    /* 0001d9cc   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001d9ccu);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D9CE:
    /* 0001d9ce   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x0001d9ceu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_1D9D2:
    /* 0001d9d2   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x0001d9d2u);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D9D4:
    /* 0001d9d4   2  beq 0001da02 */
    c->pc = RC_ADDR(0x0001d9d4u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1DA02;

L_1D9D6:
    /* 0001d9d6   4  move.w (12,A2),-(A7) */
    c->pc = RC_ADDR(0x0001d9d6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[2] + 0x12u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D9DA:
    /* 0001d9da   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d9dau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D9DE:
    /* 0001d9de   4  pea (14,A2) */
    c->pc = RC_ADDR(0x0001d9deu);
    rc_step(c, m);
    rc_push32(c, m, (c->a[2] + 0x14u));

L_1D9E2:
    /* 0001d9e2   2  bsr 0001da08 */
    c->pc = RC_ADDR(0x0001d9e2u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001d9e4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001da08u);
    return;

L_1D9E4:
    /* 0001d9e4   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001d9e4u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xau);

L_1D9E8:
    /* 0001d9e8   6  btst #2,(11,A2) */
    c->pc = RC_ADDR(0x0001d9e8u);
    rc_step(c, m);
    t3 = (c->a[2] + 0x11u);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1D9EE:
    /* 0001d9ee   2  beq 0001da02 */
    c->pc = RC_ADDR(0x0001d9eeu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1DA02;

L_1D9F0:
    /* 0001d9f0   4  move.w (12,A2),-(A7) */
    c->pc = RC_ADDR(0x0001d9f0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[2] + 0x12u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D9F4:
    /* 0001d9f4   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d9f4u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D9F8:
    /* 0001d9f8   4  pea (94,A2) */
    c->pc = RC_ADDR(0x0001d9f8u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[2] + 0x94u));

L_1D9FC:
    /* 0001d9fc   2  bsr 0001da08 */
    c->pc = RC_ADDR(0x0001d9fcu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001d9feu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001da08u);
    return;

L_1D9FE:
    /* 0001d9fe   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001d9feu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xau);

L_1DA02:
    /* 0001da02   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x0001da02u);
    rc_step(c, m);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_1DA04:
    /* 0001da04   2  unlk A5 */
    c->pc = RC_ADDR(0x0001da04u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1DA06:
    /* 0001da06   2  rts */
    c->pc = RC_ADDR(0x0001da06u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
