/* fn_000170de - 22 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000170de(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x000170deu: goto L_170DE;
    case 0x000170e2u: goto L_170E2;
    case 0x000170e8u: goto L_170E8;
    case 0x000170ecu: goto L_170EC;
    case 0x000170eeu: goto L_170EE;
    case 0x000170f0u: goto L_170F0;
    case 0x000170f2u: goto L_170F2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_170DE:
    /* 000170de   4  link.w A5,#0 */
    c->pc = 0x000170deu;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_170E2:
    /* 000170e2   6  move.w #1,(fffff28a,A4) */
    c->pc = 0x000170e2u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xd76u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_170E8:
    /* 000170e8   4  tst.w (fffff28a,A4) */
    c->pc = 0x000170e8u;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd76u));
    rc_set_nzvc(c, t0, RC_W);

L_170EC:
    /* 000170ec   2  beq 000170f0 */
    c->pc = 0x000170ecu;
    if (rc_cond(c, 7)) goto L_170F0;

L_170EE:
    /* 000170ee   2  bra 000170e8 */
    c->pc = 0x000170eeu;
    rc_tick();
    goto L_170E8;

L_170F0:
    /* 000170f0   2  unlk A5 */
    c->pc = 0x000170f0u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_170F2:
    /* 000170f2   2  rts */
    c->pc = 0x000170f2u;
    rc_ret(c, m);
    return;

}
