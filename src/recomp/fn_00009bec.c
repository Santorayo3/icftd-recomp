/* fn_00009bec - 46 byte(s), 16 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00009bec(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x00009becu: goto L_9BEC;
    case 0x00009bf0u: goto L_9BF0;
    case 0x00009bf2u: goto L_9BF2;
    case 0x00009bf4u: goto L_9BF4;
    case 0x00009bf6u: goto L_9BF6;
    case 0x00009bfau: goto L_9BFA;
    case 0x00009bfcu: goto L_9BFC;
    case 0x00009bfeu: goto L_9BFE;
    case 0x00009c02u: goto L_9C02;
    case 0x00009c04u: goto L_9C04;
    case 0x00009c06u: goto L_9C06;
    case 0x00009c0au: goto L_9C0A;
    case 0x00009c0cu: goto L_9C0C;
    case 0x00009c0eu: goto L_9C0E;
    case 0x00009c16u: goto L_9C16;
    case 0x00009c18u: goto L_9C18;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9BEC:
    /* 00009bec   4  link.w A5,#0 */
    c->pc = 0x00009becu;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_9BF0:
    /* 00009bf0   2  clr.w -(A7) */
    c->pc = 0x00009bf0u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9BF2:
    /* 00009bf2   2  bsr 00009bca */
    c->pc = 0x00009bf2u;
    rc_push32(c, m, 0x00009bf4u);
    rc_depth++;
    c->pc = 0x00009bcau;
    return;

L_9BF4:
    /* 00009bf4   2  addq.w #2,A7 */
    c->pc = 0x00009bf4u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_9BF6:
    /* 00009bf6   4  move.w #1,-(A7) */
    c->pc = 0x00009bf6u;
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9BFA:
    /* 00009bfa   2  bsr 00009bca */
    c->pc = 0x00009bfau;
    rc_push32(c, m, 0x00009bfcu);
    rc_depth++;
    c->pc = 0x00009bcau;
    return;

L_9BFC:
    /* 00009bfc   2  addq.w #2,A7 */
    c->pc = 0x00009bfcu;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_9BFE:
    /* 00009bfe   4  move.w #2,-(A7) */
    c->pc = 0x00009bfeu;
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9C02:
    /* 00009c02   2  bsr 00009bca */
    c->pc = 0x00009c02u;
    rc_push32(c, m, 0x00009c04u);
    rc_depth++;
    c->pc = 0x00009bcau;
    return;

L_9C04:
    /* 00009c04   2  addq.w #2,A7 */
    c->pc = 0x00009c04u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_9C06:
    /* 00009c06   4  move.w #3,-(A7) */
    c->pc = 0x00009c06u;
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9C0A:
    /* 00009c0a   2  bsr 00009bca */
    c->pc = 0x00009c0au;
    rc_push32(c, m, 0x00009c0cu);
    rc_depth++;
    c->pc = 0x00009bcau;
    return;

L_9C0C:
    /* 00009c0c   2  addq.w #2,A7 */
    c->pc = 0x00009c0cu;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_9C0E:
    /* 00009c0e   8  move.w #f,(00dff096).l */
    c->pc = 0x00009c0eu;
    t0 = 0x0000000fu;
    rc_wr16(c, m, 0x00dff096u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9C16:
    /* 00009c16   2  unlk A5 */
    c->pc = 0x00009c16u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_9C18:
    /* 00009c18   2  rts */
    c->pc = 0x00009c18u;
    rc_ret(c, m);
    return;

}
