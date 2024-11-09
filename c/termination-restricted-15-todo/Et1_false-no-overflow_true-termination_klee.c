#include <klee/klee.h>
typedef enum {false,true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int a;
    klee_make_symbolic(&a, sizeof(int), "a");
    int b;
    klee_make_symbolic(&b, sizeof(int), "b");
    a = - __VERIFIER_nondet_int();
    b = - __VERIFIER_nondet_int();
    
    while (a > b) {
        b = b + a;
        a = a + 1;
    }
    
    return 0;
}
