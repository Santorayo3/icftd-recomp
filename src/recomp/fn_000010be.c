/* fn_000010be - 136 byte(s), 34 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000010be(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000010beu): goto L_10BE;
    case RC_ADDR(0x000010c2u): goto L_10C2;
    case RC_ADDR(0x000010c8u): goto L_10C8;
    case RC_ADDR(0x000010ccu): goto L_10CC;
    case RC_ADDR(0x000010d0u): goto L_10D0;
    case RC_ADDR(0x000010d4u): goto L_10D4;
    case RC_ADDR(0x000010d8u): goto L_10D8;
    case RC_ADDR(0x000010dcu): goto L_10DC;
    case RC_ADDR(0x000010deu): goto L_10DE;
    case RC_ADDR(0x000010e2u): goto L_10E2;
    case RC_ADDR(0x000010e6u): goto L_10E6;
    case RC_ADDR(0x000010ecu): goto L_10EC;
    case RC_ADDR(0x000010f0u): goto L_10F0;
    case RC_ADDR(0x000010f4u): goto L_10F4;
    case RC_ADDR(0x000010f8u): goto L_10F8;
    case RC_ADDR(0x000010fcu): goto L_10FC;
    case RC_ADDR(0x00001100u): goto L_1100;
    case RC_ADDR(0x00001104u): goto L_1104;
    case RC_ADDR(0x00001108u): goto L_1108;
    case RC_ADDR(0x0000110cu): goto L_110C;
    case RC_ADDR(0x00001110u): goto L_1110;
    case RC_ADDR(0x00001114u): goto L_1114;
    case RC_ADDR(0x00001118u): goto L_1118;
    case RC_ADDR(0x0000111eu): goto L_111E;
    case RC_ADDR(0x00001122u): goto L_1122;
    case RC_ADDR(0x00001126u): goto L_1126;
    case RC_ADDR(0x0000112au): goto L_112A;
    case RC_ADDR(0x0000112cu): goto L_112C;
    case RC_ADDR(0x00001132u): goto L_1132;
    case RC_ADDR(0x00001136u): goto L_1136;
    case RC_ADDR(0x0000113au): goto L_113A;
    case RC_ADDR(0x0000113cu): goto L_113C;
    case RC_ADDR(0x00001140u): goto L_1140;
    case RC_ADDR(0x00001144u): goto L_1144;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10BE:
    /* 000010be   4  link.w A5,#ffffff6a */
    c->pc = RC_ADDR(0x000010beu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x96u;

L_10C2:
    /* 000010c2   6  move.l (c,A5),(ffffefa4,A4) */
    c->pc = RC_ADDR(0x000010c2u);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_wr32(c, m, (c->a[4] - 0x105cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10C8:
    /* 000010c8   4  tst.l (ffffefa4,A4) */
    c->pc = RC_ADDR(0x000010c8u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x105cu));
    rc_set_nzvc(c, t0, RC_L);

L_10CC:
    /* 000010cc   4  beq 000014ee */
    c->pc = RC_ADDR(0x000010ccu);
    if (rc_cond(c, 7))
    {
        c->pc = RC_ADDR(0x000014eeu);
        return;
    }

L_10D0:
    /* 000010d0   4  pea (000003ed).l */
    c->pc = RC_ADDR(0x000010d0u);
    rc_push32(c, m, RC_ADDR(0x000003edu));

L_10D4:
    /* 000010d4   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000010d4u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10D8:
    /* 000010d8   4  jsr (ffff8290,A4) */
    c->pc = RC_ADDR(0x000010d8u);
    /* vector 109 */
    rc_push32(c, m, RC_ADDR(0x000010dcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00020476u);
    return;

L_10DC:
    /* 000010dc   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000010dcu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_10DE:
    /* 000010de   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000010deu);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10E2:
    /* 000010e2   4  beq 000014ee */
    c->pc = RC_ADDR(0x000010e2u);
    if (rc_cond(c, 7))
    {
        c->pc = RC_ADDR(0x000014eeu);
        return;
    }

L_10E6:
    /* 000010e6   6  move.l (c,A5),(ffffffdc,A5) */
    c->pc = RC_ADDR(0x000010e6u);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_wr32(c, m, (c->a[5] - 0x24u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10EC:
    /* 000010ec   4  pea (ffffffff).l */
    c->pc = RC_ADDR(0x000010ecu);
    rc_push32(c, m, RC_ADDR(0xffffffffu));

L_10F0:
    /* 000010f0   4  move.l (ffffffdc,A5),-(A7) */
    c->pc = RC_ADDR(0x000010f0u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x24u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10F4:
    /* 000010f4   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000010f4u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10F8:
    /* 000010f8   4  jsr (ffff831a,A4) */
    c->pc = RC_ADDR(0x000010f8u);
    /* vector 132 */
    rc_push32(c, m, RC_ADDR(0x000010fcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021488u);
    return;

L_10FC:
    /* 000010fc   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000010fcu);
    c->a[7] = (c->a[7] + 0xcu);

L_1100:
    /* 00001100   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00001100u);
    rc_push32(c, m, RC_ADDR(0x00000002u));

L_1104:
    /* 00001104   4  pea (ffffffda,A5) */
    c->pc = RC_ADDR(0x00001104u);
    rc_push32(c, m, (c->a[5] - 0x26u));

L_1108:
    /* 00001108   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00001108u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_110C:
    /* 0000110c   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x0000110cu);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x00001110u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_1110:
    /* 00001110   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00001110u);
    c->a[7] = (c->a[7] + 0xcu);

L_1114:
    /* 00001114   4  clr.l (ffffef9c,A4) */
    c->pc = RC_ADDR(0x00001114u);
    rc_wr32(c, m, (c->a[4] - 0x1064u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1118:
    /* 00001118   6  move.w (ffffffda,A5),(ffffef9a,A4) */
    c->pc = RC_ADDR(0x00001118u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x26u));
    rc_wr16(c, m, (c->a[4] - 0x1066u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_111E:
    /* 0000111e   4  tst.w (ffffffda,A5) */
    c->pc = RC_ADDR(0x0000111eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x26u));
    rc_set_nzvc(c, t0, RC_W);

L_1122:
    /* 00001122   4  beq 000014d6 */
    c->pc = RC_ADDR(0x00001122u);
    if (rc_cond(c, 7))
    {
        c->pc = RC_ADDR(0x000014d6u);
        return;
    }

L_1126:
    /* 00001126   4  tst.l (ffffef9c,A4) */
    c->pc = RC_ADDR(0x00001126u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1064u));
    rc_set_nzvc(c, t0, RC_L);

L_112A:
    /* 0000112a   2  bne 00001146 */
    c->pc = RC_ADDR(0x0000112au);
    if (rc_cond(c, 6))
    {
        c->pc = RC_ADDR(0x00001146u);
        return;
    }

L_112C:
    /* 0000112c   6  pea (00010001).l */
    c->pc = RC_ADDR(0x0000112cu);
    rc_push32(c, m, RC_ADDR(0x00010001u));

L_1132:
    /* 00001132   4  pea (0000002c).l */
    c->pc = RC_ADDR(0x00001132u);
    rc_push32(c, m, RC_ADDR(0x0000002cu));

L_1136:
    /* 00001136   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00001136u);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x0000113au);
    rc_os_call(c, m, 0, -198);

L_113A:
    /* 0000113a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000113au);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_113C:
    /* 0000113c   4  move.l D0,(ffffef9c,A4) */
    c->pc = RC_ADDR(0x0000113cu);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x1064u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1140:
    /* 00001140   4  move.l D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00001140u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1144:
    /* 00001144   2  bra 00001168 */
    c->pc = RC_ADDR(0x00001144u);
    c->pc = RC_ADDR(0x00001168u);
    return;

}
