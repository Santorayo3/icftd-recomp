/* fn_0001ce8e - 466 byte(s), 121 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001ce8e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001ce8eu): goto L_1CE8E;
    case RC_ADDR(0x0001ce92u): goto L_1CE92;
    case RC_ADDR(0x0001ce96u): goto L_1CE96;
    case RC_ADDR(0x0001ce9au): goto L_1CE9A;
    case RC_ADDR(0x0001ce9eu): goto L_1CE9E;
    case RC_ADDR(0x0001cea2u): goto L_1CEA2;
    case RC_ADDR(0x0001cea6u): goto L_1CEA6;
    case RC_ADDR(0x0001ceaau): goto L_1CEAA;
    case RC_ADDR(0x0001ceacu): goto L_1CEAC;
    case RC_ADDR(0x0001ceb0u): goto L_1CEB0;
    case RC_ADDR(0x0001ceb4u): goto L_1CEB4;
    case RC_ADDR(0x0001ceb8u): goto L_1CEB8;
    case RC_ADDR(0x0001cebcu): goto L_1CEBC;
    case RC_ADDR(0x0001cec0u): goto L_1CEC0;
    case RC_ADDR(0x0001cec4u): goto L_1CEC4;
    case RC_ADDR(0x0001cec8u): goto L_1CEC8;
    case RC_ADDR(0x0001ceccu): goto L_1CECC;
    case RC_ADDR(0x0001ced0u): goto L_1CED0;
    case RC_ADDR(0x0001ced4u): goto L_1CED4;
    case RC_ADDR(0x0001ced8u): goto L_1CED8;
    case RC_ADDR(0x0001cedcu): goto L_1CEDC;
    case RC_ADDR(0x0001cee0u): goto L_1CEE0;
    case RC_ADDR(0x0001cee4u): goto L_1CEE4;
    case RC_ADDR(0x0001cee8u): goto L_1CEE8;
    case RC_ADDR(0x0001ceeau): goto L_1CEEA;
    case RC_ADDR(0x0001ceeeu): goto L_1CEEE;
    case RC_ADDR(0x0001cef2u): goto L_1CEF2;
    case RC_ADDR(0x0001cef6u): goto L_1CEF6;
    case RC_ADDR(0x0001cefau): goto L_1CEFA;
    case RC_ADDR(0x0001cefeu): goto L_1CEFE;
    case RC_ADDR(0x0001cf02u): goto L_1CF02;
    case RC_ADDR(0x0001cf06u): goto L_1CF06;
    case RC_ADDR(0x0001cf0au): goto L_1CF0A;
    case RC_ADDR(0x0001cf0eu): goto L_1CF0E;
    case RC_ADDR(0x0001cf12u): goto L_1CF12;
    case RC_ADDR(0x0001cf16u): goto L_1CF16;
    case RC_ADDR(0x0001cf1au): goto L_1CF1A;
    case RC_ADDR(0x0001cf1eu): goto L_1CF1E;
    case RC_ADDR(0x0001cf22u): goto L_1CF22;
    case RC_ADDR(0x0001cf26u): goto L_1CF26;
    case RC_ADDR(0x0001cf2au): goto L_1CF2A;
    case RC_ADDR(0x0001cf2eu): goto L_1CF2E;
    case RC_ADDR(0x0001cf32u): goto L_1CF32;
    case RC_ADDR(0x0001cf36u): goto L_1CF36;
    case RC_ADDR(0x0001cf3au): goto L_1CF3A;
    case RC_ADDR(0x0001cf3eu): goto L_1CF3E;
    case RC_ADDR(0x0001cf42u): goto L_1CF42;
    case RC_ADDR(0x0001cf46u): goto L_1CF46;
    case RC_ADDR(0x0001cf4au): goto L_1CF4A;
    case RC_ADDR(0x0001cf4eu): goto L_1CF4E;
    case RC_ADDR(0x0001cf52u): goto L_1CF52;
    case RC_ADDR(0x0001cf56u): goto L_1CF56;
    case RC_ADDR(0x0001cf5au): goto L_1CF5A;
    case RC_ADDR(0x0001cf5eu): goto L_1CF5E;
    case RC_ADDR(0x0001cf62u): goto L_1CF62;
    case RC_ADDR(0x0001cf66u): goto L_1CF66;
    case RC_ADDR(0x0001cf6au): goto L_1CF6A;
    case RC_ADDR(0x0001cf6eu): goto L_1CF6E;
    case RC_ADDR(0x0001cf72u): goto L_1CF72;
    case RC_ADDR(0x0001cf76u): goto L_1CF76;
    case RC_ADDR(0x0001cf7au): goto L_1CF7A;
    case RC_ADDR(0x0001cf7eu): goto L_1CF7E;
    case RC_ADDR(0x0001cf82u): goto L_1CF82;
    case RC_ADDR(0x0001cf86u): goto L_1CF86;
    case RC_ADDR(0x0001cf88u): goto L_1CF88;
    case RC_ADDR(0x0001cf8cu): goto L_1CF8C;
    case RC_ADDR(0x0001cf90u): goto L_1CF90;
    case RC_ADDR(0x0001cf94u): goto L_1CF94;
    case RC_ADDR(0x0001cf96u): goto L_1CF96;
    case RC_ADDR(0x0001cf9au): goto L_1CF9A;
    case RC_ADDR(0x0001cfa2u): goto L_1CFA2;
    case RC_ADDR(0x0001cfa4u): goto L_1CFA4;
    case RC_ADDR(0x0001cfa8u): goto L_1CFA8;
    case RC_ADDR(0x0001cfacu): goto L_1CFAC;
    case RC_ADDR(0x0001cfb0u): goto L_1CFB0;
    case RC_ADDR(0x0001cfb4u): goto L_1CFB4;
    case RC_ADDR(0x0001cfb6u): goto L_1CFB6;
    case RC_ADDR(0x0001cfbau): goto L_1CFBA;
    case RC_ADDR(0x0001cfbeu): goto L_1CFBE;
    case RC_ADDR(0x0001cfc2u): goto L_1CFC2;
    case RC_ADDR(0x0001cfc4u): goto L_1CFC4;
    case RC_ADDR(0x0001cfc8u): goto L_1CFC8;
    case RC_ADDR(0x0001cfd0u): goto L_1CFD0;
    case RC_ADDR(0x0001cfd2u): goto L_1CFD2;
    case RC_ADDR(0x0001cfd6u): goto L_1CFD6;
    case RC_ADDR(0x0001cfdau): goto L_1CFDA;
    case RC_ADDR(0x0001cfdeu): goto L_1CFDE;
    case RC_ADDR(0x0001cfe2u): goto L_1CFE2;
    case RC_ADDR(0x0001cfe4u): goto L_1CFE4;
    case RC_ADDR(0x0001cfe8u): goto L_1CFE8;
    case RC_ADDR(0x0001cfecu): goto L_1CFEC;
    case RC_ADDR(0x0001cff0u): goto L_1CFF0;
    case RC_ADDR(0x0001cff2u): goto L_1CFF2;
    case RC_ADDR(0x0001cff6u): goto L_1CFF6;
    case RC_ADDR(0x0001cffeu): goto L_1CFFE;
    case RC_ADDR(0x0001d000u): goto L_1D000;
    case RC_ADDR(0x0001d004u): goto L_1D004;
    case RC_ADDR(0x0001d008u): goto L_1D008;
    case RC_ADDR(0x0001d00cu): goto L_1D00C;
    case RC_ADDR(0x0001d010u): goto L_1D010;
    case RC_ADDR(0x0001d012u): goto L_1D012;
    case RC_ADDR(0x0001d016u): goto L_1D016;
    case RC_ADDR(0x0001d01au): goto L_1D01A;
    case RC_ADDR(0x0001d01eu): goto L_1D01E;
    case RC_ADDR(0x0001d020u): goto L_1D020;
    case RC_ADDR(0x0001d024u): goto L_1D024;
    case RC_ADDR(0x0001d02cu): goto L_1D02C;
    case RC_ADDR(0x0001d02eu): goto L_1D02E;
    case RC_ADDR(0x0001d032u): goto L_1D032;
    case RC_ADDR(0x0001d036u): goto L_1D036;
    case RC_ADDR(0x0001d03au): goto L_1D03A;
    case RC_ADDR(0x0001d03eu): goto L_1D03E;
    case RC_ADDR(0x0001d040u): goto L_1D040;
    case RC_ADDR(0x0001d044u): goto L_1D044;
    case RC_ADDR(0x0001d048u): goto L_1D048;
    case RC_ADDR(0x0001d04cu): goto L_1D04C;
    case RC_ADDR(0x0001d04eu): goto L_1D04E;
    case RC_ADDR(0x0001d052u): goto L_1D052;
    case RC_ADDR(0x0001d05au): goto L_1D05A;
    case RC_ADDR(0x0001d05cu): goto L_1D05C;
    case RC_ADDR(0x0001d05eu): goto L_1D05E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1CE8E:
    /* 0001ce8e   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0001ce8eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1CE92:
    /* 0001ce92   4  pea (2976,A4) */
    c->pc = RC_ADDR(0x0001ce92u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2976u));

L_1CE96:
    /* 0001ce96   4  move.w #8,-(A7) */
    c->pc = RC_ADDR(0x0001ce96u);
    rc_step(c, m, 12);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CE9A:
    /* 0001ce9a   4  pea (0001d060) */
    c->pc = RC_ADDR(0x0001ce9au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001d060u));

L_1CE9E:
    /* 0001ce9e   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x0001ce9eu);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x0001cea2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001850eu);
    return;

L_1CEA2:
    /* 0001cea2   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001cea2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1CEA6:
    /* 0001cea6   4  tst.w (7b6,A4) */
    c->pc = RC_ADDR(0x0001cea6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7b6u));
    rc_set_nzvc(c, t0, RC_W);

L_1CEAA:
    /* 0001ceaa   2  beq 0001ceea */
    c->pc = RC_ADDR(0x0001ceaau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1CEEA;

L_1CEAC:
    /* 0001ceac   4  pea (114c,A4) */
    c->pc = RC_ADDR(0x0001ceacu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x114cu));

L_1CEB0:
    /* 0001ceb0   4  move.w #2b,-(A7) */
    c->pc = RC_ADDR(0x0001ceb0u);
    rc_step(c, m, 12);
    t0 = 0x0000002bu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CEB4:
    /* 0001ceb4   4  pea (0001d065) */
    c->pc = RC_ADDR(0x0001ceb4u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001d065u));

L_1CEB8:
    /* 0001ceb8   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x0001ceb8u);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x0001cebcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001850eu);
    return;

L_1CEBC:
    /* 0001cebc   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001cebcu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1CEC0:
    /* 0001cec0   4  pea (2996,A4) */
    c->pc = RC_ADDR(0x0001cec0u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2996u));

L_1CEC4:
    /* 0001cec4   4  move.w #17,-(A7) */
    c->pc = RC_ADDR(0x0001cec4u);
    rc_step(c, m, 12);
    t0 = 0x00000017u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CEC8:
    /* 0001cec8   4  pea (0001d06b) */
    c->pc = RC_ADDR(0x0001cec8u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001d06bu));

L_1CECC:
    /* 0001cecc   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x0001ceccu);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x0001ced0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001850eu);
    return;

L_1CED0:
    /* 0001ced0   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001ced0u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1CED4:
    /* 0001ced4   4  pea (29f2,A4) */
    c->pc = RC_ADDR(0x0001ced4u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x29f2u));

L_1CED8:
    /* 0001ced8   4  move.w #11,-(A7) */
    c->pc = RC_ADDR(0x0001ced8u);
    rc_step(c, m, 12);
    t0 = 0x00000011u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CEDC:
    /* 0001cedc   4  pea (0001d071) */
    c->pc = RC_ADDR(0x0001cedcu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001d071u));

L_1CEE0:
    /* 0001cee0   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x0001cee0u);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x0001cee4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001850eu);
    return;

L_1CEE4:
    /* 0001cee4   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001cee4u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1CEE8:
    /* 0001cee8   2  bra 0001cf26 */
    c->pc = RC_ADDR(0x0001cee8u);
    rc_step(c, m, 10);
    goto L_1CF26;

L_1CEEA:
    /* 0001ceea   4  pea (114c,A4) */
    c->pc = RC_ADDR(0x0001ceeau);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x114cu));

L_1CEEE:
    /* 0001ceee   4  move.w #2b,-(A7) */
    c->pc = RC_ADDR(0x0001ceeeu);
    rc_step(c, m, 12);
    t0 = 0x0000002bu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CEF2:
    /* 0001cef2   4  pea (0001d077) */
    c->pc = RC_ADDR(0x0001cef2u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001d077u));

L_1CEF6:
    /* 0001cef6   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x0001cef6u);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x0001cefau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001850eu);
    return;

L_1CEFA:
    /* 0001cefa   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001cefau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1CEFE:
    /* 0001cefe   4  pea (2996,A4) */
    c->pc = RC_ADDR(0x0001cefeu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2996u));

L_1CF02:
    /* 0001cf02   4  move.w #17,-(A7) */
    c->pc = RC_ADDR(0x0001cf02u);
    rc_step(c, m, 12);
    t0 = 0x00000017u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CF06:
    /* 0001cf06   4  pea (0001d07c) */
    c->pc = RC_ADDR(0x0001cf06u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001d07cu));

L_1CF0A:
    /* 0001cf0a   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x0001cf0au);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x0001cf0eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001850eu);
    return;

L_1CF0E:
    /* 0001cf0e   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001cf0eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1CF12:
    /* 0001cf12   4  pea (29f2,A4) */
    c->pc = RC_ADDR(0x0001cf12u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x29f2u));

L_1CF16:
    /* 0001cf16   4  move.w #11,-(A7) */
    c->pc = RC_ADDR(0x0001cf16u);
    rc_step(c, m, 12);
    t0 = 0x00000011u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CF1A:
    /* 0001cf1a   4  pea (0001d081) */
    c->pc = RC_ADDR(0x0001cf1au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001d081u));

L_1CF1E:
    /* 0001cf1e   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x0001cf1eu);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x0001cf22u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001850eu);
    return;

L_1CF22:
    /* 0001cf22   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001cf22u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1CF26:
    /* 0001cf26   4  pea (2a36,A4) */
    c->pc = RC_ADDR(0x0001cf26u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2a36u));

L_1CF2A:
    /* 0001cf2a   4  move.w #28,-(A7) */
    c->pc = RC_ADDR(0x0001cf2au);
    rc_step(c, m, 12);
    t0 = 0x00000028u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CF2E:
    /* 0001cf2e   4  pea (0001d086) */
    c->pc = RC_ADDR(0x0001cf2eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001d086u));

L_1CF32:
    /* 0001cf32   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x0001cf32u);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x0001cf36u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001850eu);
    return;

L_1CF36:
    /* 0001cf36   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001cf36u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1CF3A:
    /* 0001cf3a   4  pea (2ad6,A4) */
    c->pc = RC_ADDR(0x0001cf3au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2ad6u));

L_1CF3E:
    /* 0001cf3e   4  move.w #28,-(A7) */
    c->pc = RC_ADDR(0x0001cf3eu);
    rc_step(c, m, 12);
    t0 = 0x00000028u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CF42:
    /* 0001cf42   4  pea (0001d08b) */
    c->pc = RC_ADDR(0x0001cf42u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001d08bu));

L_1CF46:
    /* 0001cf46   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x0001cf46u);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x0001cf4au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001850eu);
    return;

L_1CF4A:
    /* 0001cf4a   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001cf4au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1CF4E:
    /* 0001cf4e   4  pea (2b76,A4) */
    c->pc = RC_ADDR(0x0001cf4eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2b76u));

L_1CF52:
    /* 0001cf52   4  move.w #28,-(A7) */
    c->pc = RC_ADDR(0x0001cf52u);
    rc_step(c, m, 12);
    t0 = 0x00000028u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CF56:
    /* 0001cf56   4  pea (0001d090) */
    c->pc = RC_ADDR(0x0001cf56u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001d090u));

L_1CF5A:
    /* 0001cf5a   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x0001cf5au);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x0001cf5eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001850eu);
    return;

L_1CF5E:
    /* 0001cf5e   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001cf5eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1CF62:
    /* 0001cf62   4  pea (2c16,A4) */
    c->pc = RC_ADDR(0x0001cf62u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2c16u));

L_1CF66:
    /* 0001cf66   4  move.w #13,-(A7) */
    c->pc = RC_ADDR(0x0001cf66u);
    rc_step(c, m, 12);
    t0 = 0x00000013u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CF6A:
    /* 0001cf6a   4  pea (0001d095) */
    c->pc = RC_ADDR(0x0001cf6au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001d095u));

L_1CF6E:
    /* 0001cf6e   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x0001cf6eu);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x0001cf72u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001850eu);
    return;

L_1CF72:
    /* 0001cf72   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001cf72u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1CF76:
    /* 0001cf76   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001cf76u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1CF7A:
    /* 0001cf7a   4  move.w #c,-(A7) */
    c->pc = RC_ADDR(0x0001cf7au);
    rc_step(c, m, 12);
    t0 = 0x0000000cu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CF7E:
    /* 0001cf7e   4  move.w #18,-(A7) */
    c->pc = RC_ADDR(0x0001cf7eu);
    rc_step(c, m, 12);
    t0 = 0x00000018u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CF82:
    /* 0001cf82   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001cf82u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CF86:
    /* 0001cf86   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001cf86u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1CF88:
    /* 0001cf88   4  lea (2ad6,A4),A0 */
    c->pc = RC_ADDR(0x0001cf88u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2ad6u);

L_1CF8C:
    /* 0001cf8c   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001cf8cu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CF90:
    /* 0001cf90   4  jsr (0001c34a) */
    c->pc = RC_ADDR(0x0001cf90u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001cf94u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c34au);
    return;

L_1CF94:
    /* 0001cf94   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001cf94u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1CF96:
    /* 0001cf96   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001cf96u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1CF9A:
    /* 0001cf9a   8  cmpi.l #28,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001cf9au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000028u);

L_1CFA2:
    /* 0001cfa2   2  blt 0001cf7a */
    c->pc = RC_ADDR(0x0001cfa2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1CF7A; }

L_1CFA4:
    /* 0001cfa4   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001cfa4u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1CFA8:
    /* 0001cfa8   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x0001cfa8u);
    rc_step(c, m, 12);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CFAC:
    /* 0001cfac   4  move.w #19,-(A7) */
    c->pc = RC_ADDR(0x0001cfacu);
    rc_step(c, m, 12);
    t0 = 0x00000019u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CFB0:
    /* 0001cfb0   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001cfb0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CFB4:
    /* 0001cfb4   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001cfb4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1CFB6:
    /* 0001cfb6   4  lea (2ad6,A4),A0 */
    c->pc = RC_ADDR(0x0001cfb6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2ad6u);

L_1CFBA:
    /* 0001cfba   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001cfbau);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CFBE:
    /* 0001cfbe   4  jsr (0001c34a) */
    c->pc = RC_ADDR(0x0001cfbeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001cfc2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c34au);
    return;

L_1CFC2:
    /* 0001cfc2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001cfc2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1CFC4:
    /* 0001cfc4   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001cfc4u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1CFC8:
    /* 0001cfc8   8  cmpi.l #28,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001cfc8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000028u);

L_1CFD0:
    /* 0001cfd0   2  blt 0001cfa8 */
    c->pc = RC_ADDR(0x0001cfd0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1CFA8; }

L_1CFD2:
    /* 0001cfd2   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001cfd2u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1CFD6:
    /* 0001cfd6   4  move.w #b,-(A7) */
    c->pc = RC_ADDR(0x0001cfd6u);
    rc_step(c, m, 12);
    t0 = 0x0000000bu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CFDA:
    /* 0001cfda   4  move.w #1a,-(A7) */
    c->pc = RC_ADDR(0x0001cfdau);
    rc_step(c, m, 12);
    t0 = 0x0000001au;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CFDE:
    /* 0001cfde   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001cfdeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CFE2:
    /* 0001cfe2   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001cfe2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1CFE4:
    /* 0001cfe4   4  lea (2ad6,A4),A0 */
    c->pc = RC_ADDR(0x0001cfe4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2ad6u);

L_1CFE8:
    /* 0001cfe8   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001cfe8u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CFEC:
    /* 0001cfec   4  jsr (0001c34a) */
    c->pc = RC_ADDR(0x0001cfecu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001cff0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c34au);
    return;

L_1CFF0:
    /* 0001cff0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001cff0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1CFF2:
    /* 0001cff2   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001cff2u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1CFF6:
    /* 0001cff6   8  cmpi.l #28,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001cff6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000028u);

L_1CFFE:
    /* 0001cffe   2  blt 0001cfd6 */
    c->pc = RC_ADDR(0x0001cffeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1CFD6; }

L_1D000:
    /* 0001d000   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001d000u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1D004:
    /* 0001d004   4  move.w #a,-(A7) */
    c->pc = RC_ADDR(0x0001d004u);
    rc_step(c, m, 12);
    t0 = 0x0000000au;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D008:
    /* 0001d008   4  move.w #1b,-(A7) */
    c->pc = RC_ADDR(0x0001d008u);
    rc_step(c, m, 12);
    t0 = 0x0000001bu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D00C:
    /* 0001d00c   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001d00cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D010:
    /* 0001d010   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001d010u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1D012:
    /* 0001d012   4  lea (2ad6,A4),A0 */
    c->pc = RC_ADDR(0x0001d012u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2ad6u);

L_1D016:
    /* 0001d016   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001d016u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D01A:
    /* 0001d01a   4  jsr (0001c34a) */
    c->pc = RC_ADDR(0x0001d01au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d01eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c34au);
    return;

L_1D01E:
    /* 0001d01e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d01eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D020:
    /* 0001d020   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001d020u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1D024:
    /* 0001d024   8  cmpi.l #28,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001d024u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000028u);

L_1D02C:
    /* 0001d02c   2  blt 0001d004 */
    c->pc = RC_ADDR(0x0001d02cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1D004; }

L_1D02E:
    /* 0001d02e   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001d02eu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1D032:
    /* 0001d032   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x0001d032u);
    rc_step(c, m, 12);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D036:
    /* 0001d036   4  move.w #f,-(A7) */
    c->pc = RC_ADDR(0x0001d036u);
    rc_step(c, m, 12);
    t0 = 0x0000000fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D03A:
    /* 0001d03a   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001d03au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D03E:
    /* 0001d03e   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001d03eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1D040:
    /* 0001d040   4  lea (2ad6,A4),A0 */
    c->pc = RC_ADDR(0x0001d040u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2ad6u);

L_1D044:
    /* 0001d044   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001d044u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D048:
    /* 0001d048   4  jsr (0001c34a) */
    c->pc = RC_ADDR(0x0001d048u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d04cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c34au);
    return;

L_1D04C:
    /* 0001d04c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d04cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D04E:
    /* 0001d04e   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001d04eu);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1D052:
    /* 0001d052   8  cmpi.l #28,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001d052u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000028u);

L_1D05A:
    /* 0001d05a   2  blt 0001d032 */
    c->pc = RC_ADDR(0x0001d05au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1D032; }

L_1D05C:
    /* 0001d05c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001d05cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D05E:
    /* 0001d05e   2  rts */
    c->pc = RC_ADDR(0x0001d05eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
