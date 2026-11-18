/* fn_00001392 - 90 byte(s), 25 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00001392(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00001392u): goto L_1392;
    case RC_ADDR(0x00001398u): goto L_1398;
    case RC_ADDR(0x0000139cu): goto L_139C;
    case RC_ADDR(0x000013a0u): goto L_13A0;
    case RC_ADDR(0x000013a2u): goto L_13A2;
    case RC_ADDR(0x000013a6u): goto L_13A6;
    case RC_ADDR(0x000013aau): goto L_13AA;
    case RC_ADDR(0x000013aeu): goto L_13AE;
    case RC_ADDR(0x000013b2u): goto L_13B2;
    case RC_ADDR(0x000013b6u): goto L_13B6;
    case RC_ADDR(0x000013b8u): goto L_13B8;
    case RC_ADDR(0x000013bcu): goto L_13BC;
    case RC_ADDR(0x000013beu): goto L_13BE;
    case RC_ADDR(0x000013c2u): goto L_13C2;
    case RC_ADDR(0x000013c6u): goto L_13C6;
    case RC_ADDR(0x000013c8u): goto L_13C8;
    case RC_ADDR(0x000013cau): goto L_13CA;
    case RC_ADDR(0x000013ceu): goto L_13CE;
    case RC_ADDR(0x000013d0u): goto L_13D0;
    case RC_ADDR(0x000013d4u): goto L_13D4;
    case RC_ADDR(0x000013d8u): goto L_13D8;
    case RC_ADDR(0x000013dcu): goto L_13DC;
    case RC_ADDR(0x000013e0u): goto L_13E0;
    case RC_ADDR(0x000013e4u): goto L_13E4;
    case RC_ADDR(0x000013e8u): goto L_13E8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1392:
    /* 00001392   6  pea (00010001).l */
    c->pc = RC_ADDR(0x00001392u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_1398:
    /* 00001398   4  pea (0000000e).l */
    c->pc = RC_ADDR(0x00001398u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000eu);

L_139C:
    /* 0000139c   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0000139cu);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x000013a0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d8eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002168cu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021690u);
    return;

L_13A0:
    /* 000013a0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000013a0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_13A2:
    /* 000013a2   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x000013a2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_13A6:
    /* 000013a6   4  move.l D0,(a,A0) */
    c->pc = RC_ADDR(0x000013a6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[0] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_13AA:
    /* 000013aa   4  move.l D0,(fffffff0,A5) */
    c->pc = RC_ADDR(0x000013aau);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_13AE:
    /* 000013ae   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000013aeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13B2:
    /* 000013b2   4  jsr (00000fea) */
    c->pc = RC_ADDR(0x000013b2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000013b6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000feau);
    return;

L_13B6:
    /* 000013b6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000013b6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_13B8:
    /* 000013b8   4  movea.l (fffffff0,A5),A0 */
    c->pc = RC_ADDR(0x000013b8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[0] = t0;

L_13BC:
    /* 000013bc   2  move.l D0,(A0) */
    c->pc = RC_ADDR(0x000013bcu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13BE:
    /* 000013be   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000013beu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13C2:
    /* 000013c2   4  movea.l (fffffff0,A5),A0 */
    c->pc = RC_ADDR(0x000013c2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[0] = t0;

L_13C6:
    /* 000013c6   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x000013c6u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000004u;

L_13C8:
    /* 000013c8   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x000013c8u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13CA:
    /* 000013ca   4  jsr (00001042) */
    c->pc = RC_ADDR(0x000013cau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000013ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00001042u);
    return;

L_13CE:
    /* 000013ce   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000013ceu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_13D0:
    /* 000013d0   4  pea (00000001).l */
    c->pc = RC_ADDR(0x000013d0u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_13D4:
    /* 000013d4   4  movea.l (fffffff0,A5),A0 */
    c->pc = RC_ADDR(0x000013d4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[0] = t0;

L_13D8:
    /* 000013d8   4  pea (c,A0) */
    c->pc = RC_ADDR(0x000013d8u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[0] + 0xcu));

L_13DC:
    /* 000013dc   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000013dcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13E0:
    /* 000013e0   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x000013e0u);
    rc_step(c, m, 18);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x000013e4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d6au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021472u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021476u);
    return;

L_13E4:
    /* 000013e4   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000013e4u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_13E8:
    /* 000013e8   4  addq.w #1,(ffffffd8,A5) */
    c->pc = RC_ADDR(0x000013e8u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x28u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

    /* falls through into 000013ec */
    c->pc = RC_ADDR(0x000013ecu);
    return;
}
