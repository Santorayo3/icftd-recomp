/* fn_00006f58 - 278 byte(s), 74 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00006f58(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00006f58u): goto L_6F58;
    case RC_ADDR(0x00006f5cu): goto L_6F5C;
    case RC_ADDR(0x00006f60u): goto L_6F60;
    case RC_ADDR(0x00006f64u): goto L_6F64;
    case RC_ADDR(0x00006f66u): goto L_6F66;
    case RC_ADDR(0x00006f6au): goto L_6F6A;
    case RC_ADDR(0x00006f6eu): goto L_6F6E;
    case RC_ADDR(0x00006f72u): goto L_6F72;
    case RC_ADDR(0x00006f76u): goto L_6F76;
    case RC_ADDR(0x00006f7au): goto L_6F7A;
    case RC_ADDR(0x00006f7eu): goto L_6F7E;
    case RC_ADDR(0x00006f82u): goto L_6F82;
    case RC_ADDR(0x00006f86u): goto L_6F86;
    case RC_ADDR(0x00006f8au): goto L_6F8A;
    case RC_ADDR(0x00006f8eu): goto L_6F8E;
    case RC_ADDR(0x00006f92u): goto L_6F92;
    case RC_ADDR(0x00006f98u): goto L_6F98;
    case RC_ADDR(0x00006f9au): goto L_6F9A;
    case RC_ADDR(0x00006fa0u): goto L_6FA0;
    case RC_ADDR(0x00006fa2u): goto L_6FA2;
    case RC_ADDR(0x00006fa8u): goto L_6FA8;
    case RC_ADDR(0x00006faau): goto L_6FAA;
    case RC_ADDR(0x00006faeu): goto L_6FAE;
    case RC_ADDR(0x00006fb2u): goto L_6FB2;
    case RC_ADDR(0x00006fb4u): goto L_6FB4;
    case RC_ADDR(0x00006fb8u): goto L_6FB8;
    case RC_ADDR(0x00006fbcu): goto L_6FBC;
    case RC_ADDR(0x00006fbeu): goto L_6FBE;
    case RC_ADDR(0x00006fc2u): goto L_6FC2;
    case RC_ADDR(0x00006fc6u): goto L_6FC6;
    case RC_ADDR(0x00006fccu): goto L_6FCC;
    case RC_ADDR(0x00006fd2u): goto L_6FD2;
    case RC_ADDR(0x00006fd4u): goto L_6FD4;
    case RC_ADDR(0x00006fd6u): goto L_6FD6;
    case RC_ADDR(0x00006fd8u): goto L_6FD8;
    case RC_ADDR(0x00006fdcu): goto L_6FDC;
    case RC_ADDR(0x00006fe0u): goto L_6FE0;
    case RC_ADDR(0x00006fe4u): goto L_6FE4;
    case RC_ADDR(0x00006fe8u): goto L_6FE8;
    case RC_ADDR(0x00006feeu): goto L_6FEE;
    case RC_ADDR(0x00006ff0u): goto L_6FF0;
    case RC_ADDR(0x00006ff6u): goto L_6FF6;
    case RC_ADDR(0x00006ff8u): goto L_6FF8;
    case RC_ADDR(0x00006ffcu): goto L_6FFC;
    case RC_ADDR(0x00007000u): goto L_7000;
    case RC_ADDR(0x00007004u): goto L_7004;
    case RC_ADDR(0x00007008u): goto L_7008;
    case RC_ADDR(0x0000700cu): goto L_700C;
    case RC_ADDR(0x00007010u): goto L_7010;
    case RC_ADDR(0x00007014u): goto L_7014;
    case RC_ADDR(0x00007018u): goto L_7018;
    case RC_ADDR(0x0000701au): goto L_701A;
    case RC_ADDR(0x0000701eu): goto L_701E;
    case RC_ADDR(0x00007022u): goto L_7022;
    case RC_ADDR(0x00007026u): goto L_7026;
    case RC_ADDR(0x0000702au): goto L_702A;
    case RC_ADDR(0x0000702eu): goto L_702E;
    case RC_ADDR(0x00007032u): goto L_7032;
    case RC_ADDR(0x00007036u): goto L_7036;
    case RC_ADDR(0x0000703au): goto L_703A;
    case RC_ADDR(0x0000703cu): goto L_703C;
    case RC_ADDR(0x00007040u): goto L_7040;
    case RC_ADDR(0x00007046u): goto L_7046;
    case RC_ADDR(0x00007048u): goto L_7048;
    case RC_ADDR(0x0000704eu): goto L_704E;
    case RC_ADDR(0x00007052u): goto L_7052;
    case RC_ADDR(0x00007056u): goto L_7056;
    case RC_ADDR(0x00007058u): goto L_7058;
    case RC_ADDR(0x0000705cu): goto L_705C;
    case RC_ADDR(0x00007060u): goto L_7060;
    case RC_ADDR(0x00007064u): goto L_7064;
    case RC_ADDR(0x00007068u): goto L_7068;
    case RC_ADDR(0x0000706au): goto L_706A;
    case RC_ADDR(0x0000706cu): goto L_706C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_6F58:
    /* 00006f58   4  link.w A5,#fffffff0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006f58u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x10u;

L_6F5C:
    /* 00006f5c   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006f5cu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6F60:
    /* 00006f60   4  jsr (00006c76) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006f60u);
    rc_push32(c, m, RC_ADDR(0x00006f64u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006c76u);
    return;

L_6F64:
    /* 00006f64   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006f64u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6F66:
    /* 00006f66   4  move.w #1,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006f66u);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6F6A:
    /* 00006f6a   4  pea (0000707a) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006f6au);
    rc_push32(c, m, RC_ADDR(0x0000707au));

L_6F6E:
    /* 00006f6e   4  pea (0000706e) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006f6eu);
    rc_push32(c, m, RC_ADDR(0x0000706eu));

L_6F72:
    /* 00006f72   4  jsr (ffff800e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006f72u);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x00006f76u));
    rc_depth++;
    c->pc = RC_ADDR(0x000002f4u);
    return;

L_6F76:
    /* 00006f76   4  lea (a,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006f76u);
    c->a[7] = (c->a[7] + 0xau);

L_6F7A:
    /* 00006f7a   4  pea (fffffff0,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006f7au);
    rc_push32(c, m, (c->a[5] - 0x10u));

L_6F7E:
    /* 00006f7e   4  pea (fffffff8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006f7eu);
    rc_push32(c, m, (c->a[5] - 0x8u));

L_6F82:
    /* 00006f82   4  pea (00007084) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006f82u);
    rc_push32(c, m, RC_ADDR(0x00007084u));

L_6F86:
    /* 00006f86   4  jsr (ffff80b0,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006f86u);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x00006f8au));
    rc_depth++;
    c->pc = RC_ADDR(0x00009984u);
    return;

L_6F8A:
    /* 00006f8a   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006f8au);
    c->a[7] = (c->a[7] + 0xcu);

L_6F8E:
    /* 00006f8e   4  move.l D0,(fffffff4,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006f8eu);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6F92:
    /* 00006f92   6  cmpi.w #11,(ffffefe4,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006f92u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000011u);

L_6F98:
    /* 00006f98   2  bne 00006faa */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006f98u);
    if (rc_cond(c, 6)) goto L_6FAA;

L_6F9A:
    /* 00006f9a   6  cmpi.w #4,(ffff83c8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006f9au);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_6FA0:
    /* 00006fa0   2  bne 00006faa */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006fa0u);
    if (rc_cond(c, 6)) goto L_6FAA;

L_6FA2:
    /* 00006fa2   6  move.w #dc,(fffffff8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006fa2u);
    t0 = 0x000000dcu;
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6FA8:
    /* 00006fa8   2  bra 00007010 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006fa8u);
    goto L_7010;

L_6FAA:
    /* 00006faa   4  pea (0000708e) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006faau);
    rc_push32(c, m, RC_ADDR(0x0000708eu));

L_6FAE:
    /* 00006fae   4  jsr (ffff828a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006faeu);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00006fb2u));
    rc_depth++;
    c->pc = RC_ADDR(0x000202c4u);
    return;

L_6FB2:
    /* 00006fb2   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006fb2u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6FB4:
    /* 00006fb4   4  pea (0000709d) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006fb4u);
    rc_push32(c, m, RC_ADDR(0x0000709du));

L_6FB8:
    /* 00006fb8   4  jsr (ffff8230,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006fb8u);
    /* vector 93 */
    rc_push32(c, m, RC_ADDR(0x00006fbcu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001de7au);
    return;

L_6FBC:
    /* 00006fbc   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006fbcu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6FBE:
    /* 00006fbe   4  move.l D0,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006fbeu);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6FC2:
    /* 00006fc2   4  jsr (ffff8050,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006fc2u);
    /* vector 13 */
    rc_push32(c, m, RC_ADDR(0x00006fc6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00003532u);
    return;

L_6FC6:
    /* 00006fc6   6  move.l (8,A5),(fffffebe,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006fc6u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6FCC:
    /* 00006fcc   6  pea (000a0000).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006fccu);
    rc_push32(c, m, RC_ADDR(0x000a0000u));

L_6FD2:
    /* 00006fd2   2  clr.l -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006fd2u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6FD4:
    /* 00006fd4   2  clr.l -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006fd4u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6FD6:
    /* 00006fd6   2  clr.w -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006fd6u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6FD8:
    /* 00006fd8   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006fd8u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6FDC:
    /* 00006fdc   4  move.w #1,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006fdcu);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6FE0:
    /* 00006fe0   4  jsr (ffff8266,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006fe0u);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00006fe4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_6FE4:
    /* 00006fe4   4  lea (14,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006fe4u);
    c->a[7] = (c->a[7] + 0x14u);

L_6FE8:
    /* 00006fe8   6  cmpi.w #1,(fffff268,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006fe8u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd98u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_6FEE:
    /* 00006fee   2  ble 00007010 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006feeu);
    if (rc_cond(c, 15)) goto L_7010;

L_6FF0:
    /* 00006ff0   6  pea (000a0000).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006ff0u);
    rc_push32(c, m, RC_ADDR(0x000a0000u));

L_6FF6:
    /* 00006ff6   2  clr.l -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006ff6u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6FF8:
    /* 00006ff8   4  pea (00000046).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006ff8u);
    rc_push32(c, m, 0x00000046u);

L_6FFC:
    /* 00006ffc   4  move.w #1,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006ffcu);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7000:
    /* 00007000   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007000u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7004:
    /* 00007004   4  move.w #1,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007004u);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7008:
    /* 00007008   4  jsr (ffff8266,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007008u);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x0000700cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_700C:
    /* 0000700c   4  lea (14,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000700cu);
    c->a[7] = (c->a[7] + 0x14u);

L_7010:
    /* 00007010   4  jsr (ffff8110,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007010u);
    /* vector 45 */
    rc_push32(c, m, RC_ADDR(0x00007014u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000ec8au);
    return;

L_7014:
    /* 00007014   4  move.w #40,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007014u);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7018:
    /* 00007018   2  clr.w -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007018u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_701A:
    /* 0000701a   4  move.l (fffffff0,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000701au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_701E:
    /* 0000701e   4  move.w (fffffff8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000701eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7022:
    /* 00007022   4  move.l (fffffff4,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007022u);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7026:
    /* 00007026   4  jsr (ffff80b6,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007026u);
    /* vector 30 */
    rc_push32(c, m, RC_ADDR(0x0000702au));
    rc_depth++;
    c->pc = RC_ADDR(0x00009b60u);
    return;

L_702A:
    /* 0000702a   4  lea (e,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000702au);
    c->a[7] = (c->a[7] + 0xeu);

L_702E:
    /* 0000702e   4  clr.w (fffffffa,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000702eu);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7032:
    /* 00007032   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007032u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7036:
    /* 00007036   4  jsr (00005fbe) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007036u);
    rc_push32(c, m, RC_ADDR(0x0000703au));
    rc_depth++;
    c->pc = RC_ADDR(0x00005fbeu);
    return;

L_703A:
    /* 0000703a   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000703au);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_703C:
    /* 0000703c   4  addq.w #1,(fffffffa,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000703cu);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_7040:
    /* 00007040   6  cmpi.w #a,(fffffffa,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007040u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_7046:
    /* 00007046   2  blt 00007032 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007046u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_7032; }

L_7048:
    /* 00007048   6  move.l (8,A5),(fffffebe,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007048u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_704E:
    /* 0000704e   4  move.w #3,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000704eu);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7052:
    /* 00007052   4  jsr (ffff8266,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007052u);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00007056u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_7056:
    /* 00007056   2  addq.w #2,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007056u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_7058:
    /* 00007058   4  jsr (ffff80c8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007058u);
    /* vector 33 */
    rc_push32(c, m, RC_ADDR(0x0000705cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00009becu);
    return;

L_705C:
    /* 0000705c   4  move.l (fffffff0,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000705cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7060:
    /* 00007060   4  move.l (fffffff4,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007060u);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7064:
    /* 00007064   4  jsr (ffff8344,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007064u);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x00007068u);
    rc_os_call(c, m, 0, -210);

L_7068:
    /* 00007068   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007068u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_706A:
    /* 0000706a   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000706au);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_706C:
    /* 0000706c   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000706cu);
    rc_ret(c, m);
    return;

}
