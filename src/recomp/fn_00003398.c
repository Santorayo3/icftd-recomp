/* fn_00003398 - 64 byte(s), 17 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00003398(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00003398u): goto L_3398;
    case RC_ADDR(0x0000339cu): goto L_339C;
    case RC_ADDR(0x000033a2u): goto L_33A2;
    case RC_ADDR(0x000033a8u): goto L_33A8;
    case RC_ADDR(0x000033aeu): goto L_33AE;
    case RC_ADDR(0x000033b0u): goto L_33B0;
    case RC_ADDR(0x000033b2u): goto L_33B2;
    case RC_ADDR(0x000033b4u): goto L_33B4;
    case RC_ADDR(0x000033b8u): goto L_33B8;
    case RC_ADDR(0x000033bcu): goto L_33BC;
    case RC_ADDR(0x000033c0u): goto L_33C0;
    case RC_ADDR(0x000033c4u): goto L_33C4;
    case RC_ADDR(0x000033c8u): goto L_33C8;
    case RC_ADDR(0x000033ccu): goto L_33CC;
    case RC_ADDR(0x000033ceu): goto L_33CE;
    case RC_ADDR(0x000033d4u): goto L_33D4;
    case RC_ADDR(0x000033d6u): goto L_33D6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_3398:
    /* 00003398   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00003398u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_339C:
    /* 0000339c   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = RC_ADDR(0x0000339cu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_33A2:
    /* 000033a2   6  pea (00010000).l */
    c->pc = RC_ADDR(0x000033a2u);
    rc_push32(c, m, RC_ADDR(0x00010000u));

L_33A8:
    /* 000033a8   6  pea (000f0000).l */
    c->pc = RC_ADDR(0x000033a8u);
    rc_push32(c, m, RC_ADDR(0x000f0000u));

L_33AE:
    /* 000033ae   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000033aeu);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_33B0:
    /* 000033b0   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000033b0u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_33B2:
    /* 000033b2   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000033b2u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_33B4:
    /* 000033b4   4  move.w #18,-(A7) */
    c->pc = RC_ADDR(0x000033b4u);
    t0 = 0x00000018u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_33B8:
    /* 000033b8   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x000033b8u);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x000033bcu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_33BC:
    /* 000033bc   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x000033bcu);
    c->a[7] = (c->a[7] + 0x14u);

L_33C0:
    /* 000033c0   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000033c0u);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_33C4:
    /* 000033c4   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000033c4u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_33C8:
    /* 000033c8   4  jsr (00005eac) */
    c->pc = RC_ADDR(0x000033c8u);
    rc_push32(c, m, RC_ADDR(0x000033ccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00005eacu);
    return;

L_33CC:
    /* 000033cc   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000033ccu);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_33CE:
    /* 000033ce   6  move.w #1,(ffff83dc,A4) */
    c->pc = RC_ADDR(0x000033ceu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c24u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_33D4:
    /* 000033d4   2  unlk A5 */
    c->pc = RC_ADDR(0x000033d4u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_33D6:
    /* 000033d6   2  rts */
    c->pc = RC_ADDR(0x000033d6u);
    rc_ret(c, m);
    return;

}
