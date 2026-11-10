/* fn_00012492 - 70 byte(s), 19 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00012492(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x00012492u: goto L_12492;
    case 0x00012496u: goto L_12496;
    case 0x0001249au: goto L_1249A;
    case 0x0001249eu: goto L_1249E;
    case 0x000124a2u: goto L_124A2;
    case 0x000124a6u: goto L_124A6;
    case 0x000124aau: goto L_124AA;
    case 0x000124aeu: goto L_124AE;
    case 0x000124b2u: goto L_124B2;
    case 0x000124b4u: goto L_124B4;
    case 0x000124b6u: goto L_124B6;
    case 0x000124bau: goto L_124BA;
    case 0x000124c0u: goto L_124C0;
    case 0x000124c4u: goto L_124C4;
    case 0x000124cau: goto L_124CA;
    case 0x000124ccu: goto L_124CC;
    case 0x000124d0u: goto L_124D0;
    case 0x000124d4u: goto L_124D4;
    case 0x000124d6u: goto L_124D6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_12492:
    /* 00012492   4  link.w A5,#fffffffe */
    c->pc = 0x00012492u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_12496:
    /* 00012496   4  pea (e4e,A4) */
    c->pc = 0x00012496u;
    rc_push32(c, m, (c->a[4] + 0xe4eu));

L_1249A:
    /* 0001249a   4  move.w #6,-(A7) */
    c->pc = 0x0001249au;
    t0 = 0x00000006u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1249E:
    /* 0001249e   4  pea (000124d8) */
    c->pc = 0x0001249eu;
    rc_push32(c, m, 0x000124d8u);

L_124A2:
    /* 000124a2   4  jsr (ffff817c,A4) */
    c->pc = 0x000124a2u;
    /* vector 63 */
    rc_push32(c, m, 0x000124a6u);
    rc_depth++;
    c->pc = 0x00016c00u;
    return;

L_124A6:
    /* 000124a6   4  lea (a,A7),A7 */
    c->pc = 0x000124a6u;
    c->a[7] = (c->a[7] + 0xau);

L_124AA:
    /* 000124aa   4  clr.w (fffffffe,A5) */
    c->pc = 0x000124aau;
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_124AE:
    /* 000124ae   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x000124aeu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_124B2:
    /* 000124b2   2  ext.l D0 */
    c->pc = 0x000124b2u;
    rc_ext_l(c, 0);

L_124B4:
    /* 000124b4   2  asl.l #1,D0 */
    c->pc = 0x000124b4u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_124B6:
    /* 000124b6   4  lea (f1a,A4),A0 */
    c->pc = 0x000124b6u;
    c->a[0] = (c->a[4] + 0xf1au);

L_124BA:
    /* 000124ba   6  move.w #ffff,(0,A0,D0.w) */
    c->pc = 0x000124bau;
    t0 = 0x0000ffffu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_124C0:
    /* 000124c0   4  addq.w #1,(fffffffe,A5) */
    c->pc = 0x000124c0u;
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_124C4:
    /* 000124c4   6  cmpi.w #1e,(fffffffe,A5) */
    c->pc = 0x000124c4u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000001eu);

L_124CA:
    /* 000124ca   2  blt 000124ae */
    c->pc = 0x000124cau;
    if (rc_cond(c, 13)) { rc_tick(); goto L_124AE; }

L_124CC:
    /* 000124cc   4  clr.w (1082,A4) */
    c->pc = 0x000124ccu;
    rc_wr16(c, m, (c->a[4] + 0x1082u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_124D0:
    /* 000124d0   4  clr.w (1086,A4) */
    c->pc = 0x000124d0u;
    rc_wr16(c, m, (c->a[4] + 0x1086u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_124D4:
    /* 000124d4   2  unlk A5 */
    c->pc = 0x000124d4u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_124D6:
    /* 000124d6   2  rts */
    c->pc = 0x000124d6u;
    rc_ret(c, m);
    return;

}
