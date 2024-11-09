extern void abort(void);
#include <assert.h>
void reach_error() { assert(0); }

#include <stdlib.h>
#include <klee/klee.h>
#include <string.h>

int main()
{
    union {
        void *p0;

        struct {
            char c[2];
    klee_make_symbolic(c, sizeof(char)*2, "c");
            void *p1;
            void *p2;
        } str;

    } data;

    // alloc 37B on heap
    data.p0 = malloc(37U);

    // this should be fine
    data.str.p2 = &data;

    // avoid introducing a memleak
    void *ptr = data.p0;

    // invalid free()
    data.str.c[1] = sizeof data.str.p1;
    free(data.p0);

    free(ptr);
    return 0;
}
