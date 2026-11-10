/* fn_00000fea - 88 byte(s), 25 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00000fea(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00000feau): goto L_FEA;
    case RC_ADDR(0x00000feeu): goto L_FEE;
    case RC_ADDR(0x00000ff2u): goto L_FF2;
    case RC_ADDR(0x00000ff6u): goto L_FF6;
    case RC_ADDR(0x00000ffau): goto L_FFA;
    case RC_ADDR(0x00000ffeu): goto L_FFE;
    case RC_ADDR(0x00001002u): goto L_1002;
    case RC_ADDR(0x00001006u): goto L_1006;
    case RC_ADDR(0x0000100cu): goto L_100C;
    case RC_ADDR(0x0000100eu): goto L_100E;
    case RC_ADDR(0x00001012u): goto L_1012;
    case RC_ADDR(0x00001014u): goto L_1014;
    case RC_ADDR(0x00001018u): goto L_1018;
    case RC_ADDR(0x0000101au): goto L_101A;
    case RC_ADDR(0x0000101eu): goto L_101E;
    case RC_ADDR(0x00001022u): goto L_1022;
    case RC_ADDR(0x00001024u): goto L_1024;
    case RC_ADDR(0x00001028u): goto L_1028;
    case RC_ADDR(0x0000102au): goto L_102A;
    case RC_ADDR(0x0000102eu): goto L_102E;
    case RC_ADDR(0x00001032u): goto L_1032;
    case RC_ADDR(0x00001036u): goto L_1036;
    case RC_ADDR(0x0000103au): goto L_103A;
    case RC_ADDR(0x0000103eu): goto L_103E;
    case RC_ADDR(0x00001040u): goto L_1040;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_FEA:
    /* 00000fea   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x00000feau);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_FEE:
    /* 00000fee   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00000feeu);
    rc_push32(c, m, RC_ADDR(0x00000002u));

L_FF2:
    /* 00000ff2   4  pea (fffffffe,A5) */
    c->pc = RC_ADDR(0x00000ff2u);
    rc_push32(c, m, (c->a[5] - 0x2u));

L_FF6:
    /* 00000ff6   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00000ff6u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_FFA:
    /* 00000ffa   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x00000ffau);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x00000ffeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_FFE:
    /* 00000ffe   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00000ffeu);
    c->a[7] = (c->a[7] + 0xcu);

L_1002:
    /* 00001002   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00001002u);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1006:
    /* 00001006   6  pea (00010001).l */
    c->pc = RC_ADDR(0x00001006u);
    rc_push32(c, m, RC_ADDR(0x00010001u));

L_100C:
    /* 0000100c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000100cu);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_100E:
    /* 0000100e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000100eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1012:
    /* 00001012   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00001012u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1014:
    /* 00001014   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00001014u);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x00001018u);
    rc_os_call(c, m, 0, -198);

L_1018:
    /* 00001018   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00001018u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_101A:
    /* 0000101a   4  move.l D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000101au);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_101E:
    /* 0000101e   4  subq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000101eu);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1022:
    /* 00001022   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00001022u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1024:
    /* 00001024   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00001024u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1028:
    /* 00001028   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00001028u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_102A:
    /* 0000102a   4  move.l (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x0000102au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_102E:
    /* 0000102e   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000102eu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1032:
    /* 00001032   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x00001032u);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x00001036u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_1036:
    /* 00001036   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00001036u);
    c->a[7] = (c->a[7] + 0xcu);

L_103A:
    /* 0000103a   4  move.l (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0000103au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_103E:
    /* 0000103e   2  unlk A5 */
    c->pc = RC_ADDR(0x0000103eu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1040:
    /* 00001040   2  rts */
    c->pc = RC_ADDR(0x00001040u);
    rc_ret(c, m);
    return;

}
