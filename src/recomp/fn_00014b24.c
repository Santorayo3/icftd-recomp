/* fn_00014b24 - 88 byte(s), 26 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00014b24(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00014b24u): goto L_14B24;
    case RC_ADDR(0x00014b28u): goto L_14B28;
    case RC_ADDR(0x00014b2cu): goto L_14B2C;
    case RC_ADDR(0x00014b2eu): goto L_14B2E;
    case RC_ADDR(0x00014b32u): goto L_14B32;
    case RC_ADDR(0x00014b36u): goto L_14B36;
    case RC_ADDR(0x00014b3au): goto L_14B3A;
    case RC_ADDR(0x00014b3eu): goto L_14B3E;
    case RC_ADDR(0x00014b42u): goto L_14B42;
    case RC_ADDR(0x00014b46u): goto L_14B46;
    case RC_ADDR(0x00014b48u): goto L_14B48;
    case RC_ADDR(0x00014b4au): goto L_14B4A;
    case RC_ADDR(0x00014b4eu): goto L_14B4E;
    case RC_ADDR(0x00014b52u): goto L_14B52;
    case RC_ADDR(0x00014b56u): goto L_14B56;
    case RC_ADDR(0x00014b58u): goto L_14B58;
    case RC_ADDR(0x00014b5au): goto L_14B5A;
    case RC_ADDR(0x00014b5eu): goto L_14B5E;
    case RC_ADDR(0x00014b62u): goto L_14B62;
    case RC_ADDR(0x00014b66u): goto L_14B66;
    case RC_ADDR(0x00014b6au): goto L_14B6A;
    case RC_ADDR(0x00014b6eu): goto L_14B6E;
    case RC_ADDR(0x00014b72u): goto L_14B72;
    case RC_ADDR(0x00014b76u): goto L_14B76;
    case RC_ADDR(0x00014b78u): goto L_14B78;
    case RC_ADDR(0x00014b7au): goto L_14B7A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_14B24:
    /* 00014b24   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00014b24u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_14B28:
    /* 00014b28   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00014b28u);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14B2C:
    /* 00014b2c   2  bra 00014b6e */
    c->pc = RC_ADDR(0x00014b2cu);
    goto L_14B6E;

L_14B2E:
    /* 00014b2e   4  move.w #fff6,-(A7) */
    c->pc = RC_ADDR(0x00014b2eu);
    t0 = 0x0000fff6u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14B32:
    /* 00014b32   4  move.w #fff0,-(A7) */
    c->pc = RC_ADDR(0x00014b32u);
    t0 = 0x0000fff0u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14B36:
    /* 00014b36   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00014b36u);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14B3A:
    /* 00014b3a   4  move.w #5,-(A7) */
    c->pc = RC_ADDR(0x00014b3au);
    t0 = 0x00000005u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14B3E:
    /* 00014b3e   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x00014b3eu);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14B42:
    /* 00014b42   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014b42u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14B46:
    /* 00014b46   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014b46u);
    rc_ext_l(c, 0);

L_14B48:
    /* 00014b48   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014b48u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_14B4A:
    /* 00014b4a   4  lea (115e,A4),A0 */
    c->pc = RC_ADDR(0x00014b4au);
    c->a[0] = (c->a[4] + 0x115eu);

L_14B4E:
    /* 00014b4e   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00014b4eu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14B52:
    /* 00014b52   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014b52u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14B56:
    /* 00014b56   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014b56u);
    rc_ext_l(c, 0);

L_14B58:
    /* 00014b58   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014b58u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_14B5A:
    /* 00014b5a   4  lea (1158,A4),A0 */
    c->pc = RC_ADDR(0x00014b5au);
    c->a[0] = (c->a[4] + 0x1158u);

L_14B5E:
    /* 00014b5e   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00014b5eu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14B62:
    /* 00014b62   4  jsr (000124de) */
    c->pc = RC_ADDR(0x00014b62u);
    rc_push32(c, m, RC_ADDR(0x00014b66u));
    rc_depth++;
    c->pc = RC_ADDR(0x000124deu);
    return;

L_14B66:
    /* 00014b66   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00014b66u);
    c->a[7] = (c->a[7] + 0xeu);

L_14B6A:
    /* 00014b6a   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00014b6au);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_14B6E:
    /* 00014b6e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014b6eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14B72:
    /* 00014b72   4  cmp.w (1164,A4),D0 */
    c->pc = RC_ADDR(0x00014b72u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1164u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14B76:
    /* 00014b76   2  blt 00014b2e */
    c->pc = RC_ADDR(0x00014b76u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_14B2E; }

L_14B78:
    /* 00014b78   2  unlk A5 */
    c->pc = RC_ADDR(0x00014b78u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_14B7A:
    /* 00014b7a   2  rts */
    c->pc = RC_ADDR(0x00014b7au);
    rc_ret(c, m);
    return;

}
