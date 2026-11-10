/* fn_000034bc - 78 byte(s), 21 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000034bc(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000034bcu): goto L_34BC;
    case RC_ADDR(0x000034c0u): goto L_34C0;
    case RC_ADDR(0x000034c6u): goto L_34C6;
    case RC_ADDR(0x000034cau): goto L_34CA;
    case RC_ADDR(0x000034ccu): goto L_34CC;
    case RC_ADDR(0x000034d0u): goto L_34D0;
    case RC_ADDR(0x000034d4u): goto L_34D4;
    case RC_ADDR(0x000034d6u): goto L_34D6;
    case RC_ADDR(0x000034dau): goto L_34DA;
    case RC_ADDR(0x000034dcu): goto L_34DC;
    case RC_ADDR(0x000034e0u): goto L_34E0;
    case RC_ADDR(0x000034e6u): goto L_34E6;
    case RC_ADDR(0x000034e8u): goto L_34E8;
    case RC_ADDR(0x000034ecu): goto L_34EC;
    case RC_ADDR(0x000034f2u): goto L_34F2;
    case RC_ADDR(0x000034f6u): goto L_34F6;
    case RC_ADDR(0x000034fcu): goto L_34FC;
    case RC_ADDR(0x00003500u): goto L_3500;
    case RC_ADDR(0x00003504u): goto L_3504;
    case RC_ADDR(0x00003506u): goto L_3506;
    case RC_ADDR(0x00003508u): goto L_3508;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_34BC:
    /* 000034bc   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x000034bcu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_34C0:
    /* 000034c0   6  move.l (ffffcb18,A4),(fffffffc,A5) */
    c->pc = RC_ADDR(0x000034c0u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34e8u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_34C6:
    /* 000034c6   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x000034c6u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_34CA:
    /* 000034ca   2  beq 00003506 */
    c->pc = RC_ADDR(0x000034cau);
    if (rc_cond(c, 7)) goto L_3506;

L_34CC:
    /* 000034cc   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000034ccu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_34D0:
    /* 000034d0   4  jsr (ffff8212,A4) */
    c->pc = RC_ADDR(0x000034d0u);
    /* vector 88 */
    rc_push32(c, m, RC_ADDR(0x000034d4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d642u);
    return;

L_34D4:
    /* 000034d4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000034d4u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_34D6:
    /* 000034d6   4  tst.w (ffffcb1c,A4) */
    c->pc = RC_ADDR(0x000034d6u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34e4u));
    rc_set_nzvc(c, t0, RC_W);

L_34DA:
    /* 000034da   2  beq 000034e8 */
    c->pc = RC_ADDR(0x000034dau);
    if (rc_cond(c, 7)) goto L_34E8;

L_34DC:
    /* 000034dc   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000034dcu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_34E0:
    /* 000034e0   6  bset #4,(b,A0) */
    c->pc = RC_ADDR(0x000034e0u);
    t4 = 0x00000004u;
    t3 = (c->a[0] + 0xbu);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_34E6:
    /* 000034e6   2  bra 000034f2 */
    c->pc = RC_ADDR(0x000034e6u);
    goto L_34F2;

L_34E8:
    /* 000034e8   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000034e8u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_34EC:
    /* 000034ec   6  andi.w #ffef,(a,A0) */
    c->pc = RC_ADDR(0x000034ecu);
    t3 = (c->a[0] + 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 & 0x0000ffefu;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_34F2:
    /* 000034f2   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000034f2u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_34F6:
    /* 000034f6   6  andi.w #fffd,(a,A0) */
    c->pc = RC_ADDR(0x000034f6u);
    t3 = (c->a[0] + 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 & 0x0000fffdu;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_34FC:
    /* 000034fc   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000034fcu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_3500:
    /* 00003500   4  move.l (A0),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00003500u);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3504:
    /* 00003504   2  bra 000034c6 */
    c->pc = RC_ADDR(0x00003504u);
    rc_tick();
    goto L_34C6;

L_3506:
    /* 00003506   2  unlk A5 */
    c->pc = RC_ADDR(0x00003506u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_3508:
    /* 00003508   2  rts */
    c->pc = RC_ADDR(0x00003508u);
    rc_ret(c, m);
    return;

}
