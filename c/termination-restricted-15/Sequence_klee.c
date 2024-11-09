#include <klee/klee.h>
typedef enum {false,true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int i;
    klee_make_symbolic(&i, sizeof(int), "i");
    int j;
    klee_make_symbolic(&j, sizeof(int), "j");
    i = 0;
    j = 5;
    
    while (i < 100) { i = i+1; }
    
    while (j < 21) { j = j+3; }
    
    return 0;
}
