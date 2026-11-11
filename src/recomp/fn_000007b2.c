/* fn_000007b2 - 66 byte(s), 20 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000007b2(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000007b2u): goto L_7B2;
    case RC_ADDR(0x000007b6u): goto L_7B6;
    case RC_ADDR(0x000007bau): goto L_7BA;
    case RC_ADDR(0x000007c0u): goto L_7C0;
    case RC_ADDR(0x000007c2u): goto L_7C2;
    case RC_ADDR(0x000007c6u): goto L_7C6;
    case RC_ADDR(0x000007cau): goto L_7CA;
    case RC_ADDR(0x000007ccu): goto L_7CC;
    case RC_ADDR(0x000007ceu): goto L_7CE;
    case RC_ADDR(0x000007d2u): goto L_7D2;
    case RC_ADDR(0x000007d6u): goto L_7D6;
    case RC_ADDR(0x000007d8u): goto L_7D8;
    case RC_ADDR(0x000007dcu): goto L_7DC;
    case RC_ADDR(0x000007e0u): goto L_7E0;
    case RC_ADDR(0x000007e2u): goto L_7E2;
    case RC_ADDR(0x000007e4u): goto L_7E4;
    case RC_ADDR(0x000007e8u): goto L_7E8;
    case RC_ADDR(0x000007ecu): goto L_7EC;
    case RC_ADDR(0x000007f0u): goto L_7F0;
    case RC_ADDR(0x000007f2u): goto L_7F2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_7B2:
    /* 000007b2   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000007b2u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_7B6:
    /* 000007b6   4  movea.l (ffffcb14,A4),A0 */
    c->pc = RC_ADDR(0x000007b6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[0] = t0;

L_7BA:
    /* 000007ba   6  move.l (ffffcbb8,A4),(4,A0) */
    c->pc = RC_ADDR(0x000007bau);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3448u));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7C0:
    /* 000007c0   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000007c0u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_7C2:
    /* 000007c2   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x000007c2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7C6:
    /* 000007c6   4  jsr (ffff8392,A4) */
    c->pc = RC_ADDR(0x000007c6u);
    rc_step(c, m, 18);
    /* vector 152 */
    rc_push32(c, m, RC_ADDR(0x000007cau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021de8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000218fau);
    return;

L_7CA:
    /* 000007ca   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000007cau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_7CC:
    /* 000007cc   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000007ccu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_7CE:
    /* 000007ce   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x000007ceu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7D2:
    /* 000007d2   4  jsr (ffff838c,A4) */
    c->pc = RC_ADDR(0x000007d2u);
    rc_step(c, m, 18);
    /* vector 151 */
    rc_push32(c, m, RC_ADDR(0x000007d6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021de2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000218eau);
    return;

L_7D6:
    /* 000007d6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000007d6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_7D8:
    /* 000007d8   4  pea (000000c7).l */
    c->pc = RC_ADDR(0x000007d8u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000000c7u);

L_7DC:
    /* 000007dc   4  pea (0000013f).l */
    c->pc = RC_ADDR(0x000007dcu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000013fu);

L_7E0:
    /* 000007e0   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000007e0u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_7E2:
    /* 000007e2   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000007e2u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_7E4:
    /* 000007e4   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x000007e4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7E8:
    /* 000007e8   4  jsr (ffff8386,A4) */
    c->pc = RC_ADDR(0x000007e8u);
    rc_step(c, m, 18);
    /* vector 150 */
    rc_push32(c, m, RC_ADDR(0x000007ecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ddcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000218d8u);
    return;

L_7EC:
    /* 000007ec   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x000007ecu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_7F0:
    /* 000007f0   2  unlk A5 */
    c->pc = RC_ADDR(0x000007f0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_7F2:
    /* 000007f2   2  rts */
    c->pc = RC_ADDR(0x000007f2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
