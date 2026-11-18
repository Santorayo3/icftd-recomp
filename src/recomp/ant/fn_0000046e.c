/* fn_0000046e - 94 byte(s), 22 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000046e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000046eu): goto L_46E;
    case RC_ADDR(0x00000474u): goto L_474;
    case RC_ADDR(0x0000047au): goto L_47A;
    case RC_ADDR(0x00000480u): goto L_480;
    case RC_ADDR(0x00000484u): goto L_484;
    case RC_ADDR(0x00000488u): goto L_488;
    case RC_ADDR(0x0000048cu): goto L_48C;
    case RC_ADDR(0x00000490u): goto L_490;
    case RC_ADDR(0x00000494u): goto L_494;
    case RC_ADDR(0x00000498u): goto L_498;
    case RC_ADDR(0x0000049cu): goto L_49C;
    case RC_ADDR(0x000004a0u): goto L_4A0;
    case RC_ADDR(0x000004a4u): goto L_4A4;
    case RC_ADDR(0x000004a8u): goto L_4A8;
    case RC_ADDR(0x000004acu): goto L_4AC;
    case RC_ADDR(0x000004b0u): goto L_4B0;
    case RC_ADDR(0x000004b4u): goto L_4B4;
    case RC_ADDR(0x000004b8u): goto L_4B8;
    case RC_ADDR(0x000004bcu): goto L_4BC;
    case RC_ADDR(0x000004c0u): goto L_4C0;
    case RC_ADDR(0x000004c4u): goto L_4C4;
    case RC_ADDR(0x000004c8u): goto L_4C8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_46E:
    /* 0000046e   6  move.w #17,(fffff78c,A4) */
    c->pc = RC_ADDR(0x0000046eu);
    rc_step(c, m, 16);
    t0 = 0x00000017u;
    rc_wr16(c, m, (c->a[4] - 0x874u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_474:
    /* 00000474   6  move.w #e,(ffff83e2,A4) */
    c->pc = RC_ADDR(0x00000474u);
    rc_step(c, m, 16);
    t0 = 0x0000000eu;
    rc_wr16(c, m, (c->a[4] - 0x7c1eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_47A:
    /* 0000047a   6  move.w #9,(ffff83e6,A4) */
    c->pc = RC_ADDR(0x0000047au);
    rc_step(c, m, 16);
    t0 = 0x00000009u;
    rc_wr16(c, m, (c->a[4] - 0x7c1au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_480:
    /* 00000480   4  clr.w (6e6,A4) */
    c->pc = RC_ADDR(0x00000480u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x6e6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_484:
    /* 00000484   4  jsr (0000677a) */
    c->pc = RC_ADDR(0x00000484u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000488u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000677au);
    return;

L_488:
    /* 00000488   4  jsr (00004acc) */
    c->pc = RC_ADDR(0x00000488u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000048cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00004accu);
    return;

L_48C:
    /* 0000048c   4  jsr (ffff81f4,A4) */
    c->pc = RC_ADDR(0x0000048cu);
    rc_step(c, m, 18);
    /* vector 83 */
    rc_push32(c, m, RC_ADDR(0x00000490u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ceau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001ec36u);
    return;

L_490:
    /* 00000490   4  jsr (ffff80a4,A4) */
    c->pc = RC_ADDR(0x00000490u);
    rc_step(c, m, 18);
    /* vector 27 */
    rc_push32(c, m, RC_ADDR(0x00000494u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000a922u);
    return;

L_494:
    /* 00000494   4  jsr (ffff81a0,A4) */
    c->pc = RC_ADDR(0x00000494u);
    rc_step(c, m, 18);
    /* vector 69 */
    rc_push32(c, m, RC_ADDR(0x00000498u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c96u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00018764u);
    return;

L_498:
    /* 00000498   4  jsr (ffff80b0,A4) */
    c->pc = RC_ADDR(0x00000498u);
    rc_step(c, m, 18);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x0000049cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ba6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad1au);
    return;

L_49C:
    /* 0000049c   4  jsr (ffff80ec,A4) */
    c->pc = RC_ADDR(0x0000049cu);
    rc_step(c, m, 18);
    /* vector 39 */
    rc_push32(c, m, RC_ADDR(0x000004a0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023be2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b07au);
    return;

L_4A0:
    /* 000004a0   4  jsr (00000d9c) */
    c->pc = RC_ADDR(0x000004a0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000004a4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000d9cu);
    return;

L_4A4:
    /* 000004a4   4  jsr (00003b12) */
    c->pc = RC_ADDR(0x000004a4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000004a8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00003b12u);
    return;

L_4A8:
    /* 000004a8   4  jsr (ffff8164,A4) */
    c->pc = RC_ADDR(0x000004a8u);
    rc_step(c, m, 18);
    /* vector 59 */
    rc_push32(c, m, RC_ADDR(0x000004acu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c5au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012650u);
    return;

L_4AC:
    /* 000004ac   4  jsr (ffff8122,A4) */
    c->pc = RC_ADDR(0x000004acu);
    rc_step(c, m, 18);
    /* vector 48 */
    rc_push32(c, m, RC_ADDR(0x000004b0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c18u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000d800u);
    return;

L_4B0:
    /* 000004b0   4  jsr (ffff8092,A4) */
    c->pc = RC_ADDR(0x000004b0u);
    rc_step(c, m, 18);
    /* vector 24 */
    rc_push32(c, m, RC_ADDR(0x000004b4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b88u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000a714u);
    return;

L_4B4:
    /* 000004b4   4  clr.w (712,A4) */
    c->pc = RC_ADDR(0x000004b4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x712u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4B8:
    /* 000004b8   4  clr.w (7b8,A4) */
    c->pc = RC_ADDR(0x000004b8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x7b8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4BC:
    /* 000004bc   4  clr.w (ffffd5ca,A4) */
    c->pc = RC_ADDR(0x000004bcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2a36u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4C0:
    /* 000004c0   4  clr.w (ffffd5c6,A4) */
    c->pc = RC_ADDR(0x000004c0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2a3au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4C4:
    /* 000004c4   4  clr.w (ffffd5c4,A4) */
    c->pc = RC_ADDR(0x000004c4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2a3cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4C8:
    /* 000004c8   4  clr.w (ffffd5c8,A4) */
    c->pc = RC_ADDR(0x000004c8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2a38u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

    /* falls through into 000004cc */
    c->pc = RC_ADDR(0x000004ccu);
    return;
}
