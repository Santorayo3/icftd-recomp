/* fn_0001bb72 - 112 byte(s), 29 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001bb72(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x0001bb72u: goto L_1BB72;
    case 0x0001bb76u: goto L_1BB76;
    case 0x0001bb7au: goto L_1BB7A;
    case 0x0001bb7eu: goto L_1BB7E;
    case 0x0001bb82u: goto L_1BB82;
    case 0x0001bb86u: goto L_1BB86;
    case 0x0001bb88u: goto L_1BB88;
    case 0x0001bb8cu: goto L_1BB8C;
    case 0x0001bb90u: goto L_1BB90;
    case 0x0001bb96u: goto L_1BB96;
    case 0x0001bb9au: goto L_1BB9A;
    case 0x0001bba0u: goto L_1BBA0;
    case 0x0001bba4u: goto L_1BBA4;
    case 0x0001bba8u: goto L_1BBA8;
    case 0x0001bbacu: goto L_1BBAC;
    case 0x0001bbb0u: goto L_1BBB0;
    case 0x0001bbb4u: goto L_1BBB4;
    case 0x0001bbb8u: goto L_1BBB8;
    case 0x0001bbbcu: goto L_1BBBC;
    case 0x0001bbc0u: goto L_1BBC0;
    case 0x0001bbc4u: goto L_1BBC4;
    case 0x0001bbc8u: goto L_1BBC8;
    case 0x0001bbccu: goto L_1BBCC;
    case 0x0001bbd0u: goto L_1BBD0;
    case 0x0001bbd2u: goto L_1BBD2;
    case 0x0001bbd6u: goto L_1BBD6;
    case 0x0001bbdau: goto L_1BBDA;
    case 0x0001bbdeu: goto L_1BBDE;
    case 0x0001bbe0u: goto L_1BBE0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1BB72:
    /* 0001bb72   4  link.w A5,#0 */
    c->pc = 0x0001bb72u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1BB76:
    /* 0001bb76   4  move.l A4,(ffffce24,A4) */
    c->pc = 0x0001bb76u;
    t0 = rc_a_get(c, 4, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x31dcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BB7A:
    /* 0001bb7a   4  pea (00000001).l */
    c->pc = 0x0001bb7au;
    rc_push32(c, m, 0x00000001u);

L_1BB7E:
    /* 0001bb7e   4  pea (00000016).l */
    c->pc = 0x0001bb7eu;
    rc_push32(c, m, 0x00000016u);

L_1BB82:
    /* 0001bb82   4  jsr (ffff8338,A4) */
    c->pc = 0x0001bb82u;
    /* vector 137: exec.library -198 */
    c->pc = 0x0001bb86u;
    rc_os_call(c, m, 0, -198);

L_1BB86:
    /* 0001bb86   2  addq.w #8,A7 */
    c->pc = 0x0001bb86u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1BB88:
    /* 0001bb88   4  move.l D0,(2280,A4) */
    c->pc = 0x0001bb88u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2280u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BB8C:
    /* 0001bb8c   4  movea.l (2280,A4),A0 */
    c->pc = 0x0001bb8cu;
    t0 = rc_rd32(c, m, (c->a[4] + 0x2280u));
    c->a[0] = t0;

L_1BB90:
    /* 0001bb90   6  move.b #2,(8,A0) */
    c->pc = 0x0001bb90u;
    t0 = 0x00000002u;
    rc_wr8(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1BB96:
    /* 0001bb96   4  movea.l (2280,A4),A0 */
    c->pc = 0x0001bb96u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x2280u));
    c->a[0] = t0;

L_1BB9A:
    /* 0001bb9a   6  move.b #c4,(9,A0) */
    c->pc = 0x0001bb9au;
    t0 = 0x000000c4u;
    rc_wr8(c, m, (c->a[0] + 0x9u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1BBA0:
    /* 0001bba0   4  movea.l (2280,A4),A0 */
    c->pc = 0x0001bba0u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x2280u));
    c->a[0] = t0;

L_1BBA4:
    /* 0001bba4   4  lea (0001bbe2),A1 */
    c->pc = 0x0001bba4u;
    c->a[1] = 0x0001bbe2u;

L_1BBA8:
    /* 0001bba8   4  move.l A1,(a,A0) */
    c->pc = 0x0001bba8u;
    t0 = rc_a_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[0] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BBAC:
    /* 0001bbac   4  lea (ffffce24,A4),A0 */
    c->pc = 0x0001bbacu;
    c->a[0] = (c->a[4] - 0x31dcu);

L_1BBB0:
    /* 0001bbb0   4  movea.l (2280,A4),A1 */
    c->pc = 0x0001bbb0u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x2280u));
    c->a[1] = t0;

L_1BBB4:
    /* 0001bbb4   4  move.l A0,(e,A1) */
    c->pc = 0x0001bbb4u;
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BBB8:
    /* 0001bbb8   4  lea (0001bb5a),A0 */
    c->pc = 0x0001bbb8u;
    c->a[0] = 0x0001bb5au;

L_1BBBC:
    /* 0001bbbc   4  movea.l (2280,A4),A1 */
    c->pc = 0x0001bbbcu;
    t0 = rc_rd32(c, m, (c->a[4] + 0x2280u));
    c->a[1] = t0;

L_1BBC0:
    /* 0001bbc0   4  move.l A0,(12,A1) */
    c->pc = 0x0001bbc0u;
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BBC4:
    /* 0001bbc4   4  move.l (2280,A4),-(A7) */
    c->pc = 0x0001bbc4u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x2280u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BBC8:
    /* 0001bbc8   4  pea (00000005).l */
    c->pc = 0x0001bbc8u;
    rc_push32(c, m, 0x00000005u);

L_1BBCC:
    /* 0001bbcc   4  jsr (ffff832c,A4) */
    c->pc = 0x0001bbccu;
    /* vector 135: exec.library -168 */
    c->pc = 0x0001bbd0u;
    rc_os_call(c, m, 0, -168);

L_1BBD0:
    /* 0001bbd0   2  addq.w #8,A7 */
    c->pc = 0x0001bbd0u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1BBD2:
    /* 0001bbd2   4  clr.w (2288,A4) */
    c->pc = 0x0001bbd2u;
    rc_wr16(c, m, (c->a[4] + 0x2288u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BBD6:
    /* 0001bbd6   4  clr.w (2286,A4) */
    c->pc = 0x0001bbd6u;
    rc_wr16(c, m, (c->a[4] + 0x2286u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BBDA:
    /* 0001bbda   4  clr.w (2284,A4) */
    c->pc = 0x0001bbdau;
    rc_wr16(c, m, (c->a[4] + 0x2284u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BBDE:
    /* 0001bbde   2  unlk A5 */
    c->pc = 0x0001bbdeu;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1BBE0:
    /* 0001bbe0   2  rts */
    c->pc = 0x0001bbe0u;
    rc_ret(c, m);
    return;

}
