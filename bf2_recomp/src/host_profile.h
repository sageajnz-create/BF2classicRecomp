#ifndef BF2_HOST_PROFILE_H
#define BF2_HOST_PROFILE_H

/* Sampling profiler for the thread that runs guest code. Both are no-ops
 * unless RECOMP_HOST_PROFILE is set. */
void host_profile_start(void);
void host_profile_report(void);

#endif
