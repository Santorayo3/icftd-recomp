/* fn_000042c6 - 98 byte(s), 31 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000042c6(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x000042c6u: goto L_42C6;
    case 0x000042cau: goto L_42CA;
    case 0x000042d0u: goto L_42D0;
    case 0x000042d2u: goto L_42D2;
    case 0x000042d6u: goto L_42D6;
    case 0x000042d8u: goto L_42D8;
    case 0x000042dau: goto L_42DA;
    case 0x000042dcu: goto L_42DC;
    case 0x000042e0u: goto L_42E0;
    case 0x000042e2u: goto L_42E2;
    case 0x000042e4u: goto L_42E4;
    case 0x000042e6u: goto L_42E6;
    case 0x000042e8u: goto L_42E8;
    case 0x000042ecu: goto L_42EC;
    case 0x000042f0u: goto L_42F0;
    case 0x000042f4u: goto L_42F4;
    case 0x000042f8u: goto L_42F8;
    case 0x000042fau: goto L_42FA;
    case 0x000042fcu: goto L_42FC;
    case 0x000042feu: goto L_42FE;
    case 0x00004302u: goto L_4302;
    case 0x00004306u: goto L_4306;
    case 0x0000430au: goto L_430A;
    case 0x0000430eu: goto L_430E;
    case 0x00004314u: goto L_4314;
    case 0x00004316u: goto L_4316;
    case 0x0000431au: goto L_431A;
    case 0x0000431eu: goto L_431E;
    case 0x00004322u: goto L_4322;
    case 0x00004324u: goto L_4324;
    case 0x00004326u: goto L_4326;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_42C6:
    /* 000042c6   4  link.w A5,#0 */
    c->pc = 0x000042c6u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_42CA:
    /* 000042ca   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = 0x000042cau;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_42D0:
    /* 000042d0   2  clr.l -(A7) */
    c->pc = 0x000042d0u;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_42D2:
    /* 000042d2   4  move.l (ffffeffa,A4),D0 */
    c->pc = 0x000042d2u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x1006u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_42D6:
    /* 000042d6   2  moveq #10,D1 */
    c->pc = 0x000042d6u;
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_42D8:
    /* 000042d8   2  asl.l D1,D0 */
    c->pc = 0x000042d8u;
    c->d[0] = rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L);

L_42DA:
    /* 000042da   2  move.l D0,-(A7) */
    c->pc = 0x000042dau;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_42DC:
    /* 000042dc   4  move.l (ffffeff6,A4),D0 */
    c->pc = 0x000042dcu;
    t0 = rc_rd32(c, m, (c->a[4] - 0x100au));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_42E0:
    /* 000042e0   2  moveq #10,D1 */
    c->pc = 0x000042e0u;
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_42E2:
    /* 000042e2   2  asl.l D1,D0 */
    c->pc = 0x000042e2u;
    c->d[0] = rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L);

L_42E4:
    /* 000042e4   2  move.l D0,-(A7) */
    c->pc = 0x000042e4u;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_42E6:
    /* 000042e6   2  clr.w -(A7) */
    c->pc = 0x000042e6u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_42E8:
    /* 000042e8   4  move.l (ffffefe0,A4),-(A7) */
    c->pc = 0x000042e8u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x1020u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_42EC:
    /* 000042ec   4  move.w #1,-(A7) */
    c->pc = 0x000042ecu;
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_42F0:
    /* 000042f0   4  jsr (ffff8266,A4) */
    c->pc = 0x000042f0u;
    /* vector 102 */
    rc_push32(c, m, 0x000042f4u);
    rc_depth++;
    c->pc = 0x0001f2aeu;
    return;

L_42F4:
    /* 000042f4   4  lea (14,A7),A7 */
    c->pc = 0x000042f4u;
    c->a[7] = (c->a[7] + 0x14u);

L_42F8:
    /* 000042f8   2  clr.w -(A7) */
    c->pc = 0x000042f8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_42FA:
    /* 000042fa   2  clr.l -(A7) */
    c->pc = 0x000042fau;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_42FC:
    /* 000042fc   2  clr.l -(A7) */
    c->pc = 0x000042fcu;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_42FE:
    /* 000042fe   4  movea.l (8,A5),A0 */
    c->pc = 0x000042feu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_4302:
    /* 00004302   4  move.l (2c,A0),-(A7) */
    c->pc = 0x00004302u;
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4306:
    /* 00004306   4  jsr (ffff8278,A4) */
    c->pc = 0x00004306u;
    /* vector 105 */
    rc_push32(c, m, 0x0000430au);
    rc_depth++;
    c->pc = 0x0001fa02u;
    return;

L_430A:
    /* 0000430a   4  lea (e,A7),A7 */
    c->pc = 0x0000430au;
    c->a[7] = (c->a[7] + 0xeu);

L_430E:
    /* 0000430e   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = 0x0000430eu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4314:
    /* 00004314   2  clr.w -(A7) */
    c->pc = 0x00004314u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4316:
    /* 00004316   4  move.l (ffffefe0,A4),-(A7) */
    c->pc = 0x00004316u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x1020u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_431A:
    /* 0000431a   4  move.w #2,-(A7) */
    c->pc = 0x0000431au;
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_431E:
    /* 0000431e   4  jsr (ffff8266,A4) */
    c->pc = 0x0000431eu;
    /* vector 102 */
    rc_push32(c, m, 0x00004322u);
    rc_depth++;
    c->pc = 0x0001f2aeu;
    return;

L_4322:
    /* 00004322   2  addq.w #8,A7 */
    c->pc = 0x00004322u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_4324:
    /* 00004324   2  unlk A5 */
    c->pc = 0x00004324u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_4326:
    /* 00004326   2  rts */
    c->pc = 0x00004326u;
    rc_ret(c, m);
    return;

}
