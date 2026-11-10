/* fn_0000149a - 56 byte(s), 15 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000149a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x0000149au: goto L_149A;
    case 0x000014a0u: goto L_14A0;
    case 0x000014a4u: goto L_14A4;
    case 0x000014aau: goto L_14AA;
    case 0x000014aeu: goto L_14AE;
    case 0x000014b2u: goto L_14B2;
    case 0x000014b6u: goto L_14B6;
    case 0x000014bau: goto L_14BA;
    case 0x000014beu: goto L_14BE;
    case 0x000014c2u: goto L_14C2;
    case 0x000014c6u: goto L_14C6;
    case 0x000014c8u: goto L_14C8;
    case 0x000014cau: goto L_14CA;
    case 0x000014ceu: goto L_14CE;
    case 0x000014d0u: goto L_14D0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_149A:
    /* 0000149a   6  move.l (ffffffe0,A5),(ffffffe4,A5) */
    c->pc = 0x0000149au;
    t0 = rc_rd32(c, m, (c->a[5] - 0x20u));
    rc_wr32(c, m, (c->a[5] - 0x1cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_14A0:
    /* 000014a0   4  movea.l (fffffff4,A5),A0 */
    c->pc = 0x000014a0u;
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_14A4:
    /* 000014a4   6  move.l (ffffffe0,A5),(28,A0) */
    c->pc = 0x000014a4u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x20u));
    rc_wr32(c, m, (c->a[0] + 0x28u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_14AA:
    /* 000014aa   4  pea (00000001).l */
    c->pc = 0x000014aau;
    rc_push32(c, m, 0x00000001u);

L_14AE:
    /* 000014ae   4  move.l (ffffffe4,A5),-(A7) */
    c->pc = 0x000014aeu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x1cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_14B2:
    /* 000014b2   4  move.l (fffffffc,A5),-(A7) */
    c->pc = 0x000014b2u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_14B6:
    /* 000014b6   4  jsr (ffff8314,A4) */
    c->pc = 0x000014b6u;
    /* vector 131 */
    rc_push32(c, m, 0x000014bau);
    rc_depth++;
    c->pc = 0x00021476u;
    return;

L_14BA:
    /* 000014ba   4  lea (c,A7),A7 */
    c->pc = 0x000014bau;
    c->a[7] = (c->a[7] + 0xcu);

L_14BE:
    /* 000014be   4  move.l (fffffffc,A5),-(A7) */
    c->pc = 0x000014beu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_14C2:
    /* 000014c2   4  movea.l (ffffffe4,A5),A0 */
    c->pc = 0x000014c2u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x1cu));
    c->a[0] = t0;

L_14C6:
    /* 000014c6   2  addq.l #2,A0 */
    c->pc = 0x000014c6u;
    c->a[0] += 0x00000002u;

L_14C8:
    /* 000014c8   2  move.l A0,-(A7) */
    c->pc = 0x000014c8u;
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_14CA:
    /* 000014ca   4  jsr (00001042) */
    c->pc = 0x000014cau;
    rc_push32(c, m, 0x000014ceu);
    rc_depth++;
    c->pc = 0x00001042u;
    return;

L_14CE:
    /* 000014ce   2  addq.w #8,A7 */
    c->pc = 0x000014ceu;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_14D0:
    /* 000014d0   2  bra 0000145e */
    c->pc = 0x000014d0u;
    c->pc = 0x0000145eu;
    return;

}
