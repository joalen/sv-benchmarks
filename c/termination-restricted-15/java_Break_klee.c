#include <klee/klee.h>
typedef enum {false, true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int i;
    klee_make_symbolic(&i, sizeof(int), "i");
    int c;
    klee_make_symbolic(&c, sizeof(int), "c");
    i = 0;
    c = 0;
    while (i <= 10) {
        i = i + 1;
        c = c + 1;
    }
    return 0;
}
