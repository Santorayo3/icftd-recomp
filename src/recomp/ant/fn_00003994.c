/* fn_00003994 - 70 byte(s), 20 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00003994(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00003994u): goto L_3994;
    case RC_ADDR(0x00003998u): goto L_3998;
    case RC_ADDR(0x0000399cu): goto L_399C;
    case RC_ADDR(0x0000399eu): goto L_399E;
    case RC_ADDR(0x000039a0u): goto L_39A0;
    case RC_ADDR(0x000039a2u): goto L_39A2;
    case RC_ADDR(0x000039a8u): goto L_39A8;
    case RC_ADDR(0x000039aeu): goto L_39AE;
    case RC_ADDR(0x000039b4u): goto L_39B4;
    case RC_ADDR(0x000039b6u): goto L_39B6;
    case RC_ADDR(0x000039b8u): goto L_39B8;
    case RC_ADDR(0x000039bau): goto L_39BA;
    case RC_ADDR(0x000039beu): goto L_39BE;
    case RC_ADDR(0x000039c2u): goto L_39C2;
    case RC_ADDR(0x000039c6u): goto L_39C6;
    case RC_ADDR(0x000039cau): goto L_39CA;
    case RC_ADDR(0x000039ceu): goto L_39CE;
    case RC_ADDR(0x000039d0u): goto L_39D0;
    case RC_ADDR(0x000039d2u): goto L_39D2;
    case RC_ADDR(0x000039d8u): goto L_39D8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_3994:
    /* 00003994   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00003994u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_3998:
    /* 00003998   4  tst.w (ffff85a6,A4) */
    c->pc = RC_ADDR(0x00003998u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7a5au));
    rc_set_nzvc(c, t0, RC_W);

L_399C:
    /* 0000399c   2  beq 000039a2 */
    c->pc = RC_ADDR(0x0000399cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_39A2;

L_399E:
    /* 0000399e   2  unlk A5 */
    c->pc = RC_ADDR(0x0000399eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_39A0:
    /* 000039a0   2  rts */
    c->pc = RC_ADDR(0x000039a0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_39A2:
    /* 000039a2   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x000039a2u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_39A8:
    /* 000039a8   6  pea (00010000).l */
    c->pc = RC_ADDR(0x000039a8u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010000u);

L_39AE:
    /* 000039ae   6  pea (001e0000).l */
    c->pc = RC_ADDR(0x000039aeu);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x001e0000u);

L_39B4:
    /* 000039b4   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000039b4u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_39B6:
    /* 000039b6   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000039b6u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_39B8:
    /* 000039b8   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000039b8u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_39BA:
    /* 000039ba   4  move.w #18,-(A7) */
    c->pc = RC_ADDR(0x000039bau);
    rc_step(c, m, 12);
    t0 = 0x00000018u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_39BE:
    /* 000039be   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x000039beu);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x000039c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_39C2:
    /* 000039c2   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x000039c2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_39C6:
    /* 000039c6   4  jsr (ffff8242,A4) */
    c->pc = RC_ADDR(0x000039c6u);
    rc_step(c, m, 18);
    /* vector 96 */
    rc_push32(c, m, RC_ADDR(0x000039cau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d38u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f860u);
    return;

L_39CA:
    /* 000039ca   4  tst.w (924,A4) */
    /* a flag wait: rc_wait runs it natively and returns 1 when its exit branch is taken;
     * 0 means the three instructions below run instead (the reference path). */
    if (rc_wait(c, m, RC_ADDR(0x000039cau), 12,
                RC_ADDR(0x000039ceu), 10, 7,
                RC_ADDR(0x000039d0u), 10,
                (c->a[4] + 0x924u), RC_W))
        goto L_39D2;
    c->pc = RC_ADDR(0x000039cau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x924u));
    rc_set_nzvc(c, t0, RC_W);

L_39CE:
    /* 000039ce   2  beq 000039d2 */
    c->pc = RC_ADDR(0x000039ceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_39D2;

L_39D0:
    /* 000039d0   2  bra 000039ca */
    c->pc = RC_ADDR(0x000039d0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_39CA;

L_39D2:
    /* 000039d2   6  move.w #1,(ffff83fc,A4) */
    c->pc = RC_ADDR(0x000039d2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c04u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_39D8:
    /* 000039d8   2  bra 0000399e */
    c->pc = RC_ADDR(0x000039d8u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_399E;

}
