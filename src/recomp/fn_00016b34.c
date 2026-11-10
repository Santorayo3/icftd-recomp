/* fn_00016b34 - 68 byte(s), 19 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00016b34(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x00016b34u: goto L_16B34;
    case 0x00016b38u: goto L_16B38;
    case 0x00016b3cu: goto L_16B3C;
    case 0x00016b3eu: goto L_16B3E;
    case 0x00016b42u: goto L_16B42;
    case 0x00016b46u: goto L_16B46;
    case 0x00016b4au: goto L_16B4A;
    case 0x00016b4eu: goto L_16B4E;
    case 0x00016b50u: goto L_16B50;
    case 0x00016b56u: goto L_16B56;
    case 0x00016b5au: goto L_16B5A;
    case 0x00016b60u: goto L_16B60;
    case 0x00016b64u: goto L_16B64;
    case 0x00016b68u: goto L_16B68;
    case 0x00016b6cu: goto L_16B6C;
    case 0x00016b6eu: goto L_16B6E;
    case 0x00016b70u: goto L_16B70;
    case 0x00016b74u: goto L_16B74;
    case 0x00016b76u: goto L_16B76;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16B34:
    /* 00016b34   4  link.w A5,#fffffffc */
    c->pc = 0x00016b34u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_16B38:
    /* 00016b38   4  tst.l (ffffb3b4,A4) */
    c->pc = 0x00016b38u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x4c4cu));
    rc_set_nzvc(c, t0, RC_L);

L_16B3C:
    /* 00016b3c   2  beq 00016b70 */
    c->pc = 0x00016b3cu;
    if (rc_cond(c, 7)) goto L_16B70;

L_16B3E:
    /* 00016b3e   4  movea.l (ffffb3b4,A4),A0 */
    c->pc = 0x00016b3eu;
    t0 = rc_rd32(c, m, (c->a[4] - 0x4c4cu));
    c->a[0] = t0;

L_16B42:
    /* 00016b42   4  clr.l (20,A0) */
    c->pc = 0x00016b42u;
    rc_wr32(c, m, (c->a[0] + 0x20u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_16B46:
    /* 00016b46   4  move.l (ffffb3b4,A4),-(A7) */
    c->pc = 0x00016b46u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x4c4cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16B4A:
    /* 00016b4a   4  jsr (ffff827e,A4) */
    c->pc = 0x00016b4au;
    /* vector 106 */
    rc_push32(c, m, 0x00016b4eu);
    rc_depth++;
    c->pc = 0x00020096u;
    return;

L_16B4E:
    /* 00016b4e   2  addq.w #4,A7 */
    c->pc = 0x00016b4eu;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_16B50:
    /* 00016b50   6  move.l (ffffb3b4,A4),(fffffffc,A5) */
    c->pc = 0x00016b50u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x4c4cu));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_16B56:
    /* 00016b56   4  movea.l (ffffb3b4,A4),A0 */
    c->pc = 0x00016b56u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x4c4cu));
    c->a[0] = t0;

L_16B5A:
    /* 00016b5a   6  move.l (28,A0),(ffffb3b4,A4) */
    c->pc = 0x00016b5au;
    t0 = rc_rd32(c, m, (c->a[0] + 0x28u));
    rc_wr32(c, m, (c->a[4] - 0x4c4cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_16B60:
    /* 00016b60   4  pea (0000002c).l */
    c->pc = 0x00016b60u;
    rc_push32(c, m, 0x0000002cu);

L_16B64:
    /* 00016b64   4  move.l (fffffffc,A5),-(A7) */
    c->pc = 0x00016b64u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16B68:
    /* 00016b68   4  jsr (ffff8344,A4) */
    c->pc = 0x00016b68u;
    /* vector 139: exec.library -210 */
    c->pc = 0x00016b6cu;
    rc_os_call(c, m, 0, -210);

L_16B6C:
    /* 00016b6c   2  addq.w #8,A7 */
    c->pc = 0x00016b6cu;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_16B6E:
    /* 00016b6e   2  bra 00016b38 */
    c->pc = 0x00016b6eu;
    rc_tick();
    goto L_16B38;

L_16B70:
    /* 00016b70   4  clr.l (ffffb3b4,A4) */
    c->pc = 0x00016b70u;
    rc_wr32(c, m, (c->a[4] - 0x4c4cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_16B74:
    /* 00016b74   2  unlk A5 */
    c->pc = 0x00016b74u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16B76:
    /* 00016b76   2  rts */
    c->pc = 0x00016b76u;
    rc_ret(c, m);
    return;

}
