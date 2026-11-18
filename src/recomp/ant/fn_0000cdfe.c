/* fn_0000cdfe - 294 byte(s), 83 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000cdfe(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000cdfeu): goto L_CDFE;
    case RC_ADDR(0x0000ce02u): goto L_CE02;
    case RC_ADDR(0x0000ce04u): goto L_CE04;
    case RC_ADDR(0x0000ce08u): goto L_CE08;
    case RC_ADDR(0x0000ce0au): goto L_CE0A;
    case RC_ADDR(0x0000ce0eu): goto L_CE0E;
    case RC_ADDR(0x0000ce14u): goto L_CE14;
    case RC_ADDR(0x0000ce16u): goto L_CE16;
    case RC_ADDR(0x0000ce1au): goto L_CE1A;
    case RC_ADDR(0x0000ce1eu): goto L_CE1E;
    case RC_ADDR(0x0000ce22u): goto L_CE22;
    case RC_ADDR(0x0000ce24u): goto L_CE24;
    case RC_ADDR(0x0000ce28u): goto L_CE28;
    case RC_ADDR(0x0000ce2cu): goto L_CE2C;
    case RC_ADDR(0x0000ce30u): goto L_CE30;
    case RC_ADDR(0x0000ce34u): goto L_CE34;
    case RC_ADDR(0x0000ce38u): goto L_CE38;
    case RC_ADDR(0x0000ce3cu): goto L_CE3C;
    case RC_ADDR(0x0000ce40u): goto L_CE40;
    case RC_ADDR(0x0000ce42u): goto L_CE42;
    case RC_ADDR(0x0000ce46u): goto L_CE46;
    case RC_ADDR(0x0000ce4au): goto L_CE4A;
    case RC_ADDR(0x0000ce4eu): goto L_CE4E;
    case RC_ADDR(0x0000ce52u): goto L_CE52;
    case RC_ADDR(0x0000ce54u): goto L_CE54;
    case RC_ADDR(0x0000ce58u): goto L_CE58;
    case RC_ADDR(0x0000ce5cu): goto L_CE5C;
    case RC_ADDR(0x0000ce60u): goto L_CE60;
    case RC_ADDR(0x0000ce64u): goto L_CE64;
    case RC_ADDR(0x0000ce68u): goto L_CE68;
    case RC_ADDR(0x0000ce6cu): goto L_CE6C;
    case RC_ADDR(0x0000ce6eu): goto L_CE6E;
    case RC_ADDR(0x0000ce72u): goto L_CE72;
    case RC_ADDR(0x0000ce76u): goto L_CE76;
    case RC_ADDR(0x0000ce7au): goto L_CE7A;
    case RC_ADDR(0x0000ce7cu): goto L_CE7C;
    case RC_ADDR(0x0000ce80u): goto L_CE80;
    case RC_ADDR(0x0000ce82u): goto L_CE82;
    case RC_ADDR(0x0000ce84u): goto L_CE84;
    case RC_ADDR(0x0000ce86u): goto L_CE86;
    case RC_ADDR(0x0000ce8au): goto L_CE8A;
    case RC_ADDR(0x0000ce8eu): goto L_CE8E;
    case RC_ADDR(0x0000ce92u): goto L_CE92;
    case RC_ADDR(0x0000ce94u): goto L_CE94;
    case RC_ADDR(0x0000ce98u): goto L_CE98;
    case RC_ADDR(0x0000ce9cu): goto L_CE9C;
    case RC_ADDR(0x0000cea0u): goto L_CEA0;
    case RC_ADDR(0x0000cea2u): goto L_CEA2;
    case RC_ADDR(0x0000cea6u): goto L_CEA6;
    case RC_ADDR(0x0000ceaau): goto L_CEAA;
    case RC_ADDR(0x0000ceaeu): goto L_CEAE;
    case RC_ADDR(0x0000ceb2u): goto L_CEB2;
    case RC_ADDR(0x0000ceb6u): goto L_CEB6;
    case RC_ADDR(0x0000cebau): goto L_CEBA;
    case RC_ADDR(0x0000cebeu): goto L_CEBE;
    case RC_ADDR(0x0000cec0u): goto L_CEC0;
    case RC_ADDR(0x0000cec4u): goto L_CEC4;
    case RC_ADDR(0x0000cec8u): goto L_CEC8;
    case RC_ADDR(0x0000ceccu): goto L_CECC;
    case RC_ADDR(0x0000ced0u): goto L_CED0;
    case RC_ADDR(0x0000ced2u): goto L_CED2;
    case RC_ADDR(0x0000ced6u): goto L_CED6;
    case RC_ADDR(0x0000cedau): goto L_CEDA;
    case RC_ADDR(0x0000cedeu): goto L_CEDE;
    case RC_ADDR(0x0000cee2u): goto L_CEE2;
    case RC_ADDR(0x0000cee6u): goto L_CEE6;
    case RC_ADDR(0x0000ceeau): goto L_CEEA;
    case RC_ADDR(0x0000ceecu): goto L_CEEC;
    case RC_ADDR(0x0000cef0u): goto L_CEF0;
    case RC_ADDR(0x0000cef4u): goto L_CEF4;
    case RC_ADDR(0x0000cef8u): goto L_CEF8;
    case RC_ADDR(0x0000cefau): goto L_CEFA;
    case RC_ADDR(0x0000cefeu): goto L_CEFE;
    case RC_ADDR(0x0000cf00u): goto L_CF00;
    case RC_ADDR(0x0000cf02u): goto L_CF02;
    case RC_ADDR(0x0000cf08u): goto L_CF08;
    case RC_ADDR(0x0000cf0cu): goto L_CF0C;
    case RC_ADDR(0x0000cf10u): goto L_CF10;
    case RC_ADDR(0x0000cf12u): goto L_CF12;
    case RC_ADDR(0x0000cf18u): goto L_CF18;
    case RC_ADDR(0x0000cf1eu): goto L_CF1E;
    case RC_ADDR(0x0000cf20u): goto L_CF20;
    case RC_ADDR(0x0000cf22u): goto L_CF22;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_CDFE:
    /* 0000cdfe   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0000cdfeu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_CE02:
    /* 0000ce02   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x0000ce02u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CE04:
    /* 0000ce04   4  tst.w (e16,A4) */
    c->pc = RC_ADDR(0x0000ce04u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe16u));
    rc_set_nzvc(c, t0, RC_W);

L_CE08:
    /* 0000ce08   2  beq 0000ce0e */
    c->pc = RC_ADDR(0x0000ce08u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_CE0E;

L_CE0A:
    /* 0000ce0a   4  subq.w #1,(e16,A4) */
    c->pc = RC_ADDR(0x0000ce0au);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xe16u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_CE0E:
    /* 0000ce0e   6  cmpi.w #1,(e16,A4) */
    c->pc = RC_ADDR(0x0000ce0eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe16u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_CE14:
    /* 0000ce14   2  bne 0000ce52 */
    c->pc = RC_ADDR(0x0000ce14u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_CE52;

L_CE16:
    /* 0000ce16   4  move.w #9,-(A7) */
    c->pc = RC_ADDR(0x0000ce16u);
    rc_step(c, m, 12);
    t0 = 0x00000009u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CE1A:
    /* 0000ce1a   4  move.w (928,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ce1au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x928u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CE1E:
    /* 0000ce1e   4  move.w (926,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ce1eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x926u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CE22:
    /* 0000ce22   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000ce22u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CE24:
    /* 0000ce24   4  move.l (e28,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ce24u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe28u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CE28:
    /* 0000ce28   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000ce28u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CE2C:
    /* 0000ce2c   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000ce2cu);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000ce30u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_CE30:
    /* 0000ce30   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000ce30u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_CE34:
    /* 0000ce34   4  move.w #8,-(A7) */
    c->pc = RC_ADDR(0x0000ce34u);
    rc_step(c, m, 12);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CE38:
    /* 0000ce38   4  move.w (e58,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ce38u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe58u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CE3C:
    /* 0000ce3c   4  move.w (e56,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ce3cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe56u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CE40:
    /* 0000ce40   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000ce40u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CE42:
    /* 0000ce42   4  move.l (e1c,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ce42u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe1cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CE46:
    /* 0000ce46   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000ce46u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CE4A:
    /* 0000ce4a   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000ce4au);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000ce4eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_CE4E:
    /* 0000ce4e   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000ce4eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_CE52:
    /* 0000ce52   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000ce52u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CE54:
    /* 0000ce54   4  move.l (e1c,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ce54u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe1cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CE58:
    /* 0000ce58   4  movea.l (838,A4),A0 */
    c->pc = RC_ADDR(0x0000ce58u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x838u));
    c->a[0] = t0;

L_CE5C:
    /* 0000ce5c   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000ce5cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CE60:
    /* 0000ce60   4  jsr (ffff8248,A4) */
    c->pc = RC_ADDR(0x0000ce60u);
    rc_step(c, m, 18);
    /* vector 97 */
    rc_push32(c, m, RC_ADDR(0x0000ce64u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d3eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001fe0au);
    return;

L_CE64:
    /* 0000ce64   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000ce64u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_CE68:
    /* 0000ce68   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000ce68u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_CE6C:
    /* 0000ce6c   2  beq 0000ced0 */
    c->pc = RC_ADDR(0x0000ce6cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_CED0;

L_CE6E:
    /* 0000ce6e   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0000ce6eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_CE72:
    /* 0000ce72   4  movea.l (e1c,A4),A1 */
    c->pc = RC_ADDR(0x0000ce72u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe1cu));
    c->a[1] = t0;

L_CE76:
    /* 0000ce76   4  move.w (c,A1),D0 */
    c->pc = RC_ADDR(0x0000ce76u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CE7A:
    /* 0000ce7a   2  subq.w #2,D0 */
    c->pc = RC_ADDR(0x0000ce7au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_CE7C:
    /* 0000ce7c   4  move.w (2a,A0),D1 */
    c->pc = RC_ADDR(0x0000ce7cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CE80:
    /* 0000ce80   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x0000ce80u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_CE82:
    /* 0000ce82   2  blt 0000ced0 */
    c->pc = RC_ADDR(0x0000ce82u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_CED0;

L_CE84:
    /* 0000ce84   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000ce84u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CE86:
    /* 0000ce86   4  move.l (e1c,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ce86u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe1cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CE8A:
    /* 0000ce8a   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000ce8au);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CE8E:
    /* 0000ce8e   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000ce8eu);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000ce92u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_CE92:
    /* 0000ce92   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000ce92u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_CE94:
    /* 0000ce94   4  move.w #8,-(A7) */
    c->pc = RC_ADDR(0x0000ce94u);
    rc_step(c, m, 12);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CE98:
    /* 0000ce98   4  move.w (e58,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ce98u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe58u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CE9C:
    /* 0000ce9c   4  move.w (e56,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ce9cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe56u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CEA0:
    /* 0000cea0   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000cea0u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CEA2:
    /* 0000cea2   4  move.l (e20,A4),-(A7) */
    c->pc = RC_ADDR(0x0000cea2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe20u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CEA6:
    /* 0000cea6   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000cea6u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CEAA:
    /* 0000ceaa   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000ceaau);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000ceaeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_CEAE:
    /* 0000ceae   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000ceaeu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_CEB2:
    /* 0000ceb2   4  move.w #8,-(A7) */
    c->pc = RC_ADDR(0x0000ceb2u);
    rc_step(c, m, 12);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CEB6:
    /* 0000ceb6   4  move.w (e58,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ceb6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe58u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CEBA:
    /* 0000ceba   4  move.w (e56,A4),-(A7) */
    c->pc = RC_ADDR(0x0000cebau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe56u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CEBE:
    /* 0000cebe   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000cebeu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CEC0:
    /* 0000cec0   4  move.l (e24,A4),-(A7) */
    c->pc = RC_ADDR(0x0000cec0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe24u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CEC4:
    /* 0000cec4   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000cec4u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CEC8:
    /* 0000cec8   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000cec8u);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000ceccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_CECC:
    /* 0000cecc   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000ceccu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_CED0:
    /* 0000ced0   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000ced0u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CED2:
    /* 0000ced2   4  move.l (e2c,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ced2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CED6:
    /* 0000ced6   4  movea.l (838,A4),A0 */
    c->pc = RC_ADDR(0x0000ced6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x838u));
    c->a[0] = t0;

L_CEDA:
    /* 0000ceda   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000cedau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CEDE:
    /* 0000cede   4  jsr (ffff8248,A4) */
    c->pc = RC_ADDR(0x0000cedeu);
    rc_step(c, m, 18);
    /* vector 97 */
    rc_push32(c, m, RC_ADDR(0x0000cee2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d3eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001fe0au);
    return;

L_CEE2:
    /* 0000cee2   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000cee2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_CEE6:
    /* 0000cee6   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000cee6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_CEEA:
    /* 0000ceea   2  beq 0000cf1e */
    c->pc = RC_ADDR(0x0000ceeau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_CF1E;

L_CEEC:
    /* 0000ceec   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0000ceecu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_CEF0:
    /* 0000cef0   4  movea.l (e2c,A4),A1 */
    c->pc = RC_ADDR(0x0000cef0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe2cu));
    c->a[1] = t0;

L_CEF4:
    /* 0000cef4   4  move.w (c,A1),D0 */
    c->pc = RC_ADDR(0x0000cef4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CEF8:
    /* 0000cef8   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x0000cef8u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_CEFA:
    /* 0000cefa   4  move.w (2a,A0),D1 */
    c->pc = RC_ADDR(0x0000cefau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CEFE:
    /* 0000cefe   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x0000cefeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_CF00:
    /* 0000cf00   2  blt 0000cf1e */
    c->pc = RC_ADDR(0x0000cf00u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_CF1E;

L_CF02:
    /* 0000cf02   6  move.l (fffffffc,A5),(838,A4) */
    c->pc = RC_ADDR(0x0000cf02u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_CF08:
    /* 0000cf08   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000cf08u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CF0C:
    /* 0000cf0c   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000cf0cu);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000cf10u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_CF10:
    /* 0000cf10   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000cf10u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_CF12:
    /* 0000cf12   6  move.w #1,(856,A4) */
    c->pc = RC_ADDR(0x0000cf12u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x856u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CF18:
    /* 0000cf18   6  move.w #1,(caa,A4) */
    c->pc = RC_ADDR(0x0000cf18u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xcaau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CF1E:
    /* 0000cf1e   2  move.l (A7)+,D4 */
    c->pc = RC_ADDR(0x0000cf1eu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CF20:
    /* 0000cf20   2  unlk A5 */
    c->pc = RC_ADDR(0x0000cf20u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_CF22:
    /* 0000cf22   2  rts */
    c->pc = RC_ADDR(0x0000cf22u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
