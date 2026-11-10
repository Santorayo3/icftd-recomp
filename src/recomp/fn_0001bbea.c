/* fn_0001bbea - 36 byte(s), 11 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001bbea(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x0001bbeau: goto L_1BBEA;
    case 0x0001bbeeu: goto L_1BBEE;
    case 0x0001bbf2u: goto L_1BBF2;
    case 0x0001bbf6u: goto L_1BBF6;
    case 0x0001bbfau: goto L_1BBFA;
    case 0x0001bbfcu: goto L_1BBFC;
    case 0x0001bc00u: goto L_1BC00;
    case 0x0001bc04u: goto L_1BC04;
    case 0x0001bc08u: goto L_1BC08;
    case 0x0001bc0au: goto L_1BC0A;
    case 0x0001bc0cu: goto L_1BC0C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1BBEA:
    /* 0001bbea   4  link.w A5,#0 */
    c->pc = 0x0001bbeau;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1BBEE:
    /* 0001bbee   4  move.l (2280,A4),-(A7) */
    c->pc = 0x0001bbeeu;
    t0 = rc_rd32(c, m, (c->a[4] + 0x2280u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BBF2:
    /* 0001bbf2   4  pea (00000005).l */
    c->pc = 0x0001bbf2u;
    rc_push32(c, m, 0x00000005u);

L_1BBF6:
    /* 0001bbf6   4  jsr (ffff8356,A4) */
    c->pc = 0x0001bbf6u;
    /* vector 142: exec.library -174 */
    c->pc = 0x0001bbfau;
    rc_os_call(c, m, 0, -174);

L_1BBFA:
    /* 0001bbfa   2  addq.w #8,A7 */
    c->pc = 0x0001bbfau;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1BBFC:
    /* 0001bbfc   4  pea (00000016).l */
    c->pc = 0x0001bbfcu;
    rc_push32(c, m, 0x00000016u);

L_1BC00:
    /* 0001bc00   4  move.l (2280,A4),-(A7) */
    c->pc = 0x0001bc00u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x2280u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BC04:
    /* 0001bc04   4  jsr (ffff8344,A4) */
    c->pc = 0x0001bc04u;
    /* vector 139: exec.library -210 */
    c->pc = 0x0001bc08u;
    rc_os_call(c, m, 0, -210);

L_1BC08:
    /* 0001bc08   2  addq.w #8,A7 */
    c->pc = 0x0001bc08u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1BC0A:
    /* 0001bc0a   2  unlk A5 */
    c->pc = 0x0001bc0au;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1BC0C:
    /* 0001bc0c   2  rts */
    c->pc = 0x0001bc0cu;
    rc_ret(c, m);
    return;

}
