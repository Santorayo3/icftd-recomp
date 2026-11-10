/* fn_00009c3c - 54 byte(s), 15 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00009c3c(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00009c3cu): goto L_9C3C;
    case RC_ADDR(0x00009c40u): goto L_9C40;
    case RC_ADDR(0x00009c42u): goto L_9C42;
    case RC_ADDR(0x00009c46u): goto L_9C46;
    case RC_ADDR(0x00009c48u): goto L_9C48;
    case RC_ADDR(0x00009c4cu): goto L_9C4C;
    case RC_ADDR(0x00009c52u): goto L_9C52;
    case RC_ADDR(0x00009c56u): goto L_9C56;
    case RC_ADDR(0x00009c5au): goto L_9C5A;
    case RC_ADDR(0x00009c5eu): goto L_9C5E;
    case RC_ADDR(0x00009c62u): goto L_9C62;
    case RC_ADDR(0x00009c66u): goto L_9C66;
    case RC_ADDR(0x00009c6au): goto L_9C6A;
    case RC_ADDR(0x00009c6eu): goto L_9C6E;
    case RC_ADDR(0x00009c70u): goto L_9C70;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9C3C:
    /* 00009c3c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00009c3cu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_9C40:
    /* 00009c40   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00009c40u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_9C42:
    /* 00009c42   4  move.w (12,A5),D0 */
    c->pc = RC_ADDR(0x00009c42u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9C46:
    /* 00009c46   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00009c46u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_9C48:
    /* 00009c48   4  lea (2e4,A4),A0 */
    c->pc = RC_ADDR(0x00009c48u);
    c->a[0] = (c->a[4] + 0x2e4u);

L_9C4C:
    /* 00009c4c   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00009c4cu);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9C52:
    /* 00009c52   4  move.w (14,A5),-(A7) */
    c->pc = RC_ADDR(0x00009c52u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9C56:
    /* 00009c56   4  move.w (12,A5),-(A7) */
    c->pc = RC_ADDR(0x00009c56u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9C5A:
    /* 00009c5a   4  move.l (e,A5),-(A7) */
    c->pc = RC_ADDR(0x00009c5au);
    t0 = rc_rd32(c, m, (c->a[5] + 0xeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9C5E:
    /* 00009c5e   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00009c5eu);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9C62:
    /* 00009c62   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00009c62u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9C66:
    /* 00009c66   4  jsr (00009b60) */
    c->pc = RC_ADDR(0x00009c66u);
    rc_push32(c, m, RC_ADDR(0x00009c6au));
    rc_depth++;
    c->pc = RC_ADDR(0x00009b60u);
    return;

L_9C6A:
    /* 00009c6a   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00009c6au);
    c->a[7] = (c->a[7] + 0xeu);

L_9C6E:
    /* 00009c6e   2  unlk A5 */
    c->pc = RC_ADDR(0x00009c6eu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_9C70:
    /* 00009c70   2  rts */
    c->pc = RC_ADDR(0x00009c70u);
    rc_ret(c, m);
    return;

}
