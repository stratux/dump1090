#ifndef CLOCK_NANOSLEEP_H
#define CLOCK_NANOSLEEP_H

#include <time.h>

#ifndef CLOCK_REALTIME
typedef enum
{
    CLOCK_REALTIME,
    CLOCK_MONOTONIC,
    CLOCK_PROCESS_CPUTIME_ID,
    CLOCK_THREAD_CPUTIME_ID
} clockid_t;
#endif //CLOCK_REALTIME

#ifndef TIMER_ABSTIME
#define TIMER_ABSTIME 1
#endif // TIMER_ABSTIME

struct timespec;

int clock_nanosleep (clockid_t id, int flags, const struct timespec *ts,
                     struct timespec *ots);

#endif //CLOCK_NANOSLEEP_H
