/* The engine addresses the port's own code attaches to - one row per engine build.
 *
 * Everything the port adds hangs off a point inside the game's program: the map's cursor is the
 * word the map script reads, the phone's arrow is the loop that presents the scene, a minigame's
 * win is the update routine's own exit flag. The 1989 game and its 1990 add-on "Antheads" are two
 * builds of the same engine (docs\antheads.md), linked for the same address but with different
 * code and data layouts, so every one of those addresses exists twice.
 *
 * The table below is that second column: `seam_active()` is the running program's set, and the
 * names the eight seam files have always used resolve through it (RC_ADDR() still adds the load
 * address, as it does for every other engine address). No engine address lives outside
 * src\host\seams.c.
 *
 * A seam that the running program does not have is 0. The add-on has no fire game (no FIRE asset,
 * no "Fire Game" entry, no update routine), so its four fire seams are 0 and the code that owns
 * them is not armed - it never "keeps pointing at the original's address".
 *
 * Addresses are model (image) offsets at the 0x4000 load origin, exactly as in
 * re\disasm\dshell.asm and out\antscan\ghidra\disasm\dshell.asm; §6 of docs\antheads.md carries
 * the measurement behind each row.
 */
#ifndef ICFTD_HOST_SEAMS_H
#define ICFTD_HOST_SEAMS_H

#include "types.h"

typedef struct seam_set
{
    /* --- code, at its entry (or, for a return address, the instruction after the call) ------ */
    u32 menuActionPc;       /* FUN_0000247a: the room's action list                     */
    u32 menuActionEnd;      /* ... one past it, for the caller test                     */
    u32 menuActionFlip;     /* the menu's bitmap flip, as its return address            */
    u32 menuLookPc;         /* FUN_00002b7c: Look North/South/East/West                 */
    u32 menuLookEnd;
    u32 menuLookFlip;
    u32 menuFlipPc;         /* FUN_0001d1da: the menu's bitmap flip itself              */
    u32 mapScriptPc;        /* FUN_00003b1e: the situation map's per-update script      */
    u32 mapEventPc;         /* FUN_0001061c: the map's tail, just before its save test  */
    u32 textLinePc;         /* FUN_00004d76: draws one line of a text menu              */
    u32 textLineRet;        /* its return address inside FUN_00004f0a                   */
    u32 phoneUpdatePc;      /* FUN_00005fbe: presents one update of the phone book      */
    u32 phoneUpdateRet;     /* ... called from the phone's own cursor loop              */
    u32 roomUpdatePc;       /* FUN_00005824: the room view's per-frame update           */
    u32 roomDrawPc;         /* FUN_00005eac: the location picture and its actors        */
    u32 hospDrawPc;         /* FUN_00019e9c: the escape's update, right after the walk  */
    u32 saveDrawPc;         /* FUN_0001dbd0: Move_DrawNode(node, x, y, flags)           */
    u32 antScenePc;         /* FUN_00007934: one update of the giant-ant fight          */
    u32 aimShotPc;          /* FUN_000086a0: the fight's trigger                        */
    u32 aimSprayPc;         /* FUN_0000b97c: the fire game's extinguisher (0: no game)  */
    u32 fightUpdatePc;      /* FUN_0000a74e: the fight's update                         */
    u32 fireUpdatePc;       /* FUN_0000b528: the fire game's update (0: no game)        */
    u32 chickenUpdatePc;    /* FUN_0001c838: the chicken race's update                  */
    u32 underUpdatePc;      /* FUN_0000d376: the underground nest's update              */
    u32 hospUpdatePc;       /* FUN_00019e9c: the hospital escape's update               */
    u32 flightUpdatePc;     /* FUN_000125aa: the flight's update                        */
    u32 fightScenePc;       /* the entry the title's "Fight" key starts                 */
    u32 flightScenePc;      /* ... "Take a Flight"                                      */
    u32 fireScenePc;        /* ... "Fire Game" (0: the add-on has none)                 */
    u32 hospitalScenePc;    /* ... "Escape Hospital"                                    */
    u32 titleHoldPc;        /* FUN_00009870: the intro's setup, where the title holds   */
    u32 titleIntroRun;      /* its call into the intro scene                            */
    u32 titleIntroSkip;     /* the instruction after it                                 */
    u32 titleScorePc;       /* FUN_00009cf2: load a score and start it                  */
    u32 titleUnloadPc;      /* FUN_0000ec8a: stop and free that score                   */
    u32 titleChickenPc;     /* FUN_0001ba3e: the chicken race itself                    */
    u32 titleUnderPc;       /* FUN_0000bfca: the underground ant nest                   */
    u32 titleAntPc;         /* FUN_00008c5c: the giant-ant fight's scene entry          */
    u32 titleClockVbiPc;    /* FUN_0000551c: installs the clock VBI                     */
    u32 titleEndPc;         /* FUN_0000a4d6: the ending dispatcher                      */
    u32 titleLoadPrompt;    /* FUN_0001029e+4: after its `link`                         */
    u32 titleLoadAnswer;    /* ... and after the prompt call that reads D0              */

    /* --- data ------------------------------------------------------------------------------ */
    u32 scorePtr;           /* the loaded score, 0 when there is none                   */
    u32 hospProgress;       /* the hospital escape's / nest's progress word             */
    u32 clockDay;           /* days left in June                                        */
    u32 clockHour;          /* the hour, 0..0x17                                        */
    u32 clockMin;           /* the minute                                               */
    u32 clockGate;          /* the pause gate FUN_00005406 tests                        */
    u32 clockDispH;         /* the hour the map prints                                  */
    u32 clockDispAp;        /* its "AM"/"PM" string - a long, not a word                */
    u32 sceneResult;        /* the shared scene result, 1 = success                     */
    u32 sceneInit;          /* the scene's own "setup has run" flag                     */
    u32 fightOver;          /* the fight's own "over" flag                              */
    u32 fightHPose;         /* the player's pose                                        */
    u32 fightOPose;         /* the opponent's pose                                      */
    u32 fightHealth;        /* the player's health                                      */
    u32 fireActive;         /* the eight flames' active flags (0: no fire game)         */
    u32 fireEndWait;        /* its end-of-room countdown                               */
    u32 chickBrake;         /* the race: was braking                                    */
    u32 chickOver;          /* ... ends the scene's loop                                */
    u32 chickWon;           /* ... "Ice swerved"                                        */
    u32 antWon;             /* the giant ant's success pair                             */
    u32 antOver;            /* the fight's exit flag (the fire game's "clear" too)      */
    u32 flightOver;         /* the flight is over                                       */
    u32 flightLanded;       /* ... and landed at the nest                               */
    u32 aimX;               /* the aim both aiming scenes share                         */
    u32 aimY;
    u32 aimAccX;            /* the stick's ramped speed                                 */
    u32 aimAccY;
    u32 aimAxisX;           /* FUN_00011bf0's decoded stick, +1 / 0 / -1                */
    u32 aimAxisY;
    u32 mapAxisX;           /* the map's decoded stick                                  */
    u32 mapAxisY;
    u32 mapFireHeld;        /* the fire level the map's save test reads                 */
    u32 mapPanel;           /* a panel or menu is up                                    */
    u32 mapMaxY;            /* the travel window's bottom row                           */
    u32 mapOrgX;            /* the map picture's offset (<= 0) ...                      */
    u32 mapOrgY;
    u32 mapOrgMinY;         /* ... and the bottom limit FUN_000035d2 clamps to          */
    u32 mapCurX;            /* the cursor's screen x/y                                  */
    u32 mapCurY;
    u32 titleLocation;      /* the room's location word                                 */
    u32 titleRoom;          /* ... and its room byte                                    */
    u32 titleRoomName;      /* "!B%02d" of that byte                                    */
    u32 titleEndFlag;       /* which ending FUN_0000a4d6 runs                           */
    u32 titleScoreDesc;     /* &"Overhead2.tiny"                                        */
    u32 titleMusicBlock;    /* the loaded music block                                   */
    u32 titleSwerve;        /* the truck x that makes Ice swerve                        */
    u32 titleSwerveEnd;
    u32 textRastPort;       /* the engine's animation RastPort                          */
    u32 saveAsset;          /* the map's SVGM mark                                      */
    u32 saveScreenH;        /* the map screen's height                                  */
    u32 hospFine;           /* the escape's fine scroll                                 */
    u32 hospScroll;         /* ... and its scroll request bits                          */
    u32 hospViewX;          /* the picture's world x/y in the bitmap                    */
    u32 hospViewY;
    u32 hospPlayerX;        /* the character's world x/y                                */
    u32 hospPlayerY;
    u32 panelFlag;          /* FUN_000007f4: the narration panel is open                */
    u32 panelCols;          /* the five colours it stages into the live palette         */

    /* --- the loading line's load-only code (see src\host\main.c) ---------------------------- */
    const u32 (*loadRanges)[2];
    int loadRangeCount;
} seam_set;

/* The running program's set: the add-on's when the add-on is what rc_active names, the 1989
 * game's otherwise. Derived from rc_active rather than cached, so a program switch cannot leave
 * the seams pointing at the other build. */
const seam_set *seam_active(void);

/* 1 when the running program is the add-on. The same derivation seam_active() uses, for the port
 * code that has to know *which* build it is looking at - the title's fifth button names the build
 * it leads to. Both front ends link this file, so it is also the test that works in the MS-DOS
 * build, which does not link the add-on's table. */
int seam_is_addon(void);

/* The seven seam files' own names, resolved against the active program. RC_ADDR() is applied at
 * the use site as before; a seam that is 0 means "this program has no such point". */
#define SEAM(f) (seam_active()->f)

#define MENU_ACTION_PC      SEAM(menuActionPc)
#define MENU_ACTION_END     SEAM(menuActionEnd)
#define MENU_ACTION_FLIP    SEAM(menuActionFlip)
#define MENU_LOOK_PC        SEAM(menuLookPc)
#define MENU_LOOK_END       SEAM(menuLookEnd)
#define MENU_LOOK_FLIP      SEAM(menuLookFlip)
#define MENU_FLIP_PC        SEAM(menuFlipPc)
#define MAP_SCRIPT_PC       SEAM(mapScriptPc)
#define MAP_EVENT_PC        SEAM(mapEventPc)
#define TEXT_LINE_PC        SEAM(textLinePc)
#define TEXT_LINE_RET       SEAM(textLineRet)
#define PHONE_UPDATE_PC     SEAM(phoneUpdatePc)
#define PHONE_UPDATE_RET    SEAM(phoneUpdateRet)
#define ROOM_UPDATE_PC      SEAM(roomUpdatePc)
#define ROOM_DRAW_PC        SEAM(roomDrawPc)
#define HOSP_DRAW_PC        SEAM(hospDrawPc)
#define SAVE_DRAW_PC        SEAM(saveDrawPc)
#define ANT_SCENE_PC        SEAM(antScenePc)
#define ANT_UPDATE          SEAM(antScenePc)
#define AIM_SHOT_PC         SEAM(aimShotPc)
#define AIM_SPRAY_PC        SEAM(aimSprayPc)
#define FIGHT_UPDATE        SEAM(fightUpdatePc)
#define CHICKEN_UPDATE      SEAM(chickenUpdatePc)
#define UNDER_UPDATE        SEAM(underUpdatePc)
#define HOSP_UPDATE         SEAM(hospUpdatePc)
#define FLIGHT_UPDATE       SEAM(flightUpdatePc)

#define HOST_SCORE_PTR      SEAM(scorePtr)
#define HOST_HOSP_PROG      SEAM(hospProgress)
#define SCENE_STEPS         SEAM(hospProgress)
#define CLOCK_DAY           SEAM(clockDay)
#define CLOCK_HOUR          SEAM(clockHour)
#define CLOCK_MIN           SEAM(clockMin)
#define CLOCK_GATE          SEAM(clockGate)
#define CLOCK_DISP_H        SEAM(clockDispH)
#define CLOCK_DISP_AP       SEAM(clockDispAp)
#define SCENE_RESULT        SEAM(sceneResult)
#define SCENE_INIT          SEAM(sceneInit)
#define FIGHT_OVER          SEAM(fightOver)
#define FIGHT_H_POSE        SEAM(fightHPose)
#define FIGHT_O_POSE        SEAM(fightOPose)
#define FIGHT_H_HEALTH      SEAM(fightHealth)
#define FIRE_ACTIVE         SEAM(fireActive)
#define FIRE_END_WAIT       SEAM(fireEndWait)
#define CHICK_BRAKE         SEAM(chickBrake)
#define CHICK_OVER          SEAM(chickOver)
#define CHICK_WON           SEAM(chickWon)
#define ANT_WON             SEAM(antWon)
#define ANT_OVER            SEAM(antOver)
#define FIRE_CLEAR          SEAM(antOver)
#define FLIGHT_OVER         SEAM(flightOver)
#define FLIGHT_LANDED       SEAM(flightLanded)
#define ANT_AIM_X           SEAM(aimX)
#define ANT_AIM_Y           SEAM(aimY)
#define AIM_X               SEAM(aimX)
#define AIM_Y               SEAM(aimY)
#define AIM_ACC_X           SEAM(aimAccX)
#define AIM_ACC_Y           SEAM(aimAccY)
#define AIM_AXIS_X          SEAM(aimAxisX)
#define AIM_AXIS_Y          SEAM(aimAxisY)
#define MAP_AXIS_X          SEAM(mapAxisX)
#define MAP_AXIS_Y          SEAM(mapAxisY)
#define MAP_FIRE_HELD       SEAM(mapFireHeld)
#define MAP_PANEL           SEAM(mapPanel)
#define MAP_MAX_Y           SEAM(mapMaxY)
#define MAP_ORG_X           SEAM(mapOrgX)
#define MAP_ORG_Y           SEAM(mapOrgY)
#define MAP_ORG_MINY        SEAM(mapOrgMinY)
#define MAP_CUR_X           SEAM(mapCurX)
#define MAP_CUR_Y           SEAM(mapCurY)
#define TITLE_LOCATION_PC   SEAM(titleLocation)
#define TITLE_ROOM_PC       SEAM(titleRoom)
#define TITLE_ROOM_NAME     SEAM(titleRoomName)
#define TITLE_END_FLAG      SEAM(titleEndFlag)
#define TITLE_SCORE_DESC    SEAM(titleScoreDesc)
#define TITLE_MUSIC_BLOCK   SEAM(titleMusicBlock)
#define TITLE_SWERVE_PC     SEAM(titleSwerve)
#define TITLE_SWERVE_END    SEAM(titleSwerveEnd)
#define TEXT_RASTPORT       SEAM(textRastPort)
#define SAVE_ASSET          SEAM(saveAsset)
#define PANEL_FLAG          SEAM(panelFlag)
#define PANEL_COLS          SEAM(panelCols)
#define SAVE_SCREEN_H       SEAM(saveScreenH)
#define HOSP_FINE           SEAM(hospFine)
#define HOSP_SCROLL         SEAM(hospScroll)
#define HOSP_VIEW_X         SEAM(hospViewX)
#define HOSP_VIEW_Y         SEAM(hospViewY)
#define HOSP_PLAYER_X       SEAM(hospPlayerX)
#define HOSP_PLAYER_Y       SEAM(hospPlayerY)

/* The title's own points, used only in src\host\title.c. */
#define TITLE_HOLD_PC       SEAM(titleHoldPc)
#define TITLE_INTRO_RUN     SEAM(titleIntroRun)
#define TITLE_INTRO_SKIP    SEAM(titleIntroSkip)
#define TITLE_SCORE_PC      SEAM(titleScorePc)
#define TITLE_UNLOAD_PC     SEAM(titleUnloadPc)
#define TITLE_CHICKEN_PC    SEAM(titleChickenPc)
#define TITLE_UNDER_PC      SEAM(titleUnderPc)
#define TITLE_ANT_PC        SEAM(titleAntPc)
#define TITLE_CLOCKVBI_PC   SEAM(titleClockVbiPc)
#define TITLE_END_PC        SEAM(titleEndPc)
#define TITLE_LOAD_PROMPT   SEAM(titleLoadPrompt)
#define TITLE_LOAD_ANSWER   SEAM(titleLoadAnswer)

/* The scene entries the title's digit keys start. */
#define SCENE_FIGHT_PC       SEAM(fightScenePc)
#define SCENE_FLIGHT_PC      SEAM(flightScenePc)
#define SCENE_FIRE_PC        SEAM(fireScenePc)
#define SCENE_HOSPITAL_PC    SEAM(hospitalScenePc)

#endif
