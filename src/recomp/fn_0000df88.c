/* fn_0000df88 - 80 byte(s), 22 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000df88(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000df88u): goto L_DF88;
    case RC_ADDR(0x0000df8cu): goto L_DF8C;
    case RC_ADDR(0x0000df90u): goto L_DF90;
    case RC_ADDR(0x0000df94u): goto L_DF94;
    case RC_ADDR(0x0000df98u): goto L_DF98;
    case RC_ADDR(0x0000df9cu): goto L_DF9C;
    case RC_ADDR(0x0000dfa0u): goto L_DFA0;
    case RC_ADDR(0x0000dfa4u): goto L_DFA4;
    case RC_ADDR(0x0000dfa8u): goto L_DFA8;
    case RC_ADDR(0x0000dfacu): goto L_DFAC;
    case RC_ADDR(0x0000dfb0u): goto L_DFB0;
    case RC_ADDR(0x0000dfb4u): goto L_DFB4;
    case RC_ADDR(0x0000dfb8u): goto L_DFB8;
    case RC_ADDR(0x0000dfbau): goto L_DFBA;
    case RC_ADDR(0x0000dfbeu): goto L_DFBE;
    case RC_ADDR(0x0000dfc2u): goto L_DFC2;
    case RC_ADDR(0x0000dfc6u): goto L_DFC6;
    case RC_ADDR(0x0000dfcau): goto L_DFCA;
    case RC_ADDR(0x0000dfceu): goto L_DFCE;
    case RC_ADDR(0x0000dfd2u): goto L_DFD2;
    case RC_ADDR(0x0000dfd4u): goto L_DFD4;
    case RC_ADDR(0x0000dfd6u): goto L_DFD6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_DF88:
    /* 0000df88   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000df88u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_DF8C:
    /* 0000df8c   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000df8cu);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DF90:
    /* 0000df90   4  pea (0000dfe8) */
    c->pc = RC_ADDR(0x0000df90u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000dfe8u));

L_DF94:
    /* 0000df94   4  pea (0000dfdc) */
    c->pc = RC_ADDR(0x0000df94u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000dfdcu));

L_DF98:
    /* 0000df98   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x0000df98u);
    rc_step(c, m);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x0000df9cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a64u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000002f4u);
    return;

L_DF9C:
    /* 0000df9c   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000df9cu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xau);

L_DFA0:
    /* 0000dfa0   4  pea (72e,A4) */
    c->pc = RC_ADDR(0x0000dfa0u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x72eu));

L_DFA4:
    /* 0000dfa4   4  pea (72a,A4) */
    c->pc = RC_ADDR(0x0000dfa4u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x72au));

L_DFA8:
    /* 0000dfa8   4  pea (0000dfee) */
    c->pc = RC_ADDR(0x0000dfa8u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000dfeeu));

L_DFAC:
    /* 0000dfac   4  jsr (ffff80b0,A4) */
    c->pc = RC_ADDR(0x0000dfacu);
    rc_step(c, m);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x0000dfb0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b06u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009984u);
    return;

L_DFB0:
    /* 0000dfb0   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000dfb0u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_DFB4:
    /* 0000dfb4   4  move.l D0,(722,A4) */
    c->pc = RC_ADDR(0x0000dfb4u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x722u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_DFB8:
    /* 0000dfb8   2  beq 0000dfd2 */
    c->pc = RC_ADDR(0x0000dfb8u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_DFD2;

L_DFBA:
    /* 0000dfba   4  pea (732,A4) */
    c->pc = RC_ADDR(0x0000dfbau);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x732u));

L_DFBE:
    /* 0000dfbe   4  pea (72c,A4) */
    c->pc = RC_ADDR(0x0000dfbeu);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x72cu));

L_DFC2:
    /* 0000dfc2   4  pea (0000e000) */
    c->pc = RC_ADDR(0x0000dfc2u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000e000u));

L_DFC6:
    /* 0000dfc6   4  jsr (ffff80b0,A4) */
    c->pc = RC_ADDR(0x0000dfc6u);
    rc_step(c, m);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x0000dfcau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b06u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009984u);
    return;

L_DFCA:
    /* 0000dfca   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000dfcau);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_DFCE:
    /* 0000dfce   4  move.l D0,(726,A4) */
    c->pc = RC_ADDR(0x0000dfceu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x726u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_DFD2:
    /* 0000dfd2   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000dfd2u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_DFD4:
    /* 0000dfd4   2  unlk A5 */
    c->pc = RC_ADDR(0x0000dfd4u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_DFD6:
    /* 0000dfd6   2  rts */
    c->pc = RC_ADDR(0x0000dfd6u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
