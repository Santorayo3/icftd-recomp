/* fn_000016c0 - 130 byte(s), 33 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000016c0(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x000016c0u: goto L_16C0;
    case 0x000016c4u: goto L_16C4;
    case 0x000016c8u: goto L_16C8;
    case 0x000016cau: goto L_16CA;
    case 0x000016ccu: goto L_16CC;
    case 0x000016d0u: goto L_16D0;
    case 0x000016d4u: goto L_16D4;
    case 0x000016dau: goto L_16DA;
    case 0x000016dcu: goto L_16DC;
    case 0x000016e2u: goto L_16E2;
    case 0x000016e4u: goto L_16E4;
    case 0x000016e8u: goto L_16E8;
    case 0x000016ecu: goto L_16EC;
    case 0x000016eeu: goto L_16EE;
    case 0x000016f2u: goto L_16F2;
    case 0x000016f8u: goto L_16F8;
    case 0x000016feu: goto L_16FE;
    case 0x00001704u: goto L_1704;
    case 0x00001706u: goto L_1706;
    case 0x0000170au: goto L_170A;
    case 0x0000170eu: goto L_170E;
    case 0x00001710u: goto L_1710;
    case 0x00001714u: goto L_1714;
    case 0x0000171au: goto L_171A;
    case 0x00001720u: goto L_1720;
    case 0x00001726u: goto L_1726;
    case 0x00001728u: goto L_1728;
    case 0x0000172eu: goto L_172E;
    case 0x00001732u: goto L_1732;
    case 0x00001734u: goto L_1734;
    case 0x0000173au: goto L_173A;
    case 0x0000173eu: goto L_173E;
    case 0x00001740u: goto L_1740;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16C0:
    /* 000016c0   4  link.w A5,#fffffffc */
    c->pc = 0x000016c0u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_16C4:
    /* 000016c4   4  movea.l (8,A5),A0 */
    c->pc = 0x000016c4u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_16C8:
    /* 000016c8   2  move.b (A0),D0 */
    c->pc = 0x000016c8u;
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_16CA:
    /* 000016ca   2  ext.w D0 */
    c->pc = 0x000016cau;
    rc_ext_w(c, 0);

L_16CC:
    /* 000016cc   4  move.w D0,(fffffffc,A5) */
    c->pc = 0x000016ccu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16D0:
    /* 000016d0   4  move.w D0,(fffffffe,A5) */
    c->pc = 0x000016d0u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16D4:
    /* 000016d4   6  cmpi.w #fffe,(fffffffc,A5) */
    c->pc = 0x000016d4u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x0000fffeu);

L_16DA:
    /* 000016da   2  beq 000016e4 */
    c->pc = 0x000016dau;
    if (rc_cond(c, 7)) goto L_16E4;

L_16DC:
    /* 000016dc   6  cmpi.w #fffd,(fffffffc,A5) */
    c->pc = 0x000016dcu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x0000fffdu);

L_16E2:
    /* 000016e2   2  bne 000016fe */
    c->pc = 0x000016e2u;
    if (rc_cond(c, 6)) goto L_16FE;

L_16E4:
    /* 000016e4   4  movea.l (8,A5),A0 */
    c->pc = 0x000016e4u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_16E8:
    /* 000016e8   4  move.b (2,A0),D0 */
    c->pc = 0x000016e8u;
    t0 = rc_rd8(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_16EC:
    /* 000016ec   2  ext.w D0 */
    c->pc = 0x000016ecu;
    rc_ext_w(c, 0);

L_16EE:
    /* 000016ee   4  move.w D0,(ffffefe4,A4) */
    c->pc = 0x000016eeu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x101cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16F2:
    /* 000016f2   6  move.w #1,(ffff83d6,A4) */
    c->pc = 0x000016f2u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c2au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16F8:
    /* 000016f8   6  move.w #ff9a,(fffffffe,A5) */
    c->pc = 0x000016f8u;
    t0 = 0x0000ff9au;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16FE:
    /* 000016fe   6  cmpi.w #fffd,(fffffffc,A5) */
    c->pc = 0x000016feu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x0000fffdu);

L_1704:
    /* 00001704   2  bne 00001720 */
    c->pc = 0x00001704u;
    if (rc_cond(c, 6)) goto L_1720;

L_1706:
    /* 00001706   4  movea.l (8,A5),A0 */
    c->pc = 0x00001706u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_170A:
    /* 0000170a   4  move.b (1,A0),D0 */
    c->pc = 0x0000170au;
    t0 = rc_rd8(c, m, (c->a[0] + 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_170E:
    /* 0000170e   2  ext.w D0 */
    c->pc = 0x0000170eu;
    rc_ext_w(c, 0);

L_1710:
    /* 00001710   4  move.w D0,(ffff8b56,A4) */
    c->pc = 0x00001710u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x74aau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1714:
    /* 00001714   6  move.w #1,(ffff8b54,A4) */
    c->pc = 0x00001714u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x74acu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_171A:
    /* 0000171a   6  move.w #ff9a,(fffffffe,A5) */
    c->pc = 0x0000171au;
    t0 = 0x0000ff9au;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1720:
    /* 00001720   6  cmpi.w #ffff,(fffffffc,A5) */
    c->pc = 0x00001720u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1726:
    /* 00001726   2  bne 0000172e */
    c->pc = 0x00001726u;
    if (rc_cond(c, 6)) goto L_172E;

L_1728:
    /* 00001728   6  move.w #ff9c,(fffffffe,A5) */
    c->pc = 0x00001728u;
    t0 = 0x0000ff9cu;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_172E:
    /* 0000172e   4  tst.w (ffffefe4,A4) */
    c->pc = 0x0000172eu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_set_nzvc(c, t0, RC_W);

L_1732:
    /* 00001732   2  bcc 0000173a */
    c->pc = 0x00001732u;
    if (rc_cond(c, 4)) goto L_173A;

L_1734:
    /* 00001734   6  move.w (ffff83d4,A4),(ffffefe4,A4) */
    c->pc = 0x00001734u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c2cu));
    rc_wr16(c, m, (c->a[4] - 0x101cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_173A:
    /* 0000173a   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x0000173au;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_173E:
    /* 0000173e   2  unlk A5 */
    c->pc = 0x0000173eu;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1740:
    /* 00001740   2  rts */
    c->pc = 0x00001740u;
    rc_ret(c, m);
    return;

}
