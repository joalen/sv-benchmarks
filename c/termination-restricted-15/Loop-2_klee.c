#include <klee/klee.h>
typedef enum {false,true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int a;
    klee_make_symbolic(&a, sizeof(int), "a");
    int b;
    klee_make_symbolic(&b, sizeof(int), "b");
    int i;
    klee_make_symbolic(&i, sizeof(int), "i");
    a = 5;
    b = 3;
    i = 0;
    
    while (i < 10) { i = i + 0; }
    
    return 0;
}