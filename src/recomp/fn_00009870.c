/* fn_00009870 - 156 byte(s), 41 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00009870(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00009870u): goto L_9870;
    case RC_ADDR(0x00009874u): goto L_9874;
    case RC_ADDR(0x0000987au): goto L_987A;
    case RC_ADDR(0x0000987eu): goto L_987E;
    case RC_ADDR(0x00009882u): goto L_9882;
    case RC_ADDR(0x00009886u): goto L_9886;
    case RC_ADDR(0x0000988au): goto L_988A;
    case RC_ADDR(0x0000988eu): goto L_988E;
    case RC_ADDR(0x00009892u): goto L_9892;
    case RC_ADDR(0x00009896u): goto L_9896;
    case RC_ADDR(0x0000989au): goto L_989A;
    case RC_ADDR(0x0000989eu): goto L_989E;
    case RC_ADDR(0x000098a2u): goto L_98A2;
    case RC_ADDR(0x000098a6u): goto L_98A6;
    case RC_ADDR(0x000098aau): goto L_98AA;
    case RC_ADDR(0x000098aeu): goto L_98AE;
    case RC_ADDR(0x000098b2u): goto L_98B2;
    case RC_ADDR(0x000098b6u): goto L_98B6;
    case RC_ADDR(0x000098bau): goto L_98BA;
    case RC_ADDR(0x000098beu): goto L_98BE;
    case RC_ADDR(0x000098c2u): goto L_98C2;
    case RC_ADDR(0x000098c6u): goto L_98C6;
    case RC_ADDR(0x000098cau): goto L_98CA;
    case RC_ADDR(0x000098ceu): goto L_98CE;
    case RC_ADDR(0x000098d2u): goto L_98D2;
    case RC_ADDR(0x000098d6u): goto L_98D6;
    case RC_ADDR(0x000098dau): goto L_98DA;
    case RC_ADDR(0x000098deu): goto L_98DE;
    case RC_ADDR(0x000098e0u): goto L_98E0;
    case RC_ADDR(0x000098e4u): goto L_98E4;
    case RC_ADDR(0x000098e8u): goto L_98E8;
    case RC_ADDR(0x000098eau): goto L_98EA;
    case RC_ADDR(0x000098eeu): goto L_98EE;
    case RC_ADDR(0x000098f2u): goto L_98F2;
    case RC_ADDR(0x000098f4u): goto L_98F4;
    case RC_ADDR(0x000098f8u): goto L_98F8;
    case RC_ADDR(0x000098fcu): goto L_98FC;
    case RC_ADDR(0x00009900u): goto L_9900;
    case RC_ADDR(0x00009904u): goto L_9904;
    case RC_ADDR(0x00009908u): goto L_9908;
    case RC_ADDR(0x0000990au): goto L_990A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9870:
    /* 00009870   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00009870u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_9874:
    /* 00009874   6  move.w #1,(2e2,A4) */
    c->pc = RC_ADDR(0x00009874u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x2e2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_987A:
    /* 0000987a   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000987au);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_987E:
    /* 0000987e   4  pea (00009918) */
    c->pc = RC_ADDR(0x0000987eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00009918u));

L_9882:
    /* 00009882   4  pea (0000990c) */
    c->pc = RC_ADDR(0x00009882u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000990cu));

L_9886:
    /* 00009886   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x00009886u);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x0000988au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a64u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000002f4u);
    return;

L_988A:
    /* 0000988a   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000988au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_988E:
    /* 0000988e   4  pea (2d6,A4) */
    c->pc = RC_ADDR(0x0000988eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2d6u));

L_9892:
    /* 00009892   4  pea (2d0,A4) */
    c->pc = RC_ADDR(0x00009892u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2d0u));

L_9896:
    /* 00009896   4  pea (0000991f) */
    c->pc = RC_ADDR(0x00009896u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000991fu));

L_989A:
    /* 0000989a   4  jsr (ffff80b0,A4) */
    c->pc = RC_ADDR(0x0000989au);
    rc_step(c, m, 18);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x0000989eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b06u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009984u);
    return;

L_989E:
    /* 0000989e   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000989eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_98A2:
    /* 000098a2   4  move.l D0,(2c4,A4) */
    c->pc = RC_ADDR(0x000098a2u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2c4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_98A6:
    /* 000098a6   4  pea (2da,A4) */
    c->pc = RC_ADDR(0x000098a6u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2dau));

L_98AA:
    /* 000098aa   4  pea (2d2,A4) */
    c->pc = RC_ADDR(0x000098aau);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2d2u));

L_98AE:
    /* 000098ae   4  pea (00009926) */
    c->pc = RC_ADDR(0x000098aeu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00009926u));

L_98B2:
    /* 000098b2   4  jsr (ffff80b0,A4) */
    c->pc = RC_ADDR(0x000098b2u);
    rc_step(c, m, 18);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x000098b6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b06u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009984u);
    return;

L_98B6:
    /* 000098b6   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000098b6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_98BA:
    /* 000098ba   4  move.l D0,(2c8,A4) */
    c->pc = RC_ADDR(0x000098bau);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2c8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_98BE:
    /* 000098be   4  pea (2de,A4) */
    c->pc = RC_ADDR(0x000098beu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2deu));

L_98C2:
    /* 000098c2   4  pea (2d4,A4) */
    c->pc = RC_ADDR(0x000098c2u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2d4u));

L_98C6:
    /* 000098c6   4  pea (0000992a) */
    c->pc = RC_ADDR(0x000098c6u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000992au));

L_98CA:
    /* 000098ca   4  jsr (ffff80b0,A4) */
    c->pc = RC_ADDR(0x000098cau);
    rc_step(c, m, 18);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x000098ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b06u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009984u);
    return;

L_98CE:
    /* 000098ce   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000098ceu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_98D2:
    /* 000098d2   4  move.l D0,(2cc,A4) */
    c->pc = RC_ADDR(0x000098d2u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2ccu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_98D6:
    /* 000098d6   4  pea (ffff9ff0,A4) */
    c->pc = RC_ADDR(0x000098d6u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x6010u));

L_98DA:
    /* 000098da   4  jsr (ffff810a,A4) */
    c->pc = RC_ADDR(0x000098dau);
    rc_step(c, m, 18);
    /* vector 44 */
    rc_push32(c, m, RC_ADDR(0x000098deu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b60u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000e804u);
    return;

L_98DE:
    /* 000098de   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000098deu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_98E0:
    /* 000098e0   4  pea (0000992e) */
    c->pc = RC_ADDR(0x000098e0u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000992eu));

L_98E4:
    /* 000098e4   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x000098e4u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x000098e8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ce0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000202c4u);
    return;

L_98E8:
    /* 000098e8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000098e8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_98EA:
    /* 000098ea   4  pea (00009630) */
    c->pc = RC_ADDR(0x000098eau);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00009630u));

L_98EE:
    /* 000098ee   4  pea (0000993c) */
    c->pc = RC_ADDR(0x000098eeu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000993cu));

L_98F2:
    /* 000098f2   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000098f2u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_98F4:
    /* 000098f4   4  pea (0000993b) */
    c->pc = RC_ADDR(0x000098f4u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000993bu));

L_98F8:
    /* 000098f8   4  jsr (ffff8242,A4) */
    c->pc = RC_ADDR(0x000098f8u);
    rc_step(c, m, 18);
    /* vector 96 */
    rc_push32(c, m, RC_ADDR(0x000098fcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c98u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001eb94u);
    return;

L_98FC:
    /* 000098fc   4  lea (10,A7),A7 */
    c->pc = RC_ADDR(0x000098fcu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x10u);

L_9900:
    /* 00009900   4  jsr (ffff8284,A4) */
    c->pc = RC_ADDR(0x00009900u);
    rc_step(c, m, 18);
    /* vector 107 */
    rc_push32(c, m, RC_ADDR(0x00009904u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cdau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020266u);
    return;

L_9904:
    /* 00009904   4  jsr (ffff8110,A4) */
    c->pc = RC_ADDR(0x00009904u);
    rc_step(c, m, 18);
    /* vector 45 */
    rc_push32(c, m, RC_ADDR(0x00009908u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b66u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ec8au);
    return;

L_9908:
    /* 00009908   2  unlk A5 */
    c->pc = RC_ADDR(0x00009908u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_990A:
    /* 0000990a   2  rts */
    c->pc = RC_ADDR(0x0000990au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
