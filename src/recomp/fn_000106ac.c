/* fn_000106ac - 88 byte(s), 24 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000106ac(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000106acu): goto L_106AC;
    case RC_ADDR(0x000106b0u): goto L_106B0;
    case RC_ADDR(0x000106b4u): goto L_106B4;
    case RC_ADDR(0x000106b8u): goto L_106B8;
    case RC_ADDR(0x000106bcu): goto L_106BC;
    case RC_ADDR(0x000106c0u): goto L_106C0;
    case RC_ADDR(0x000106c4u): goto L_106C4;
    case RC_ADDR(0x000106c6u): goto L_106C6;
    case RC_ADDR(0x000106c8u): goto L_106C8;
    case RC_ADDR(0x000106ccu): goto L_106CC;
    case RC_ADDR(0x000106d0u): goto L_106D0;
    case RC_ADDR(0x000106d4u): goto L_106D4;
    case RC_ADDR(0x000106d8u): goto L_106D8;
    case RC_ADDR(0x000106dcu): goto L_106DC;
    case RC_ADDR(0x000106e0u): goto L_106E0;
    case RC_ADDR(0x000106e4u): goto L_106E4;
    case RC_ADDR(0x000106e8u): goto L_106E8;
    case RC_ADDR(0x000106ecu): goto L_106EC;
    case RC_ADDR(0x000106f0u): goto L_106F0;
    case RC_ADDR(0x000106f4u): goto L_106F4;
    case RC_ADDR(0x000106f8u): goto L_106F8;
    case RC_ADDR(0x000106fcu): goto L_106FC;
    case RC_ADDR(0x00010700u): goto L_10700;
    case RC_ADDR(0x00010702u): goto L_10702;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_106AC:
    /* 000106ac   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000106acu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_106B0:
    /* 000106b0   4  pea (0000006e).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000106b0u);
    rc_push32(c, m, 0x0000006eu);

L_106B4:
    /* 000106b4   4  pea (000000e3).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000106b4u);
    rc_push32(c, m, 0x000000e3u);

L_106B8:
    /* 000106b8   4  pea (0000005a).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000106b8u);
    rc_push32(c, m, 0x0000005au);

L_106BC:
    /* 000106bc   4  pea (0000005c).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000106bcu);
    rc_push32(c, m, 0x0000005cu);

L_106C0:
    /* 000106c0   4  move.w (8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000106c0u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_106C4:
    /* 000106c4   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000106c4u);
    rc_ext_l(c, 0);

L_106C6:
    /* 000106c6   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000106c6u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_106C8:
    /* 000106c8   4  jsr (ffff8068,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000106c8u);
    /* vector 17 */
    rc_push32(c, m, RC_ADDR(0x000106ccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00004f9eu);
    return;

L_106CC:
    /* 000106cc   4  lea (14,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000106ccu);
    c->a[7] = (c->a[7] + 0x14u);

L_106D0:
    /* 000106d0   4  move.w (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000106d0u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_106D4:
    /* 000106d4   4  move.w #62,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000106d4u);
    t0 = 0x00000062u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_106D8:
    /* 000106d8   4  move.w #5f,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000106d8u);
    t0 = 0x0000005fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_106DC:
    /* 000106dc   4  pea (00010704) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000106dcu);
    rc_push32(c, m, RC_ADDR(0x00010704u));

L_106E0:
    /* 000106e0   4  jsr (ffff8062,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000106e0u);
    /* vector 16 */
    rc_push32(c, m, RC_ADDR(0x000106e4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004dcau);
    return;

L_106E4:
    /* 000106e4   4  lea (a,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000106e4u);
    c->a[7] = (c->a[7] + 0xau);

L_106E8:
    /* 000106e8   4  move.w (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000106e8u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_106EC:
    /* 000106ec   4  move.w #6c,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000106ecu);
    t0 = 0x0000006cu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_106F0:
    /* 000106f0   4  move.w #5f,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000106f0u);
    t0 = 0x0000005fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_106F4:
    /* 000106f4   4  pea (0001071c) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000106f4u);
    rc_push32(c, m, RC_ADDR(0x0001071cu));

L_106F8:
    /* 000106f8   4  jsr (ffff8062,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000106f8u);
    /* vector 16 */
    rc_push32(c, m, RC_ADDR(0x000106fcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00004dcau);
    return;

L_106FC:
    /* 000106fc   4  lea (a,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000106fcu);
    c->a[7] = (c->a[7] + 0xau);

L_10700:
    /* 00010700   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010700u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_10702:
    /* 00010702   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010702u);
    rc_ret(c, m);
    return;

}
