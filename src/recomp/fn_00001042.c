/* fn_00001042 - 124 byte(s), 36 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00001042(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x00001042u): goto L_1042;
    case RC_ADDR(0x00001046u): goto L_1046;
    case RC_ADDR(0x0000104au): goto L_104A;
    case RC_ADDR(0x0000104eu): goto L_104E;
    case RC_ADDR(0x00001052u): goto L_1052;
    case RC_ADDR(0x00001056u): goto L_1056;
    case RC_ADDR(0x0000105au): goto L_105A;
    case RC_ADDR(0x0000105eu): goto L_105E;
    case RC_ADDR(0x00001062u): goto L_1062;
    case RC_ADDR(0x00001064u): goto L_1064;
    case RC_ADDR(0x00001068u): goto L_1068;
    case RC_ADDR(0x0000106cu): goto L_106C;
    case RC_ADDR(0x0000106eu): goto L_106E;
    case RC_ADDR(0x00001070u): goto L_1070;
    case RC_ADDR(0x00001074u): goto L_1074;
    case RC_ADDR(0x00001078u): goto L_1078;
    case RC_ADDR(0x0000107cu): goto L_107C;
    case RC_ADDR(0x00001080u): goto L_1080;
    case RC_ADDR(0x00001084u): goto L_1084;
    case RC_ADDR(0x00001086u): goto L_1086;
    case RC_ADDR(0x0000108au): goto L_108A;
    case RC_ADDR(0x0000108eu): goto L_108E;
    case RC_ADDR(0x00001092u): goto L_1092;
    case RC_ADDR(0x00001094u): goto L_1094;
    case RC_ADDR(0x00001098u): goto L_1098;
    case RC_ADDR(0x0000109cu): goto L_109C;
    case RC_ADDR(0x0000109eu): goto L_109E;
    case RC_ADDR(0x000010a2u): goto L_10A2;
    case RC_ADDR(0x000010a6u): goto L_10A6;
    case RC_ADDR(0x000010aau): goto L_10AA;
    case RC_ADDR(0x000010aeu): goto L_10AE;
    case RC_ADDR(0x000010b0u): goto L_10B0;
    case RC_ADDR(0x000010b2u): goto L_10B2;
    case RC_ADDR(0x000010b6u): goto L_10B6;
    case RC_ADDR(0x000010bau): goto L_10BA;
    case RC_ADDR(0x000010bcu): goto L_10BC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1042:
    /* 00001042   4  link.w A5,#ffffffec */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001042u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x14u;

L_1046:
    /* 00001046   4  pea (00000001).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001046u);
    rc_push32(c, m, 0x00000001u);

L_104A:
    /* 0000104a   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000104au);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_104E:
    /* 0000104e   4  move.l (c,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000104eu);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1052:
    /* 00001052   4  jsr (ffff8314,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001052u);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x00001056u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_1056:
    /* 00001056   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001056u);
    c->a[7] = (c->a[7] + 0xcu);

L_105A:
    /* 0000105a   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000105au);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_105E:
    /* 0000105e   4  cmpi.b #fe,(A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000105eu);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x000000feu);

L_1062:
    /* 00001062   2  bne 0000107c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001062u);
    if (rc_cond(c, 6)) goto L_107C;

L_1064:
    /* 00001064   4  pea (00000003).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001064u);
    rc_push32(c, m, 0x00000003u);

L_1068:
    /* 00001068   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001068u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_106C:
    /* 0000106c   2  addq.l #1,A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000106cu);
    c->a[0] += 0x00000001u;

L_106E:
    /* 0000106e   2  move.l A0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000106eu);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1070:
    /* 00001070   4  move.l (c,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001070u);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1074:
    /* 00001074   4  jsr (ffff8314,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001074u);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x00001078u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_1078:
    /* 00001078   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001078u);
    c->a[7] = (c->a[7] + 0xcu);

L_107C:
    /* 0000107c   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000107cu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1080:
    /* 00001080   4  cmpi.b #fd,(A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001080u);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x000000fdu);

L_1084:
    /* 00001084   2  bne 000010ba */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001084u);
    if (rc_cond(c, 6)) goto L_10BA;

L_1086:
    /* 00001086   4  pea (ffffffec,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001086u);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_108A:
    /* 0000108a   4  move.l (c,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000108au);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_108E:
    /* 0000108e   4  jsr (00000fa2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000108eu);
    rc_push32(c, m, RC_ADDR(0x00001092u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000fa2u);
    return;

L_1092:
    /* 00001092   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001092u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1094:
    /* 00001094   4  pea (ffffffec,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001094u);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_1098:
    /* 00001098   4  jsr (00007338) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001098u);
    rc_push32(c, m, RC_ADDR(0x0000109cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00007338u);
    return;

L_109C:
    /* 0000109c   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000109cu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_109E:
    /* 0000109e   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000109eu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_10A2:
    /* 000010a2   4  move.b D0,(1,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000010a2u);
    t0 = rc_d_get(c, 0, RC_B);
    rc_wr8(c, m, (c->a[0] + 0x1u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_10A6:
    /* 000010a6   4  pea (ffffffec,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000010a6u);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_10AA:
    /* 000010aa   4  jsr (ffff82b4,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000010aau);
    /* vector 115 */
    rc_push32(c, m, RC_ADDR(0x000010aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00020832u);
    return;

L_10AE:
    /* 000010ae   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000010aeu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_10B0:
    /* 000010b0   2  subq.w #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000010b0u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_10B2:
    /* 000010b2   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000010b2u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_10B6:
    /* 000010b6   4  move.b D0,(2,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000010b6u);
    t0 = rc_d_get(c, 0, RC_B);
    rc_wr8(c, m, (c->a[0] + 0x2u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_10BA:
    /* 000010ba   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000010bau);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_10BC:
    /* 000010bc   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000010bcu);
    rc_ret(c, m);
    return;

}
