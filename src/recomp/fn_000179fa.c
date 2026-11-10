/* fn_000179fa - 148 byte(s), 39 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000179fa(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x000179fau: goto L_179FA;
    case 0x000179feu: goto L_179FE;
    case 0x00017a02u: goto L_17A02;
    case 0x00017a06u: goto L_17A06;
    case 0x00017a0au: goto L_17A0A;
    case 0x00017a0eu: goto L_17A0E;
    case 0x00017a14u: goto L_17A14;
    case 0x00017a1au: goto L_17A1A;
    case 0x00017a20u: goto L_17A20;
    case 0x00017a24u: goto L_17A24;
    case 0x00017a28u: goto L_17A28;
    case 0x00017a2cu: goto L_17A2C;
    case 0x00017a30u: goto L_17A30;
    case 0x00017a34u: goto L_17A34;
    case 0x00017a38u: goto L_17A38;
    case 0x00017a3cu: goto L_17A3C;
    case 0x00017a40u: goto L_17A40;
    case 0x00017a44u: goto L_17A44;
    case 0x00017a48u: goto L_17A48;
    case 0x00017a4cu: goto L_17A4C;
    case 0x00017a50u: goto L_17A50;
    case 0x00017a54u: goto L_17A54;
    case 0x00017a58u: goto L_17A58;
    case 0x00017a5au: goto L_17A5A;
    case 0x00017a5eu: goto L_17A5E;
    case 0x00017a62u: goto L_17A62;
    case 0x00017a64u: goto L_17A64;
    case 0x00017a68u: goto L_17A68;
    case 0x00017a6cu: goto L_17A6C;
    case 0x00017a70u: goto L_17A70;
    case 0x00017a74u: goto L_17A74;
    case 0x00017a78u: goto L_17A78;
    case 0x00017a7cu: goto L_17A7C;
    case 0x00017a80u: goto L_17A80;
    case 0x00017a82u: goto L_17A82;
    case 0x00017a84u: goto L_17A84;
    case 0x00017a88u: goto L_17A88;
    case 0x00017a8au: goto L_17A8A;
    case 0x00017a8cu: goto L_17A8C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_179FA:
    /* 000179fa   4  link.w A5,#0 */
    c->pc = 0x000179fau;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_179FE:
    /* 000179fe   4  tst.w (aec,A4) */
    c->pc = 0x000179feu;
    t0 = rc_rd16(c, m, (c->a[4] + 0xaecu));
    rc_set_nzvc(c, t0, RC_W);

L_17A02:
    /* 00017a02   4  beq 00017a8a */
    c->pc = 0x00017a02u;
    if (rc_cond(c, 7)) goto L_17A8A;

L_17A06:
    /* 00017a06   4  clr.w (ffffcb20,A4) */
    c->pc = 0x00017a06u;
    rc_wr16(c, m, (c->a[4] - 0x34e0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17A0A:
    /* 00017a0a   4  clr.w (aec,A4) */
    c->pc = 0x00017a0au;
    rc_wr16(c, m, (c->a[4] + 0xaecu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17A0E:
    /* 00017a0e   6  move.w #1,(2e2,A4) */
    c->pc = 0x00017a0eu;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x2e2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17A14:
    /* 00017a14   6  move.w #82,(138c,A4) */
    c->pc = 0x00017a14u;
    t0 = 0x00000082u;
    rc_wr16(c, m, (c->a[4] + 0x138cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17A1A:
    /* 00017a1a   6  move.w #1,(10c6,A4) */
    c->pc = 0x00017a1au;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x10c6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17A20:
    /* 00017a20   4  jsr (00016df8) */
    c->pc = 0x00017a20u;
    rc_push32(c, m, 0x00017a24u);
    rc_depth++;
    c->pc = 0x00016df8u;
    return;

L_17A24:
    /* 00017a24   4  move.w #1,-(A7) */
    c->pc = 0x00017a24u;
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17A28:
    /* 00017a28   4  pea (00017a9a) */
    c->pc = 0x00017a28u;
    rc_push32(c, m, 0x00017a9au);

L_17A2C:
    /* 00017a2c   4  pea (00017a8e) */
    c->pc = 0x00017a2cu;
    rc_push32(c, m, 0x00017a8eu);

L_17A30:
    /* 00017a30   4  jsr (ffff800e,A4) */
    c->pc = 0x00017a30u;
    /* vector 2 */
    rc_push32(c, m, 0x00017a34u);
    rc_depth++;
    c->pc = 0x000002f4u;
    return;

L_17A34:
    /* 00017a34   4  lea (a,A7),A7 */
    c->pc = 0x00017a34u;
    c->a[7] = (c->a[7] + 0xau);

L_17A38:
    /* 00017a38   4  pea (1392,A4) */
    c->pc = 0x00017a38u;
    rc_push32(c, m, (c->a[4] + 0x1392u));

L_17A3C:
    /* 00017a3c   4  pea (1396,A4) */
    c->pc = 0x00017a3cu;
    rc_push32(c, m, (c->a[4] + 0x1396u));

L_17A40:
    /* 00017a40   4  pea (00017aa4) */
    c->pc = 0x00017a40u;
    rc_push32(c, m, 0x00017aa4u);

L_17A44:
    /* 00017a44   4  jsr (ffff80b0,A4) */
    c->pc = 0x00017a44u;
    /* vector 29 */
    rc_push32(c, m, 0x00017a48u);
    rc_depth++;
    c->pc = 0x00009984u;
    return;

L_17A48:
    /* 00017a48   4  lea (c,A7),A7 */
    c->pc = 0x00017a48u;
    c->a[7] = (c->a[7] + 0xcu);

L_17A4C:
    /* 00017a4c   4  move.l D0,(138e,A4) */
    c->pc = 0x00017a4cu;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x138eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_17A50:
    /* 00017a50   4  pea (00017aae) */
    c->pc = 0x00017a50u;
    rc_push32(c, m, 0x00017aaeu);

L_17A54:
    /* 00017a54   4  jsr (ffff828a,A4) */
    c->pc = 0x00017a54u;
    /* vector 108 */
    rc_push32(c, m, 0x00017a58u);
    rc_depth++;
    c->pc = 0x000202c4u;
    return;

L_17A58:
    /* 00017a58   2  addq.w #4,A7 */
    c->pc = 0x00017a58u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_17A5A:
    /* 00017a5a   4  pea (00017210) */
    c->pc = 0x00017a5au;
    rc_push32(c, m, 0x00017210u);

L_17A5E:
    /* 00017a5e   4  pea (00017abc) */
    c->pc = 0x00017a5eu;
    rc_push32(c, m, 0x00017abcu);

L_17A62:
    /* 00017a62   2  clr.l -(A7) */
    c->pc = 0x00017a62u;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_17A64:
    /* 00017a64   4  pea (00017abb) */
    c->pc = 0x00017a64u;
    rc_push32(c, m, 0x00017abbu);

L_17A68:
    /* 00017a68   4  jsr (ffff8242,A4) */
    c->pc = 0x00017a68u;
    /* vector 96 */
    rc_push32(c, m, 0x00017a6cu);
    rc_depth++;
    c->pc = 0x0001eb94u;
    return;

L_17A6C:
    /* 00017a6c   4  lea (10,A7),A7 */
    c->pc = 0x00017a6cu;
    c->a[7] = (c->a[7] + 0x10u);

L_17A70:
    /* 00017a70   4  jsr (ffff8284,A4) */
    c->pc = 0x00017a70u;
    /* vector 107 */
    rc_push32(c, m, 0x00017a74u);
    rc_depth++;
    c->pc = 0x00020266u;
    return;

L_17A74:
    /* 00017a74   4  move.l (1392,A4),-(A7) */
    c->pc = 0x00017a74u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x1392u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17A78:
    /* 00017a78   4  move.l (138e,A4),-(A7) */
    c->pc = 0x00017a78u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x138eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17A7C:
    /* 00017a7c   4  jsr (ffff8344,A4) */
    c->pc = 0x00017a7cu;
    /* vector 139: exec.library -210 */
    c->pc = 0x00017a80u;
    rc_os_call(c, m, 0, -210);

L_17A80:
    /* 00017a80   2  addq.w #8,A7 */
    c->pc = 0x00017a80u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_17A82:
    /* 00017a82   2  clr.w -(A7) */
    c->pc = 0x00017a82u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17A84:
    /* 00017a84   4  jsr (ffff8044,A4) */
    c->pc = 0x00017a84u;
    /* vector 11 */
    rc_push32(c, m, 0x00017a88u);
    rc_depth++;
    c->pc = 0x00002c92u;
    return;

L_17A88:
    /* 00017a88   2  addq.w #2,A7 */
    c->pc = 0x00017a88u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_17A8A:
    /* 00017a8a   2  unlk A5 */
    c->pc = 0x00017a8au;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_17A8C:
    /* 00017a8c   2  rts */
    c->pc = 0x00017a8cu;
    rc_ret(c, m);
    return;

}
