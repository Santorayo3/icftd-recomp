/* fn_00008c5c - 96 byte(s), 28 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00008c5c(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00008c5cu): goto L_8C5C;
    case RC_ADDR(0x00008c60u): goto L_8C60;
    case RC_ADDR(0x00008c64u): goto L_8C64;
    case RC_ADDR(0x00008c68u): goto L_8C68;
    case RC_ADDR(0x00008c6cu): goto L_8C6C;
    case RC_ADDR(0x00008c6eu): goto L_8C6E;
    case RC_ADDR(0x00008c72u): goto L_8C72;
    case RC_ADDR(0x00008c76u): goto L_8C76;
    case RC_ADDR(0x00008c7cu): goto L_8C7C;
    case RC_ADDR(0x00008c80u): goto L_8C80;
    case RC_ADDR(0x00008c84u): goto L_8C84;
    case RC_ADDR(0x00008c88u): goto L_8C88;
    case RC_ADDR(0x00008c8cu): goto L_8C8C;
    case RC_ADDR(0x00008c8eu): goto L_8C8E;
    case RC_ADDR(0x00008c90u): goto L_8C90;
    case RC_ADDR(0x00008c92u): goto L_8C92;
    case RC_ADDR(0x00008c94u): goto L_8C94;
    case RC_ADDR(0x00008c96u): goto L_8C96;
    case RC_ADDR(0x00008c9au): goto L_8C9A;
    case RC_ADDR(0x00008c9cu): goto L_8C9C;
    case RC_ADDR(0x00008ca0u): goto L_8CA0;
    case RC_ADDR(0x00008ca2u): goto L_8CA2;
    case RC_ADDR(0x00008ca6u): goto L_8CA6;
    case RC_ADDR(0x00008caau): goto L_8CAA;
    case RC_ADDR(0x00008cacu): goto L_8CAC;
    case RC_ADDR(0x00008cb2u): goto L_8CB2;
    case RC_ADDR(0x00008cb6u): goto L_8CB6;
    case RC_ADDR(0x00008cbau): goto L_8CBA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_8C5C:
    /* 00008c5c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00008c5cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_8C60:
    /* 00008c60   4  move.w (ffffefe4,A4),D0 */
    c->pc = RC_ADDR(0x00008c60u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8C64:
    /* 00008c64   4  lea (ffff92dc,A4),A0 */
    c->pc = RC_ADDR(0x00008c64u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6d24u);

L_8C68:
    /* 00008c68   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00008c68u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_8C6C:
    /* 00008c6c   2  ext.w D1 */
    c->pc = RC_ADDR(0x00008c6cu);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_8C6E:
    /* 00008c6e   4  move.w D1,(22,A4) */
    c->pc = RC_ADDR(0x00008c6eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x22u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8C72:
    /* 00008c72   4  clr.w (be,A4) */
    c->pc = RC_ADDR(0x00008c72u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xbeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8C76:
    /* 00008c76   6  move.w #1,(c0,A4) */
    c->pc = RC_ADDR(0x00008c76u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xc0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8C7C:
    /* 00008c7c   4  clr.w (fffffe40,A4) */
    c->pc = RC_ADDR(0x00008c7cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x1c0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8C80:
    /* 00008c80   4  clr.w (fffffec8,A4) */
    c->pc = RC_ADDR(0x00008c80u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x138u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8C84:
    /* 00008c84   4  pea (fffff0e8,A4) */
    c->pc = RC_ADDR(0x00008c84u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0xf18u));

L_8C88:
    /* 00008c88   4  jsr (0000895e) */
    c->pc = RC_ADDR(0x00008c88u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00008c8cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000895eu);
    return;

L_8C8C:
    /* 00008c8c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00008c8cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_8C8E:
    /* 00008c8e   2  tst.w D0 */
    c->pc = RC_ADDR(0x00008c8eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_8C90:
    /* 00008c90   2  bne 00008c96 */
    c->pc = RC_ADDR(0x00008c90u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_8C96;

L_8C92:
    /* 00008c92   2  unlk A5 */
    c->pc = RC_ADDR(0x00008c92u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_8C94:
    /* 00008c94   2  rts */
    c->pc = RC_ADDR(0x00008c94u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_8C96:
    /* 00008c96   4  pea (00007934) */
    c->pc = RC_ADDR(0x00008c96u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00007934u));

L_8C9A:
    /* 00008c9a   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00008c9au);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_8C9C:
    /* 00008c9c   4  jsr (ffff81fa,A4) */
    c->pc = RC_ADDR(0x00008c9cu);
    rc_step(c, m, 18);
    /* vector 84 */
    rc_push32(c, m, RC_ADDR(0x00008ca0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c50u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d2c6u);
    return;

L_8CA0:
    /* 00008ca0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00008ca0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_8CA2:
    /* 00008ca2   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00008ca2u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_8CA6:
    /* 00008ca6   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x00008ca6u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x00008caau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b18u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009bcau);
    return;

L_8CAA:
    /* 00008caa   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00008caau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_8CAC:
    /* 00008cac   6  move.w #c8,(ffffcbc2,A4) */
    c->pc = RC_ADDR(0x00008cacu);
    rc_step(c, m, 16);
    t0 = 0x000000c8u;
    rc_wr16(c, m, (c->a[4] - 0x343eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8CB2:
    /* 00008cb2   4  jsr (ffff821e,A4) */
    c->pc = RC_ADDR(0x00008cb2u);
    rc_step(c, m, 18);
    /* vector 90 */
    rc_push32(c, m, RC_ADDR(0x00008cb6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c74u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d778u);
    return;

L_8CB6:
    /* 00008cb6   4  jsr (00008ab4) */
    c->pc = RC_ADDR(0x00008cb6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00008cbau));
    rc_depth++;
    c->pc = RC_ADDR(0x00008ab4u);
    return;

L_8CBA:
    /* 00008cba   2  bra 00008c92 */
    c->pc = RC_ADDR(0x00008cbau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_8C92;

}
