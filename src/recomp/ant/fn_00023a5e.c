/* fn_00023a5e - 80 byte(s), 23 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023a5e(cpu_t *c, rt_machine *m)
{
    u32 t0, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00023a5eu): goto L_23A5E;
    case RC_ADDR(0x00023a62u): goto L_23A62;
    case RC_ADDR(0x00023a64u): goto L_23A64;
    case RC_ADDR(0x00023a68u): goto L_23A68;
    case RC_ADDR(0x00023a6au): goto L_23A6A;
    case RC_ADDR(0x00023a6eu): goto L_23A6E;
    case RC_ADDR(0x00023a72u): goto L_23A72;
    case RC_ADDR(0x00023a74u): goto L_23A74;
    case RC_ADDR(0x00023a78u): goto L_23A78;
    case RC_ADDR(0x00023a7au): goto L_23A7A;
    case RC_ADDR(0x00023a80u): goto L_23A80;
    case RC_ADDR(0x00023a84u): goto L_23A84;
    case RC_ADDR(0x00023a88u): goto L_23A88;
    case RC_ADDR(0x00023a8au): goto L_23A8A;
    case RC_ADDR(0x00023a8eu): goto L_23A8E;
    case RC_ADDR(0x00023a92u): goto L_23A92;
    case RC_ADDR(0x00023a96u): goto L_23A96;
    case RC_ADDR(0x00023a98u): goto L_23A98;
    case RC_ADDR(0x00023a9cu): goto L_23A9C;
    case RC_ADDR(0x00023aa0u): goto L_23AA0;
    case RC_ADDR(0x00023aa4u): goto L_23AA4;
    case RC_ADDR(0x00023aa8u): goto L_23AA8;
    case RC_ADDR(0x00023aacu): goto L_23AAC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23A5E:
    /* 00023a5e   4  tst.l (455e,A4) */
    c->pc = RC_ADDR(0x00023a5eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x455eu));
    rc_set_nzvc(c, t0, RC_L);

L_23A62:
    /* 00023a62   2  bne 00023a96 */
    c->pc = RC_ADDR(0x00023a62u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_23A96;

L_23A64:
    /* 00023a64   4  movem.l { D6 D7 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x00023a64u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_23A68:
    /* 00023a68   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00023a68u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_23A6A:
    /* 00023a6a   4  pea (00023aae) */
    c->pc = RC_ADDR(0x00023a6au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00023aaeu));

L_23A6E:
    /* 00023a6e   4  jsr (000237c6) */
    c->pc = RC_ADDR(0x00023a6eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00023a72u));
    rc_depth++;
    c->pc = RC_ADDR(0x000237c6u);
    return;

L_23A72:
    /* 00023a72   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00023a72u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_23A74:
    /* 00023a74   4  move.l D0,(455e,A4) */
    c->pc = RC_ADDR(0x00023a74u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x455eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_23A78:
    /* 00023a78   2  bne 00023a92 */
    c->pc = RC_ADDR(0x00023a78u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_23A92;

L_23A7A:
    /* 00023a7a   6  move.l #10,-(A7) */
    c->pc = RC_ADDR(0x00023a7au);
    rc_step(c, m, 20);
    t0 = 0x00000010u;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23A80:
    /* 00023a80   4  pea (00023abe) */
    c->pc = RC_ADDR(0x00023a80u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00023abeu));

L_23A84:
    /* 00023a84   4  jsr (0002350c) */
    c->pc = RC_ADDR(0x00023a84u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00023a88u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002350cu);
    return;

L_23A88:
    /* 00023a88   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00023a88u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23A8A:
    /* 00023a8a   4  jsr (0002354c) */
    c->pc = RC_ADDR(0x00023a8au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00023a8eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0002354cu);
    return;

L_23A8E:
    /* 00023a8e   4  jsr (00023ace) */
    c->pc = RC_ADDR(0x00023a8eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00023a92u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023aceu);
    return;

L_23A92:
    /* 00023a92   4  movem.l (SP)+,{ D0 D1 A0 A1 } */
    c->pc = RC_ADDR(0x00023a92u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_23A96:
    /* 00023a96   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x00023a96u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23A98:
    /* 00023a98   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x00023a98u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_23A9C:
    /* 00023a9c   4  move.l A6,(4,A7) */
    c->pc = RC_ADDR(0x00023a9cu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 6, RC_L);
    rc_wr32(c, m, (c->a[7] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_23AA0:
    /* 00023aa0   4  movea.l (455e,A4),A6 */
    c->pc = RC_ADDR(0x00023aa0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x455eu));
    c->a[6] = t0;

L_23AA4:
    /* 00023aa4   4  jsr (0,A6,D0.w) */
    c->pc = RC_ADDR(0x00023aa4u);
    rc_step(c, m, 22);
    rc_push32(c, m, RC_ADDR(0x00023aa8u));
    rc_depth++;
    t4 = c->a[0];
    t3 = (c->a[6] + 0x0u + t4);
    c->pc = t3;
    return;

L_23AA8:
    /* 00023aa8   4  movem.l (SP)+,{ A0 A6 } */
    c->pc = RC_ADDR(0x00023aa8u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_23AAC:
    /* 00023aac   2  rts */
    c->pc = RC_ADDR(0x00023aacu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
