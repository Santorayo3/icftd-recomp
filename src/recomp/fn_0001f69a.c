/* fn_0001f69a - 100 byte(s), 34 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f69a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1;

    switch (c->pc)
    {
    case 0x0001f69au: goto L_1F69A;
    case 0x0001f69eu: goto L_1F69E;
    case 0x0001f6a2u: goto L_1F6A2;
    case 0x0001f6a4u: goto L_1F6A4;
    case 0x0001f6a6u: goto L_1F6A6;
    case 0x0001f6a8u: goto L_1F6A8;
    case 0x0001f6aau: goto L_1F6AA;
    case 0x0001f6aeu: goto L_1F6AE;
    case 0x0001f6b0u: goto L_1F6B0;
    case 0x0001f6b2u: goto L_1F6B2;
    case 0x0001f6b4u: goto L_1F6B4;
    case 0x0001f6b8u: goto L_1F6B8;
    case 0x0001f6bcu: goto L_1F6BC;
    case 0x0001f6beu: goto L_1F6BE;
    case 0x0001f6c0u: goto L_1F6C0;
    case 0x0001f6c4u: goto L_1F6C4;
    case 0x0001f6c8u: goto L_1F6C8;
    case 0x0001f6cau: goto L_1F6CA;
    case 0x0001f6ccu: goto L_1F6CC;
    case 0x0001f6d0u: goto L_1F6D0;
    case 0x0001f6d4u: goto L_1F6D4;
    case 0x0001f6d6u: goto L_1F6D6;
    case 0x0001f6dau: goto L_1F6DA;
    case 0x0001f6dcu: goto L_1F6DC;
    case 0x0001f6deu: goto L_1F6DE;
    case 0x0001f6e2u: goto L_1F6E2;
    case 0x0001f6e4u: goto L_1F6E4;
    case 0x0001f6e6u: goto L_1F6E6;
    case 0x0001f6e8u: goto L_1F6E8;
    case 0x0001f6ecu: goto L_1F6EC;
    case 0x0001f6f0u: goto L_1F6F0;
    case 0x0001f6f2u: goto L_1F6F2;
    case 0x0001f6f6u: goto L_1F6F6;
    case 0x0001f6fau: goto L_1F6FA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F69A:
    /* 0001f69a   4  movea.l (a,A5),A0 */
    c->pc = 0x0001f69au;
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[0] = t0;

L_1F69E:
    /* 0001f69e   4  movea.l (c,A0),A1 */
    c->pc = 0x0001f69eu;
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1F6A2:
    /* 0001f6a2   2  moveq #0,D1 */
    c->pc = 0x0001f6a2u;
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F6A4:
    /* 0001f6a4   2  move.w (A1),D1 */
    c->pc = 0x0001f6a4u;
    t0 = rc_rd16(c, m, c->a[1]);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F6A6:
    /* 0001f6a6   2  cmp.l D1,D0 */
    c->pc = 0x0001f6a6u;
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1F6A8:
    /* 0001f6a8   2  bcc 0001f6b4 */
    c->pc = 0x0001f6a8u;
    if (rc_cond(c, 4)) goto L_1F6B4;

L_1F6AA:
    /* 0001f6aa   4  move.l (10,A5),D0 */
    c->pc = 0x0001f6aau;
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F6AE:
    /* 0001f6ae   2  moveq #10,D1 */
    c->pc = 0x0001f6aeu;
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F6B0:
    /* 0001f6b0   2  asr.l D1,D0 */
    c->pc = 0x0001f6b0u;
    c->d[0] = rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L);

L_1F6B2:
    /* 0001f6b2   2  bra 0001f6c0 */
    c->pc = 0x0001f6b2u;
    goto L_1F6C0;

L_1F6B4:
    /* 0001f6b4   4  movea.l (a,A5),A0 */
    c->pc = 0x0001f6b4u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[0] = t0;

L_1F6B8:
    /* 0001f6b8   4  movea.l (c,A0),A1 */
    c->pc = 0x0001f6b8u;
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1F6BC:
    /* 0001f6bc   2  moveq #0,D0 */
    c->pc = 0x0001f6bcu;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F6BE:
    /* 0001f6be   2  move.w (A1),D0 */
    c->pc = 0x0001f6beu;
    t0 = rc_rd16(c, m, c->a[1]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F6C0:
    /* 0001f6c0   4  move.w D0,(34,A2) */
    c->pc = 0x0001f6c0u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x34u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F6C4:
    /* 0001f6c4   4  move.l (14,A5),D0 */
    c->pc = 0x0001f6c4u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F6C8:
    /* 0001f6c8   2  moveq #10,D1 */
    c->pc = 0x0001f6c8u;
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F6CA:
    /* 0001f6ca   2  asr.l D1,D0 */
    c->pc = 0x0001f6cau;
    c->d[0] = rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L);

L_1F6CC:
    /* 0001f6cc   4  movea.l (a,A5),A0 */
    c->pc = 0x0001f6ccu;
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[0] = t0;

L_1F6D0:
    /* 0001f6d0   4  movea.l (c,A0),A1 */
    c->pc = 0x0001f6d0u;
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1F6D4:
    /* 0001f6d4   2  moveq #0,D1 */
    c->pc = 0x0001f6d4u;
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F6D6:
    /* 0001f6d6   4  move.w (2,A1),D1 */
    c->pc = 0x0001f6d6u;
    t0 = rc_rd16(c, m, (c->a[1] + 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F6DA:
    /* 0001f6da   2  cmp.l D1,D0 */
    c->pc = 0x0001f6dau;
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1F6DC:
    /* 0001f6dc   2  bcc 0001f6e8 */
    c->pc = 0x0001f6dcu;
    if (rc_cond(c, 4)) goto L_1F6E8;

L_1F6DE:
    /* 0001f6de   4  move.l (14,A5),D0 */
    c->pc = 0x0001f6deu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F6E2:
    /* 0001f6e2   2  moveq #10,D1 */
    c->pc = 0x0001f6e2u;
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F6E4:
    /* 0001f6e4   2  asr.l D1,D0 */
    c->pc = 0x0001f6e4u;
    c->d[0] = rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L);

L_1F6E6:
    /* 0001f6e6   2  bra 0001f6f6 */
    c->pc = 0x0001f6e6u;
    goto L_1F6F6;

L_1F6E8:
    /* 0001f6e8   4  movea.l (a,A5),A0 */
    c->pc = 0x0001f6e8u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[0] = t0;

L_1F6EC:
    /* 0001f6ec   4  movea.l (c,A0),A1 */
    c->pc = 0x0001f6ecu;
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1F6F0:
    /* 0001f6f0   2  moveq #0,D0 */
    c->pc = 0x0001f6f0u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F6F2:
    /* 0001f6f2   4  move.w (2,A1),D0 */
    c->pc = 0x0001f6f2u;
    t0 = rc_rd16(c, m, (c->a[1] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F6F6:
    /* 0001f6f6   4  move.w D0,(36,A2) */
    c->pc = 0x0001f6f6u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x36u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F6FA:
    /* 0001f6fa   4  bra 0001f8ae */
    c->pc = 0x0001f6fau;
    c->pc = 0x0001f8aeu;
    return;

}
