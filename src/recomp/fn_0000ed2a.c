/* fn_0000ed2a - 102 byte(s), 30 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000ed2a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000ed2au): goto L_ED2A;
    case RC_ADDR(0x0000ed2eu): goto L_ED2E;
    case RC_ADDR(0x0000ed32u): goto L_ED32;
    case RC_ADDR(0x0000ed34u): goto L_ED34;
    case RC_ADDR(0x0000ed38u): goto L_ED38;
    case RC_ADDR(0x0000ed3cu): goto L_ED3C;
    case RC_ADDR(0x0000ed40u): goto L_ED40;
    case RC_ADDR(0x0000ed42u): goto L_ED42;
    case RC_ADDR(0x0000ed46u): goto L_ED46;
    case RC_ADDR(0x0000ed48u): goto L_ED48;
    case RC_ADDR(0x0000ed4cu): goto L_ED4C;
    case RC_ADDR(0x0000ed50u): goto L_ED50;
    case RC_ADDR(0x0000ed54u): goto L_ED54;
    case RC_ADDR(0x0000ed58u): goto L_ED58;
    case RC_ADDR(0x0000ed5cu): goto L_ED5C;
    case RC_ADDR(0x0000ed60u): goto L_ED60;
    case RC_ADDR(0x0000ed62u): goto L_ED62;
    case RC_ADDR(0x0000ed66u): goto L_ED66;
    case RC_ADDR(0x0000ed6au): goto L_ED6A;
    case RC_ADDR(0x0000ed6eu): goto L_ED6E;
    case RC_ADDR(0x0000ed70u): goto L_ED70;
    case RC_ADDR(0x0000ed74u): goto L_ED74;
    case RC_ADDR(0x0000ed78u): goto L_ED78;
    case RC_ADDR(0x0000ed7au): goto L_ED7A;
    case RC_ADDR(0x0000ed7eu): goto L_ED7E;
    case RC_ADDR(0x0000ed82u): goto L_ED82;
    case RC_ADDR(0x0000ed86u): goto L_ED86;
    case RC_ADDR(0x0000ed88u): goto L_ED88;
    case RC_ADDR(0x0000ed8cu): goto L_ED8C;
    case RC_ADDR(0x0000ed8eu): goto L_ED8E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_ED2A:
    /* 0000ed2a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000ed2au);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_ED2E:
    /* 0000ed2e   4  tst.l (ae0,A4) */
    c->pc = RC_ADDR(0x0000ed2eu);
    t0 = rc_rd32(c, m, (c->a[4] + 0xae0u));
    rc_set_nzvc(c, t0, RC_L);

L_ED32:
    /* 0000ed32   2  beq 0000ed5c */
    c->pc = RC_ADDR(0x0000ed32u);
    if (rc_cond(c, 7)) goto L_ED5C;

L_ED34:
    /* 0000ed34   4  pea (00000001).l */
    c->pc = RC_ADDR(0x0000ed34u);
    rc_push32(c, m, RC_ADDR(0x00000001u));

L_ED38:
    /* 0000ed38   4  move.l (ae4,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ed38u);
    t0 = rc_rd32(c, m, (c->a[4] + 0xae4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_ED3C:
    /* 0000ed3c   4  jsr (ffff82e4,A4) */
    c->pc = RC_ADDR(0x0000ed3cu);
    /* vector 123 */
    rc_push32(c, m, RC_ADDR(0x0000ed40u));
    rc_depth++;
    c->pc = RC_ADDR(0x000213dau);
    return;

L_ED40:
    /* 0000ed40   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000ed40u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_ED42:
    /* 0000ed42   4  pea (ac6,A4) */
    c->pc = RC_ADDR(0x0000ed42u);
    rc_push32(c, m, (c->a[4] + 0xac6u));

L_ED46:
    /* 0000ed46   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000ed46u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_ED48:
    /* 0000ed48   4  move.l (ae4,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ed48u);
    t0 = rc_rd32(c, m, (c->a[4] + 0xae4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_ED4C:
    /* 0000ed4c   4  jsr (ffff82f0,A4) */
    c->pc = RC_ADDR(0x0000ed4cu);
    /* vector 125 */
    rc_push32(c, m, RC_ADDR(0x0000ed50u));
    rc_depth++;
    c->pc = RC_ADDR(0x000213f4u);
    return;

L_ED50:
    /* 0000ed50   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000ed50u);
    c->a[7] = (c->a[7] + 0xcu);

L_ED54:
    /* 0000ed54   4  jsr (0000ee78) */
    c->pc = RC_ADDR(0x0000ed54u);
    rc_push32(c, m, RC_ADDR(0x0000ed58u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000ee78u);
    return;

L_ED58:
    /* 0000ed58   4  clr.l (ae0,A4) */
    c->pc = RC_ADDR(0x0000ed58u);
    rc_wr32(c, m, (c->a[4] + 0xae0u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_ED5C:
    /* 0000ed5c   4  tst.l (ffffa208,A4) */
    c->pc = RC_ADDR(0x0000ed5cu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5df8u));
    rc_set_nzvc(c, t0, RC_L);

L_ED60:
    /* 0000ed60   2  beq 0000ed74 */
    c->pc = RC_ADDR(0x0000ed60u);
    if (rc_cond(c, 7)) goto L_ED74;

L_ED62:
    /* 0000ed62   4  pea (000001ea).l */
    c->pc = RC_ADDR(0x0000ed62u);
    rc_push32(c, m, RC_ADDR(0x000001eau));

L_ED66:
    /* 0000ed66   4  move.l (ffffa208,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ed66u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5df8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_ED6A:
    /* 0000ed6a   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0000ed6au);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x0000ed6eu);
    rc_os_call(c, m, 0, -210);

L_ED6E:
    /* 0000ed6e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000ed6eu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_ED70:
    /* 0000ed70   4  clr.l (ffffa208,A4) */
    c->pc = RC_ADDR(0x0000ed70u);
    rc_wr32(c, m, (c->a[4] - 0x5df8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_ED74:
    /* 0000ed74   4  tst.l (adc,A4) */
    c->pc = RC_ADDR(0x0000ed74u);
    t0 = rc_rd32(c, m, (c->a[4] + 0xadcu));
    rc_set_nzvc(c, t0, RC_L);

L_ED78:
    /* 0000ed78   2  beq 0000ed8c */
    c->pc = RC_ADDR(0x0000ed78u);
    if (rc_cond(c, 7)) goto L_ED8C;

L_ED7A:
    /* 0000ed7a   4  pea (00000408).l */
    c->pc = RC_ADDR(0x0000ed7au);
    rc_push32(c, m, RC_ADDR(0x00000408u));

L_ED7E:
    /* 0000ed7e   4  move.l (adc,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ed7eu);
    t0 = rc_rd32(c, m, (c->a[4] + 0xadcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_ED82:
    /* 0000ed82   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0000ed82u);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x0000ed86u);
    rc_os_call(c, m, 0, -210);

L_ED86:
    /* 0000ed86   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000ed86u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_ED88:
    /* 0000ed88   4  clr.l (adc,A4) */
    c->pc = RC_ADDR(0x0000ed88u);
    rc_wr32(c, m, (c->a[4] + 0xadcu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_ED8C:
    /* 0000ed8c   2  unlk A5 */
    c->pc = RC_ADDR(0x0000ed8cu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_ED8E:
    /* 0000ed8e   2  rts */
    c->pc = RC_ADDR(0x0000ed8eu);
    rc_ret(c, m);
    return;

}
