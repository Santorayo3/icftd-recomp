/* fn_00014030 - 176 byte(s), 40 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00014030(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case 0x00014030u: goto L_14030;
    case 0x00014034u: goto L_14034;
    case 0x0001403au: goto L_1403A;
    case 0x00014040u: goto L_14040;
    case 0x00014046u: goto L_14046;
    case 0x0001404au: goto L_1404A;
    case 0x00014050u: goto L_14050;
    case 0x00014056u: goto L_14056;
    case 0x0001405au: goto L_1405A;
    case 0x0001405eu: goto L_1405E;
    case 0x00014064u: goto L_14064;
    case 0x00014068u: goto L_14068;
    case 0x0001406eu: goto L_1406E;
    case 0x00014074u: goto L_14074;
    case 0x0001407au: goto L_1407A;
    case 0x00014080u: goto L_14080;
    case 0x00014086u: goto L_14086;
    case 0x0001408au: goto L_1408A;
    case 0x0001408eu: goto L_1408E;
    case 0x00014092u: goto L_14092;
    case 0x00014096u: goto L_14096;
    case 0x00014098u: goto L_14098;
    case 0x0001409cu: goto L_1409C;
    case 0x0001409eu: goto L_1409E;
    case 0x000140a2u: goto L_140A2;
    case 0x000140a8u: goto L_140A8;
    case 0x000140acu: goto L_140AC;
    case 0x000140b0u: goto L_140B0;
    case 0x000140b4u: goto L_140B4;
    case 0x000140b6u: goto L_140B6;
    case 0x000140bau: goto L_140BA;
    case 0x000140beu: goto L_140BE;
    case 0x000140c2u: goto L_140C2;
    case 0x000140c6u: goto L_140C6;
    case 0x000140cau: goto L_140CA;
    case 0x000140ceu: goto L_140CE;
    case 0x000140d2u: goto L_140D2;
    case 0x000140d6u: goto L_140D6;
    case 0x000140dcu: goto L_140DC;
    case 0x000140deu: goto L_140DE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_14030:
    /* 00014030   4  link.w A5,#0 */
    c->pc = 0x00014030u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_14034:
    /* 00014034   6  move.w #10,(1118,A4) */
    c->pc = 0x00014034u;
    t0 = 0x00000010u;
    rc_wr16(c, m, (c->a[4] + 0x1118u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1403A:
    /* 0001403a   6  move.w #a,(111a,A4) */
    c->pc = 0x0001403au;
    t0 = 0x0000000au;
    rc_wr16(c, m, (c->a[4] + 0x111au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14040:
    /* 00014040   6  move.w #f,(112c,A4) */
    c->pc = 0x00014040u;
    t0 = 0x0000000fu;
    rc_wr16(c, m, (c->a[4] + 0x112cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14046:
    /* 00014046   4  clr.w (af6,A4) */
    c->pc = 0x00014046u;
    rc_wr16(c, m, (c->a[4] + 0xaf6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1404A:
    /* 0001404a   6  move.w #1,(10ca,A4) */
    c->pc = 0x0001404au;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x10cau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14050:
    /* 00014050   6  move.w #2,(10cc,A4) */
    c->pc = 0x00014050u;
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x10ccu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14056:
    /* 00014056   4  clr.w (10ce,A4) */
    c->pc = 0x00014056u;
    rc_wr16(c, m, (c->a[4] + 0x10ceu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1405A:
    /* 0001405a   4  clr.w (10d0,A4) */
    c->pc = 0x0001405au;
    rc_wr16(c, m, (c->a[4] + 0x10d0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1405E:
    /* 0001405e   6  move.w #1,(af8,A4) */
    c->pc = 0x0001405eu;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xaf8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14064:
    /* 00014064   4  clr.w (10d2,A4) */
    c->pc = 0x00014064u;
    rc_wr16(c, m, (c->a[4] + 0x10d2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14068:
    /* 00014068   6  move.w #2,(10d4,A4) */
    c->pc = 0x00014068u;
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x10d4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1406E:
    /* 0001406e   6  move.w #2cf,(10d6,A4) */
    c->pc = 0x0001406eu;
    t0 = 0x000002cfu;
    rc_wr16(c, m, (c->a[4] + 0x10d6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14074:
    /* 00014074   6  move.w #238,(10d8,A4) */
    c->pc = 0x00014074u;
    t0 = 0x00000238u;
    rc_wr16(c, m, (c->a[4] + 0x10d8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1407A:
    /* 0001407a   6  move.w #4,(10da,A4) */
    c->pc = 0x0001407au;
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x10dau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14080:
    /* 00014080   6  move.w #8,(10dc,A4) */
    c->pc = 0x00014080u;
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[4] + 0x10dcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14086:
    /* 00014086   4  clr.w (1146,A4) */
    c->pc = 0x00014086u;
    rc_wr16(c, m, (c->a[4] + 0x1146u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1408A:
    /* 0001408a   4  clr.w (1144,A4) */
    c->pc = 0x0001408au;
    rc_wr16(c, m, (c->a[4] + 0x1144u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1408E:
    /* 0001408e   4  clr.w (113e,A4) */
    c->pc = 0x0001408eu;
    rc_wr16(c, m, (c->a[4] + 0x113eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14092:
    /* 00014092   4  clr.w (112e,A4) */
    c->pc = 0x00014092u;
    rc_wr16(c, m, (c->a[4] + 0x112eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14096:
    /* 00014096   2  moveq #e,D0 */
    c->pc = 0x00014096u;
    c->d[0] = 0x0000000eu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_14098:
    /* 00014098   4  sub.w (ffff83c8,A4),D0 */
    c->pc = 0x00014098u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1409C:
    /* 0001409c   2  addq.w #2,D0 */
    c->pc = 0x0001409cu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1409E:
    /* 0001409e   4  move.w D0,(1130,A4) */
    c->pc = 0x0001409eu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1130u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_140A2:
    /* 000140a2   6  move.w #bd,(1132,A4) */
    c->pc = 0x000140a2u;
    t0 = 0x000000bdu;
    rc_wr16(c, m, (c->a[4] + 0x1132u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_140A8:
    /* 000140a8   4  move.w (fffffdae,A4),D0 */
    c->pc = 0x000140a8u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x252u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_140AC:
    /* 000140ac   4  muls.w #14,D0 */
    c->pc = 0x000140acu;
    t0 = 0x00000014u;
    rc_muls(c, 0, t0);

L_140B0:
    /* 000140b0   4  move.w #f0,D1 */
    c->pc = 0x000140b0u;
    t0 = 0x000000f0u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_140B4:
    /* 000140b4   2  sub.w D0,D1 */
    c->pc = 0x000140b4u;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_140B6:
    /* 000140b6   4  move.w D1,(1136,A4) */
    c->pc = 0x000140b6u;
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1136u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_140BA:
    /* 000140ba   4  clr.w (10e2,A4) */
    c->pc = 0x000140bau;
    rc_wr16(c, m, (c->a[4] + 0x10e2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_140BE:
    /* 000140be   4  clr.w (1134,A4) */
    c->pc = 0x000140beu;
    rc_wr16(c, m, (c->a[4] + 0x1134u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_140C2:
    /* 000140c2   4  clr.w (114c,A4) */
    c->pc = 0x000140c2u;
    rc_wr16(c, m, (c->a[4] + 0x114cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_140C6:
    /* 000140c6   4  clr.w (10c8,A4) */
    c->pc = 0x000140c6u;
    rc_wr16(c, m, (c->a[4] + 0x10c8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_140CA:
    /* 000140ca   4  clr.w (114a,A4) */
    c->pc = 0x000140cau;
    rc_wr16(c, m, (c->a[4] + 0x114au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_140CE:
    /* 000140ce   4  clr.w (1148,A4) */
    c->pc = 0x000140ceu;
    rc_wr16(c, m, (c->a[4] + 0x1148u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_140D2:
    /* 000140d2   4  clr.w (1140,A4) */
    c->pc = 0x000140d2u;
    rc_wr16(c, m, (c->a[4] + 0x1140u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_140D6:
    /* 000140d6   6  move.w #1,(1142,A4) */
    c->pc = 0x000140d6u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1142u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_140DC:
    /* 000140dc   2  unlk A5 */
    c->pc = 0x000140dcu;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_140DE:
    /* 000140de   2  rts */
    c->pc = 0x000140deu;
    rc_ret(c, m);
    return;

}
