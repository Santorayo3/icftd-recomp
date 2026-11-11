/* fn_0001bf26 - 62 byte(s), 16 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001bf26(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001bf26u): goto L_1BF26;
    case RC_ADDR(0x0001bf2au): goto L_1BF2A;
    case RC_ADDR(0x0001bf2eu): goto L_1BF2E;
    case RC_ADDR(0x0001bf34u): goto L_1BF34;
    case RC_ADDR(0x0001bf38u): goto L_1BF38;
    case RC_ADDR(0x0001bf3eu): goto L_1BF3E;
    case RC_ADDR(0x0001bf42u): goto L_1BF42;
    case RC_ADDR(0x0001bf48u): goto L_1BF48;
    case RC_ADDR(0x0001bf4cu): goto L_1BF4C;
    case RC_ADDR(0x0001bf50u): goto L_1BF50;
    case RC_ADDR(0x0001bf52u): goto L_1BF52;
    case RC_ADDR(0x0001bf56u): goto L_1BF56;
    case RC_ADDR(0x0001bf5au): goto L_1BF5A;
    case RC_ADDR(0x0001bf5eu): goto L_1BF5E;
    case RC_ADDR(0x0001bf60u): goto L_1BF60;
    case RC_ADDR(0x0001bf62u): goto L_1BF62;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1BF26:
    /* 0001bf26   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0001bf26u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1BF2A:
    /* 0001bf2a   4  movea.l (ffffcb10,A4),A0 */
    c->pc = RC_ADDR(0x0001bf2au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f0u));
    c->a[0] = t0;

L_1BF2E:
    /* 0001bf2e   6  move.l (4,A0),(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001bf2eu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BF34:
    /* 0001bf34   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001bf34u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1BF38:
    /* 0001bf38   6  move.l (e32,A4),(4,A0) */
    c->pc = RC_ADDR(0x0001bf38u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe32u));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BF3E:
    /* 0001bf3e   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001bf3eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1BF42:
    /* 0001bf42   6  move.w (e36,A4),(8,A0) */
    c->pc = RC_ADDR(0x0001bf42u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe36u));
    rc_wr16(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BF48:
    /* 0001bf48   4  move.l (ffffcb10,A4),-(A7) */
    c->pc = RC_ADDR(0x0001bf48u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BF4C:
    /* 0001bf4c   4  jsr (ffff8374,A4) */
    c->pc = RC_ADDR(0x0001bf4cu);
    rc_step(c, m, 18);
    /* vector 147 */
    rc_push32(c, m, RC_ADDR(0x0001bf50u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021dcau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021898u);
    return;

L_1BF50:
    /* 0001bf50   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001bf50u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1BF52:
    /* 0001bf52   4  pea (000007d0).l */
    c->pc = RC_ADDR(0x0001bf52u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000007d0u);

L_1BF56:
    /* 0001bf56   4  move.l (a12,A4),-(A7) */
    c->pc = RC_ADDR(0x0001bf56u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa12u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BF5A:
    /* 0001bf5a   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0001bf5au);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x0001bf5eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_1BF5E:
    /* 0001bf5e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001bf5eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1BF60:
    /* 0001bf60   2  unlk A5 */
    c->pc = RC_ADDR(0x0001bf60u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1BF62:
    /* 0001bf62   2  rts */
    c->pc = RC_ADDR(0x0001bf62u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
