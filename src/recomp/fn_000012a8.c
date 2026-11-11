/* fn_000012a8 - 88 byte(s), 25 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000012a8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000012a8u): goto L_12A8;
    case RC_ADDR(0x000012aeu): goto L_12AE;
    case RC_ADDR(0x000012b2u): goto L_12B2;
    case RC_ADDR(0x000012b6u): goto L_12B6;
    case RC_ADDR(0x000012b8u): goto L_12B8;
    case RC_ADDR(0x000012bcu): goto L_12BC;
    case RC_ADDR(0x000012beu): goto L_12BE;
    case RC_ADDR(0x000012c2u): goto L_12C2;
    case RC_ADDR(0x000012c6u): goto L_12C6;
    case RC_ADDR(0x000012cau): goto L_12CA;
    case RC_ADDR(0x000012ceu): goto L_12CE;
    case RC_ADDR(0x000012d0u): goto L_12D0;
    case RC_ADDR(0x000012d4u): goto L_12D4;
    case RC_ADDR(0x000012d6u): goto L_12D6;
    case RC_ADDR(0x000012dau): goto L_12DA;
    case RC_ADDR(0x000012dcu): goto L_12DC;
    case RC_ADDR(0x000012e0u): goto L_12E0;
    case RC_ADDR(0x000012e4u): goto L_12E4;
    case RC_ADDR(0x000012e8u): goto L_12E8;
    case RC_ADDR(0x000012eau): goto L_12EA;
    case RC_ADDR(0x000012ecu): goto L_12EC;
    case RC_ADDR(0x000012f0u): goto L_12F0;
    case RC_ADDR(0x000012f4u): goto L_12F4;
    case RC_ADDR(0x000012f8u): goto L_12F8;
    case RC_ADDR(0x000012fcu): goto L_12FC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_12A8:
    /* 000012a8   6  pea (00010001).l */
    c->pc = RC_ADDR(0x000012a8u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_12AE:
    /* 000012ae   4  pea (0000000a).l */
    c->pc = RC_ADDR(0x000012aeu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000au);

L_12B2:
    /* 000012b2   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x000012b2u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x000012b6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d8eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002168cu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021690u);
    return;

L_12B6:
    /* 000012b6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000012b6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_12B8:
    /* 000012b8   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x000012b8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_12BC:
    /* 000012bc   2  move.l D0,(A0) */
    c->pc = RC_ADDR(0x000012bcu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_12BE:
    /* 000012be   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x000012beu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_12C2:
    /* 000012c2   4  move.l (A0),(ffffffe8,A5) */
    c->pc = RC_ADDR(0x000012c2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x18u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_12C6:
    /* 000012c6   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000012c6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_12CA:
    /* 000012ca   4  jsr (00000fea) */
    c->pc = RC_ADDR(0x000012cau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000012ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000feau);
    return;

L_12CE:
    /* 000012ce   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000012ceu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_12D0:
    /* 000012d0   4  movea.l (ffffffe8,A5),A0 */
    c->pc = RC_ADDR(0x000012d0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    c->a[0] = t0;

L_12D4:
    /* 000012d4   2  move.l D0,(A0) */
    c->pc = RC_ADDR(0x000012d4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_12D6:
    /* 000012d6   4  movea.l (ffffffe8,A5),A0 */
    c->pc = RC_ADDR(0x000012d6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    c->a[0] = t0;

L_12DA:
    /* 000012da   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x000012dau);
    rc_step(c, m, 8);
    c->a[0] += 0x00000004u;

L_12DC:
    /* 000012dc   4  move.l A0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000012dcu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_12E0:
    /* 000012e0   4  pea (00000001).l */
    c->pc = RC_ADDR(0x000012e0u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_12E4:
    /* 000012e4   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x000012e4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_12E8:
    /* 000012e8   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x000012e8u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000004u;

L_12EA:
    /* 000012ea   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x000012eau);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_12EC:
    /* 000012ec   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000012ecu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_12F0:
    /* 000012f0   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x000012f0u);
    rc_step(c, m, 18);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x000012f4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d6au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021472u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021476u);
    return;

L_12F4:
    /* 000012f4   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000012f4u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_12F8:
    /* 000012f8   4  subq.w #1,(ffffffd6,A5) */
    c->pc = RC_ADDR(0x000012f8u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_12FC:
    /* 000012fc   4  bra 00001232 */
    c->pc = RC_ADDR(0x000012fcu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00001232u);
    return;

}
