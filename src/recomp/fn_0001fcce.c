/* fn_0001fcce - 172 byte(s), 54 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001fcce(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001fcceu): goto L_1FCCE;
    case RC_ADDR(0x0001fcd2u): goto L_1FCD2;
    case RC_ADDR(0x0001fcd6u): goto L_1FCD6;
    case RC_ADDR(0x0001fcdau): goto L_1FCDA;
    case RC_ADDR(0x0001fcdeu): goto L_1FCDE;
    case RC_ADDR(0x0001fce2u): goto L_1FCE2;
    case RC_ADDR(0x0001fce6u): goto L_1FCE6;
    case RC_ADDR(0x0001fceau): goto L_1FCEA;
    case RC_ADDR(0x0001fcecu): goto L_1FCEC;
    case RC_ADDR(0x0001fcf0u): goto L_1FCF0;
    case RC_ADDR(0x0001fcf2u): goto L_1FCF2;
    case RC_ADDR(0x0001fcf4u): goto L_1FCF4;
    case RC_ADDR(0x0001fcf6u): goto L_1FCF6;
    case RC_ADDR(0x0001fcf8u): goto L_1FCF8;
    case RC_ADDR(0x0001fcfcu): goto L_1FCFC;
    case RC_ADDR(0x0001fcfeu): goto L_1FCFE;
    case RC_ADDR(0x0001fd02u): goto L_1FD02;
    case RC_ADDR(0x0001fd04u): goto L_1FD04;
    case RC_ADDR(0x0001fd08u): goto L_1FD08;
    case RC_ADDR(0x0001fd0cu): goto L_1FD0C;
    case RC_ADDR(0x0001fd0eu): goto L_1FD0E;
    case RC_ADDR(0x0001fd12u): goto L_1FD12;
    case RC_ADDR(0x0001fd14u): goto L_1FD14;
    case RC_ADDR(0x0001fd18u): goto L_1FD18;
    case RC_ADDR(0x0001fd1cu): goto L_1FD1C;
    case RC_ADDR(0x0001fd20u): goto L_1FD20;
    case RC_ADDR(0x0001fd22u): goto L_1FD22;
    case RC_ADDR(0x0001fd24u): goto L_1FD24;
    case RC_ADDR(0x0001fd28u): goto L_1FD28;
    case RC_ADDR(0x0001fd2au): goto L_1FD2A;
    case RC_ADDR(0x0001fd2eu): goto L_1FD2E;
    case RC_ADDR(0x0001fd30u): goto L_1FD30;
    case RC_ADDR(0x0001fd32u): goto L_1FD32;
    case RC_ADDR(0x0001fd34u): goto L_1FD34;
    case RC_ADDR(0x0001fd38u): goto L_1FD38;
    case RC_ADDR(0x0001fd3cu): goto L_1FD3C;
    case RC_ADDR(0x0001fd3eu): goto L_1FD3E;
    case RC_ADDR(0x0001fd42u): goto L_1FD42;
    case RC_ADDR(0x0001fd46u): goto L_1FD46;
    case RC_ADDR(0x0001fd4au): goto L_1FD4A;
    case RC_ADDR(0x0001fd4cu): goto L_1FD4C;
    case RC_ADDR(0x0001fd50u): goto L_1FD50;
    case RC_ADDR(0x0001fd54u): goto L_1FD54;
    case RC_ADDR(0x0001fd56u): goto L_1FD56;
    case RC_ADDR(0x0001fd5au): goto L_1FD5A;
    case RC_ADDR(0x0001fd5eu): goto L_1FD5E;
    case RC_ADDR(0x0001fd62u): goto L_1FD62;
    case RC_ADDR(0x0001fd64u): goto L_1FD64;
    case RC_ADDR(0x0001fd68u): goto L_1FD68;
    case RC_ADDR(0x0001fd6cu): goto L_1FD6C;
    case RC_ADDR(0x0001fd70u): goto L_1FD70;
    case RC_ADDR(0x0001fd72u): goto L_1FD72;
    case RC_ADDR(0x0001fd76u): goto L_1FD76;
    case RC_ADDR(0x0001fd78u): goto L_1FD78;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1FCCE:
    /* 0001fcce   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0001fcceu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1FCD2:
    /* 0001fcd2   4  movem.l { D4 D5 },-(SP) */
    c->pc = RC_ADDR(0x0001fcd2u);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    c->a[7] = t3;

L_1FCD6:
    /* 0001fcd6   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001fcd6u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1FCDA:
    /* 0001fcda   4  move.l (A0),(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001fcdau);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FCDE:
    /* 0001fcde   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001fcdeu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_1FCE2:
    /* 0001fce2   4  beq 0001fd72 */
    c->pc = RC_ADDR(0x0001fce2u);
    if (rc_cond(c, 7)) goto L_1FD72;

L_1FCE6:
    /* 0001fce6   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001fce6u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1FCEA:
    /* 0001fcea   2  clr.l (A0) */
    c->pc = RC_ADDR(0x0001fceau);
    rc_wr32(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1FCEC:
    /* 0001fcec   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001fcecu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1FCF0:
    /* 0001fcf0   2  movea.l (A0),A2 */
    c->pc = RC_ADDR(0x0001fcf0u);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[2] = t0;

L_1FCF2:
    /* 0001fcf2   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x0001fcf2u);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FCF4:
    /* 0001fcf4   2  beq 0001fd34 */
    c->pc = RC_ADDR(0x0001fcf4u);
    if (rc_cond(c, 7)) goto L_1FD34;

L_1FCF6:
    /* 0001fcf6   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001fcf6u);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FCF8:
    /* 0001fcf8   4  jsr (00021826) */
    c->pc = RC_ADDR(0x0001fcf8u);
    rc_push32(c, m, RC_ADDR(0x0001fcfcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021826u);
    return;

L_1FCFC:
    /* 0001fcfc   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001fcfcu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1FCFE:
    /* 0001fcfe   4  tst.l (4,A2) */
    c->pc = RC_ADDR(0x0001fcfeu);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_1FD02:
    /* 0001fd02   2  beq 0001fd0e */
    c->pc = RC_ADDR(0x0001fd02u);
    if (rc_cond(c, 7)) goto L_1FD0E;

L_1FD04:
    /* 0001fd04   4  move.l (4,A2),-(A7) */
    c->pc = RC_ADDR(0x0001fd04u);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FD08:
    /* 0001fd08   4  jsr (0002180e) */
    c->pc = RC_ADDR(0x0001fd08u);
    rc_push32(c, m, RC_ADDR(0x0001fd0cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0002180eu);
    return;

L_1FD0C:
    /* 0001fd0c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001fd0cu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1FD0E:
    /* 0001fd0e   4  tst.l (24,A2) */
    c->pc = RC_ADDR(0x0001fd0eu);
    t0 = rc_rd32(c, m, (c->a[2] + 0x24u));
    rc_set_nzvc(c, t0, RC_L);

L_1FD12:
    /* 0001fd12   2  beq 0001fd22 */
    c->pc = RC_ADDR(0x0001fd12u);
    if (rc_cond(c, 7)) goto L_1FD22;

L_1FD14:
    /* 0001fd14   4  pea (0000000c).l */
    c->pc = RC_ADDR(0x0001fd14u);
    rc_push32(c, m, RC_ADDR(0x0000000cu));

L_1FD18:
    /* 0001fd18   4  move.l (24,A2),-(A7) */
    c->pc = RC_ADDR(0x0001fd18u);
    t0 = rc_rd32(c, m, (c->a[2] + 0x24u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FD1C:
    /* 0001fd1c   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0001fd1cu);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x0001fd20u);
    rc_os_call(c, m, 0, -210);

L_1FD20:
    /* 0001fd20   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001fd20u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FD22:
    /* 0001fd22   2  movea.l (A2),A3 */
    c->pc = RC_ADDR(0x0001fd22u);
    t0 = rc_rd32(c, m, c->a[2]);
    c->a[3] = t0;

L_1FD24:
    /* 0001fd24   4  pea (00000028).l */
    c->pc = RC_ADDR(0x0001fd24u);
    rc_push32(c, m, RC_ADDR(0x00000028u));

L_1FD28:
    /* 0001fd28   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001fd28u);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FD2A:
    /* 0001fd2a   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0001fd2au);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x0001fd2eu);
    rc_os_call(c, m, 0, -210);

L_1FD2E:
    /* 0001fd2e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001fd2eu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FD30:
    /* 0001fd30   2  movea.l A3,A2 */
    c->pc = RC_ADDR(0x0001fd30u);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[2] = t0;

L_1FD32:
    /* 0001fd32   2  bra 0001fcf2 */
    c->pc = RC_ADDR(0x0001fd32u);
    rc_tick();
    goto L_1FCF2;

L_1FD34:
    /* 0001fd34   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001fd34u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1FD38:
    /* 0001fd38   4  tst.l (4,A0) */
    c->pc = RC_ADDR(0x0001fd38u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_1FD3C:
    /* 0001fd3c   2  beq 0001fd4c */
    c->pc = RC_ADDR(0x0001fd3cu);
    if (rc_cond(c, 7)) goto L_1FD4C;

L_1FD3E:
    /* 0001fd3e   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001fd3eu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1FD42:
    /* 0001fd42   4  move.l (4,A0),-(A7) */
    c->pc = RC_ADDR(0x0001fd42u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FD46:
    /* 0001fd46   4  jsr (0002181a) */
    c->pc = RC_ADDR(0x0001fd46u);
    rc_push32(c, m, RC_ADDR(0x0001fd4au));
    rc_depth++;
    c->pc = RC_ADDR(0x0002181au);
    return;

L_1FD4A:
    /* 0001fd4a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001fd4au);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1FD4C:
    /* 0001fd4c   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001fd4cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1FD50:
    /* 0001fd50   4  tst.l (8,A0) */
    c->pc = RC_ADDR(0x0001fd50u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_1FD54:
    /* 0001fd54   2  beq 0001fd64 */
    c->pc = RC_ADDR(0x0001fd54u);
    if (rc_cond(c, 7)) goto L_1FD64;

L_1FD56:
    /* 0001fd56   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001fd56u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1FD5A:
    /* 0001fd5a   4  move.l (8,A0),-(A7) */
    c->pc = RC_ADDR(0x0001fd5au);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FD5E:
    /* 0001fd5e   4  jsr (0002181a) */
    c->pc = RC_ADDR(0x0001fd5eu);
    rc_push32(c, m, RC_ADDR(0x0001fd62u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002181au);
    return;

L_1FD62:
    /* 0001fd62   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001fd62u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1FD64:
    /* 0001fd64   4  pea (00000114).l */
    c->pc = RC_ADDR(0x0001fd64u);
    rc_push32(c, m, RC_ADDR(0x00000114u));

L_1FD68:
    /* 0001fd68   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001fd68u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FD6C:
    /* 0001fd6c   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0001fd6cu);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x0001fd70u);
    rc_os_call(c, m, 0, -210);

L_1FD70:
    /* 0001fd70   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001fd70u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FD72:
    /* 0001fd72   4  movem.l (SP)+,{ A2 A3 } */
    c->pc = RC_ADDR(0x0001fd72u);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1FD76:
    /* 0001fd76   2  unlk A5 */
    c->pc = RC_ADDR(0x0001fd76u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1FD78:
    /* 0001fd78   2  rts */
    c->pc = RC_ADDR(0x0001fd78u);
    rc_ret(c, m);
    return;

}
