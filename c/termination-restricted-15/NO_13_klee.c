#include <klee/klee.h>
typedef enum {false,true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int i;
    klee_make_symbolic(&i, sizeof(int), "i");
    int j;
    klee_make_symbolic(&j, sizeof(int), "j");
    j = 100;
    i = 0;
    
    while (i < j) {
        if (51 < j) { i = i+1; j = j-1; }
        else { i = i-1; j = j+1; }
    }
    
    return 0;
}