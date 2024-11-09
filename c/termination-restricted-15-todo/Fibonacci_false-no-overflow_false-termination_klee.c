#include <klee/klee.h>
typedef enum {false,true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int n;
    int i;
    klee_make_symbolic(&i, sizeof(int), "i");
    int j;
    klee_make_symbolic(&j, sizeof(int), "j");
    int t;
    klee_make_symbolic(&t, sizeof(int), "t");
    n = __VERIFIER_nondet_int();
    i = 0;
    j = 1;
    t = 0;
    
    while (j != n) {
        t = j+i;
        i = j;
        j = t;
    }
	
    return 0;
}
