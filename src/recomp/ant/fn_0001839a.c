/* fn_0001839a - 56 byte(s), 18 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001839a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001839au): goto L_1839A;
    case RC_ADDR(0x0001839eu): goto L_1839E;
    case RC_ADDR(0x000183a2u): goto L_183A2;
    case RC_ADDR(0x000183a6u): goto L_183A6;
    case RC_ADDR(0x000183a8u): goto L_183A8;
    case RC_ADDR(0x000183acu): goto L_183AC;
    case RC_ADDR(0x000183b0u): goto L_183B0;
    case RC_ADDR(0x000183b4u): goto L_183B4;
    case RC_ADDR(0x000183b6u): goto L_183B6;
    case RC_ADDR(0x000183bcu): goto L_183BC;
    case RC_ADDR(0x000183beu): goto L_183BE;
    case RC_ADDR(0x000183c0u): goto L_183C0;
    case RC_ADDR(0x000183c2u): goto L_183C2;
    case RC_ADDR(0x000183c4u): goto L_183C4;
    case RC_ADDR(0x000183c8u): goto L_183C8;
    case RC_ADDR(0x000183ccu): goto L_183CC;
    case RC_ADDR(0x000183ceu): goto L_183CE;
    case RC_ADDR(0x000183d0u): goto L_183D0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1839A:
    /* 0001839a   4  link.w A5,#ffffffc2 */
    c->pc = RC_ADDR(0x0001839au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x3eu;

L_1839E:
    /* 0001839e   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0001839eu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_183A2:
    /* 000183a2   4  pea (ffffffc4,A5) */
    c->pc = RC_ADDR(0x000183a2u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x3cu));

L_183A6:
    /* 000183a6   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000183a6u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_183A8:
    /* 000183a8   4  jsr (ffff8272,A4) */
    c->pc = RC_ADDR(0x000183a8u);
    rc_step(c, m, 18);
    /* vector 104 */
    rc_push32(c, m, RC_ADDR(0x000183acu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d68u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020cbau);
    return;

L_183AC:
    /* 000183ac   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000183acu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_183B0:
    /* 000183b0   4  move.w D0,(ffffffc2,A5) */
    c->pc = RC_ADDR(0x000183b0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x3eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_183B4:
    /* 000183b4   2  beq 000183d0 */
    c->pc = RC_ADDR(0x000183b4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_183D0;

L_183B6:
    /* 000183b6   6  cmpi.w #3039,(ffffffc2,A5) */
    c->pc = RC_ADDR(0x000183b6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x3eu));
    rc_cmp(c, RC_W, t0, 0x00003039u);

L_183BC:
    /* 000183bc   2  bne 000183c4 */
    c->pc = RC_ADDR(0x000183bcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_183C4;

L_183BE:
    /* 000183be   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000183beu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_183C0:
    /* 000183c0   2  unlk A5 */
    c->pc = RC_ADDR(0x000183c0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_183C2:
    /* 000183c2   2  rts */
    c->pc = RC_ADDR(0x000183c2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_183C4:
    /* 000183c4   4  pea (ffffffc4,A5) */
    c->pc = RC_ADDR(0x000183c4u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x3cu));

L_183C8:
    /* 000183c8   4  jsr (00018286) */
    c->pc = RC_ADDR(0x000183c8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000183ccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00018286u);
    return;

L_183CC:
    /* 000183cc   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000183ccu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_183CE:
    /* 000183ce   2  bra 000183c0 */
    c->pc = RC_ADDR(0x000183ceu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_183C0;

L_183D0:
    /* 000183d0   2  bra 000183c0 */
    c->pc = RC_ADDR(0x000183d0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_183C0;

}
