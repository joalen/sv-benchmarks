/* Contributed by: Vladimír Štill, https://divine.fi.muni.cz
   Description: A pthread-based barrier test.
*/

#include "one_time_barrier.h"

#define CNT 2
#define ONE_TIME
#include <klee/klee.h>
#include "barrier_test.h"
