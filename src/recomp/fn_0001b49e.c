/* fn_0001b49e - 186 byte(s), 50 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001b49e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001b49eu): goto L_1B49E;
    case RC_ADDR(0x0001b4a2u): goto L_1B4A2;
    case RC_ADDR(0x0001b4a6u): goto L_1B4A6;
    case RC_ADDR(0x0001b4aau): goto L_1B4AA;
    case RC_ADDR(0x0001b4aeu): goto L_1B4AE;
    case RC_ADDR(0x0001b4b2u): goto L_1B4B2;
    case RC_ADDR(0x0001b4b6u): goto L_1B4B6;
    case RC_ADDR(0x0001b4bau): goto L_1B4BA;
    case RC_ADDR(0x0001b4beu): goto L_1B4BE;
    case RC_ADDR(0x0001b4c2u): goto L_1B4C2;
    case RC_ADDR(0x0001b4c6u): goto L_1B4C6;
    case RC_ADDR(0x0001b4cau): goto L_1B4CA;
    case RC_ADDR(0x0001b4ceu): goto L_1B4CE;
    case RC_ADDR(0x0001b4d2u): goto L_1B4D2;
    case RC_ADDR(0x0001b4d6u): goto L_1B4D6;
    case RC_ADDR(0x0001b4dau): goto L_1B4DA;
    case RC_ADDR(0x0001b4deu): goto L_1B4DE;
    case RC_ADDR(0x0001b4e2u): goto L_1B4E2;
    case RC_ADDR(0x0001b4e6u): goto L_1B4E6;
    case RC_ADDR(0x0001b4eau): goto L_1B4EA;
    case RC_ADDR(0x0001b4ecu): goto L_1B4EC;
    case RC_ADDR(0x0001b4f0u): goto L_1B4F0;
    case RC_ADDR(0x0001b4f4u): goto L_1B4F4;
    case RC_ADDR(0x0001b4f8u): goto L_1B4F8;
    case RC_ADDR(0x0001b4fcu): goto L_1B4FC;
    case RC_ADDR(0x0001b500u): goto L_1B500;
    case RC_ADDR(0x0001b504u): goto L_1B504;
    case RC_ADDR(0x0001b506u): goto L_1B506;
    case RC_ADDR(0x0001b50au): goto L_1B50A;
    case RC_ADDR(0x0001b50eu): goto L_1B50E;
    case RC_ADDR(0x0001b512u): goto L_1B512;
    case RC_ADDR(0x0001b516u): goto L_1B516;
    case RC_ADDR(0x0001b51au): goto L_1B51A;
    case RC_ADDR(0x0001b51eu): goto L_1B51E;
    case RC_ADDR(0x0001b520u): goto L_1B520;
    case RC_ADDR(0x0001b524u): goto L_1B524;
    case RC_ADDR(0x0001b528u): goto L_1B528;
    case RC_ADDR(0x0001b52cu): goto L_1B52C;
    case RC_ADDR(0x0001b530u): goto L_1B530;
    case RC_ADDR(0x0001b534u): goto L_1B534;
    case RC_ADDR(0x0001b538u): goto L_1B538;
    case RC_ADDR(0x0001b53au): goto L_1B53A;
    case RC_ADDR(0x0001b53eu): goto L_1B53E;
    case RC_ADDR(0x0001b542u): goto L_1B542;
    case RC_ADDR(0x0001b546u): goto L_1B546;
    case RC_ADDR(0x0001b54au): goto L_1B54A;
    case RC_ADDR(0x0001b54eu): goto L_1B54E;
    case RC_ADDR(0x0001b552u): goto L_1B552;
    case RC_ADDR(0x0001b554u): goto L_1B554;
    case RC_ADDR(0x0001b556u): goto L_1B556;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1B49E:
    /* 0001b49e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001b49eu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1B4A2:
    /* 0001b4a2   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0001b4a2u);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B4A6:
    /* 0001b4a6   4  pea (0001b568) */
    c->pc = RC_ADDR(0x0001b4a6u);
    rc_push32(c, m, RC_ADDR(0x0001b568u));

L_1B4AA:
    /* 0001b4aa   4  pea (0001b55c) */
    c->pc = RC_ADDR(0x0001b4aau);
    rc_push32(c, m, RC_ADDR(0x0001b55cu));

L_1B4AE:
    /* 0001b4ae   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x0001b4aeu);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x0001b4b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x000002f4u);
    return;

L_1B4B2:
    /* 0001b4b2   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001b4b2u);
    c->a[7] = (c->a[7] + 0xau);

L_1B4B6:
    /* 0001b4b6   4  pea (2268,A4) */
    c->pc = RC_ADDR(0x0001b4b6u);
    rc_push32(c, m, (c->a[4] + 0x2268u));

L_1B4BA:
    /* 0001b4ba   4  pea (2254,A4) */
    c->pc = RC_ADDR(0x0001b4bau);
    rc_push32(c, m, (c->a[4] + 0x2254u));

L_1B4BE:
    /* 0001b4be   4  pea (0001b56f) */
    c->pc = RC_ADDR(0x0001b4beu);
    rc_push32(c, m, RC_ADDR(0x0001b56fu));

L_1B4C2:
    /* 0001b4c2   4  jsr (ffff80b0,A4) */
    c->pc = RC_ADDR(0x0001b4c2u);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x0001b4c6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009984u);
    return;

L_1B4C6:
    /* 0001b4c6   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001b4c6u);
    c->a[7] = (c->a[7] + 0xcu);

L_1B4CA:
    /* 0001b4ca   4  move.l D0,(2244,A4) */
    c->pc = RC_ADDR(0x0001b4cau);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2244u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B4CE:
    /* 0001b4ce   4  beq 0001b552 */
    c->pc = RC_ADDR(0x0001b4ceu);
    if (rc_cond(c, 7)) goto L_1B552;

L_1B4D2:
    /* 0001b4d2   4  pea (226c,A4) */
    c->pc = RC_ADDR(0x0001b4d2u);
    rc_push32(c, m, (c->a[4] + 0x226cu));

L_1B4D6:
    /* 0001b4d6   4  pea (2256,A4) */
    c->pc = RC_ADDR(0x0001b4d6u);
    rc_push32(c, m, (c->a[4] + 0x2256u));

L_1B4DA:
    /* 0001b4da   4  pea (0001b576) */
    c->pc = RC_ADDR(0x0001b4dau);
    rc_push32(c, m, RC_ADDR(0x0001b576u));

L_1B4DE:
    /* 0001b4de   4  jsr (ffff80b0,A4) */
    c->pc = RC_ADDR(0x0001b4deu);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x0001b4e2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009984u);
    return;

L_1B4E2:
    /* 0001b4e2   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001b4e2u);
    c->a[7] = (c->a[7] + 0xcu);

L_1B4E6:
    /* 0001b4e6   4  move.l D0,(2248,A4) */
    c->pc = RC_ADDR(0x0001b4e6u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2248u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B4EA:
    /* 0001b4ea   2  beq 0001b552 */
    c->pc = RC_ADDR(0x0001b4eau);
    if (rc_cond(c, 7)) goto L_1B552;

L_1B4EC:
    /* 0001b4ec   4  pea (2258,A4) */
    c->pc = RC_ADDR(0x0001b4ecu);
    rc_push32(c, m, (c->a[4] + 0x2258u));

L_1B4F0:
    /* 0001b4f0   4  pea (224c,A4) */
    c->pc = RC_ADDR(0x0001b4f0u);
    rc_push32(c, m, (c->a[4] + 0x224cu));

L_1B4F4:
    /* 0001b4f4   4  pea (0001b580) */
    c->pc = RC_ADDR(0x0001b4f4u);
    rc_push32(c, m, RC_ADDR(0x0001b580u));

L_1B4F8:
    /* 0001b4f8   4  jsr (ffff80b0,A4) */
    c->pc = RC_ADDR(0x0001b4f8u);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x0001b4fcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00009984u);
    return;

L_1B4FC:
    /* 0001b4fc   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001b4fcu);
    c->a[7] = (c->a[7] + 0xcu);

L_1B500:
    /* 0001b500   4  move.l D0,(2234,A4) */
    c->pc = RC_ADDR(0x0001b500u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2234u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B504:
    /* 0001b504   2  beq 0001b552 */
    c->pc = RC_ADDR(0x0001b504u);
    if (rc_cond(c, 7)) goto L_1B552;

L_1B506:
    /* 0001b506   4  pea (225c,A4) */
    c->pc = RC_ADDR(0x0001b506u);
    rc_push32(c, m, (c->a[4] + 0x225cu));

L_1B50A:
    /* 0001b50a   4  pea (224e,A4) */
    c->pc = RC_ADDR(0x0001b50au);
    rc_push32(c, m, (c->a[4] + 0x224eu));

L_1B50E:
    /* 0001b50e   4  pea (0001b58d) */
    c->pc = RC_ADDR(0x0001b50eu);
    rc_push32(c, m, RC_ADDR(0x0001b58du));

L_1B512:
    /* 0001b512   4  jsr (ffff80b0,A4) */
    c->pc = RC_ADDR(0x0001b512u);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x0001b516u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009984u);
    return;

L_1B516:
    /* 0001b516   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001b516u);
    c->a[7] = (c->a[7] + 0xcu);

L_1B51A:
    /* 0001b51a   4  move.l D0,(2238,A4) */
    c->pc = RC_ADDR(0x0001b51au);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2238u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B51E:
    /* 0001b51e   2  beq 0001b552 */
    c->pc = RC_ADDR(0x0001b51eu);
    if (rc_cond(c, 7)) goto L_1B552;

L_1B520:
    /* 0001b520   4  pea (2260,A4) */
    c->pc = RC_ADDR(0x0001b520u);
    rc_push32(c, m, (c->a[4] + 0x2260u));

L_1B524:
    /* 0001b524   4  pea (2250,A4) */
    c->pc = RC_ADDR(0x0001b524u);
    rc_push32(c, m, (c->a[4] + 0x2250u));

L_1B528:
    /* 0001b528   4  pea (0001b595) */
    c->pc = RC_ADDR(0x0001b528u);
    rc_push32(c, m, RC_ADDR(0x0001b595u));

L_1B52C:
    /* 0001b52c   4  jsr (ffff80b0,A4) */
    c->pc = RC_ADDR(0x0001b52cu);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x0001b530u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009984u);
    return;

L_1B530:
    /* 0001b530   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001b530u);
    c->a[7] = (c->a[7] + 0xcu);

L_1B534:
    /* 0001b534   4  move.l D0,(223c,A4) */
    c->pc = RC_ADDR(0x0001b534u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x223cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B538:
    /* 0001b538   2  beq 0001b552 */
    c->pc = RC_ADDR(0x0001b538u);
    if (rc_cond(c, 7)) goto L_1B552;

L_1B53A:
    /* 0001b53a   4  pea (2264,A4) */
    c->pc = RC_ADDR(0x0001b53au);
    rc_push32(c, m, (c->a[4] + 0x2264u));

L_1B53E:
    /* 0001b53e   4  pea (2252,A4) */
    c->pc = RC_ADDR(0x0001b53eu);
    rc_push32(c, m, (c->a[4] + 0x2252u));

L_1B542:
    /* 0001b542   4  pea (0001b5a1) */
    c->pc = RC_ADDR(0x0001b542u);
    rc_push32(c, m, RC_ADDR(0x0001b5a1u));

L_1B546:
    /* 0001b546   4  jsr (ffff80b0,A4) */
    c->pc = RC_ADDR(0x0001b546u);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x0001b54au));
    rc_depth++;
    c->pc = RC_ADDR(0x00009984u);
    return;

L_1B54A:
    /* 0001b54a   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001b54au);
    c->a[7] = (c->a[7] + 0xcu);

L_1B54E:
    /* 0001b54e   4  move.l D0,(2240,A4) */
    c->pc = RC_ADDR(0x0001b54eu);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2240u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B552:
    /* 0001b552   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001b552u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1B554:
    /* 0001b554   2  unlk A5 */
    c->pc = RC_ADDR(0x0001b554u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1B556:
    /* 0001b556   2  rts */
    c->pc = RC_ADDR(0x0001b556u);
    rc_ret(c, m);
    return;

}
