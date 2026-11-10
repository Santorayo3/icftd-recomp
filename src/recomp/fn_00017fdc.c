/* fn_00017fdc - 146 byte(s), 45 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00017fdc(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00017fdcu): goto L_17FDC;
    case RC_ADDR(0x00017fe0u): goto L_17FE0;
    case RC_ADDR(0x00017fe4u): goto L_17FE4;
    case RC_ADDR(0x00017fe6u): goto L_17FE6;
    case RC_ADDR(0x00017feau): goto L_17FEA;
    case RC_ADDR(0x00017fecu): goto L_17FEC;
    case RC_ADDR(0x00017ff0u): goto L_17FF0;
    case RC_ADDR(0x00017ff2u): goto L_17FF2;
    case RC_ADDR(0x00017ff6u): goto L_17FF6;
    case RC_ADDR(0x00017ff8u): goto L_17FF8;
    case RC_ADDR(0x00017ffcu): goto L_17FFC;
    case RC_ADDR(0x00018000u): goto L_18000;
    case RC_ADDR(0x00018004u): goto L_18004;
    case RC_ADDR(0x00018006u): goto L_18006;
    case RC_ADDR(0x0001800au): goto L_1800A;
    case RC_ADDR(0x0001800cu): goto L_1800C;
    case RC_ADDR(0x00018010u): goto L_18010;
    case RC_ADDR(0x00018012u): goto L_18012;
    case RC_ADDR(0x00018016u): goto L_18016;
    case RC_ADDR(0x00018018u): goto L_18018;
    case RC_ADDR(0x0001801cu): goto L_1801C;
    case RC_ADDR(0x0001801eu): goto L_1801E;
    case RC_ADDR(0x00018022u): goto L_18022;
    case RC_ADDR(0x00018024u): goto L_18024;
    case RC_ADDR(0x00018028u): goto L_18028;
    case RC_ADDR(0x0001802cu): goto L_1802C;
    case RC_ADDR(0x00018030u): goto L_18030;
    case RC_ADDR(0x00018032u): goto L_18032;
    case RC_ADDR(0x00018036u): goto L_18036;
    case RC_ADDR(0x00018038u): goto L_18038;
    case RC_ADDR(0x0001803cu): goto L_1803C;
    case RC_ADDR(0x00018040u): goto L_18040;
    case RC_ADDR(0x00018046u): goto L_18046;
    case RC_ADDR(0x00018048u): goto L_18048;
    case RC_ADDR(0x0001804cu): goto L_1804C;
    case RC_ADDR(0x00018050u): goto L_18050;
    case RC_ADDR(0x00018056u): goto L_18056;
    case RC_ADDR(0x0001805au): goto L_1805A;
    case RC_ADDR(0x0001805cu): goto L_1805C;
    case RC_ADDR(0x00018060u): goto L_18060;
    case RC_ADDR(0x00018062u): goto L_18062;
    case RC_ADDR(0x00018064u): goto L_18064;
    case RC_ADDR(0x00018066u): goto L_18066;
    case RC_ADDR(0x0001806au): goto L_1806A;
    case RC_ADDR(0x0001806cu): goto L_1806C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_17FDC:
    /* 00017fdc   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00017fdcu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_17FE0:
    /* 00017fe0   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00017fe0u);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17FE4:
    /* 00017fe4   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00017fe4u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_17FE6:
    /* 00017fe6   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00017fe6u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17FEA:
    /* 00017fea   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00017feau);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_17FEC:
    /* 00017fec   4  lea (e08,A4),A0 */
    c->pc = RC_ADDR(0x00017fecu);
    c->a[0] = (c->a[4] + 0xe08u);

L_17FF0:
    /* 00017ff0   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00017ff0u);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_17FF2:
    /* 00017ff2   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00017ff2u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17FF6:
    /* 00017ff6   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00017ff6u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_17FF8:
    /* 00017ff8   4  lea (fffff326,A4),A1 */
    c->pc = RC_ADDR(0x00017ff8u);
    c->a[1] = (c->a[4] - 0xcdau);

L_17FFC:
    /* 00017ffc   4  move.w (fffff2ce,A4),D2 */
    c->pc = RC_ADDR(0x00017ffcu);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd32u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18000:
    /* 00018000   4  muls.w #a,D2 */
    c->pc = RC_ADDR(0x00018000u);
    t0 = 0x0000000au;
    rc_muls(c, 2, t0);

L_18004:
    /* 00018004   2  ext.l D2 */
    c->pc = RC_ADDR(0x00018004u);
    rc_ext_l(c, 2);

L_18006:
    /* 00018006   4  movea.l (0,A1,D1.w),A6 */
    c->pc = RC_ADDR(0x00018006u);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[1] + 0x0u + t4));
    c->a[6] = t0;

L_1800A:
    /* 0001800a   2  adda.l D2,A6 */
    c->pc = RC_ADDR(0x0001800au);
    t0 = rc_d_get(c, 2, RC_L);
    c->a[6] += t0;

L_1800C:
    /* 0001800c   4  move.l A6,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001800cu);
    t0 = rc_a_get(c, 6, RC_L);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18010:
    /* 00018010   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00018010u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_18012:
    /* 00018012   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00018012u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18016:
    /* 00018016   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00018016u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_18018:
    /* 00018018   4  lea (e1c,A4),A0 */
    c->pc = RC_ADDR(0x00018018u);
    c->a[0] = (c->a[4] + 0xe1cu);

L_1801C:
    /* 0001801c   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0001801cu);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1801E:
    /* 0001801e   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001801eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18022:
    /* 00018022   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00018022u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_18024:
    /* 00018024   4  lea (fffff33a,A4),A1 */
    c->pc = RC_ADDR(0x00018024u);
    c->a[1] = (c->a[4] - 0xcc6u);

L_18028:
    /* 00018028   4  move.w (fffff2ce,A4),D2 */
    c->pc = RC_ADDR(0x00018028u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd32u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1802C:
    /* 0001802c   4  muls.w #a,D2 */
    c->pc = RC_ADDR(0x0001802cu);
    t0 = 0x0000000au;
    rc_muls(c, 2, t0);

L_18030:
    /* 00018030   2  ext.l D2 */
    c->pc = RC_ADDR(0x00018030u);
    rc_ext_l(c, 2);

L_18032:
    /* 00018032   4  movea.l (0,A1,D1.w),A6 */
    c->pc = RC_ADDR(0x00018032u);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[1] + 0x0u + t4));
    c->a[6] = t0;

L_18036:
    /* 00018036   2  adda.l D2,A6 */
    c->pc = RC_ADDR(0x00018036u);
    t0 = rc_d_get(c, 2, RC_L);
    c->a[6] += t0;

L_18038:
    /* 00018038   4  move.l A6,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00018038u);
    t0 = rc_a_get(c, 6, RC_L);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1803C:
    /* 0001803c   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001803cu);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_18040:
    /* 00018040   6  cmpi.w #5,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00018040u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_18046:
    /* 00018046   2  bcs 00017fe4 */
    c->pc = RC_ADDR(0x00018046u);
    if (rc_cond(c, 5)) { rc_tick(); goto L_17FE4; }

L_18048:
    /* 00018048   4  lea (e08,A4),A0 */
    c->pc = RC_ADDR(0x00018048u);
    c->a[0] = (c->a[4] + 0xe08u);

L_1804C:
    /* 0001804c   4  movea.l (a12,A4),A1 */
    c->pc = RC_ADDR(0x0001804cu);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa12u));
    c->a[1] = t0;

L_18050:
    /* 00018050   6  adda.l #2a,A1 */
    c->pc = RC_ADDR(0x00018050u);
    t0 = 0x0000002au;
    c->a[1] += t0;

L_18056:
    /* 00018056   4  move.w #4,D1 */
    c->pc = RC_ADDR(0x00018056u);
    t0 = 0x00000004u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1805A:
    /* 0001805a   2  move.l (A0)+,D0 */
    c->pc = RC_ADDR(0x0001805au);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1805C:
    /* 0001805c   4  move.w D0,(4,A1) */
    c->pc = RC_ADDR(0x0001805cu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[1] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18060:
    /* 00018060   2  swap D0 */
    c->pc = RC_ADDR(0x00018060u);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_18062:
    /* 00018062   2  move.w D0,(A1) */
    c->pc = RC_ADDR(0x00018062u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, c->a[1], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18064:
    /* 00018064   2  addq.l #8,A1 */
    c->pc = RC_ADDR(0x00018064u);
    c->a[1] += 0x00000008u;

L_18066:
    /* 00018066   4  dbf D1,0001805a */
    c->pc = RC_ADDR(0x00018066u);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 1, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 1, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1805A; }
    }

L_1806A:
    /* 0001806a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001806au);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1806C:
    /* 0001806c   2  rts */
    c->pc = RC_ADDR(0x0001806cu);
    rc_ret(c, m);
    return;

}
