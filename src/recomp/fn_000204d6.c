/* fn_000204d6 - 36 byte(s), 11 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000204d6(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x000204d6u: goto L_204D6;
    case 0x000204dau: goto L_204DA;
    case 0x000204deu: goto L_204DE;
    case 0x000204e2u: goto L_204E2;
    case 0x000204e6u: goto L_204E6;
    case 0x000204e8u: goto L_204E8;
    case 0x000204ecu: goto L_204EC;
    case 0x000204f0u: goto L_204F0;
    case 0x000204f4u: goto L_204F4;
    case 0x000204f6u: goto L_204F6;
    case 0x000204f8u: goto L_204F8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_204D6:
    /* 000204d6   4  link.w A5,#0 */
    c->pc = 0x000204d6u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_204DA:
    /* 000204da   4  pea (0000273a).l */
    c->pc = 0x000204dau;
    rc_push32(c, m, 0x0000273au);

L_204DE:
    /* 000204de   4  move.l (2b26,A4),-(A7) */
    c->pc = 0x000204deu;
    t0 = rc_rd32(c, m, (c->a[4] + 0x2b26u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_204E2:
    /* 000204e2   4  jsr (ffff8344,A4) */
    c->pc = 0x000204e2u;
    /* vector 139: exec.library -210 */
    c->pc = 0x000204e6u;
    rc_os_call(c, m, 0, -210);

L_204E6:
    /* 000204e6   2  addq.w #8,A7 */
    c->pc = 0x000204e6u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_204E8:
    /* 000204e8   4  pea (0000139d).l */
    c->pc = 0x000204e8u;
    rc_push32(c, m, 0x0000139du);

L_204EC:
    /* 000204ec   4  move.l (2b2e,A4),-(A7) */
    c->pc = 0x000204ecu;
    t0 = rc_rd32(c, m, (c->a[4] + 0x2b2eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_204F0:
    /* 000204f0   4  jsr (ffff8344,A4) */
    c->pc = 0x000204f0u;
    /* vector 139: exec.library -210 */
    c->pc = 0x000204f4u;
    rc_os_call(c, m, 0, -210);

L_204F4:
    /* 000204f4   2  addq.w #8,A7 */
    c->pc = 0x000204f4u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_204F6:
    /* 000204f6   2  unlk A5 */
    c->pc = 0x000204f6u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_204F8:
    /* 000204f8   2  rts */
    c->pc = 0x000204f8u;
    rc_ret(c, m);
    return;

}
