/* The hospital escape's camera (a port feature, src\host\hospital_camera.c).
 *
 * Both front ends call this first from their rc_entryHook: it answers for the entry of the
 * hospital's actor draw (0x19E9C), i.e. once per update, after the walk has moved the player and
 * before the vblank that applies the scroll request. It returns 1 when that is the entry it was
 * given (and then it has written the request), 0 for every other entry. Nothing else may call it:
 * the words it writes are shared with every scene.
 */
#ifndef ICFTD_HOST_HOSPITAL_CAMERA_H
#define ICFTD_HOST_HOSPITAL_CAMERA_H

#include "types.h"
#include "machine.h"

int host_hospital_camera_entry(rt_machine *m, u32 pc);

/* --cameralog: one line per update with the player, the picture origin, the fine scroll, the
 * character's screen position and the request written, so a headless run says where the character
 * is instead of a screenshot. A measurement run never installs the seam, so it prints nothing. */
void host_hospital_camera_log(int on);

#endif /* ICFTD_HOST_HOSPITAL_CAMERA_H */
