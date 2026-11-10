/* fn_0001b296 - 82 byte(s), 23 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001b296(cpu_t *c, rt_machine *m)
{
    u32 t0, t1;

    switch (c->pc)
    {
    case 0x0001b296u: goto L_1B296;
    case 0x0001b29au: goto L_1B29A;
    case 0x0001b29eu: goto L_1B29E;
    case 0x0001b2a2u: goto L_1B2A2;
    case 0x0001b2a4u: goto L_1B2A4;
    case 0x0001b2a8u: goto L_1B2A8;
    case 0x0001b2aau: goto L_1B2AA;
    case 0x0001b2aeu: goto L_1B2AE;
    case 0x0001b2b2u: goto L_1B2B2;
    case 0x0001b2b6u: goto L_1B2B6;
    case 0x0001b2bau: goto L_1B2BA;
    case 0x0001b2beu: goto L_1B2BE;
    case 0x0001b2c2u: goto L_1B2C2;
    case 0x0001b2c6u: goto L_1B2C6;
    case 0x0001b2c8u: goto L_1B2C8;
    case 0x0001b2ccu: goto L_1B2CC;
    case 0x0001b2d0u: goto L_1B2D0;
    case 0x0001b2d4u: goto L_1B2D4;
    case 0x0001b2d8u: goto L_1B2D8;
    case 0x0001b2dcu: goto L_1B2DC;
    case 0x0001b2e0u: goto L_1B2E0;
    case 0x0001b2e4u: goto L_1B2E4;
    case 0x0001b2e6u: goto L_1B2E6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1B296:
    /* 0001b296   4  link.w A5,#0 */
    c->pc = 0x0001b296u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1B29A:
    /* 0001b29a   4  move.w #3e8,-(A7) */
    c->pc = 0x0001b29au;
    t0 = 0x000003e8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B29E:
    /* 0001b29e   4  jsr (ffff8188,A4) */
    c->pc = 0x0001b29eu;
    /* vector 65 */
    rc_push32(c, m, 0x0001b2a2u);
    rc_depth++;
    c->pc = 0x00016ee0u;
    return;

L_1B2A2:
    /* 0001b2a2   2  addq.w #2,A7 */
    c->pc = 0x0001b2a2u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1B2A4:
    /* 0001b2a4   4  cmp.w #1f4,D0 */
    c->pc = 0x0001b2a4u;
    t0 = 0x000001f4u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B2A8:
    /* 0001b2a8   2  bge 0001b2c8 */
    c->pc = 0x0001b2a8u;
    if (rc_cond(c, 12)) goto L_1B2C8;

L_1B2AA:
    /* 0001b2aa   4  move.w #40,-(A7) */
    c->pc = 0x0001b2aau;
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B2AE:
    /* 0001b2ae   4  move.w #3,-(A7) */
    c->pc = 0x0001b2aeu;
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B2B2:
    /* 0001b2b2   4  move.l (2260,A4),-(A7) */
    c->pc = 0x0001b2b2u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x2260u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B2B6:
    /* 0001b2b6   4  move.w (2250,A4),-(A7) */
    c->pc = 0x0001b2b6u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x2250u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B2BA:
    /* 0001b2ba   4  move.l (223c,A4),-(A7) */
    c->pc = 0x0001b2bau;
    t0 = rc_rd32(c, m, (c->a[4] + 0x223cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B2BE:
    /* 0001b2be   4  jsr (ffff80d4,A4) */
    c->pc = 0x0001b2beu;
    /* vector 35 */
    rc_push32(c, m, 0x0001b2c2u);
    rc_depth++;
    c->pc = 0x00009c3cu;
    return;

L_1B2C2:
    /* 0001b2c2   4  lea (e,A7),A7 */
    c->pc = 0x0001b2c2u;
    c->a[7] = (c->a[7] + 0xeu);

L_1B2C6:
    /* 0001b2c6   2  bra 0001b2e4 */
    c->pc = 0x0001b2c6u;
    goto L_1B2E4;

L_1B2C8:
    /* 0001b2c8   4  move.w #40,-(A7) */
    c->pc = 0x0001b2c8u;
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B2CC:
    /* 0001b2cc   4  move.w #3,-(A7) */
    c->pc = 0x0001b2ccu;
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B2D0:
    /* 0001b2d0   4  move.l (2264,A4),-(A7) */
    c->pc = 0x0001b2d0u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x2264u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B2D4:
    /* 0001b2d4   4  move.w (2252,A4),-(A7) */
    c->pc = 0x0001b2d4u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x2252u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B2D8:
    /* 0001b2d8   4  move.l (2240,A4),-(A7) */
    c->pc = 0x0001b2d8u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x2240u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B2DC:
    /* 0001b2dc   4  jsr (ffff80d4,A4) */
    c->pc = 0x0001b2dcu;
    /* vector 35 */
    rc_push32(c, m, 0x0001b2e0u);
    rc_depth++;
    c->pc = 0x00009c3cu;
    return;

L_1B2E0:
    /* 0001b2e0   4  lea (e,A7),A7 */
    c->pc = 0x0001b2e0u;
    c->a[7] = (c->a[7] + 0xeu);

L_1B2E4:
    /* 0001b2e4   2  unlk A5 */
    c->pc = 0x0001b2e4u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1B2E6:
    /* 0001b2e6   2  rts */
    c->pc = 0x0001b2e6u;
    rc_ret(c, m);
    return;

}
