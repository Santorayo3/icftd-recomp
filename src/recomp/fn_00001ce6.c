/* fn_00001ce6 - 512 byte(s), 143 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00001ce6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1;

    switch (c->pc)
    {
    case RC_ADDR(0x00001ce6u): goto L_1CE6;
    case RC_ADDR(0x00001cecu): goto L_1CEC;
    case RC_ADDR(0x00001ceeu): goto L_1CEE;
    case RC_ADDR(0x00001cf4u): goto L_1CF4;
    case RC_ADDR(0x00001cf8u): goto L_1CF8;
    case RC_ADDR(0x00001cfeu): goto L_1CFE;
    case RC_ADDR(0x00001d00u): goto L_1D00;
    case RC_ADDR(0x00001d04u): goto L_1D04;
    case RC_ADDR(0x00001d06u): goto L_1D06;
    case RC_ADDR(0x00001d0cu): goto L_1D0C;
    case RC_ADDR(0x00001d10u): goto L_1D10;
    case RC_ADDR(0x00001d14u): goto L_1D14;
    case RC_ADDR(0x00001d18u): goto L_1D18;
    case RC_ADDR(0x00001d1cu): goto L_1D1C;
    case RC_ADDR(0x00001d1eu): goto L_1D1E;
    case RC_ADDR(0x00001d22u): goto L_1D22;
    case RC_ADDR(0x00001d26u): goto L_1D26;
    case RC_ADDR(0x00001d2au): goto L_1D2A;
    case RC_ADDR(0x00001d30u): goto L_1D30;
    case RC_ADDR(0x00001d34u): goto L_1D34;
    case RC_ADDR(0x00001d3au): goto L_1D3A;
    case RC_ADDR(0x00001d3eu): goto L_1D3E;
    case RC_ADDR(0x00001d42u): goto L_1D42;
    case RC_ADDR(0x00001d46u): goto L_1D46;
    case RC_ADDR(0x00001d4au): goto L_1D4A;
    case RC_ADDR(0x00001d4cu): goto L_1D4C;
    case RC_ADDR(0x00001d4eu): goto L_1D4E;
    case RC_ADDR(0x00001d50u): goto L_1D50;
    case RC_ADDR(0x00001d54u): goto L_1D54;
    case RC_ADDR(0x00001d58u): goto L_1D58;
    case RC_ADDR(0x00001d5cu): goto L_1D5C;
    case RC_ADDR(0x00001d5eu): goto L_1D5E;
    case RC_ADDR(0x00001d60u): goto L_1D60;
    case RC_ADDR(0x00001d62u): goto L_1D62;
    case RC_ADDR(0x00001d66u): goto L_1D66;
    case RC_ADDR(0x00001d68u): goto L_1D68;
    case RC_ADDR(0x00001d6au): goto L_1D6A;
    case RC_ADDR(0x00001d6eu): goto L_1D6E;
    case RC_ADDR(0x00001d72u): goto L_1D72;
    case RC_ADDR(0x00001d76u): goto L_1D76;
    case RC_ADDR(0x00001d78u): goto L_1D78;
    case RC_ADDR(0x00001d7cu): goto L_1D7C;
    case RC_ADDR(0x00001d80u): goto L_1D80;
    case RC_ADDR(0x00001d84u): goto L_1D84;
    case RC_ADDR(0x00001d88u): goto L_1D88;
    case RC_ADDR(0x00001d8cu): goto L_1D8C;
    case RC_ADDR(0x00001d8eu): goto L_1D8E;
    case RC_ADDR(0x00001d92u): goto L_1D92;
    case RC_ADDR(0x00001d96u): goto L_1D96;
    case RC_ADDR(0x00001d98u): goto L_1D98;
    case RC_ADDR(0x00001d9cu): goto L_1D9C;
    case RC_ADDR(0x00001d9eu): goto L_1D9E;
    case RC_ADDR(0x00001da0u): goto L_1DA0;
    case RC_ADDR(0x00001da4u): goto L_1DA4;
    case RC_ADDR(0x00001da8u): goto L_1DA8;
    case RC_ADDR(0x00001daau): goto L_1DAA;
    case RC_ADDR(0x00001dacu): goto L_1DAC;
    case RC_ADDR(0x00001db0u): goto L_1DB0;
    case RC_ADDR(0x00001db2u): goto L_1DB2;
    case RC_ADDR(0x00001db6u): goto L_1DB6;
    case RC_ADDR(0x00001dbau): goto L_1DBA;
    case RC_ADDR(0x00001dbeu): goto L_1DBE;
    case RC_ADDR(0x00001dc0u): goto L_1DC0;
    case RC_ADDR(0x00001dc4u): goto L_1DC4;
    case RC_ADDR(0x00001dc8u): goto L_1DC8;
    case RC_ADDR(0x00001dcau): goto L_1DCA;
    case RC_ADDR(0x00001dceu): goto L_1DCE;
    case RC_ADDR(0x00001dd4u): goto L_1DD4;
    case RC_ADDR(0x00001dd6u): goto L_1DD6;
    case RC_ADDR(0x00001ddcu): goto L_1DDC;
    case RC_ADDR(0x00001ddeu): goto L_1DDE;
    case RC_ADDR(0x00001de2u): goto L_1DE2;
    case RC_ADDR(0x00001de6u): goto L_1DE6;
    case RC_ADDR(0x00001deau): goto L_1DEA;
    case RC_ADDR(0x00001decu): goto L_1DEC;
    case RC_ADDR(0x00001df0u): goto L_1DF0;
    case RC_ADDR(0x00001df2u): goto L_1DF2;
    case RC_ADDR(0x00001df6u): goto L_1DF6;
    case RC_ADDR(0x00001dfcu): goto L_1DFC;
    case RC_ADDR(0x00001dfeu): goto L_1DFE;
    case RC_ADDR(0x00001e02u): goto L_1E02;
    case RC_ADDR(0x00001e06u): goto L_1E06;
    case RC_ADDR(0x00001e0cu): goto L_1E0C;
    case RC_ADDR(0x00001e0eu): goto L_1E0E;
    case RC_ADDR(0x00001e14u): goto L_1E14;
    case RC_ADDR(0x00001e16u): goto L_1E16;
    case RC_ADDR(0x00001e1cu): goto L_1E1C;
    case RC_ADDR(0x00001e1eu): goto L_1E1E;
    case RC_ADDR(0x00001e24u): goto L_1E24;
    case RC_ADDR(0x00001e26u): goto L_1E26;
    case RC_ADDR(0x00001e2au): goto L_1E2A;
    case RC_ADDR(0x00001e2cu): goto L_1E2C;
    case RC_ADDR(0x00001e30u): goto L_1E30;
    case RC_ADDR(0x00001e32u): goto L_1E32;
    case RC_ADDR(0x00001e38u): goto L_1E38;
    case RC_ADDR(0x00001e3au): goto L_1E3A;
    case RC_ADDR(0x00001e3eu): goto L_1E3E;
    case RC_ADDR(0x00001e42u): goto L_1E42;
    case RC_ADDR(0x00001e44u): goto L_1E44;
    case RC_ADDR(0x00001e4au): goto L_1E4A;
    case RC_ADDR(0x00001e4eu): goto L_1E4E;
    case RC_ADDR(0x00001e54u): goto L_1E54;
    case RC_ADDR(0x00001e56u): goto L_1E56;
    case RC_ADDR(0x00001e5cu): goto L_1E5C;
    case RC_ADDR(0x00001e5eu): goto L_1E5E;
    case RC_ADDR(0x00001e62u): goto L_1E62;
    case RC_ADDR(0x00001e64u): goto L_1E64;
    case RC_ADDR(0x00001e68u): goto L_1E68;
    case RC_ADDR(0x00001e6cu): goto L_1E6C;
    case RC_ADDR(0x00001e70u): goto L_1E70;
    case RC_ADDR(0x00001e72u): goto L_1E72;
    case RC_ADDR(0x00001e76u): goto L_1E76;
    case RC_ADDR(0x00001e7au): goto L_1E7A;
    case RC_ADDR(0x00001e7cu): goto L_1E7C;
    case RC_ADDR(0x00001e80u): goto L_1E80;
    case RC_ADDR(0x00001e84u): goto L_1E84;
    case RC_ADDR(0x00001e88u): goto L_1E88;
    case RC_ADDR(0x00001e8au): goto L_1E8A;
    case RC_ADDR(0x00001e90u): goto L_1E90;
    case RC_ADDR(0x00001e92u): goto L_1E92;
    case RC_ADDR(0x00001e98u): goto L_1E98;
    case RC_ADDR(0x00001e9au): goto L_1E9A;
    case RC_ADDR(0x00001e9eu): goto L_1E9E;
    case RC_ADDR(0x00001ea2u): goto L_1EA2;
    case RC_ADDR(0x00001ea8u): goto L_1EA8;
    case RC_ADDR(0x00001eaau): goto L_1EAA;
    case RC_ADDR(0x00001eaeu): goto L_1EAE;
    case RC_ADDR(0x00001eb2u): goto L_1EB2;
    case RC_ADDR(0x00001eb4u): goto L_1EB4;
    case RC_ADDR(0x00001eb6u): goto L_1EB6;
    case RC_ADDR(0x00001eb8u): goto L_1EB8;
    case RC_ADDR(0x00001ebcu): goto L_1EBC;
    case RC_ADDR(0x00001ebeu): goto L_1EBE;
    case RC_ADDR(0x00001ec2u): goto L_1EC2;
    case RC_ADDR(0x00001ec6u): goto L_1EC6;
    case RC_ADDR(0x00001ecau): goto L_1ECA;
    case RC_ADDR(0x00001eccu): goto L_1ECC;
    case RC_ADDR(0x00001ed0u): goto L_1ED0;
    case RC_ADDR(0x00001ed4u): goto L_1ED4;
    case RC_ADDR(0x00001ed6u): goto L_1ED6;
    case RC_ADDR(0x00001edau): goto L_1EDA;
    case RC_ADDR(0x00001edcu): goto L_1EDC;
    case RC_ADDR(0x00001ee2u): goto L_1EE2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1CE6:
    /* 00001ce6   6  cmpi.w #ff9c,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001ce6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x0000ff9cu);

L_1CEC:
    /* 00001cec   2  bne 00001d18 */
    c->pc = RC_ADDR(0x00001cecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1D18;

L_1CEE:
    /* 00001cee   6  cmpi.w #19,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x00001ceeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000019u);

L_1CF4:
    /* 00001cf4   4  beq 00001dce */
    c->pc = RC_ADDR(0x00001cf4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1DCE;

L_1CF8:
    /* 00001cf8   6  cmpi.w #14,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x00001cf8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000014u);

L_1CFE:
    /* 00001cfe   2  bne 00001d10 */
    c->pc = RC_ADDR(0x00001cfeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1D10;

L_1D00:
    /* 00001d00   4  tst.w (ffff851c,A4) */
    c->pc = RC_ADDR(0x00001d00u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7ae4u));
    rc_set_nzvc(c, t0, RC_W);

L_1D04:
    /* 00001d04   2  beq 00001d10 */
    c->pc = RC_ADDR(0x00001d04u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D10;

L_1D06:
    /* 00001d06   6  move.w #1,(ffff8402,A4) */
    c->pc = RC_ADDR(0x00001d06u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7bfeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D0C:
    /* 00001d0c   4  bra 00001dce */
    c->pc = RC_ADDR(0x00001d0cu);
    rc_step(c, m, 10);
    goto L_1DCE;

L_1D10:
    /* 00001d10   4  jsr (ffff803e,A4) */
    c->pc = RC_ADDR(0x00001d10u);
    rc_step(c, m, 18);
    /* vector 10 */
    rc_push32(c, m, RC_ADDR(0x00001d14u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a94u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000023d8u);
    return;

L_1D14:
    /* 00001d14   4  bra 00001dba */
    c->pc = RC_ADDR(0x00001d14u);
    rc_step(c, m, 10);
    goto L_1DBA;

L_1D18:
    /* 00001d18   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00001d18u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_1D1C:
    /* 00001d1c   2  beq 00001d2a */
    c->pc = RC_ADDR(0x00001d1cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D2A;

L_1D1E:
    /* 00001d1e   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00001d1eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D22:
    /* 00001d22   4  jsr (ffff8110,A4) */
    c->pc = RC_ADDR(0x00001d22u);
    rc_step(c, m, 18);
    /* vector 45 */
    rc_push32(c, m, RC_ADDR(0x00001d26u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b66u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ec8au);
    return;

L_1D26:
    /* 00001d26   4  jsr (ffff821e,A4) */
    c->pc = RC_ADDR(0x00001d26u);
    rc_step(c, m, 18);
    /* vector 90 */
    rc_push32(c, m, RC_ADDR(0x00001d2au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c74u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d778u);
    return;

L_1D2A:
    /* 00001d2a   6  cmpi.w #ffff,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001d2au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1D30:
    /* 00001d30   4  ble 00001dba */
    c->pc = RC_ADDR(0x00001d30u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1DBA;

L_1D34:
    /* 00001d34   6  move.w (ffffefe4,A4),(ffff83d4,A4) */
    c->pc = RC_ADDR(0x00001d34u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_wr16(c, m, (c->a[4] - 0x7c2cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D3A:
    /* 00001d3a   4  jsr (000033f4) */
    c->pc = RC_ADDR(0x00001d3au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001d3eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000033f4u);
    return;

L_1D3E:
    /* 00001d3e   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x00001d3eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D42:
    /* 00001d42   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00001d42u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D46:
    /* 00001d46   4  jsr (00005824) */
    c->pc = RC_ADDR(0x00001d46u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001d4au));
    rc_depth++;
    c->pc = RC_ADDR(0x00005824u);
    return;

L_1D4A:
    /* 00001d4a   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00001d4au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1D4C:
    /* 00001d4c   2  tst.w D0 */
    c->pc = RC_ADDR(0x00001d4cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1D4E:
    /* 00001d4e   2  bne 00001d6a */
    c->pc = RC_ADDR(0x00001d4eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1D6A;

L_1D50:
    /* 00001d50   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00001d50u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D54:
    /* 00001d54   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00001d54u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D58:
    /* 00001d58   4  jsr (00003264) */
    c->pc = RC_ADDR(0x00001d58u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001d5cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00003264u);
    return;

L_1D5C:
    /* 00001d5c   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00001d5cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1D5E:
    /* 00001d5e   2  tst.w D0 */
    c->pc = RC_ADDR(0x00001d5eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1D60:
    /* 00001d60   2  beq 00001dce */
    c->pc = RC_ADDR(0x00001d60u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1DCE;

L_1D62:
    /* 00001d62   4  tst.w (ffffce2c,A4) */
    c->pc = RC_ADDR(0x00001d62u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31d4u));
    rc_set_nzvc(c, t0, RC_W);

L_1D66:
    /* 00001d66   2  bne 00001dce */
    c->pc = RC_ADDR(0x00001d66u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1DCE;

L_1D68:
    /* 00001d68   2  bra 00001d9e */
    c->pc = RC_ADDR(0x00001d68u);
    rc_step(c, m, 10);
    goto L_1D9E;

L_1D6A:
    /* 00001d6a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00001d6au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D6E:
    /* 00001d6e   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x00001d6eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D72:
    /* 00001d72   4  jsr (000022ba) */
    c->pc = RC_ADDR(0x00001d72u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001d76u));
    rc_depth++;
    c->pc = RC_ADDR(0x000022bau);
    return;

L_1D76:
    /* 00001d76   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00001d76u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1D78:
    /* 00001d78   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001d78u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D7C:
    /* 00001d7c   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00001d7cu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D80:
    /* 00001d80   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x00001d80u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D84:
    /* 00001d84   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00001d84u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D88:
    /* 00001d88   4  jsr (00002cc8) */
    c->pc = RC_ADDR(0x00001d88u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001d8cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00002cc8u);
    return;

L_1D8C:
    /* 00001d8c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00001d8cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D8E:
    /* 00001d8e   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001d8eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D92:
    /* 00001d92   4  tst.w (ffffce2c,A4) */
    c->pc = RC_ADDR(0x00001d92u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31d4u));
    rc_set_nzvc(c, t0, RC_W);

L_1D96:
    /* 00001d96   2  bne 00001dce */
    c->pc = RC_ADDR(0x00001d96u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1DCE;

L_1D98:
    /* 00001d98   4  tst.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00001d98u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_1D9C:
    /* 00001d9c   2  blt 00001dce */
    c->pc = RC_ADDR(0x00001d9cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1DCE;

L_1D9E:
    /* 00001d9e   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00001d9eu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DA0:
    /* 00001da0   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x00001da0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DA4:
    /* 00001da4   4  jsr (00001f44) */
    c->pc = RC_ADDR(0x00001da4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001da8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001f44u);
    return;

L_1DA8:
    /* 00001da8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00001da8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1DAA:
    /* 00001daa   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00001daau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DAC:
    /* 00001dac   4  jsr (00001974) */
    c->pc = RC_ADDR(0x00001dacu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001db0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001974u);
    return;

L_1DB0:
    /* 00001db0   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00001db0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1DB2:
    /* 00001db2   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001db2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DB6:
    /* 00001db6   4  bra 00001d2a */
    c->pc = RC_ADDR(0x00001db6u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1D2A;

L_1DBA:
    /* 00001dba   4  tst.w (ffff8b54,A4) */
    c->pc = RC_ADDR(0x00001dbau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x74acu));
    rc_set_nzvc(c, t0, RC_W);

L_1DBE:
    /* 00001dbe   2  beq 00001dce */
    c->pc = RC_ADDR(0x00001dbeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1DCE;

L_1DC0:
    /* 00001dc0   4  move.w (ffffefe4,A4),D0 */
    c->pc = RC_ADDR(0x00001dc0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DC4:
    /* 00001dc4   4  cmp.w (ffff83d4,A4),D0 */
    c->pc = RC_ADDR(0x00001dc4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c2cu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1DC8:
    /* 00001dc8   2  bne 00001dce */
    c->pc = RC_ADDR(0x00001dc8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1DCE;

L_1DCA:
    /* 00001dca   4  jsr (00001b68) */
    c->pc = RC_ADDR(0x00001dcau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001dceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00001b68u);
    return;

L_1DCE:
    /* 00001dce   6  cmpi.w #22,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x00001dceu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000022u);

L_1DD4:
    /* 00001dd4   2  bcs 00001dde */
    c->pc = RC_ADDR(0x00001dd4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) goto L_1DDE;

L_1DD6:
    /* 00001dd6   6  cmpi.w #25,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x00001dd6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000025u);

L_1DDC:
    /* 00001ddc   2  bls 00001dec */
    c->pc = RC_ADDR(0x00001ddcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_1DEC;

L_1DDE:
    /* 00001dde   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00001ddeu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DE2:
    /* 00001de2   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00001de2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DE6:
    /* 00001de6   4  jsr (00005eac) */
    c->pc = RC_ADDR(0x00001de6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001deau));
    rc_depth++;
    c->pc = RC_ADDR(0x00005eacu);
    return;

L_1DEA:
    /* 00001dea   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00001deau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1DEC:
    /* 00001dec   4  tst.w (ffff8532,A4) */
    c->pc = RC_ADDR(0x00001decu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7aceu));
    rc_set_nzvc(c, t0, RC_W);

L_1DF0:
    /* 00001df0   2  beq 00001e16 */
    c->pc = RC_ADDR(0x00001df0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E16;

L_1DF2:
    /* 00001df2   4  clr.w (ffff8532,A4) */
    c->pc = RC_ADDR(0x00001df2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7aceu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DF6:
    /* 00001df6   6  cmpi.w #5,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x00001df6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_1DFC:
    /* 00001dfc   2  bcc 00001e0e */
    c->pc = RC_ADDR(0x00001dfcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_1E0E;

L_1DFE:
    /* 00001dfe   4  jsr (ffff803e,A4) */
    c->pc = RC_ADDR(0x00001dfeu);
    rc_step(c, m, 18);
    /* vector 10 */
    rc_push32(c, m, RC_ADDR(0x00001e02u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a94u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000023d8u);
    return;

L_1E02:
    /* 00001e02   4  jsr (00001b68) */
    c->pc = RC_ADDR(0x00001e02u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001e06u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001b68u);
    return;

L_1E06:
    /* 00001e06   6  move.b #80,(fffff0ba,A4) */
    c->pc = RC_ADDR(0x00001e06u);
    rc_step(c, m, 16);
    t0 = 0x00000080u;
    rc_wr8(c, m, (c->a[4] - 0xf46u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1E0C:
    /* 00001e0c   2  bra 00001e14 */
    c->pc = RC_ADDR(0x00001e0cu);
    rc_step(c, m, 10);
    goto L_1E14;

L_1E0E:
    /* 00001e0e   6  move.w #1,(ffff83d6,A4) */
    c->pc = RC_ADDR(0x00001e0eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c2au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E14:
    /* 00001e14   2  bra 00001e4a */
    c->pc = RC_ADDR(0x00001e14u);
    rc_step(c, m, 10);
    goto L_1E4A;

L_1E16:
    /* 00001e16   6  cmpi.w #5,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x00001e16u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_1E1C:
    /* 00001e1c   2  bcs 00001e26 */
    c->pc = RC_ADDR(0x00001e1cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) goto L_1E26;

L_1E1E:
    /* 00001e1e   6  cmpi.w #f,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x00001e1eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x0000000fu);

L_1E24:
    /* 00001e24   2  bne 00001e4a */
    c->pc = RC_ADDR(0x00001e24u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1E4A;

L_1E26:
    /* 00001e26   4  tst.w (ffff83d6,A4) */
    c->pc = RC_ADDR(0x00001e26u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c2au));
    rc_set_nzvc(c, t0, RC_W);

L_1E2A:
    /* 00001e2a   2  bne 00001e3a */
    c->pc = RC_ADDR(0x00001e2au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1E3A;

L_1E2C:
    /* 00001e2c   4  tst.w (ffff8b54,A4) */
    c->pc = RC_ADDR(0x00001e2cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x74acu));
    rc_set_nzvc(c, t0, RC_W);

L_1E30:
    /* 00001e30   2  bne 00001e3a */
    c->pc = RC_ADDR(0x00001e30u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1E3A;

L_1E32:
    /* 00001e32   6  move.w #b,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x00001e32u);
    rc_step(c, m, 16);
    t0 = 0x0000000bu;
    rc_wr16(c, m, (c->a[4] - 0x101cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E38:
    /* 00001e38   2  bra 00001e4a */
    c->pc = RC_ADDR(0x00001e38u);
    rc_step(c, m, 10);
    goto L_1E4A;

L_1E3A:
    /* 00001e3a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00001e3au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E3E:
    /* 00001e3e   4  jsr (ffff8056,A4) */
    c->pc = RC_ADDR(0x00001e3eu);
    rc_step(c, m, 18);
    /* vector 14 */
    rc_push32(c, m, RC_ADDR(0x00001e42u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021aacu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000353eu);
    return;

L_1E42:
    /* 00001e42   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00001e42u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E44:
    /* 00001e44   6  move.w #1,(ffff8534,A4) */
    c->pc = RC_ADDR(0x00001e44u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7accu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E4A:
    /* 00001e4a   4  bra 00001c02 */
    c->pc = RC_ADDR(0x00001e4au);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00001c02u);
    return;

L_1E4E:
    /* 00001e4e   6  cmpi.w #21,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x00001e4eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000021u);

L_1E54:
    /* 00001e54   2  bls 00001e8a */
    c->pc = RC_ADDR(0x00001e54u);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_1E8A;

L_1E56:
    /* 00001e56   6  cmpi.w #26,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x00001e56u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000026u);

L_1E5C:
    /* 00001e5c   2  bcc 00001e8a */
    c->pc = RC_ADDR(0x00001e5cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_1E8A;

L_1E5E:
    /* 00001e5e   4  tst.w (ffff8518,A4) */
    c->pc = RC_ADDR(0x00001e5eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7ae8u));
    rc_set_nzvc(c, t0, RC_W);

L_1E62:
    /* 00001e62   2  bne 00001e8a */
    c->pc = RC_ADDR(0x00001e62u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1E8A;

L_1E64:
    /* 00001e64   4  move.w #ffff,-(A7) */
    c->pc = RC_ADDR(0x00001e64u);
    rc_step(c, m, 12);
    t0 = 0x0000ffffu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E68:
    /* 00001e68   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00001e68u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E6C:
    /* 00001e6c   4  jsr (00005824) */
    c->pc = RC_ADDR(0x00001e6cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001e70u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005824u);
    return;

L_1E70:
    /* 00001e70   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00001e70u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1E72:
    /* 00001e72   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00001e72u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E76:
    /* 00001e76   4  jsr (00002b7c) */
    c->pc = RC_ADDR(0x00001e76u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001e7au));
    rc_depth++;
    c->pc = RC_ADDR(0x00002b7cu);
    return;

L_1E7A:
    /* 00001e7a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00001e7au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E7C:
    /* 00001e7c   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00001e7cu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E80:
    /* 00001e80   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00001e80u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E84:
    /* 00001e84   4  jsr (00005eac) */
    c->pc = RC_ADDR(0x00001e84u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001e88u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005eacu);
    return;

L_1E88:
    /* 00001e88   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00001e88u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1E8A:
    /* 00001e8a   6  cmpi.w #b,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x00001e8au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x0000000bu);

L_1E90:
    /* 00001e90   2  bne 00001ea2 */
    c->pc = RC_ADDR(0x00001e90u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1EA2;

L_1E92:
    /* 00001e92   6  cmpi.w #5,(ffff83d4,A4) */
    c->pc = RC_ADDR(0x00001e92u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c2cu));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_1E98:
    /* 00001e98   2  bcc 00001ea2 */
    c->pc = RC_ADDR(0x00001e98u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_1EA2;

L_1E9A:
    /* 00001e9a   4  clr.w (ffff83d6,A4) */
    c->pc = RC_ADDR(0x00001e9au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c2au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1E9E:
    /* 00001e9e   4  clr.w (ffff8b54,A4) */
    c->pc = RC_ADDR(0x00001e9eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x74acu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1EA2:
    /* 00001ea2   6  cmpi.w #19,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x00001ea2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000019u);

L_1EA8:
    /* 00001ea8   2  bne 00001ed6 */
    c->pc = RC_ADDR(0x00001ea8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1ED6;

L_1EAA:
    /* 00001eaa   4  move.w #35,-(A7) */
    c->pc = RC_ADDR(0x00001eaau);
    rc_step(c, m, 12);
    t0 = 0x00000035u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EAE:
    /* 00001eae   4  jsr (ffff8086,A4) */
    c->pc = RC_ADDR(0x00001eaeu);
    rc_step(c, m, 18);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x00001eb2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021adcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000711cu);
    return;

L_1EB2:
    /* 00001eb2   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00001eb2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1EB4:
    /* 00001eb4   2  tst.w D0 */
    c->pc = RC_ADDR(0x00001eb4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1EB6:
    /* 00001eb6   2  bne 00001ed6 */
    c->pc = RC_ADDR(0x00001eb6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1ED6;

L_1EB8:
    /* 00001eb8   4  tst.w (ffff851a,A4) */
    c->pc = RC_ADDR(0x00001eb8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7ae6u));
    rc_set_nzvc(c, t0, RC_W);

L_1EBC:
    /* 00001ebc   2  bne 00001ed6 */
    c->pc = RC_ADDR(0x00001ebcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1ED6;

L_1EBE:
    /* 00001ebe   4  move.w #ffff,-(A7) */
    c->pc = RC_ADDR(0x00001ebeu);
    rc_step(c, m, 12);
    t0 = 0x0000ffffu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EC2:
    /* 00001ec2   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00001ec2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EC6:
    /* 00001ec6   4  jsr (00005824) */
    c->pc = RC_ADDR(0x00001ec6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001ecau));
    rc_depth++;
    c->pc = RC_ADDR(0x00005824u);
    return;

L_1ECA:
    /* 00001eca   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00001ecau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1ECC:
    /* 00001ecc   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00001eccu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ED0:
    /* 00001ed0   4  jsr (000092fe) */
    c->pc = RC_ADDR(0x00001ed0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001ed4u));
    rc_depth++;
    c->pc = RC_ADDR(0x000092feu);
    return;

L_1ED4:
    /* 00001ed4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00001ed4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1ED6:
    /* 00001ed6   4  tst.w (ffffce2c,A4) */
    c->pc = RC_ADDR(0x00001ed6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31d4u));
    rc_set_nzvc(c, t0, RC_W);

L_1EDA:
    /* 00001eda   2  beq 00001ee2 */
    c->pc = RC_ADDR(0x00001edau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1EE2;

L_1EDC:
    /* 00001edc   6  move.w #1,(ffff83d6,A4) */
    c->pc = RC_ADDR(0x00001edcu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c2au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EE2:
    /* 00001ee2   4  bra 00001ce2 */
    c->pc = RC_ADDR(0x00001ee2u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00001ce2u);
    return;

}
