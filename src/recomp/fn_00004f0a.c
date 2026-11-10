/* fn_00004f0a - 82 byte(s), 23 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00004f0a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case 0x00004f0au: goto L_4F0A;
    case 0x00004f0eu: goto L_4F0E;
    case 0x00004f14u: goto L_4F14;
    case 0x00004f18u: goto L_4F18;
    case 0x00004f1au: goto L_4F1A;
    case 0x00004f1eu: goto L_4F1E;
    case 0x00004f22u: goto L_4F22;
    case 0x00004f24u: goto L_4F24;
    case 0x00004f28u: goto L_4F28;
    case 0x00004f2cu: goto L_4F2C;
    case 0x00004f30u: goto L_4F30;
    case 0x00004f34u: goto L_4F34;
    case 0x00004f38u: goto L_4F38;
    case 0x00004f3cu: goto L_4F3C;
    case 0x00004f40u: goto L_4F40;
    case 0x00004f44u: goto L_4F44;
    case 0x00004f48u: goto L_4F48;
    case 0x00004f4au: goto L_4F4A;
    case 0x00004f4eu: goto L_4F4E;
    case 0x00004f52u: goto L_4F52;
    case 0x00004f56u: goto L_4F56;
    case 0x00004f58u: goto L_4F58;
    case 0x00004f5au: goto L_4F5A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_4F0A:
    /* 00004f0a   4  link.w A5,#fffffffe */
    c->pc = 0x00004f0au;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_4F0E:
    /* 00004f0e   6  move.w #1,(fffffffe,A5) */
    c->pc = 0x00004f0eu;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4F14:
    /* 00004f14   4  tst.w (fffffffe,A5) */
    c->pc = 0x00004f14u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_4F18:
    /* 00004f18   2  beq 00004f58 */
    c->pc = 0x00004f18u;
    if (rc_cond(c, 7)) goto L_4F58;

L_4F1A:
    /* 00004f1a   4  move.l (8,A5),-(A7) */
    c->pc = 0x00004f1au;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4F1E:
    /* 00004f1e   4  jsr (00004e84) */
    c->pc = 0x00004f1eu;
    rc_push32(c, m, 0x00004f22u);
    rc_depth++;
    c->pc = 0x00004e84u;
    return;

L_4F22:
    /* 00004f22   2  addq.w #4,A7 */
    c->pc = 0x00004f22u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4F24:
    /* 00004f24   4  move.w D0,(fffffffe,A5) */
    c->pc = 0x00004f24u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4F28:
    /* 00004f28   4  move.l (fffff274,A4),-(A7) */
    c->pc = 0x00004f28u;
    t0 = rc_rd32(c, m, (c->a[4] - 0xd8cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4F2C:
    /* 00004f2c   4  move.w (c,A5),-(A7) */
    c->pc = 0x00004f2cu;
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4F30:
    /* 00004f30   4  move.w (fffff272,A4),-(A7) */
    c->pc = 0x00004f30u;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd8eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4F34:
    /* 00004f34   4  move.w (fffffec2,A4),-(A7) */
    c->pc = 0x00004f34u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x13eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4F38:
    /* 00004f38   4  move.l (8,A5),-(A7) */
    c->pc = 0x00004f38u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4F3C:
    /* 00004f3c   4  jsr (00004d76) */
    c->pc = 0x00004f3cu;
    rc_push32(c, m, 0x00004f40u);
    rc_depth++;
    c->pc = 0x00004d76u;
    return;

L_4F40:
    /* 00004f40   4  lea (e,A7),A7 */
    c->pc = 0x00004f40u;
    c->a[7] = (c->a[7] + 0xeu);

L_4F44:
    /* 00004f44   4  move.l (fffff274,A4),D0 */
    c->pc = 0x00004f44u;
    t0 = rc_rd32(c, m, (c->a[4] - 0xd8cu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_4F48:
    /* 00004f48   2  addq.l #1,D0 */
    c->pc = 0x00004f48u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_4F4A:
    /* 00004f4a   4  add.l D0,(8,A5) */
    c->pc = 0x00004f4au;
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_4F4E:
    /* 00004f4e   4  move.w (12,A4),D0 */
    c->pc = 0x00004f4eu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4F52:
    /* 00004f52   4  add.w D0,(fffff272,A4) */
    c->pc = 0x00004f52u;
    t3 = (c->a[4] - 0xd8eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_4F56:
    /* 00004f56   2  bra 00004f14 */
    c->pc = 0x00004f56u;
    rc_tick();
    goto L_4F14;

L_4F58:
    /* 00004f58   2  unlk A5 */
    c->pc = 0x00004f58u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_4F5A:
    /* 00004f5a   2  rts */
    c->pc = 0x00004f5au;
    rc_ret(c, m);
    return;

}
