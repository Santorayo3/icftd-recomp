/* fn_00001394 - 88 byte(s), 25 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00001394(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00001394u): goto L_1394;
    case RC_ADDR(0x00001398u): goto L_1398;
    case RC_ADDR(0x0000139cu): goto L_139C;
    case RC_ADDR(0x000013a0u): goto L_13A0;
    case RC_ADDR(0x000013a4u): goto L_13A4;
    case RC_ADDR(0x000013a8u): goto L_13A8;
    case RC_ADDR(0x000013acu): goto L_13AC;
    case RC_ADDR(0x000013b0u): goto L_13B0;
    case RC_ADDR(0x000013b6u): goto L_13B6;
    case RC_ADDR(0x000013b8u): goto L_13B8;
    case RC_ADDR(0x000013bcu): goto L_13BC;
    case RC_ADDR(0x000013beu): goto L_13BE;
    case RC_ADDR(0x000013c2u): goto L_13C2;
    case RC_ADDR(0x000013c4u): goto L_13C4;
    case RC_ADDR(0x000013c8u): goto L_13C8;
    case RC_ADDR(0x000013ccu): goto L_13CC;
    case RC_ADDR(0x000013ceu): goto L_13CE;
    case RC_ADDR(0x000013d2u): goto L_13D2;
    case RC_ADDR(0x000013d4u): goto L_13D4;
    case RC_ADDR(0x000013d8u): goto L_13D8;
    case RC_ADDR(0x000013dcu): goto L_13DC;
    case RC_ADDR(0x000013e0u): goto L_13E0;
    case RC_ADDR(0x000013e4u): goto L_13E4;
    case RC_ADDR(0x000013e8u): goto L_13E8;
    case RC_ADDR(0x000013eau): goto L_13EA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1394:
    /* 00001394   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x00001394u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_1398:
    /* 00001398   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00001398u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_139C:
    /* 0000139c   4  pea (fffffffe,A5) */
    c->pc = RC_ADDR(0x0000139cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x2u));

L_13A0:
    /* 000013a0   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000013a0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13A4:
    /* 000013a4   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x000013a4u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x000013a8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_13A8:
    /* 000013a8   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000013a8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_13AC:
    /* 000013ac   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000013acu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13B0:
    /* 000013b0   6  pea (00010001).l */
    c->pc = RC_ADDR(0x000013b0u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_13B6:
    /* 000013b6   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000013b6u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_13B8:
    /* 000013b8   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000013b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13BC:
    /* 000013bc   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000013bcu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13BE:
    /* 000013be   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x000013beu);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x000013c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_13C2:
    /* 000013c2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000013c2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_13C4:
    /* 000013c4   4  move.l D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000013c4u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_13C8:
    /* 000013c8   4  subq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000013c8u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13CC:
    /* 000013cc   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000013ccu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_13CE:
    /* 000013ce   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000013ceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13D2:
    /* 000013d2   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000013d2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13D4:
    /* 000013d4   4  move.l (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x000013d4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13D8:
    /* 000013d8   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000013d8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13DC:
    /* 000013dc   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x000013dcu);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x000013e0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_13E0:
    /* 000013e0   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000013e0u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_13E4:
    /* 000013e4   4  move.l (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x000013e4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_13E8:
    /* 000013e8   2  unlk A5 */
    c->pc = RC_ADDR(0x000013e8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_13EA:
    /* 000013ea   2  rts */
    c->pc = RC_ADDR(0x000013eau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
