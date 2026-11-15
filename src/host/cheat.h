/* The Ctrl+W minigame cheat - a port feature. See cheat.c. */
#ifndef ICFTD_HOST_CHEAT_H
#define ICFTD_HOST_CHEAT_H

#include "machine.h"
#include "platform.h"

/* The frame's platform input: a Ctrl+W press arms one cheat. A measurement run never calls this,
 * so the seam is inert there. */
void host_cheat_input(rt_machine *m, const input_state *in);

/* --cheat <frame>: the same request without a keyboard, for a scripted run (a dev seam like
 * --esc). The request is still consumed the way the key's is. */
void host_cheat_force(rt_machine *m);

/* rc_entryHook: a minigame's own per-frame update is being entered. 1 when this call ended the
 * scene in its success state. */
int host_cheat_entry(rt_machine *m, u32 pc);

/* A fresh machine (the Escape restart) must not inherit a request from the old game. */
void host_cheat_reset(void);

#endif /* ICFTD_HOST_CHEAT_H */
