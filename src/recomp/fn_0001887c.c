/* fn_0001887c - 302 byte(s), 85 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001887c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001887cu): goto L_1887C;
    case RC_ADDR(0x00018880u): goto L_18880;
    case RC_ADDR(0x00018882u): goto L_18882;
    case RC_ADDR(0x00018886u): goto L_18886;
    case RC_ADDR(0x0001888au): goto L_1888A;
    case RC_ADDR(0x0001888cu): goto L_1888C;
    case RC_ADDR(0x00018890u): goto L_18890;
    case RC_ADDR(0x00018894u): goto L_18894;
    case RC_ADDR(0x00018898u): goto L_18898;
    case RC_ADDR(0x0001889au): goto L_1889A;
    case RC_ADDR(0x0001889cu): goto L_1889C;
    case RC_ADDR(0x0001889eu): goto L_1889E;
    case RC_ADDR(0x000188a4u): goto L_188A4;
    case RC_ADDR(0x000188a8u): goto L_188A8;
    case RC_ADDR(0x000188acu): goto L_188AC;
    case RC_ADDR(0x000188b0u): goto L_188B0;
    case RC_ADDR(0x000188b2u): goto L_188B2;
    case RC_ADDR(0x000188b8u): goto L_188B8;
    case RC_ADDR(0x000188bcu): goto L_188BC;
    case RC_ADDR(0x000188beu): goto L_188BE;
    case RC_ADDR(0x000188c0u): goto L_188C0;
    case RC_ADDR(0x000188c2u): goto L_188C2;
    case RC_ADDR(0x000188c4u): goto L_188C4;
    case RC_ADDR(0x000188cau): goto L_188CA;
    case RC_ADDR(0x000188ceu): goto L_188CE;
    case RC_ADDR(0x000188d4u): goto L_188D4;
    case RC_ADDR(0x000188d6u): goto L_188D6;
    case RC_ADDR(0x000188dau): goto L_188DA;
    case RC_ADDR(0x000188dcu): goto L_188DC;
    case RC_ADDR(0x000188deu): goto L_188DE;
    case RC_ADDR(0x000188e4u): goto L_188E4;
    case RC_ADDR(0x000188e6u): goto L_188E6;
    case RC_ADDR(0x000188ecu): goto L_188EC;
    case RC_ADDR(0x000188eeu): goto L_188EE;
    case RC_ADDR(0x000188f4u): goto L_188F4;
    case RC_ADDR(0x000188f6u): goto L_188F6;
    case RC_ADDR(0x000188fau): goto L_188FA;
    case RC_ADDR(0x000188fcu): goto L_188FC;
    case RC_ADDR(0x00018902u): goto L_18902;
    case RC_ADDR(0x00018904u): goto L_18904;
    case RC_ADDR(0x0001890au): goto L_1890A;
    case RC_ADDR(0x0001890cu): goto L_1890C;
    case RC_ADDR(0x00018910u): goto L_18910;
    case RC_ADDR(0x00018912u): goto L_18912;
    case RC_ADDR(0x00018918u): goto L_18918;
    case RC_ADDR(0x0001891au): goto L_1891A;
    case RC_ADDR(0x00018920u): goto L_18920;
    case RC_ADDR(0x00018922u): goto L_18922;
    case RC_ADDR(0x00018928u): goto L_18928;
    case RC_ADDR(0x0001892au): goto L_1892A;
    case RC_ADDR(0x00018930u): goto L_18930;
    case RC_ADDR(0x00018932u): goto L_18932;
    case RC_ADDR(0x00018938u): goto L_18938;
    case RC_ADDR(0x0001893au): goto L_1893A;
    case RC_ADDR(0x00018940u): goto L_18940;
    case RC_ADDR(0x00018942u): goto L_18942;
    case RC_ADDR(0x00018944u): goto L_18944;
    case RC_ADDR(0x00018946u): goto L_18946;
    case RC_ADDR(0x00018948u): goto L_18948;
    case RC_ADDR(0x0001894au): goto L_1894A;
    case RC_ADDR(0x0001894cu): goto L_1894C;
    case RC_ADDR(0x0001894eu): goto L_1894E;
    case RC_ADDR(0x00018954u): goto L_18954;
    case RC_ADDR(0x00018956u): goto L_18956;
    case RC_ADDR(0x0001895cu): goto L_1895C;
    case RC_ADDR(0x0001895eu): goto L_1895E;
    case RC_ADDR(0x00018962u): goto L_18962;
    case RC_ADDR(0x00018964u): goto L_18964;
    case RC_ADDR(0x0001896au): goto L_1896A;
    case RC_ADDR(0x0001896cu): goto L_1896C;
    case RC_ADDR(0x00018972u): goto L_18972;
    case RC_ADDR(0x00018974u): goto L_18974;
    case RC_ADDR(0x00018978u): goto L_18978;
    case RC_ADDR(0x0001897au): goto L_1897A;
    case RC_ADDR(0x0001897eu): goto L_1897E;
    case RC_ADDR(0x00018980u): goto L_18980;
    case RC_ADDR(0x00018984u): goto L_18984;
    case RC_ADDR(0x00018988u): goto L_18988;
    case RC_ADDR(0x0001898cu): goto L_1898C;
    case RC_ADDR(0x0001898eu): goto L_1898E;
    case RC_ADDR(0x00018992u): goto L_18992;
    case RC_ADDR(0x00018996u): goto L_18996;
    case RC_ADDR(0x0001899au): goto L_1899A;
    case RC_ADDR(0x000189a0u): goto L_189A0;
    case RC_ADDR(0x000189a6u): goto L_189A6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1887C:
    /* 0001887c   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001887cu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_18880:
    /* 00018880   2  move.l D4,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018880u);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18882:
    /* 00018882   4  move.w (1f42,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018882u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f42u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18886:
    /* 00018886   4  cmp.w (1f40,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018886u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f40u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1888A:
    /* 0001888a   2  beq 000188c4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001888au);
    if (rc_cond(c, 7)) goto L_188C4;

L_1888C:
    /* 0001888c   4  move.w #29,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001888cu);
    t0 = 0x00000029u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18890:
    /* 00018890   4  move.l (a12,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018890u);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa12u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18894:
    /* 00018894   4  jsr (00019e30) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018894u);
    rc_push32(c, m, RC_ADDR(0x00018898u));
    rc_depth++;
    c->pc = RC_ADDR(0x00019e30u);
    return;

L_18898:
    /* 00018898   2  addq.w #6,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018898u);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1889A:
    /* 0001889a   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001889au);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1889C:
    /* 0001889c   2  beq 000188be */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001889cu);
    if (rc_cond(c, 7)) goto L_188BE;

L_1889E:
    /* 0001889e   6  move.w (1f42,A4),(1f40,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001889eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f42u));
    rc_wr16(c, m, (c->a[4] + 0x1f40u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_188A4:
    /* 000188a4   4  jsr (0001b1c2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000188a4u);
    rc_push32(c, m, RC_ADDR(0x000188a8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001b1c2u);
    return;

L_188A8:
    /* 000188a8   4  move.w (1f40,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000188a8u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f40u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_188AC:
    /* 000188ac   4  jsr (0001abbe) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000188acu);
    rc_push32(c, m, RC_ADDR(0x000188b0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001abbeu);
    return;

L_188B0:
    /* 000188b0   2  addq.w #2,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000188b0u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_188B2:
    /* 000188b2   6  move.w #2,(736,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000188b2u);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x736u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_188B8:
    /* 000188b8   4  jsr (00018570) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000188b8u);
    rc_push32(c, m, RC_ADDR(0x000188bcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00018570u);
    return;

L_188BC:
    /* 000188bc   2  bra 000188c4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000188bcu);
    goto L_188C4;

L_188BE:
    /* 000188be   2  move.l (A7)+,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000188beu);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_188C0:
    /* 000188c0   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000188c0u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_188C2:
    /* 000188c2   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000188c2u);
    rc_ret(c, m);
    return;

L_188C4:
    /* 000188c4   6  cmpi.w #c8,(47c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000188c4u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_cmp(c, RC_W, t0, 0x000000c8u);

L_188CA:
    /* 000188ca   4  ble 0001894e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000188cau);
    if (rc_cond(c, 15)) goto L_1894E;

L_188CE:
    /* 000188ce   6  cmpi.w #f0,(47c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000188ceu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_cmp(c, RC_W, t0, 0x000000f0u);

L_188D4:
    /* 000188d4   2  bge 0001894e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000188d4u);
    if (rc_cond(c, 12)) goto L_1894E;

L_188D6:
    /* 000188d6   4  move.w (1f40,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000188d6u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f40u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_188DA:
    /* 000188da   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000188dau);
    rc_ext_l(c, 0);

L_188DC:
    /* 000188dc   2  bra 00018942 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000188dcu);
    goto L_18942;

L_188DE:
    /* 000188de   6  cmpi.w #180,(47a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000188deu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_cmp(c, RC_W, t0, 0x00000180u);

L_188E4:
    /* 000188e4   2  ble 000188f4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000188e4u);
    if (rc_cond(c, 15)) goto L_188F4;

L_188E6:
    /* 000188e6   6  cmpi.w #1ac,(47a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000188e6u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_cmp(c, RC_W, t0, 0x000001acu);

L_188EC:
    /* 000188ec   2  bge 000188f4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000188ecu);
    if (rc_cond(c, 12)) goto L_188F4;

L_188EE:
    /* 000188ee   6  move.w #1,(1f42,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000188eeu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1f42u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_188F4:
    /* 000188f4   2  bra 0001894e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000188f4u);
    goto L_1894E;

L_188F6:
    /* 000188f6   4  tst.w (ffffc6bc,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000188f6u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3944u));
    rc_set_nzvc(c, t0, RC_W);

L_188FA:
    /* 000188fa   2  beq 00018912 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000188fau);
    if (rc_cond(c, 7)) goto L_18912;

L_188FC:
    /* 000188fc   6  cmpi.w #1ac,(47a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000188fcu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_cmp(c, RC_W, t0, 0x000001acu);

L_18902:
    /* 00018902   2  ble 00018910 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018902u);
    if (rc_cond(c, 15)) goto L_18910;

L_18904:
    /* 00018904   6  cmpi.w #1c8,(47a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018904u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_cmp(c, RC_W, t0, 0x000001c8u);

L_1890A:
    /* 0001890a   2  bge 00018910 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001890au);
    if (rc_cond(c, 12)) goto L_18910;

L_1890C:
    /* 0001890c   4  clr.w (1f42,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001890cu);
    rc_wr16(c, m, (c->a[4] + 0x1f42u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18910:
    /* 00018910   2  bra 00018928 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018910u);
    goto L_18928;

L_18912:
    /* 00018912   6  cmpi.w #180,(47a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018912u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_cmp(c, RC_W, t0, 0x00000180u);

L_18918:
    /* 00018918   2  ble 00018928 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018918u);
    if (rc_cond(c, 15)) goto L_18928;

L_1891A:
    /* 0001891a   6  cmpi.w #1ac,(47a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001891au);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_cmp(c, RC_W, t0, 0x000001acu);

L_18920:
    /* 00018920   2  bge 00018928 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018920u);
    if (rc_cond(c, 12)) goto L_18928;

L_18922:
    /* 00018922   6  move.w #2,(1f42,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018922u);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x1f42u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18928:
    /* 00018928   2  bra 0001894e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018928u);
    goto L_1894E;

L_1892A:
    /* 0001892a   6  cmpi.w #1ac,(47a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001892au);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_cmp(c, RC_W, t0, 0x000001acu);

L_18930:
    /* 00018930   2  ble 00018940 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018930u);
    if (rc_cond(c, 15)) goto L_18940;

L_18932:
    /* 00018932   6  cmpi.w #1c8,(47a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018932u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_cmp(c, RC_W, t0, 0x000001c8u);

L_18938:
    /* 00018938   2  bge 00018940 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018938u);
    if (rc_cond(c, 12)) goto L_18940;

L_1893A:
    /* 0001893a   6  move.w #1,(1f42,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001893au);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1f42u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18940:
    /* 00018940   2  bra 0001894e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018940u);
    goto L_1894E;

L_18942:
    /* 00018942   2  tst.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018942u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_18944:
    /* 00018944   2  beq 000188de */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018944u);
    if (rc_cond(c, 7)) { rc_tick(); goto L_188DE; }

L_18946:
    /* 00018946   2  subq.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018946u);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_18948:
    /* 00018948   2  beq 000188f6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018948u);
    if (rc_cond(c, 7)) { rc_tick(); goto L_188F6; }

L_1894A:
    /* 0001894a   2  subq.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001894au);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1894C:
    /* 0001894c   2  beq 0001892a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001894cu);
    if (rc_cond(c, 7)) { rc_tick(); goto L_1892A; }

L_1894E:
    /* 0001894e   6  cmpi.w #180,(47a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001894eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_cmp(c, RC_W, t0, 0x00000180u);

L_18954:
    /* 00018954   2  ble 000189a6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018954u);
    if (rc_cond(c, 15)) goto L_189A6;

L_18956:
    /* 00018956   6  cmpi.w #1c8,(47a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018956u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_cmp(c, RC_W, t0, 0x000001c8u);

L_1895C:
    /* 0001895c   2  bge 000189a6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001895cu);
    if (rc_cond(c, 12)) goto L_189A6;

L_1895E:
    /* 0001895e   4  tst.w (1cca,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001895eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ccau));
    rc_set_nzvc(c, t0, RC_W);

L_18962:
    /* 00018962   2  bne 000189a6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018962u);
    if (rc_cond(c, 6)) goto L_189A6;

L_18964:
    /* 00018964   6  cmpi.w #118,(47c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018964u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_cmp(c, RC_W, t0, 0x00000118u);

L_1896A:
    /* 0001896a   2  blt 000189a6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001896au);
    if (rc_cond(c, 13)) goto L_189A6;

L_1896C:
    /* 0001896c   6  cmpi.w #140,(47c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001896cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_cmp(c, RC_W, t0, 0x00000140u);

L_18972:
    /* 00018972   2  bge 000189a6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018972u);
    if (rc_cond(c, 12)) goto L_189A6;

L_18974:
    /* 00018974   4  tst.w (1ccc,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018974u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cccu));
    rc_set_nzvc(c, t0, RC_W);

L_18978:
    /* 00018978   2  bne 000189a6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018978u);
    if (rc_cond(c, 6)) goto L_189A6;

L_1897A:
    /* 0001897a   4  tst.w (ffffc6bc,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001897au);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3944u));
    rc_set_nzvc(c, t0, RC_W);

L_1897E:
    /* 0001897e   2  beq 0001898e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001897eu);
    if (rc_cond(c, 7)) goto L_1898E;

L_18980:
    /* 00018980   4  move.w (1f40,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018980u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f40u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18984:
    /* 00018984   4  bchg #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018984u);
    t4 = 0x00000000u;
    t0 = rc_d_get(c, 0, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 ^ (1u << t4);
    rc_d_set(c, 0, RC_B, t2);

L_18988:
    /* 00018988   4  move.w D0,(1f42,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018988u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1f42u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1898C:
    /* 0001898c   2  bra 0001899a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001898cu);
    goto L_1899A;

L_1898E:
    /* 0001898e   4  move.w (1f40,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001898eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f40u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18992:
    /* 00018992   4  eori.w #3,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018992u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 ^ 0x00000003u;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_18996:
    /* 00018996   4  move.w D0,(1f42,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018996u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1f42u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1899A:
    /* 0001899a   6  move.w #2,(1cca,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001899au);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x1ccau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_189A0:
    /* 000189a0   6  move.w #28,(1cce,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000189a0u);
    t0 = 0x00000028u;
    rc_wr16(c, m, (c->a[4] + 0x1cceu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_189A6:
    /* 000189a6   4  bra 000188be */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000189a6u);
    rc_tick();
    goto L_188BE;

}
