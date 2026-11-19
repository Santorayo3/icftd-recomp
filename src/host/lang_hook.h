/* The language icftd.ini selects, wired into a running game (src\runtime\lang.c reads the file).
 * Two things live here that the runtime cannot own: the ini lookup, and the function-entry hook
 * that hands the engine the translated string instead of the English one. Both front ends call this
 * file, so the Windows and the DOS build translate with the same rule.
 *
 * The hook is possible because every one of the engine's text routines takes the string as its
 * first argument on the stack, and the translated dispatcher enters every function through
 * rc_entryHook. Replacing the argument in the callee's frame - not the caller's copy - keeps the
 * substitution to the one call: a routine that hands its string on passes the translated one, and a
 * routine that never touched it still has the English one.
 */
#ifndef ICFTD_HOST_LANG_HOOK_H
#define ICFTD_HOST_LANG_HOOK_H

#include "types.h"
#include "../recomp/cpu.h"
#include "machine.h"

/* Reads [GAME] language from icftd.ini and selects it. Call once the settings file is there, i.e.
 * before the first message the player may see and before the program boots. The language folders
 * are browsed here as well (rt_lang_scan), so the settings view has its list from the start. */
void host_lang_load(void);

/* Switches the running machine to another language: selects the catalog, copies it into the
 * machine's RAM (the game keeps running; nothing is re-booted) and writes [GAME] language back to
 * icftd.ini, so the view, the game and the next start agree. `code` is one rt_lang_available
 * names; a code this run does not offer changes nothing. Returns 1 when that language is in force
 * afterwards. */
int host_lang_switch(rt_machine *m, const char *code);

/* Enables (or, with en, skips) the translation for this machine: copies the catalog into the
 * machine's RAM. Call after rt_init/rt_load_image and before oracle_boot - once per machine, so
 * the Escape restart and a switch between the two builds open their own copy. */
void host_lang_open(rt_machine *m);

/* rc_entryHook: 1 when a language is selected, i.e. when the hook has work to do. */
int host_lang_on(void);

/* The hook itself: swaps a text routine's first argument for the translated string when the
 * English one has a row in the file. Call from the front end's rc_entryHook before anything else it
 * does. */
void host_lang_entry(cpu_t *c, rt_machine *m, u32 pc);

/* --langdump <file>: writes every distinct string a run hands to those same text routines, one
 * `<English><TAB>` row per string, ready for a translator to fill in (tools\lang-export.ps1). It
 * works with the language set either way - it records the English side, before any substitution.
 * Call once at start-up; the file is closed at exit. */
void host_lang_dump(const char *path);

/* 1 when --langdump is running, so the front end installs the hook even in an English run. */
int host_lang_dump_on(void);

#endif /* ICFTD_HOST_LANG_HOOK_H */
