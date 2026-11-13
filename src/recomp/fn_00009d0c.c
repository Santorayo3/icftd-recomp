/* fn_00009d0c - 406 byte(s), 112 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00009d0c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00009d0cu): goto L_9D0C;
    case RC_ADDR(0x00009d10u): goto L_9D10;
    case RC_ADDR(0x00009d16u): goto L_9D16;
    case RC_ADDR(0x00009d1au): goto L_9D1A;
    case RC_ADDR(0x00009d1eu): goto L_9D1E;
    case RC_ADDR(0x00009d20u): goto L_9D20;
    case RC_ADDR(0x00009d24u): goto L_9D24;
    case RC_ADDR(0x00009d28u): goto L_9D28;
    case RC_ADDR(0x00009d2cu): goto L_9D2C;
    case RC_ADDR(0x00009d30u): goto L_9D30;
    case RC_ADDR(0x00009d34u): goto L_9D34;
    case RC_ADDR(0x00009d38u): goto L_9D38;
    case RC_ADDR(0x00009d3cu): goto L_9D3C;
    case RC_ADDR(0x00009d40u): goto L_9D40;
    case RC_ADDR(0x00009d44u): goto L_9D44;
    case RC_ADDR(0x00009d48u): goto L_9D48;
    case RC_ADDR(0x00009d4eu): goto L_9D4E;
    case RC_ADDR(0x00009d50u): goto L_9D50;
    case RC_ADDR(0x00009d54u): goto L_9D54;
    case RC_ADDR(0x00009d58u): goto L_9D58;
    case RC_ADDR(0x00009d5eu): goto L_9D5E;
    case RC_ADDR(0x00009d62u): goto L_9D62;
    case RC_ADDR(0x00009d66u): goto L_9D66;
    case RC_ADDR(0x00009d6au): goto L_9D6A;
    case RC_ADDR(0x00009d6eu): goto L_9D6E;
    case RC_ADDR(0x00009d72u): goto L_9D72;
    case RC_ADDR(0x00009d76u): goto L_9D76;
    case RC_ADDR(0x00009d7au): goto L_9D7A;
    case RC_ADDR(0x00009d7eu): goto L_9D7E;
    case RC_ADDR(0x00009d82u): goto L_9D82;
    case RC_ADDR(0x00009d86u): goto L_9D86;
    case RC_ADDR(0x00009d8au): goto L_9D8A;
    case RC_ADDR(0x00009d8eu): goto L_9D8E;
    case RC_ADDR(0x00009d92u): goto L_9D92;
    case RC_ADDR(0x00009d96u): goto L_9D96;
    case RC_ADDR(0x00009d9au): goto L_9D9A;
    case RC_ADDR(0x00009d9eu): goto L_9D9E;
    case RC_ADDR(0x00009da0u): goto L_9DA0;
    case RC_ADDR(0x00009da4u): goto L_9DA4;
    case RC_ADDR(0x00009da8u): goto L_9DA8;
    case RC_ADDR(0x00009dacu): goto L_9DAC;
    case RC_ADDR(0x00009db0u): goto L_9DB0;
    case RC_ADDR(0x00009db4u): goto L_9DB4;
    case RC_ADDR(0x00009db8u): goto L_9DB8;
    case RC_ADDR(0x00009dbcu): goto L_9DBC;
    case RC_ADDR(0x00009dc0u): goto L_9DC0;
    case RC_ADDR(0x00009dc4u): goto L_9DC4;
    case RC_ADDR(0x00009dc8u): goto L_9DC8;
    case RC_ADDR(0x00009dccu): goto L_9DCC;
    case RC_ADDR(0x00009dd0u): goto L_9DD0;
    case RC_ADDR(0x00009dd4u): goto L_9DD4;
    case RC_ADDR(0x00009dd8u): goto L_9DD8;
    case RC_ADDR(0x00009ddcu): goto L_9DDC;
    case RC_ADDR(0x00009de0u): goto L_9DE0;
    case RC_ADDR(0x00009de4u): goto L_9DE4;
    case RC_ADDR(0x00009de8u): goto L_9DE8;
    case RC_ADDR(0x00009decu): goto L_9DEC;
    case RC_ADDR(0x00009df0u): goto L_9DF0;
    case RC_ADDR(0x00009df2u): goto L_9DF2;
    case RC_ADDR(0x00009df4u): goto L_9DF4;
    case RC_ADDR(0x00009df8u): goto L_9DF8;
    case RC_ADDR(0x00009dfcu): goto L_9DFC;
    case RC_ADDR(0x00009dfeu): goto L_9DFE;
    case RC_ADDR(0x00009e02u): goto L_9E02;
    case RC_ADDR(0x00009e06u): goto L_9E06;
    case RC_ADDR(0x00009e08u): goto L_9E08;
    case RC_ADDR(0x00009e0cu): goto L_9E0C;
    case RC_ADDR(0x00009e10u): goto L_9E10;
    case RC_ADDR(0x00009e12u): goto L_9E12;
    case RC_ADDR(0x00009e16u): goto L_9E16;
    case RC_ADDR(0x00009e1au): goto L_9E1A;
    case RC_ADDR(0x00009e24u): goto L_9E24;
    case RC_ADDR(0x00009e2au): goto L_9E2A;
    case RC_ADDR(0x00009e2cu): goto L_9E2C;
    case RC_ADDR(0x00009e2eu): goto L_9E2E;
    case RC_ADDR(0x00009e32u): goto L_9E32;
    case RC_ADDR(0x00009e36u): goto L_9E36;
    case RC_ADDR(0x00009e3au): goto L_9E3A;
    case RC_ADDR(0x00009e40u): goto L_9E40;
    case RC_ADDR(0x00009e42u): goto L_9E42;
    case RC_ADDR(0x00009e46u): goto L_9E46;
    case RC_ADDR(0x00009e48u): goto L_9E48;
    case RC_ADDR(0x00009e4au): goto L_9E4A;
    case RC_ADDR(0x00009e4eu): goto L_9E4E;
    case RC_ADDR(0x00009e50u): goto L_9E50;
    case RC_ADDR(0x00009e54u): goto L_9E54;
    case RC_ADDR(0x00009e56u): goto L_9E56;
    case RC_ADDR(0x00009e5au): goto L_9E5A;
    case RC_ADDR(0x00009e60u): goto L_9E60;
    case RC_ADDR(0x00009e64u): goto L_9E64;
    case RC_ADDR(0x00009e66u): goto L_9E66;
    case RC_ADDR(0x00009e6au): goto L_9E6A;
    case RC_ADDR(0x00009e6cu): goto L_9E6C;
    case RC_ADDR(0x00009e70u): goto L_9E70;
    case RC_ADDR(0x00009e72u): goto L_9E72;
    case RC_ADDR(0x00009e76u): goto L_9E76;
    case RC_ADDR(0x00009e78u): goto L_9E78;
    case RC_ADDR(0x00009e7cu): goto L_9E7C;
    case RC_ADDR(0x00009e7eu): goto L_9E7E;
    case RC_ADDR(0x00009e82u): goto L_9E82;
    case RC_ADDR(0x00009e84u): goto L_9E84;
    case RC_ADDR(0x00009e88u): goto L_9E88;
    case RC_ADDR(0x00009e8au): goto L_9E8A;
    case RC_ADDR(0x00009e8eu): goto L_9E8E;
    case RC_ADDR(0x00009e92u): goto L_9E92;
    case RC_ADDR(0x00009e96u): goto L_9E96;
    case RC_ADDR(0x00009e98u): goto L_9E98;
    case RC_ADDR(0x00009e9cu): goto L_9E9C;
    case RC_ADDR(0x00009ea0u): goto L_9EA0;
    case RC_ADDR(0x00009ea4u): goto L_9EA4;
    case RC_ADDR(0x00009ea6u): goto L_9EA6;
    case RC_ADDR(0x00009ea8u): goto L_9EA8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9D0C:
    /* 00009d0c   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00009d0cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_9D10:
    /* 00009d10   6  move.w #ff,(fffff024,A4) */
    c->pc = RC_ADDR(0x00009d10u);
    rc_step(c, m, 16);
    t0 = 0x000000ffu;
    rc_wr16(c, m, (c->a[4] - 0xfdcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9D16:
    /* 00009d16   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x00009d16u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9D1A:
    /* 00009d1a   4  move.w (ffffefe4,A4),D0 */
    c->pc = RC_ADDR(0x00009d1au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9D1E:
    /* 00009d1e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00009d1eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_9D20:
    /* 00009d20   4  bra 00009e48 */
    c->pc = RC_ADDR(0x00009d20u);
    rc_step(c, m, 10);
    goto L_9E48;

L_9D24:
    /* 00009d24   4  lea (ffff9bcc,A4),A0 */
    c->pc = RC_ADDR(0x00009d24u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6434u);

L_9D28:
    /* 00009d28   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00009d28u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9D2C:
    /* 00009d2c   4  bra 00009e92 */
    c->pc = RC_ADDR(0x00009d2cu);
    rc_step(c, m, 10);
    goto L_9E92;

L_9D30:
    /* 00009d30   4  lea (ffffa0c4,A4),A0 */
    c->pc = RC_ADDR(0x00009d30u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x5f3cu);

L_9D34:
    /* 00009d34   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00009d34u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9D38:
    /* 00009d38   4  bra 00009e92 */
    c->pc = RC_ADDR(0x00009d38u);
    rc_step(c, m, 10);
    goto L_9E92;

L_9D3C:
    /* 00009d3c   4  lea (ffff9f86,A4),A0 */
    c->pc = RC_ADDR(0x00009d3cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x607au);

L_9D40:
    /* 00009d40   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00009d40u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9D44:
    /* 00009d44   4  bra 00009e92 */
    c->pc = RC_ADDR(0x00009d44u);
    rc_step(c, m, 10);
    goto L_9E92;

L_9D48:
    /* 00009d48   6  cmpi.b #11,(fffff0ba,A4) */
    c->pc = RC_ADDR(0x00009d48u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[4] - 0xf46u));
    rc_cmp(c, RC_B, t0, 0x00000011u);

L_9D4E:
    /* 00009d4e   2  bne 00009d5e */
    c->pc = RC_ADDR(0x00009d4eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_9D5E;

L_9D50:
    /* 00009d50   4  lea (ffffa198,A4),A0 */
    c->pc = RC_ADDR(0x00009d50u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x5e68u);

L_9D54:
    /* 00009d54   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00009d54u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9D58:
    /* 00009d58   6  move.w #50,(fffff024,A4) */
    c->pc = RC_ADDR(0x00009d58u);
    rc_step(c, m, 16);
    t0 = 0x00000050u;
    rc_wr16(c, m, (c->a[4] - 0xfdcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9D5E:
    /* 00009d5e   4  bra 00009e92 */
    c->pc = RC_ADDR(0x00009d5eu);
    rc_step(c, m, 10);
    goto L_9E92;

L_9D62:
    /* 00009d62   4  lea (ffff9e48,A4),A0 */
    c->pc = RC_ADDR(0x00009d62u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x61b8u);

L_9D66:
    /* 00009d66   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00009d66u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9D6A:
    /* 00009d6a   4  bra 00009e92 */
    c->pc = RC_ADDR(0x00009d6au);
    rc_step(c, m, 10);
    goto L_9E92;

L_9D6E:
    /* 00009d6e   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00009d6eu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9D72:
    /* 00009d72   4  pea (00009eb3) */
    c->pc = RC_ADDR(0x00009d72u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00009eb3u));

L_9D76:
    /* 00009d76   4  pea (00009eaa) */
    c->pc = RC_ADDR(0x00009d76u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00009eaau));

L_9D7A:
    /* 00009d7a   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x00009d7au);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x00009d7eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a64u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000002f4u);
    return;

L_9D7E:
    /* 00009d7e   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00009d7eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_9D82:
    /* 00009d82   4  pea (2f2,A4) */
    c->pc = RC_ADDR(0x00009d82u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2f2u));

L_9D86:
    /* 00009d86   4  pea (2f0,A4) */
    c->pc = RC_ADDR(0x00009d86u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2f0u));

L_9D8A:
    /* 00009d8a   4  pea (00009eb6) */
    c->pc = RC_ADDR(0x00009d8au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00009eb6u));

L_9D8E:
    /* 00009d8e   4  jsr (ffff80b0,A4) */
    c->pc = RC_ADDR(0x00009d8eu);
    rc_step(c, m, 18);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x00009d92u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b06u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009984u);
    return;

L_9D92:
    /* 00009d92   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00009d92u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_9D96:
    /* 00009d96   4  move.l D0,(ffff930c,A4) */
    c->pc = RC_ADDR(0x00009d96u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x6cf4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9D9A:
    /* 00009d9a   4  move.w #30,-(A7) */
    c->pc = RC_ADDR(0x00009d9au);
    rc_step(c, m, 12);
    t0 = 0x00000030u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9D9E:
    /* 00009d9e   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00009d9eu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9DA0:
    /* 00009da0   4  move.l (2f2,A4),-(A7) */
    c->pc = RC_ADDR(0x00009da0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2f2u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9DA4:
    /* 00009da4   4  move.w (2f0,A4),-(A7) */
    c->pc = RC_ADDR(0x00009da4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2f0u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9DA8:
    /* 00009da8   4  move.l (ffff930c,A4),-(A7) */
    c->pc = RC_ADDR(0x00009da8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x6cf4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9DAC:
    /* 00009dac   4  jsr (ffff80b6,A4) */
    c->pc = RC_ADDR(0x00009dacu);
    rc_step(c, m, 18);
    /* vector 30 */
    rc_push32(c, m, RC_ADDR(0x00009db0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b0cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009b60u);
    return;

L_9DB0:
    /* 00009db0   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00009db0u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_9DB4:
    /* 00009db4   4  move.w #30,-(A7) */
    c->pc = RC_ADDR(0x00009db4u);
    rc_step(c, m, 12);
    t0 = 0x00000030u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9DB8:
    /* 00009db8   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00009db8u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9DBC:
    /* 00009dbc   4  move.l (2f2,A4),-(A7) */
    c->pc = RC_ADDR(0x00009dbcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2f2u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9DC0:
    /* 00009dc0   4  move.w (2f0,A4),-(A7) */
    c->pc = RC_ADDR(0x00009dc0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2f0u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9DC4:
    /* 00009dc4   4  move.l (ffff930c,A4),-(A7) */
    c->pc = RC_ADDR(0x00009dc4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x6cf4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9DC8:
    /* 00009dc8   4  jsr (ffff80b6,A4) */
    c->pc = RC_ADDR(0x00009dc8u);
    rc_step(c, m, 18);
    /* vector 30 */
    rc_push32(c, m, RC_ADDR(0x00009dccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b0cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009b60u);
    return;

L_9DCC:
    /* 00009dcc   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00009dccu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_9DD0:
    /* 00009dd0   4  bra 00009e92 */
    c->pc = RC_ADDR(0x00009dd0u);
    rc_step(c, m, 10);
    goto L_9E92;

L_9DD4:
    /* 00009dd4   4  lea (ffff9af8,A4),A0 */
    c->pc = RC_ADDR(0x00009dd4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6508u);

L_9DD8:
    /* 00009dd8   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00009dd8u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9DDC:
    /* 00009ddc   4  bra 00009e92 */
    c->pc = RC_ADDR(0x00009ddcu);
    rc_step(c, m, 10);
    goto L_9E92;

L_9DE0:
    /* 00009de0   4  lea (ffff9f1c,A4),A0 */
    c->pc = RC_ADDR(0x00009de0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x60e4u);

L_9DE4:
    /* 00009de4   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00009de4u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9DE8:
    /* 00009de8   4  bra 00009e92 */
    c->pc = RC_ADDR(0x00009de8u);
    rc_step(c, m, 10);
    goto L_9E92;

L_9DEC:
    /* 00009dec   4  move.w (ffff9310,A4),D0 */
    c->pc = RC_ADDR(0x00009decu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x6cf0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9DF0:
    /* 00009df0   2  ext.l D0 */
    c->pc = RC_ADDR(0x00009df0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_9DF2:
    /* 00009df2   2  bra 00009e24 */
    c->pc = RC_ADDR(0x00009df2u);
    rc_step(c, m, 10);
    goto L_9E24;

L_9DF4:
    /* 00009df4   4  lea (ffff9ca0,A4),A0 */
    c->pc = RC_ADDR(0x00009df4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6360u);

L_9DF8:
    /* 00009df8   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00009df8u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9DFC:
    /* 00009dfc   2  bra 00009e36 */
    c->pc = RC_ADDR(0x00009dfcu);
    rc_step(c, m, 10);
    goto L_9E36;

L_9DFE:
    /* 00009dfe   4  lea (ffff9d0a,A4),A0 */
    c->pc = RC_ADDR(0x00009dfeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x62f6u);

L_9E02:
    /* 00009e02   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00009e02u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9E06:
    /* 00009e06   2  bra 00009e36 */
    c->pc = RC_ADDR(0x00009e06u);
    rc_step(c, m, 10);
    goto L_9E36;

L_9E08:
    /* 00009e08   4  lea (ffff9d74,A4),A0 */
    c->pc = RC_ADDR(0x00009e08u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x628cu);

L_9E0C:
    /* 00009e0c   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00009e0cu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9E10:
    /* 00009e10   2  bra 00009e36 */
    c->pc = RC_ADDR(0x00009e10u);
    rc_step(c, m, 10);
    goto L_9E36;

L_9E12:
    /* 00009e12   4  lea (ffff9dde,A4),A0 */
    c->pc = RC_ADDR(0x00009e12u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6222u);

L_9E16:
    /* 00009e16   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00009e16u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9E1A:
    /* 00009e1a   2  bra 00009e36 */
    c->pc = RC_ADDR(0x00009e1au);
    rc_step(c, m, 10);
    goto L_9E36;

L_9E24:
    /* 00009e24   6  cmp.l #4,D0 */
    c->pc = RC_ADDR(0x00009e24u);
    rc_step(c, m, 14);
    t0 = 0x00000004u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_9E2A:
    /* 00009e2a   2  bcc 00009e36 */
    c->pc = RC_ADDR(0x00009e2au);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_9E36;

L_9E2C:
    /* 00009e2c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00009e2cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_9E2E:
    /* 00009e2e   4  move.w (00009e1c),D0 */
    c->pc = RC_ADDR(0x00009e2eu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x00009e1cu) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9E32:
    /* 00009e32   4  jmp (00009e34) */
    c->pc = RC_ADDR(0x00009e32u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x00009e34u) + t4);
    c->pc = t3;
    return;

L_9E36:
    /* 00009e36   4  addq.w #1,(ffff9310,A4) */
    c->pc = RC_ADDR(0x00009e36u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x6cf0u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_9E3A:
    /* 00009e3a   6  cmpi.w #3,(ffff9310,A4) */
    c->pc = RC_ADDR(0x00009e3au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x6cf0u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_9E40:
    /* 00009e40   2  ble 00009e46 */
    c->pc = RC_ADDR(0x00009e40u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_9E46;

L_9E42:
    /* 00009e42   4  clr.w (ffff9310,A4) */
    c->pc = RC_ADDR(0x00009e42u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x6cf0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9E46:
    /* 00009e46   2  bra 00009e92 */
    c->pc = RC_ADDR(0x00009e46u);
    rc_step(c, m, 10);
    goto L_9E92;

L_9E48:
    /* 00009e48   2  subq.l #5,D0 */
    c->pc = RC_ADDR(0x00009e48u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000005u;
    rc_flags_sub(c, RC_L, t1, 0x00000005u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_9E4A:
    /* 00009e4a   4  beq 00009d24 */
    c->pc = RC_ADDR(0x00009e4au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_9D24; }

L_9E4E:
    /* 00009e4e   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x00009e4eu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_9E50:
    /* 00009e50   4  beq 00009d24 */
    c->pc = RC_ADDR(0x00009e50u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_9D24; }

L_9E54:
    /* 00009e54   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x00009e54u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_9E56:
    /* 00009e56   4  beq 00009d24 */
    c->pc = RC_ADDR(0x00009e56u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_9D24; }

L_9E5A:
    /* 00009e5a   6  sub.l #e,D0 */
    c->pc = RC_ADDR(0x00009e5au);
    rc_step(c, m, 16);
    t0 = 0x0000000eu;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_9E60:
    /* 00009e60   4  beq 00009d30 */
    c->pc = RC_ADDR(0x00009e60u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_9D30; }

L_9E64:
    /* 00009e64   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x00009e64u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_9E66:
    /* 00009e66   4  beq 00009d3c */
    c->pc = RC_ADDR(0x00009e66u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_9D3C; }

L_9E6A:
    /* 00009e6a   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x00009e6au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_9E6C:
    /* 00009e6c   4  beq 00009d48 */
    c->pc = RC_ADDR(0x00009e6cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_9D48; }

L_9E70:
    /* 00009e70   2  subq.l #3,D0 */
    c->pc = RC_ADDR(0x00009e70u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_L, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_9E72:
    /* 00009e72   4  beq 00009d62 */
    c->pc = RC_ADDR(0x00009e72u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_9D62; }

L_9E76:
    /* 00009e76   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x00009e76u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_9E78:
    /* 00009e78   4  beq 00009d6e */
    c->pc = RC_ADDR(0x00009e78u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_9D6E; }

L_9E7C:
    /* 00009e7c   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x00009e7cu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_9E7E:
    /* 00009e7e   4  beq 00009d6e */
    c->pc = RC_ADDR(0x00009e7eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_9D6E; }

L_9E82:
    /* 00009e82   2  subq.l #2,D0 */
    c->pc = RC_ADDR(0x00009e82u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_9E84:
    /* 00009e84   4  beq 00009dd4 */
    c->pc = RC_ADDR(0x00009e84u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_9DD4; }

L_9E88:
    /* 00009e88   2  subq.l #8,D0 */
    c->pc = RC_ADDR(0x00009e88u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_L, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_9E8A:
    /* 00009e8a   4  beq 00009de0 */
    c->pc = RC_ADDR(0x00009e8au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_9DE0; }

L_9E8E:
    /* 00009e8e   4  bra 00009dec */
    c->pc = RC_ADDR(0x00009e8eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_9DEC;

L_9E92:
    /* 00009e92   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x00009e92u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_9E96:
    /* 00009e96   2  beq 00009ea6 */
    c->pc = RC_ADDR(0x00009e96u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_9EA6;

L_9E98:
    /* 00009e98   4  pea (ffffffff).l */
    c->pc = RC_ADDR(0x00009e98u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xffffffffu);

L_9E9C:
    /* 00009e9c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00009e9cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9EA0:
    /* 00009ea0   4  jsr (00009cf2) */
    c->pc = RC_ADDR(0x00009ea0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00009ea4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009cf2u);
    return;

L_9EA4:
    /* 00009ea4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00009ea4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_9EA6:
    /* 00009ea6   2  unlk A5 */
    c->pc = RC_ADDR(0x00009ea6u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_9EA8:
    /* 00009ea8   2  rts */
    c->pc = RC_ADDR(0x00009ea8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
