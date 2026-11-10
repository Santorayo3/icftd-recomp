/* fn_0000df34 - 68 byte(s), 18 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000df34(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x0000df34u: goto L_DF34;
    case 0x0000df38u: goto L_DF38;
    case 0x0000df3cu: goto L_DF3C;
    case 0x0000df40u: goto L_DF40;
    case 0x0000df44u: goto L_DF44;
    case 0x0000df48u: goto L_DF48;
    case 0x0000df4cu: goto L_DF4C;
    case 0x0000df50u: goto L_DF50;
    case 0x0000df54u: goto L_DF54;
    case 0x0000df58u: goto L_DF58;
    case 0x0000df5cu: goto L_DF5C;
    case 0x0000df60u: goto L_DF60;
    case 0x0000df64u: goto L_DF64;
    case 0x0000df68u: goto L_DF68;
    case 0x0000df6cu: goto L_DF6C;
    case 0x0000df70u: goto L_DF70;
    case 0x0000df74u: goto L_DF74;
    case 0x0000df76u: goto L_DF76;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_DF34:
    /* 0000df34   4  link.w A5,#0 */
    c->pc = 0x0000df34u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_DF38:
    /* 0000df38   4  pea (752,A4) */
    c->pc = 0x0000df38u;
    rc_push32(c, m, (c->a[4] + 0x752u));

L_DF3C:
    /* 0000df3c   4  move.w #22,-(A7) */
    c->pc = 0x0000df3cu;
    t0 = 0x00000022u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DF40:
    /* 0000df40   4  pea (0000df78) */
    c->pc = 0x0000df40u;
    rc_push32(c, m, 0x0000df78u);

L_DF44:
    /* 0000df44   4  jsr (ffff817c,A4) */
    c->pc = 0x0000df44u;
    /* vector 63 */
    rc_push32(c, m, 0x0000df48u);
    rc_depth++;
    c->pc = 0x00016c00u;
    return;

L_DF48:
    /* 0000df48   4  lea (a,A7),A7 */
    c->pc = 0x0000df48u;
    c->a[7] = (c->a[7] + 0xau);

L_DF4C:
    /* 0000df4c   4  pea (7fe,A4) */
    c->pc = 0x0000df4cu;
    rc_push32(c, m, (c->a[4] + 0x7feu));

L_DF50:
    /* 0000df50   4  move.w #29,-(A7) */
    c->pc = 0x0000df50u;
    t0 = 0x00000029u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DF54:
    /* 0000df54   4  pea (0000df7d) */
    c->pc = 0x0000df54u;
    rc_push32(c, m, 0x0000df7du);

L_DF58:
    /* 0000df58   4  jsr (ffff817c,A4) */
    c->pc = 0x0000df58u;
    /* vector 63 */
    rc_push32(c, m, 0x0000df5cu);
    rc_depth++;
    c->pc = 0x00016c00u;
    return;

L_DF5C:
    /* 0000df5c   4  lea (a,A7),A7 */
    c->pc = 0x0000df5cu;
    c->a[7] = (c->a[7] + 0xau);

L_DF60:
    /* 0000df60   4  pea (8a2,A4) */
    c->pc = 0x0000df60u;
    rc_push32(c, m, (c->a[4] + 0x8a2u));

L_DF64:
    /* 0000df64   4  move.w #42,-(A7) */
    c->pc = 0x0000df64u;
    t0 = 0x00000042u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DF68:
    /* 0000df68   4  pea (0000df82) */
    c->pc = 0x0000df68u;
    rc_push32(c, m, 0x0000df82u);

L_DF6C:
    /* 0000df6c   4  jsr (ffff817c,A4) */
    c->pc = 0x0000df6cu;
    /* vector 63 */
    rc_push32(c, m, 0x0000df70u);
    rc_depth++;
    c->pc = 0x00016c00u;
    return;

L_DF70:
    /* 0000df70   4  lea (a,A7),A7 */
    c->pc = 0x0000df70u;
    c->a[7] = (c->a[7] + 0xau);

L_DF74:
    /* 0000df74   2  unlk A5 */
    c->pc = 0x0000df74u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_DF76:
    /* 0000df76   2  rts */
    c->pc = 0x0000df76u;
    rc_ret(c, m);
    return;

}
