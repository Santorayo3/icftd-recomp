/* fn_00020494 - 62 byte(s), 17 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00020494(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00020494u): goto L_20494;
    case RC_ADDR(0x00020498u): goto L_20498;
    case RC_ADDR(0x0002049cu): goto L_2049C;
    case RC_ADDR(0x000204a0u): goto L_204A0;
    case RC_ADDR(0x000204a4u): goto L_204A4;
    case RC_ADDR(0x000204a8u): goto L_204A8;
    case RC_ADDR(0x000204acu): goto L_204AC;
    case RC_ADDR(0x000204b2u): goto L_204B2;
    case RC_ADDR(0x000204b6u): goto L_204B6;
    case RC_ADDR(0x000204bau): goto L_204BA;
    case RC_ADDR(0x000204beu): goto L_204BE;
    case RC_ADDR(0x000204c2u): goto L_204C2;
    case RC_ADDR(0x000204c6u): goto L_204C6;
    case RC_ADDR(0x000204cau): goto L_204CA;
    case RC_ADDR(0x000204ccu): goto L_204CC;
    case RC_ADDR(0x000204ceu): goto L_204CE;
    case RC_ADDR(0x000204d0u): goto L_204D0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20494:
    /* 00020494   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00020494u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_20498:
    /* 00020498   4  clr.l (ffffd590,A4) */
    c->pc = RC_ADDR(0x00020498u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x2a70u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2049C:
    /* 0002049c   4  lea (00020424),A0 */
    c->pc = RC_ADDR(0x0002049cu);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x00020424u);

L_204A0:
    /* 000204a0   4  move.l A0,(ffffd594,A4) */
    c->pc = RC_ADDR(0x000204a0u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2a6cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_204A4:
    /* 000204a4   4  clr.l (ffffd582,A4) */
    c->pc = RC_ADDR(0x000204a4u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x2a7eu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_204A8:
    /* 000204a8   4  clr.l (ffffd586,A4) */
    c->pc = RC_ADDR(0x000204a8u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x2a7au), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_204AC:
    /* 000204ac   6  move.b #2,(ffffd58a,A4) */
    c->pc = RC_ADDR(0x000204acu);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr8(c, m, (c->a[4] - 0x2a76u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_204B2:
    /* 000204b2   4  clr.b (ffffd58b,A4) */
    c->pc = RC_ADDR(0x000204b2u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[4] - 0x2a75u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_204B6:
    /* 000204b6   4  lea (000204d2),A0 */
    c->pc = RC_ADDR(0x000204b6u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x000204d2u);

L_204BA:
    /* 000204ba   4  move.l A0,(ffffd58c,A4) */
    c->pc = RC_ADDR(0x000204bau);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2a74u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_204BE:
    /* 000204be   4  pea (ffffd582,A4) */
    c->pc = RC_ADDR(0x000204beu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x2a7eu));

L_204C2:
    /* 000204c2   4  pea (00000005).l */
    c->pc = RC_ADDR(0x000204c2u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000005u);

L_204C6:
    /* 000204c6   4  jsr (ffff8350,A4) */
    c->pc = RC_ADDR(0x000204c6u);
    rc_step(c, m, 18);
    /* vector 141 */
    rc_push32(c, m, RC_ADDR(0x000204cau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e46u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002355au);
    return;

L_204CA:
    /* 000204ca   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000204cau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_204CC:
    /* 000204cc   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x000204ccu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_204CE:
    /* 000204ce   2  unlk A5 */
    c->pc = RC_ADDR(0x000204ceu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_204D0:
    /* 000204d0   2  rts */
    c->pc = RC_ADDR(0x000204d0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
