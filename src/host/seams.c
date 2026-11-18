/* The two engine builds' seam tables. See seams.h and docs\antheads.md §6.
 *
 * Left column: the 1989 game, from re\disasm\dshell.asm (the same addresses the port has always
 * used). Right column: "It Came from the Desert II - Antheads", measured the way §9 of the plan
 * describes it - the add-on's mnemonic-identical functions map one to one, and an address inside a
 * mapped function is found at the same instruction index in the twin's disassembly
 * (out\antscan\ghidra\disasm\dshell.asm). Where a function changed, the twin was found by the
 * evidence the plan names for the row: the same surrounding `jsr` sequence, the same string, the
 * same caller, or a 99%-identical instruction sequence (the flight's update, the map's script).
 *
 * The five rows §6.1 left open are settled here (2026-11-18):
 *
 *   SAVE_ASSET 0x2682c -> 0x29050   the same five asset loads in the same order after the map's
 *                                   MMAP: 0x28a36 -> 0x2b27e, 0x26824 -> 0x29048, 0x2682c ->
 *                                   0x29050 ("SVGM"), 0x26828 -> 0x2904c, 0x28a2e -> 0x2b276.
 *   TITLE_ROOM_NAME 0x28b3e -> 0x2b386  the `pea !B%02d` + `pea (d16,A4)` pair in the room draw.
 *   CLOCK_DISP_AP 0x26872 -> 0x2909a   written as the long right after CLOCK_DISP_H (0x29098).
 *   PHONE_UPDATE_RET 0x6632 -> 0x6caa  not 0x701c: the call at 0x6ca6 is followed by
 *                                   `addq.w #4,SP` + `bra` back to the loop, exactly as 0x662e is.
 *   FLIGHT_UPDATE 0x125aa -> 0x13e16   295 of 295 original instructions appear, in order, inside
 *                                   it (the add-on adds 4); called from the flight engine's twin.
 *
 * Two rows are not in §6 and are measured here: MAP_MAX_Y 0x28a48 -> 0x2b290 and
 * MAP_ORG_MINY 0x28a5c -> 0x2b2a4 (the map script and FUN_000035d2's twin read the same words at
 * the same instructions; the whole 0x28a36..0x28a62 block moves by +0x2848).
 *
 * The title's scene entries are seams too: the digits start a scene by calling the entry the room
 * dispatcher would have called, and the add-on's dispatcher calls its own. Fight 0xb46c -> 0xc974
 * (the same "Fight.tiny" + `0x40` into the music block + FUN_0000a74e as its update),
 * flight 0x107a6 -> 0x11ff8, hospital 0x1819a -> 0x198d4; the fire game (0xbe34) is gone.
 *
 * The 1989 title held these four as *runtime* addresses (0xf46c, 0x107a6 + 0x4000, ...), which is
 * why the model address of "Fight" is 0xb46c and not 0xf46c: 0xf46c is its runtime address, and
 * 0xf46c *as a model address* is an instruction in the middle of another function. Moving the
 * table to one convention (model addresses) is what exposed that.
 */
#include "../recomp/cpu.h"
#include "../recomp/fn_table.h"
#include "seams.h"

/* The loading line's load-only code: the SMS loader and its unpacker, the bank directory search,
 * the bank opener, the asset lookup, the read helper and the LZ decruncher. */
static const u32 g_loadRangesOriginal[][2] =
{
    { 0x00000AAAu, 0x00000FA2u },
    { 0x0001EC42u, 0x0001F03Eu },
    { 0x0002011Au, 0x000201D4u },
    { 0x00020204u, 0x000202C4u },
    { 0x000202C4u, 0x000204FAu },
    { 0x000204FAu, 0x00020518u },
    { 0x00020518u, 0x000205E6u },
    { 0x000205E6u, 0x000207F0u }
};

static const u32 g_loadRangesAnt[][2] =
{
    { 0x00000E54u, 0x0000134Cu },
    { 0x00020CBAu, 0x000210D0u },
    { 0x000221BCu, 0x00022276u },
    { 0x000222A6u, 0x00022366u },
    { 0x00022366u, 0x0002259Cu },
    { 0x0002259Cu, 0x000225BAu },
    { 0x000225BAu, 0x00022688u },
    { 0x00022688u, 0x00022892u }
};

static const seam_set g_original =
{
    /* code */
    0x0000247Au, 0x00002B0Eu, 0x000029D2u,     /* action list, its end, its flip      */
    0x00002B7Cu, 0x00002C92u, 0x00002C62u,     /* Look ..., its end, its flip         */
    0x0001D1DAu,                               /* the menu's flip                     */
    0x00003B1Eu, 0x0001061Cu,                  /* map script, map tail                */
    0x00004D76u, 0x00004F40u,                  /* text line, its return address       */
    0x00005FBEu, 0x00006632u,                  /* phone update, its return address    */
    0x00005824u, 0x00005EACu,                  /* room update, room draw              */
    0x00019E9Cu,                               /* hospital draw                       */
    0x0001DBD0u,                               /* Move_DrawNode                       */
    0x00007934u, 0x000086A0u, 0x0000B97Cu,     /* ant update, shot, extinguisher      */
    0x0000A74Eu,                               /* fight update                        */
    0x0000B528u,                               /* fire update                         */
    0x0001C838u,                               /* chicken update                      */
    0x0000D376u,                               /* underground update                  */
    0x00019E9Cu,                               /* hospital update                     */
    0x000125AAu,                               /* flight update                       */
    0x0000B46Cu, 0x000107A6u, 0x0000BE34u, 0x0001819Au,  /* the title's scenes        */
    0x00009870u, 0x000098F8u, 0x000098FCu,     /* title hold, intro run, intro skip   */
    0x00009CF2u, 0x0000EC8Au,                  /* score load, score unload            */
    0x0001BA3Eu, 0x0000BFCAu, 0x00008C5Cu,     /* chicken, nest, giant ant            */
    0x0000551Cu,                               /* clock VBI                           */
    0x0000A4D6u,                               /* endings                             */
    0x000102A2u, 0x000102E6u,                  /* load prompt, load answer            */
    /* data */
    0x00023C58u, 0x0002A170u,                  /* score, hospital progress            */
    0x00021E1Eu, 0x00021E22u, 0x00021E24u, 0x00021E26u,  /* day, hour, minute, gate   */
    0x00026870u, 0x00026872u,                  /* printed hour, AM/PM                 */
    0x0002991Eu, 0x00029896u,                  /* scene result, scene init            */
    0x000230F6u, 0x00029E24u, 0x00029E26u, 0x00029E36u,  /* fight flags and poses     */
    0x00029E88u, 0x00029EBAu,                  /* fire active flags, end wait         */
    0x0002BCCEu, 0x0002BCD0u, 0x0002BCD4u,     /* brake, over, won                    */
    0x00029920u, 0x00029CC0u,                  /* ant won, ant over                   */
    0x0002A544u, 0x0002A552u,                  /* flight over, flight landed          */
    0x00029AE0u, 0x00029AE2u, 0x00029AE4u, 0x00029AE6u,  /* aim, aim acceleration     */
    0x00024A80u, 0x00024A82u,                  /* decoded stick                       */
    0x00026892u, 0x00026894u, 0x00026896u,     /* map stick, map fire                 */
    0x00028C1Cu,                               /* map panel                           */
    0x00028A48u, 0x00028A4Cu, 0x00028A50u, 0x00028A5Cu,  /* window bottom, org, min y */
    0x00028A54u, 0x00028A58u,                  /* cursor x/y                          */
    0x00028A3Au, 0x00028B10u, 0x00028B3Eu,     /* location, room, room name           */
    0x00022D68u,                               /* ending flag                         */
    0x00023B84u, 0x00023C5Eu,                  /* score descriptor, music block       */
    0x0002C100u, 0x0002C102u,                  /* swerve window                       */
    0x0002656Au,                               /* animation RastPort                  */
    0x0002682Cu, 0x00026618u,                  /* save mark, screen height            */
    0x00028CD4u, 0x000297F2u,                  /* fine scroll, scroll request         */
    0x00029EC6u, 0x00029EC8u,                  /* picture origin                      */
    0x00029ED0u, 0x00029ED2u,                  /* player position                     */
    0x00021F5Au, 0x00021F50u,                  /* panel open flag, its five colours   */
    g_loadRangesOriginal,
    (int)(sizeof g_loadRangesOriginal / sizeof g_loadRangesOriginal[0])
};

static const seam_set g_ant =
{
    /* code */
    0x000027D8u, 0x00002E96u, 0x0001F410u,
    0x00002F16u, 0x0000302Cu, 0x00002FFCu,
    0x0001F260u,
    0x00003F9Eu, 0x00011E8Au,
    0x000053B0u, 0x0000557Au,
    0x00006612u, 0x00006CAAu,
    0x00005E3Eu, 0x00006500u,
    0x0001B766u,
    0x0001FC6Cu,
    0x00009238u, 0x00009F60u, 0x00000000u,     /* no fire game: no extinguisher       */
    0x0000BC56u,
    0x00000000u,                               /* no fire game: no update             */
    0x0001E8AAu,
    0x0000EBE2u,
    0x0001B766u,
    0x00013E16u,
    0x0000C974u, 0x00011FF8u, 0x00000000u, 0x000198D4u,
    0x0000AC3Cu, 0x0000ACC4u, 0x0000ACC8u,
    0x0000B0BEu, 0x000104F6u,
    0x0001DAB0u, 0x0000D83Cu, 0x0000A526u,
    0x00005B5Eu,
    0x0000B9DEu,
    0x00011B10u, 0x00011B54u,
    /* data */
    0x00025F18u, 0x0002CC0Cu,
    0x00023ED8u, 0x00023EDCu, 0x00023EDAu, 0x00023EE0u,
    0x00029098u, 0x0002909Au,
    0x0002C34Cu, 0x0002C2B0u,
    0x00025406u, 0x0002C8C2u, 0x0002C8C4u, 0x0002C8D4u,
    0x00000000u, 0x00000000u,                  /* no fire game                        */
    0x0002E79Cu, 0x0002E79Eu, 0x0002E7A2u,
    0x0002C350u, 0x0002C7A0u,
    0x0002CFDEu, 0x0002CFECu,
    0x0002C5C0u, 0x0002C5C2u, 0x0002C5C4u, 0x0002C5C6u,
    0x00026D40u, 0x00026D42u,
    0x000290BAu, 0x000290BCu, 0x000290BEu,
    0x0002B464u,
    0x0002B290u, 0x0002B294u, 0x0002B298u, 0x0002B2A4u,
    0x0002B29Cu, 0x0002B2A0u,
    0x0002B282u, 0x0002B358u, 0x0002B386u,
    0x00025078u,
    0x00025E44u, 0x00025F1Eu,
    0x0002EBCEu, 0x0002EBD0u,
    0x00028D8Eu,
    0x00029050u, 0x00028E3Cu,
    0x0002B51Cu, 0x0002C1F6u,
    0x0002C962u, 0x0002C964u,
    0x0002C96Cu, 0x0002C96Eu,
    0x00024068u, 0x0002405Eu,                  /* panel open flag, its five colours   */
    g_loadRangesAnt,
    (int)(sizeof g_loadRangesAnt / sizeof g_loadRangesAnt[0])
};

int seam_is_addon(void)
{
    /* The 1989 build is the only program whose descriptor every front end links (the MS-DOS build
     * gains the add-on's in its own phase, docs\antheads.md), so the test is against it rather
     * than against the add-on's table: a run of the original is not the add-on whatever else is
     * linked, and any other program is. */
    return rc_active != 0 && rc_active != &rc_engine;
}

const seam_set *seam_active(void)
{
    return seam_is_addon() ? &g_ant : &g_original;
}
