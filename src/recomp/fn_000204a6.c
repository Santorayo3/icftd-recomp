/* fn_000204a6 - 48 byte(s), 13 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000204a6(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000204a6u): goto L_204A6;
    case RC_ADDR(0x000204aau): goto L_204AA;
    case RC_ADDR(0x000204b0u): goto L_204B0;
    case RC_ADDR(0x000204b4u): goto L_204B4;
    case RC_ADDR(0x000204b8u): goto L_204B8;
    case RC_ADDR(0x000204bau): goto L_204BA;
    case RC_ADDR(0x000204beu): goto L_204BE;
    case RC_ADDR(0x000204c4u): goto L_204C4;
    case RC_ADDR(0x000204c8u): goto L_204C8;
    case RC_ADDR(0x000204ccu): goto L_204CC;
    case RC_ADDR(0x000204ceu): goto L_204CE;
    case RC_ADDR(0x000204d2u): goto L_204D2;
    case RC_ADDR(0x000204d4u): goto L_204D4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_204A6:
    /* 000204a6   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000204a6u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_204AA:
    /* 000204aa   6  pea (00010001).l */
    c->pc = RC_ADDR(0x000204aau);
    rc_push32(c, m, RC_ADDR(0x00010001u));

L_204B0:
    /* 000204b0   4  pea (0000273a).l */
    c->pc = RC_ADDR(0x000204b0u);
    rc_push32(c, m, RC_ADDR(0x0000273au));

L_204B4:
    /* 000204b4   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x000204b4u);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x000204b8u);
    rc_os_call(c, m, 0, -198);

L_204B8:
    /* 000204b8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000204b8u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_204BA:
    /* 000204ba   4  move.l D0,(2b26,A4) */
    c->pc = RC_ADDR(0x000204bau);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2b26u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_204BE:
    /* 000204be   6  pea (00010001).l */
    c->pc = RC_ADDR(0x000204beu);
    rc_push32(c, m, RC_ADDR(0x00010001u));

L_204C4:
    /* 000204c4   4  pea (0000139d).l */
    c->pc = RC_ADDR(0x000204c4u);
    rc_push32(c, m, RC_ADDR(0x0000139du));

L_204C8:
    /* 000204c8   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x000204c8u);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x000204ccu);
    rc_os_call(c, m, 0, -198);

L_204CC:
    /* 000204cc   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000204ccu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_204CE:
    /* 000204ce   4  move.l D0,(2b2e,A4) */
    c->pc = RC_ADDR(0x000204ceu);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2b2eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_204D2:
    /* 000204d2   2  unlk A5 */
    c->pc = RC_ADDR(0x000204d2u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_204D4:
    /* 000204d4   2  rts */
    c->pc = RC_ADDR(0x000204d4u);
    rc_ret(c, m);
    return;

}
