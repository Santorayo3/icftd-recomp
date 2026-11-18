/* fn_0000c31e - 392 byte(s), 121 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000c31e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000c31eu): goto L_C31E;
    case RC_ADDR(0x0000c322u): goto L_C322;
    case RC_ADDR(0x0000c324u): goto L_C324;
    case RC_ADDR(0x0000c328u): goto L_C328;
    case RC_ADDR(0x0000c32au): goto L_C32A;
    case RC_ADDR(0x0000c32cu): goto L_C32C;
    case RC_ADDR(0x0000c330u): goto L_C330;
    case RC_ADDR(0x0000c334u): goto L_C334;
    case RC_ADDR(0x0000c338u): goto L_C338;
    case RC_ADDR(0x0000c33cu): goto L_C33C;
    case RC_ADDR(0x0000c340u): goto L_C340;
    case RC_ADDR(0x0000c344u): goto L_C344;
    case RC_ADDR(0x0000c348u): goto L_C348;
    case RC_ADDR(0x0000c34au): goto L_C34A;
    case RC_ADDR(0x0000c34eu): goto L_C34E;
    case RC_ADDR(0x0000c350u): goto L_C350;
    case RC_ADDR(0x0000c352u): goto L_C352;
    case RC_ADDR(0x0000c356u): goto L_C356;
    case RC_ADDR(0x0000c35au): goto L_C35A;
    case RC_ADDR(0x0000c35eu): goto L_C35E;
    case RC_ADDR(0x0000c362u): goto L_C362;
    case RC_ADDR(0x0000c366u): goto L_C366;
    case RC_ADDR(0x0000c36au): goto L_C36A;
    case RC_ADDR(0x0000c36eu): goto L_C36E;
    case RC_ADDR(0x0000c372u): goto L_C372;
    case RC_ADDR(0x0000c374u): goto L_C374;
    case RC_ADDR(0x0000c376u): goto L_C376;
    case RC_ADDR(0x0000c37au): goto L_C37A;
    case RC_ADDR(0x0000c37eu): goto L_C37E;
    case RC_ADDR(0x0000c382u): goto L_C382;
    case RC_ADDR(0x0000c386u): goto L_C386;
    case RC_ADDR(0x0000c388u): goto L_C388;
    case RC_ADDR(0x0000c38au): goto L_C38A;
    case RC_ADDR(0x0000c38eu): goto L_C38E;
    case RC_ADDR(0x0000c392u): goto L_C392;
    case RC_ADDR(0x0000c396u): goto L_C396;
    case RC_ADDR(0x0000c39au): goto L_C39A;
    case RC_ADDR(0x0000c39cu): goto L_C39C;
    case RC_ADDR(0x0000c3a0u): goto L_C3A0;
    case RC_ADDR(0x0000c3a2u): goto L_C3A2;
    case RC_ADDR(0x0000c3a4u): goto L_C3A4;
    case RC_ADDR(0x0000c3a8u): goto L_C3A8;
    case RC_ADDR(0x0000c3aau): goto L_C3AA;
    case RC_ADDR(0x0000c3acu): goto L_C3AC;
    case RC_ADDR(0x0000c3b2u): goto L_C3B2;
    case RC_ADDR(0x0000c3b4u): goto L_C3B4;
    case RC_ADDR(0x0000c3bau): goto L_C3BA;
    case RC_ADDR(0x0000c3bcu): goto L_C3BC;
    case RC_ADDR(0x0000c3c0u): goto L_C3C0;
    case RC_ADDR(0x0000c3c2u): goto L_C3C2;
    case RC_ADDR(0x0000c3c6u): goto L_C3C6;
    case RC_ADDR(0x0000c3cau): goto L_C3CA;
    case RC_ADDR(0x0000c3ceu): goto L_C3CE;
    case RC_ADDR(0x0000c3d0u): goto L_C3D0;
    case RC_ADDR(0x0000c3d6u): goto L_C3D6;
    case RC_ADDR(0x0000c3d8u): goto L_C3D8;
    case RC_ADDR(0x0000c3dcu): goto L_C3DC;
    case RC_ADDR(0x0000c3deu): goto L_C3DE;
    case RC_ADDR(0x0000c3e2u): goto L_C3E2;
    case RC_ADDR(0x0000c3e6u): goto L_C3E6;
    case RC_ADDR(0x0000c3eau): goto L_C3EA;
    case RC_ADDR(0x0000c3ecu): goto L_C3EC;
    case RC_ADDR(0x0000c3eeu): goto L_C3EE;
    case RC_ADDR(0x0000c3f0u): goto L_C3F0;
    case RC_ADDR(0x0000c3f2u): goto L_C3F2;
    case RC_ADDR(0x0000c3f4u): goto L_C3F4;
    case RC_ADDR(0x0000c404u): goto L_C404;
    case RC_ADDR(0x0000c40au): goto L_C40A;
    case RC_ADDR(0x0000c40cu): goto L_C40C;
    case RC_ADDR(0x0000c40eu): goto L_C40E;
    case RC_ADDR(0x0000c412u): goto L_C412;
    case RC_ADDR(0x0000c416u): goto L_C416;
    case RC_ADDR(0x0000c41au): goto L_C41A;
    case RC_ADDR(0x0000c41cu): goto L_C41C;
    case RC_ADDR(0x0000c41eu): goto L_C41E;
    case RC_ADDR(0x0000c422u): goto L_C422;
    case RC_ADDR(0x0000c426u): goto L_C426;
    case RC_ADDR(0x0000c42au): goto L_C42A;
    case RC_ADDR(0x0000c42eu): goto L_C42E;
    case RC_ADDR(0x0000c430u): goto L_C430;
    case RC_ADDR(0x0000c432u): goto L_C432;
    case RC_ADDR(0x0000c436u): goto L_C436;
    case RC_ADDR(0x0000c43au): goto L_C43A;
    case RC_ADDR(0x0000c43eu): goto L_C43E;
    case RC_ADDR(0x0000c442u): goto L_C442;
    case RC_ADDR(0x0000c444u): goto L_C444;
    case RC_ADDR(0x0000c448u): goto L_C448;
    case RC_ADDR(0x0000c44au): goto L_C44A;
    case RC_ADDR(0x0000c44cu): goto L_C44C;
    case RC_ADDR(0x0000c450u): goto L_C450;
    case RC_ADDR(0x0000c452u): goto L_C452;
    case RC_ADDR(0x0000c454u): goto L_C454;
    case RC_ADDR(0x0000c45au): goto L_C45A;
    case RC_ADDR(0x0000c45cu): goto L_C45C;
    case RC_ADDR(0x0000c462u): goto L_C462;
    case RC_ADDR(0x0000c464u): goto L_C464;
    case RC_ADDR(0x0000c468u): goto L_C468;
    case RC_ADDR(0x0000c46au): goto L_C46A;
    case RC_ADDR(0x0000c46eu): goto L_C46E;
    case RC_ADDR(0x0000c472u): goto L_C472;
    case RC_ADDR(0x0000c476u): goto L_C476;
    case RC_ADDR(0x0000c478u): goto L_C478;
    case RC_ADDR(0x0000c47eu): goto L_C47E;
    case RC_ADDR(0x0000c480u): goto L_C480;
    case RC_ADDR(0x0000c484u): goto L_C484;
    case RC_ADDR(0x0000c486u): goto L_C486;
    case RC_ADDR(0x0000c48au): goto L_C48A;
    case RC_ADDR(0x0000c48eu): goto L_C48E;
    case RC_ADDR(0x0000c492u): goto L_C492;
    case RC_ADDR(0x0000c494u): goto L_C494;
    case RC_ADDR(0x0000c496u): goto L_C496;
    case RC_ADDR(0x0000c498u): goto L_C498;
    case RC_ADDR(0x0000c49au): goto L_C49A;
    case RC_ADDR(0x0000c49cu): goto L_C49C;
    case RC_ADDR(0x0000c4acu): goto L_C4AC;
    case RC_ADDR(0x0000c4b2u): goto L_C4B2;
    case RC_ADDR(0x0000c4b4u): goto L_C4B4;
    case RC_ADDR(0x0000c4b6u): goto L_C4B6;
    case RC_ADDR(0x0000c4bau): goto L_C4BA;
    case RC_ADDR(0x0000c4beu): goto L_C4BE;
    case RC_ADDR(0x0000c4c0u): goto L_C4C0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_C31E:
    /* 0000c31e   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x0000c31eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_C322:
    /* 0000c322   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000c322u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C324:
    /* 0000c324   4  move.w (dcc,A4),D0 */
    c->pc = RC_ADDR(0x0000c324u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C328:
    /* 0000c328   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c328u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C32A:
    /* 0000c32a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000c32au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_C32C:
    /* 0000c32c   4  lea (d08,A4),A0 */
    c->pc = RC_ADDR(0x0000c32cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd08u);

L_C330:
    /* 0000c330   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000c330u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C334:
    /* 0000c334   4  movea.l (838,A4),A0 */
    c->pc = RC_ADDR(0x0000c334u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x838u));
    c->a[0] = t0;

L_C338:
    /* 0000c338   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000c338u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C33C:
    /* 0000c33c   4  jsr (ffff8248,A4) */
    c->pc = RC_ADDR(0x0000c33cu);
    rc_step(c, m, 18);
    /* vector 97 */
    rc_push32(c, m, RC_ADDR(0x0000c340u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d3eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001fe0au);
    return;

L_C340:
    /* 0000c340   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000c340u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_C344:
    /* 0000c344   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000c344u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_C348:
    /* 0000c348   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000c348u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C34A:
    /* 0000c34a   4  move.w (dce,A4),D0 */
    c->pc = RC_ADDR(0x0000c34au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C34E:
    /* 0000c34e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c34eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C350:
    /* 0000c350   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000c350u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_C352:
    /* 0000c352   4  lea (d48,A4),A0 */
    c->pc = RC_ADDR(0x0000c352u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd48u);

L_C356:
    /* 0000c356   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000c356u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C35A:
    /* 0000c35a   4  movea.l (838,A4),A0 */
    c->pc = RC_ADDR(0x0000c35au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x838u));
    c->a[0] = t0;

L_C35E:
    /* 0000c35e   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000c35eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C362:
    /* 0000c362   4  jsr (ffff8248,A4) */
    c->pc = RC_ADDR(0x0000c362u);
    rc_step(c, m, 18);
    /* vector 97 */
    rc_push32(c, m, RC_ADDR(0x0000c366u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d3eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001fe0au);
    return;

L_C366:
    /* 0000c366   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000c366u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_C36A:
    /* 0000c36a   4  move.l D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000c36au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_C36E:
    /* 0000c36e   4  move.w (dce,A4),D0 */
    c->pc = RC_ADDR(0x0000c36eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C372:
    /* 0000c372   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c372u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C374:
    /* 0000c374   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c374u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_C376:
    /* 0000c376   4  lea (ffff98e0,A4),A0 */
    c->pc = RC_ADDR(0x0000c376u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6720u);

L_C37A:
    /* 0000c37a   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000c37au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_C37E:
    /* 0000c37e   4  beq 0000c416 */
    c->pc = RC_ADDR(0x0000c37eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_C416;

L_C382:
    /* 0000c382   4  move.w (dce,A4),D0 */
    c->pc = RC_ADDR(0x0000c382u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C386:
    /* 0000c386   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c386u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C388:
    /* 0000c388   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c388u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_C38A:
    /* 0000c38a   4  lea (ffff98e0,A4),A0 */
    c->pc = RC_ADDR(0x0000c38au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6720u);

L_C38E:
    /* 0000c38e   4  movea.l (fffffff8,A5),A1 */
    c->pc = RC_ADDR(0x0000c38eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[1] = t0;

L_C392:
    /* 0000c392   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000c392u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C396:
    /* 0000c396   4  cmp.w (2a,A1),D1 */
    c->pc = RC_ADDR(0x0000c396u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x2au));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_C39A:
    /* 0000c39a   2  bne 0000c416 */
    c->pc = RC_ADDR(0x0000c39au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_C416;

L_C39C:
    /* 0000c39c   4  move.w (dcc,A4),D0 */
    c->pc = RC_ADDR(0x0000c39cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C3A0:
    /* 0000c3a0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c3a0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C3A2:
    /* 0000c3a2   2  bra 0000c404 */
    c->pc = RC_ADDR(0x0000c3a2u);
    rc_step(c, m, 10);
    goto L_C404;

L_C3A4:
    /* 0000c3a4   4  move.w (dce,A4),D0 */
    c->pc = RC_ADDR(0x0000c3a4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C3A8:
    /* 0000c3a8   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c3a8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C3AA:
    /* 0000c3aa   2  bra 0000c3ec */
    c->pc = RC_ADDR(0x0000c3aau);
    rc_step(c, m, 10);
    goto L_C3EC;

L_C3AC:
    /* 0000c3ac   6  cmpi.w #3,(dcc,A4) */
    c->pc = RC_ADDR(0x0000c3acu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_C3B2:
    /* 0000c3b2   2  beq 0000c3bc */
    c->pc = RC_ADDR(0x0000c3b2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_C3BC;

L_C3B4:
    /* 0000c3b4   6  cmpi.w #1,(dcc,A4) */
    c->pc = RC_ADDR(0x0000c3b4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_C3BA:
    /* 0000c3ba   2  bne 0000c3c2 */
    c->pc = RC_ADDR(0x0000c3bau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_C3C2;

L_C3BC:
    /* 0000c3bc   4  jsr (0000c7cc) */
    c->pc = RC_ADDR(0x0000c3bcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c3c0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c7ccu);
    return;

L_C3C0:
    /* 0000c3c0   2  bra 0000c3f4 */
    c->pc = RC_ADDR(0x0000c3c0u);
    rc_step(c, m, 10);
    goto L_C3F4;

L_C3C2:
    /* 0000c3c2   4  jsr (0000c784) */
    c->pc = RC_ADDR(0x0000c3c2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c3c6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c784u);
    return;

L_C3C6:
    /* 0000c3c6   4  jsr (0000c4c2) */
    c->pc = RC_ADDR(0x0000c3c6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c3cau));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c4c2u);
    return;

L_C3CA:
    /* 0000c3ca   4  addq.w #3,(dd6,A4) */
    c->pc = RC_ADDR(0x0000c3cau);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xdd6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000003u;
    rc_flags_add(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_C3CE:
    /* 0000c3ce   2  bra 0000c3f4 */
    c->pc = RC_ADDR(0x0000c3ceu);
    rc_step(c, m, 10);
    goto L_C3F4;

L_C3D0:
    /* 0000c3d0   6  cmpi.w #2,(dcc,A4) */
    c->pc = RC_ADDR(0x0000c3d0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_C3D6:
    /* 0000c3d6   2  bne 0000c3de */
    c->pc = RC_ADDR(0x0000c3d6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_C3DE;

L_C3D8:
    /* 0000c3d8   4  jsr (0000c7cc) */
    c->pc = RC_ADDR(0x0000c3d8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c3dcu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c7ccu);
    return;

L_C3DC:
    /* 0000c3dc   2  bra 0000c3f4 */
    c->pc = RC_ADDR(0x0000c3dcu);
    rc_step(c, m, 10);
    goto L_C3F4;

L_C3DE:
    /* 0000c3de   4  jsr (0000c73c) */
    c->pc = RC_ADDR(0x0000c3deu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c3e2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c73cu);
    return;

L_C3E2:
    /* 0000c3e2   4  jsr (0000c4c2) */
    c->pc = RC_ADDR(0x0000c3e2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c3e6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c4c2u);
    return;

L_C3E6:
    /* 0000c3e6   4  addq.w #1,(dd6,A4) */
    c->pc = RC_ADDR(0x0000c3e6u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xdd6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_C3EA:
    /* 0000c3ea   2  bra 0000c3f4 */
    c->pc = RC_ADDR(0x0000c3eau);
    rc_step(c, m, 10);
    goto L_C3F4;

L_C3EC:
    /* 0000c3ec   2  subq.l #4,D0 */
    c->pc = RC_ADDR(0x0000c3ecu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000004u;
    rc_flags_sub(c, RC_L, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_C3EE:
    /* 0000c3ee   2  beq 0000c3ac */
    c->pc = RC_ADDR(0x0000c3eeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_C3AC; }

L_C3F0:
    /* 0000c3f0   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000c3f0u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_C3F2:
    /* 0000c3f2   2  beq 0000c3d0 */
    c->pc = RC_ADDR(0x0000c3f2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_C3D0; }

L_C3F4:
    /* 0000c3f4   2  bra 0000c416 */
    c->pc = RC_ADDR(0x0000c3f4u);
    rc_step(c, m, 10);
    goto L_C416;

L_C404:
    /* 0000c404   6  cmp.l #7,D0 */
    c->pc = RC_ADDR(0x0000c404u);
    rc_step(c, m, 14);
    t0 = 0x00000007u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_C40A:
    /* 0000c40a   2  bcc 0000c416 */
    c->pc = RC_ADDR(0x0000c40au);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_C416;

L_C40C:
    /* 0000c40c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c40cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_C40E:
    /* 0000c40e   4  move.w (0000c3f6),D0 */
    c->pc = RC_ADDR(0x0000c40eu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x0000c3f6u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C412:
    /* 0000c412   4  jmp (0000c414) */
    c->pc = RC_ADDR(0x0000c412u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x0000c414u) + t4);
    c->pc = t3;
    return;

L_C416:
    /* 0000c416   4  move.w (dcc,A4),D0 */
    c->pc = RC_ADDR(0x0000c416u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C41A:
    /* 0000c41a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c41au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C41C:
    /* 0000c41c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c41cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_C41E:
    /* 0000c41e   4  lea (ffff98b0,A4),A0 */
    c->pc = RC_ADDR(0x0000c41eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6750u);

L_C422:
    /* 0000c422   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000c422u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_C426:
    /* 0000c426   4  beq 0000c4be */
    c->pc = RC_ADDR(0x0000c426u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_C4BE;

L_C42A:
    /* 0000c42a   4  move.w (dcc,A4),D0 */
    c->pc = RC_ADDR(0x0000c42au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C42E:
    /* 0000c42e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c42eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C430:
    /* 0000c430   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c430u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_C432:
    /* 0000c432   4  lea (ffff98b0,A4),A0 */
    c->pc = RC_ADDR(0x0000c432u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6750u);

L_C436:
    /* 0000c436   4  movea.l (fffffffc,A5),A1 */
    c->pc = RC_ADDR(0x0000c436u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[1] = t0;

L_C43A:
    /* 0000c43a   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000c43au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C43E:
    /* 0000c43e   4  cmp.w (2a,A1),D1 */
    c->pc = RC_ADDR(0x0000c43eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x2au));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_C442:
    /* 0000c442   2  bne 0000c4be */
    c->pc = RC_ADDR(0x0000c442u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_C4BE;

L_C444:
    /* 0000c444   4  move.w (dce,A4),D0 */
    c->pc = RC_ADDR(0x0000c444u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C448:
    /* 0000c448   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c448u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C44A:
    /* 0000c44a   2  bra 0000c4ac */
    c->pc = RC_ADDR(0x0000c44au);
    rc_step(c, m, 10);
    goto L_C4AC;

L_C44C:
    /* 0000c44c   4  move.w (dcc,A4),D0 */
    c->pc = RC_ADDR(0x0000c44cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C450:
    /* 0000c450   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c450u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C452:
    /* 0000c452   2  bra 0000c494 */
    c->pc = RC_ADDR(0x0000c452u);
    rc_step(c, m, 10);
    goto L_C494;

L_C454:
    /* 0000c454   6  cmpi.w #3,(dce,A4) */
    c->pc = RC_ADDR(0x0000c454u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdceu));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_C45A:
    /* 0000c45a   2  beq 0000c464 */
    c->pc = RC_ADDR(0x0000c45au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_C464;

L_C45C:
    /* 0000c45c   6  cmpi.w #1,(dce,A4) */
    c->pc = RC_ADDR(0x0000c45cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdceu));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_C462:
    /* 0000c462   2  bne 0000c46a */
    c->pc = RC_ADDR(0x0000c462u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_C46A;

L_C464:
    /* 0000c464   4  jsr (0000c7f0) */
    c->pc = RC_ADDR(0x0000c464u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c468u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c7f0u);
    return;

L_C468:
    /* 0000c468   2  bra 0000c49c */
    c->pc = RC_ADDR(0x0000c468u);
    rc_step(c, m, 10);
    goto L_C49C;

L_C46A:
    /* 0000c46a   4  jsr (0000c7a8) */
    c->pc = RC_ADDR(0x0000c46au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c46eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c7a8u);
    return;

L_C46E:
    /* 0000c46e   4  jsr (0000c550) */
    c->pc = RC_ADDR(0x0000c46eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c472u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c550u);
    return;

L_C472:
    /* 0000c472   4  addq.w #3,(dd8,A4) */
    c->pc = RC_ADDR(0x0000c472u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xdd8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000003u;
    rc_flags_add(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_C476:
    /* 0000c476   2  bra 0000c49c */
    c->pc = RC_ADDR(0x0000c476u);
    rc_step(c, m, 10);
    goto L_C49C;

L_C478:
    /* 0000c478   6  cmpi.w #2,(dce,A4) */
    c->pc = RC_ADDR(0x0000c478u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdceu));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_C47E:
    /* 0000c47e   2  bne 0000c486 */
    c->pc = RC_ADDR(0x0000c47eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_C486;

L_C480:
    /* 0000c480   4  jsr (0000c7f0) */
    c->pc = RC_ADDR(0x0000c480u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c484u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c7f0u);
    return;

L_C484:
    /* 0000c484   2  bra 0000c49c */
    c->pc = RC_ADDR(0x0000c484u);
    rc_step(c, m, 10);
    goto L_C49C;

L_C486:
    /* 0000c486   4  jsr (0000c760) */
    c->pc = RC_ADDR(0x0000c486u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c48au));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c760u);
    return;

L_C48A:
    /* 0000c48a   4  jsr (0000c550) */
    c->pc = RC_ADDR(0x0000c48au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c48eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c550u);
    return;

L_C48E:
    /* 0000c48e   4  addq.w #1,(dd8,A4) */
    c->pc = RC_ADDR(0x0000c48eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xdd8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_C492:
    /* 0000c492   2  bra 0000c49c */
    c->pc = RC_ADDR(0x0000c492u);
    rc_step(c, m, 10);
    goto L_C49C;

L_C494:
    /* 0000c494   2  subq.l #4,D0 */
    c->pc = RC_ADDR(0x0000c494u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000004u;
    rc_flags_sub(c, RC_L, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_C496:
    /* 0000c496   2  beq 0000c454 */
    c->pc = RC_ADDR(0x0000c496u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_C454; }

L_C498:
    /* 0000c498   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000c498u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_C49A:
    /* 0000c49a   2  beq 0000c478 */
    c->pc = RC_ADDR(0x0000c49au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_C478; }

L_C49C:
    /* 0000c49c   2  bra 0000c4be */
    c->pc = RC_ADDR(0x0000c49cu);
    rc_step(c, m, 10);
    goto L_C4BE;

L_C4AC:
    /* 0000c4ac   6  cmp.l #7,D0 */
    c->pc = RC_ADDR(0x0000c4acu);
    rc_step(c, m, 14);
    t0 = 0x00000007u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_C4B2:
    /* 0000c4b2   2  bcc 0000c4be */
    c->pc = RC_ADDR(0x0000c4b2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_C4BE;

L_C4B4:
    /* 0000c4b4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c4b4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_C4B6:
    /* 0000c4b6   4  move.w (0000c49e),D0 */
    c->pc = RC_ADDR(0x0000c4b6u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x0000c49eu) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C4BA:
    /* 0000c4ba   4  jmp (0000c4bc) */
    c->pc = RC_ADDR(0x0000c4bau);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x0000c4bcu) + t4);
    c->pc = t3;
    return;

L_C4BE:
    /* 0000c4be   2  unlk A5 */
    c->pc = RC_ADDR(0x0000c4beu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_C4C0:
    /* 0000c4c0   2  rts */
    c->pc = RC_ADDR(0x0000c4c0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
