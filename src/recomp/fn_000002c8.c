/* fn_000002c8 - 44 byte(s), 13 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000002c8(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x000002c8u: goto L_2C8;
    case 0x000002ccu: goto L_2CC;
    case 0x000002ceu: goto L_2CE;
    case 0x000002d2u: goto L_2D2;
    case 0x000002d4u: goto L_2D4;
    case 0x000002d6u: goto L_2D6;
    case 0x000002deu: goto L_2DE;
    case 0x000002e0u: goto L_2E0;
    case 0x000002e4u: goto L_2E4;
    case 0x000002e6u: goto L_2E6;
    case 0x000002e8u: goto L_2E8;
    case 0x000002f0u: goto L_2F0;
    case 0x000002f2u: goto L_2F2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2C8:
    /* 000002c8   4  link.w A5,#0 */
    c->pc = 0x000002c8u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_2CC:
    /* 000002cc   2  clr.l -(A7) */
    c->pc = 0x000002ccu;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2CE:
    /* 000002ce   4  jsr (ffff833e,A4) */
    c->pc = 0x000002ceu;
    /* vector 138: exec.library -294 */
    c->pc = 0x000002d2u;
    rc_os_call(c, m, 0, -294);

L_2D2:
    /* 000002d2   2  addq.w #4,A7 */
    c->pc = 0x000002d2u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2D4:
    /* 000002d4   2  movea.l D0,A0 */
    c->pc = 0x000002d4u;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_2D6:
    /* 000002d6   8  move.l #ffffffff,(b8,A0) */
    c->pc = 0x000002d6u;
    t0 = 0xffffffffu;
    rc_wr32(c, m, (c->a[0] + 0xb8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2DE:
    /* 000002de   2  clr.l -(A7) */
    c->pc = 0x000002deu;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2E0:
    /* 000002e0   4  jsr (ffff833e,A4) */
    c->pc = 0x000002e0u;
    /* vector 138: exec.library -294 */
    c->pc = 0x000002e4u;
    rc_os_call(c, m, 0, -294);

L_2E4:
    /* 000002e4   2  addq.w #4,A7 */
    c->pc = 0x000002e4u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2E6:
    /* 000002e6   2  movea.l D0,A0 */
    c->pc = 0x000002e6u;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_2E8:
    /* 000002e8   8  move.l #ffffffff,(b8,A0) */
    c->pc = 0x000002e8u;
    t0 = 0xffffffffu;
    rc_wr32(c, m, (c->a[0] + 0xb8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2F0:
    /* 000002f0   2  unlk A5 */
    c->pc = 0x000002f0u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2F2:
    /* 000002f2   2  rts */
    c->pc = 0x000002f2u;
    rc_ret(c, m);
    return;

}
