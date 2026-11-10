/* fn_0000be1e - 22 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000be1e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x0000be1eu: goto L_BE1E;
    case 0x0000be22u: goto L_BE22;
    case 0x0000be26u: goto L_BE26;
    case 0x0000be2au: goto L_BE2A;
    case 0x0000be2eu: goto L_BE2E;
    case 0x0000be30u: goto L_BE30;
    case 0x0000be32u: goto L_BE32;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_BE1E:
    /* 0000be1e   4  link.w A5,#0 */
    c->pc = 0x0000be1eu;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_BE22:
    /* 0000be22   4  move.l (46c,A4),-(A7) */
    c->pc = 0x0000be22u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x46cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BE26:
    /* 0000be26   4  move.l (466,A4),-(A7) */
    c->pc = 0x0000be26u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x466u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BE2A:
    /* 0000be2a   4  jsr (ffff8344,A4) */
    c->pc = 0x0000be2au;
    /* vector 139: exec.library -210 */
    c->pc = 0x0000be2eu;
    rc_os_call(c, m, 0, -210);

L_BE2E:
    /* 0000be2e   2  addq.w #8,A7 */
    c->pc = 0x0000be2eu;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_BE30:
    /* 0000be30   2  unlk A5 */
    c->pc = 0x0000be30u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_BE32:
    /* 0000be32   2  rts */
    c->pc = 0x0000be32u;
    rc_ret(c, m);
    return;

}
