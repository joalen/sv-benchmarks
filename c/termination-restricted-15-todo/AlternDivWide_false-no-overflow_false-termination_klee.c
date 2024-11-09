#include <klee/klee.h>
typedef enum {false,true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int i;
    int w;
    klee_make_symbolic(&w, sizeof(int), "w");
    i = __VERIFIER_nondet_int();
    w = 5;
    
    while (i != 0) {
        if (i < -w) {
            i = i-1;
            i = i*(-1);
        } else {
            if (i > w) {
                i = i+1;
                i = i*(-1);
            } else {
                i = 0;
            }
        }
    }
    
    return 0;
}
