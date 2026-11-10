/* fn_00005e24 - 72 byte(s), 19 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00005e24(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00005e24u): goto L_5E24;
    case RC_ADDR(0x00005e28u): goto L_5E28;
    case RC_ADDR(0x00005e2eu): goto L_5E2E;
    case RC_ADDR(0x00005e34u): goto L_5E34;
    case RC_ADDR(0x00005e3au): goto L_5E3A;
    case RC_ADDR(0x00005e40u): goto L_5E40;
    case RC_ADDR(0x00005e42u): goto L_5E42;
    case RC_ADDR(0x00005e46u): goto L_5E46;
    case RC_ADDR(0x00005e4au): goto L_5E4A;
    case RC_ADDR(0x00005e4eu): goto L_5E4E;
    case RC_ADDR(0x00005e52u): goto L_5E52;
    case RC_ADDR(0x00005e54u): goto L_5E54;
    case RC_ADDR(0x00005e56u): goto L_5E56;
    case RC_ADDR(0x00005e58u): goto L_5E58;
    case RC_ADDR(0x00005e5cu): goto L_5E5C;
    case RC_ADDR(0x00005e60u): goto L_5E60;
    case RC_ADDR(0x00005e64u): goto L_5E64;
    case RC_ADDR(0x00005e68u): goto L_5E68;
    case RC_ADDR(0x00005e6au): goto L_5E6A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5E24:
    /* 00005e24   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005e24u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_5E28:
    /* 00005e28   6  move.l (8,A5),(fffffebe,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005e28u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5E2E:
    /* 00005e2e   6  pea (00080000).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005e2eu);
    rc_push32(c, m, RC_ADDR(0x00080000u));

L_5E34:
    /* 00005e34   6  pea (009b0000).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005e34u);
    rc_push32(c, m, RC_ADDR(0x009b0000u));

L_5E3A:
    /* 00005e3a   6  pea (00a00000).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005e3au);
    rc_push32(c, m, RC_ADDR(0x00a00000u));

L_5E40:
    /* 00005e40   2  clr.w -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005e40u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5E42:
    /* 00005e42   4  move.l (ffff8434,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005e42u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7bccu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5E46:
    /* 00005e46   4  move.w #1,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005e46u);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5E4A:
    /* 00005e4a   4  jsr (ffff8266,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005e4au);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00005e4eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_5E4E:
    /* 00005e4e   4  lea (14,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005e4eu);
    c->a[7] = (c->a[7] + 0x14u);

L_5E52:
    /* 00005e52   2  clr.w -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005e52u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5E54:
    /* 00005e54   2  clr.l -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005e54u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5E56:
    /* 00005e56   2  clr.l -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005e56u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5E58:
    /* 00005e58   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005e58u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_5E5C:
    /* 00005e5c   4  move.l (2c,A0),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005e5cu);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5E60:
    /* 00005e60   4  jsr (ffff8278,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005e60u);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x00005e64u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fa02u);
    return;

L_5E64:
    /* 00005e64   4  lea (e,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005e64u);
    c->a[7] = (c->a[7] + 0xeu);

L_5E68:
    /* 00005e68   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005e68u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_5E6A:
    /* 00005e6a   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005e6au);
    rc_ret(c, m);
    return;

}
