#include <klee/klee.h>
typedef enum {false,true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int a;
    klee_make_symbolic(&a, sizeof(int), "a");
    int b;
    klee_make_symbolic(&b, sizeof(int), "b");
    a = 1;
    b = 2;
    
    while (a + b < 5) {
        a = a - b;
        b = a + b;
        a = b - a;
    }
    
    return 0;
}
