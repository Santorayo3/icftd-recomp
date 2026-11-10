/* fn_00020096 - 132 byte(s), 42 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020096(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case 0x00020096u: goto L_20096;
    case 0x0002009au: goto L_2009A;
    case 0x0002009cu: goto L_2009C;
    case 0x000200a0u: goto L_200A0;
    case 0x000200a4u: goto L_200A4;
    case 0x000200a6u: goto L_200A6;
    case 0x000200a8u: goto L_200A8;
    case 0x000200aau: goto L_200AA;
    case 0x000200aeu: goto L_200AE;
    case 0x000200b2u: goto L_200B2;
    case 0x000200b4u: goto L_200B4;
    case 0x000200b8u: goto L_200B8;
    case 0x000200bau: goto L_200BA;
    case 0x000200bcu: goto L_200BC;
    case 0x000200beu: goto L_200BE;
    case 0x000200c4u: goto L_200C4;
    case 0x000200c8u: goto L_200C8;
    case 0x000200cau: goto L_200CA;
    case 0x000200d2u: goto L_200D2;
    case 0x000200d4u: goto L_200D4;
    case 0x000200d8u: goto L_200D8;
    case 0x000200dau: goto L_200DA;
    case 0x000200deu: goto L_200DE;
    case 0x000200e2u: goto L_200E2;
    case 0x000200e6u: goto L_200E6;
    case 0x000200e8u: goto L_200E8;
    case 0x000200eau: goto L_200EA;
    case 0x000200eeu: goto L_200EE;
    case 0x000200f2u: goto L_200F2;
    case 0x000200f6u: goto L_200F6;
    case 0x000200f8u: goto L_200F8;
    case 0x000200fau: goto L_200FA;
    case 0x000200feu: goto L_200FE;
    case 0x00020100u: goto L_20100;
    case 0x00020102u: goto L_20102;
    case 0x00020104u: goto L_20104;
    case 0x00020108u: goto L_20108;
    case 0x0002010cu: goto L_2010C;
    case 0x00020112u: goto L_20112;
    case 0x00020114u: goto L_20114;
    case 0x00020116u: goto L_20116;
    case 0x00020118u: goto L_20118;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20096:
    /* 00020096   4  link.w A5,#fffffff6 */
    c->pc = 0x00020096u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_2009A:
    /* 0002009a   2  move.l A2,-(A7) */
    c->pc = 0x0002009au;
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2009C:
    /* 0002009c   4  movea.l (8,A5),A2 */
    c->pc = 0x0002009cu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_200A0:
    /* 000200a0   4  move.w (2,A2),D0 */
    c->pc = 0x000200a0u;
    t0 = rc_rd16(c, m, (c->a[2] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_200A4:
    /* 000200a4   2  mulu.w (A2),D0 */
    c->pc = 0x000200a4u;
    t0 = rc_rd16(c, m, c->a[2]);
    rc_mulu(c, 0, t0);

L_200A6:
    /* 000200a6   2  moveq #0,D1 */
    c->pc = 0x000200a6u;
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_200A8:
    /* 000200a8   2  move.w D0,D1 */
    c->pc = 0x000200a8u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_200AA:
    /* 000200aa   4  move.l D1,(fffffff8,A5) */
    c->pc = 0x000200aau;
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_200AE:
    /* 000200ae   4  clr.w (fffffff6,A5) */
    c->pc = 0x000200aeu;
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_200B2:
    /* 000200b2   2  moveq #0,D0 */
    c->pc = 0x000200b2u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_200B4:
    /* 000200b4   4  move.w (fffffff6,A5),D0 */
    c->pc = 0x000200b4u;
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_200B8:
    /* 000200b8   2  asl.l #2,D0 */
    c->pc = 0x000200b8u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_200BA:
    /* 000200ba   2  movea.l D0,A0 */
    c->pc = 0x000200bau;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_200BC:
    /* 000200bc   2  adda.l A2,A0 */
    c->pc = 0x000200bcu;
    t0 = rc_a_get(c, 2, RC_L);
    c->a[0] += t0;

L_200BE:
    /* 000200be   6  move.l (8,A0),(fffffffc,A5) */
    c->pc = 0x000200beu;
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_200C4:
    /* 000200c4   4  tst.l (fffffffc,A5) */
    c->pc = 0x000200c4u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_200C8:
    /* 000200c8   2  beq 000200f8 */
    c->pc = 0x000200c8u;
    if (rc_cond(c, 7)) goto L_200F8;

L_200CA:
    /* 000200ca   8  cmpi.l #ffffffff,(fffffffc,A5) */
    c->pc = 0x000200cau;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0xffffffffu);

L_200D2:
    /* 000200d2   2  beq 000200f8 */
    c->pc = 0x000200d2u;
    if (rc_cond(c, 7)) goto L_200F8;

L_200D4:
    /* 000200d4   4  tst.w (6,A2) */
    c->pc = 0x000200d4u;
    t0 = rc_rd16(c, m, (c->a[2] + 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_200D8:
    /* 000200d8   2  beq 000200ea */
    c->pc = 0x000200d8u;
    if (rc_cond(c, 7)) goto L_200EA;

L_200DA:
    /* 000200da   4  move.l (fffffff8,A5),-(A7) */
    c->pc = 0x000200dau;
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_200DE:
    /* 000200de   4  move.l (fffffffc,A5),-(A7) */
    c->pc = 0x000200deu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_200E2:
    /* 000200e2   4  jsr (ffff8344,A4) */
    c->pc = 0x000200e2u;
    /* vector 139: exec.library -210 */
    c->pc = 0x000200e6u;
    rc_os_call(c, m, 0, -210);

L_200E6:
    /* 000200e6   2  addq.w #8,A7 */
    c->pc = 0x000200e6u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_200E8:
    /* 000200e8   2  bra 000200f8 */
    c->pc = 0x000200e8u;
    goto L_200F8;

L_200EA:
    /* 000200ea   4  move.l (fffffff8,A5),-(A7) */
    c->pc = 0x000200eau;
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_200EE:
    /* 000200ee   4  move.l (fffffffc,A5),-(A7) */
    c->pc = 0x000200eeu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_200F2:
    /* 000200f2   4  jsr (ffff8344,A4) */
    c->pc = 0x000200f2u;
    /* vector 139: exec.library -210 */
    c->pc = 0x000200f6u;
    rc_os_call(c, m, 0, -210);

L_200F6:
    /* 000200f6   2  addq.w #8,A7 */
    c->pc = 0x000200f6u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_200F8:
    /* 000200f8   2  moveq #0,D0 */
    c->pc = 0x000200f8u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_200FA:
    /* 000200fa   4  move.w (fffffff6,A5),D0 */
    c->pc = 0x000200fau;
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_200FE:
    /* 000200fe   2  asl.l #2,D0 */
    c->pc = 0x000200feu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_20100:
    /* 00020100   2  movea.l D0,A0 */
    c->pc = 0x00020100u;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_20102:
    /* 00020102   2  adda.l A2,A0 */
    c->pc = 0x00020102u;
    t0 = rc_a_get(c, 2, RC_L);
    c->a[0] += t0;

L_20104:
    /* 00020104   4  clr.l (8,A0) */
    c->pc = 0x00020104u;
    rc_wr32(c, m, (c->a[0] + 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20108:
    /* 00020108   4  addq.w #1,(fffffff6,A5) */
    c->pc = 0x00020108u;
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_2010C:
    /* 0002010c   6  cmpi.w #8,(fffffff6,A5) */
    c->pc = 0x0002010cu;
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_20112:
    /* 00020112   2  bcs 000200b2 */
    c->pc = 0x00020112u;
    if (rc_cond(c, 5)) { rc_tick(); goto L_200B2; }

L_20114:
    /* 00020114   2  movea.l (A7)+,A2 */
    c->pc = 0x00020114u;
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_20116:
    /* 00020116   2  unlk A5 */
    c->pc = 0x00020116u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_20118:
    /* 00020118   2  rts */
    c->pc = 0x00020118u;
    rc_ret(c, m);
    return;

}
