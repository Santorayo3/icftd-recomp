/* fn_0001cbfc - 50 byte(s), 14 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001cbfc(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x0001cbfcu: goto L_1CBFC;
    case 0x0001cc00u: goto L_1CC00;
    case 0x0001cc06u: goto L_1CC06;
    case 0x0001cc08u: goto L_1CC08;
    case 0x0001cc0cu: goto L_1CC0C;
    case 0x0001cc0eu: goto L_1CC0E;
    case 0x0001cc12u: goto L_1CC12;
    case 0x0001cc16u: goto L_1CC16;
    case 0x0001cc18u: goto L_1CC18;
    case 0x0001cc1cu: goto L_1CC1C;
    case 0x0001cc20u: goto L_1CC20;
    case 0x0001cc26u: goto L_1CC26;
    case 0x0001cc2au: goto L_1CC2A;
    case 0x0001cc2cu: goto L_1CC2C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1CBFC:
    /* 0001cbfc   4  link.w A5,#0 */
    c->pc = 0x0001cbfcu;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1CC00:
    /* 0001cc00   6  cmpi.w #26,(ffffefe4,A4) */
    c->pc = 0x0001cc00u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000026u);

L_1CC06:
    /* 0001cc06   2  bne 0001cc2a */
    c->pc = 0x0001cc06u;
    if (rc_cond(c, 6)) goto L_1CC2A;

L_1CC08:
    /* 0001cc08   4  tst.w (fffffe36,A4) */
    c->pc = 0x0001cc08u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x1cau));
    rc_set_nzvc(c, t0, RC_W);

L_1CC0C:
    /* 0001cc0c   2  beq 0001cc2a */
    c->pc = 0x0001cc0cu;
    if (rc_cond(c, 7)) goto L_1CC2A;

L_1CC0E:
    /* 0001cc0e   4  move.w #34,-(A7) */
    c->pc = 0x0001cc0eu;
    t0 = 0x00000034u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CC12:
    /* 0001cc12   4  jsr (ffff8080,A4) */
    c->pc = 0x0001cc12u;
    /* vector 21 */
    rc_push32(c, m, 0x0001cc16u);
    rc_depth++;
    c->pc = 0x000070cau;
    return;

L_1CC16:
    /* 0001cc16   2  addq.w #2,A7 */
    c->pc = 0x0001cc16u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1CC18:
    /* 0001cc18   4  jsr (ffff803e,A4) */
    c->pc = 0x0001cc18u;
    /* vector 10 */
    rc_push32(c, m, 0x0001cc1cu);
    rc_depth++;
    c->pc = 0x000023d8u;
    return;

L_1CC1C:
    /* 0001cc1c   4  jsr (ffff8038,A4) */
    c->pc = 0x0001cc1cu;
    /* vector 9 */
    rc_push32(c, m, 0x0001cc20u);
    rc_depth++;
    c->pc = 0x00001b68u;
    return;

L_1CC20:
    /* 0001cc20   6  move.w #1,(fffffec6,A4) */
    c->pc = 0x0001cc20u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x13au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CC26:
    /* 0001cc26   4  clr.w (fffffe36,A4) */
    c->pc = 0x0001cc26u;
    rc_wr16(c, m, (c->a[4] - 0x1cau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1CC2A:
    /* 0001cc2a   2  unlk A5 */
    c->pc = 0x0001cc2au;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1CC2C:
    /* 0001cc2c   2  rts */
    c->pc = 0x0001cc2cu;
    rc_ret(c, m);
    return;

}
