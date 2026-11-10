/* fn_000057ba - 76 byte(s), 21 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000057ba(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x000057bau: goto L_57BA;
    case 0x000057beu: goto L_57BE;
    case 0x000057c4u: goto L_57C4;
    case 0x000057c6u: goto L_57C6;
    case 0x000057ccu: goto L_57CC;
    case 0x000057ceu: goto L_57CE;
    case 0x000057d4u: goto L_57D4;
    case 0x000057d6u: goto L_57D6;
    case 0x000057dcu: goto L_57DC;
    case 0x000057deu: goto L_57DE;
    case 0x000057e4u: goto L_57E4;
    case 0x000057e6u: goto L_57E6;
    case 0x000057eau: goto L_57EA;
    case 0x000057eeu: goto L_57EE;
    case 0x000057f0u: goto L_57F0;
    case 0x000057f4u: goto L_57F4;
    case 0x000057f8u: goto L_57F8;
    case 0x000057fcu: goto L_57FC;
    case 0x00005800u: goto L_5800;
    case 0x00005802u: goto L_5802;
    case 0x00005804u: goto L_5804;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_57BA:
    /* 000057ba   4  link.w A5,#0 */
    c->pc = 0x000057bau;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_57BE:
    /* 000057be   6  cmpi.w #7,(8,A5) */
    c->pc = 0x000057beu;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_57C4:
    /* 000057c4   2  ble 000057ce */
    c->pc = 0x000057c4u;
    if (rc_cond(c, 15)) goto L_57CE;

L_57C6:
    /* 000057c6   6  cmpi.w #c,(8,A5) */
    c->pc = 0x000057c6u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_57CC:
    /* 000057cc   2  blt 000057e6 */
    c->pc = 0x000057ccu;
    if (rc_cond(c, 13)) goto L_57E6;

L_57CE:
    /* 000057ce   6  cmpi.w #1d,(8,A5) */
    c->pc = 0x000057ceu;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x0000001du);

L_57D4:
    /* 000057d4   2  ble 000057de */
    c->pc = 0x000057d4u;
    if (rc_cond(c, 15)) goto L_57DE;

L_57D6:
    /* 000057d6   6  cmpi.w #24,(8,A5) */
    c->pc = 0x000057d6u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x00000024u);

L_57DC:
    /* 000057dc   2  blt 000057e6 */
    c->pc = 0x000057dcu;
    if (rc_cond(c, 13)) goto L_57E6;

L_57DE:
    /* 000057de   6  cmpi.w #61,(8,A5) */
    c->pc = 0x000057deu;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x00000061u);

L_57E4:
    /* 000057e4   2  ble 000057f0 */
    c->pc = 0x000057e4u;
    if (rc_cond(c, 15)) goto L_57F0;

L_57E6:
    /* 000057e6   4  lea (00005806),A0 */
    c->pc = 0x000057e6u;
    c->a[0] = 0x00005806u;

L_57EA:
    /* 000057ea   4  move.l A0,(1e,A4) */
    c->pc = 0x000057eau;
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_57EE:
    /* 000057ee   2  bra 000057f8 */
    c->pc = 0x000057eeu;
    goto L_57F8;

L_57F0:
    /* 000057f0   4  lea (00005815),A0 */
    c->pc = 0x000057f0u;
    c->a[0] = 0x00005815u;

L_57F4:
    /* 000057f4   4  move.l A0,(1e,A4) */
    c->pc = 0x000057f4u;
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_57F8:
    /* 000057f8   4  move.l (1e,A4),-(A7) */
    c->pc = 0x000057f8u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x1eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_57FC:
    /* 000057fc   4  jsr (ffff828a,A4) */
    c->pc = 0x000057fcu;
    /* vector 108 */
    rc_push32(c, m, 0x00005800u);
    rc_depth++;
    c->pc = 0x000202c4u;
    return;

L_5800:
    /* 00005800   2  addq.w #4,A7 */
    c->pc = 0x00005800u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5802:
    /* 00005802   2  unlk A5 */
    c->pc = 0x00005802u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_5804:
    /* 00005804   2  rts */
    c->pc = 0x00005804u;
    rc_ret(c, m);
    return;

}
