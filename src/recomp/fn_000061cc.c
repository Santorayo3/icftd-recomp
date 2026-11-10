/* fn_000061cc - 138 byte(s), 38 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000061cc(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x000061ccu: goto L_61CC;
    case 0x000061d0u: goto L_61D0;
    case 0x000061d4u: goto L_61D4;
    case 0x000061d8u: goto L_61D8;
    case 0x000061dcu: goto L_61DC;
    case 0x000061e0u: goto L_61E0;
    case 0x000061e4u: goto L_61E4;
    case 0x000061e8u: goto L_61E8;
    case 0x000061ecu: goto L_61EC;
    case 0x000061f0u: goto L_61F0;
    case 0x000061f2u: goto L_61F2;
    case 0x000061f6u: goto L_61F6;
    case 0x000061f8u: goto L_61F8;
    case 0x000061fcu: goto L_61FC;
    case 0x000061feu: goto L_61FE;
    case 0x00006202u: goto L_6202;
    case 0x00006206u: goto L_6206;
    case 0x0000620au: goto L_620A;
    case 0x0000620eu: goto L_620E;
    case 0x00006210u: goto L_6210;
    case 0x00006214u: goto L_6214;
    case 0x00006218u: goto L_6218;
    case 0x0000621cu: goto L_621C;
    case 0x00006220u: goto L_6220;
    case 0x00006226u: goto L_6226;
    case 0x0000622au: goto L_622A;
    case 0x0000622eu: goto L_622E;
    case 0x00006230u: goto L_6230;
    case 0x00006234u: goto L_6234;
    case 0x00006238u: goto L_6238;
    case 0x0000623cu: goto L_623C;
    case 0x00006240u: goto L_6240;
    case 0x00006244u: goto L_6244;
    case 0x00006248u: goto L_6248;
    case 0x0000624cu: goto L_624C;
    case 0x00006250u: goto L_6250;
    case 0x00006252u: goto L_6252;
    case 0x00006254u: goto L_6254;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_61CC:
    /* 000061cc   4  link.w A5,#fffffffc */
    c->pc = 0x000061ccu;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_61D0:
    /* 000061d0   4  move.w #1,-(A7) */
    c->pc = 0x000061d0u;
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_61D4:
    /* 000061d4   4  pea (0000625f) */
    c->pc = 0x000061d4u;
    rc_push32(c, m, 0x0000625fu);

L_61D8:
    /* 000061d8   4  pea (00006256) */
    c->pc = 0x000061d8u;
    rc_push32(c, m, 0x00006256u);

L_61DC:
    /* 000061dc   4  jsr (ffff800e,A4) */
    c->pc = 0x000061dcu;
    /* vector 2 */
    rc_push32(c, m, 0x000061e0u);
    rc_depth++;
    c->pc = 0x000002f4u;
    return;

L_61E0:
    /* 000061e0   4  lea (a,A7),A7 */
    c->pc = 0x000061e0u;
    c->a[7] = (c->a[7] + 0xau);

L_61E4:
    /* 000061e4   4  pea (000003ed).l */
    c->pc = 0x000061e4u;
    rc_push32(c, m, 0x000003edu);

L_61E8:
    /* 000061e8   4  pea (00006269) */
    c->pc = 0x000061e8u;
    rc_push32(c, m, 0x00006269u);

L_61EC:
    /* 000061ec   4  jsr (ffff8290,A4) */
    c->pc = 0x000061ecu;
    /* vector 109 */
    rc_push32(c, m, 0x000061f0u);
    rc_depth++;
    c->pc = 0x00020476u;
    return;

L_61F0:
    /* 000061f0   2  addq.w #8,A7 */
    c->pc = 0x000061f0u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_61F2:
    /* 000061f2   4  move.l D0,(fffffffc,A5) */
    c->pc = 0x000061f2u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_61F6:
    /* 000061f6   2  beq 00006252 */
    c->pc = 0x000061f6u;
    if (rc_cond(c, 7)) goto L_6252;

L_61F8:
    /* 000061f8   4  pea (00000001).l */
    c->pc = 0x000061f8u;
    rc_push32(c, m, 0x00000001u);

L_61FC:
    /* 000061fc   2  clr.l -(A7) */
    c->pc = 0x000061fcu;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_61FE:
    /* 000061fe   4  move.l (fffffffc,A5),-(A7) */
    c->pc = 0x000061feu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6202:
    /* 00006202   4  jsr (ffff831a,A4) */
    c->pc = 0x00006202u;
    /* vector 132 */
    rc_push32(c, m, 0x00006206u);
    rc_depth++;
    c->pc = 0x00021488u;
    return;

L_6206:
    /* 00006206   4  lea (c,A7),A7 */
    c->pc = 0x00006206u;
    c->a[7] = (c->a[7] + 0xcu);

L_620A:
    /* 0000620a   4  pea (ffffffff).l */
    c->pc = 0x0000620au;
    rc_push32(c, m, 0xffffffffu);

L_620E:
    /* 0000620e   2  clr.l -(A7) */
    c->pc = 0x0000620eu;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6210:
    /* 00006210   4  move.l (fffffffc,A5),-(A7) */
    c->pc = 0x00006210u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6214:
    /* 00006214   4  jsr (ffff831a,A4) */
    c->pc = 0x00006214u;
    /* vector 132 */
    rc_push32(c, m, 0x00006218u);
    rc_depth++;
    c->pc = 0x00021488u;
    return;

L_6218:
    /* 00006218   4  lea (c,A7),A7 */
    c->pc = 0x00006218u;
    c->a[7] = (c->a[7] + 0xcu);

L_621C:
    /* 0000621c   4  move.l D0,(fffff066,A4) */
    c->pc = 0x0000621cu;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xf9au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6220:
    /* 00006220   6  pea (00010001).l */
    c->pc = 0x00006220u;
    rc_push32(c, m, 0x00010001u);

L_6226:
    /* 00006226   4  move.l (fffff066,A4),-(A7) */
    c->pc = 0x00006226u;
    t0 = rc_rd32(c, m, (c->a[4] - 0xf9au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_622A:
    /* 0000622a   4  jsr (ffff8338,A4) */
    c->pc = 0x0000622au;
    /* vector 137: exec.library -198 */
    c->pc = 0x0000622eu;
    rc_os_call(c, m, 0, -198);

L_622E:
    /* 0000622e   2  addq.w #8,A7 */
    c->pc = 0x0000622eu;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_6230:
    /* 00006230   4  move.l D0,(fffff06a,A4) */
    c->pc = 0x00006230u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xf96u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6234:
    /* 00006234   4  move.l (fffff066,A4),-(A7) */
    c->pc = 0x00006234u;
    t0 = rc_rd32(c, m, (c->a[4] - 0xf9au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6238:
    /* 00006238   4  move.l (fffff06a,A4),-(A7) */
    c->pc = 0x00006238u;
    t0 = rc_rd32(c, m, (c->a[4] - 0xf96u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_623C:
    /* 0000623c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = 0x0000623cu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6240:
    /* 00006240   4  jsr (ffff8314,A4) */
    c->pc = 0x00006240u;
    /* vector 131 */
    rc_push32(c, m, 0x00006244u);
    rc_depth++;
    c->pc = 0x00021476u;
    return;

L_6244:
    /* 00006244   4  lea (c,A7),A7 */
    c->pc = 0x00006244u;
    c->a[7] = (c->a[7] + 0xcu);

L_6248:
    /* 00006248   4  move.l (fffffffc,A5),-(A7) */
    c->pc = 0x00006248u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_624C:
    /* 0000624c   4  jsr (ffff8296,A4) */
    c->pc = 0x0000624cu;
    /* vector 110 */
    rc_push32(c, m, 0x00006250u);
    rc_depth++;
    c->pc = 0x00020490u;
    return;

L_6250:
    /* 00006250   2  addq.w #4,A7 */
    c->pc = 0x00006250u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6252:
    /* 00006252   2  unlk A5 */
    c->pc = 0x00006252u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_6254:
    /* 00006254   2  rts */
    c->pc = 0x00006254u;
    rc_ret(c, m);
    return;

}
