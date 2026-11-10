/* fn_00004c5c - 90 byte(s), 27 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00004c5c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x00004c5cu: goto L_4C5C;
    case 0x00004c60u: goto L_4C60;
    case 0x00004c64u: goto L_4C64;
    case 0x00004c68u: goto L_4C68;
    case 0x00004c6au: goto L_4C6A;
    case 0x00004c6cu: goto L_4C6C;
    case 0x00004c6eu: goto L_4C6E;
    case 0x00004c70u: goto L_4C70;
    case 0x00004c74u: goto L_4C74;
    case 0x00004c78u: goto L_4C78;
    case 0x00004c7cu: goto L_4C7C;
    case 0x00004c80u: goto L_4C80;
    case 0x00004c82u: goto L_4C82;
    case 0x00004c86u: goto L_4C86;
    case 0x00004c8au: goto L_4C8A;
    case 0x00004c8cu: goto L_4C8C;
    case 0x00004c8eu: goto L_4C8E;
    case 0x00004c90u: goto L_4C90;
    case 0x00004c96u: goto L_4C96;
    case 0x00004c98u: goto L_4C98;
    case 0x00004c9cu: goto L_4C9C;
    case 0x00004ca0u: goto L_4CA0;
    case 0x00004ca6u: goto L_4CA6;
    case 0x00004caau: goto L_4CAA;
    case 0x00004cb0u: goto L_4CB0;
    case 0x00004cb2u: goto L_4CB2;
    case 0x00004cb4u: goto L_4CB4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_4C5C:
    /* 00004c5c   4  link.w A5,#fffffffe */
    c->pc = 0x00004c5cu;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_4C60:
    /* 00004c60   4  clr.w (fffffffe,A5) */
    c->pc = 0x00004c60u;
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4C64:
    /* 00004c64   4  move.w (fffffffe,A5),-(A7) */
    c->pc = 0x00004c64u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4C68:
    /* 00004c68   2  bsr 00004bee */
    c->pc = 0x00004c68u;
    rc_push32(c, m, 0x00004c6au);
    rc_depth++;
    c->pc = 0x00004beeu;
    return;

L_4C6A:
    /* 00004c6a   2  addq.w #2,A7 */
    c->pc = 0x00004c6au;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_4C6C:
    /* 00004c6c   2  tst.w D0 */
    c->pc = 0x00004c6cu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_4C6E:
    /* 00004c6e   2  beq 00004ca6 */
    c->pc = 0x00004c6eu;
    if (rc_cond(c, 7)) goto L_4CA6;

L_4C70:
    /* 00004c70   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x00004c70u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4C74:
    /* 00004c74   4  muls.w #12,D0 */
    c->pc = 0x00004c74u;
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_4C78:
    /* 00004c78   4  lea (ffff8588,A4),A0 */
    c->pc = 0x00004c78u;
    c->a[0] = (c->a[4] - 0x7a78u);

L_4C7C:
    /* 00004c7c   4  tst.b (0,A0,D0.w) */
    c->pc = 0x00004c7cu;
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_4C80:
    /* 00004c80   2  beq 00004ca6 */
    c->pc = 0x00004c80u;
    if (rc_cond(c, 7)) goto L_4CA6;

L_4C82:
    /* 00004c82   4  move.w #e9,-(A7) */
    c->pc = 0x00004c82u;
    t0 = 0x000000e9u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4C86:
    /* 00004c86   4  jsr (ffff8086,A4) */
    c->pc = 0x00004c86u;
    /* vector 22 */
    rc_push32(c, m, 0x00004c8au);
    rc_depth++;
    c->pc = 0x0000711cu;
    return;

L_4C8A:
    /* 00004c8a   2  addq.w #2,A7 */
    c->pc = 0x00004c8au;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_4C8C:
    /* 00004c8c   2  tst.w D0 */
    c->pc = 0x00004c8cu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_4C8E:
    /* 00004c8e   2  beq 00004ca6 */
    c->pc = 0x00004c8eu;
    if (rc_cond(c, 7)) goto L_4CA6;

L_4C90:
    /* 00004c90   6  cmpi.w #7,(ffff83c8,A4) */
    c->pc = 0x00004c90u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_4C96:
    /* 00004c96   2  bge 00004ca6 */
    c->pc = 0x00004c96u;
    if (rc_cond(c, 12)) goto L_4CA6;

L_4C98:
    /* 00004c98   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x00004c98u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4C9C:
    /* 00004c9c   4  lea (fffff19e,A4),A0 */
    c->pc = 0x00004c9cu;
    c->a[0] = (c->a[4] - 0xe62u);

L_4CA0:
    /* 00004ca0   6  move.b #1,(0,A0,D0.w) */
    c->pc = 0x00004ca0u;
    t0 = 0x00000001u;
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_4CA6:
    /* 00004ca6   4  addq.w #1,(fffffffe,A5) */
    c->pc = 0x00004ca6u;
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4CAA:
    /* 00004caa   6  cmpi.w #27,(fffffffe,A5) */
    c->pc = 0x00004caau;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000027u);

L_4CB0:
    /* 00004cb0   2  blt 00004c64 */
    c->pc = 0x00004cb0u;
    if (rc_cond(c, 13)) { rc_tick(); goto L_4C64; }

L_4CB2:
    /* 00004cb2   2  unlk A5 */
    c->pc = 0x00004cb2u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_4CB4:
    /* 00004cb4   2  rts */
    c->pc = 0x00004cb4u;
    rc_ret(c, m);
    return;

}
