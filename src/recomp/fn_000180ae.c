/* fn_000180ae - 66 byte(s), 17 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000180ae(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000180aeu): goto L_180AE;
    case RC_ADDR(0x000180b2u): goto L_180B2;
    case RC_ADDR(0x000180b6u): goto L_180B6;
    case RC_ADDR(0x000180bau): goto L_180BA;
    case RC_ADDR(0x000180c0u): goto L_180C0;
    case RC_ADDR(0x000180c4u): goto L_180C4;
    case RC_ADDR(0x000180cau): goto L_180CA;
    case RC_ADDR(0x000180ceu): goto L_180CE;
    case RC_ADDR(0x000180d4u): goto L_180D4;
    case RC_ADDR(0x000180d8u): goto L_180D8;
    case RC_ADDR(0x000180dcu): goto L_180DC;
    case RC_ADDR(0x000180deu): goto L_180DE;
    case RC_ADDR(0x000180e2u): goto L_180E2;
    case RC_ADDR(0x000180e6u): goto L_180E6;
    case RC_ADDR(0x000180eau): goto L_180EA;
    case RC_ADDR(0x000180ecu): goto L_180EC;
    case RC_ADDR(0x000180eeu): goto L_180EE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_180AE:
    /* 000180ae   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x000180aeu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_180B2:
    /* 000180b2   4  jsr (00018176) */
    c->pc = RC_ADDR(0x000180b2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000180b6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00018176u);
    return;

L_180B6:
    /* 000180b6   4  movea.l (ffffcb0c,A4),A0 */
    c->pc = RC_ADDR(0x000180b6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f4u));
    c->a[0] = t0;

L_180BA:
    /* 000180ba   6  move.l (4,A0),(fffffffc,A5) */
    c->pc = RC_ADDR(0x000180bau);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_180C0:
    /* 000180c0   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000180c0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_180C4:
    /* 000180c4   6  move.l (e32,A4),(4,A0) */
    c->pc = RC_ADDR(0x000180c4u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe32u));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_180CA:
    /* 000180ca   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000180cau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_180CE:
    /* 000180ce   6  move.w (e36,A4),(8,A0) */
    c->pc = RC_ADDR(0x000180ceu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe36u));
    rc_wr16(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_180D4:
    /* 000180d4   4  move.l (ffffcb0c,A4),-(A7) */
    c->pc = RC_ADDR(0x000180d4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_180D8:
    /* 000180d8   4  jsr (ffff8374,A4) */
    c->pc = RC_ADDR(0x000180d8u);
    rc_step(c, m, 18);
    /* vector 147 */
    rc_push32(c, m, RC_ADDR(0x000180dcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021dcau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021898u);
    return;

L_180DC:
    /* 000180dc   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000180dcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_180DE:
    /* 000180de   4  pea (00000190).l */
    c->pc = RC_ADDR(0x000180deu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000190u);

L_180E2:
    /* 000180e2   4  move.l (a12,A4),-(A7) */
    c->pc = RC_ADDR(0x000180e2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa12u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_180E6:
    /* 000180e6   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x000180e6u);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x000180eau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_180EA:
    /* 000180ea   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000180eau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_180EC:
    /* 000180ec   2  unlk A5 */
    c->pc = RC_ADDR(0x000180ecu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_180EE:
    /* 000180ee   2  rts */
    c->pc = RC_ADDR(0x000180eeu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
