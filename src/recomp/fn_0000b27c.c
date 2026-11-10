/* fn_0000b27c - 36 byte(s), 10 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000b27c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000b27cu): goto L_B27C;
    case RC_ADDR(0x0000b280u): goto L_B280;
    case RC_ADDR(0x0000b284u): goto L_B284;
    case RC_ADDR(0x0000b288u): goto L_B288;
    case RC_ADDR(0x0000b28cu): goto L_B28C;
    case RC_ADDR(0x0000b290u): goto L_B290;
    case RC_ADDR(0x0000b294u): goto L_B294;
    case RC_ADDR(0x0000b298u): goto L_B298;
    case RC_ADDR(0x0000b29cu): goto L_B29C;
    case RC_ADDR(0x0000b29eu): goto L_B29E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B27C:
    /* 0000b27c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000b27cu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_B280:
    /* 0000b280   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0000b280u);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B284:
    /* 0000b284   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000b284u);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B288:
    /* 0000b288   4  move.l (40a,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b288u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x40au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B28C:
    /* 0000b28c   4  move.w (3fc,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b28cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3fcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B290:
    /* 0000b290   4  move.l (3ec,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b290u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B294:
    /* 0000b294   4  jsr (ffff80d4,A4) */
    c->pc = RC_ADDR(0x0000b294u);
    /* vector 35 */
    rc_push32(c, m, RC_ADDR(0x0000b298u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009c3cu);
    return;

L_B298:
    /* 0000b298   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000b298u);
    c->a[7] = (c->a[7] + 0xeu);

L_B29C:
    /* 0000b29c   2  unlk A5 */
    c->pc = RC_ADDR(0x0000b29cu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B29E:
    /* 0000b29e   2  rts */
    c->pc = RC_ADDR(0x0000b29eu);
    rc_ret(c, m);
    return;

}
