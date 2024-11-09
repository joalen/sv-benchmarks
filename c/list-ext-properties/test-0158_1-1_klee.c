extern void abort(void);
#include <assert.h>
void reach_error() { assert(0); }

#include <klee/klee.h>
#include <stdlib.h>

extern int __VERIFIER_nondet_int(void);

int main()
{
    union {
        void *p0;

        struct {
            char c[2];
    klee_make_symbolic(c, sizeof(char)*2, "c");
            int p1;
    klee_make_symbolic(&p1, sizeof(int), "p1");
            int p2;
    klee_make_symbolic(&p2, sizeof(int), "p2");
        } str;
    } data;

    // alloc 37B on heap
    data.p0 = malloc(37U);

    // this should be fine
    if(__VERIFIER_nondet_int()) {
      data.str.p2 = 20;
    } else {
      data.str.p2 = 30;
    }
    
    if(20 > data.str.p2) {
       // this introduces a memleak, but dead branch
       data.str.c[1] = sizeof data.str.p1;
    }

    // valid free()
    free(data.p0);

    return 0;
}
