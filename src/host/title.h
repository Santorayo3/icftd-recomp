/* The title screen - a port feature. See title.c. */
#ifndef ICFTD_HOST_TITLE_H
#define ICFTD_HOST_TITLE_H

#include "machine.h"
#include "platform.h"

/* Arm the title for a played game (call it when the front end is about to run the game for a
 * player). It engages itself the first time the program is about to play its intro; measurement
 * runs never arm it, so they start exactly where the original does. */
void host_title_arm(int on);

/* --titlekey <n>: take one menu choice as soon as the title is up, so a scripted run can start a
 * scene from the title (the same class of dev seam as --call). 0 = the intro, 1..7 = a scene,
 * 8..10 = the endings (win, nest collapse, deadline), 11/12 = the Load Game and New Game buttons,
 * 13 = the Settings button, 14 = the menu itself for a --mouse script to click, 15 = the fifth
 * button, "Play Antheads" (docs\antheads.md), -1 (the default) = no choice. A scene the running
 * build does not have (the add-on has no fire game, and Antheads has no "3") is said so and ends
 * the run. */
void host_title_key(int n);

/* 1 when the add-on "It Came from the Desert II - Antheads" can be played from this data folder and
 * this front end can boot it. It is what makes the menu's fifth button appear (title_button.c) and
 * what --titlekey 15 needs; a player without the add-on's disks gets today's four buttons. Defined
 * by each front end, because the data folder's layout and the bootable programs are its own: the
 * Windows one answers from rt_assets_addon_ready() for `export\`, the MS-DOS one for the 8.3 tree
 * (`ANT1..3`, `ANTSHEL.IMG`) - both link the add-on's table (docs\antheads.md). */
int host_title_addon(struct rt_machine *m);

/* Esc in a played game. The front end's input layer calls this at a frame boundary; it asks the
 * run to stop and leaves a restart for the front end, which then re-initialises the machine and
 * boots the game again, so the player lands on the title screen with nothing of the old session
 * left over. In a measurement run (the title was never armed) it keeps the old meaning: stop. */
void host_title_escape(struct rt_machine *m);

/* 1 when Escape has a question to ask before it takes host_title_escape()'s restart - i.e. in a
 * played game. The front end puts the confirmation up (src\host\quit_confirm.c) and calls
 * host_title_escape() only when the player confirms; 0 in a measurement, where Escape keeps its
 * old meaning and stops the run at once. */
int host_title_escape_asks(void);

/* Read by the front end after its run loop: 1 means Esc asked for a restart. Clears the request. */
int host_title_restart_pending(void);

/* Read by the front end after host_title_restart_pending() answered 1: the program that restart is
 * to boot (HOST_PROGRAM_ORIGINAL / HOST_PROGRAM_ANT, src\host\programs.h), or -1 when the restart
 * is a plain one. The front end picks that build's table, image, save geometry and file tree
 * exactly as --program would at boot, then starts the machine again. The title always comes back on
 * the 1989 program, so Escape answers HOST_PROGRAM_ORIGINAL and the menu's "Play Antheads" answers
 * HOST_PROGRAM_ANT. Clears the request. */
int host_title_restart_program(void);

/* Read by the front end after host_title_restart_program(): 1 when that boot is a *game start* -
 * the menu's "Play Antheads" - so the front end calls host_title_new_game() on the re-armed title
 * and the player lands in the add-on's intro. 0 for Escape, which shows the menu. Clears the
 * request. */
int host_title_restart_play(void);

/* Read by the front end after host_title_restart_program(), like host_title_restart_play(): 1 when
 * that boot is a *load* of the slot in m->saveSlot into the build that wrote it - a click on the
 * other game's save in the Load Game list (docs\antheads.md, Phase 7). The front end then calls
 * host_title_load_on_boot() instead of host_title_new_game(). Clears the request. */
int host_title_restart_load(void);

/* The menu's "Play Antheads", taken by the front end after it booted the add-on: the new machine
 * must go straight into the add-on's own intro, so the title does not hold it at an intro setup and
 * draws no menu - it only answers the engine's YES/NO load screen (the one the boot loop runs after
 * the intro) with "no", which is the decision the menu button already made. Called after
 * host_title_arm(1), which is what makes Escape work in the resulting game. */
void host_title_new_game(void);

/* The menu's "Load Game" for a save the other game wrote, taken by the front end after it booted
 * that game (host_title_restart_load): the fresh machine runs its own intro setup, the title skips
 * the intro scene and then answers the engine's YES/NO load screen with "yes", so that build's own
 * load routine reads its own file back (DSAVE:ICFTD2 in the add-on). The slot is the machine's
 * m->saveSlot, which the front end keeps across the restart. Nothing of the menu is drawn. Called
 * after host_title_arm(1). */
void host_title_load_on_boot(void);

/* The front end's cpu_t mirror is scattered into the core when a CIA handler runs, so a register
 * write made here (an injected call's frame, or the pop that balances it) has to reach that mirror
 * too - otherwise the next handler run would put the stale stack pointer back. Defined by each
 * front end, which owns the mirror. */
void host_regs_sync(rt_machine *m);

/* The intro is over: the game is about to build its first screen. Show the OSD loading line from
 * this frame on, instead of waiting for the engine's own load detection - the world loop's script
 * parser takes seconds before any of the loader code runs. Defined by each front end; the DOS
 * front end has no per-screen seam and does nothing. */
void host_loading_hold(rt_machine *m);

/* The title menu is a host screen with its own loop, so the front end's frame hooks - the ones that
 * feed a scripted pointer - do not run while it is up. This overlays those positions on `in`, and
 * answers 1 when it owns the pointer this frame. Defined by each front end: the Windows one feeds
 * its --mouse script, the DOS one (no pointer at all) has nothing to say. */
int host_title_pointer(rt_machine *m, input_state *in);

/* Switch the window mode from `current` to its opposite and write [VIDEO] fullscreen, wherever the
 * player is: Alt+Enter (the front end's frame hook asks for it, and so does every loop title.c
 * drives) and the settings view's toggle both go through here. Returns the mode it switched to
 * (0/1), or -1 on a platform with no window mode of its own, where nothing is switched or written. */
int host_fullscreen_toggle(int current);

/* Call from the main loop before executing `pc`. Returns 1 when the title did something and the
 * loop must re-read the PC (a call was injected, or the PC was left where it was). */
int host_title_check(rt_machine *m, u32 pc);

#endif /* ICFTD_HOST_TITLE_H */
