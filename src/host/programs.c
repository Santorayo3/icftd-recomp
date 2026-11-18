/* The two engine builds, as the front end names them. See programs.h. */
#include "programs.h"
#include "../recomp/ant/ant_table.h"

const rc_program *host_program(int id)
{
    return id == HOST_PROGRAM_ANT ? &ant_engine : &rc_engine;
}
