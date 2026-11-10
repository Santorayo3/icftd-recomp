/* fn_0000c390 - 974 byte(s), 283 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000c390(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x0000c390u: goto L_C390;
    case 0x0000c394u: goto L_C394;
    case 0x0000c398u: goto L_C398;
    case 0x0000c39cu: goto L_C39C;
    case 0x0000c3a0u: goto L_C3A0;
    case 0x0000c3a4u: goto L_C3A4;
    case 0x0000c3a8u: goto L_C3A8;
    case 0x0000c3acu: goto L_C3AC;
    case 0x0000c3b0u: goto L_C3B0;
    case 0x0000c3b4u: goto L_C3B4;
    case 0x0000c3b8u: goto L_C3B8;
    case 0x0000c3bcu: goto L_C3BC;
    case 0x0000c3c0u: goto L_C3C0;
    case 0x0000c3c4u: goto L_C3C4;
    case 0x0000c3c8u: goto L_C3C8;
    case 0x0000c3ccu: goto L_C3CC;
    case 0x0000c3d0u: goto L_C3D0;
    case 0x0000c3d4u: goto L_C3D4;
    case 0x0000c3d8u: goto L_C3D8;
    case 0x0000c3dcu: goto L_C3DC;
    case 0x0000c3e0u: goto L_C3E0;
    case 0x0000c3e4u: goto L_C3E4;
    case 0x0000c3e8u: goto L_C3E8;
    case 0x0000c3ecu: goto L_C3EC;
    case 0x0000c3f0u: goto L_C3F0;
    case 0x0000c3f4u: goto L_C3F4;
    case 0x0000c3f8u: goto L_C3F8;
    case 0x0000c3fau: goto L_C3FA;
    case 0x0000c3feu: goto L_C3FE;
    case 0x0000c402u: goto L_C402;
    case 0x0000c404u: goto L_C404;
    case 0x0000c408u: goto L_C408;
    case 0x0000c40au: goto L_C40A;
    case 0x0000c40eu: goto L_C40E;
    case 0x0000c412u: goto L_C412;
    case 0x0000c414u: goto L_C414;
    case 0x0000c418u: goto L_C418;
    case 0x0000c41cu: goto L_C41C;
    case 0x0000c420u: goto L_C420;
    case 0x0000c424u: goto L_C424;
    case 0x0000c428u: goto L_C428;
    case 0x0000c42au: goto L_C42A;
    case 0x0000c42eu: goto L_C42E;
    case 0x0000c432u: goto L_C432;
    case 0x0000c436u: goto L_C436;
    case 0x0000c43au: goto L_C43A;
    case 0x0000c43cu: goto L_C43C;
    case 0x0000c440u: goto L_C440;
    case 0x0000c444u: goto L_C444;
    case 0x0000c446u: goto L_C446;
    case 0x0000c44au: goto L_C44A;
    case 0x0000c44cu: goto L_C44C;
    case 0x0000c44eu: goto L_C44E;
    case 0x0000c452u: goto L_C452;
    case 0x0000c458u: goto L_C458;
    case 0x0000c45cu: goto L_C45C;
    case 0x0000c460u: goto L_C460;
    case 0x0000c464u: goto L_C464;
    case 0x0000c466u: goto L_C466;
    case 0x0000c46cu: goto L_C46C;
    case 0x0000c46eu: goto L_C46E;
    case 0x0000c472u: goto L_C472;
    case 0x0000c476u: goto L_C476;
    case 0x0000c478u: goto L_C478;
    case 0x0000c47cu: goto L_C47C;
    case 0x0000c480u: goto L_C480;
    case 0x0000c484u: goto L_C484;
    case 0x0000c488u: goto L_C488;
    case 0x0000c48au: goto L_C48A;
    case 0x0000c490u: goto L_C490;
    case 0x0000c492u: goto L_C492;
    case 0x0000c496u: goto L_C496;
    case 0x0000c49au: goto L_C49A;
    case 0x0000c49cu: goto L_C49C;
    case 0x0000c4a0u: goto L_C4A0;
    case 0x0000c4a4u: goto L_C4A4;
    case 0x0000c4a8u: goto L_C4A8;
    case 0x0000c4aau: goto L_C4AA;
    case 0x0000c4aeu: goto L_C4AE;
    case 0x0000c4b2u: goto L_C4B2;
    case 0x0000c4b6u: goto L_C4B6;
    case 0x0000c4b8u: goto L_C4B8;
    case 0x0000c4beu: goto L_C4BE;
    case 0x0000c4c0u: goto L_C4C0;
    case 0x0000c4c4u: goto L_C4C4;
    case 0x0000c4c6u: goto L_C4C6;
    case 0x0000c4c8u: goto L_C4C8;
    case 0x0000c4ccu: goto L_C4CC;
    case 0x0000c4d0u: goto L_C4D0;
    case 0x0000c4d4u: goto L_C4D4;
    case 0x0000c4d6u: goto L_C4D6;
    case 0x0000c4dau: goto L_C4DA;
    case 0x0000c4dcu: goto L_C4DC;
    case 0x0000c4e0u: goto L_C4E0;
    case 0x0000c4e2u: goto L_C4E2;
    case 0x0000c4e6u: goto L_C4E6;
    case 0x0000c4e8u: goto L_C4E8;
    case 0x0000c4eau: goto L_C4EA;
    case 0x0000c4eeu: goto L_C4EE;
    case 0x0000c4f2u: goto L_C4F2;
    case 0x0000c4f6u: goto L_C4F6;
    case 0x0000c4f8u: goto L_C4F8;
    case 0x0000c4fcu: goto L_C4FC;
    case 0x0000c4feu: goto L_C4FE;
    case 0x0000c502u: goto L_C502;
    case 0x0000c504u: goto L_C504;
    case 0x0000c50au: goto L_C50A;
    case 0x0000c50eu: goto L_C50E;
    case 0x0000c512u: goto L_C512;
    case 0x0000c514u: goto L_C514;
    case 0x0000c516u: goto L_C516;
    case 0x0000c51au: goto L_C51A;
    case 0x0000c51eu: goto L_C51E;
    case 0x0000c522u: goto L_C522;
    case 0x0000c524u: goto L_C524;
    case 0x0000c528u: goto L_C528;
    case 0x0000c52au: goto L_C52A;
    case 0x0000c52eu: goto L_C52E;
    case 0x0000c530u: goto L_C530;
    case 0x0000c534u: goto L_C534;
    case 0x0000c536u: goto L_C536;
    case 0x0000c538u: goto L_C538;
    case 0x0000c53cu: goto L_C53C;
    case 0x0000c540u: goto L_C540;
    case 0x0000c544u: goto L_C544;
    case 0x0000c546u: goto L_C546;
    case 0x0000c54au: goto L_C54A;
    case 0x0000c54cu: goto L_C54C;
    case 0x0000c550u: goto L_C550;
    case 0x0000c552u: goto L_C552;
    case 0x0000c558u: goto L_C558;
    case 0x0000c55au: goto L_C55A;
    case 0x0000c560u: goto L_C560;
    case 0x0000c564u: goto L_C564;
    case 0x0000c568u: goto L_C568;
    case 0x0000c56cu: goto L_C56C;
    case 0x0000c56eu: goto L_C56E;
    case 0x0000c570u: goto L_C570;
    case 0x0000c574u: goto L_C574;
    case 0x0000c578u: goto L_C578;
    case 0x0000c57cu: goto L_C57C;
    case 0x0000c57eu: goto L_C57E;
    case 0x0000c582u: goto L_C582;
    case 0x0000c584u: goto L_C584;
    case 0x0000c588u: goto L_C588;
    case 0x0000c58au: goto L_C58A;
    case 0x0000c58eu: goto L_C58E;
    case 0x0000c590u: goto L_C590;
    case 0x0000c592u: goto L_C592;
    case 0x0000c596u: goto L_C596;
    case 0x0000c59au: goto L_C59A;
    case 0x0000c59eu: goto L_C59E;
    case 0x0000c5a2u: goto L_C5A2;
    case 0x0000c5a4u: goto L_C5A4;
    case 0x0000c5a6u: goto L_C5A6;
    case 0x0000c5aau: goto L_C5AA;
    case 0x0000c5acu: goto L_C5AC;
    case 0x0000c5b0u: goto L_C5B0;
    case 0x0000c5b2u: goto L_C5B2;
    case 0x0000c5b8u: goto L_C5B8;
    case 0x0000c5bau: goto L_C5BA;
    case 0x0000c5c0u: goto L_C5C0;
    case 0x0000c5c4u: goto L_C5C4;
    case 0x0000c5c8u: goto L_C5C8;
    case 0x0000c5cau: goto L_C5CA;
    case 0x0000c5d0u: goto L_C5D0;
    case 0x0000c5d4u: goto L_C5D4;
    case 0x0000c5d8u: goto L_C5D8;
    case 0x0000c5dau: goto L_C5DA;
    case 0x0000c5dcu: goto L_C5DC;
    case 0x0000c5deu: goto L_C5DE;
    case 0x0000c5e2u: goto L_C5E2;
    case 0x0000c5e8u: goto L_C5E8;
    case 0x0000c5eau: goto L_C5EA;
    case 0x0000c5ecu: goto L_C5EC;
    case 0x0000c5eeu: goto L_C5EE;
    case 0x0000c5f2u: goto L_C5F2;
    case 0x0000c5f8u: goto L_C5F8;
    case 0x0000c5fau: goto L_C5FA;
    case 0x0000c5fcu: goto L_C5FC;
    case 0x0000c5feu: goto L_C5FE;
    case 0x0000c602u: goto L_C602;
    case 0x0000c606u: goto L_C606;
    case 0x0000c60au: goto L_C60A;
    case 0x0000c60cu: goto L_C60C;
    case 0x0000c610u: goto L_C610;
    case 0x0000c612u: goto L_C612;
    case 0x0000c616u: goto L_C616;
    case 0x0000c618u: goto L_C618;
    case 0x0000c61au: goto L_C61A;
    case 0x0000c61cu: goto L_C61C;
    case 0x0000c620u: goto L_C620;
    case 0x0000c624u: goto L_C624;
    case 0x0000c628u: goto L_C628;
    case 0x0000c62au: goto L_C62A;
    case 0x0000c62eu: goto L_C62E;
    case 0x0000c630u: goto L_C630;
    case 0x0000c634u: goto L_C634;
    case 0x0000c636u: goto L_C636;
    case 0x0000c63au: goto L_C63A;
    case 0x0000c63eu: goto L_C63E;
    case 0x0000c640u: goto L_C640;
    case 0x0000c642u: goto L_C642;
    case 0x0000c648u: goto L_C648;
    case 0x0000c64au: goto L_C64A;
    case 0x0000c650u: goto L_C650;
    case 0x0000c652u: goto L_C652;
    case 0x0000c656u: goto L_C656;
    case 0x0000c65cu: goto L_C65C;
    case 0x0000c660u: goto L_C660;
    case 0x0000c664u: goto L_C664;
    case 0x0000c666u: goto L_C666;
    case 0x0000c668u: goto L_C668;
    case 0x0000c66cu: goto L_C66C;
    case 0x0000c670u: goto L_C670;
    case 0x0000c672u: goto L_C672;
    case 0x0000c676u: goto L_C676;
    case 0x0000c678u: goto L_C678;
    case 0x0000c67cu: goto L_C67C;
    case 0x0000c67eu: goto L_C67E;
    case 0x0000c684u: goto L_C684;
    case 0x0000c686u: goto L_C686;
    case 0x0000c68cu: goto L_C68C;
    case 0x0000c68eu: goto L_C68E;
    case 0x0000c692u: goto L_C692;
    case 0x0000c694u: goto L_C694;
    case 0x0000c698u: goto L_C698;
    case 0x0000c69au: goto L_C69A;
    case 0x0000c69eu: goto L_C69E;
    case 0x0000c6a2u: goto L_C6A2;
    case 0x0000c6a4u: goto L_C6A4;
    case 0x0000c6a8u: goto L_C6A8;
    case 0x0000c6acu: goto L_C6AC;
    case 0x0000c6aeu: goto L_C6AE;
    case 0x0000c6b4u: goto L_C6B4;
    case 0x0000c6b6u: goto L_C6B6;
    case 0x0000c6bau: goto L_C6BA;
    case 0x0000c6bcu: goto L_C6BC;
    case 0x0000c6c0u: goto L_C6C0;
    case 0x0000c6c2u: goto L_C6C2;
    case 0x0000c6c4u: goto L_C6C4;
    case 0x0000c6c8u: goto L_C6C8;
    case 0x0000c6cau: goto L_C6CA;
    case 0x0000c6ccu: goto L_C6CC;
    case 0x0000c6ceu: goto L_C6CE;
    case 0x0000c6d0u: goto L_C6D0;
    case 0x0000c6d4u: goto L_C6D4;
    case 0x0000c6d8u: goto L_C6D8;
    case 0x0000c6dcu: goto L_C6DC;
    case 0x0000c6e0u: goto L_C6E0;
    case 0x0000c6e4u: goto L_C6E4;
    case 0x0000c6e6u: goto L_C6E6;
    case 0x0000c6eau: goto L_C6EA;
    case 0x0000c6eeu: goto L_C6EE;
    case 0x0000c6f0u: goto L_C6F0;
    case 0x0000c6f4u: goto L_C6F4;
    case 0x0000c6f8u: goto L_C6F8;
    case 0x0000c6fau: goto L_C6FA;
    case 0x0000c6feu: goto L_C6FE;
    case 0x0000c702u: goto L_C702;
    case 0x0000c704u: goto L_C704;
    case 0x0000c708u: goto L_C708;
    case 0x0000c70cu: goto L_C70C;
    case 0x0000c70eu: goto L_C70E;
    case 0x0000c712u: goto L_C712;
    case 0x0000c716u: goto L_C716;
    case 0x0000c718u: goto L_C718;
    case 0x0000c71eu: goto L_C71E;
    case 0x0000c720u: goto L_C720;
    case 0x0000c726u: goto L_C726;
    case 0x0000c72au: goto L_C72A;
    case 0x0000c72cu: goto L_C72C;
    case 0x0000c732u: goto L_C732;
    case 0x0000c736u: goto L_C736;
    case 0x0000c738u: goto L_C738;
    case 0x0000c73eu: goto L_C73E;
    case 0x0000c742u: goto L_C742;
    case 0x0000c744u: goto L_C744;
    case 0x0000c74au: goto L_C74A;
    case 0x0000c750u: goto L_C750;
    case 0x0000c756u: goto L_C756;
    case 0x0000c75au: goto L_C75A;
    case 0x0000c75cu: goto L_C75C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_C390:
    /* 0000c390   4  link.w A5,#fffffff8 */
    c->pc = 0x0000c390u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_C394:
    /* 0000c394   4  movem.l { A1 A2 A3 },-(SP) */
    c->pc = 0x0000c394u;
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_C398:
    /* 0000c398   4  tst.w (478,A4) */
    c->pc = 0x0000c398u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x478u));
    rc_set_nzvc(c, t0, RC_W);

L_C39C:
    /* 0000c39c   4  bne 0000c436 */
    c->pc = 0x0000c39cu;
    if (rc_cond(c, 6)) goto L_C436;

L_C3A0:
    /* 0000c3a0   4  move.w (ffffb02a,A4),D0 */
    c->pc = 0x0000c3a0u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C3A4:
    /* 0000c3a4   4  muls.w (47e,A4),D0 */
    c->pc = 0x0000c3a4u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x47eu));
    rc_muls(c, 0, t0);

L_C3A8:
    /* 0000c3a8   4  move.w D0,(fffffffe,A5) */
    c->pc = 0x0000c3a8u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C3AC:
    /* 0000c3ac   4  move.w (ffffb02c,A4),D0 */
    c->pc = 0x0000c3acu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C3B0:
    /* 0000c3b0   4  muls.w (480,A4),D0 */
    c->pc = 0x0000c3b0u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x480u));
    rc_muls(c, 0, t0);

L_C3B4:
    /* 0000c3b4   4  move.w D0,(fffffffc,A5) */
    c->pc = 0x0000c3b4u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C3B8:
    /* 0000c3b8   4  move.w (47a,A4),D0 */
    c->pc = 0x0000c3b8u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C3BC:
    /* 0000c3bc   4  add.w (fffffffe,A5),D0 */
    c->pc = 0x0000c3bcu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_C3C0:
    /* 0000c3c0   4  move.w D0,(fffffffa,A5) */
    c->pc = 0x0000c3c0u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C3C4:
    /* 0000c3c4   4  move.w (47c,A4),D0 */
    c->pc = 0x0000c3c4u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C3C8:
    /* 0000c3c8   4  add.w (fffffffc,A5),D0 */
    c->pc = 0x0000c3c8u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_C3CC:
    /* 0000c3cc   4  move.w D0,(fffffff8,A5) */
    c->pc = 0x0000c3ccu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C3D0:
    /* 0000c3d0   4  clr.w (70c,A4) */
    c->pc = 0x0000c3d0u;
    rc_wr16(c, m, (c->a[4] + 0x70cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C3D4:
    /* 0000c3d4   4  clr.w (70e,A4) */
    c->pc = 0x0000c3d4u;
    rc_wr16(c, m, (c->a[4] + 0x70eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C3D8:
    /* 0000c3d8   4  move.w (70c,A4),D0 */
    c->pc = 0x0000c3d8u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x70cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C3DC:
    /* 0000c3dc   4  muls.w (47e,A4),D0 */
    c->pc = 0x0000c3dcu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x47eu));
    rc_muls(c, 0, t0);

L_C3E0:
    /* 0000c3e0   4  add.w D0,(fffffffe,A5) */
    c->pc = 0x0000c3e0u;
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_C3E4:
    /* 0000c3e4   4  move.w (70e,A4),D0 */
    c->pc = 0x0000c3e4u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x70eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C3E8:
    /* 0000c3e8   4  muls.w (480,A4),D0 */
    c->pc = 0x0000c3e8u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x480u));
    rc_muls(c, 0, t0);

L_C3EC:
    /* 0000c3ec   4  add.w D0,(fffffffc,A5) */
    c->pc = 0x0000c3ecu;
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_C3F0:
    /* 0000c3f0   4  move.w (47c,A4),D0 */
    c->pc = 0x0000c3f0u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C3F4:
    /* 0000c3f4   4  add.w (fffffffc,A5),D0 */
    c->pc = 0x0000c3f4u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_C3F8:
    /* 0000c3f8   2  move.w D0,-(A7) */
    c->pc = 0x0000c3f8u;
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C3FA:
    /* 0000c3fa   4  move.w (47a,A4),D0 */
    c->pc = 0x0000c3fau;
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C3FE:
    /* 0000c3fe   4  add.w (fffffffe,A5),D0 */
    c->pc = 0x0000c3feu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_C402:
    /* 0000c402   2  move.w D0,-(A7) */
    c->pc = 0x0000c402u;
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C404:
    /* 0000c404   4  jsr (0000dbc6) */
    c->pc = 0x0000c404u;
    rc_push32(c, m, 0x0000c408u);
    rc_depth++;
    c->pc = 0x0000dbc6u;
    return;

L_C408:
    /* 0000c408   2  addq.w #4,A7 */
    c->pc = 0x0000c408u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_C40A:
    /* 0000c40a   4  move.w (fffffffe,A5),-(A7) */
    c->pc = 0x0000c40au;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C40E:
    /* 0000c40e   4  jsr (ffff81ac,A4) */
    c->pc = 0x0000c40eu;
    /* vector 71 */
    rc_push32(c, m, 0x0000c412u);
    rc_depth++;
    c->pc = 0x0001a47cu;
    return;

L_C412:
    /* 0000c412   2  addq.w #2,A7 */
    c->pc = 0x0000c412u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_C414:
    /* 0000c414   4  muls.w (70c,A4),D0 */
    c->pc = 0x0000c414u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x70cu));
    rc_muls(c, 0, t0);

L_C418:
    /* 0000c418   4  add.w (fffffffe,A5),D0 */
    c->pc = 0x0000c418u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_C41C:
    /* 0000c41c   4  add.w D0,(47a,A4) */
    c->pc = 0x0000c41cu;
    t3 = (c->a[4] + 0x47au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_C420:
    /* 0000c420   4  move.w (fffffffc,A5),-(A7) */
    c->pc = 0x0000c420u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C424:
    /* 0000c424   4  jsr (ffff81ac,A4) */
    c->pc = 0x0000c424u;
    /* vector 71 */
    rc_push32(c, m, 0x0000c428u);
    rc_depth++;
    c->pc = 0x0001a47cu;
    return;

L_C428:
    /* 0000c428   2  addq.w #2,A7 */
    c->pc = 0x0000c428u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_C42A:
    /* 0000c42a   4  muls.w (70e,A4),D0 */
    c->pc = 0x0000c42au;
    t0 = rc_rd16(c, m, (c->a[4] + 0x70eu));
    rc_muls(c, 0, t0);

L_C42E:
    /* 0000c42e   4  add.w (fffffffc,A5),D0 */
    c->pc = 0x0000c42eu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_C432:
    /* 0000c432   4  add.w D0,(47c,A4) */
    c->pc = 0x0000c432u;
    t3 = (c->a[4] + 0x47cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_C436:
    /* 0000c436   4  move.w (478,A4),D0 */
    c->pc = 0x0000c436u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x478u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C43A:
    /* 0000c43a   2  ext.l D0 */
    c->pc = 0x0000c43au;
    rc_ext_l(c, 0);

L_C43C:
    /* 0000c43c   4  bra 0000c6c2 */
    c->pc = 0x0000c43cu;
    goto L_C6C2;

L_C440:
    /* 0000c440   4  tst.w (ffffb030,A4) */
    c->pc = 0x0000c440u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd0u));
    rc_set_nzvc(c, t0, RC_W);

L_C444:
    /* 0000c444   2  beq 0000c478 */
    c->pc = 0x0000c444u;
    if (rc_cond(c, 7)) goto L_C478;

L_C446:
    /* 0000c446   4  move.w (ffffb030,A4),D0 */
    c->pc = 0x0000c446u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C44A:
    /* 0000c44a   2  ext.l D0 */
    c->pc = 0x0000c44au;
    rc_ext_l(c, 0);

L_C44C:
    /* 0000c44c   2  asl.l #1,D0 */
    c->pc = 0x0000c44cu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C44E:
    /* 0000c44e   4  lea (ffff99dc,A4),A0 */
    c->pc = 0x0000c44eu;
    c->a[0] = (c->a[4] - 0x6624u);

L_C452:
    /* 0000c452   6  move.w (0,A0,D0.w),(488,A4) */
    c->pc = 0x0000c452u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x488u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C458:
    /* 0000c458   4  move.w (484,A4),D0 */
    c->pc = 0x0000c458u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x484u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C45C:
    /* 0000c45c   4  add.w D0,(482,A4) */
    c->pc = 0x0000c45cu;
    t3 = (c->a[4] + 0x482u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_C460:
    /* 0000c460   4  tst.w (482,A4) */
    c->pc = 0x0000c460u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x482u));
    rc_set_nzvc(c, t0, RC_W);

L_C464:
    /* 0000c464   2  beq 0000c46e */
    c->pc = 0x0000c464u;
    if (rc_cond(c, 7)) goto L_C46E;

L_C466:
    /* 0000c466   6  cmpi.w #3,(482,A4) */
    c->pc = 0x0000c466u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x482u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_C46C:
    /* 0000c46c   2  bne 0000c472 */
    c->pc = 0x0000c46cu;
    if (rc_cond(c, 6)) goto L_C472;

L_C46E:
    /* 0000c46e   4  neg.w (484,A4) */
    c->pc = 0x0000c46eu;
    t3 = (c->a[4] + 0x484u);
    t1 = rc_rd16(c, m, t3);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_wr16(c, m, t3, t2);

L_C472:
    /* 0000c472   4  clr.w (50a,A4) */
    c->pc = 0x0000c472u;
    rc_wr16(c, m, (c->a[4] + 0x50au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C476:
    /* 0000c476   2  bra 0000c484 */
    c->pc = 0x0000c476u;
    goto L_C484;

L_C478:
    /* 0000c478   4  move.w (486,A4),D0 */
    c->pc = 0x0000c478u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x486u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C47C:
    /* 0000c47c   4  and.w #e,D0 */
    c->pc = 0x0000c47cu;
    t0 = 0x0000000eu;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_C480:
    /* 0000c480   4  move.w D0,(488,A4) */
    c->pc = 0x0000c480u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x488u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C484:
    /* 0000c484   4  tst.w (4e6,A4) */
    c->pc = 0x0000c484u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x4e6u));
    rc_set_nzvc(c, t0, RC_W);

L_C488:
    /* 0000c488   2  bne 0000c492 */
    c->pc = 0x0000c488u;
    if (rc_cond(c, 6)) goto L_C492;

L_C48A:
    /* 0000c48a   6  move.w (488,A4),(486,A4) */
    c->pc = 0x0000c48au;
    t0 = rc_rd16(c, m, (c->a[4] + 0x488u));
    rc_wr16(c, m, (c->a[4] + 0x486u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C490:
    /* 0000c490   2  bra 0000c4b2 */
    c->pc = 0x0000c490u;
    goto L_C4B2;

L_C492:
    /* 0000c492   4  move.w (486,A4),D0 */
    c->pc = 0x0000c492u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x486u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C496:
    /* 0000c496   4  cmp.w (488,A4),D0 */
    c->pc = 0x0000c496u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x488u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_C49A:
    /* 0000c49a   2  beq 0000c4b2 */
    c->pc = 0x0000c49au;
    if (rc_cond(c, 7)) goto L_C4B2;

L_C49C:
    /* 0000c49c   4  move.w (488,A4),-(A7) */
    c->pc = 0x0000c49cu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x488u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C4A0:
    /* 0000c4a0   4  move.w (486,A4),-(A7) */
    c->pc = 0x0000c4a0u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x486u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C4A4:
    /* 0000c4a4   4  jsr (0000d51e) */
    c->pc = 0x0000c4a4u;
    rc_push32(c, m, 0x0000c4a8u);
    rc_depth++;
    c->pc = 0x0000d51eu;
    return;

L_C4A8:
    /* 0000c4a8   2  addq.w #4,A7 */
    c->pc = 0x0000c4a8u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_C4AA:
    /* 0000c4aa   4  move.w D0,(486,A4) */
    c->pc = 0x0000c4aau;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x486u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C4AE:
    /* 0000c4ae   4  clr.w (50a,A4) */
    c->pc = 0x0000c4aeu;
    rc_wr16(c, m, (c->a[4] + 0x50au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C4B2:
    /* 0000c4b2   4  tst.w (716,A4) */
    c->pc = 0x0000c4b2u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x716u));
    rc_set_nzvc(c, t0, RC_W);

L_C4B6:
    /* 0000c4b6   2  bne 0000c50e */
    c->pc = 0x0000c4b6u;
    if (rc_cond(c, 6)) goto L_C50E;

L_C4B8:
    /* 0000c4b8   6  cmpi.w #2,(712,A4) */
    c->pc = 0x0000c4b8u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x712u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_C4BE:
    /* 0000c4be   2  bne 0000c50e */
    c->pc = 0x0000c4beu;
    if (rc_cond(c, 6)) goto L_C50E;

L_C4C0:
    /* 0000c4c0   4  move.w (710,A4),D0 */
    c->pc = 0x0000c4c0u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x710u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C4C4:
    /* 0000c4c4   2  ext.l D0 */
    c->pc = 0x0000c4c4u;
    rc_ext_l(c, 0);

L_C4C6:
    /* 0000c4c6   2  asl.l #1,D0 */
    c->pc = 0x0000c4c6u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C4C8:
    /* 0000c4c8   4  lea (ffff9710,A4),A0 */
    c->pc = 0x0000c4c8u;
    c->a[0] = (c->a[4] - 0x68f0u);

L_C4CC:
    /* 0000c4cc   4  move.w (47a,A4),D1 */
    c->pc = 0x0000c4ccu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C4D0:
    /* 0000c4d0   4  sub.w (0,A0,D0.w),D1 */
    c->pc = 0x0000c4d0u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_C4D4:
    /* 0000c4d4   2  move.w D1,-(A7) */
    c->pc = 0x0000c4d4u;
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C4D6:
    /* 0000c4d6   4  jsr (ffff81ac,A4) */
    c->pc = 0x0000c4d6u;
    /* vector 71 */
    rc_push32(c, m, 0x0000c4dau);
    rc_depth++;
    c->pc = 0x0001a47cu;
    return;

L_C4DA:
    /* 0000c4da   2  addq.w #2,A7 */
    c->pc = 0x0000c4dau;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_C4DC:
    /* 0000c4dc   4  cmp.w #40,D0 */
    c->pc = 0x0000c4dcu;
    t0 = 0x00000040u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_C4E0:
    /* 0000c4e0   2  bgt 0000c50e */
    c->pc = 0x0000c4e0u;
    if (rc_cond(c, 14)) goto L_C50E;

L_C4E2:
    /* 0000c4e2   4  move.w (710,A4),D0 */
    c->pc = 0x0000c4e2u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x710u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C4E6:
    /* 0000c4e6   2  ext.l D0 */
    c->pc = 0x0000c4e6u;
    rc_ext_l(c, 0);

L_C4E8:
    /* 0000c4e8   2  asl.l #1,D0 */
    c->pc = 0x0000c4e8u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C4EA:
    /* 0000c4ea   4  lea (ffff971c,A4),A0 */
    c->pc = 0x0000c4eau;
    c->a[0] = (c->a[4] - 0x68e4u);

L_C4EE:
    /* 0000c4ee   4  move.w (47c,A4),D1 */
    c->pc = 0x0000c4eeu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C4F2:
    /* 0000c4f2   4  sub.w (0,A0,D0.w),D1 */
    c->pc = 0x0000c4f2u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_C4F6:
    /* 0000c4f6   2  move.w D1,-(A7) */
    c->pc = 0x0000c4f6u;
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C4F8:
    /* 0000c4f8   4  jsr (ffff81ac,A4) */
    c->pc = 0x0000c4f8u;
    /* vector 71 */
    rc_push32(c, m, 0x0000c4fcu);
    rc_depth++;
    c->pc = 0x0001a47cu;
    return;

L_C4FC:
    /* 0000c4fc   2  addq.w #2,A7 */
    c->pc = 0x0000c4fcu;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_C4FE:
    /* 0000c4fe   4  cmp.w #40,D0 */
    c->pc = 0x0000c4feu;
    t0 = 0x00000040u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_C502:
    /* 0000c502   2  bgt 0000c50e */
    c->pc = 0x0000c502u;
    if (rc_cond(c, 14)) goto L_C50E;

L_C504:
    /* 0000c504   6  move.w #1,(716,A4) */
    c->pc = 0x0000c504u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x716u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C50A:
    /* 0000c50a   4  jsr (ffff8110,A4) */
    c->pc = 0x0000c50au;
    /* vector 45 */
    rc_push32(c, m, 0x0000c50eu);
    rc_depth++;
    c->pc = 0x0000ec8au;
    return;

L_C50E:
    /* 0000c50e   4  move.w (710,A4),D0 */
    c->pc = 0x0000c50eu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x710u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C512:
    /* 0000c512   2  ext.l D0 */
    c->pc = 0x0000c512u;
    rc_ext_l(c, 0);

L_C514:
    /* 0000c514   2  asl.l #1,D0 */
    c->pc = 0x0000c514u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C516:
    /* 0000c516   4  lea (ffff9710,A4),A0 */
    c->pc = 0x0000c516u;
    c->a[0] = (c->a[4] - 0x68f0u);

L_C51A:
    /* 0000c51a   4  move.w (47a,A4),D1 */
    c->pc = 0x0000c51au;
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C51E:
    /* 0000c51e   4  sub.w (0,A0,D0.w),D1 */
    c->pc = 0x0000c51eu;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_C522:
    /* 0000c522   2  move.w D1,-(A7) */
    c->pc = 0x0000c522u;
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C524:
    /* 0000c524   4  jsr (ffff81ac,A4) */
    c->pc = 0x0000c524u;
    /* vector 71 */
    rc_push32(c, m, 0x0000c528u);
    rc_depth++;
    c->pc = 0x0001a47cu;
    return;

L_C528:
    /* 0000c528   2  addq.w #2,A7 */
    c->pc = 0x0000c528u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_C52A:
    /* 0000c52a   4  cmp.w #8,D0 */
    c->pc = 0x0000c52au;
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_C52E:
    /* 0000c52e   2  bgt 0000c568 */
    c->pc = 0x0000c52eu;
    if (rc_cond(c, 14)) goto L_C568;

L_C530:
    /* 0000c530   4  move.w (710,A4),D0 */
    c->pc = 0x0000c530u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x710u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C534:
    /* 0000c534   2  ext.l D0 */
    c->pc = 0x0000c534u;
    rc_ext_l(c, 0);

L_C536:
    /* 0000c536   2  asl.l #1,D0 */
    c->pc = 0x0000c536u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C538:
    /* 0000c538   4  lea (ffff971c,A4),A0 */
    c->pc = 0x0000c538u;
    c->a[0] = (c->a[4] - 0x68e4u);

L_C53C:
    /* 0000c53c   4  move.w (47c,A4),D1 */
    c->pc = 0x0000c53cu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C540:
    /* 0000c540   4  sub.w (0,A0,D0.w),D1 */
    c->pc = 0x0000c540u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_C544:
    /* 0000c544   2  move.w D1,-(A7) */
    c->pc = 0x0000c544u;
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C546:
    /* 0000c546   4  jsr (ffff81ac,A4) */
    c->pc = 0x0000c546u;
    /* vector 71 */
    rc_push32(c, m, 0x0000c54au);
    rc_depth++;
    c->pc = 0x0001a47cu;
    return;

L_C54A:
    /* 0000c54a   2  addq.w #2,A7 */
    c->pc = 0x0000c54au;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_C54C:
    /* 0000c54c   4  cmp.w #8,D0 */
    c->pc = 0x0000c54cu;
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_C550:
    /* 0000c550   2  bgt 0000c568 */
    c->pc = 0x0000c550u;
    if (rc_cond(c, 14)) goto L_C568;

L_C552:
    /* 0000c552   6  cmpi.w #2,(712,A4) */
    c->pc = 0x0000c552u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x712u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_C558:
    /* 0000c558   2  bge 0000c568 */
    c->pc = 0x0000c558u;
    if (rc_cond(c, 12)) goto L_C568;

L_C55A:
    /* 0000c55a   6  move.w #1,(478,A4) */
    c->pc = 0x0000c55au;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x478u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C560:
    /* 0000c560   4  clr.w (482,A4) */
    c->pc = 0x0000c560u;
    rc_wr16(c, m, (c->a[4] + 0x482u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C564:
    /* 0000c564   4  bra 0000c6d0 */
    c->pc = 0x0000c564u;
    goto L_C6D0;

L_C568:
    /* 0000c568   4  move.w (710,A4),D0 */
    c->pc = 0x0000c568u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x710u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C56C:
    /* 0000c56c   2  ext.l D0 */
    c->pc = 0x0000c56cu;
    rc_ext_l(c, 0);

L_C56E:
    /* 0000c56e   2  asl.l #1,D0 */
    c->pc = 0x0000c56eu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C570:
    /* 0000c570   4  lea (ffff96f8,A4),A0 */
    c->pc = 0x0000c570u;
    c->a[0] = (c->a[4] - 0x6908u);

L_C574:
    /* 0000c574   4  move.w (47a,A4),D1 */
    c->pc = 0x0000c574u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C578:
    /* 0000c578   4  sub.w (0,A0,D0.w),D1 */
    c->pc = 0x0000c578u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_C57C:
    /* 0000c57c   2  move.w D1,-(A7) */
    c->pc = 0x0000c57cu;
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C57E:
    /* 0000c57e   4  jsr (ffff81ac,A4) */
    c->pc = 0x0000c57eu;
    /* vector 71 */
    rc_push32(c, m, 0x0000c582u);
    rc_depth++;
    c->pc = 0x0001a47cu;
    return;

L_C582:
    /* 0000c582   2  addq.w #2,A7 */
    c->pc = 0x0000c582u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_C584:
    /* 0000c584   4  cmp.w #4,D0 */
    c->pc = 0x0000c584u;
    t0 = 0x00000004u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_C588:
    /* 0000c588   2  bgt 0000c5d8 */
    c->pc = 0x0000c588u;
    if (rc_cond(c, 14)) goto L_C5D8;

L_C58A:
    /* 0000c58a   4  move.w (710,A4),D0 */
    c->pc = 0x0000c58au;
    t0 = rc_rd16(c, m, (c->a[4] + 0x710u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C58E:
    /* 0000c58e   2  ext.l D0 */
    c->pc = 0x0000c58eu;
    rc_ext_l(c, 0);

L_C590:
    /* 0000c590   2  asl.l #1,D0 */
    c->pc = 0x0000c590u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C592:
    /* 0000c592   4  lea (ffff9704,A4),A0 */
    c->pc = 0x0000c592u;
    c->a[0] = (c->a[4] - 0x68fcu);

L_C596:
    /* 0000c596   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x0000c596u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C59A:
    /* 0000c59a   4  add.w #a,D1 */
    c->pc = 0x0000c59au;
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_C59E:
    /* 0000c59e   4  move.w (47c,A4),D0 */
    c->pc = 0x0000c59eu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C5A2:
    /* 0000c5a2   2  sub.w D1,D0 */
    c->pc = 0x0000c5a2u;
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_C5A4:
    /* 0000c5a4   2  move.w D0,-(A7) */
    c->pc = 0x0000c5a4u;
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C5A6:
    /* 0000c5a6   4  jsr (ffff81ac,A4) */
    c->pc = 0x0000c5a6u;
    /* vector 71 */
    rc_push32(c, m, 0x0000c5aau);
    rc_depth++;
    c->pc = 0x0001a47cu;
    return;

L_C5AA:
    /* 0000c5aa   2  addq.w #2,A7 */
    c->pc = 0x0000c5aau;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_C5AC:
    /* 0000c5ac   4  cmp.w #4,D0 */
    c->pc = 0x0000c5acu;
    t0 = 0x00000004u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_C5B0:
    /* 0000c5b0   2  bgt 0000c5d8 */
    c->pc = 0x0000c5b0u;
    if (rc_cond(c, 14)) goto L_C5D8;

L_C5B2:
    /* 0000c5b2   6  cmpi.w #2,(712,A4) */
    c->pc = 0x0000c5b2u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x712u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_C5B8:
    /* 0000c5b8   2  blt 0000c5d8 */
    c->pc = 0x0000c5b8u;
    if (rc_cond(c, 13)) goto L_C5D8;

L_C5BA:
    /* 0000c5ba   6  move.w #2,(478,A4) */
    c->pc = 0x0000c5bau;
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x478u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C5C0:
    /* 0000c5c0   4  clr.w (482,A4) */
    c->pc = 0x0000c5c0u;
    rc_wr16(c, m, (c->a[4] + 0x482u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C5C4:
    /* 0000c5c4   4  tst.w (716,A4) */
    c->pc = 0x0000c5c4u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x716u));
    rc_set_nzvc(c, t0, RC_W);

L_C5C8:
    /* 0000c5c8   2  beq 0000c5d8 */
    c->pc = 0x0000c5c8u;
    if (rc_cond(c, 7)) goto L_C5D8;

L_C5CA:
    /* 0000c5ca   6  move.w #1,(fffffec8,A4) */
    c->pc = 0x0000c5cau;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x138u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C5D0:
    /* 0000c5d0   4  addq.w #1,(71a,A4) */
    c->pc = 0x0000c5d0u;
    t3 = (c->a[4] + 0x71au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_C5D4:
    /* 0000c5d4   4  bra 0000c6d0 */
    c->pc = 0x0000c5d4u;
    goto L_C6D0;

L_C5D8:
    /* 0000c5d8   2  moveq #0,D4 */
    c->pc = 0x0000c5d8u;
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_C5DA:
    /* 0000c5da   2  move.l D4,D0 */
    c->pc = 0x0000c5dau;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C5DC:
    /* 0000c5dc   2  asl.l #1,D0 */
    c->pc = 0x0000c5dcu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C5DE:
    /* 0000c5de   4  lea (256,A4),A0 */
    c->pc = 0x0000c5deu;
    c->a[0] = (c->a[4] + 0x256u);

L_C5E2:
    /* 0000c5e2   6  cmpi.w #2,(0,A0,D0.w) */
    c->pc = 0x0000c5e2u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_C5E8:
    /* 0000c5e8   2  blt 0000c640 */
    c->pc = 0x0000c5e8u;
    if (rc_cond(c, 13)) goto L_C640;

L_C5EA:
    /* 0000c5ea   2  move.l D4,D0 */
    c->pc = 0x0000c5eau;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C5EC:
    /* 0000c5ec   2  asl.l #1,D0 */
    c->pc = 0x0000c5ecu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C5EE:
    /* 0000c5ee   4  lea (256,A4),A0 */
    c->pc = 0x0000c5eeu;
    c->a[0] = (c->a[4] + 0x256u);

L_C5F2:
    /* 0000c5f2   6  cmpi.w #7,(0,A0,D0.w) */
    c->pc = 0x0000c5f2u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_C5F8:
    /* 0000c5f8   2  bge 0000c640 */
    c->pc = 0x0000c5f8u;
    if (rc_cond(c, 12)) goto L_C640;

L_C5FA:
    /* 0000c5fa   2  move.l D4,D0 */
    c->pc = 0x0000c5fau;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C5FC:
    /* 0000c5fc   2  asl.l #1,D0 */
    c->pc = 0x0000c5fcu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C5FE:
    /* 0000c5fe   4  lea (c4,A4),A0 */
    c->pc = 0x0000c5feu;
    c->a[0] = (c->a[4] + 0xc4u);

L_C602:
    /* 0000c602   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x0000c602u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C606:
    /* 0000c606   4  sub.w (47a,A4),D1 */
    c->pc = 0x0000c606u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_C60A:
    /* 0000c60a   2  move.w D1,-(A7) */
    c->pc = 0x0000c60au;
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C60C:
    /* 0000c60c   4  jsr (ffff81ac,A4) */
    c->pc = 0x0000c60cu;
    /* vector 71 */
    rc_push32(c, m, 0x0000c610u);
    rc_depth++;
    c->pc = 0x0001a47cu;
    return;

L_C610:
    /* 0000c610   2  addq.w #2,A7 */
    c->pc = 0x0000c610u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_C612:
    /* 0000c612   4  cmp.w #8,D0 */
    c->pc = 0x0000c612u;
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_C616:
    /* 0000c616   2  bgt 0000c640 */
    c->pc = 0x0000c616u;
    if (rc_cond(c, 14)) goto L_C640;

L_C618:
    /* 0000c618   2  move.l D4,D0 */
    c->pc = 0x0000c618u;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C61A:
    /* 0000c61a   2  asl.l #1,D0 */
    c->pc = 0x0000c61au;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C61C:
    /* 0000c61c   4  lea (d4,A4),A0 */
    c->pc = 0x0000c61cu;
    c->a[0] = (c->a[4] + 0xd4u);

L_C620:
    /* 0000c620   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x0000c620u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C624:
    /* 0000c624   4  sub.w (47c,A4),D1 */
    c->pc = 0x0000c624u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_C628:
    /* 0000c628   2  move.w D1,-(A7) */
    c->pc = 0x0000c628u;
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C62A:
    /* 0000c62a   4  jsr (ffff81ac,A4) */
    c->pc = 0x0000c62au;
    /* vector 71 */
    rc_push32(c, m, 0x0000c62eu);
    rc_depth++;
    c->pc = 0x0001a47cu;
    return;

L_C62E:
    /* 0000c62e   2  addq.w #2,A7 */
    c->pc = 0x0000c62eu;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_C630:
    /* 0000c630   4  cmp.w #8,D0 */
    c->pc = 0x0000c630u;
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_C634:
    /* 0000c634   2  bgt 0000c640 */
    c->pc = 0x0000c634u;
    if (rc_cond(c, 14)) goto L_C640;

L_C636:
    /* 0000c636   4  clr.w (fffffec8,A4) */
    c->pc = 0x0000c636u;
    rc_wr16(c, m, (c->a[4] - 0x138u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C63A:
    /* 0000c63a   4  addq.w #1,(71a,A4) */
    c->pc = 0x0000c63au;
    t3 = (c->a[4] + 0x71au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_C63E:
    /* 0000c63e   2  bra 0000c64a */
    c->pc = 0x0000c63eu;
    goto L_C64A;

L_C640:
    /* 0000c640   2  addq.l #1,D4 */
    c->pc = 0x0000c640u;
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_C642:
    /* 0000c642   6  cmp.l #8,D4 */
    c->pc = 0x0000c642u;
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_C648:
    /* 0000c648   2  blt 0000c5da */
    c->pc = 0x0000c648u;
    if (rc_cond(c, 13)) { rc_tick(); goto L_C5DA; }

L_C64A:
    /* 0000c64a   6  cmpi.w #4,(48e,A4) */
    c->pc = 0x0000c64au;
    t0 = rc_rd16(c, m, (c->a[4] + 0x48eu));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_C650:
    /* 0000c650   2  ble 0000c660 */
    c->pc = 0x0000c650u;
    if (rc_cond(c, 15)) goto L_C660;

L_C652:
    /* 0000c652   4  clr.w (fffffec8,A4) */
    c->pc = 0x0000c652u;
    rc_wr16(c, m, (c->a[4] - 0x138u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C656:
    /* 0000c656   6  move.w #1,(71e,A4) */
    c->pc = 0x0000c656u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x71eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C65C:
    /* 0000c65c   4  addq.w #1,(71a,A4) */
    c->pc = 0x0000c65cu;
    t3 = (c->a[4] + 0x71au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_C660:
    /* 0000c660   4  move.w (486,A4),D0 */
    c->pc = 0x0000c660u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x486u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C664:
    /* 0000c664   2  ext.l D0 */
    c->pc = 0x0000c664u;
    rc_ext_l(c, 0);

L_C666:
    /* 0000c666   2  asl.l #2,D0 */
    c->pc = 0x0000c666u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_C668:
    /* 0000c668   4  lea (ffff99f2,A4),A0 */
    c->pc = 0x0000c668u;
    c->a[0] = (c->a[4] - 0x660eu);

L_C66C:
    /* 0000c66c   4  move.w (482,A4),D1 */
    c->pc = 0x0000c66cu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x482u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C670:
    /* 0000c670   2  ext.l D1 */
    c->pc = 0x0000c670u;
    rc_ext_l(c, 1);

L_C672:
    /* 0000c672   4  move.l (0,A0,D0.w),D2 */
    c->pc = 0x0000c672u;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C676:
    /* 0000c676   2  add.l D1,D2 */
    c->pc = 0x0000c676u;
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 2, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_L, t2);

L_C678:
    /* 0000c678   4  move.w D2,(48a,A4) */
    c->pc = 0x0000c678u;
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x48au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C67C:
    /* 0000c67c   2  bra 0000c6d0 */
    c->pc = 0x0000c67cu;
    goto L_C6D0;

L_C67E:
    /* 0000c67e   6  cmpi.w #7,(482,A4) */
    c->pc = 0x0000c67eu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x482u));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_C684:
    /* 0000c684   2  bne 0000c69a */
    c->pc = 0x0000c684u;
    if (rc_cond(c, 6)) goto L_C69A;

L_C686:
    /* 0000c686   6  cmpi.w #2,(712,A4) */
    c->pc = 0x0000c686u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x712u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_C68C:
    /* 0000c68c   2  bge 0000c698 */
    c->pc = 0x0000c68cu;
    if (rc_cond(c, 12)) goto L_C698;

L_C68E:
    /* 0000c68e   4  move.w (712,A4),D0 */
    c->pc = 0x0000c68eu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x712u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C692:
    /* 0000c692   2  addq.w #1,D0 */
    c->pc = 0x0000c692u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_C694:
    /* 0000c694   4  move.w D0,(714,A4) */
    c->pc = 0x0000c694u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x714u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C698:
    /* 0000c698   2  bra 0000c6d0 */
    c->pc = 0x0000c698u;
    goto L_C6D0;

L_C69A:
    /* 0000c69a   4  addq.w #1,(482,A4) */
    c->pc = 0x0000c69au;
    t3 = (c->a[4] + 0x482u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_C69E:
    /* 0000c69e   4  move.w (482,A4),D0 */
    c->pc = 0x0000c69eu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x482u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C6A2:
    /* 0000c6a2   2  asr.w #2,D0 */
    c->pc = 0x0000c6a2u;
    c->d[0] = rc_shift(c, 0, 0, 0x00000002u, rc_d_get(c, 0, RC_W), RC_W);

L_C6A4:
    /* 0000c6a4   4  add.w #20,D0 */
    c->pc = 0x0000c6a4u;
    t0 = 0x00000020u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_C6A8:
    /* 0000c6a8   4  move.w D0,(48a,A4) */
    c->pc = 0x0000c6a8u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x48au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C6AC:
    /* 0000c6ac   2  bra 0000c6d0 */
    c->pc = 0x0000c6acu;
    goto L_C6D0;

L_C6AE:
    /* 0000c6ae   6  cmpi.w #2,(712,A4) */
    c->pc = 0x0000c6aeu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x712u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_C6B4:
    /* 0000c6b4   2  blt 0000c6c0 */
    c->pc = 0x0000c6b4u;
    if (rc_cond(c, 13)) goto L_C6C0;

L_C6B6:
    /* 0000c6b6   4  move.w (712,A4),D0 */
    c->pc = 0x0000c6b6u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x712u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C6BA:
    /* 0000c6ba   2  subq.w #1,D0 */
    c->pc = 0x0000c6bau;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_C6BC:
    /* 0000c6bc   4  move.w D0,(714,A4) */
    c->pc = 0x0000c6bcu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x714u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C6C0:
    /* 0000c6c0   2  bra 0000c6d0 */
    c->pc = 0x0000c6c0u;
    goto L_C6D0;

L_C6C2:
    /* 0000c6c2   2  tst.l D0 */
    c->pc = 0x0000c6c2u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_C6C4:
    /* 0000c6c4   4  beq 0000c440 */
    c->pc = 0x0000c6c4u;
    if (rc_cond(c, 7)) { rc_tick(); goto L_C440; }

L_C6C8:
    /* 0000c6c8   2  subq.l #1,D0 */
    c->pc = 0x0000c6c8u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_C6CA:
    /* 0000c6ca   2  beq 0000c67e */
    c->pc = 0x0000c6cau;
    if (rc_cond(c, 7)) { rc_tick(); goto L_C67E; }

L_C6CC:
    /* 0000c6cc   2  subq.l #1,D0 */
    c->pc = 0x0000c6ccu;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_C6CE:
    /* 0000c6ce   2  beq 0000c6ae */
    c->pc = 0x0000c6ceu;
    if (rc_cond(c, 7)) { rc_tick(); goto L_C6AE; }

L_C6D0:
    /* 0000c6d0   4  move.w (47a,A4),D5 */
    c->pc = 0x0000c6d0u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C6D4:
    /* 0000c6d4   4  sub.w (470,A4),D5 */
    c->pc = 0x0000c6d4u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x470u));
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_C6D8:
    /* 0000c6d8   4  move.w (47c,A4),D6 */
    c->pc = 0x0000c6d8u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C6DC:
    /* 0000c6dc   4  sub.w (472,A4),D6 */
    c->pc = 0x0000c6dcu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x472u));
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_C6E0:
    /* 0000c6e0   4  tst.w (71c,A4) */
    c->pc = 0x0000c6e0u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x71cu));
    rc_set_nzvc(c, t0, RC_W);

L_C6E4:
    /* 0000c6e4   2  beq 0000c70e */
    c->pc = 0x0000c6e4u;
    if (rc_cond(c, 7)) goto L_C70E;

L_C6E6:
    /* 0000c6e6   4  move.w #2,-(A7) */
    c->pc = 0x0000c6e6u;
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C6EA:
    /* 0000c6ea   4  jsr (ffff8188,A4) */
    c->pc = 0x0000c6eau;
    /* vector 65 */
    rc_push32(c, m, 0x0000c6eeu);
    rc_depth++;
    c->pc = 0x00016ee0u;
    return;

L_C6EE:
    /* 0000c6ee   2  addq.w #2,A7 */
    c->pc = 0x0000c6eeu;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_C6F0:
    /* 0000c6f0   4  muls.w #320,D0 */
    c->pc = 0x0000c6f0u;
    t0 = 0x00000320u;
    rc_muls(c, 0, t0);

L_C6F4:
    /* 0000c6f4   4  sub.w #320,D0 */
    c->pc = 0x0000c6f4u;
    t0 = 0x00000320u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_C6F8:
    /* 0000c6f8   2  add.w D0,D5 */
    c->pc = 0x0000c6f8u;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_C6FA:
    /* 0000c6fa   4  move.w #2,-(A7) */
    c->pc = 0x0000c6fau;
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C6FE:
    /* 0000c6fe   4  jsr (ffff8188,A4) */
    c->pc = 0x0000c6feu;
    /* vector 65 */
    rc_push32(c, m, 0x0000c702u);
    rc_depth++;
    c->pc = 0x00016ee0u;
    return;

L_C702:
    /* 0000c702   2  addq.w #2,A7 */
    c->pc = 0x0000c702u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_C704:
    /* 0000c704   4  muls.w #190,D0 */
    c->pc = 0x0000c704u;
    t0 = 0x00000190u;
    rc_muls(c, 0, t0);

L_C708:
    /* 0000c708   4  sub.w #190,D0 */
    c->pc = 0x0000c708u;
    t0 = 0x00000190u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_C70C:
    /* 0000c70c   2  add.w D0,D6 */
    c->pc = 0x0000c70cu;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_C70E:
    /* 0000c70e   4  clr.w (fffffd9c,A4) */
    c->pc = 0x0000c70eu;
    rc_wr16(c, m, (c->a[4] - 0x264u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C712:
    /* 0000c712   4  cmp.w #c8,D5 */
    c->pc = 0x0000c712u;
    t0 = 0x000000c8u;
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_C716:
    /* 0000c716   2  ble 0000c726 */
    c->pc = 0x0000c716u;
    if (rc_cond(c, 15)) goto L_C726;

L_C718:
    /* 0000c718   6  cmpi.w #520,(470,A4) */
    c->pc = 0x0000c718u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x470u));
    rc_cmp(c, RC_W, t0, 0x00000520u);

L_C71E:
    /* 0000c71e   2  bge 0000c726 */
    c->pc = 0x0000c71eu;
    if (rc_cond(c, 12)) goto L_C726;

L_C720:
    /* 0000c720   6  bset #0,(fffffd9d,A4) */
    c->pc = 0x0000c720u;
    t4 = 0x00000000u;
    t3 = (c->a[4] - 0x263u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_C726:
    /* 0000c726   4  cmp.w #78,D5 */
    c->pc = 0x0000c726u;
    t0 = 0x00000078u;
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_C72A:
    /* 0000c72a   2  bge 0000c732 */
    c->pc = 0x0000c72au;
    if (rc_cond(c, 12)) goto L_C732;

L_C72C:
    /* 0000c72c   6  bset #1,(fffffd9d,A4) */
    c->pc = 0x0000c72cu;
    t4 = 0x00000001u;
    t3 = (c->a[4] - 0x263u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_C732:
    /* 0000c732   4  cmp.w #82,D6 */
    c->pc = 0x0000c732u;
    t0 = 0x00000082u;
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_C736:
    /* 0000c736   2  ble 0000c73e */
    c->pc = 0x0000c736u;
    if (rc_cond(c, 15)) goto L_C73E;

L_C738:
    /* 0000c738   6  bset #2,(fffffd9d,A4) */
    c->pc = 0x0000c738u;
    t4 = 0x00000002u;
    t3 = (c->a[4] - 0x263u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_C73E:
    /* 0000c73e   4  cmp.w #46,D6 */
    c->pc = 0x0000c73eu;
    t0 = 0x00000046u;
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_C742:
    /* 0000c742   2  bge 0000c74a */
    c->pc = 0x0000c742u;
    if (rc_cond(c, 12)) goto L_C74A;

L_C744:
    /* 0000c744   6  bset #3,(fffffd9d,A4) */
    c->pc = 0x0000c744u;
    t4 = 0x00000003u;
    t3 = (c->a[4] - 0x263u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_C74A:
    /* 0000c74a   6  move.w (47e,A4),(fffff286,A4) */
    c->pc = 0x0000c74au;
    t0 = rc_rd16(c, m, (c->a[4] + 0x47eu));
    rc_wr16(c, m, (c->a[4] - 0xd7au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C750:
    /* 0000c750   6  move.w (480,A4),(fffff288,A4) */
    c->pc = 0x0000c750u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x480u));
    rc_wr16(c, m, (c->a[4] - 0xd78u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C756:
    /* 0000c756   4  movem.l (SP)+,{ D4 D5 D6 } */
    c->pc = 0x0000c756u;
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_C75A:
    /* 0000c75a   2  unlk A5 */
    c->pc = 0x0000c75au;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_C75C:
    /* 0000c75c   2  rts */
    c->pc = 0x0000c75cu;
    rc_ret(c, m);
    return;

}
