/* fn_00011cdc - 438 byte(s), 111 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00011cdc(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00011cdcu): goto L_11CDC;
    case RC_ADDR(0x00011ce0u): goto L_11CE0;
    case RC_ADDR(0x00011ce4u): goto L_11CE4;
    case RC_ADDR(0x00011ce8u): goto L_11CE8;
    case RC_ADDR(0x00011cecu): goto L_11CEC;
    case RC_ADDR(0x00011cf2u): goto L_11CF2;
    case RC_ADDR(0x00011cf6u): goto L_11CF6;
    case RC_ADDR(0x00011cf8u): goto L_11CF8;
    case RC_ADDR(0x00011cfcu): goto L_11CFC;
    case RC_ADDR(0x00011cfeu): goto L_11CFE;
    case RC_ADDR(0x00011d02u): goto L_11D02;
    case RC_ADDR(0x00011d08u): goto L_11D08;
    case RC_ADDR(0x00011d0cu): goto L_11D0C;
    case RC_ADDR(0x00011d10u): goto L_11D10;
    case RC_ADDR(0x00011d14u): goto L_11D14;
    case RC_ADDR(0x00011d18u): goto L_11D18;
    case RC_ADDR(0x00011d1au): goto L_11D1A;
    case RC_ADDR(0x00011d1cu): goto L_11D1C;
    case RC_ADDR(0x00011d1eu): goto L_11D1E;
    case RC_ADDR(0x00011d20u): goto L_11D20;
    case RC_ADDR(0x00011d22u): goto L_11D22;
    case RC_ADDR(0x00011d26u): goto L_11D26;
    case RC_ADDR(0x00011d28u): goto L_11D28;
    case RC_ADDR(0x00011d2au): goto L_11D2A;
    case RC_ADDR(0x00011d2cu): goto L_11D2C;
    case RC_ADDR(0x00011d2eu): goto L_11D2E;
    case RC_ADDR(0x00011d32u): goto L_11D32;
    case RC_ADDR(0x00011d36u): goto L_11D36;
    case RC_ADDR(0x00011d3au): goto L_11D3A;
    case RC_ADDR(0x00011d3eu): goto L_11D3E;
    case RC_ADDR(0x00011d40u): goto L_11D40;
    case RC_ADDR(0x00011d42u): goto L_11D42;
    case RC_ADDR(0x00011d44u): goto L_11D44;
    case RC_ADDR(0x00011d48u): goto L_11D48;
    case RC_ADDR(0x00011d4cu): goto L_11D4C;
    case RC_ADDR(0x00011d50u): goto L_11D50;
    case RC_ADDR(0x00011d54u): goto L_11D54;
    case RC_ADDR(0x00011d58u): goto L_11D58;
    case RC_ADDR(0x00011d5cu): goto L_11D5C;
    case RC_ADDR(0x00011d62u): goto L_11D62;
    case RC_ADDR(0x00011d64u): goto L_11D64;
    case RC_ADDR(0x00011d68u): goto L_11D68;
    case RC_ADDR(0x00011d6au): goto L_11D6A;
    case RC_ADDR(0x00011d70u): goto L_11D70;
    case RC_ADDR(0x00011d76u): goto L_11D76;
    case RC_ADDR(0x00011d7au): goto L_11D7A;
    case RC_ADDR(0x00011d80u): goto L_11D80;
    case RC_ADDR(0x00011d86u): goto L_11D86;
    case RC_ADDR(0x00011d88u): goto L_11D88;
    case RC_ADDR(0x00011d8eu): goto L_11D8E;
    case RC_ADDR(0x00011d94u): goto L_11D94;
    case RC_ADDR(0x00011d96u): goto L_11D96;
    case RC_ADDR(0x00011d9au): goto L_11D9A;
    case RC_ADDR(0x00011da0u): goto L_11DA0;
    case RC_ADDR(0x00011da2u): goto L_11DA2;
    case RC_ADDR(0x00011da8u): goto L_11DA8;
    case RC_ADDR(0x00011daeu): goto L_11DAE;
    case RC_ADDR(0x00011db2u): goto L_11DB2;
    case RC_ADDR(0x00011db8u): goto L_11DB8;
    case RC_ADDR(0x00011dbeu): goto L_11DBE;
    case RC_ADDR(0x00011dc0u): goto L_11DC0;
    case RC_ADDR(0x00011dc6u): goto L_11DC6;
    case RC_ADDR(0x00011dc8u): goto L_11DC8;
    case RC_ADDR(0x00011dcau): goto L_11DCA;
    case RC_ADDR(0x00011dceu): goto L_11DCE;
    case RC_ADDR(0x00011dd4u): goto L_11DD4;
    case RC_ADDR(0x00011dd6u): goto L_11DD6;
    case RC_ADDR(0x00011ddcu): goto L_11DDC;
    case RC_ADDR(0x00011ddeu): goto L_11DDE;
    case RC_ADDR(0x00011de2u): goto L_11DE2;
    case RC_ADDR(0x00011de6u): goto L_11DE6;
    case RC_ADDR(0x00011decu): goto L_11DEC;
    case RC_ADDR(0x00011deeu): goto L_11DEE;
    case RC_ADDR(0x00011df4u): goto L_11DF4;
    case RC_ADDR(0x00011dfau): goto L_11DFA;
    case RC_ADDR(0x00011dfeu): goto L_11DFE;
    case RC_ADDR(0x00011e04u): goto L_11E04;
    case RC_ADDR(0x00011e06u): goto L_11E06;
    case RC_ADDR(0x00011e0au): goto L_11E0A;
    case RC_ADDR(0x00011e10u): goto L_11E10;
    case RC_ADDR(0x00011e12u): goto L_11E12;
    case RC_ADDR(0x00011e18u): goto L_11E18;
    case RC_ADDR(0x00011e1eu): goto L_11E1E;
    case RC_ADDR(0x00011e20u): goto L_11E20;
    case RC_ADDR(0x00011e22u): goto L_11E22;
    case RC_ADDR(0x00011e26u): goto L_11E26;
    case RC_ADDR(0x00011e2au): goto L_11E2A;
    case RC_ADDR(0x00011e2cu): goto L_11E2C;
    case RC_ADDR(0x00011e32u): goto L_11E32;
    case RC_ADDR(0x00011e38u): goto L_11E38;
    case RC_ADDR(0x00011e3cu): goto L_11E3C;
    case RC_ADDR(0x00011e42u): goto L_11E42;
    case RC_ADDR(0x00011e46u): goto L_11E46;
    case RC_ADDR(0x00011e4cu): goto L_11E4C;
    case RC_ADDR(0x00011e4eu): goto L_11E4E;
    case RC_ADDR(0x00011e54u): goto L_11E54;
    case RC_ADDR(0x00011e58u): goto L_11E58;
    case RC_ADDR(0x00011e5au): goto L_11E5A;
    case RC_ADDR(0x00011e5eu): goto L_11E5E;
    case RC_ADDR(0x00011e62u): goto L_11E62;
    case RC_ADDR(0x00011e66u): goto L_11E66;
    case RC_ADDR(0x00011e6au): goto L_11E6A;
    case RC_ADDR(0x00011e6eu): goto L_11E6E;
    case RC_ADDR(0x00011e72u): goto L_11E72;
    case RC_ADDR(0x00011e76u): goto L_11E76;
    case RC_ADDR(0x00011e7au): goto L_11E7A;
    case RC_ADDR(0x00011e7eu): goto L_11E7E;
    case RC_ADDR(0x00011e82u): goto L_11E82;
    case RC_ADDR(0x00011e88u): goto L_11E88;
    case RC_ADDR(0x00011e8cu): goto L_11E8C;
    case RC_ADDR(0x00011e90u): goto L_11E90;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11CDC:
    /* 00011cdc   4  tst.w (fffff28a,A4) */
    c->pc = RC_ADDR(0x00011cdcu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd76u));
    rc_set_nzvc(c, t0, RC_W);

L_11CE0:
    /* 00011ce0   4  beq 00011e88 */
    c->pc = RC_ADDR(0x00011ce0u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_11E88;

L_11CE4:
    /* 00011ce4   4  jsr (000170c4) */
    c->pc = RC_ADDR(0x00011ce4u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00011ce8u));
    rc_depth++;
    c->pc = RC_ADDR(0x000170c4u);
    return;

L_11CE8:
    /* 00011ce8   4  movea.l (e04,A4),A0 */
    c->pc = RC_ADDR(0x00011ce8u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe04u));
    c->a[0] = t0;

L_11CEC:
    /* 00011cec   6  adda.l #1e,A0 */
    c->pc = RC_ADDR(0x00011cecu);
    rc_step(c, m);
    t0 = 0x0000001eu;
    c->a[0] += t0;

L_11CF2:
    /* 00011cf2   4  move.w (fffff27e,A4),D0 */
    c->pc = RC_ADDR(0x00011cf2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd82u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11CF6:
    /* 00011cf6   2  lsl.w #4,D0 */
    c->pc = RC_ADDR(0x00011cf6u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_11CF8:
    /* 00011cf8   4  or.w (fffff27e,A4),D0 */
    c->pc = RC_ADDR(0x00011cf8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd82u));
    t2 = t0 | rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_11CFC:
    /* 00011cfc   2  move.w D0,(A0) */
    c->pc = RC_ADDR(0x00011cfcu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_11CFE:
    /* 00011cfe   4  movea.l (e04,A4),A0 */
    c->pc = RC_ADDR(0x00011cfeu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe04u));
    c->a[0] = t0;

L_11D02:
    /* 00011d02   6  adda.l #2a,A0 */
    c->pc = RC_ADDR(0x00011d02u);
    rc_step(c, m);
    t0 = 0x0000002au;
    c->a[0] += t0;

L_11D08:
    /* 00011d08   4  lea (e1c,A4),A1 */
    c->pc = RC_ADDR(0x00011d08u);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0xe1cu);

L_11D0C:
    /* 00011d0c   4  lea (e08,A4),A2 */
    c->pc = RC_ADDR(0x00011d0cu);
    rc_step(c, m);
    c->a[2] = (c->a[4] + 0xe08u);

L_11D10:
    /* 00011d10   4  move.w #4,D0 */
    c->pc = RC_ADDR(0x00011d10u);
    rc_step(c, m);
    t0 = 0x00000004u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11D14:
    /* 00011d14   4  move.l (fffff282,A4),D1 */
    c->pc = RC_ADDR(0x00011d14u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd7eu));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11D18:
    /* 00011d18   2  add.l D1,(A2) */
    c->pc = RC_ADDR(0x00011d18u);
    rc_step(c, m);
    t3 = c->a[2];
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 1, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_11D1A:
    /* 00011d1a   2  add.l D1,(A1) */
    c->pc = RC_ADDR(0x00011d1au);
    rc_step(c, m);
    t3 = c->a[1];
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 1, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_11D1C:
    /* 00011d1c   2  move.l (A2),D1 */
    c->pc = RC_ADDR(0x00011d1cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, c->a[2]);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11D1E:
    /* 00011d1e   2  move.l (A1),D2 */
    c->pc = RC_ADDR(0x00011d1eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, c->a[1]);
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11D20:
    /* 00011d20   2  move.l D1,(A1)+ */
    c->pc = RC_ADDR(0x00011d20u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    t3 = c->a[1];
    c->a[1] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11D22:
    /* 00011d22   4  move.w D1,(4,A0) */
    c->pc = RC_ADDR(0x00011d22u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11D26:
    /* 00011d26   2  swap D1 */
    c->pc = RC_ADDR(0x00011d26u);
    rc_step(c, m);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_11D28:
    /* 00011d28   2  move.w D1,(A0) */
    c->pc = RC_ADDR(0x00011d28u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_11D2A:
    /* 00011d2a   2  move.l D2,(A2)+ */
    c->pc = RC_ADDR(0x00011d2au);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_L);
    t3 = c->a[2];
    c->a[2] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11D2C:
    /* 00011d2c   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x00011d2cu);
    rc_step(c, m);
    c->a[0] += 0x00000008u;

L_11D2E:
    /* 00011d2e   4  dbf D0,00011d14 */
    c->pc = RC_ADDR(0x00011d2eu);
    rc_step(c, m);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_11D14; }
    }

L_11D32:
    /* 00011d32   4  lea (fffff33a,A4),A0 */
    c->pc = RC_ADDR(0x00011d32u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0xcc6u);

L_11D36:
    /* 00011d36   4  lea (fffff326,A4),A1 */
    c->pc = RC_ADDR(0x00011d36u);
    rc_step(c, m);
    c->a[1] = (c->a[4] - 0xcdau);

L_11D3A:
    /* 00011d3a   4  move.w #4,D0 */
    c->pc = RC_ADDR(0x00011d3au);
    rc_step(c, m);
    t0 = 0x00000004u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11D3E:
    /* 00011d3e   2  move.l (A0),D1 */
    c->pc = RC_ADDR(0x00011d3eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11D40:
    /* 00011d40   2  move.l (A1),(A0)+ */
    c->pc = RC_ADDR(0x00011d40u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, c->a[1]);
    t3 = c->a[0];
    c->a[0] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11D42:
    /* 00011d42   2  move.l D1,(A1)+ */
    c->pc = RC_ADDR(0x00011d42u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    t3 = c->a[1];
    c->a[1] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11D44:
    /* 00011d44   4  dbf D0,00011d3e */
    c->pc = RC_ADDR(0x00011d44u);
    rc_step(c, m);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_11D3E; }
    }

L_11D48:
    /* 00011d48   4  clr.l (fffff282,A4) */
    c->pc = RC_ADDR(0x00011d48u);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] - 0xd7eu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_11D4C:
    /* 00011d4c   4  tst.w (fffffd9c,A4) */
    c->pc = RC_ADDR(0x00011d4cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x264u));
    rc_set_nzvc(c, t0, RC_W);

L_11D50:
    /* 00011d50   4  beq 00011e54 */
    c->pc = RC_ADDR(0x00011d50u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_11E54;

L_11D54:
    /* 00011d54   4  move.w (fffff286,A4),D0 */
    c->pc = RC_ADDR(0x00011d54u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd7au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11D58:
    /* 00011d58   4  move.w (fffff288,A4),D1 */
    c->pc = RC_ADDR(0x00011d58u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd78u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11D5C:
    /* 00011d5c   6  btst #0,(fffffd9d,A4) */
    c->pc = RC_ADDR(0x00011d5cu);
    rc_step(c, m);
    t4 = 0x00000000u;
    t3 = (c->a[4] - 0x263u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_11D62:
    /* 00011d62   2  beq 00011d8e */
    c->pc = RC_ADDR(0x00011d62u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_11D8E;

L_11D64:
    /* 00011d64   4  sub.w D0,(fffff27e,A4) */
    c->pc = RC_ADDR(0x00011d64u);
    rc_step(c, m);
    t3 = (c->a[4] - 0xd82u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_11D68:
    /* 00011d68   2  bpl 00011d8e */
    c->pc = RC_ADDR(0x00011d68u);
    rc_step(c, m);
    if (rc_cond(c, 10)) goto L_11D8E;

L_11D6A:
    /* 00011d6a   6  subi.w #10,(fffffd98,A4) */
    c->pc = RC_ADDR(0x00011d6au);
    rc_step(c, m);
    t3 = (c->a[4] - 0x268u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000010u;
    rc_flags_sub(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_11D70:
    /* 00011d70   6  addi.w #10,(fffff27e,A4) */
    c->pc = RC_ADDR(0x00011d70u);
    rc_step(c, m);
    t3 = (c->a[4] - 0xd82u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000010u;
    rc_flags_add(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_11D76:
    /* 00011d76   4  addq.w #1,(74e,A4) */
    c->pc = RC_ADDR(0x00011d76u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x74eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_11D7A:
    /* 00011d7a   6  move.w #1,(fffff324,A4) */
    c->pc = RC_ADDR(0x00011d7au);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xcdcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11D80:
    /* 00011d80   6  cmpi.w #488,(74e,A4) */
    c->pc = RC_ADDR(0x00011d80u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x74eu));
    rc_cmp(c, RC_W, t0, 0x00000488u);

L_11D86:
    /* 00011d86   2  blt 00011d8e */
    c->pc = RC_ADDR(0x00011d86u);
    rc_step(c, m);
    if (rc_cond(c, 13)) goto L_11D8E;

L_11D88:
    /* 00011d88   6  subi.w #14,(74e,A4) */
    c->pc = RC_ADDR(0x00011d88u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x74eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000014u;
    rc_flags_sub(c, RC_W, t1, 0x00000014u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_11D8E:
    /* 00011d8e   6  btst #1,(fffffd9d,A4) */
    c->pc = RC_ADDR(0x00011d8eu);
    rc_step(c, m);
    t4 = 0x00000001u;
    t3 = (c->a[4] - 0x263u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_11D94:
    /* 00011d94   2  beq 00011dc6 */
    c->pc = RC_ADDR(0x00011d94u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_11DC6;

L_11D96:
    /* 00011d96   4  add.w D0,(fffff27e,A4) */
    c->pc = RC_ADDR(0x00011d96u);
    rc_step(c, m);
    t3 = (c->a[4] - 0xd82u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_11D9A:
    /* 00011d9a   6  cmpi.w #10,(fffff27e,A4) */
    c->pc = RC_ADDR(0x00011d9au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd82u));
    rc_cmp(c, RC_W, t0, 0x00000010u);

L_11DA0:
    /* 00011da0   2  blt 00011dc6 */
    c->pc = RC_ADDR(0x00011da0u);
    rc_step(c, m);
    if (rc_cond(c, 13)) goto L_11DC6;

L_11DA2:
    /* 00011da2   6  addi.w #10,(fffffd98,A4) */
    c->pc = RC_ADDR(0x00011da2u);
    rc_step(c, m);
    t3 = (c->a[4] - 0x268u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000010u;
    rc_flags_add(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_11DA8:
    /* 00011da8   6  subi.w #10,(fffff27e,A4) */
    c->pc = RC_ADDR(0x00011da8u);
    rc_step(c, m);
    t3 = (c->a[4] - 0xd82u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000010u;
    rc_flags_sub(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_11DAE:
    /* 00011dae   4  subq.w #1,(74e,A4) */
    c->pc = RC_ADDR(0x00011daeu);
    rc_step(c, m);
    t3 = (c->a[4] + 0x74eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_11DB2:
    /* 00011db2   6  move.w #1,(fffff324,A4) */
    c->pc = RC_ADDR(0x00011db2u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xcdcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11DB8:
    /* 00011db8   6  cmpi.w #28,(74e,A4) */
    c->pc = RC_ADDR(0x00011db8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x74eu));
    rc_cmp(c, RC_W, t0, 0x00000028u);

L_11DBE:
    /* 00011dbe   2  bgt 00011dc6 */
    c->pc = RC_ADDR(0x00011dbeu);
    rc_step(c, m);
    if (rc_cond(c, 14)) goto L_11DC6;

L_11DC0:
    /* 00011dc0   6  addi.w #14,(74e,A4) */
    c->pc = RC_ADDR(0x00011dc0u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x74eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000014u;
    rc_flags_add(c, RC_W, t1, 0x00000014u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_11DC6:
    /* 00011dc6   2  clr.l D0 */
    c->pc = RC_ADDR(0x00011dc6u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_11DC8:
    /* 00011dc8   2  move.w D1,D0 */
    c->pc = RC_ADDR(0x00011dc8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11DCA:
    /* 00011dca   4  mulu.w #28,D0 */
    c->pc = RC_ADDR(0x00011dcau);
    rc_step(c, m);
    t0 = 0x00000028u;
    rc_mulu(c, 0, t0);

L_11DCE:
    /* 00011dce   6  move.l #190,D2 */
    c->pc = RC_ADDR(0x00011dceu);
    rc_step(c, m);
    t0 = 0x00000190u;
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11DD4:
    /* 00011dd4   2  sub.w D0,D2 */
    c->pc = RC_ADDR(0x00011dd4u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_11DD6:
    /* 00011dd6   6  btst #2,(fffffd9d,A4) */
    c->pc = RC_ADDR(0x00011dd6u);
    rc_step(c, m);
    t4 = 0x00000002u;
    t3 = (c->a[4] - 0x263u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_11DDC:
    /* 00011ddc   2  beq 00011e18 */
    c->pc = RC_ADDR(0x00011ddcu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_11E18;

L_11DDE:
    /* 00011dde   4  move.l D0,(fffff282,A4) */
    c->pc = RC_ADDR(0x00011ddeu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xd7eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11DE2:
    /* 00011de2   4  add.w D1,(fffff280,A4) */
    c->pc = RC_ADDR(0x00011de2u);
    rc_step(c, m);
    t3 = (c->a[4] - 0xd80u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_11DE6:
    /* 00011de6   6  cmpi.w #a,(fffff280,A4) */
    c->pc = RC_ADDR(0x00011de6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd80u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_11DEC:
    /* 00011dec   2  blt 00011e18 */
    c->pc = RC_ADDR(0x00011decu);
    rc_step(c, m);
    if (rc_cond(c, 13)) goto L_11E18;

L_11DEE:
    /* 00011dee   6  subi.w #a,(fffffd9a,A4) */
    c->pc = RC_ADDR(0x00011deeu);
    rc_step(c, m);
    t3 = (c->a[4] - 0x266u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_11DF4:
    /* 00011df4   6  subi.w #a,(fffff280,A4) */
    c->pc = RC_ADDR(0x00011df4u);
    rc_step(c, m);
    t3 = (c->a[4] - 0xd80u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_11DFA:
    /* 00011dfa   4  addq.w #1,(750,A4) */
    c->pc = RC_ADDR(0x00011dfau);
    rc_step(c, m);
    t3 = (c->a[4] + 0x750u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_11DFE:
    /* 00011dfe   6  move.w #1,(fffff324,A4) */
    c->pc = RC_ADDR(0x00011dfeu);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xcdcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11E04:
    /* 00011e04   2  neg.l D2 */
    c->pc = RC_ADDR(0x00011e04u);
    rc_step(c, m);
    t1 = rc_d_get(c, 2, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_L, t2);

L_11E06:
    /* 00011e06   4  move.l D2,(fffff282,A4) */
    c->pc = RC_ADDR(0x00011e06u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xd7eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11E0A:
    /* 00011e0a   6  cmpi.w #488,(750,A4) */
    c->pc = RC_ADDR(0x00011e0au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x750u));
    rc_cmp(c, RC_W, t0, 0x00000488u);

L_11E10:
    /* 00011e10   2  blt 00011e18 */
    c->pc = RC_ADDR(0x00011e10u);
    rc_step(c, m);
    if (rc_cond(c, 13)) goto L_11E18;

L_11E12:
    /* 00011e12   6  subi.w #14,(750,A4) */
    c->pc = RC_ADDR(0x00011e12u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x750u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000014u;
    rc_flags_sub(c, RC_W, t1, 0x00000014u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_11E18:
    /* 00011e18   6  btst #3,(fffffd9d,A4) */
    c->pc = RC_ADDR(0x00011e18u);
    rc_step(c, m);
    t4 = 0x00000003u;
    t3 = (c->a[4] - 0x263u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_11E1E:
    /* 00011e1e   2  beq 00011e54 */
    c->pc = RC_ADDR(0x00011e1eu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_11E54;

L_11E20:
    /* 00011e20   2  neg.l D0 */
    c->pc = RC_ADDR(0x00011e20u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_11E22:
    /* 00011e22   4  move.l D0,(fffff282,A4) */
    c->pc = RC_ADDR(0x00011e22u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xd7eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11E26:
    /* 00011e26   4  sub.w D1,(fffff280,A4) */
    c->pc = RC_ADDR(0x00011e26u);
    rc_step(c, m);
    t3 = (c->a[4] - 0xd80u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 1, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_11E2A:
    /* 00011e2a   2  bpl 00011e54 */
    c->pc = RC_ADDR(0x00011e2au);
    rc_step(c, m);
    if (rc_cond(c, 10)) goto L_11E54;

L_11E2C:
    /* 00011e2c   6  addi.w #a,(fffffd9a,A4) */
    c->pc = RC_ADDR(0x00011e2cu);
    rc_step(c, m);
    t3 = (c->a[4] - 0x266u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_11E32:
    /* 00011e32   6  addi.w #a,(fffff280,A4) */
    c->pc = RC_ADDR(0x00011e32u);
    rc_step(c, m);
    t3 = (c->a[4] - 0xd80u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_11E38:
    /* 00011e38   4  subq.w #1,(750,A4) */
    c->pc = RC_ADDR(0x00011e38u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x750u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_11E3C:
    /* 00011e3c   6  move.w #1,(fffff324,A4) */
    c->pc = RC_ADDR(0x00011e3cu);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xcdcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11E42:
    /* 00011e42   4  move.l D2,(fffff282,A4) */
    c->pc = RC_ADDR(0x00011e42u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xd7eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11E46:
    /* 00011e46   6  cmpi.w #28,(750,A4) */
    c->pc = RC_ADDR(0x00011e46u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x750u));
    rc_cmp(c, RC_W, t0, 0x00000028u);

L_11E4C:
    /* 00011e4c   2  bgt 00011e54 */
    c->pc = RC_ADDR(0x00011e4cu);
    rc_step(c, m);
    if (rc_cond(c, 14)) goto L_11E54;

L_11E4E:
    /* 00011e4e   6  addi.w #14,(750,A4) */
    c->pc = RC_ADDR(0x00011e4eu);
    rc_step(c, m);
    t3 = (c->a[4] + 0x750u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000014u;
    rc_flags_add(c, RC_W, t1, 0x00000014u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_11E54:
    /* 00011e54   4  move.w (74e,A4),D0 */
    c->pc = RC_ADDR(0x00011e54u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x74eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11E58:
    /* 00011e58   2  lsl.w #4,D0 */
    c->pc = RC_ADDR(0x00011e58u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_11E5A:
    /* 00011e5a   4  move.w D0,(dfa,A4) */
    c->pc = RC_ADDR(0x00011e5au);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xdfau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11E5E:
    /* 00011e5e   4  move.w (750,A4),D0 */
    c->pc = RC_ADDR(0x00011e5eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x750u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11E62:
    /* 00011e62   4  mulu.w #a,D0 */
    c->pc = RC_ADDR(0x00011e62u);
    rc_step(c, m);
    t0 = 0x0000000au;
    rc_mulu(c, 0, t0);

L_11E66:
    /* 00011e66   4  move.w D0,(dfc,A4) */
    c->pc = RC_ADDR(0x00011e66u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xdfcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11E6A:
    /* 00011e6a   4  move.w (fffffd98,A4),D0 */
    c->pc = RC_ADDR(0x00011e6au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x268u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11E6E:
    /* 00011e6e   4  move.w (fffffd9a,A4),D1 */
    c->pc = RC_ADDR(0x00011e6eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x266u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11E72:
    /* 00011e72   4  add.w (dfa,A4),D0 */
    c->pc = RC_ADDR(0x00011e72u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_11E76:
    /* 00011e76   4  move.w D0,(fffffd8a,A4) */
    c->pc = RC_ADDR(0x00011e76u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x276u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11E7A:
    /* 00011e7a   4  add.w (dfc,A4),D1 */
    c->pc = RC_ADDR(0x00011e7au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_11E7E:
    /* 00011e7e   4  move.w D1,(fffffd8c,A4) */
    c->pc = RC_ADDR(0x00011e7eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x274u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11E82:
    /* 00011e82   6  eori.w #1,(dfe,A4) */
    c->pc = RC_ADDR(0x00011e82u);
    rc_step(c, m);
    t3 = (c->a[4] + 0xdfeu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 ^ 0x00000001u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_11E88:
    /* 00011e88   4  clr.w (af4,A4) */
    c->pc = RC_ADDR(0x00011e88u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0xaf4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11E8C:
    /* 00011e8c   4  clr.w (fffff28a,A4) */
    c->pc = RC_ADDR(0x00011e8cu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0xd76u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11E90:
    /* 00011e90   2  rts */
    c->pc = RC_ADDR(0x00011e90u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
