/* fn_0000093a - 184 byte(s), 53 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000093a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x0000093au): goto L_93A;
    case RC_ADDR(0x0000093eu): goto L_93E;
    case RC_ADDR(0x00000942u): goto L_942;
    case RC_ADDR(0x00000946u): goto L_946;
    case RC_ADDR(0x00000948u): goto L_948;
    case RC_ADDR(0x0000094au): goto L_94A;
    case RC_ADDR(0x0000094eu): goto L_94E;
    case RC_ADDR(0x00000952u): goto L_952;
    case RC_ADDR(0x00000956u): goto L_956;
    case RC_ADDR(0x0000095au): goto L_95A;
    case RC_ADDR(0x0000095eu): goto L_95E;
    case RC_ADDR(0x00000962u): goto L_962;
    case RC_ADDR(0x00000966u): goto L_966;
    case RC_ADDR(0x0000096au): goto L_96A;
    case RC_ADDR(0x0000096cu): goto L_96C;
    case RC_ADDR(0x00000972u): goto L_972;
    case RC_ADDR(0x00000974u): goto L_974;
    case RC_ADDR(0x00000978u): goto L_978;
    case RC_ADDR(0x0000097au): goto L_97A;
    case RC_ADDR(0x0000097eu): goto L_97E;
    case RC_ADDR(0x00000982u): goto L_982;
    case RC_ADDR(0x00000984u): goto L_984;
    case RC_ADDR(0x00000988u): goto L_988;
    case RC_ADDR(0x0000098cu): goto L_98C;
    case RC_ADDR(0x00000990u): goto L_990;
    case RC_ADDR(0x00000994u): goto L_994;
    case RC_ADDR(0x00000998u): goto L_998;
    case RC_ADDR(0x0000099cu): goto L_99C;
    case RC_ADDR(0x000009a0u): goto L_9A0;
    case RC_ADDR(0x000009a4u): goto L_9A4;
    case RC_ADDR(0x000009a8u): goto L_9A8;
    case RC_ADDR(0x000009acu): goto L_9AC;
    case RC_ADDR(0x000009b0u): goto L_9B0;
    case RC_ADDR(0x000009b2u): goto L_9B2;
    case RC_ADDR(0x000009b4u): goto L_9B4;
    case RC_ADDR(0x000009b8u): goto L_9B8;
    case RC_ADDR(0x000009bcu): goto L_9BC;
    case RC_ADDR(0x000009beu): goto L_9BE;
    case RC_ADDR(0x000009c2u): goto L_9C2;
    case RC_ADDR(0x000009c4u): goto L_9C4;
    case RC_ADDR(0x000009c6u): goto L_9C6;
    case RC_ADDR(0x000009cau): goto L_9CA;
    case RC_ADDR(0x000009ccu): goto L_9CC;
    case RC_ADDR(0x000009ceu): goto L_9CE;
    case RC_ADDR(0x000009d2u): goto L_9D2;
    case RC_ADDR(0x000009d6u): goto L_9D6;
    case RC_ADDR(0x000009dau): goto L_9DA;
    case RC_ADDR(0x000009deu): goto L_9DE;
    case RC_ADDR(0x000009e2u): goto L_9E2;
    case RC_ADDR(0x000009e6u): goto L_9E6;
    case RC_ADDR(0x000009eau): goto L_9EA;
    case RC_ADDR(0x000009eeu): goto L_9EE;
    case RC_ADDR(0x000009f0u): goto L_9F0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_93A:
    /* 0000093a   4  link.w A5,#fffffff4 */
    c->pc = RC_ADDR(0x0000093au);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xcu;

L_93E:
    /* 0000093e   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000093eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_942:
    /* 00000942   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x00000942u);
    rc_step(c, m);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x00000946u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d04u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020820u);
    return;

L_946:
    /* 00000946   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000946u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_948:
    /* 00000948   2  ext.l D0 */
    c->pc = RC_ADDR(0x00000948u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_94A:
    /* 0000094a   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000094au);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_94E:
    /* 0000094e   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000094eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_952:
    /* 00000952   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00000952u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_956:
    /* 00000956   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x00000956u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_95A:
    /* 0000095a   4  jsr (ffff83a4,A4) */
    c->pc = RC_ADDR(0x0000095au);
    rc_step(c, m);
    /* vector 155 */
    rc_push32(c, m, RC_ADDR(0x0000095eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021dfau);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021934u);
    return;

L_95E:
    /* 0000095e   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000095eu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_962:
    /* 00000962   4  move.l D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00000962u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_966:
    /* 00000966   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00000966u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_96A:
    /* 0000096a   2  lsr.l #1,D0 */
    c->pc = RC_ADDR(0x0000096au);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_96C:
    /* 0000096c   6  move.l #a0,D1 */
    c->pc = RC_ADDR(0x0000096cu);
    rc_step(c, m);
    t0 = 0x000000a0u;
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_972:
    /* 00000972   2  sub.l D0,D1 */
    c->pc = RC_ADDR(0x00000972u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_974:
    /* 00000974   4  move.l D1,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00000974u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_978:
    /* 00000978   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00000978u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_97A:
    /* 0000097a   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x0000097au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_97E:
    /* 0000097e   4  jsr (ffff838c,A4) */
    c->pc = RC_ADDR(0x0000097eu);
    rc_step(c, m);
    /* vector 151 */
    rc_push32(c, m, RC_ADDR(0x00000982u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021de2u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000218eau);
    return;

L_982:
    /* 00000982   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000982u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_984:
    /* 00000984   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00000984u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_988:
    /* 00000988   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00000988u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_98C:
    /* 0000098c   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x0000098cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_990:
    /* 00000990   4  jsr (ffff837a,A4) */
    c->pc = RC_ADDR(0x00000990u);
    rc_step(c, m);
    /* vector 148 */
    rc_push32(c, m, RC_ADDR(0x00000994u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021dd0u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000218b2u);
    return;

L_994:
    /* 00000994   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00000994u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_998:
    /* 00000998   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00000998u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_99C:
    /* 0000099c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000099cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9A0:
    /* 000009a0   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x000009a0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9A4:
    /* 000009a4   4  jsr (ffff839e,A4) */
    c->pc = RC_ADDR(0x000009a4u);
    rc_step(c, m);
    /* vector 154 */
    rc_push32(c, m, RC_ADDR(0x000009a8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021df4u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002191au);
    return;

L_9A8:
    /* 000009a8   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000009a8u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_9AC:
    /* 000009ac   4  move.w (10,A5),D0 */
    c->pc = RC_ADDR(0x000009acu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9B0:
    /* 000009b0   2  ext.l D0 */
    c->pc = RC_ADDR(0x000009b0u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_9B2:
    /* 000009b2   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000009b2u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9B4:
    /* 000009b4   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x000009b4u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9B8:
    /* 000009b8   4  jsr (ffff838c,A4) */
    c->pc = RC_ADDR(0x000009b8u);
    rc_step(c, m);
    /* vector 151 */
    rc_push32(c, m, RC_ADDR(0x000009bcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021de2u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000218eau);
    return;

L_9BC:
    /* 000009bc   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000009bcu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_9BE:
    /* 000009be   4  move.l (c,A5),D0 */
    c->pc = RC_ADDR(0x000009beu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9C2:
    /* 000009c2   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x000009c2u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_9C4:
    /* 000009c4   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000009c4u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9C6:
    /* 000009c6   4  move.l (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x000009c6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9CA:
    /* 000009ca   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x000009cau);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_9CC:
    /* 000009cc   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000009ccu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9CE:
    /* 000009ce   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x000009ceu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9D2:
    /* 000009d2   4  jsr (ffff837a,A4) */
    c->pc = RC_ADDR(0x000009d2u);
    rc_step(c, m);
    /* vector 148 */
    rc_push32(c, m, RC_ADDR(0x000009d6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021dd0u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000218b2u);
    return;

L_9D6:
    /* 000009d6   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000009d6u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_9DA:
    /* 000009da   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000009dau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9DE:
    /* 000009de   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000009deu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9E2:
    /* 000009e2   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x000009e2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9E6:
    /* 000009e6   4  jsr (ffff839e,A4) */
    c->pc = RC_ADDR(0x000009e6u);
    rc_step(c, m);
    /* vector 154 */
    rc_push32(c, m, RC_ADDR(0x000009eau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021df4u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002191au);
    return;

L_9EA:
    /* 000009ea   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000009eau);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_9EE:
    /* 000009ee   2  unlk A5 */
    c->pc = RC_ADDR(0x000009eeu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_9F0:
    /* 000009f0   2  rts */
    c->pc = RC_ADDR(0x000009f0u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
