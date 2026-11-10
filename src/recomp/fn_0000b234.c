/* fn_0000b234 - 36 byte(s), 10 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000b234(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000b234u): goto L_B234;
    case RC_ADDR(0x0000b238u): goto L_B238;
    case RC_ADDR(0x0000b23cu): goto L_B23C;
    case RC_ADDR(0x0000b240u): goto L_B240;
    case RC_ADDR(0x0000b244u): goto L_B244;
    case RC_ADDR(0x0000b248u): goto L_B248;
    case RC_ADDR(0x0000b24cu): goto L_B24C;
    case RC_ADDR(0x0000b250u): goto L_B250;
    case RC_ADDR(0x0000b254u): goto L_B254;
    case RC_ADDR(0x0000b256u): goto L_B256;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B234:
    /* 0000b234   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000b234u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_B238:
    /* 0000b238   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0000b238u);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B23C:
    /* 0000b23c   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000b23cu);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B240:
    /* 0000b240   4  move.l (402,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b240u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x402u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B244:
    /* 0000b244   4  move.w (3f8,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b244u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3f8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B248:
    /* 0000b248   4  move.l (3e4,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b248u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3e4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B24C:
    /* 0000b24c   4  jsr (ffff80d4,A4) */
    c->pc = RC_ADDR(0x0000b24cu);
    /* vector 35 */
    rc_push32(c, m, RC_ADDR(0x0000b250u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009c3cu);
    return;

L_B250:
    /* 0000b250   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000b250u);
    c->a[7] = (c->a[7] + 0xeu);

L_B254:
    /* 0000b254   2  unlk A5 */
    c->pc = RC_ADDR(0x0000b254u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B256:
    /* 0000b256   2  rts */
    c->pc = RC_ADDR(0x0000b256u);
    rc_ret(c, m);
    return;

}
