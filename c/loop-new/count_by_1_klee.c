#include <klee/klee.h>
#include "assert.h"

int main() {
    int i;
    klee_make_symbolic(&i, sizeof(int), "i");
    for (i = 0; i < LARGE_INT; i++) ;
    __VERIFIER_assert(i == LARGE_INT);
    return 0;
}
