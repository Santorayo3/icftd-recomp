/* fn_00010bec - 222 byte(s), 59 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00010bec(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00010becu): goto L_10BEC;
    case RC_ADDR(0x00010bf0u): goto L_10BF0;
    case RC_ADDR(0x00010bf4u): goto L_10BF4;
    case RC_ADDR(0x00010bfau): goto L_10BFA;
    case RC_ADDR(0x00010bfeu): goto L_10BFE;
    case RC_ADDR(0x00010c02u): goto L_10C02;
    case RC_ADDR(0x00010c08u): goto L_10C08;
    case RC_ADDR(0x00010c0eu): goto L_10C0E;
    case RC_ADDR(0x00010c12u): goto L_10C12;
    case RC_ADDR(0x00010c18u): goto L_10C18;
    case RC_ADDR(0x00010c1cu): goto L_10C1C;
    case RC_ADDR(0x00010c22u): goto L_10C22;
    case RC_ADDR(0x00010c28u): goto L_10C28;
    case RC_ADDR(0x00010c2eu): goto L_10C2E;
    case RC_ADDR(0x00010c34u): goto L_10C34;
    case RC_ADDR(0x00010c38u): goto L_10C38;
    case RC_ADDR(0x00010c3au): goto L_10C3A;
    case RC_ADDR(0x00010c3eu): goto L_10C3E;
    case RC_ADDR(0x00010c40u): goto L_10C40;
    case RC_ADDR(0x00010c42u): goto L_10C42;
    case RC_ADDR(0x00010c46u): goto L_10C46;
    case RC_ADDR(0x00010c48u): goto L_10C48;
    case RC_ADDR(0x00010c4cu): goto L_10C4C;
    case RC_ADDR(0x00010c4eu): goto L_10C4E;
    case RC_ADDR(0x00010c52u): goto L_10C52;
    case RC_ADDR(0x00010c58u): goto L_10C58;
    case RC_ADDR(0x00010c5au): goto L_10C5A;
    case RC_ADDR(0x00010c5eu): goto L_10C5E;
    case RC_ADDR(0x00010c60u): goto L_10C60;
    case RC_ADDR(0x00010c62u): goto L_10C62;
    case RC_ADDR(0x00010c66u): goto L_10C66;
    case RC_ADDR(0x00010c68u): goto L_10C68;
    case RC_ADDR(0x00010c6cu): goto L_10C6C;
    case RC_ADDR(0x00010c6eu): goto L_10C6E;
    case RC_ADDR(0x00010c72u): goto L_10C72;
    case RC_ADDR(0x00010c78u): goto L_10C78;
    case RC_ADDR(0x00010c7eu): goto L_10C7E;
    case RC_ADDR(0x00010c82u): goto L_10C82;
    case RC_ADDR(0x00010c86u): goto L_10C86;
    case RC_ADDR(0x00010c88u): goto L_10C88;
    case RC_ADDR(0x00010c8au): goto L_10C8A;
    case RC_ADDR(0x00010c8eu): goto L_10C8E;
    case RC_ADDR(0x00010c90u): goto L_10C90;
    case RC_ADDR(0x00010c94u): goto L_10C94;
    case RC_ADDR(0x00010c98u): goto L_10C98;
    case RC_ADDR(0x00010c9au): goto L_10C9A;
    case RC_ADDR(0x00010c9eu): goto L_10C9E;
    case RC_ADDR(0x00010ca0u): goto L_10CA0;
    case RC_ADDR(0x00010ca4u): goto L_10CA4;
    case RC_ADDR(0x00010ca8u): goto L_10CA8;
    case RC_ADDR(0x00010cacu): goto L_10CAC;
    case RC_ADDR(0x00010cb2u): goto L_10CB2;
    case RC_ADDR(0x00010cb4u): goto L_10CB4;
    case RC_ADDR(0x00010cb8u): goto L_10CB8;
    case RC_ADDR(0x00010cbcu): goto L_10CBC;
    case RC_ADDR(0x00010cc0u): goto L_10CC0;
    case RC_ADDR(0x00010cc4u): goto L_10CC4;
    case RC_ADDR(0x00010cc6u): goto L_10CC6;
    case RC_ADDR(0x00010cc8u): goto L_10CC8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10BEC:
    /* 00010bec   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00010becu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_10BF0:
    /* 00010bf0   4  clr.w (fffff324,A4) */
    c->pc = RC_ADDR(0x00010bf0u);
    rc_wr16(c, m, (c->a[4] - 0xcdcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10BF4:
    /* 00010bf4   6  move.w #f,(fffff27e,A4) */
    c->pc = RC_ADDR(0x00010bf4u);
    t0 = 0x0000000fu;
    rc_wr16(c, m, (c->a[4] - 0xd82u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10BFA:
    /* 00010bfa   4  clr.w (fffff280,A4) */
    c->pc = RC_ADDR(0x00010bfau);
    rc_wr16(c, m, (c->a[4] - 0xd80u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10BFE:
    /* 00010bfe   4  clr.l (fffff282,A4) */
    c->pc = RC_ADDR(0x00010bfeu);
    rc_wr32(c, m, (c->a[4] - 0xd7eu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_10C02:
    /* 00010c02   6  move.w #3,(fffff286,A4) */
    c->pc = RC_ADDR(0x00010c02u);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] - 0xd7au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10C08:
    /* 00010c08   6  move.w #2,(fffff288,A4) */
    c->pc = RC_ADDR(0x00010c08u);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] - 0xd78u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10C0E:
    /* 00010c0e   4  clr.w (fffff28a,A4) */
    c->pc = RC_ADDR(0x00010c0eu);
    rc_wr16(c, m, (c->a[4] - 0xd76u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10C12:
    /* 00010c12   6  move.w #1,(fffff28c,A4) */
    c->pc = RC_ADDR(0x00010c12u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xd74u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10C18:
    /* 00010c18   4  clr.l (ffff84f4,A4) */
    c->pc = RC_ADDR(0x00010c18u);
    rc_wr32(c, m, (c->a[4] - 0x7b0cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_10C1C:
    /* 00010c1c   6  move.w #28,(fffff2ce,A4) */
    c->pc = RC_ADDR(0x00010c1cu);
    t0 = 0x00000028u;
    rc_wr16(c, m, (c->a[4] - 0xd32u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10C22:
    /* 00010c22   6  move.w #c8,(fffff2d0,A4) */
    c->pc = RC_ADDR(0x00010c22u);
    t0 = 0x000000c8u;
    rc_wr16(c, m, (c->a[4] - 0xd30u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10C28:
    /* 00010c28   6  move.l (ffffcbbc,A4),(b00,A4) */
    c->pc = RC_ADDR(0x00010c28u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    rc_wr32(c, m, (c->a[4] + 0xb00u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10C2E:
    /* 00010c2e   6  move.l (ffffcbb8,A4),(b04,A4) */
    c->pc = RC_ADDR(0x00010c2eu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3448u));
    rc_wr32(c, m, (c->a[4] + 0xb04u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10C34:
    /* 00010c34   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00010c34u);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10C38:
    /* 00010c38   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00010c38u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10C3A:
    /* 00010c3a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00010c3au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10C3E:
    /* 00010c3e   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00010c3eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_10C40:
    /* 00010c40   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00010c40u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_10C42:
    /* 00010c42   4  adda.l (ffffcbbc,A4),A0 */
    c->pc = RC_ADDR(0x00010c42u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    c->a[0] += t0;

L_10C46:
    /* 00010c46   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00010c46u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10C48:
    /* 00010c48   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00010c48u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10C4C:
    /* 00010c4c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00010c4cu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_10C4E:
    /* 00010c4e   4  lea (fffff326,A4),A1 */
    c->pc = RC_ADDR(0x00010c4eu);
    c->a[1] = (c->a[4] - 0xcdau);

L_10C52:
    /* 00010c52   6  move.l (8,A0),(0,A1,D0.w) */
    c->pc = RC_ADDR(0x00010c52u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10C58:
    /* 00010c58   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00010c58u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10C5A:
    /* 00010c5a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00010c5au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10C5E:
    /* 00010c5e   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00010c5eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_10C60:
    /* 00010c60   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00010c60u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_10C62:
    /* 00010c62   4  adda.l (ffffcbb8,A4),A0 */
    c->pc = RC_ADDR(0x00010c62u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3448u));
    c->a[0] += t0;

L_10C66:
    /* 00010c66   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00010c66u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10C68:
    /* 00010c68   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00010c68u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10C6C:
    /* 00010c6c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00010c6cu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_10C6E:
    /* 00010c6e   4  lea (fffff33a,A4),A1 */
    c->pc = RC_ADDR(0x00010c6eu);
    c->a[1] = (c->a[4] - 0xcc6u);

L_10C72:
    /* 00010c72   6  move.l (8,A0),(0,A1,D0.w) */
    c->pc = RC_ADDR(0x00010c72u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10C78:
    /* 00010c78   6  pea (00010002).l */
    c->pc = RC_ADDR(0x00010c78u);
    rc_push32(c, m, RC_ADDR(0x00010002u));

L_10C7E:
    /* 00010c7e   4  pea (00001f40).l */
    c->pc = RC_ADDR(0x00010c7eu);
    rc_push32(c, m, RC_ADDR(0x00001f40u));

L_10C82:
    /* 00010c82   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00010c82u);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x00010c86u);
    rc_os_call(c, m, 0, -198);

L_10C86:
    /* 00010c86   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00010c86u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_10C88:
    /* 00010c88   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00010c88u);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_10C8A:
    /* 00010c8a   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00010c8au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10C8E:
    /* 00010c8e   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00010c8eu);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_10C90:
    /* 00010c90   4  lea (fffff362,A4),A0 */
    c->pc = RC_ADDR(0x00010c90u);
    c->a[0] = (c->a[4] - 0xc9eu);

L_10C94:
    /* 00010c94   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00010c94u);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10C98:
    /* 00010c98   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00010c98u);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_10C9A:
    /* 00010c9a   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00010c9au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10C9E:
    /* 00010c9e   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00010c9eu);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_10CA0:
    /* 00010ca0   4  lea (fffff34e,A4),A0 */
    c->pc = RC_ADDR(0x00010ca0u);
    c->a[0] = (c->a[4] - 0xcb2u);

L_10CA4:
    /* 00010ca4   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00010ca4u);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10CA8:
    /* 00010ca8   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00010ca8u);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_10CAC:
    /* 00010cac   6  cmpi.w #5,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00010cacu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_10CB2:
    /* 00010cb2   2  bcs 00010c38 */
    c->pc = RC_ADDR(0x00010cb2u);
    if (rc_cond(c, 5)) { rc_tick(); goto L_10C38; }

L_10CB4:
    /* 00010cb4   4  movea.l (ffffcbbc,A4),A0 */
    c->pc = RC_ADDR(0x00010cb4u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    c->a[0] = t0;

L_10CB8:
    /* 00010cb8   4  move.w #28,(A0) */
    c->pc = RC_ADDR(0x00010cb8u);
    t0 = 0x00000028u;
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_10CBC:
    /* 00010cbc   4  movea.l (ffffcbb8,A4),A0 */
    c->pc = RC_ADDR(0x00010cbcu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3448u));
    c->a[0] = t0;

L_10CC0:
    /* 00010cc0   4  move.w #28,(A0) */
    c->pc = RC_ADDR(0x00010cc0u);
    t0 = 0x00000028u;
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_10CC4:
    /* 00010cc4   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00010cc4u);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10CC6:
    /* 00010cc6   2  unlk A5 */
    c->pc = RC_ADDR(0x00010cc6u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_10CC8:
    /* 00010cc8   2  rts */
    c->pc = RC_ADDR(0x00010cc8u);
    rc_ret(c, m);
    return;

}
