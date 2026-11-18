/* fn_00001d18 - 526 byte(s), 152 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00001d18(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00001d18u): goto L_1D18;
    case RC_ADDR(0x00001d1cu): goto L_1D1C;
    case RC_ADDR(0x00001d20u): goto L_1D20;
    case RC_ADDR(0x00001d22u): goto L_1D22;
    case RC_ADDR(0x00001d26u): goto L_1D26;
    case RC_ADDR(0x00001d28u): goto L_1D28;
    case RC_ADDR(0x00001d2au): goto L_1D2A;
    case RC_ADDR(0x00001d2cu): goto L_1D2C;
    case RC_ADDR(0x00001d2eu): goto L_1D2E;
    case RC_ADDR(0x00001d34u): goto L_1D34;
    case RC_ADDR(0x00001d3au): goto L_1D3A;
    case RC_ADDR(0x00001d40u): goto L_1D40;
    case RC_ADDR(0x00001d44u): goto L_1D44;
    case RC_ADDR(0x00001d48u): goto L_1D48;
    case RC_ADDR(0x00001d4cu): goto L_1D4C;
    case RC_ADDR(0x00001d50u): goto L_1D50;
    case RC_ADDR(0x00001d54u): goto L_1D54;
    case RC_ADDR(0x00001d58u): goto L_1D58;
    case RC_ADDR(0x00001d5au): goto L_1D5A;
    case RC_ADDR(0x00001d5eu): goto L_1D5E;
    case RC_ADDR(0x00001d62u): goto L_1D62;
    case RC_ADDR(0x00001d64u): goto L_1D64;
    case RC_ADDR(0x00001d68u): goto L_1D68;
    case RC_ADDR(0x00001d6eu): goto L_1D6E;
    case RC_ADDR(0x00001d70u): goto L_1D70;
    case RC_ADDR(0x00001d72u): goto L_1D72;
    case RC_ADDR(0x00001d74u): goto L_1D74;
    case RC_ADDR(0x00001d78u): goto L_1D78;
    case RC_ADDR(0x00001d7au): goto L_1D7A;
    case RC_ADDR(0x00001d80u): goto L_1D80;
    case RC_ADDR(0x00001d82u): goto L_1D82;
    case RC_ADDR(0x00001d86u): goto L_1D86;
    case RC_ADDR(0x00001d8au): goto L_1D8A;
    case RC_ADDR(0x00001d8cu): goto L_1D8C;
    case RC_ADDR(0x00001d8eu): goto L_1D8E;
    case RC_ADDR(0x00001d92u): goto L_1D92;
    case RC_ADDR(0x00001d94u): goto L_1D94;
    case RC_ADDR(0x00001d96u): goto L_1D96;
    case RC_ADDR(0x00001d9au): goto L_1D9A;
    case RC_ADDR(0x00001d9eu): goto L_1D9E;
    case RC_ADDR(0x00001da2u): goto L_1DA2;
    case RC_ADDR(0x00001da4u): goto L_1DA4;
    case RC_ADDR(0x00001daau): goto L_1DAA;
    case RC_ADDR(0x00001db0u): goto L_1DB0;
    case RC_ADDR(0x00001db2u): goto L_1DB2;
    case RC_ADDR(0x00001db6u): goto L_1DB6;
    case RC_ADDR(0x00001db8u): goto L_1DB8;
    case RC_ADDR(0x00001dbeu): goto L_1DBE;
    case RC_ADDR(0x00001dc0u): goto L_1DC0;
    case RC_ADDR(0x00001dc4u): goto L_1DC4;
    case RC_ADDR(0x00001dc6u): goto L_1DC6;
    case RC_ADDR(0x00001dc8u): goto L_1DC8;
    case RC_ADDR(0x00001dcau): goto L_1DCA;
    case RC_ADDR(0x00001dceu): goto L_1DCE;
    case RC_ADDR(0x00001dd2u): goto L_1DD2;
    case RC_ADDR(0x00001dd4u): goto L_1DD4;
    case RC_ADDR(0x00001dd8u): goto L_1DD8;
    case RC_ADDR(0x00001ddcu): goto L_1DDC;
    case RC_ADDR(0x00001de0u): goto L_1DE0;
    case RC_ADDR(0x00001de4u): goto L_1DE4;
    case RC_ADDR(0x00001de6u): goto L_1DE6;
    case RC_ADDR(0x00001deau): goto L_1DEA;
    case RC_ADDR(0x00001df0u): goto L_1DF0;
    case RC_ADDR(0x00001df2u): goto L_1DF2;
    case RC_ADDR(0x00001df6u): goto L_1DF6;
    case RC_ADDR(0x00001dfau): goto L_1DFA;
    case RC_ADDR(0x00001dfeu): goto L_1DFE;
    case RC_ADDR(0x00001e02u): goto L_1E02;
    case RC_ADDR(0x00001e04u): goto L_1E04;
    case RC_ADDR(0x00001e08u): goto L_1E08;
    case RC_ADDR(0x00001e0eu): goto L_1E0E;
    case RC_ADDR(0x00001e12u): goto L_1E12;
    case RC_ADDR(0x00001e16u): goto L_1E16;
    case RC_ADDR(0x00001e18u): goto L_1E18;
    case RC_ADDR(0x00001e1eu): goto L_1E1E;
    case RC_ADDR(0x00001e24u): goto L_1E24;
    case RC_ADDR(0x00001e26u): goto L_1E26;
    case RC_ADDR(0x00001e2au): goto L_1E2A;
    case RC_ADDR(0x00001e2eu): goto L_1E2E;
    case RC_ADDR(0x00001e34u): goto L_1E34;
    case RC_ADDR(0x00001e38u): goto L_1E38;
    case RC_ADDR(0x00001e3cu): goto L_1E3C;
    case RC_ADDR(0x00001e3eu): goto L_1E3E;
    case RC_ADDR(0x00001e42u): goto L_1E42;
    case RC_ADDR(0x00001e44u): goto L_1E44;
    case RC_ADDR(0x00001e4au): goto L_1E4A;
    case RC_ADDR(0x00001e50u): goto L_1E50;
    case RC_ADDR(0x00001e52u): goto L_1E52;
    case RC_ADDR(0x00001e56u): goto L_1E56;
    case RC_ADDR(0x00001e5au): goto L_1E5A;
    case RC_ADDR(0x00001e5cu): goto L_1E5C;
    case RC_ADDR(0x00001e60u): goto L_1E60;
    case RC_ADDR(0x00001e66u): goto L_1E66;
    case RC_ADDR(0x00001e68u): goto L_1E68;
    case RC_ADDR(0x00001e6au): goto L_1E6A;
    case RC_ADDR(0x00001e6eu): goto L_1E6E;
    case RC_ADDR(0x00001e72u): goto L_1E72;
    case RC_ADDR(0x00001e74u): goto L_1E74;
    case RC_ADDR(0x00001e78u): goto L_1E78;
    case RC_ADDR(0x00001e7au): goto L_1E7A;
    case RC_ADDR(0x00001e7cu): goto L_1E7C;
    case RC_ADDR(0x00001e82u): goto L_1E82;
    case RC_ADDR(0x00001e84u): goto L_1E84;
    case RC_ADDR(0x00001e88u): goto L_1E88;
    case RC_ADDR(0x00001e8eu): goto L_1E8E;
    case RC_ADDR(0x00001e90u): goto L_1E90;
    case RC_ADDR(0x00001e94u): goto L_1E94;
    case RC_ADDR(0x00001e96u): goto L_1E96;
    case RC_ADDR(0x00001e9au): goto L_1E9A;
    case RC_ADDR(0x00001e9cu): goto L_1E9C;
    case RC_ADDR(0x00001ea0u): goto L_1EA0;
    case RC_ADDR(0x00001ea2u): goto L_1EA2;
    case RC_ADDR(0x00001ea4u): goto L_1EA4;
    case RC_ADDR(0x00001ea6u): goto L_1EA6;
    case RC_ADDR(0x00001eaau): goto L_1EAA;
    case RC_ADDR(0x00001eaeu): goto L_1EAE;
    case RC_ADDR(0x00001eb0u): goto L_1EB0;
    case RC_ADDR(0x00001eb4u): goto L_1EB4;
    case RC_ADDR(0x00001eb6u): goto L_1EB6;
    case RC_ADDR(0x00001eb8u): goto L_1EB8;
    case RC_ADDR(0x00001ebcu): goto L_1EBC;
    case RC_ADDR(0x00001ec0u): goto L_1EC0;
    case RC_ADDR(0x00001ec4u): goto L_1EC4;
    case RC_ADDR(0x00001ec8u): goto L_1EC8;
    case RC_ADDR(0x00001ecau): goto L_1ECA;
    case RC_ADDR(0x00001eceu): goto L_1ECE;
    case RC_ADDR(0x00001ed0u): goto L_1ED0;
    case RC_ADDR(0x00001ed4u): goto L_1ED4;
    case RC_ADDR(0x00001ed6u): goto L_1ED6;
    case RC_ADDR(0x00001ed8u): goto L_1ED8;
    case RC_ADDR(0x00001edcu): goto L_1EDC;
    case RC_ADDR(0x00001ee0u): goto L_1EE0;
    case RC_ADDR(0x00001ee4u): goto L_1EE4;
    case RC_ADDR(0x00001ee8u): goto L_1EE8;
    case RC_ADDR(0x00001eeau): goto L_1EEA;
    case RC_ADDR(0x00001eeeu): goto L_1EEE;
    case RC_ADDR(0x00001ef0u): goto L_1EF0;
    case RC_ADDR(0x00001ef4u): goto L_1EF4;
    case RC_ADDR(0x00001ef6u): goto L_1EF6;
    case RC_ADDR(0x00001efau): goto L_1EFA;
    case RC_ADDR(0x00001efeu): goto L_1EFE;
    case RC_ADDR(0x00001f00u): goto L_1F00;
    case RC_ADDR(0x00001f04u): goto L_1F04;
    case RC_ADDR(0x00001f08u): goto L_1F08;
    case RC_ADDR(0x00001f0cu): goto L_1F0C;
    case RC_ADDR(0x00001f0eu): goto L_1F0E;
    case RC_ADDR(0x00001f12u): goto L_1F12;
    case RC_ADDR(0x00001f16u): goto L_1F16;
    case RC_ADDR(0x00001f18u): goto L_1F18;
    case RC_ADDR(0x00001f1au): goto L_1F1A;
    case RC_ADDR(0x00001f1eu): goto L_1F1E;
    case RC_ADDR(0x00001f22u): goto L_1F22;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D18:
    /* 00001d18   4  link.w A5,#ffffffec */
    c->pc = RC_ADDR(0x00001d18u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x14u;

L_1D1C:
    /* 00001d1c   4  tst.l (8,A5) */
    c->pc = RC_ADDR(0x00001d1cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_1D20:
    /* 00001d20   2  beq 00001d28 */
    c->pc = RC_ADDR(0x00001d20u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D28;

L_1D22:
    /* 00001d22   4  tst.l (fffff74c,A4) */
    c->pc = RC_ADDR(0x00001d22u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x8b4u));
    rc_set_nzvc(c, t0, RC_L);

L_1D26:
    /* 00001d26   2  bne 00001d2e */
    c->pc = RC_ADDR(0x00001d26u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1D2E;

L_1D28:
    /* 00001d28   2  moveq #ffffff9c,D0 */
    c->pc = RC_ADDR(0x00001d28u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffff9cu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D2A:
    /* 00001d2a   2  unlk A5 */
    c->pc = RC_ADDR(0x00001d2au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D2C:
    /* 00001d2c   2  rts */
    c->pc = RC_ADDR(0x00001d2cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1D2E:
    /* 00001d2e   6  move.w #ff9c,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001d2eu);
    rc_step(c, m, 16);
    t0 = 0x0000ff9cu;
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D34:
    /* 00001d34   6  move.w #1,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00001d34u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D3A:
    /* 00001d3a   6  move.w #3e8,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00001d3au);
    rc_step(c, m, 16);
    t0 = 0x000003e8u;
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D40:
    /* 00001d40   4  tst.l (8,A5) */
    c->pc = RC_ADDR(0x00001d40u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_1D44:
    /* 00001d44   4  beq 00001e38 */
    c->pc = RC_ADDR(0x00001d44u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E38;

L_1D48:
    /* 00001d48   4  tst.w (fffffff0,A5) */
    c->pc = RC_ADDR(0x00001d48u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_set_nzvc(c, t0, RC_W);

L_1D4C:
    /* 00001d4c   4  beq 00001e38 */
    c->pc = RC_ADDR(0x00001d4cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E38;

L_1D50:
    /* 00001d50   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00001d50u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D54:
    /* 00001d54   4  jsr (00001b22) */
    c->pc = RC_ADDR(0x00001d54u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001d58u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001b22u);
    return;

L_1D58:
    /* 00001d58   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00001d58u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D5A:
    /* 00001d5a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00001d5au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D5E:
    /* 00001d5e   4  jsr (00001be6) */
    c->pc = RC_ADDR(0x00001d5eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001d62u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001be6u);
    return;

L_1D62:
    /* 00001d62   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00001d62u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D64:
    /* 00001d64   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001d64u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D68:
    /* 00001d68   6  cmpi.w #ff9a,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001d68u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x0000ff9au);

L_1D6E:
    /* 00001d6e   2  bne 00001d74 */
    c->pc = RC_ADDR(0x00001d6eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1D74;

L_1D70:
    /* 00001d70   2  moveq #ffffff9a,D0 */
    c->pc = RC_ADDR(0x00001d70u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffff9au;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D72:
    /* 00001d72   2  bra 00001d2a */
    c->pc = RC_ADDR(0x00001d72u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1D2A;

L_1D74:
    /* 00001d74   4  tst.w (c,A5) */
    c->pc = RC_ADDR(0x00001d74u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_1D78:
    /* 00001d78   2  beq 00001daa */
    c->pc = RC_ADDR(0x00001d78u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1DAA;

L_1D7A:
    /* 00001d7a   6  cmpi.w #ffff,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001d7au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1D80:
    /* 00001d80   2  ble 00001daa */
    c->pc = RC_ADDR(0x00001d80u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1DAA;

L_1D82:
    /* 00001d82   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x00001d82u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D86:
    /* 00001d86   4  jsr (0000226a) */
    c->pc = RC_ADDR(0x00001d86u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001d8au));
    rc_depth++;
    c->pc = RC_ADDR(0x0000226au);
    return;

L_1D8A:
    /* 00001d8a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00001d8au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1D8C:
    /* 00001d8c   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00001d8cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D8E:
    /* 00001d8e   4  jsr (00001ca8) */
    c->pc = RC_ADDR(0x00001d8eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001d92u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001ca8u);
    return;

L_1D92:
    /* 00001d92   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00001d92u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D94:
    /* 00001d94   2  tst.w D0 */
    c->pc = RC_ADDR(0x00001d94u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1D96:
    /* 00001d96   4  beq 00001e2a */
    c->pc = RC_ADDR(0x00001d96u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E2A;

L_1D9A:
    /* 00001d9a   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x00001d9au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D9E:
    /* 00001d9e   4  cmp.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00001d9eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1DA2:
    /* 00001da2   2  bne 00001daa */
    c->pc = RC_ADDR(0x00001da2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1DAA;

L_1DA4:
    /* 00001da4   6  move.w #ff9c,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001da4u);
    rc_step(c, m, 16);
    t0 = 0x0000ff9cu;
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DAA:
    /* 00001daa   6  cmpi.w #ff9c,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001daau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x0000ff9cu);

L_1DB0:
    /* 00001db0   2  bne 00001db8 */
    c->pc = RC_ADDR(0x00001db0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1DB8;

L_1DB2:
    /* 00001db2   4  clr.w (fffffff0,A5) */
    c->pc = RC_ADDR(0x00001db2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x10u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DB6:
    /* 00001db6   2  bra 00001e2a */
    c->pc = RC_ADDR(0x00001db6u);
    rc_step(c, m, 10);
    goto L_1E2A;

L_1DB8:
    /* 00001db8   6  cmpi.w #ffff,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001db8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1DBE:
    /* 00001dbe   2  ble 00001e2a */
    c->pc = RC_ADDR(0x00001dbeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1E2A;

L_1DC0:
    /* 00001dc0   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00001dc0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DC4:
    /* 00001dc4   2  ext.l D0 */
    c->pc = RC_ADDR(0x00001dc4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1DC6:
    /* 00001dc6   2  moveq #1,D1 */
    c->pc = RC_ADDR(0x00001dc6u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000001u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1DC8:
    /* 00001dc8   2  asl.l D0,D1 */
    c->pc = RC_ADDR(0x00001dc8u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, (c->d[0] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_1DCA:
    /* 00001dca   4  move.l D1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00001dcau);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DCE:
    /* 00001dce   4  tst.w (ffff8d96,A4) */
    c->pc = RC_ADDR(0x00001dceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x726au));
    rc_set_nzvc(c, t0, RC_W);

L_1DD2:
    /* 00001dd2   2  beq 00001df2 */
    c->pc = RC_ADDR(0x00001dd2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1DF2;

L_1DD4:
    /* 00001dd4   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x00001dd4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DD8:
    /* 00001dd8   4  muls.w #222,D0 */
    c->pc = RC_ADDR(0x00001dd8u);
    rc_step(c, m, 42);
    t0 = 0x00000222u;
    rc_muls(c, 0, t0);

L_1DDC:
    /* 00001ddc   4  move.w (fffff78c,A4),D1 */
    c->pc = RC_ADDR(0x00001ddcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DE0:
    /* 00001de0   4  mulu.w #e,D1 */
    c->pc = RC_ADDR(0x00001de0u);
    rc_step(c, m, 42);
    t0 = 0x0000000eu;
    rc_mulu(c, 1, t0);

L_1DE4:
    /* 00001de4   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00001de4u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1DE6:
    /* 00001de6   4  lea (ffffd740,A4),A0 */
    c->pc = RC_ADDR(0x00001de6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x28c0u);

L_1DEA:
    /* 00001dea   6  move.l (0,A0,D0.w),(fffffff8,A5) */
    c->pc = RC_ADDR(0x00001deau);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DF0:
    /* 00001df0   2  bra 00001e0e */
    c->pc = RC_ADDR(0x00001df0u);
    rc_step(c, m, 10);
    goto L_1E0E;

L_1DF2:
    /* 00001df2   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x00001df2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DF6:
    /* 00001df6   4  muls.w #222,D0 */
    c->pc = RC_ADDR(0x00001df6u);
    rc_step(c, m, 42);
    t0 = 0x00000222u;
    rc_muls(c, 0, t0);

L_1DFA:
    /* 00001dfa   4  move.w (fffff78c,A4),D1 */
    c->pc = RC_ADDR(0x00001dfau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DFE:
    /* 00001dfe   4  mulu.w #e,D1 */
    c->pc = RC_ADDR(0x00001dfeu);
    rc_step(c, m, 42);
    t0 = 0x0000000eu;
    rc_mulu(c, 1, t0);

L_1E02:
    /* 00001e02   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00001e02u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1E04:
    /* 00001e04   4  lea (ffffd73c,A4),A0 */
    c->pc = RC_ADDR(0x00001e04u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x28c4u);

L_1E08:
    /* 00001e08   6  move.l (0,A0,D0.w),(fffffff8,A5) */
    c->pc = RC_ADDR(0x00001e08u);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E0E:
    /* 00001e0e   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00001e0eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E12:
    /* 00001e12   4  and.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00001e12u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    t2 = t0 & rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 0, RC_L, t2);

L_1E16:
    /* 00001e16   2  beq 00001e26 */
    c->pc = RC_ADDR(0x00001e16u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E26;

L_1E18:
    /* 00001e18   6  move.w (fffffff6,A5),(fffffff2,A5) */
    c->pc = RC_ADDR(0x00001e18u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E1E:
    /* 00001e1e   6  move.w #ff9c,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001e1eu);
    rc_step(c, m, 16);
    t0 = 0x0000ff9cu;
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E24:
    /* 00001e24   2  bra 00001e2a */
    c->pc = RC_ADDR(0x00001e24u);
    rc_step(c, m, 10);
    goto L_1E2A;

L_1E26:
    /* 00001e26   4  clr.w (fffffff0,A5) */
    c->pc = RC_ADDR(0x00001e26u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x10u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1E2A:
    /* 00001e2a   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00001e2au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1E2E:
    /* 00001e2e   6  move.l (e,A0),(8,A5) */
    c->pc = RC_ADDR(0x00001e2eu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0xeu));
    rc_wr32(c, m, (c->a[5] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E34:
    /* 00001e34   4  bra 00001d40 */
    c->pc = RC_ADDR(0x00001e34u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1D40;

L_1E38:
    /* 00001e38   4  tst.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00001e38u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_1E3C:
    /* 00001e3c   2  blt 00001e44 */
    c->pc = RC_ADDR(0x00001e3cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1E44;

L_1E3E:
    /* 00001e3e   4  tst.w (fffffff0,A5) */
    c->pc = RC_ADDR(0x00001e3eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_set_nzvc(c, t0, RC_W);

L_1E42:
    /* 00001e42   2  beq 00001e4a */
    c->pc = RC_ADDR(0x00001e42u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E4A;

L_1E44:
    /* 00001e44   6  move.w #ff9c,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001e44u);
    rc_step(c, m, 16);
    t0 = 0x0000ff9cu;
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E4A:
    /* 00001e4a   6  cmpi.w #ff9c,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001e4au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x0000ff9cu);

L_1E50:
    /* 00001e50   2  bne 00001e88 */
    c->pc = RC_ADDR(0x00001e50u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1E88;

L_1E52:
    /* 00001e52   4  pea (fffff748,A4) */
    c->pc = RC_ADDR(0x00001e52u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x8b8u));

L_1E56:
    /* 00001e56   4  jsr (00001a76) */
    c->pc = RC_ADDR(0x00001e56u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001e5au));
    rc_depth++;
    c->pc = RC_ADDR(0x00001a76u);
    return;

L_1E5A:
    /* 00001e5a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00001e5au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E5C:
    /* 00001e5c   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001e5cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E60:
    /* 00001e60   6  cmpi.w #ff9a,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001e60u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x0000ff9au);

L_1E66:
    /* 00001e66   2  bne 00001e6e */
    c->pc = RC_ADDR(0x00001e66u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1E6E;

L_1E68:
    /* 00001e68   2  moveq #ffffff9a,D0 */
    c->pc = RC_ADDR(0x00001e68u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffff9au;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1E6A:
    /* 00001e6a   4  bra 00001d2a */
    c->pc = RC_ADDR(0x00001e6au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1D2A;

L_1E6E:
    /* 00001e6e   4  tst.w (ffff8d96,A4) */
    c->pc = RC_ADDR(0x00001e6eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x726au));
    rc_set_nzvc(c, t0, RC_W);

L_1E72:
    /* 00001e72   2  beq 00001e88 */
    c->pc = RC_ADDR(0x00001e72u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E88;

L_1E74:
    /* 00001e74   4  jsr (00001cf8) */
    c->pc = RC_ADDR(0x00001e74u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001e78u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001cf8u);
    return;

L_1E78:
    /* 00001e78   2  tst.w D0 */
    c->pc = RC_ADDR(0x00001e78u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1E7A:
    /* 00001e7a   2  beq 00001e88 */
    c->pc = RC_ADDR(0x00001e7au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E88;

L_1E7C:
    /* 00001e7c   6  move.w #1,(ffff8460,A4) */
    c->pc = RC_ADDR(0x00001e7cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7ba0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E82:
    /* 00001e82   2  moveq #ffffff9b,D0 */
    c->pc = RC_ADDR(0x00001e82u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffff9bu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1E84:
    /* 00001e84   4  bra 00001d2a */
    c->pc = RC_ADDR(0x00001e84u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1D2A;

L_1E88:
    /* 00001e88   6  cmpi.w #ff9c,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001e88u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x0000ff9cu);

L_1E8E:
    /* 00001e8e   2  beq 00001ef6 */
    c->pc = RC_ADDR(0x00001e8eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1EF6;

L_1E90:
    /* 00001e90   4  tst.w (c,A5) */
    c->pc = RC_ADDR(0x00001e90u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_1E94:
    /* 00001e94   2  beq 00001ef6 */
    c->pc = RC_ADDR(0x00001e94u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1EF6;

L_1E96:
    /* 00001e96   4  tst.w (ffffd6f2,A4) */
    c->pc = RC_ADDR(0x00001e96u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x290eu));
    rc_set_nzvc(c, t0, RC_W);

L_1E9A:
    /* 00001e9a   2  bne 00001ef6 */
    c->pc = RC_ADDR(0x00001e9au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1EF6;

L_1E9C:
    /* 00001e9c   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00001e9cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EA0:
    /* 00001ea0   2  ext.l D0 */
    c->pc = RC_ADDR(0x00001ea0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1EA2:
    /* 00001ea2   2  moveq #1,D1 */
    c->pc = RC_ADDR(0x00001ea2u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000001u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1EA4:
    /* 00001ea4   2  asl.l D0,D1 */
    c->pc = RC_ADDR(0x00001ea4u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, (c->d[0] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_1EA6:
    /* 00001ea6   4  move.l D1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00001ea6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EAA:
    /* 00001eaa   4  tst.w (ffff8d96,A4) */
    c->pc = RC_ADDR(0x00001eaau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x726au));
    rc_set_nzvc(c, t0, RC_W);

L_1EAE:
    /* 00001eae   2  beq 00001ed8 */
    c->pc = RC_ADDR(0x00001eaeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1ED8;

L_1EB0:
    /* 00001eb0   4  jsr (00001cf8) */
    c->pc = RC_ADDR(0x00001eb0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001eb4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001cf8u);
    return;

L_1EB4:
    /* 00001eb4   2  tst.w D0 */
    c->pc = RC_ADDR(0x00001eb4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1EB6:
    /* 00001eb6   2  beq 00001ed6 */
    c->pc = RC_ADDR(0x00001eb6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1ED6;

L_1EB8:
    /* 00001eb8   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x00001eb8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EBC:
    /* 00001ebc   4  muls.w #222,D0 */
    c->pc = RC_ADDR(0x00001ebcu);
    rc_step(c, m, 42);
    t0 = 0x00000222u;
    rc_muls(c, 0, t0);

L_1EC0:
    /* 00001ec0   4  move.w (fffff78c,A4),D1 */
    c->pc = RC_ADDR(0x00001ec0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EC4:
    /* 00001ec4   4  mulu.w #e,D1 */
    c->pc = RC_ADDR(0x00001ec4u);
    rc_step(c, m, 42);
    t0 = 0x0000000eu;
    rc_mulu(c, 1, t0);

L_1EC8:
    /* 00001ec8   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00001ec8u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1ECA:
    /* 00001eca   4  lea (ffffd740,A4),A0 */
    c->pc = RC_ADDR(0x00001ecau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x28c0u);

L_1ECE:
    /* 00001ece   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x00001eceu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_1ED0:
    /* 00001ed0   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00001ed0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ED4:
    /* 00001ed4   2  or.l D0,(A0) */
    c->pc = RC_ADDR(0x00001ed4u);
    rc_step(c, m, 20);
    t3 = c->a[0];
    t1 = rc_rd32(c, m, t3);
    t2 = t1 | rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_L);

L_1ED6:
    /* 00001ed6   2  bra 00001ef6 */
    c->pc = RC_ADDR(0x00001ed6u);
    rc_step(c, m, 10);
    goto L_1EF6;

L_1ED8:
    /* 00001ed8   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x00001ed8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EDC:
    /* 00001edc   4  muls.w #222,D0 */
    c->pc = RC_ADDR(0x00001edcu);
    rc_step(c, m, 42);
    t0 = 0x00000222u;
    rc_muls(c, 0, t0);

L_1EE0:
    /* 00001ee0   4  move.w (fffff78c,A4),D1 */
    c->pc = RC_ADDR(0x00001ee0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EE4:
    /* 00001ee4   4  mulu.w #e,D1 */
    c->pc = RC_ADDR(0x00001ee4u);
    rc_step(c, m, 42);
    t0 = 0x0000000eu;
    rc_mulu(c, 1, t0);

L_1EE8:
    /* 00001ee8   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00001ee8u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1EEA:
    /* 00001eea   4  lea (ffffd73c,A4),A0 */
    c->pc = RC_ADDR(0x00001eeau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x28c4u);

L_1EEE:
    /* 00001eee   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x00001eeeu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_1EF0:
    /* 00001ef0   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00001ef0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EF4:
    /* 00001ef4   2  or.l D0,(A0) */
    c->pc = RC_ADDR(0x00001ef4u);
    rc_step(c, m, 20);
    t3 = c->a[0];
    t1 = rc_rd32(c, m, t3);
    t2 = t1 | rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_L);

L_1EF6:
    /* 00001ef6   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x00001ef6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EFA:
    /* 00001efa   4  jsr (0000226a) */
    c->pc = RC_ADDR(0x00001efau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001efeu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000226au);
    return;

L_1EFE:
    /* 00001efe   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00001efeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1F00:
    /* 00001f00   4  move.l D0,(ffffffec,A5) */
    c->pc = RC_ADDR(0x00001f00u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F04:
    /* 00001f04   4  movea.l (ffffffec,A5),A0 */
    c->pc = RC_ADDR(0x00001f04u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x14u));
    c->a[0] = t0;

L_1F08:
    /* 00001f08   4  tst.b (1,A0) */
    c->pc = RC_ADDR(0x00001f08u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x1u));
    rc_set_nzvc(c, t0, RC_B);

L_1F0C:
    /* 00001f0c   2  bne 00001f1e */
    c->pc = RC_ADDR(0x00001f0cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F1E;

L_1F0E:
    /* 00001f0e   4  movea.l (ffffffec,A5),A0 */
    c->pc = RC_ADDR(0x00001f0eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x14u));
    c->a[0] = t0;

L_1F12:
    /* 00001f12   4  tst.b (9,A0) */
    c->pc = RC_ADDR(0x00001f12u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x9u));
    rc_set_nzvc(c, t0, RC_B);

L_1F16:
    /* 00001f16   2  bne 00001f1e */
    c->pc = RC_ADDR(0x00001f16u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F1E;

L_1F18:
    /* 00001f18   2  moveq #ffffff9c,D0 */
    c->pc = RC_ADDR(0x00001f18u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffff9cu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F1A:
    /* 00001f1a   4  bra 00001d2a */
    c->pc = RC_ADDR(0x00001f1au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1D2A;

L_1F1E:
    /* 00001f1e   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00001f1eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F22:
    /* 00001f22   4  bra 00001d2a */
    c->pc = RC_ADDR(0x00001f22u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1D2A;

}
