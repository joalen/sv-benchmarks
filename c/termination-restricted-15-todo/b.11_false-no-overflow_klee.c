#include <klee/klee.h>
typedef enum {false, true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int c;
    klee_make_symbolic(&c, sizeof(int), "c");
    int x, y;
    x = __VERIFIER_nondet_int();
    y = __VERIFIER_nondet_int();
    c = 0;
    while (x + y > 0) {
        if (x > y) {
            x = x - 1;
        } else {
            if (x == y) {
                x = x - 1;
            } else {
                y = y - 1;
            }
        }
        c = c + 1;
    }
    return 0;
}
