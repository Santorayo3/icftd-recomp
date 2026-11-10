/* fn_00017cec - 584 byte(s), 168 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00017cec(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00017cecu): goto L_17CEC;
    case RC_ADDR(0x00017ceeu): goto L_17CEE;
    case RC_ADDR(0x00017cf2u): goto L_17CF2;
    case RC_ADDR(0x00017cf6u): goto L_17CF6;
    case RC_ADDR(0x00017cfau): goto L_17CFA;
    case RC_ADDR(0x00017cfeu): goto L_17CFE;
    case RC_ADDR(0x00017d02u): goto L_17D02;
    case RC_ADDR(0x00017d06u): goto L_17D06;
    case RC_ADDR(0x00017d0au): goto L_17D0A;
    case RC_ADDR(0x00017d10u): goto L_17D10;
    case RC_ADDR(0x00017d14u): goto L_17D14;
    case RC_ADDR(0x00017d16u): goto L_17D16;
    case RC_ADDR(0x00017d1au): goto L_17D1A;
    case RC_ADDR(0x00017d1cu): goto L_17D1C;
    case RC_ADDR(0x00017d20u): goto L_17D20;
    case RC_ADDR(0x00017d26u): goto L_17D26;
    case RC_ADDR(0x00017d2au): goto L_17D2A;
    case RC_ADDR(0x00017d2eu): goto L_17D2E;
    case RC_ADDR(0x00017d32u): goto L_17D32;
    case RC_ADDR(0x00017d36u): goto L_17D36;
    case RC_ADDR(0x00017d38u): goto L_17D38;
    case RC_ADDR(0x00017d3au): goto L_17D3A;
    case RC_ADDR(0x00017d3cu): goto L_17D3C;
    case RC_ADDR(0x00017d3eu): goto L_17D3E;
    case RC_ADDR(0x00017d40u): goto L_17D40;
    case RC_ADDR(0x00017d44u): goto L_17D44;
    case RC_ADDR(0x00017d46u): goto L_17D46;
    case RC_ADDR(0x00017d48u): goto L_17D48;
    case RC_ADDR(0x00017d4au): goto L_17D4A;
    case RC_ADDR(0x00017d4cu): goto L_17D4C;
    case RC_ADDR(0x00017d50u): goto L_17D50;
    case RC_ADDR(0x00017d54u): goto L_17D54;
    case RC_ADDR(0x00017d58u): goto L_17D58;
    case RC_ADDR(0x00017d5cu): goto L_17D5C;
    case RC_ADDR(0x00017d5eu): goto L_17D5E;
    case RC_ADDR(0x00017d60u): goto L_17D60;
    case RC_ADDR(0x00017d62u): goto L_17D62;
    case RC_ADDR(0x00017d66u): goto L_17D66;
    case RC_ADDR(0x00017d6au): goto L_17D6A;
    case RC_ADDR(0x00017d6eu): goto L_17D6E;
    case RC_ADDR(0x00017d72u): goto L_17D72;
    case RC_ADDR(0x00017d76u): goto L_17D76;
    case RC_ADDR(0x00017d7au): goto L_17D7A;
    case RC_ADDR(0x00017d80u): goto L_17D80;
    case RC_ADDR(0x00017d82u): goto L_17D82;
    case RC_ADDR(0x00017d86u): goto L_17D86;
    case RC_ADDR(0x00017d88u): goto L_17D88;
    case RC_ADDR(0x00017d8cu): goto L_17D8C;
    case RC_ADDR(0x00017d90u): goto L_17D90;
    case RC_ADDR(0x00017d94u): goto L_17D94;
    case RC_ADDR(0x00017d96u): goto L_17D96;
    case RC_ADDR(0x00017d9au): goto L_17D9A;
    case RC_ADDR(0x00017d9eu): goto L_17D9E;
    case RC_ADDR(0x00017da0u): goto L_17DA0;
    case RC_ADDR(0x00017da6u): goto L_17DA6;
    case RC_ADDR(0x00017dacu): goto L_17DAC;
    case RC_ADDR(0x00017db0u): goto L_17DB0;
    case RC_ADDR(0x00017db4u): goto L_17DB4;
    case RC_ADDR(0x00017db8u): goto L_17DB8;
    case RC_ADDR(0x00017dbcu): goto L_17DBC;
    case RC_ADDR(0x00017dbeu): goto L_17DBE;
    case RC_ADDR(0x00017dc2u): goto L_17DC2;
    case RC_ADDR(0x00017dc6u): goto L_17DC6;
    case RC_ADDR(0x00017dcau): goto L_17DCA;
    case RC_ADDR(0x00017dccu): goto L_17DCC;
    case RC_ADDR(0x00017dceu): goto L_17DCE;
    case RC_ADDR(0x00017dd2u): goto L_17DD2;
    case RC_ADDR(0x00017dd8u): goto L_17DD8;
    case RC_ADDR(0x00017ddau): goto L_17DDA;
    case RC_ADDR(0x00017ddeu): goto L_17DDE;
    case RC_ADDR(0x00017de4u): goto L_17DE4;
    case RC_ADDR(0x00017de6u): goto L_17DE6;
    case RC_ADDR(0x00017deau): goto L_17DEA;
    case RC_ADDR(0x00017decu): goto L_17DEC;
    case RC_ADDR(0x00017df0u): goto L_17DF0;
    case RC_ADDR(0x00017df6u): goto L_17DF6;
    case RC_ADDR(0x00017df8u): goto L_17DF8;
    case RC_ADDR(0x00017dfeu): goto L_17DFE;
    case RC_ADDR(0x00017e04u): goto L_17E04;
    case RC_ADDR(0x00017e08u): goto L_17E08;
    case RC_ADDR(0x00017e0cu): goto L_17E0C;
    case RC_ADDR(0x00017e10u): goto L_17E10;
    case RC_ADDR(0x00017e12u): goto L_17E12;
    case RC_ADDR(0x00017e16u): goto L_17E16;
    case RC_ADDR(0x00017e18u): goto L_17E18;
    case RC_ADDR(0x00017e1au): goto L_17E1A;
    case RC_ADDR(0x00017e1eu): goto L_17E1E;
    case RC_ADDR(0x00017e22u): goto L_17E22;
    case RC_ADDR(0x00017e26u): goto L_17E26;
    case RC_ADDR(0x00017e28u): goto L_17E28;
    case RC_ADDR(0x00017e2au): goto L_17E2A;
    case RC_ADDR(0x00017e2eu): goto L_17E2E;
    case RC_ADDR(0x00017e30u): goto L_17E30;
    case RC_ADDR(0x00017e32u): goto L_17E32;
    case RC_ADDR(0x00017e36u): goto L_17E36;
    case RC_ADDR(0x00017e38u): goto L_17E38;
    case RC_ADDR(0x00017e3au): goto L_17E3A;
    case RC_ADDR(0x00017e3cu): goto L_17E3C;
    case RC_ADDR(0x00017e3eu): goto L_17E3E;
    case RC_ADDR(0x00017e44u): goto L_17E44;
    case RC_ADDR(0x00017e46u): goto L_17E46;
    case RC_ADDR(0x00017e4au): goto L_17E4A;
    case RC_ADDR(0x00017e4eu): goto L_17E4E;
    case RC_ADDR(0x00017e52u): goto L_17E52;
    case RC_ADDR(0x00017e54u): goto L_17E54;
    case RC_ADDR(0x00017e58u): goto L_17E58;
    case RC_ADDR(0x00017e5cu): goto L_17E5C;
    case RC_ADDR(0x00017e60u): goto L_17E60;
    case RC_ADDR(0x00017e62u): goto L_17E62;
    case RC_ADDR(0x00017e66u): goto L_17E66;
    case RC_ADDR(0x00017e6au): goto L_17E6A;
    case RC_ADDR(0x00017e6eu): goto L_17E6E;
    case RC_ADDR(0x00017e72u): goto L_17E72;
    case RC_ADDR(0x00017e74u): goto L_17E74;
    case RC_ADDR(0x00017e78u): goto L_17E78;
    case RC_ADDR(0x00017e7cu): goto L_17E7C;
    case RC_ADDR(0x00017e80u): goto L_17E80;
    case RC_ADDR(0x00017e82u): goto L_17E82;
    case RC_ADDR(0x00017e86u): goto L_17E86;
    case RC_ADDR(0x00017e8au): goto L_17E8A;
    case RC_ADDR(0x00017e8eu): goto L_17E8E;
    case RC_ADDR(0x00017e92u): goto L_17E92;
    case RC_ADDR(0x00017e94u): goto L_17E94;
    case RC_ADDR(0x00017e98u): goto L_17E98;
    case RC_ADDR(0x00017e9cu): goto L_17E9C;
    case RC_ADDR(0x00017ea0u): goto L_17EA0;
    case RC_ADDR(0x00017ea2u): goto L_17EA2;
    case RC_ADDR(0x00017ea6u): goto L_17EA6;
    case RC_ADDR(0x00017eaau): goto L_17EAA;
    case RC_ADDR(0x00017eb0u): goto L_17EB0;
    case RC_ADDR(0x00017eb2u): goto L_17EB2;
    case RC_ADDR(0x00017eb4u): goto L_17EB4;
    case RC_ADDR(0x00017eb8u): goto L_17EB8;
    case RC_ADDR(0x00017ebcu): goto L_17EBC;
    case RC_ADDR(0x00017ebeu): goto L_17EBE;
    case RC_ADDR(0x00017ec2u): goto L_17EC2;
    case RC_ADDR(0x00017ec4u): goto L_17EC4;
    case RC_ADDR(0x00017ec8u): goto L_17EC8;
    case RC_ADDR(0x00017eccu): goto L_17ECC;
    case RC_ADDR(0x00017ed0u): goto L_17ED0;
    case RC_ADDR(0x00017ed2u): goto L_17ED2;
    case RC_ADDR(0x00017ed6u): goto L_17ED6;
    case RC_ADDR(0x00017edau): goto L_17EDA;
    case RC_ADDR(0x00017edeu): goto L_17EDE;
    case RC_ADDR(0x00017ee2u): goto L_17EE2;
    case RC_ADDR(0x00017ee4u): goto L_17EE4;
    case RC_ADDR(0x00017ee6u): goto L_17EE6;
    case RC_ADDR(0x00017eeau): goto L_17EEA;
    case RC_ADDR(0x00017eecu): goto L_17EEC;
    case RC_ADDR(0x00017ef0u): goto L_17EF0;
    case RC_ADDR(0x00017ef4u): goto L_17EF4;
    case RC_ADDR(0x00017ef8u): goto L_17EF8;
    case RC_ADDR(0x00017efcu): goto L_17EFC;
    case RC_ADDR(0x00017f00u): goto L_17F00;
    case RC_ADDR(0x00017f04u): goto L_17F04;
    case RC_ADDR(0x00017f06u): goto L_17F06;
    case RC_ADDR(0x00017f0au): goto L_17F0A;
    case RC_ADDR(0x00017f0eu): goto L_17F0E;
    case RC_ADDR(0x00017f12u): goto L_17F12;
    case RC_ADDR(0x00017f16u): goto L_17F16;
    case RC_ADDR(0x00017f1au): goto L_17F1A;
    case RC_ADDR(0x00017f1cu): goto L_17F1C;
    case RC_ADDR(0x00017f20u): goto L_17F20;
    case RC_ADDR(0x00017f24u): goto L_17F24;
    case RC_ADDR(0x00017f28u): goto L_17F28;
    case RC_ADDR(0x00017f2cu): goto L_17F2C;
    case RC_ADDR(0x00017f30u): goto L_17F30;
    case RC_ADDR(0x00017f32u): goto L_17F32;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_17CEC:
    /* 00017cec   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x00017cecu);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17CEE:
    /* 00017cee   4  tst.w (fffff28a,A4) */
    c->pc = RC_ADDR(0x00017ceeu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd76u));
    rc_set_nzvc(c, t0, RC_W);

L_17CF2:
    /* 00017cf2   4  beq 00017f28 */
    c->pc = RC_ADDR(0x00017cf2u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_17F28;

L_17CF6:
    /* 00017cf6   4  jsr (000170c4) */
    c->pc = RC_ADDR(0x00017cf6u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00017cfau));
    rc_depth++;
    c->pc = RC_ADDR(0x000170c4u);
    return;

L_17CFA:
    /* 00017cfa   4  move.w (74a,A4),D4 */
    c->pc = RC_ADDR(0x00017cfau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x74au));
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17CFE:
    /* 00017cfe   4  clr.w (13c8,A4) */
    c->pc = RC_ADDR(0x00017cfeu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x13c8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17D02:
    /* 00017d02   4  clr.w (13ca,A4) */
    c->pc = RC_ADDR(0x00017d02u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x13cau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17D06:
    /* 00017d06   4  movea.l (a12,A4),A0 */
    c->pc = RC_ADDR(0x00017d06u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa12u));
    c->a[0] = t0;

L_17D0A:
    /* 00017d0a   6  adda.l #1e,A0 */
    c->pc = RC_ADDR(0x00017d0au);
    rc_step(c, m);
    t0 = 0x0000001eu;
    c->a[0] += t0;

L_17D10:
    /* 00017d10   4  move.w (fffff27e,A4),D0 */
    c->pc = RC_ADDR(0x00017d10u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd82u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17D14:
    /* 00017d14   2  lsl.w #4,D0 */
    c->pc = RC_ADDR(0x00017d14u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_17D16:
    /* 00017d16   4  or.w (fffff27e,A4),D0 */
    c->pc = RC_ADDR(0x00017d16u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd82u));
    t2 = t0 | rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_17D1A:
    /* 00017d1a   2  move.w D0,(A0) */
    c->pc = RC_ADDR(0x00017d1au);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17D1C:
    /* 00017d1c   4  movea.l (a12,A4),A0 */
    c->pc = RC_ADDR(0x00017d1cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa12u));
    c->a[0] = t0;

L_17D20:
    /* 00017d20   6  adda.l #2a,A0 */
    c->pc = RC_ADDR(0x00017d20u);
    rc_step(c, m);
    t0 = 0x0000002au;
    c->a[0] += t0;

L_17D26:
    /* 00017d26   4  lea (e1c,A4),A1 */
    c->pc = RC_ADDR(0x00017d26u);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0xe1cu);

L_17D2A:
    /* 00017d2a   4  lea (e08,A4),A2 */
    c->pc = RC_ADDR(0x00017d2au);
    rc_step(c, m);
    c->a[2] = (c->a[4] + 0xe08u);

L_17D2E:
    /* 00017d2e   4  move.w #4,D0 */
    c->pc = RC_ADDR(0x00017d2eu);
    rc_step(c, m);
    t0 = 0x00000004u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17D32:
    /* 00017d32   4  move.l (fffff282,A4),D1 */
    c->pc = RC_ADDR(0x00017d32u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd7eu));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_17D36:
    /* 00017d36   2  add.l D1,(A2) */
    c->pc = RC_ADDR(0x00017d36u);
    rc_step(c, m);
    t3 = c->a[2];
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 1, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_17D38:
    /* 00017d38   2  add.l D1,(A1) */
    c->pc = RC_ADDR(0x00017d38u);
    rc_step(c, m);
    t3 = c->a[1];
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 1, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_17D3A:
    /* 00017d3a   2  move.l (A2),D1 */
    c->pc = RC_ADDR(0x00017d3au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, c->a[2]);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_17D3C:
    /* 00017d3c   2  move.l (A1),D2 */
    c->pc = RC_ADDR(0x00017d3cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, c->a[1]);
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_17D3E:
    /* 00017d3e   2  move.l D1,(A1)+ */
    c->pc = RC_ADDR(0x00017d3eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    t3 = c->a[1];
    c->a[1] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_17D40:
    /* 00017d40   4  move.w D1,(4,A0) */
    c->pc = RC_ADDR(0x00017d40u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17D44:
    /* 00017d44   2  swap D1 */
    c->pc = RC_ADDR(0x00017d44u);
    rc_step(c, m);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_17D46:
    /* 00017d46   2  move.w D1,(A0) */
    c->pc = RC_ADDR(0x00017d46u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17D48:
    /* 00017d48   2  move.l D2,(A2)+ */
    c->pc = RC_ADDR(0x00017d48u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_L);
    t3 = c->a[2];
    c->a[2] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_17D4A:
    /* 00017d4a   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x00017d4au);
    rc_step(c, m);
    c->a[0] += 0x00000008u;

L_17D4C:
    /* 00017d4c   4  dbf D0,00017d32 */
    c->pc = RC_ADDR(0x00017d4cu);
    rc_step(c, m);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_17D32; }
    }

L_17D50:
    /* 00017d50   4  lea (fffff33a,A4),A0 */
    c->pc = RC_ADDR(0x00017d50u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0xcc6u);

L_17D54:
    /* 00017d54   4  lea (fffff326,A4),A1 */
    c->pc = RC_ADDR(0x00017d54u);
    rc_step(c, m);
    c->a[1] = (c->a[4] - 0xcdau);

L_17D58:
    /* 00017d58   4  move.w #4,D0 */
    c->pc = RC_ADDR(0x00017d58u);
    rc_step(c, m);
    t0 = 0x00000004u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17D5C:
    /* 00017d5c   2  move.l (A0),D1 */
    c->pc = RC_ADDR(0x00017d5cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_17D5E:
    /* 00017d5e   2  move.l (A1),(A0)+ */
    c->pc = RC_ADDR(0x00017d5eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, c->a[1]);
    t3 = c->a[0];
    c->a[0] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_17D60:
    /* 00017d60   2  move.l D1,(A1)+ */
    c->pc = RC_ADDR(0x00017d60u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    t3 = c->a[1];
    c->a[1] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_17D62:
    /* 00017d62   4  dbf D0,00017d5c */
    c->pc = RC_ADDR(0x00017d62u);
    rc_step(c, m);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_17D5C; }
    }

L_17D66:
    /* 00017d66   4  clr.l (fffff282,A4) */
    c->pc = RC_ADDR(0x00017d66u);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] - 0xd7eu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_17D6A:
    /* 00017d6a   4  tst.w (fffffd9c,A4) */
    c->pc = RC_ADDR(0x00017d6au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x264u));
    rc_set_nzvc(c, t0, RC_W);

L_17D6E:
    /* 00017d6e   4  beq 00017f28 */
    c->pc = RC_ADDR(0x00017d6eu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_17F28;

L_17D72:
    /* 00017d72   4  move.w (fffff286,A4),D0 */
    c->pc = RC_ADDR(0x00017d72u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd7au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17D76:
    /* 00017d76   4  move.w (fffff288,A4),D1 */
    c->pc = RC_ADDR(0x00017d76u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd78u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17D7A:
    /* 00017d7a   6  btst #0,(fffffd9d,A4) */
    c->pc = RC_ADDR(0x00017d7au);
    rc_step(c, m);
    t4 = 0x00000000u;
    t3 = (c->a[4] - 0x263u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_17D80:
    /* 00017d80   2  beq 00017dd2 */
    c->pc = RC_ADDR(0x00017d80u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_17DD2;

L_17D82:
    /* 00017d82   4  sub.w D0,(fffff27e,A4) */
    c->pc = RC_ADDR(0x00017d82u);
    rc_step(c, m);
    t3 = (c->a[4] - 0xd82u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_17D86:
    /* 00017d86   2  bpl 00017dd2 */
    c->pc = RC_ADDR(0x00017d86u);
    rc_step(c, m);
    if (rc_cond(c, 10)) goto L_17DD2;

L_17D88:
    /* 00017d88   4  addq.w #1,(74e,A4) */
    c->pc = RC_ADDR(0x00017d88u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x74eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17D8C:
    /* 00017d8c   4  move.w (74e,A4),D2 */
    c->pc = RC_ADDR(0x00017d8cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x74eu));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17D90:
    /* 00017d90   4  cmp.w (fffff2f0,A4),D2 */
    c->pc = RC_ADDR(0x00017d90u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd10u));
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_17D94:
    /* 00017d94   2  bne 00017da0 */
    c->pc = RC_ADDR(0x00017d94u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_17DA0;

L_17D96:
    /* 00017d96   4  subq.w #1,(74e,A4) */
    c->pc = RC_ADDR(0x00017d96u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x74eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17D9A:
    /* 00017d9a   4  clr.w (fffff27e,A4) */
    c->pc = RC_ADDR(0x00017d9au);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0xd82u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17D9E:
    /* 00017d9e   2  bra 00017dd2 */
    c->pc = RC_ADDR(0x00017d9eu);
    rc_step(c, m);
    goto L_17DD2;

L_17DA0:
    /* 00017da0   6  addi.w #10,(fffff27e,A4) */
    c->pc = RC_ADDR(0x00017da0u);
    rc_step(c, m);
    t3 = (c->a[4] - 0xd82u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000010u;
    rc_flags_add(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17DA6:
    /* 00017da6   6  move.w #fff0,(13c8,A4) */
    c->pc = RC_ADDR(0x00017da6u);
    rc_step(c, m);
    t0 = 0x0000fff0u;
    rc_wr16(c, m, (c->a[4] + 0x13c8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17DAC:
    /* 00017dac   4  addq.w #2,(fffff2d2,A4) */
    c->pc = RC_ADDR(0x00017dacu);
    rc_step(c, m);
    t3 = (c->a[4] - 0xd2eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17DB0:
    /* 00017db0   4  addq.l #2,(fffff2dc,A4) */
    c->pc = RC_ADDR(0x00017db0u);
    rc_step(c, m);
    t3 = (c->a[4] - 0xd24u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_17DB4:
    /* 00017db4   4  move.w (fffff2d2,A4),D2 */
    c->pc = RC_ADDR(0x00017db4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd2eu));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17DB8:
    /* 00017db8   4  cmp.w (fffff2ec,A4),D2 */
    c->pc = RC_ADDR(0x00017db8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd14u));
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_17DBC:
    /* 00017dbc   2  bne 00017dd2 */
    c->pc = RC_ADDR(0x00017dbcu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_17DD2;

L_17DBE:
    /* 00017dbe   4  clr.w (fffff2d2,A4) */
    c->pc = RC_ADDR(0x00017dbeu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0xd2eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17DC2:
    /* 00017dc2   4  clr.l (fffff2dc,A4) */
    c->pc = RC_ADDR(0x00017dc2u);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] - 0xd24u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_17DC6:
    /* 00017dc6   4  move.w (fffff2f2,A4),D2 */
    c->pc = RC_ADDR(0x00017dc6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0eu));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17DCA:
    /* 00017dca   2  lsl.w #1,D2 */
    c->pc = RC_ADDR(0x00017dcau);
    rc_step(c, m);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W));

L_17DCC:
    /* 00017dcc   2  ext.l D2 */
    c->pc = RC_ADDR(0x00017dccu);
    rc_step(c, m);
    rc_ext_l(c, 2);

L_17DCE:
    /* 00017dce   4  add.l D2,(fffff2e4,A4) */
    c->pc = RC_ADDR(0x00017dceu);
    rc_step(c, m);
    t3 = (c->a[4] - 0xd1cu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 2, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 2, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_17DD2:
    /* 00017dd2   6  btst #1,(fffffd9d,A4) */
    c->pc = RC_ADDR(0x00017dd2u);
    rc_step(c, m);
    t4 = 0x00000001u;
    t3 = (c->a[4] - 0x263u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_17DD8:
    /* 00017dd8   2  beq 00017e2e */
    c->pc = RC_ADDR(0x00017dd8u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_17E2E;

L_17DDA:
    /* 00017dda   4  add.w D0,(fffff27e,A4) */
    c->pc = RC_ADDR(0x00017ddau);
    rc_step(c, m);
    t3 = (c->a[4] - 0xd82u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_17DDE:
    /* 00017dde   6  cmpi.w #10,(fffff27e,A4) */
    c->pc = RC_ADDR(0x00017ddeu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd82u));
    rc_cmp(c, RC_W, t0, 0x00000010u);

L_17DE4:
    /* 00017de4   2  blt 00017e2e */
    c->pc = RC_ADDR(0x00017de4u);
    rc_step(c, m);
    if (rc_cond(c, 13)) goto L_17E2E;

L_17DE6:
    /* 00017de6   4  subq.w #1,(74e,A4) */
    c->pc = RC_ADDR(0x00017de6u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x74eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17DEA:
    /* 00017dea   2  bpl 00017df8 */
    c->pc = RC_ADDR(0x00017deau);
    rc_step(c, m);
    if (rc_cond(c, 10)) goto L_17DF8;

L_17DEC:
    /* 00017dec   4  clr.w (74e,A4) */
    c->pc = RC_ADDR(0x00017decu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x74eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17DF0:
    /* 00017df0   6  move.w #f,(fffff27e,A4) */
    c->pc = RC_ADDR(0x00017df0u);
    rc_step(c, m);
    t0 = 0x0000000fu;
    rc_wr16(c, m, (c->a[4] - 0xd82u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17DF6:
    /* 00017df6   2  bra 00017e2e */
    c->pc = RC_ADDR(0x00017df6u);
    rc_step(c, m);
    goto L_17E2E;

L_17DF8:
    /* 00017df8   6  subi.w #10,(fffff27e,A4) */
    c->pc = RC_ADDR(0x00017df8u);
    rc_step(c, m);
    t3 = (c->a[4] - 0xd82u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000010u;
    rc_flags_sub(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17DFE:
    /* 00017dfe   6  move.w #10,(13c8,A4) */
    c->pc = RC_ADDR(0x00017dfeu);
    rc_step(c, m);
    t0 = 0x00000010u;
    rc_wr16(c, m, (c->a[4] + 0x13c8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17E04:
    /* 00017e04   4  subq.w #2,(fffff2d2,A4) */
    c->pc = RC_ADDR(0x00017e04u);
    rc_step(c, m);
    t3 = (c->a[4] - 0xd2eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17E08:
    /* 00017e08   4  subq.l #2,(fffff2dc,A4) */
    c->pc = RC_ADDR(0x00017e08u);
    rc_step(c, m);
    t3 = (c->a[4] - 0xd24u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_17E0C:
    /* 00017e0c   4  tst.w (fffff2d2,A4) */
    c->pc = RC_ADDR(0x00017e0cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd2eu));
    rc_set_nzvc(c, t0, RC_W);

L_17E10:
    /* 00017e10   2  bpl 00017e2e */
    c->pc = RC_ADDR(0x00017e10u);
    rc_step(c, m);
    if (rc_cond(c, 10)) goto L_17E2E;

L_17E12:
    /* 00017e12   4  move.w (fffff2ec,A4),D2 */
    c->pc = RC_ADDR(0x00017e12u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd14u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17E16:
    /* 00017e16   2  ext.l D2 */
    c->pc = RC_ADDR(0x00017e16u);
    rc_step(c, m);
    rc_ext_l(c, 2);

L_17E18:
    /* 00017e18   2  subq.w #2,D2 */
    c->pc = RC_ADDR(0x00017e18u);
    rc_step(c, m);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_17E1A:
    /* 00017e1a   4  move.w D2,(fffff2d2,A4) */
    c->pc = RC_ADDR(0x00017e1au);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xd2eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17E1E:
    /* 00017e1e   4  move.l D2,(fffff2dc,A4) */
    c->pc = RC_ADDR(0x00017e1eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xd24u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_17E22:
    /* 00017e22   4  move.w (fffff2f2,A4),D2 */
    c->pc = RC_ADDR(0x00017e22u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0eu));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17E26:
    /* 00017e26   2  lsl.w #1,D2 */
    c->pc = RC_ADDR(0x00017e26u);
    rc_step(c, m);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W));

L_17E28:
    /* 00017e28   2  ext.l D2 */
    c->pc = RC_ADDR(0x00017e28u);
    rc_step(c, m);
    rc_ext_l(c, 2);

L_17E2A:
    /* 00017e2a   4  sub.l D2,(fffff2e4,A4) */
    c->pc = RC_ADDR(0x00017e2au);
    rc_step(c, m);
    t3 = (c->a[4] - 0xd1cu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - rc_d_get(c, 2, RC_L);
    rc_flags_sub(c, RC_L, t1, rc_d_get(c, 2, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_17E2E:
    /* 00017e2e   2  clr.l D0 */
    c->pc = RC_ADDR(0x00017e2eu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_17E30:
    /* 00017e30   2  move.w D1,D0 */
    c->pc = RC_ADDR(0x00017e30u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17E32:
    /* 00017e32   4  move.w (fffff2ce,A4),D2 */
    c->pc = RC_ADDR(0x00017e32u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd32u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17E36:
    /* 00017e36   2  ext.l D2 */
    c->pc = RC_ADDR(0x00017e36u);
    rc_step(c, m);
    rc_ext_l(c, 2);

L_17E38:
    /* 00017e38   2  mulu.w D2,D0 */
    c->pc = RC_ADDR(0x00017e38u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    rc_mulu(c, 0, t0);

L_17E3A:
    /* 00017e3a   2  mulu.w D4,D2 */
    c->pc = RC_ADDR(0x00017e3au);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_W);
    rc_mulu(c, 2, t0);

L_17E3C:
    /* 00017e3c   2  sub.w D0,D2 */
    c->pc = RC_ADDR(0x00017e3cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_17E3E:
    /* 00017e3e   6  btst #2,(fffffd9d,A4) */
    c->pc = RC_ADDR(0x00017e3eu);
    rc_step(c, m);
    t4 = 0x00000002u;
    t3 = (c->a[4] - 0x263u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_17E44:
    /* 00017e44   2  beq 00017eaa */
    c->pc = RC_ADDR(0x00017e44u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_17EAA;

L_17E46:
    /* 00017e46   4  move.l D0,(fffff282,A4) */
    c->pc = RC_ADDR(0x00017e46u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xd7eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_17E4A:
    /* 00017e4a   4  add.w D1,(fffff280,A4) */
    c->pc = RC_ADDR(0x00017e4au);
    rc_step(c, m);
    t3 = (c->a[4] - 0xd80u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_17E4E:
    /* 00017e4e   4  cmp.w (fffff280,A4),D4 */
    c->pc = RC_ADDR(0x00017e4eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd80u));
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_17E52:
    /* 00017e52   2  bgt 00017eaa */
    c->pc = RC_ADDR(0x00017e52u);
    rc_step(c, m);
    if (rc_cond(c, 14)) goto L_17EAA;

L_17E54:
    /* 00017e54   4  addq.w #1,(750,A4) */
    c->pc = RC_ADDR(0x00017e54u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x750u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17E58:
    /* 00017e58   4  move.w (750,A4),D3 */
    c->pc = RC_ADDR(0x00017e58u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x750u));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17E5C:
    /* 00017e5c   4  cmp.w (13cc,A4),D3 */
    c->pc = RC_ADDR(0x00017e5cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x13ccu));
    t1 = rc_d_get(c, 3, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_17E60:
    /* 00017e60   2  bne 00017e74 */
    c->pc = RC_ADDR(0x00017e60u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_17E74;

L_17E62:
    /* 00017e62   4  clr.l (fffff282,A4) */
    c->pc = RC_ADDR(0x00017e62u);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] - 0xd7eu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_17E66:
    /* 00017e66   4  subq.w #1,(750,A4) */
    c->pc = RC_ADDR(0x00017e66u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x750u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17E6A:
    /* 00017e6a   4  move.w D4,(fffff280,A4) */
    c->pc = RC_ADDR(0x00017e6au);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xd80u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17E6E:
    /* 00017e6e   4  subq.w #1,(fffff280,A4) */
    c->pc = RC_ADDR(0x00017e6eu);
    rc_step(c, m);
    t3 = (c->a[4] - 0xd80u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17E72:
    /* 00017e72   2  bra 00017eaa */
    c->pc = RC_ADDR(0x00017e72u);
    rc_step(c, m);
    goto L_17EAA;

L_17E74:
    /* 00017e74   4  sub.w D4,(fffff280,A4) */
    c->pc = RC_ADDR(0x00017e74u);
    rc_step(c, m);
    t3 = (c->a[4] - 0xd80u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 4, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 4, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_17E78:
    /* 00017e78   4  move.w D4,(13ca,A4) */
    c->pc = RC_ADDR(0x00017e78u);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x13cau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17E7C:
    /* 00017e7c   4  neg.w (13ca,A4) */
    c->pc = RC_ADDR(0x00017e7cu);
    rc_step(c, m);
    t3 = (c->a[4] + 0x13cau);
    t1 = rc_rd16(c, m, t3);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17E80:
    /* 00017e80   2  neg.l D2 */
    c->pc = RC_ADDR(0x00017e80u);
    rc_step(c, m);
    t1 = rc_d_get(c, 2, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_L, t2);

L_17E82:
    /* 00017e82   4  move.l D2,(fffff282,A4) */
    c->pc = RC_ADDR(0x00017e82u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xd7eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_17E86:
    /* 00017e86   4  add.w D4,(fffff2d6,A4) */
    c->pc = RC_ADDR(0x00017e86u);
    rc_step(c, m);
    t3 = (c->a[4] - 0xd2au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 4, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 4, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_17E8A:
    /* 00017e8a   4  move.w (fffff2d6,A4),D2 */
    c->pc = RC_ADDR(0x00017e8au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd2au));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17E8E:
    /* 00017e8e   4  cmp.w (fffff2ee,A4),D2 */
    c->pc = RC_ADDR(0x00017e8eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd12u));
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_17E92:
    /* 00017e92   2  bne 00017ea2 */
    c->pc = RC_ADDR(0x00017e92u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_17EA2;

L_17E94:
    /* 00017e94   4  clr.l (fffff2e0,A4) */
    c->pc = RC_ADDR(0x00017e94u);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] - 0xd20u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_17E98:
    /* 00017e98   4  clr.w (fffff2d6,A4) */
    c->pc = RC_ADDR(0x00017e98u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0xd2au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17E9C:
    /* 00017e9c   4  addq.l #2,(fffff2e4,A4) */
    c->pc = RC_ADDR(0x00017e9cu);
    rc_step(c, m);
    t3 = (c->a[4] - 0xd1cu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_17EA0:
    /* 00017ea0   2  bra 00017eaa */
    c->pc = RC_ADDR(0x00017ea0u);
    rc_step(c, m);
    goto L_17EAA;

L_17EA2:
    /* 00017ea2   4  mulu.w (fffff2f4,A4),D2 */
    c->pc = RC_ADDR(0x00017ea2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0cu));
    rc_mulu(c, 2, t0);

L_17EA6:
    /* 00017ea6   4  move.l D2,(fffff2e0,A4) */
    c->pc = RC_ADDR(0x00017ea6u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xd20u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_17EAA:
    /* 00017eaa   6  btst #3,(fffffd9d,A4) */
    c->pc = RC_ADDR(0x00017eaau);
    rc_step(c, m);
    t4 = 0x00000003u;
    t3 = (c->a[4] - 0x263u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_17EB0:
    /* 00017eb0   2  beq 00017efc */
    c->pc = RC_ADDR(0x00017eb0u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_17EFC;

L_17EB2:
    /* 00017eb2   2  neg.l D0 */
    c->pc = RC_ADDR(0x00017eb2u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_17EB4:
    /* 00017eb4   4  move.l D0,(fffff282,A4) */
    c->pc = RC_ADDR(0x00017eb4u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xd7eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_17EB8:
    /* 00017eb8   4  sub.w D1,(fffff280,A4) */
    c->pc = RC_ADDR(0x00017eb8u);
    rc_step(c, m);
    t3 = (c->a[4] - 0xd80u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 1, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_17EBC:
    /* 00017ebc   2  bpl 00017efc */
    c->pc = RC_ADDR(0x00017ebcu);
    rc_step(c, m);
    if (rc_cond(c, 10)) goto L_17EFC;

L_17EBE:
    /* 00017ebe   4  subq.w #1,(750,A4) */
    c->pc = RC_ADDR(0x00017ebeu);
    rc_step(c, m);
    t3 = (c->a[4] + 0x750u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17EC2:
    /* 00017ec2   2  bpl 00017ed2 */
    c->pc = RC_ADDR(0x00017ec2u);
    rc_step(c, m);
    if (rc_cond(c, 10)) goto L_17ED2;

L_17EC4:
    /* 00017ec4   4  clr.w (fffff280,A4) */
    c->pc = RC_ADDR(0x00017ec4u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0xd80u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17EC8:
    /* 00017ec8   4  clr.w (750,A4) */
    c->pc = RC_ADDR(0x00017ec8u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x750u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17ECC:
    /* 00017ecc   4  clr.l (fffff282,A4) */
    c->pc = RC_ADDR(0x00017eccu);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] - 0xd7eu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_17ED0:
    /* 00017ed0   2  bra 00017efc */
    c->pc = RC_ADDR(0x00017ed0u);
    rc_step(c, m);
    goto L_17EFC;

L_17ED2:
    /* 00017ed2   4  add.w D4,(fffff280,A4) */
    c->pc = RC_ADDR(0x00017ed2u);
    rc_step(c, m);
    t3 = (c->a[4] - 0xd80u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 4, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 4, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_17ED6:
    /* 00017ed6   4  move.w D4,(13ca,A4) */
    c->pc = RC_ADDR(0x00017ed6u);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x13cau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17EDA:
    /* 00017eda   4  move.l D2,(fffff282,A4) */
    c->pc = RC_ADDR(0x00017edau);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xd7eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_17EDE:
    /* 00017ede   4  move.w (fffff2d6,A4),D2 */
    c->pc = RC_ADDR(0x00017edeu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd2au));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17EE2:
    /* 00017ee2   2  sub.w D4,D2 */
    c->pc = RC_ADDR(0x00017ee2u);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_17EE4:
    /* 00017ee4   2  bpl 00017ef0 */
    c->pc = RC_ADDR(0x00017ee4u);
    rc_step(c, m);
    if (rc_cond(c, 10)) goto L_17EF0;

L_17EE6:
    /* 00017ee6   4  move.w (fffff2ee,A4),D2 */
    c->pc = RC_ADDR(0x00017ee6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd12u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17EEA:
    /* 00017eea   2  sub.w D4,D2 */
    c->pc = RC_ADDR(0x00017eeau);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_17EEC:
    /* 00017eec   4  subq.l #2,(fffff2e4,A4) */
    c->pc = RC_ADDR(0x00017eecu);
    rc_step(c, m);
    t3 = (c->a[4] - 0xd1cu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_17EF0:
    /* 00017ef0   4  move.w D2,(fffff2d6,A4) */
    c->pc = RC_ADDR(0x00017ef0u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xd2au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17EF4:
    /* 00017ef4   4  mulu.w (fffff2f4,A4),D2 */
    c->pc = RC_ADDR(0x00017ef4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0cu));
    rc_mulu(c, 2, t0);

L_17EF8:
    /* 00017ef8   4  move.l D2,(fffff2e0,A4) */
    c->pc = RC_ADDR(0x00017ef8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xd20u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_17EFC:
    /* 00017efc   4  clr.w (fffff2d4,A4) */
    c->pc = RC_ADDR(0x00017efcu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0xd2cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17F00:
    /* 00017f00   4  tst.w (fffff2d2,A4) */
    c->pc = RC_ADDR(0x00017f00u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd2eu));
    rc_set_nzvc(c, t0, RC_W);

L_17F04:
    /* 00017f04   2  beq 00017f12 */
    c->pc = RC_ADDR(0x00017f04u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_17F12;

L_17F06:
    /* 00017f06   4  move.w (fffff2ec,A4),D0 */
    c->pc = RC_ADDR(0x00017f06u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd14u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17F0A:
    /* 00017f0a   4  sub.w (fffff2d2,A4),D0 */
    c->pc = RC_ADDR(0x00017f0au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd2eu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_17F0E:
    /* 00017f0e   4  move.w D0,(fffff2d4,A4) */
    c->pc = RC_ADDR(0x00017f0eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xd2cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17F12:
    /* 00017f12   4  clr.w (fffff2d8,A4) */
    c->pc = RC_ADDR(0x00017f12u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0xd28u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17F16:
    /* 00017f16   4  tst.w (fffff2d6,A4) */
    c->pc = RC_ADDR(0x00017f16u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd2au));
    rc_set_nzvc(c, t0, RC_W);

L_17F1A:
    /* 00017f1a   2  beq 00017f28 */
    c->pc = RC_ADDR(0x00017f1au);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_17F28;

L_17F1C:
    /* 00017f1c   4  move.w (fffff2ee,A4),D0 */
    c->pc = RC_ADDR(0x00017f1cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17F20:
    /* 00017f20   4  sub.w (fffff2d6,A4),D0 */
    c->pc = RC_ADDR(0x00017f20u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd2au));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_17F24:
    /* 00017f24   4  move.w D0,(fffff2d8,A4) */
    c->pc = RC_ADDR(0x00017f24u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xd28u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17F28:
    /* 00017f28   4  clr.w (fffff28a,A4) */
    c->pc = RC_ADDR(0x00017f28u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0xd76u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17F2C:
    /* 00017f2c   4  clr.w (af4,A4) */
    c->pc = RC_ADDR(0x00017f2cu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0xaf4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17F30:
    /* 00017f30   2  move.l (A7)+,D4 */
    c->pc = RC_ADDR(0x00017f30u);
    rc_step(c, m);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_17F32:
    /* 00017f32   2  rts */
    c->pc = RC_ADDR(0x00017f32u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
