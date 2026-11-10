/* fn_00020006 - 94 byte(s), 35 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020006(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00020006u): goto L_20006;
    case RC_ADDR(0x00020008u): goto L_20008;
    case RC_ADDR(0x0002000au): goto L_2000A;
    case RC_ADDR(0x0002000eu): goto L_2000E;
    case RC_ADDR(0x00020010u): goto L_20010;
    case RC_ADDR(0x00020012u): goto L_20012;
    case RC_ADDR(0x00020016u): goto L_20016;
    case RC_ADDR(0x00020018u): goto L_20018;
    case RC_ADDR(0x0002001au): goto L_2001A;
    case RC_ADDR(0x0002001cu): goto L_2001C;
    case RC_ADDR(0x00020020u): goto L_20020;
    case RC_ADDR(0x00020022u): goto L_20022;
    case RC_ADDR(0x00020024u): goto L_20024;
    case RC_ADDR(0x00020026u): goto L_20026;
    case RC_ADDR(0x0002002au): goto L_2002A;
    case RC_ADDR(0x0002002cu): goto L_2002C;
    case RC_ADDR(0x0002002eu): goto L_2002E;
    case RC_ADDR(0x00020032u): goto L_20032;
    case RC_ADDR(0x00020036u): goto L_20036;
    case RC_ADDR(0x0002003cu): goto L_2003C;
    case RC_ADDR(0x00020040u): goto L_20040;
    case RC_ADDR(0x00020042u): goto L_20042;
    case RC_ADDR(0x00020044u): goto L_20044;
    case RC_ADDR(0x00020046u): goto L_20046;
    case RC_ADDR(0x00020048u): goto L_20048;
    case RC_ADDR(0x0002004au): goto L_2004A;
    case RC_ADDR(0x0002004eu): goto L_2004E;
    case RC_ADDR(0x00020054u): goto L_20054;
    case RC_ADDR(0x00020056u): goto L_20056;
    case RC_ADDR(0x00020058u): goto L_20058;
    case RC_ADDR(0x0002005au): goto L_2005A;
    case RC_ADDR(0x0002005cu): goto L_2005C;
    case RC_ADDR(0x0002005eu): goto L_2005E;
    case RC_ADDR(0x00020060u): goto L_20060;
    case RC_ADDR(0x00020062u): goto L_20062;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20006:
    /* 00020006   2  ext.l D0 */
    c->pc = RC_ADDR(0x00020006u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_20008:
    /* 00020008   2  sub.l D0,D4 */
    c->pc = RC_ADDR(0x00020008u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_2000A:
    /* 0002000a   4  move.w (e,A2),D0 */
    c->pc = RC_ADDR(0x0002000au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[2] + 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2000E:
    /* 0002000e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0002000eu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_20010:
    /* 00020010   2  sub.l D0,D5 */
    c->pc = RC_ADDR(0x00020010u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_20012:
    /* 00020012   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00020012u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_20016:
    /* 00020016   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00020016u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_20018:
    /* 00020018   2  move.w (A0),D0 */
    c->pc = RC_ADDR(0x00020018u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2001A:
    /* 0002001a   2  move.l D5,D1 */
    c->pc = RC_ADDR(0x0002001au);
    rc_step(c, m);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2001C:
    /* 0002001c   4  jsr (ffff82cc,A4) */
    c->pc = RC_ADDR(0x0002001cu);
    rc_step(c, m);
    /* vector 119 */
    rc_push32(c, m, RC_ADDR(0x00020020u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d22u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020cdeu);
    return;

L_20020:
    /* 00020020   2  moveq #8,D1 */
    c->pc = RC_ADDR(0x00020020u);
    rc_step(c, m);
    c->d[1] = 0x00000008u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_20022:
    /* 00020022   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00020022u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20024:
    /* 00020024   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00020024u);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20026:
    /* 00020026   4  jsr (ffff82d8,A4) */
    c->pc = RC_ADDR(0x00020026u);
    rc_step(c, m);
    /* vector 121 */
    rc_push32(c, m, RC_ADDR(0x0002002au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d2eu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000211acu);
    return;

L_2002A:
    /* 0002002a   2  move.l (A7)+,D1 */
    c->pc = RC_ADDR(0x0002002au);
    rc_step(c, m);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2002C:
    /* 0002002c   2  add.l D0,D1 */
    c->pc = RC_ADDR(0x0002002cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_2002E:
    /* 0002002e   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0002002eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_20032:
    /* 00020032   4  movea.l (24,A0),A1 */
    c->pc = RC_ADDR(0x00020032u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0x24u));
    c->a[1] = t0;

L_20036:
    /* 00020036   6  move.b (0,A1,D1.w),(fffffffb,A5) */
    c->pc = RC_ADDR(0x00020036u);
    rc_step(c, m);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[1] + 0x0u + t4));
    rc_wr8(c, m, (c->a[5] - 0x5u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_2003C:
    /* 0002003c   4  move.b (fffffffb,A5),D0 */
    c->pc = RC_ADDR(0x0002003cu);
    rc_step(c, m);
    t0 = rc_rd8(c, m, (c->a[5] - 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20040:
    /* 00020040   2  ext.w D0 */
    c->pc = RC_ADDR(0x00020040u);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_20042:
    /* 00020042   2  ext.l D0 */
    c->pc = RC_ADDR(0x00020042u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_20044:
    /* 00020044   2  moveq #8,D1 */
    c->pc = RC_ADDR(0x00020044u);
    rc_step(c, m);
    c->d[1] = 0x00000008u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_20046:
    /* 00020046   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00020046u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20048:
    /* 00020048   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00020048u);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2004A:
    /* 0002004a   4  jsr (000211d4) */
    c->pc = RC_ADDR(0x0002004au);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0002004eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000211d4u);
    return;

L_2004E:
    /* 0002004e   6  move.l #80,D1 */
    c->pc = RC_ADDR(0x0002004eu);
    rc_step(c, m);
    t0 = 0x00000080u;
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20054:
    /* 00020054   2  asr.l D0,D1 */
    c->pc = RC_ADDR(0x00020054u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 0, (c->d[0] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_20056:
    /* 00020056   2  move.l (A7)+,D0 */
    c->pc = RC_ADDR(0x00020056u);
    rc_step(c, m);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20058:
    /* 00020058   2  and.l D1,D0 */
    c->pc = RC_ADDR(0x00020058u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    t2 = t0 & rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 0, RC_L, t2);

L_2005A:
    /* 0002005a   2  beq 00020060 */
    c->pc = RC_ADDR(0x0002005au);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_20060;

L_2005C:
    /* 0002005c   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0002005cu);
    rc_step(c, m);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2005E:
    /* 0002005e   2  bra 0001ffe8 */
    c->pc = RC_ADDR(0x0002005eu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001ffe8u);
    return;

L_20060:
    /* 00020060   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00020060u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_20062:
    /* 00020062   2  bra 0001ffe8 */
    c->pc = RC_ADDR(0x00020062u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001ffe8u);
    return;

}
