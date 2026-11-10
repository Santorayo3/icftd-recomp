/* fn_00009ec2 - 166 byte(s), 46 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00009ec2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00009ec2u): goto L_9EC2;
    case RC_ADDR(0x00009ec6u): goto L_9EC6;
    case RC_ADDR(0x00009ecau): goto L_9ECA;
    case RC_ADDR(0x00009eceu): goto L_9ECE;
    case RC_ADDR(0x00009ed2u): goto L_9ED2;
    case RC_ADDR(0x00009ed6u): goto L_9ED6;
    case RC_ADDR(0x00009edau): goto L_9EDA;
    case RC_ADDR(0x00009edcu): goto L_9EDC;
    case RC_ADDR(0x00009edeu): goto L_9EDE;
    case RC_ADDR(0x00009ee0u): goto L_9EE0;
    case RC_ADDR(0x00009ee4u): goto L_9EE4;
    case RC_ADDR(0x00009ee8u): goto L_9EE8;
    case RC_ADDR(0x00009eecu): goto L_9EEC;
    case RC_ADDR(0x00009ef0u): goto L_9EF0;
    case RC_ADDR(0x00009ef4u): goto L_9EF4;
    case RC_ADDR(0x00009ef8u): goto L_9EF8;
    case RC_ADDR(0x00009efcu): goto L_9EFC;
    case RC_ADDR(0x00009f00u): goto L_9F00;
    case RC_ADDR(0x00009f02u): goto L_9F02;
    case RC_ADDR(0x00009f06u): goto L_9F06;
    case RC_ADDR(0x00009f0au): goto L_9F0A;
    case RC_ADDR(0x00009f0cu): goto L_9F0C;
    case RC_ADDR(0x00009f10u): goto L_9F10;
    case RC_ADDR(0x00009f14u): goto L_9F14;
    case RC_ADDR(0x00009f18u): goto L_9F18;
    case RC_ADDR(0x00009f1cu): goto L_9F1C;
    case RC_ADDR(0x00009f20u): goto L_9F20;
    case RC_ADDR(0x00009f24u): goto L_9F24;
    case RC_ADDR(0x00009f28u): goto L_9F28;
    case RC_ADDR(0x00009f2cu): goto L_9F2C;
    case RC_ADDR(0x00009f30u): goto L_9F30;
    case RC_ADDR(0x00009f34u): goto L_9F34;
    case RC_ADDR(0x00009f38u): goto L_9F38;
    case RC_ADDR(0x00009f3cu): goto L_9F3C;
    case RC_ADDR(0x00009f40u): goto L_9F40;
    case RC_ADDR(0x00009f44u): goto L_9F44;
    case RC_ADDR(0x00009f48u): goto L_9F48;
    case RC_ADDR(0x00009f4eu): goto L_9F4E;
    case RC_ADDR(0x00009f50u): goto L_9F50;
    case RC_ADDR(0x00009f54u): goto L_9F54;
    case RC_ADDR(0x00009f58u): goto L_9F58;
    case RC_ADDR(0x00009f5au): goto L_9F5A;
    case RC_ADDR(0x00009f5eu): goto L_9F5E;
    case RC_ADDR(0x00009f62u): goto L_9F62;
    case RC_ADDR(0x00009f64u): goto L_9F64;
    case RC_ADDR(0x00009f66u): goto L_9F66;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9EC2:
    /* 00009ec2   4  link.w A5,#fffffffa */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009ec2u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_9EC6:
    /* 00009ec6   4  clr.l (fffff0ee,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009ec6u);
    rc_wr32(c, m, (c->a[4] - 0xf12u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9ECA:
    /* 00009eca   4  clr.l (fffffffa,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009ecau);
    rc_wr32(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9ECE:
    /* 00009ece   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009eceu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9ED2:
    /* 00009ed2   4  pea (00009f68) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009ed2u);
    rc_push32(c, m, RC_ADDR(0x00009f68u));

L_9ED6:
    /* 00009ed6   4  jsr (ffff82ba,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009ed6u);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x00009edau));
    rc_depth++;
    c->pc = RC_ADDR(0x000208e8u);
    return;

L_9EDA:
    /* 00009eda   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009edau);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_9EDC:
    /* 00009edc   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009edcu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_9EDE:
    /* 00009ede   2  bne 00009efc */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009edeu);
    if (rc_cond(c, 6)) goto L_9EFC;

L_9EE0:
    /* 00009ee0   4  move.w #1,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009ee0u);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9EE4:
    /* 00009ee4   4  pea (00009f78) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009ee4u);
    rc_push32(c, m, RC_ADDR(0x00009f78u));

L_9EE8:
    /* 00009ee8   4  pea (00009f6c) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009ee8u);
    rc_push32(c, m, RC_ADDR(0x00009f6cu));

L_9EEC:
    /* 00009eec   4  jsr (ffff800e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009eecu);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x00009ef0u));
    rc_depth++;
    c->pc = RC_ADDR(0x000002f4u);
    return;

L_9EF0:
    /* 00009ef0   4  lea (a,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009ef0u);
    c->a[7] = (c->a[7] + 0xau);

L_9EF4:
    /* 00009ef4   4  lea (00009f7f),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009ef4u);
    c->a[0] = RC_ADDR(0x00009f7fu);

L_9EF8:
    /* 00009ef8   4  move.l A0,(fffffffa,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009ef8u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9EFC:
    /* 00009efc   4  tst.l (fffffffa,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009efcu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_L);

L_9F00:
    /* 00009f00   2  beq 00009f64 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f00u);
    if (rc_cond(c, 7)) goto L_9F64;

L_9F02:
    /* 00009f02   4  pea (00000002).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f02u);
    rc_push32(c, m, 0x00000002u);

L_9F06:
    /* 00009f06   4  jsr (ffff8122,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f06u);
    /* vector 48 */
    rc_push32(c, m, RC_ADDR(0x00009f0au));
    rc_depth++;
    c->pc = RC_ADDR(0x0000efa6u);
    return;

L_9F0A:
    /* 00009f0a   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f0au);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_9F0C:
    /* 00009f0c   4  pea (fffff0f2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f0cu);
    rc_push32(c, m, (c->a[4] - 0xf0eu));

L_9F10:
    /* 00009f10   4  pea (fffff0f6,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f10u);
    rc_push32(c, m, (c->a[4] - 0xf0au));

L_9F14:
    /* 00009f14   4  move.l (fffffffa,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f14u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9F18:
    /* 00009f18   4  jsr (ffff80b0,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f18u);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x00009f1cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00009984u);
    return;

L_9F1C:
    /* 00009f1c   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f1cu);
    c->a[7] = (c->a[7] + 0xcu);

L_9F20:
    /* 00009f20   4  move.l D0,(fffff0ee,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f20u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xf12u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9F24:
    /* 00009f24   4  move.w #3f,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f24u);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9F28:
    /* 00009f28   4  move.w #2,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f28u);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9F2C:
    /* 00009f2c   4  move.l (fffff0f2,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f2cu);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf0eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9F30:
    /* 00009f30   4  move.w (fffff0f6,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f30u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf0au));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9F34:
    /* 00009f34   4  move.l (fffff0ee,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f34u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf12u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9F38:
    /* 00009f38   4  jsr (ffff80b6,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f38u);
    /* vector 30 */
    rc_push32(c, m, RC_ADDR(0x00009f3cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00009b60u);
    return;

L_9F3C:
    /* 00009f3c   4  lea (e,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f3cu);
    c->a[7] = (c->a[7] + 0xeu);

L_9F40:
    /* 00009f40   4  clr.w (fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f40u);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9F44:
    /* 00009f44   4  addq.w #1,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f44u);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_9F48:
    /* 00009f48   6  cmpi.w #2710,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f48u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00002710u);

L_9F4E:
    /* 00009f4e   2  blt 00009f44 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f4eu);
    if (rc_cond(c, 13)) { rc_tick(); goto L_9F44; }

L_9F50:
    /* 00009f50   4  move.w #2,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f50u);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9F54:
    /* 00009f54   4  jsr (ffff80c2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f54u);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x00009f58u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009bcau);
    return;

L_9F58:
    /* 00009f58   2  addq.w #2,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f58u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_9F5A:
    /* 00009f5a   4  pea (00000002).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f5au);
    rc_push32(c, m, 0x00000002u);

L_9F5E:
    /* 00009f5e   4  jsr (0000efc0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f5eu);
    rc_push32(c, m, RC_ADDR(0x00009f62u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000efc0u);
    return;

L_9F62:
    /* 00009f62   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f62u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_9F64:
    /* 00009f64   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f64u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_9F66:
    /* 00009f66   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f66u);
    rc_ret(c, m);
    return;

}
