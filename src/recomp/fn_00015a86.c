/* fn_00015a86 - 80 byte(s), 25 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00015a86(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00015a86u): goto L_15A86;
    case RC_ADDR(0x00015a8au): goto L_15A8A;
    case RC_ADDR(0x00015a8eu): goto L_15A8E;
    case RC_ADDR(0x00015a90u): goto L_15A90;
    case RC_ADDR(0x00015a92u): goto L_15A92;
    case RC_ADDR(0x00015a96u): goto L_15A96;
    case RC_ADDR(0x00015a98u): goto L_15A98;
    case RC_ADDR(0x00015a9cu): goto L_15A9C;
    case RC_ADDR(0x00015a9eu): goto L_15A9E;
    case RC_ADDR(0x00015aa2u): goto L_15AA2;
    case RC_ADDR(0x00015aa4u): goto L_15AA4;
    case RC_ADDR(0x00015aa6u): goto L_15AA6;
    case RC_ADDR(0x00015aaau): goto L_15AAA;
    case RC_ADDR(0x00015aacu): goto L_15AAC;
    case RC_ADDR(0x00015ab0u): goto L_15AB0;
    case RC_ADDR(0x00015ab2u): goto L_15AB2;
    case RC_ADDR(0x00015ab6u): goto L_15AB6;
    case RC_ADDR(0x00015abau): goto L_15ABA;
    case RC_ADDR(0x00015abeu): goto L_15ABE;
    case RC_ADDR(0x00015ac2u): goto L_15AC2;
    case RC_ADDR(0x00015ac6u): goto L_15AC6;
    case RC_ADDR(0x00015acau): goto L_15ACA;
    case RC_ADDR(0x00015aceu): goto L_15ACE;
    case RC_ADDR(0x00015ad2u): goto L_15AD2;
    case RC_ADDR(0x00015ad4u): goto L_15AD4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_15A86:
    /* 00015a86   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00015a86u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_15A8A:
    /* 00015a8a   4  move.w (1244,A4),D0 */
    c->pc = RC_ADDR(0x00015a8au);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1244u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15A8E:
    /* 00015a8e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015a8eu);
    rc_ext_l(c, 0);

L_15A90:
    /* 00015a90   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015a90u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_15A92:
    /* 00015a92   4  lea (11e4,A4),A0 */
    c->pc = RC_ADDR(0x00015a92u);
    c->a[0] = (c->a[4] + 0x11e4u);

L_15A96:
    /* 00015a96   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x00015a96u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_15A98:
    /* 00015a98   4  move.w (1274,A4),D0 */
    c->pc = RC_ADDR(0x00015a98u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1274u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15A9C:
    /* 00015a9c   2  sub.w D0,(A0) */
    c->pc = RC_ADDR(0x00015a9cu);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_15A9E:
    /* 00015a9e   4  move.w (1244,A4),D0 */
    c->pc = RC_ADDR(0x00015a9eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1244u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15AA2:
    /* 00015aa2   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015aa2u);
    rc_ext_l(c, 0);

L_15AA4:
    /* 00015aa4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015aa4u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_15AA6:
    /* 00015aa6   4  lea (11ec,A4),A0 */
    c->pc = RC_ADDR(0x00015aa6u);
    c->a[0] = (c->a[4] + 0x11ecu);

L_15AAA:
    /* 00015aaa   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x00015aaau);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_15AAC:
    /* 00015aac   4  move.w (1276,A4),D0 */
    c->pc = RC_ADDR(0x00015aacu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1276u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15AB0:
    /* 00015ab0   2  sub.w D0,(A0) */
    c->pc = RC_ADDR(0x00015ab0u);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_15AB2:
    /* 00015ab2   4  move.w (1274,A4),D0 */
    c->pc = RC_ADDR(0x00015ab2u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1274u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15AB6:
    /* 00015ab6   4  sub.w D0,(fffffd98,A4) */
    c->pc = RC_ADDR(0x00015ab6u);
    t3 = (c->a[4] - 0x268u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_15ABA:
    /* 00015aba   4  move.w (1276,A4),D0 */
    c->pc = RC_ADDR(0x00015abau);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1276u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15ABE:
    /* 00015abe   4  sub.w D0,(fffffd9a,A4) */
    c->pc = RC_ADDR(0x00015abeu);
    t3 = (c->a[4] - 0x266u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_15AC2:
    /* 00015ac2   4  clr.w (1276,A4) */
    c->pc = RC_ADDR(0x00015ac2u);
    rc_wr16(c, m, (c->a[4] + 0x1276u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15AC6:
    /* 00015ac6   4  clr.w (1274,A4) */
    c->pc = RC_ADDR(0x00015ac6u);
    rc_wr16(c, m, (c->a[4] + 0x1274u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15ACA:
    /* 00015aca   4  clr.w (fffff288,A4) */
    c->pc = RC_ADDR(0x00015acau);
    rc_wr16(c, m, (c->a[4] - 0xd78u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15ACE:
    /* 00015ace   4  clr.w (fffff286,A4) */
    c->pc = RC_ADDR(0x00015aceu);
    rc_wr16(c, m, (c->a[4] - 0xd7au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15AD2:
    /* 00015ad2   2  unlk A5 */
    c->pc = RC_ADDR(0x00015ad2u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_15AD4:
    /* 00015ad4   2  rts */
    c->pc = RC_ADDR(0x00015ad4u);
    rc_ret(c, m);
    return;

}
