/* fn_00003692 - 116 byte(s), 32 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00003692(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00003692u): goto L_3692;
    case RC_ADDR(0x00003696u): goto L_3696;
    case RC_ADDR(0x0000369au): goto L_369A;
    case RC_ADDR(0x0000369eu): goto L_369E;
    case RC_ADDR(0x000036a4u): goto L_36A4;
    case RC_ADDR(0x000036a6u): goto L_36A6;
    case RC_ADDR(0x000036aau): goto L_36AA;
    case RC_ADDR(0x000036acu): goto L_36AC;
    case RC_ADDR(0x000036b0u): goto L_36B0;
    case RC_ADDR(0x000036b4u): goto L_36B4;
    case RC_ADDR(0x000036b6u): goto L_36B6;
    case RC_ADDR(0x000036b8u): goto L_36B8;
    case RC_ADDR(0x000036bau): goto L_36BA;
    case RC_ADDR(0x000036bcu): goto L_36BC;
    case RC_ADDR(0x000036c0u): goto L_36C0;
    case RC_ADDR(0x000036c2u): goto L_36C2;
    case RC_ADDR(0x000036c6u): goto L_36C6;
    case RC_ADDR(0x000036c8u): goto L_36C8;
    case RC_ADDR(0x000036cau): goto L_36CA;
    case RC_ADDR(0x000036ceu): goto L_36CE;
    case RC_ADDR(0x000036d0u): goto L_36D0;
    case RC_ADDR(0x000036d4u): goto L_36D4;
    case RC_ADDR(0x000036d8u): goto L_36D8;
    case RC_ADDR(0x000036deu): goto L_36DE;
    case RC_ADDR(0x000036e0u): goto L_36E0;
    case RC_ADDR(0x000036e4u): goto L_36E4;
    case RC_ADDR(0x000036e8u): goto L_36E8;
    case RC_ADDR(0x000036eeu): goto L_36EE;
    case RC_ADDR(0x000036f4u): goto L_36F4;
    case RC_ADDR(0x000036fcu): goto L_36FC;
    case RC_ADDR(0x00003702u): goto L_3702;
    case RC_ADDR(0x00003704u): goto L_3704;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_3692:
    /* 00003692   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00003692u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_3696:
    /* 00003696   4  lea (ffff8836,A4),A0 */
    c->pc = RC_ADDR(0x00003696u);
    c->a[0] = (c->a[4] - 0x77cau);

L_369A:
    /* 0000369a   4  move.l A0,(ffffff56,A4) */
    c->pc = RC_ADDR(0x0000369au);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xaau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_369E:
    /* 0000369e   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000369eu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_36A4:
    /* 000036a4   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000036a4u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_36A6:
    /* 000036a6   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000036a6u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_36AA:
    /* 000036aa   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000036aau);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_36AC:
    /* 000036ac   4  lea (ffffff56,A4),A0 */
    c->pc = RC_ADDR(0x000036acu);
    c->a[0] = (c->a[4] - 0xaau);

L_36B0:
    /* 000036b0   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x000036b0u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_36B4:
    /* 000036b4   2  subq.w #1,D1 */
    c->pc = RC_ADDR(0x000036b4u);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_36B6:
    /* 000036b6   2  moveq #0,D2 */
    c->pc = RC_ADDR(0x000036b6u);
    c->d[2] = 0x00000000u;
    rc_set_nzvc(c, c->d[2], RC_L);

L_36B8:
    /* 000036b8   2  move.w D1,D2 */
    c->pc = RC_ADDR(0x000036b8u);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_36BA:
    /* 000036ba   2  asl.l #2,D2 */
    c->pc = RC_ADDR(0x000036bau);
    c->d[2] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 2, RC_L), RC_L);

L_36BC:
    /* 000036bc   4  lea (ffffff56,A4),A1 */
    c->pc = RC_ADDR(0x000036bcu);
    c->a[1] = (c->a[4] - 0xaau);

L_36C0:
    /* 000036c0   2  moveq #27,D1 */
    c->pc = RC_ADDR(0x000036c0u);
    c->d[1] = 0x00000027u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_36C2:
    /* 000036c2   4  sub.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x000036c2u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_36C6:
    /* 000036c6   2  moveq #0,D3 */
    c->pc = RC_ADDR(0x000036c6u);
    c->d[3] = 0x00000000u;
    rc_set_nzvc(c, c->d[3], RC_L);

L_36C8:
    /* 000036c8   2  move.w D1,D3 */
    c->pc = RC_ADDR(0x000036c8u);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_36CA:
    /* 000036ca   4  movea.l (0,A1,D2.w),A6 */
    c->pc = RC_ADDR(0x000036cau);
    t4 = c->d[2];
    t0 = rc_rd32(c, m, (c->a[1] + 0x0u + t4));
    c->a[6] = t0;

L_36CE:
    /* 000036ce   2  adda.l D3,A6 */
    c->pc = RC_ADDR(0x000036ceu);
    t0 = rc_d_get(c, 3, RC_L);
    c->a[6] += t0;

L_36D0:
    /* 000036d0   4  move.l A6,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000036d0u);
    t0 = rc_a_get(c, 6, RC_L);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_36D4:
    /* 000036d4   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000036d4u);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_36D8:
    /* 000036d8   6  cmpi.w #27,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000036d8u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000027u);

L_36DE:
    /* 000036de   2  bcs 000036a4 */
    c->pc = RC_ADDR(0x000036deu);
    if (rc_cond(c, 5)) { rc_tick(); goto L_36A4; }

L_36E0:
    /* 000036e0   4  clr.w (ffffeff0,A4) */
    c->pc = RC_ADDR(0x000036e0u);
    rc_wr16(c, m, (c->a[4] - 0x1010u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_36E4:
    /* 000036e4   4  clr.w (fffff00a,A4) */
    c->pc = RC_ADDR(0x000036e4u);
    rc_wr16(c, m, (c->a[4] - 0xff6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_36E8:
    /* 000036e8   6  move.w #c4,(ffffeff2,A4) */
    c->pc = RC_ADDR(0x000036e8u);
    t0 = 0x000000c4u;
    rc_wr16(c, m, (c->a[4] - 0x100eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_36EE:
    /* 000036ee   6  move.w #b1,(ffffeff4,A4) */
    c->pc = RC_ADDR(0x000036eeu);
    t0 = 0x000000b1u;
    rc_wr16(c, m, (c->a[4] - 0x100cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_36F4:
    /* 000036f4   8  move.l #ffffff39,(fffff006,A4) */
    c->pc = RC_ADDR(0x000036f4u);
    t0 = 0xffffff39u;
    rc_wr32(c, m, (c->a[4] - 0xffau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_36FC:
    /* 000036fc   6  move.w #1,(fffff00c,A4) */
    c->pc = RC_ADDR(0x000036fcu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xff4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3702:
    /* 00003702   2  unlk A5 */
    c->pc = RC_ADDR(0x00003702u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_3704:
    /* 00003704   2  rts */
    c->pc = RC_ADDR(0x00003704u);
    rc_ret(c, m);
    return;

}
